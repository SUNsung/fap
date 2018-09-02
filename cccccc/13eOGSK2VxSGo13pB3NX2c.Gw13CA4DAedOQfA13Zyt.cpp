
        
        Menu::~Menu() {
  Destroy();
}
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
    void Menu::Append(MenuItem* menu_item) {
  if (menu_item->submenu_)
    menu_model_->AddSubMenu(menu_item->id(), menu_item->label_,
                            menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->AddItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->AddCheckItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->AddSeparator(ui::NORMAL_SEPARATOR);
    }
    
      ui::KeyboardCode keyval = ui::VKEY_UNKNOWN;
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    namespace extensions {
    }
    
            if (policy == CONVERT_POLICY_SATURATE)
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src0 + j);
                internal::prefetch(src1 + j);
                uint8x16_t v_src0 = vld1q_u8(src0 + j);
                int16x8_t v_src00 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src0)));
                int16x8_t v_src01 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src0)));
                int16x8_t v_src10 = vld1q_s16(src1 + j), v_src11 = vld1q_s16(src1 + j + 8);
                int16x8_t v_dst0 = vqaddq_s16(v_src00, v_src10);
                int16x8_t v_dst1 = vqaddq_s16(v_src01, v_src11);
                vst1q_s16(dst + j, v_dst0);
                vst1q_s16(dst + j + 8, v_dst1);
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src0 + j)));
                int16x8_t v_src1 = vld1q_s16(src1 + j);
                int16x8_t v_dst = vqaddq_s16(v_src0, v_src1);
                vst1q_s16(dst + j, v_dst);
            }
    }
    
    bool isBlur3x3Supported(const Size2D &size, BORDER_MODE border)
{
    return isSupportedConfiguration() && size.width >= 8 &&
        (border == BORDER_MODE_CONSTANT ||
            border == BORDER_MODE_REPLICATE);
}
    
    #define MERGE_QUAD(sgn, bits, n) { \
                                     FILL_LINES##n(PREF, sgn##bits) \
                                     MERGE_ASM##n(sgn, bits) \
                                 }
    
    #define IMPL_CMPOP(op, type)                              \
void cmp##op(const Size2D &size,                          \
             const type * src0Base, ptrdiff_t src0Stride, \
             const type * src1Base, ptrdiff_t src1Stride, \
                       u8 *dstBase, ptrdiff_t dstStride)  \
{                                                         \
    internal::assertSupportedConfiguration();             \
    vcompare(size,                                        \
             src0Base, src0Stride,                        \
             src1Base, src1Stride,                        \
             dstBase, dstStride,                          \
             OpCmp##op<type>());                          \
}
    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
    void rshift(const Size2D &size,
            const s16 * srcBase, ptrdiff_t srcStride,
            u8 * dstBase, ptrdiff_t dstStride,
            u32 shift, CONVERT_POLICY cpolicy)
{
    internal::assertSupportedConfiguration();
    }
    
    template <>
int32x4_t vshrq_s32<0>(int32x4_t value)
{
    return value;
}
    
        for(size_t j = 0; j < size.height; ++j)
    {
        const T *  src = internal::getRowPtr( srcBase,  srcStride, j);
        const T * rng1 = internal::getRowPtr(rng1Base, rng1Stride, j);
        const T * rng2 = internal::getRowPtr(rng2Base, rng2Stride, j);
             u8 *  dst = internal::getRowPtr( dstBase,  dstStride, j);
        size_t i = 0;
        for( ; i < width; i += 32/sizeof(T) )
        {
            internal::prefetch(src + i);
            internal::prefetch(rng1 + i);
            internal::prefetch(rng2 + i);
    }
    }
    
    REGISTER_CPU_OPERATOR(
    SubGradient,
    BinaryElementwiseGradientOp<
        NumericTypes,
        CPUContext,
        SubFunctor<CPUContext>>);
    
    REGISTER_CPU_OPERATOR(
    MergeSingleMapFeatureTensorsGradient,
    MergeSingleListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleMapFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with map features into '
        'multiple single-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_presence', '.presence')
    .Input(2, 'out_values_values_grad', '.values.values_grad')
    .Output(0, 'in1_values_grad', '.values_grad');
REGISTER_GRADIENT(
    MergeSingleMapFeatureTensors,
    GetMergeSingleMapFeatureTensorsGradient);
    
    #include <unordered_map>
#include <vector>
    
    workspace.FeedBlob('X', (np.random.uniform(-10, 10, (5,5))).astype(np.float32))
print('X before running op:', workspace.FetchBlob('X'))
workspace.RunOperatorOnce(op)
print('X after running op:', workspace.FetchBlob('X'))
    
    
    {
    {      // Record end time
      uint64_t end_time = env->NowMicros();
      double elapsed = static_cast<double>(end_time - start_time) * 1e-6;
      uint32_t qps = static_cast<uint32_t>(
          static_cast<double>(FLAGS_threads * FLAGS_ops_per_thread) / elapsed);
      fprintf(stdout, 'Complete in %.3f s; QPS = %u\n', elapsed, qps);
    }
    return true;
  }
    
    namespace rocksdb {
    }
    
      virtual Status EnableFileDeletions(bool /*force*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  virtual Status GetLiveFiles(std::vector<std::string>&,
                              uint64_t* /*manifest_file_size*/,
                              bool /*flush_memtable*/ = true) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
    
    Status MockEnv::GetTestDirectory(std::string* path) {
  *path = '/test';
  return Status::OK();
}
    
          // Print the message
      if (p < limit) {
        va_list backup_ap;
        va_copy(backup_ap, ap);
        p += vsnprintf(p, limit - p, format, backup_ap);
        va_end(backup_ap);
      }
    
    static const uint8_t* kRangeLimit = kRangeLimitLut + 384;
    
    
    {}  // namespace guetzli
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        base_type::fence_before_store(order);
        BOOST_ATOMIC_DETAIL_ARM_STORE64(&storage, v);
        base_type::fence_after_store(order);
    }