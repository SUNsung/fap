
        
          // Publish metadata about the debugged Session::Run() call.
  //
  // See the doc string of DebuggerStateInterface::PublishDebugMetadata() for
  // details.
  Status PublishDebugMetadata(const int64 global_step,
                              const int64 session_run_count,
                              const int64 executor_step_count,
                              const std::vector<string>& input_names,
                              const std::vector<string>& output_names,
                              const std::vector<string>& target_names) override;
    
      CancellationManager* cancellation_manager;
  partial_run_mgr_.FindOrCreate(step_id, &cancellation_manager);
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    TEST_F(NodeDefBuilderTest, NIntsOutDefault) {
  Op(OpDefBuilder('NIntsOutDefault')
         .Output('a: N*int32')
         .Attr('N: int >= 2 = 3'));
    }
    
        // Find node in graph with that name.
    auto iter = name_index->find(id.first);
    if (iter == name_index->end()) {
      return errors::NotFound('FetchOutputs node ', t, ': not found');
    }
    Node* n = iter->second;
    DCHECK_EQ(n->name(), id.first);
    VLOG(2) << 'Found fetch node for ' << t;
    
    // ---------------------------------------------------------------------------
// Inline implementation
// ---------------------------------------------------------------------------
template <PrefetchHint hint>
inline void prefetch(const void* x) {
// Check of COMPILER_GCC macro below is kept only for backward-compatibility
// reasons. COMPILER_GCC3 is the macro that actually enables prefetch.
#if defined(__llvm__) || defined(COMPILER_GCC) || defined(COMPILER_GCC3)
  __builtin_prefetch(x, 0, hint);
#else
// You get no effect.  Feel free to add more sections above.
#endif
}
    
    
    {}  // namespace xla

    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // Loads JPEG file from a jpeg_decoder_stream.
  unsigned char *decompress_jpeg_image_from_stream(jpeg_decoder_stream *pStream, int *width, int *height, int *actual_comps, int req_comps);
    
    ogg_int64_t oc_bexp64(ogg_int64_t _z);
ogg_int64_t oc_blog64(ogg_int64_t _w);
    
        2,{0,128,  8,33,  4,16,70,  2,6,12,  23,46,90},
    
    /* Segher was off (too high) by ~ .3 decibel.  Center the conversion correctly. */
static inline float todB(const float *x){
  union {
    ogg_uint32_t i;
    float f;
  } ix;
  ix.f = *x;
  ix.i = ix.i&0x7fffffff;
  return (float)(ix.i * 7.17711438e-7f -764.6161886f);
}
    
    #  ifndef BF_LONG_LOG2
#   define BF_LONG_LOG2  2      /* default to BF_LONG being 32 bits */
#  endif
#  define BF_M  (0xFF<<BF_LONG_LOG2)
#  define BF_0  (24-BF_LONG_LOG2)
#  define BF_1  (16-BF_LONG_LOG2)
#  define BF_2  ( 8-BF_LONG_LOG2)
#  define BF_3  BF_LONG_LOG2    /* left shift */
    
    
    
      PeerConnection* getPeerConnection() const { return peerConnection_; }
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
      int64_t offset_;
    
    
    {  return false;
}
    
      AnnounceTier(std::deque<std::string> urls);
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }