
        
        namespace leveldb {
    }
    
     private:
  void FindNextUserEntry(bool skipping, std::string* skip);
  void FindPrevUserEntry();
  bool ParseKey(ParsedInternalKey* key);
    
      ASSERT_TRUE(ParseInternalKey(in, &decoded));
  ASSERT_EQ(key, decoded.user_key.ToString());
  ASSERT_EQ(seq, decoded.sequence);
  ASSERT_EQ(vt, decoded.type);
    
    // Notified when log reader encounters corruption.
class CorruptionReporter : public log::Reader::Reporter {
 public:
  WritableFile* dst_;
  virtual void Corruption(size_t bytes, const Status& status) {
    std::string r = 'corruption: ';
    AppendNumberTo(&r, bytes);
    r += ' bytes; ';
    r += status.ToString();
    r.push_back('\n');
    dst_->Append(r);
  }
};
    
    static std::string MakeFileName(const std::string& name, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return name + buf;
}
    
    void WriteBatchInternal::SetCount(WriteBatch* b, int n) {
  EncodeFixed32(&b->rep_[8], n);
}
    
    #include 'leveldb/db.h'
    
    
    {    done_++;
    if (done_ >= next_report_) {
      if      (next_report_ < 1000)   next_report_ += 100;
      else if (next_report_ < 5000)   next_report_ += 500;
      else if (next_report_ < 10000)  next_report_ += 1000;
      else if (next_report_ < 50000)  next_report_ += 5000;
      else if (next_report_ < 100000) next_report_ += 10000;
      else if (next_report_ < 500000) next_report_ += 50000;
      else                            next_report_ += 100000;
      fprintf(stderr, '... finished %d ops%30s\r', done_, '');
      fflush(stderr);
    }
  }
    
    
    {  leveldb::Benchmark benchmark;
  benchmark.Run();
  return 0;
}

    
    namespace leveldb {
    }
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    #define REGISTER_LAYER_CLASS(type)                                             \
  template <typename Dtype>                                                    \
  shared_ptr<Layer<Dtype> > Creator_##type##Layer(const LayerParameter& param) \
  {                                                                            \
    return shared_ptr<Layer<Dtype> >(new type##Layer<Dtype>(param));           \
  }                                                                            \
  REGISTER_LAYER_CREATOR(type, Creator_##type##Layer)
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
      virtual inline const char* type() const { return 'Eltwise'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      virtual inline const char* type() const { return 'ELU'; }
    
      virtual inline const char* type() const { return 'Exp'; }
    
    
    {  // Gate weight arrays of size [na + 1, no].
  WeightMatrix gate_weights_[WT_COUNT];
  // Used only if this is a softmax LSTM.
  FullyConnected* softmax_;
  // Input padded with previous output of size [width, na].
  NetworkIO source_;
  // Internal state used during forward operation, of size [width, ns].
  NetworkIO state_;
  // State of the 2-d maxpool, generated during forward, used during backward.
  GENERIC_2D_ARRAY<int8_t> which_fg_;
  // Internal state saved from forward, but used only during backward.
  NetworkIO node_values_[WT_COUNT];
  // Preserved input stride_map used for Backward when NT_LSTM_SQUASHED.
  StrideMap input_map_;
  int input_width_;
};
    
    void ResultIterator::AppendUTF8WordText(STRING *text) const {
  if (!it_->word()) return;
  ASSERT_HOST(it_->word()->best_choice != nullptr);
  bool reading_direction_is_ltr =
      current_paragraph_is_ltr_ ^ in_minor_direction_;
  if (at_beginning_of_minor_run_) {
    *text += reading_direction_is_ltr ? kLRM : kRLM;
  }
    }
    
      // Writes to the given file. Returns false in case of error.
  bool Serialize(FILE* fp) const;
  // Reads from the given file. Returns false in case of error.
  // If swap is true, assumes a big/little-endian swap is needed.
  bool DeSerialize(bool swap, FILE* fp);
    
      // Accessors.
  bool is_int_mode() const {
    return int_mode_;
  }
  int NumOutputs() const { return int_mode_ ? wi_.dim1() : wf_.dim1(); }
  // Provides one set of weights. Only used by peep weight maxpool.
  const double* GetWeights(int index) const { return wf_[index]; }
  // Provides access to the deltas (dw_).
  double GetDW(int i, int j) const { return dw_(i, j); }
    
      // This method resolves the cc bbox to a particular row and returns the row's
  // xheight. This uses block_list_ if available, else just returns the
  // global_xheight_ estimate currently set in the object.
  int GetXheightForCC(Box* cc_bbox);
    
    /*
XXH32() :
    Calculate the 32-bits hash of sequence of length 'len' stored at memory address 'input'.
    The memory between input & input+len must be valid (allocated and read-accessible).
    'seed' can be used to alter the result predictably.
    This function successfully passes all SMHasher tests.
    Speed on Core 2 Duo @ 3 GHz (single thread, SMHasher benchmark) : 5.4 GB/s
    Note that 'len' is type 'int', which means it is limited to 2^31-1.
    If your data is larger, use the advanced functions below.
*/
    
    class StringAppendTESTOperator : public MergeOperator {
 public:
  // Constructor with delimiter
  explicit StringAppendTESTOperator(char delim_char);
    }
    
     public: // Delete / Remove / Pop / Trim
  /// Trim (list: key) so that it will only contain the indices from start..stop
  /// Returns true on success
  /// May throw RedisListException
  bool Trim(const std::string& key, int32_t start, int32_t stop);
    
    namespace rocksdb {
    }
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };
    
    void SyncPoint::ClearAllCallBacks() {
  impl_->ClearAllCallBacks();
}
    
    #include <jni.h>
#include <memory>
#include <string>
#include 'rocksjni/jnicallback.h'
#include 'port/port.h'
#include 'rocksdb/env.h'
    
      /**
   * COMPACTION_KEY_DROP_* count the reasons for key drop during compaction
   * There are 4 reasons currently.
   */
  COMPACTION_KEY_DROP_NEWER_ENTRY,  // key was written with a newer value.
                                    // Also includes keys dropped for range del.
  COMPACTION_KEY_DROP_OBSOLETE,     // The key is obsolete.
  COMPACTION_KEY_DROP_RANGE_DEL,    // key was covered by a range tombstone.
  COMPACTION_KEY_DROP_USER,  // user compaction function has dropped the key.
  COMPACTION_RANGE_DEL_DROP_OBSOLETE,  // all keys in range were deleted.
  // Deletions obsoleted before bottom level due to file gap optimization.
  COMPACTION_OPTIMIZED_DEL_DROP_OBSOLETE,
  // If a compaction was cancelled in sfm to prevent ENOSPC
  COMPACTION_CANCELLED,