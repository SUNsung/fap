
        
            struct Margin {
        Margin() : left(0), right(0), top(0), bottom(0) {}
        Margin(size_t left_, size_t right_, size_t top_, size_t bottom_)
            : left(left_), right(right_), top(top_), bottom(bottom_) {}
    }
    
        accumulateSquareConstFunc funcs[16] =
    {
        accumulateSquareConst<0>,
        accumulateSquareConst<1>,
        accumulateSquareConst<2>,
        accumulateSquareConst<3>,
        accumulateSquareConst<4>,
        accumulateSquareConst<5>,
        accumulateSquareConst<6>,
        accumulateSquareConst<7>,
        accumulateSquareConst<8>,
        accumulateSquareConst<9>,
        accumulateSquareConst<10>,
        accumulateSquareConst<11>,
        accumulateSquareConst<12>,
        accumulateSquareConst<13>,
        accumulateSquareConst<14>,
        accumulateSquareConst<15>
    }, func = funcs[shift];
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        v_dst = vorrq_u8(v_src0, v_src1);
    }
    
    namespace {
    }
    
    #include 'common.hpp'
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const T * src1 = internal::getRowPtr(src1Base, src1Stride, i);
        T * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
            for ( ; j + 7 < size.width; j += 8)
        {
            internal::prefetch(sum + j);
            internal::prefetch(src + j);
    }
    
    
    {  // Number of 32 bit outputs held in each register.
  int num_outputs_per_register_;
  // Maximum number of registers that we will use to hold outputs.
  int max_output_registers_;
  // Number of 8 bit inputs in the inputs register.
  int num_inputs_per_register_;
  // Number of inputs in each weight group.
  int num_inputs_per_group_;
  // Number of groups of inputs to be broadcast.
  int num_input_groups_;
  // The weights matrix reorganized in whatever way suits this instance.
  std::vector<int8_t> shaped_w_;
  // A series of functions to compute a partial result.
  std::vector<PartialFunc> partial_funcs_;
};
    
    #ifndef DOCQUAL_H
#define DOCQUAL_H
    
    int orientation_and_script_detection(STRING& filename,
                                     OSResults*,
                                     tesseract::Tesseract*);
    
    /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
    #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    namespace tesseract {
  class Tesseract;
}
    
    Status DBImpl::TEST_CompactMemTable() {
  // nullptr batch means just wait for earlier writes to be done
  Status s = Write(WriteOptions(), nullptr);
  if (s.ok()) {
    // Wait until the compaction completes
    MutexLock l(&mutex_);
    while (imm_ != nullptr && bg_error_.ok()) {
      background_work_finished_signal_.Wait();
    }
    if (imm_ != nullptr) {
      s = bg_error_;
    }
  }
  return s;
}
    
    class DBImpl : public DB {
 public:
  DBImpl(const Options& options, const std::string& dbname);
  virtual ~DBImpl();
    }
    
    
    {      counter++;
      if (empty) {
        empty = false;
        t.meta.smallest.DecodeFrom(key);
      }
      t.meta.largest.DecodeFrom(key);
      if (parsed.sequence > t.max_sequence) {
        t.max_sequence = parsed.sequence;
      }
    }
    if (!iter->status().ok()) {
      status = iter->status();
    }
    delete iter;
    Log(options_.info_log, 'Table #%llu: %d entries %s',
        (unsigned long long) t.meta.number,
        counter,
        status.ToString().c_str());
    
    template<typename Key, class Comparator>
bool SkipList<Key,Comparator>::Contains(const Key& key) const {
  Node* x = FindGreaterOrEqual(key, nullptr);
  if (x != nullptr && Equal(key, x->key)) {
    return true;
  } else {
    return false;
  }
}