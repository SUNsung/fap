
        
                for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j);
            int16x8_t v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
            v_dst0 = vqaddq_s16(v_dst0, v_src0);
            v_dst1 = vqaddq_s16(v_dst1, v_src1);
            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            uint8x8_t v_src = vld1_u8(src + j);
            int16x8_t v_src16 = vreinterpretq_s16_u16(vmovl_u8(v_src));
            int16x8_t v_dst = vld1q_s16(dst + j);
            v_dst = vqaddq_s16(v_dst, v_src16);
            vst1q_s16(dst + j, v_dst);
        }
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = saturate_cast<T>(alpha*src0[0] + beta*src1[0] + gamma);
    }
};
    
    
    {
    {        for (; dj < size.width; sj += 2, ++dj)
        {
            dst[dj] = src[sj + coi];
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)coi;
#endif
}
    
                    uint16x8_t vSum_3_1 = vaddq_u16(vLane3.val[0], vLane1.val[0]);
                uint16x8_t vSum_4_2 = vaddq_u16(vLane3.val[1], vLane1.val[1]);
                uint16x8_t vSum_5_6 = vaddq_u16(vLane3.val[2], vLane1.val[2]);
    
                uint32x2_t el2l = vadd_u32(vget_low_u32(el8shr01l), vget_high_u32(el8shr01l));
            uint32x2_t el2hl = vadd_u32(vget_low_u32(el4h), vget_high_u32(el8shr01l));
            uint32x2_t el2hh = vadd_u32(vget_low_u32(el4h), vget_high_u32(el4h));
    
        std::vector<u8> _tmp;
    u8 *tmp = 0;
    if (border == BORDER_MODE_CONSTANT)
    {
        _tmp.assign(cols + 4,borderValue);
        tmp = &_tmp[2];
    }
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    std::unique_ptr<php::Unit> parse_unit(php::Program& prog,
                                      std::unique_ptr<UnitEmitter> ue);
    
    APCCollection::~APCCollection() {
  // Zero for size is correct, because when this APCCollection was unreferenced
  // it already included the size of the inner handle.
  m_arrayHandle->unreferenceRoot(0);
}
    
    #define CONFIG_BODY(T, METHOD) \
T Config::Get##METHOD(const IniSetting::Map &ini, const Hdf& config, \
                      const std::string &name /* = '' */, \
                      const T defValue /* = 0ish */, \
                      const bool prepend_hhvm /* = true */) { \
  auto ini_name = IniName(name, prepend_hhvm); \
  /* If we don't pass a name, then we just use the raw config as-is. */ \
  /* This could happen when we are at a known leaf of a config node. */ \
  Hdf hdf = name != '' ? config[name] : config; \
  auto value = ini_iterate(ini, ini_name); \
  if (value.isString()) { \
    T ini_ret, hdf_ret; \
    ini_on_update(value.toString(), ini_ret); \
    /* I don't care what the ini_ret was if it isn't equal to what  */ \
    /* is returned back from from an HDF get call, which it will be */ \
    /* if the call just passes back ini_ret because either they are */ \
    /* the same or the hdf option associated with this name does    */ \
    /* not exist.... REMEMBER HDF WINS OVER INI UNTIL WE WIPE HDF   */ \
    hdf_ret = hdf.configGet##METHOD(ini_ret); \
    if (hdf_ret != ini_ret) { \
      ini_ret = hdf_ret; \
      IniSetting::SetSystem(ini_name, variant_init(ini_ret)); \
    } \
    return ini_ret; \
  } \
  /* If there is a value associated with this setting in the hdf config */ \
  /* then return it; otherwise the defValue will be returned as it is   */ \
  /* assigned to the return value for this call when nothing exists     */ \
  return hdf.configGet##METHOD(defValue); \
} \
void Config::Bind(T& loc, const IniSetting::Map &ini, const Hdf& config, \
                  const std::string& name /* = '' */, \
                  const T defValue /* = 0ish */, \
                  const bool prepend_hhvm /* = true */) { \
  loc = Get##METHOD(ini, config, name, defValue, prepend_hhvm); \
  IniSetting::Bind(IniSetting::CORE, IniSetting::PHP_INI_SYSTEM, \
                   IniName(name, prepend_hhvm), &loc); \
}
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    #include <string>
#include <utility>
#include <vector>
    
    IMPLEMENT_RESOURCE_ALLOCATION(PlainDirectory)
    
    #ifndef HPHP_FILE_STREAM_WRAPPER_H
#define HPHP_FILE_STREAM_WRAPPER_H
    
    template <typename F>
void find(const std::string &root, const std::string& path, bool php,
          const F& callback) {
  auto spath = path.empty() || !isDirSeparator(path[0]) ?
    path : path.substr(1);
    }
    
    req::ptr<Directory> GlobStreamWrapper::opendir(const String& path) {
  const char* prefix = 'glob://';
  const char* path_str = path.data();
  int path_len = path.length();
    }