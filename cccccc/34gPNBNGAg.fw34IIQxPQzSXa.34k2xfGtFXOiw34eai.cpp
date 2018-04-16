
        
        namespace tensorflow {
namespace port {
    }
    }
    
    
    {  // Invalid names.
  EXPECT_FALSE(IsSameAddrSp('random_invalid_target', 'random_invalid_target'));
  EXPECT_FALSE(IsSameAddrSp('/job:/replica:10/task:10/cpu:0',
                            '/job:/replica:10/task:10/cpu:1'));
  EXPECT_FALSE(IsSameAddrSp('/job:mnist/replica:xx/task:10/cpu:0',
                            '/job:mnist/replica:xx/task:10/cpu:1'));
  EXPECT_FALSE(IsSameAddrSp('/job:mnist/replica:10/task:yy/cpu:0',
                            '/job:mnist/replica:10/task:yy/cpu:1'));
}
    
    int main(int argc, char** argv) {
  FLAGS_alsologtostderr = 1;
    }
    
      FLAGS_alsologtostderr = 1;
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
    #include <vector>
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    /**
 * @brief Computes @f$ y = x + \log(1 + \exp(-x)) @f$ if @f$ x > 0 @f$;
 *        @f$ y = \log(1 + \exp(x)) @f$ otherwise.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$
 *      y = \left\{
 *         \begin{array}{ll}
 *            x + \log(1 + \exp(-x)) & \mbox{if } x > 0 \\
 *            \log(1 + \exp(x)) & \mbox{otherwise}
 *         \end{array} \right.
 *      @f$
 */
template <typename Dtype>
class BNLLLayer : public NeuronLayer<Dtype> {
 public:
  explicit BNLLLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
      /// Get the native acceptor representation.
  /**
   * This function may be used to obtain the underlying representation of the
   * acceptor. This is intended to allow access to native acceptor functionality
   * that is not otherwise provided.
   */
  native_handle_type native_handle()
  {
    return this->get_service().native_handle(this->get_implementation());
  }
    
    /// Create a new modifiable buffer that is offset from the start of another.
/**
 * @relates mutable_buffer
 */
inline mutable_buffer operator+(const mutable_buffer& b, std::size_t start)
{
  if (start > buffer_size(b))
    return mutable_buffer();
  char* new_data = buffer_cast<char*>(b) + start;
  std::size_t new_size = buffer_size(b) - start;
  return mutable_buffer(new_data, new_size
#if defined(BOOST_ASIO_ENABLE_BUFFER_DEBUGGING)
      , b.get_debug_check()
#endif // BOOST_ASIO_ENABLE_BUFFER_DEBUGGING
      );
}
    
      /// Start an asynchronous read. The buffer into which the data will be read
  /// must be valid for the lifetime of the asynchronous operation.
  template <typename MutableBufferSequence, typename ReadHandler>
  BOOST_ASIO_INITFN_RESULT_TYPE(ReadHandler,
      void (boost::system::error_code, std::size_t))
  async_read_some(const MutableBufferSequence& buffers,
      BOOST_ASIO_MOVE_ARG(ReadHandler) handler);
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      STDMETHODIMP Buffer(byte** value)
  {
    *value = bytes_;
    return S_OK;
  }
    
        // Check if we need to run the operation again.
    if (ec == boost::asio::error::would_block
        || ec == boost::asio::error::try_again)
      return false;
    
      // Block on the /dev/poll descriptor.
  ::pollfd events[128] = { { 0, 0, 0 } };
  ::dvpoll dp = { 0, 0, 0 };
  dp.dp_fds = events;
  dp.dp_nfds = 128;
  dp.dp_timeout = timeout;
  int num_events = ::ioctl(dev_poll_fd_, DP_POLL, &dp);
    
      // Read sequentially.
  ASSERT_OK(env_->NewSequentialFile('/dir/f', &seq_file));
  ASSERT_OK(seq_file->Read(5, &result, scratch)); // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(seq_file->Skip(1));
  ASSERT_OK(seq_file->Read(1000, &result, scratch)); // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(seq_file->Read(1000, &result, scratch)); // Try reading past EOF.
  ASSERT_EQ(0, result.size());
  ASSERT_OK(seq_file->Skip(100)); // Try to skip past end of file.
  ASSERT_OK(seq_file->Read(1000, &result, scratch));
  ASSERT_EQ(0, result.size());
  delete seq_file;
    
      ReadOptions read_options;
  Iterator *iter = db->NewIterator(read_options);
    
      // Pick up four bytes at a time
  while (data + 4 <= limit) {
    uint32_t w = DecodeFixed32(data);
    data += 4;
    h += w;
    h *= m;
    h ^= (h >> 16);
  }
    
    
    {    // Compute (product % M) using the fact that ((x << 31) % M) == x.
    seed_ = static_cast<uint32_t>((product >> 31) + (product & M));
    // The first reduction may overflow by 1 bit, so we may need to
    // repeat.  mod == M is not possible; using > allows the faster
    // sign-bit-based test.
    if (seed_ > M) {
      seed_ -= M;
    }
    return seed_;
  }
  // Returns a uniformly distributed value in the range [0..n-1]
  // REQUIRES: n > 0
  uint32_t Uniform(int n) { return Next() % n; }
    
      uint64_t Size(const Slice& start, const Slice& limit) {
    Range r(start, limit);
    uint64_t size;
    db_->GetApproximateSizes(&r, 1, &size);
    return size;
  }
    
    void DBIter::SeekToFirst() {
  direction_ = kForward;
  ClearSavedValue();
  iter_->SeekToFirst();
  if (iter_->Valid()) {
    FindNextUserEntry(false, &saved_key_ /* temporary storage */);
  } else {
    valid_ = false;
  }
}
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
    extern JSClass  *jsb_cocos2d_Physics3DRigidBody_class;
extern JSObject *jsb_cocos2d_Physics3DRigidBody_prototype;
    
    
    
    
    
    
    
    
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJoint_setTag'', nullptr);
        return 0;
    }
#endif
    
    
    
        void DrawTitle(const char *string);
	virtual void Step(Settings* settings);
	virtual void Keyboard(unsigned char key) { B2_NOT_USED(key); }
	virtual void KeyboardUp(unsigned char key) { B2_NOT_USED(key); }
	void ShiftMouseDown(const b2Vec2& p);
	virtual bool MouseDown(const b2Vec2& p);
	virtual void MouseUp(const b2Vec2& p);
	void MouseMove(const b2Vec2& p);
	void LaunchBomb();
	void LaunchBomb(const b2Vec2& position, const b2Vec2& velocity);
	
	void SpawnBomb(const b2Vec2& worldPt);
	void CompleteBombSpawn(const b2Vec2& p);
    
    			m_shape1.SetAsBox(0.5f, 0.5f, b2Vec2(-0.5f, 0.0f), 0.0f);
			m_piece1 = m_body1->CreateFixture(&m_shape1, 1.0f);
    
    			m_body = m_world->CreateBody(&bd);
			m_body->CreateFixture(&box, 1.0f);
    
    static const uint8_t* kRangeLimit = kRangeLimitLut + 384;
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
    #endif  // GUETZLI_JPEG_HUFFMAN_DECODE_H_

    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    
    {} // namespace rocksdb

    
      SequentialFileReader* file() { return file_.get(); }
    
      if (!s.ok()) {
    ROCKS_LOG_ERROR(info_log_, 'Failed to mark %s as trash', file_path.c_str());
    s = env_->DeleteFile(file_path);
    if (s.ok()) {
      sst_file_manager_->OnDeleteFile(file_path);
    }
    return s;
  }
    
      // enable sync point processing (disabled on startup)
  void EnableProcessing();
    
      bool HasPositionHint() const { return PositionHint != std::numeric_limits<size_t>::max(); }
  size_t GetPositionHint() const {
    assert(HasPositionHint());
    return PositionHint;
  }
  void IncUseCount() { UseCount++; }
  void IncSuccessCount() { SuccessCount++; }
  size_t GetUseCount() const { return UseCount; }
  size_t GetSuccessCount() const {return SuccessCount; }
    
      if (Options.MaxLen == 0) {
    size_t MaxLen = 0;
    for (auto &U : InitialCorpus)
      MaxLen = std::max(U.size(), MaxLen);
    F->SetMaxInputLen(std::min(std::max(kMinDefaultLen, MaxLen), kMaxSaneLen));
  }
    
    #if defined(__has_include)
#if __has_include(<sanitizer / coverage_interface.h>)
#include <sanitizer/coverage_interface.h>
#endif
#if __has_include(<sanitizer / lsan_interface.h>)
#include <sanitizer/lsan_interface.h>
#endif
#endif
    
    struct Merger {
  std::vector<MergeFileInfo> Files;
  size_t NumFilesInFirstCorpus = 0;
  size_t FirstNotProcessedFile = 0;
  std::string LastFailure;
    }
    
    size_t MutationDispatcher::ApplyDictionaryEntry(uint8_t *Data, size_t Size,
                                                size_t MaxSize,
                                                DictionaryEntry &DE) {
  const Word &W = DE.GetW();
  bool UsePositionHint = DE.HasPositionHint() &&
                         DE.GetPositionHint() + W.size() < Size &&
                         Rand.RandBool();
  if (Rand.RandBool()) {  // Insert W.
    if (Size + W.size() > MaxSize) return 0;
    size_t Idx = UsePositionHint ? DE.GetPositionHint() : Rand(Size + 1);
    memmove(Data + Idx + W.size(), Data + Idx, Size - Idx);
    memcpy(Data + Idx, W.data(), W.size());
    Size += W.size();
  } else {  // Overwrite some bytes with W.
    if (W.size() > Size) return 0;
    size_t Idx = UsePositionHint ? DE.GetPositionHint() : Rand(Size - W.size());
    memcpy(Data + Idx, W.data(), W.size());
  }
  return Size;
}
    
      struct Mutator {
    size_t (MutationDispatcher::*Fn)(uint8_t *Data, size_t Size, size_t Max);
    const char *Name;
  };