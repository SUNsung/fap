
        
          /**
   * @brief Set the data_ shared_ptr to point to the SyncedMemory holding the
   *        data_ of Blob other -- useful in Layer%s which simply perform a copy
   *        in their Forward pass.
   *
   * This deallocates the SyncedMemory holding this Blob's data_, as
   * shared_ptr calls its destructor when reset with the '=' operator.
   */
  void ShareData(const Blob& other);
  /**
   * @brief Set the diff_ shared_ptr to point to the SyncedMemory holding the
   *        diff_ of Blob other -- useful in Layer%s which simply perform a copy
   *        in their Forward pass.
   *
   * This deallocates the SyncedMemory holding this Blob's diff_, as
   * shared_ptr calls its destructor when reset with the '=' operator.
   */
  void ShareDiff(const Blob& other);
    
    A common use case is with the DeconvolutionLayer acting as upsampling.
You can upsample a feature map with shape of (B, C, H, W) by any integer factor
using the following proto.
\code
layer {
  name: 'upsample', type: 'Deconvolution'
  bottom: '{{bottom_name}}' top: '{{top_name}}'
  convolution_param {
    kernel_size: {{2 * factor - factor % 2}} stride: {{factor}}
    num_output: {{C}} group: {{C}}
    pad: {{ceil((factor - 1) / 2.)}}
    weight_filler: { type: 'bilinear' } bias_term: false
  }
  param { lr_mult: 0 decay_mult: 0 }
}
\endcode
Please use this by replacing `{{}}` with your values. By specifying
`num_output: {{C}} group: {{C}}`, it behaves as
channel-wise convolution. The filter shape of this deconvolution layer will be
(C, 1, K, K) where K is `kernel_size`, and this filler will set a (K, K)
interpolation kernel for every channel of the filter identically. The resulting
shape of the top feature map will be (B, C, factor * H, factor * W).
Note that the learning rate and the
weight decay are set to 0 in order to keep coefficient values of bilinear
interpolation unchanged during training. If you apply this to an image, this
operation is equivalent to the following call in Python with Scikit.Image.
\code{.py}
out = skimage.transform.rescale(img, factor, mode='constant', cval=0)
\endcode
 */
template <typename Dtype>
class BilinearFiller : public Filler<Dtype> {
 public:
  explicit BilinearFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK_EQ(blob->num_axes(), 4) << 'Blob must be 4 dim.';
    CHECK_EQ(blob->width(), blob->height()) << 'Filter must be square';
    Dtype* data = blob->mutable_cpu_data();
    int f = ceil(blob->width() / 2.);
    Dtype c = (blob->width() - 1) / (2. * f);
    for (int i = 0; i < blob->count(); ++i) {
      Dtype x = i % blob->width();
      Dtype y = (i / blob->width()) % blob->height();
      data[i] = (1 - fabs(x / f - c)) * (1 - fabs(y / f - c));
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_CUDNN_POOLING_LAYER_HPP_

    
      // Returns true iff the test part failed.
  bool failed() const { return type_ != kSuccess; }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_DEATH_TEST_INTERNAL_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_DEATH_TEST_INTERNAL_H_
    
    // #ifdef __GNUC__ is too general here.  It is possible to use gcc without using
// libstdc++ (which is where cxxabi.h comes from).
# if GTEST_HAS_CXXABI_H_
#  include <cxxabi.h>
# elif defined(__HP_aCC)
#  include <acxx_demangle.h>
# endif  // GTEST_HASH_CXXABI_H_
    
      // Now, we have that n is odd and n >= 3.
    
    
// Tests Factorial().
    
    
    
    
    {		*a_ppaucEncodingBits = image.GetEncodingBits();
		*a_puiEncodingBitsBytes = image.GetEncodingBitsBytes();
		*a_puiExtendedWidth = image.GetExtendedWidth();
		*a_puiExtendedHeight = image.GetExtendedHeight();
		*a_piEncodingTime_ms = image.GetEncodingTimeMs();
	}
    
    		m_pimageSource = a_pimageSource;
		m_uiSourceH = a_uiSourceH;
		m_uiSourceV = a_uiSourceV;
		m_errormetric = a_errormetric;
    
    		Block4x4(void);
		~Block4x4();
		void InitFromSource(Image *a_pimageSource,
							unsigned int a_uiSourceH,
							unsigned int a_uiSourceV,
							unsigned char *a_paucEncodingBits,
							ErrorMetric a_errormetric);
    
    bool PointIsVertex(const IntPoint &Pt, OutPt *pp)
{
  OutPt *pp2 = pp;
  do
  {
    if (pp2->Pt == Pt) return true;
    pp2 = pp2->Next;
  }
  while (pp2 != pp);
  return false;
}
//------------------------------------------------------------------------------
    
    typedef opus_int16 opus_val16;
typedef opus_int32 opus_val32;
    
    #define MULT16_16SU(a,b) ((opus_val32)(opus_val16)(a)*(opus_val32)(opus_uint16)(b))
#define MULT32_32_Q31(a,b) ADD32(ADD32(SHL32(MULT16_16(SHR32((a),16),SHR((b),16)),1), SHR32(MULT16_16SU(SHR32((a),16),((b)&0x0000ffff)),15)), SHR32(MULT16_16SU(SHR32((b),16),((a)&0x0000ffff)),15))
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    // A utility routine: write 'data' to the named file and Sync() it.
Status WriteStringToFileSync(Env* env, const Slice& data,
                             const std::string& fname);
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
        // Copy data.
    Iterator* iter = NewTableIterator(t.meta);
    int counter = 0;
    for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
      builder->Add(iter->key(), iter->value());
      counter++;
    }
    delete iter;
    
     public:
  // Create a new SkipList object that will use 'cmp' for comparing keys,
  // and will allocate memory using '*arena'.  Objects allocated in the arena
  // must remain allocated for the lifetime of the skiplist object.
  explicit SkipList(Comparator cmp, Arena* arena);
    
        SnapshotImpl* snapshot = new SnapshotImpl(sequence_number);
    
    void TableCache::Evict(uint64_t file_number) {
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  cache_->Erase(Slice(buf, sizeof(buf)));
}
    
    int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ExtensionHandler> handler(new ExtensionHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ExtensionProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
    }
    
    
uint32_t InternalExtensionInfo::read(::apache::thrift::protocol::TProtocol* iprot) {
    }
    
      bool operator == (const InternalOptionInfo & rhs) const
  {
    if (!(value == rhs.value))
      return false;
    if (!(default_value == rhs.default_value))
      return false;
    if (!(type == rhs.type))
      return false;
    return true;
  }
  bool operator != (const InternalOptionInfo &rhs) const {
    return !(*this == rhs);
  }
    
    QueryData genKernelIntegrity(QueryContext &context) {
  QueryData results;
  Row r;
  std::string content;
  std::string text_segment_hash;
  std::string syscall_addr_modified;
    }
    
    #ifndef __NR_perf_event_open
#if defined(__PPC__)
#define __NR_perf_event_open 319
#elif defined(__i386__)
#define __NR_perf_event_open 336
#elif defined(__x86_64__)
#define __NR_perf_event_open 298
#else
#error __NR_perf_event_open must be defined
#endif
#endif
    
    Expected<int, PosixError> syscall(struct perf_event_attr* attr,
                                  pid_t pid,
                                  int cpu,
                                  int group_fd,
                                  unsigned long const flags);
    
    TEST_F(PerfOutputTests, move_constructor) {
  auto buf = std::array<char, 4>{};
  auto from_obj = ebpf::PerfOutput<TestMessage>{};
  from_obj.size_ = buf.size();
  from_obj.fd_ = 42;
  from_obj.data_ptr_ = static_cast<void*>(buf.data());
    }
    
      auto cpu_map_exp =
      ebpf::createMap<int, int, BPF_MAP_TYPE_PERF_EVENT_ARRAY>(cpu::kMaskSize);
  if (cpu_map_exp.isError()) {
    return createError(Error::SystemEbpf,
                       'failed to create eBPF map for {cpu -> perf} table',
                       cpu_map_exp.takeError());
  }
  auto cpu_map = cpu_map_exp.take();
    
        //
    // Overrides
    //
    virtual FiniteTimeAction* reverse() const override
    {
        CC_ASSERT(0);
        return nullptr;
    }
    virtual FiniteTimeAction* clone() const override
    {
        CC_ASSERT(0);
        return nullptr;
    }
    
    
    {    return false;
}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(ToggleVisibility);
};
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    /**
@brief Progress from a percentage to another percentage.
@since v0.99.1
*/
class CC_DLL ProgressFromTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with a duration, a 'from' percentage and a 'to' percentage.
     * @param duration Specify the duration of the ProgressFromTo action. It's a value in seconds.
     * @param fromPercentage Specify the source percentage.
     * @param toPercentage Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressFromTo action; otherwise, return nil.
     */
    static ProgressFromTo* create(float duration, float fromPercentage, float toPercentage);
    }
    
    void ActionTween::update(float dt)
{
    dynamic_cast<ActionTweenDelegate*>(_target)->updateTweenAction(_to  - _delta * (1 - dt), _key);
}
    
    
    {    CC_SAFE_RELEASE(_spriteFrame);
}
    
    /** @class AnimationFrame
 *
 * A frame of the animation. It contains information like:
 * - sprite frame name.
 * - # of delay units.
 * - offset
 
 @since v2.0
 */
class CC_DLL AnimationFrame : public Ref, public Clonable
{
public:
    /** @struct DisplayedEventInfo
     * When the animation display,Dispatches the event of UserData.
     */
    struct DisplayedEventInfo
    {
        Node* target;
        const ValueMap* userInfo;
    };
    
    /**
     * Creates the animation frame with a spriteframe, number of delay units and a notification user info.
     *
     * @param spriteFrame The animation frame with a spriteframe.
     * @param delayUnits Number of delay units.
     * @param userInfo A notification user info.
     * @since 3.0
     */
    static AnimationFrame* create(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo);
    /** Return a SpriteFrameName to be used.
     *
     * @return a SpriteFrameName to be used.
     */
    SpriteFrame* getSpriteFrame() const { return _spriteFrame; };
    /** Set the SpriteFrame.
     *
     * @param frame A SpriteFrame will be used.
     */
    void setSpriteFrame(SpriteFrame* frame)
    {
        CC_SAFE_RETAIN(frame);
        CC_SAFE_RELEASE(_spriteFrame);
        _spriteFrame = frame;
    }
    }
    
    // AtlasNode - draw
void AtlasNode::draw(Renderer *renderer, const Mat4 &transform, uint32_t flags)
{
    // ETC1 ALPHA supports.
    _quadCommand.init(_globalZOrder, _textureAtlas->getTexture(), getGLProgramState(), _blendFunc, _textureAtlas->getQuads(), _quadsToDraw, transform, flags);
    
    renderer->addCommand(&_quadCommand);
    }
    
        friend class Director;
    void setIgnoreContentScaleFactor(bool bIgnoreContentScaleFactor);