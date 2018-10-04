
        
        #include 'base/stl_util.h'
    
    #include <string>
    
    #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/native_browser_view.h'
#include 'native_mate/handle.h'
    
    void StopRecording(const base::FilePath& path,
                   const CompletionCallback& callback) {
  TracingController::GetInstance()->StopTracing(
      GetTraceDataEndpoint(path, callback));
}
    
    using extensions::GlobalShortcutListener;
    
    #endif  // ATOM_BROWSER_API_ATOM_API_IN_APP_PURCHASE_H_

    
    namespace mate {
    }
    
    #define FARG_LINE(type, n) , type * dst##n##Base, ptrdiff_t dst##n##Stride
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s32, s8, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d0-d1}, [%[src1]]                              \n\t'
             'vld1.32 {d2-d3}, [%[src2]]                              \n\t'
             'vqmovn.s32 d4, q0                                       \n\t'
             'vqmovn.s32 d5, q1                                       \n\t'
             'vqmovn.s16  d6, q2                                      \n\t'
             'vst1.8 {d6}, [%[dst]]                                   \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i + 0),
               [src2] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i)
             : 'd0','d1','d2','d3','d4','d5','d6'
         );
     }
})
#else
CVT_FUNC(s32, s8, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int32x4_t vline1_s32 = vld1q_s32(_src + i);
         int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
    }
    }
    
    typedef void (* rshiftConstFunc)(const Size2D &size,
                                const s16 * srcBase, ptrdiff_t srcStride,
                                u8 * dstBase, ptrdiff_t dstStride,
                                CONVERT_POLICY cpolicy);
    
                    vSum_0_4 = vmlaq_u16(vSum_0_4, vLane2.val[0], vc6u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vLane2.val[1], vc6u16);
                vSum_2_6 = vmlaq_u16(vSum_2_6, vLane2.val[2], vc6u16);
    
    
    { protected:
  int n_ = 0;
  std::mutex m_;
  std::condition_variable cv_;
};
    
    namespace caffe2 {
    }
    
    namespace caffe2 {
    }
    
    NO_GRADIENT(GivenTensorFill);
NO_GRADIENT(GivenTensorDoubleFill);
NO_GRADIENT(GivenTensorBoolFill);
NO_GRADIENT(GivenTensorIntFill);
NO_GRADIENT(GivenTensorInt64Fill);
NO_GRADIENT(GivenTensorStringFill);
    
    
    {     public:
      DataFile(SpecialEnv* env, WritableFile* base)
          : env_(env),
            base_(base) {
      }
      ~DataFile() { delete base_; }
      Status Append(const Slice& data) {
        if (env_->no_space_.Acquire_Load() != nullptr) {
          // Drop writes on the floor
          return Status::OK();
        } else {
          return base_->Append(data);
        }
      }
      Status Close() { return base_->Close(); }
      Status Flush() { return base_->Flush(); }
      Status Sync() {
        if (env_->data_sync_error_.Acquire_Load() != nullptr) {
          return Status::IOError('simulated data sync error');
        }
        while (env_->delay_data_sync_.Acquire_Load() != nullptr) {
          DelayMilliseconds(100);
        }
        return base_->Sync();
      }
    };
    class ManifestFile : public WritableFile {
     private:
      SpecialEnv* env_;
      WritableFile* base_;
     public:
      ManifestFile(SpecialEnv* env, WritableFile* b) : env_(env), base_(b) { }
      ~ManifestFile() { delete base_; }
      Status Append(const Slice& data) {
        if (env_->manifest_write_error_.Acquire_Load() != nullptr) {
          return Status::IOError('simulated writer error');
        } else {
          return base_->Append(data);
        }
      }
      Status Close() { return base_->Close(); }
      Status Flush() { return base_->Flush(); }
      Status Sync() {
        if (env_->manifest_sync_error_.Acquire_Load() != nullptr) {
          return Status::IOError('simulated sync error');
        } else {
          return base_->Sync();
        }
      }
    };
    
    inline bool ParseInternalKey(const Slice& internal_key,
                             ParsedInternalKey* result) {
  const size_t n = internal_key.size();
  if (n < 8) return false;
  uint64_t num = DecodeFixed64(internal_key.data() + n - 8);
  unsigned char c = num & 0xff;
  result->sequence = num >> 8;
  result->type = static_cast<ValueType>(c);
  result->user_key = Slice(internal_key.data(), n - 8);
  return (c <= static_cast<unsigned char>(kTypeValue));
}
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    
    {    // Some corruption was detected.  'size' is the approximate number
    // of bytes dropped due to the corruption.
    virtual void Corruption(size_t bytes, const Status& status) = 0;
  };
    
      // Compute the crc of the record type and the payload.
  uint32_t crc = crc32c::Extend(type_crc_[t], ptr, n);
  crc = crc32c::Mask(crc);                 // Adjust for storage
  EncodeFixed32(buf, crc);
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    
    {}  // namespace guetzli
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    #ifndef GUETZLI_JPEG_DATA_ENCODER_H_
#define GUETZLI_JPEG_DATA_ENCODER_H_
    
    void BuildHuffmanCodeTable(const int* counts, const int* values,
                           HuffmanCodeTable* table) {
  int huffcode[256];
  int huffsize[256];
  int p = 0;
  for (int l = 1; l <= kJpegHuffmanMaxBitLength; ++l) {
    int i = counts[l];
    while (i--) huffsize[p++] = l;
  }
    }