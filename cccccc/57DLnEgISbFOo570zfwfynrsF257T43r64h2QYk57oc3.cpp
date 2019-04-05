
        
        
    {  if (!base::JSONWriter::Write(top_dictionary, &json))
    return false;
  int written = base::WriteFile(path, json.data(), (int)json.size());
  if (static_cast<unsigned>(written) != json.size()) {
    LOG(ERROR) << 'Error writing ' << path.AsUTF8Unsafe()
               << ' ; write result:' << written << ' expected:' << json.size();
    return false;
  }
  return true;
}
    
      // Post 'reopen' event.
  // (This event is received when the user clicked the icon in the Dock).
  static void EmitReopenEvent();
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
        std::string label;
    if (option.GetString('label', &label))
      SetLabel(label);
    
      private:
    bool ReadText(ClipboardData& data) {
      DCHECK(data.type == TYPE_TEXT);
      base::string16 text;
      clipboard_->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
      data.data.reset(new std::string(base::UTF16ToUTF8(text)));
      return true;
    }
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethod(render_frame_host(), id, type, method, *arguments);
  return true;
}
    
    TegraBinaryOp_Invoker(subf, sub)
    
    
    {        // these are measured in elements
        size_t left, right, top, bottom;
    };
    
    void absDiff(const Size2D &size,
             const u16 *src0Base, ptrdiff_t src0Stride,
             const u16 *src1Base, ptrdiff_t src1Stride,
             u16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u16>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    void add(const Size2D &size,
         const s16 * src0Base, ptrdiff_t src0Stride,
         const s16 * src1Base, ptrdiff_t src1Stride,
         s16 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<s16, s32>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<s16, s32>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    
    {    void operator() (const u8 * src0, const u8 * src1, u8 * dst) const
    {
        dst[0] = src0[0] | src1[0];
    }
};
    
    
    {
    {         vst1_u16(_dst + i + 4, vline_u16);
     }
})
#endif
    
        if (elemSize == (u32)sizeof(u8))
        func = &flip<u8>;
    if (elemSize == (u32)sizeof(u16))
        func = &flip<u16>;
    if (elemSize == (u32)sizeof(u32))
        func = &flip<u32>;
    if (elemSize == (u32)sizeof(u8) * 3)
        func = &flip3<u8>;
    
    
    {} // namespace CAROTENE_NS

    
    
    {} // namespace CAROTENE_NS

    
        for (; j < size.width; ++j)
        sqsum[j] = (prev += src[j]*src[j]);
    
      /// @brief Deprecated; use <code>Reshape(const vector<int>& shape)</code>.
  void Reshape(const int num, const int channels, const int height,
      const int width);
  /**
   * @brief Change the dimensions of the blob, allocating new memory if
   *        necessary.
   *
   * This function can be called both to create an initial allocation
   * of memory, and to adjust the dimensions of a top blob during Layer::Reshape
   * or Layer::Forward. When changing the size of blob, memory will only be
   * reallocated if sufficient memory does not already exist, and excess memory
   * will never be freed.
   *
   * Note that reshaping an input blob and immediately calling Net::Backward is
   * an error; either Net::Forward or Net::Reshape need to be called to
   * propagate the new input shape to higher layers.
   */
  void Reshape(const vector<int>& shape);
  void Reshape(const BlobShape& shape);
  void ReshapeLike(const Blob& other);
  inline string shape_string() const {
    ostringstream stream;
    for (int i = 0; i < shape_.size(); ++i) {
      stream << shape_[i] << ' ';
    }
    stream << '(' << count_ << ')';
    return stream.str();
  }
  inline const vector<int>& shape() const { return shape_; }
  /**
   * @brief Returns the dimension of the index-th axis (or the negative index-th
   *        axis from the end, if index is negative).
   *
   * @param index the axis index, which may be negative as it will be
   *        'canonicalized' using CanonicalAxisIndex.
   *        Dies on out of range index.
   */
  inline int shape(int index) const {
    return shape_[CanonicalAxisIndex(index)];
  }
  inline int num_axes() const { return shape_.size(); }
  inline int count() const { return count_; }
    
      /**
   * @brief Does layer-specific setup: your layer should implement this function
   *        as well as Reshape.
   *
   * @param bottom
   *     the preshaped input blobs, whose data fields store the input data for
   *     this layer
   * @param top
   *     the allocated but unshaped output blobs
   *
   * This method should do one-time layer specific setup. This includes reading
   * and processing relevent parameters from the <code>layer_param_</code>.
   * Setting up the shapes of top blobs and internal buffers should be done in
   * <code>Reshape</code>, which will be called before the forward pass to
   * adjust the top blob sizes.
   */
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
    
      int top_k_;
    
    namespace caffe {
    }
    
      virtual inline const char* type() const { return 'Bias'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int MaxBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
        float32* x; //vertex arrays
    float32* y;
    int32 nVertices;
	
	float32 area;
	bool areaIsSet;
	
    b2Polygon(float32* _x, float32* _y, int32 nVert);
    b2Polygon(b2Vec2* v, int32 nVert);
	b2Polygon();
    ~b2Polygon();
	
	float32 GetArea();
	
	void MergeParallelEdges(float32 tolerance);
    b2Vec2* GetVertexVecs();
    b2Polygon(b2Triangle& t);
    void Set(const b2Polygon& p);
    bool IsConvex();
	bool IsCCW();
	bool IsUsable(bool printError);
	bool IsUsable();
    bool IsSimple();
   // void AddTo(b2FixtureDef& pd);
	
    b2Polygon* Add(b2Triangle& t);
    
    namespace Etc
{
	class Block4x4EncodingBits;
    }
    
    #include <stdio.h>
#include <string.h>
#include <assert.h>
    
    		Data data;
    
      /* The AF_Blue_String enumeration values are offsets into the */
  /* `af_blue_strings' array.                                   */
    
    #define AF_LATIN_HINTS_DO_MONO( h )             \
  AF_HINTS_TEST_OTHER( h, AF_LATIN_HINTS_MONO )
    
    #endif  // VPX_DSP_TXFM_COMMON_H_

    
    
/** 16x32 multiply, followed by a 15-bit shift right and 32-bit add.
    b must fit in 31 bits.
    Result fits in 32 bits. */
#undef MAC16_32_Q15
static OPUS_INLINE opus_val32 MAC16_32_Q15_armv5e(opus_val32 c, opus_val16 a,
 opus_val32 b)
{
  int res;
  __asm__(
      '#MAC16_32_Q15\n\t'
      'smlawb %0, %1, %2, %3;\n'
      : '=r'(res)
      : 'r'(b<<1), 'r'(a), 'r'(c)
  );
  return res;
}
#define MAC16_32_Q15(c, a, b) (MAC16_32_Q15_armv5e(c, a, b))
    
    /** 32-bit arithmetic shift right with rounding-to-nearest instead of rounding down */
#define PSHR32(a,shift) (SHR32((a)+((EXTEND32(1)<<((shift))>>1)),shift))
/** 32-bit arithmetic shift right where the argument can be negative */
#define VSHR32(a, shift) (((shift)>0) ? SHR32(a, shift) : SHL32(a, -(shift)))
    
      bool operator!=(SrcLoc o) const { return !(*this == o); }
    
    APCHandle::Pair APCCollection::Make(const ObjectData* obj,
                                    APCHandleLevel level,
                                    bool unserializeObj) {
  auto bail = [&] {
    return APCString::MakeSerializedObject(
      apc_serialize(Variant(const_cast<ObjectData*>(obj)))
    );
  };
    }
    
    void Config::ParseIniFile(const std::string &filename, IniSettingMap &ini,
                          const bool constants_only /* = false */,
                          const bool is_system /* = true */ ) {
    std::ifstream ifs(filename);
    std::string str((std::istreambuf_iterator<char>(ifs)),
                    std::istreambuf_iterator<char>());
    std::string with_includes;
    Config::ReplaceIncludesWithIni(filename, str, with_includes);
    Config::SetParsedIni(ini, with_includes, filename, constants_only,
                         is_system);
}
    
    
struct Config {
  /*
   * Normalizes hdf string names to their ini counterparts
   *
   * We have special handling for a few hdf strings such as those containing
   * MySQL, Eval, IPv[4|6] and EnableHipHopSyntax
   */
  static std::string IniName(const Hdf& config,
                             const bool prepend_hhvm = true);
  static std::string IniName(const std::string& config,
                             const bool prepend_hhvm = true);
    }
    
    CachedDirectory::CachedDirectory(const String& path) {
  assertx(File::IsVirtualDirectory(path));
  m_files = StaticContentCache::TheFileCache->readDirectory(path.c_str());
}
    
    
    {  StructuredLogEntry cols;
  fillCols(cols);
  cols.setStr('event_name', event);
  cols.setInt('priority', priority);
  StructuredLog::log('hhvm_perf_warning', cols);
}
    
    
    {};
    
    
class ExtensionManager_extensions_args {
 public:
    }
    
    class ExtensionResponse;
    
    
    {
    {
    {  for (const auto& share_line : osquery::split(content, '\n')) {
    genNFSShare(share_line, results);
  }
  return results;
}
}
}

    
    
    {
    {
    {  return results;
}
}
}

    
    struct mei_response {
  uint32_t maxlen;
  uint8_t version;
};
    
    TEST_F(PerfOutputTests,
       impl_consumeWrappedMessagesFromCircularBuffer_splited_record_wrapping) {
  using WrappedMessage = ebpf::PerfOutput<TestMessage>::WrappedMessage;
  auto const test_size = std::size_t{3};
  auto buf = std::vector<ebpf::impl::ByteType>(
      sizeof(WrappedMessage) * test_size + 154, 0);
  auto const first_part_size = 8;
  auto const tail = buf.size() - sizeof(WrappedMessage) - first_part_size;
  auto const head = tail + sizeof(WrappedMessage) * test_size;
    }
    
    fs::path getConfDirPathImpl() {
  char const* kEnvVarName = 'TEST_CONF_FILES_DIR';
  auto const value_opt = osquery::getEnvVar(kEnvVarName);
  EXPECT_TRUE(static_cast<bool>(value_opt))
      << 'Env var ' << boost::io::quoted(kEnvVarName) << ' was not found, '
      << ' looks like cxx_test argument 'env' is not set up.';
  return fs::path(value_opt.get());
}