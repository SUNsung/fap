
        
        
    {#if GOOGLE_CUDA
// A special GPU kernel for int32.
// TODO(b/25387198): Also enable int32 in device memory. This kernel
// registration requires all int32 inputs and outputs to be in host memory.
REGISTER_KERNEL_BUILDER(Name('Mod')
                            .Device(DEVICE_GPU)
                            .HostMemory('x')
                            .HostMemory('y')
                            .HostMemory('z')
                            .TypeConstraint<int32>('T'),
                        BinaryOp<CPUDevice, functor::safe_mod<int32>>);
REGISTER_KERNEL_BUILDER(Name('TruncateMod')
                            .Device(DEVICE_GPU)
                            .HostMemory('x')
                            .HostMemory('y')
                            .HostMemory('z')
                            .TypeConstraint<int32>('T'),
                        BinaryOp<CPUDevice, functor::safe_mod<int32>>);
#endif
}  // namespace tensorflow

    
    #include 'tensorflow/core/lib/gtl/array_slice.h'
#include 'tensorflow/core/lib/gtl/inlined_vector.h'
    
      HloComputation::Builder builder(TestName());
  HloInstruction* param0 = builder.AddInstruction(
      HloInstruction::CreateParameter(0, input_shape, 'activiation'));
    
    template <typename T>
class ArgMaxOpModel : public ArgBaseOpModel<T> {
 public:
  ArgMaxOpModel(std::initializer_list<int> input_shape, TensorType input_type,
                TensorType output_type, TensorType index_output_type)
      : ArgBaseOpModel<T>(input_shape, input_type, output_type,
                          index_output_type) {
    ArgBaseOpModel<T>::SetBuiltinOp(
        BuiltinOperator_ARG_MAX, BuiltinOptions_ArgMaxOptions,
        CreateArgMaxOptions(ArgBaseOpModel<T>::builder_, index_output_type)
            .Union());
    ArgBaseOpModel<T>::BuildInterpreter({input_shape, {1, 1, 1, 1}});
  }
};
    
      // Compute the intersection with another slice and if 'result' is not
  // nullptr, store the results in *result; returns true if there is any real
  // intersection.
  bool Intersect(const TensorSlice& other, TensorSlice* result) const;
  // A short hand.
  bool Overlaps(const TensorSlice& other) const {
    return Intersect(other, nullptr);
  }
    
    // REGISTER_OP_GRADIENT('Prod', ProdGrad);
// REGISTER_OP_GRADIENT('SegmentSum', SegmentSumGrad);
// REGISTER_OP_GRADIENT('SegmentMean', SegmentMeanGrad);
// REGISTER_OP_GRADIENT('SparseSegmentSum', SparseSegmentSumGrad);
// REGISTER_OP_GRADIENT('SparseSegmentMean', SparseSegmentMeanGrad);
// REGISTER_OP_GRADIENT('SparseSegmentSqrtN', SparseSegmentSqrtNGrad);
// REGISTER_OP_GRADIENT('SegmentMin', SegmentMinGrad);
// REGISTER_OP_GRADIENT('SegmentMax', SegmentMaxGrad);
// REGISTER_OP_GRADIENT('UnsortedSegmentSum', UnsortedSegmentSumGrad);
// REGISTER_OP_GRADIENT('UnsortedSegmentMax', UnsortedSegmentMaxGrad);
    
    #include 'db/filename.h'
#include 'db/dbformat.h'
#include 'db/table_cache.h'
#include 'db/version_edit.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
    
    namespace leveldb {
    }
    
      ValueType value_type = kTypeDeletion;
  if (iter_->Valid()) {
    do {
      ParsedInternalKey ikey;
      if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
        if ((value_type != kTypeDeletion) &&
            user_comparator_->Compare(ikey.user_key, saved_key_) < 0) {
          // We encountered a non-deleted value in entries for previous keys,
          break;
        }
        value_type = ikey.type;
        if (value_type == kTypeDeletion) {
          saved_key_.clear();
          ClearSavedValue();
        } else {
          Slice raw_value = iter_->value();
          if (saved_value_.capacity() > raw_value.size() + 1048576) {
            std::string empty;
            swap(empty, saved_value_);
          }
          SaveKey(ExtractUserKey(iter_->key()), &saved_key_);
          saved_value_.assign(raw_value.data(), raw_value.size());
        }
      }
      iter_->Prev();
    } while (iter_->Valid());
  }
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
    #include <stdio.h>
#include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
    // Make the CURRENT file point to the descriptor file with the
// specified number.
extern Status SetCurrentFile(Env* env, const std::string& dbname,
                             uint64_t descriptor_number);
    
    Status TableCache::FindTable(uint64_t file_number, uint64_t file_size,
                             Cache::Handle** handle) {
  Status s;
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  Slice key(buf, sizeof(buf));
  *handle = cache_->Lookup(key);
  if (*handle == NULL) {
    std::string fname = TableFileName(dbname_, file_number);
    RandomAccessFile* file = NULL;
    Table* table = NULL;
    s = env_->NewRandomAccessFile(fname, &file);
    if (!s.ok()) {
      std::string old_fname = SSTTableFileName(dbname_, file_number);
      if (env_->NewRandomAccessFile(old_fname, &file).ok()) {
        s = Status::OK();
      }
    }
    if (s.ok()) {
      s = Table::Open(*options_, file, file_size, &table);
    }
    }
    }
    
    #include 'db/memtable.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
    #include 'test/cpp/qps/report.h'
    
    /* Writes request data from |buffer| of |buffer_length| length. If auto flush is
 * disabled, data will be sent only after bidirectional_stream_flush() is
 * called.
 * Each call will result in an invocation the callback's on_write_completed()
 * method if data is sent, or its on_failed() method if there's an error.
 * The callback's on_succeeded() method is also invoked if |end_of_stream| is
 * set and all response data has been read.
 */
GRPC_SUPPORT_EXPORT
int bidirectional_stream_write(bidirectional_stream* stream,
                               const char* buffer,
                               int buffer_length,
                               bool end_of_stream);
    
    namespace grpc {
namespace testing {
    }
    }
    
    // A simple parser for the json db file. It requires the db file to have the
// exact form of [{'location': { 'latitude': 123, 'longitude': 456}, 'name':
// 'the name can be empty' }, { ... } ... The spaces will be stripped.
class Parser {
 public:
  explicit Parser(const std::string& db) : db_(db) {
    // Remove all spaces.
    db_.erase(
        std::remove_if(db_.begin(), db_.end(), isspace),
        db_.end());
    if (!Match('[')) {
      SetFailedAndReturnFalse();
    }
  }
    }
    
    #include 'src/compiler/config.h'
#include 'src/compiler/schema_interface.h'
    
    UsageTimer::Result UsageTimer::Sample() {
  Result r;
  r.wall = Now();
  get_resource_usage(&r.user, &r.system);
  r.total_cpu_time = 0;
  r.idle_cpu_time = 0;
  get_cpu_usage(&r.total_cpu_time, &r.idle_cpu_time);
  return r;
}
    
      // Create a QpsGauge with name 'name'. is_present is set to true if the Gauge
  // is already present in the map.
  // NOTE: CreateQpsGauge can be called anytime (i.e before or after calling
  // StartServer).
  std::shared_ptr<QpsGauge> CreateQpsGauge(const grpc::string& name,
                                           bool* already_present);
    
    void CoreStatsToProto(const grpc_stats_data& core, Stats* proto) {
  for (int i = 0; i < GRPC_STATS_COUNTER_COUNT; i++) {
    Metric* m = proto->add_metrics();
    m->set_name(grpc_stats_counter_name[i]);
    m->set_count(core.counters[i]);
  }
  for (int i = 0; i < GRPC_STATS_HISTOGRAM_COUNT; i++) {
    Metric* m = proto->add_metrics();
    m->set_name(grpc_stats_histogram_name[i]);
    Histogram* h = m->mutable_histogram();
    for (int j = 0; j < grpc_stats_histo_buckets[i]; j++) {
      Bucket* b = h->add_buckets();
      b->set_start(grpc_stats_histo_bucket_boundaries[i][j]);
      b->set_count(core.histograms[grpc_stats_histo_start[i] + j]);
    }
  }
}
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    namespace leveldb {
    }
    
    void BlockBuilder::Reset() {
  buffer_.clear();
  restarts_.clear();
  restarts_.push_back(0);       // First restart point is at offset 0
  counter_ = 0;
  finished_ = false;
  last_key_.clear();
}
    
    
    { private:
  const FilterPolicy* policy_;
  const char* data_;    // Pointer to filter data (at block-start)
  const char* offset_;  // Pointer to beginning of offset array (at block-end)
  size_t num_;          // Number of entries in offset array
  size_t base_lg_;      // Encoding parameter (see kFilterBaseLg in .cc file)
};
    
    
    {}  // namespace leveldb
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    static void Usage() {
  fprintf(
      stderr,
      'Usage: leveldbutil command...\n'
      '   dump files...         -- dump contents of specified files\n'
      );
}
    
    // Returns the next Huffman-coded symbol.
int ReadSymbol(const HuffmanTableEntry* table, BitReaderState* br) {
  int nbits;
  br->FillBitWindow();
  int val = (br->val_ >> (br->bits_left_ - 8)) & 0xff;
  table += val;
  nbits = table->bits - 8;
  if (nbits > 0) {
    br->bits_left_ -= 8;
    table += table->value;
    val = (br->val_ >> (br->bits_left_ - nbits)) & ((1 << nbits) - 1);
    table += val;
  }
  br->bits_left_ -= table->bits;
  return table->value;
}
    
    size_t EstimateJpegDataSize(const int num_components,
                            const std::vector<JpegHistogram>& histograms) {
  assert(histograms.size() == 2 * num_components);
  std::vector<JpegHistogram> clustered = histograms;
  size_t num_dc = num_components;
  size_t num_ac = num_components;
  int indexes[kMaxComponents];
  uint8_t depth[kMaxComponents * JpegHistogram::kSize];
  return (ClusterHistograms(&clustered[0], &num_dc, indexes, depth) +
          ClusterHistograms(&clustered[num_components], &num_ac, indexes,
                            depth));
}
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    #include <stddef.h>
#include <stdint.h>
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);