
        
        #include <cstdlib>
#include <iostream>
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s16 q3, d4                                       \n\t'
            'vmovl.s16 q4, d5                                       \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vcvt.f32.s32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                     \n\t'
            'vadd.f32 q10, q8, q1                                     \n\t'
            'vst1.32 {d18-d19}, [%[dst1]]                             \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                             \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(s16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
                uint16x8_t v_mask0 = vorrq_u16(vceqq_s16(v_src0, v_maxval8), vceqq_s16(v_src0, v_minval8));
            uint16x8_t v_mask1 = vorrq_u16(vceqq_s16(v_src1, v_maxval8), vceqq_s16(v_src1, v_minval8));
    
    inline float32x2_t vrecp_f32(float32x2_t val)
{
    float32x2_t reciprocal = vrecpe_f32(val);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    return reciprocal;
}
    
    workspace.ResetWorkspace()
    
    MeasureInt64 RpcClientSentMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientSentMessagesPerRpcMeasureName,
                             'Number of messages sent per RPC', kCount);
  return measure;
}
    
      Status GetFileByName(ServerContext* context, const grpc::string& file_name,
                       reflection::v1alpha::ServerReflectionResponse* response);
    
    CreateThreadPoolFunc g_ctp_impl = CreateDefaultThreadPoolImpl;
    
    namespace {
    }
    
    void LoadDataStore::ReportStreamClosed(const grpc::string& hostname,
                                       const grpc::string& lb_id) {
  auto it_per_host_store = per_host_stores_.find(hostname);
  GPR_ASSERT(it_per_host_store != per_host_stores_.end());
  it_per_host_store->second.ReportStreamClosed(lb_id);
}
    
    void TimepointHR2Timespec(const high_resolution_clock::time_point& from,
                          gpr_timespec* to) {
  high_resolution_clock::duration deadline = from.time_since_epoch();
  seconds secs = duration_cast<seconds>(deadline);
  if (from == high_resolution_clock::time_point::max() ||
      secs.count() >= gpr_inf_future(GPR_CLOCK_REALTIME).tv_sec ||
      secs.count() < 0) {
    *to = gpr_inf_future(GPR_CLOCK_REALTIME);
    return;
  }
  nanoseconds nsecs = duration_cast<nanoseconds>(deadline - secs);
  to->tv_sec = static_cast<int64_t>(secs.count());
  to->tv_nsec = static_cast<int32_t>(nsecs.count());
  to->clock_type = GPR_CLOCK_REALTIME;
}
    
    
    {}  // namespace leveldb
    
      // Make multiple inputs so we need to compact.
  for (int i = 0; i < 2; i++) {
    Build(10);
    dbi->TEST_CompactMemTable();
    Corrupt(kTableFile, 100, 1);
    env_.SleepForMicroseconds(100000);
  }
  dbi->CompactRange(nullptr, nullptr);
    
     private:
  enum { kMaxHeight = 12 };
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-null, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or to nullptr if no Table object
  // underlies the returned iterator.  The returned '*tableptr' object is owned
  // by the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options, uint64_t file_number,
                        uint64_t file_size, Table** tableptr = nullptr);
    
      Iterator* NewConcatenatingIterator(const ReadOptions&, int level) const;
    
    
    {}  // namespace leveldb
    
      Options options;
  Options index_block_options;
  WritableFile* file;
  uint64_t offset;
  Status status;
  BlockBuilder data_block;
  BlockBuilder index_block;
  std::string last_key;
  int64_t num_entries;
  bool closed;  // Either Finish() or Abandon() has been called.
  FilterBlockBuilder* filter_block;
    
    void PopplerCache::put(PopplerCacheKey *key, PopplerCacheItem *item)
{
  int movingStartIndex = lastValidCacheIndex + 1;
  if (lastValidCacheIndex == cacheSize - 1) {
    delete keys[lastValidCacheIndex];
    delete items[lastValidCacheIndex];
    movingStartIndex = cacheSize - 1;
  } else {
    lastValidCacheIndex++;
  }
  for (int i = movingStartIndex; i > 0; i--) {
    keys[i] = keys[i - 1];
    items[i] = items[i - 1];
  }
  keys[0] = key;
  items[0] = item;
}
    
    
    {  private:
    XRef *xref;
    PopplerCache *cache;
};
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
    #ifndef Sound_H
#define Sound_H
    
    
    {  // create the temporary bitmap
  bitmap = new SplashBitmap(w, h, bitmapRowPad, colorMode, gTrue,
			    bitmapTopDown);
  splash = new Splash(bitmap, vectorAntialias,
		      transpGroup->origSplash->getScreen());
  if (isolated) {
    switch (colorMode) {
    case splashModeMono1:
    case splashModeMono8:
      color[0] = 0;
      break;
    case splashModeXBGR8:
      color[3] = 255;
    case splashModeRGB8:
    case splashModeBGR8:
      color[0] = color[1] = color[2] = 0;
      break;
#if SPLASH_CMYK
    case splashModeCMYK8:
      color[0] = color[1] = color[2] = color[3] = 0;
      break;
#endif
    default:
      // make gcc happy
      break;
    }
    splash->clear(color, 0);
  } else {
    splash->blitTransparent(transpGroup->origBitmap, tx, ty, 0, 0, w, h);
    splash->setInNonIsolatedGroup(transpGroup->origBitmap, tx, ty);
  }
  transpGroup->tBitmap = bitmap;
  state->shiftCTM(-tx, -ty);
  updateCTM(state, 0, 0, 0, 0, 0, 0);
}
    
      virtual bool Next(void) {
    // MxNet iterator is expected to return CPU-accessible memory
    if (::caffe::Caffe::mode() != ::caffe::Caffe::CPU) {
      ::caffe::Caffe::set_mode(::caffe::Caffe::CPU);
      CHECK_EQ(::caffe::Caffe::mode(), ::caffe::Caffe::CPU);
    }
    caffe_data_layer_->Forward(bottom_, top_);
    CHECK_GT(batch_size_, 0) << 'batch size must be greater than zero';
    CHECK_EQ(out_.batch_size, batch_size_) << 'Internal Error: batch size mismatch';
    }
    
      // override set_default
  inline FieldEntry<caffe::LayerParameter> &set_default(const std::string &value) {
    caffe::NetParameter net_param;
    if (!ReadProtoFromTextContent(value, &net_param))
      CHECK(false)<< 'Caffe Net Prototxt: ' << value << 'Initialized Failed';
    }
    
    namespace mxnet {
namespace engine {
    }
    }
    
      virtual bool Next(void) {
    if (!this->Next_()) return false;
    return true;
  }
    
      ~PrefetcherIter() {
    while (recycle_queue_.size() != 0) {
      DataBatch *batch = recycle_queue_.front();
      recycle_queue_.pop();
      delete batch;
    }
    delete out_;
    iter.Destroy();
  }