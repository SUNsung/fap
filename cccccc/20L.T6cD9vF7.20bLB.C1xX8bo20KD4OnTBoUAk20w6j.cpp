
        
        #else  // !defined(__AVX__)
// Implementation for avx capable archs.
#include <immintrin.h>
#include <cstdint>
#include 'dotproductavx.h'
    
    #endif  // TESSERACT_ARCH_DOTPRODUCTSSE_H_

    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
      // Computes matrix.vector v = Wu.
  // u is of size W.dim2() - 1 and the output v is of size W.dim1().
  // u is imagined to have an extra element at the end with value 1, to
  // implement the bias, but it doesn't actually have it.
  // Computes the base C++ implementation, if there are no partial_funcs_.
  // NOTE: The size of the input vector (u) must be padded using
  // RoundInputs above.
  // The input will be over-read to the extent of the padding. There are no
  // alignment requirements.
  void MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                       const GenericVector<double>& scales, const int8_t* u,
                       double* v) const;
    
    
    {}  // namespace tesseract.

    
      if (up_in_image.x() == 0.0F) {
    if (up_in_image.y() > 0.0F) {
      *orientation = ORIENTATION_PAGE_UP;
    } else {
      *orientation = ORIENTATION_PAGE_DOWN;
    }
  } else if (up_in_image.x() > 0.0F) {
    *orientation = ORIENTATION_PAGE_RIGHT;
  } else {
    *orientation = ORIENTATION_PAGE_LEFT;
  }
    
    
    {}  // namespace tesseract.

    
    // Getter for the description.
const char* ParamContent::GetDescription() const {
  if (param_type_ == VT_INTEGER) { return iIt->info_str(); }
  else if (param_type_ == VT_BOOLEAN) { return bIt->info_str(); }
  else if (param_type_ == VT_DOUBLE) { return dIt->info_str(); }
  else if (param_type_ == VT_STRING) { return sIt->info_str(); }
  else return nullptr;
}
    
    TEST(CorruptionTest, CompactionInputError) {
  Build(10);
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
  dbi->TEST_CompactMemTable();
  const int last = config::kMaxMemCompactLevel;
  ASSERT_EQ(1, Property('leveldb.num-files-at-level' + NumberToString(last)));
    }
    
        if (!drop) {
      // Open output file if necessary
      if (compact->builder == nullptr) {
        status = OpenCompactionOutputFile(compact);
        if (!status.ok()) {
          break;
        }
      }
      if (compact->builder->NumEntries() == 0) {
        compact->current_output()->smallest.DecodeFrom(key);
      }
      compact->current_output()->largest.DecodeFrom(key);
      compact->builder->Add(key, input->value());
    }
    
    class DBImpl;
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
    
    {}  // namespace leveldb

    
    #endif  // STORAGE_LEVELDB_DB_MEMTABLE_H_

    
      // Accessors/mutators for links.  Wrapped in methods so we can
  // add the appropriate barriers as necessary.
  Node* Next(int n) {
    assert(n >= 0);
    // Use an 'acquire load' so that we observe a fully initialized
    // version of the returned Node.
    return reinterpret_cast<Node*>(next_[n].Acquire_Load());
  }
  void SetNext(int n, Node* x) {
    assert(n >= 0);
    // Use a 'release store' so that anybody who reads through this
    // pointer observes a fully initialized version of the inserted node.
    next_[n].Release_Store(x);
  }
    
    
    {        state.PauseTiming();
        delete f;
        delete j;
        state.ResumeTiming();
    }
    
    #define CHECK_FLOAT_EQ(a, b, eps) CHECK(std::fabs((a) - (b)) <  (eps))
#define CHECK_FLOAT_NE(a, b, eps) CHECK(std::fabs((a) - (b)) >= (eps))
#define CHECK_FLOAT_GE(a, b, eps) CHECK((a) - (b) > -(eps))
#define CHECK_FLOAT_LE(a, b, eps) CHECK((b) - (a) > -(eps))
#define CHECK_FLOAT_GT(a, b, eps) CHECK((a) - (b) >  (eps))
#define CHECK_FLOAT_LT(a, b, eps) CHECK((b) - (a) >  (eps))
    
    
    {  return result;
}
    
      const auto max_digits10 = std::numeric_limits<decltype (value)>::max_digits10;
  const auto max_fractional_digits10 = max_digits10 - 1;