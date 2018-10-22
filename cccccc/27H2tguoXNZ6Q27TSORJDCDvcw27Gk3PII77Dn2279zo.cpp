
        
        static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    
    {    if (SupportUnknownEnumValue(descriptor->file())) {
      // Map unknown values to a special UNRECOGNIZED value if supported.
      (*variables)['unrecognized_value'] =
          (*variables)['value_enum_type'] + '.UNRECOGNIZED';
    } else {
      // Map unknown values to the default value if we don't have UNRECOGNIZED.
      (*variables)['unrecognized_value'] =
          DefaultValue(value, true, name_resolver);
    }
  } else {
    (*variables)['value_type'] = TypeName(value, name_resolver, false);
    (*variables)['boxed_value_type'] = TypeName(value, name_resolver, true);
    (*variables)['value_wire_type'] = WireType(value);
    (*variables)['value_default_value'] =
        DefaultValue(value, true, name_resolver);
  }
  (*variables)['type_parameters'] =
      (*variables)['boxed_key_type'] + ', ' + (*variables)['boxed_value_type'];
  // TODO(birdo): Add @deprecated javadoc when generating javadoc is supported
  // by the proto compiler
  (*variables)['deprecation'] = descriptor->options().deprecated()
      ? '@java.lang.Deprecated ' : '';
  (*variables)['on_changed'] = 'onChanged();';
    
    string ClassNameResolver::GetFileImmutableClassName(
    const FileDescriptor* file) {
  string& class_name = file_immutable_outer_class_names_[file];
  if (class_name.empty()) {
    if (file->options().has_java_outer_classname()) {
      class_name = file->options().java_outer_classname();
    } else {
      class_name = GetFileDefaultImmutableClassName(file);
      if (HasConflictingClassName(file, class_name)) {
        class_name += kOuterClassNameSuffix;
      }
    }
  }
  return class_name;
}
    
      const string& name() const { return name_; }
    
    #include <google/protobuf/stubs/common.h>
    
    #define SCALE_ARG0
#define SCALE_STORE0
#define SCALE_VAR0
#define SCALE_ARG1 , double scale_
#define SCALE_STORE1 , scale(scale_)
#define SCALE_VAR1 double scale;
#define SCALE_ARG3 , const double *scales_
#define SCALE_STORE3 , scales(scales_, scales_ + 3)
#define SCALE_VAR3 std::vector<double> scales;
    
        enum FLIP_MODE
    {
        FLIP_HORIZONTAL_MODE = 1,
        FLIP_VERTICAL_MODE = 2,
        FLIP_BOTH_MODE = FLIP_HORIZONTAL_MODE | FLIP_VERTICAL_MODE
    };
    
    
    {        vs1 = vmla_f32(vget_low(vgamma), vs1, vget_low(valpha));
        vs1 = vmla_f32(vs1, vs2, vget_low(vbeta));
        v_dst = vcvt_u32_f32(vs1);
    }
    
    void bitwiseNot(const Size2D &size,
                const u8 *srcBase, ptrdiff_t srcStride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
                    int32x4_t va = vaddq_s32(lane0a, lane2a);
                int32x4_t vb = vaddq_s32(lane0b, lane2b);
                int32x4_t wa = vaddq_s32(va, lane1a);
                int32x4_t wb = vaddq_s32(vb, lane1b);
    
        inline _normEstimator(const Size2D &size, s32 cn, Margin,
                          ptrdiff_t &mapstep, s32** mag_buf, u8* &map)
    {
        mapstep = size.width + 2;
        buffer.resize( (size.width+2)*(size.height+2) + cn*mapstep*3*sizeof(s32) );
        mag_buf[0] = (s32*)&buffer[0];
        mag_buf[1] = mag_buf[0] + mapstep*cn;
        mag_buf[2] = mag_buf[1] + mapstep*cn;
        memset(mag_buf[0], 0, /* cn* */mapstep * sizeof(s32));
    }
    
    #define FARG_LINE(type, n) , type * dst##n##Base, ptrdiff_t dst##n##Stride
    
    inline void prefetch(const void *ptr, size_t offset = 32*10)
{
#if defined __GNUC__
    __builtin_prefetch(reinterpret_cast<const char*>(ptr) + offset);
#elif defined _MSC_VER && defined CAROTENE_NEON
    __prefetch(reinterpret_cast<const char*>(ptr) + offset);
#else
    (void)ptr;
    (void)offset;
#endif
}
    
             float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
         float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
         float32x4_t vline3_f32 = vcvtq_f32_s32(vline3_s32);
         float32x4_t vline4_f32 = vcvtq_f32_s32(vline4_s32);
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, u8, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src1]]                             \n\t'
            'vmovl.u16 q3, d4                                      \n\t'
            'vmovl.u16 q4, d5                                      \n\t'
            'vcvt.f32.u32 q5, q3                                   \n\t'
            'vcvt.f32.u32 q6, q4                                   \n\t'
            'vmul.f32 q7, q5, q0                                   \n\t'
            'vmul.f32 q8, q6, q0                                   \n\t'
            'vadd.f32 q9, q7, q1                                   \n\t'
            'vadd.f32 q10, q8, q1                                  \n\t'
            'vcvt.s32.f32 q11, q9                                  \n\t'
            'vcvt.s32.f32 q12, q10                                 \n\t'
            'vqmovn.s32 d26, q11                                   \n\t'
            'vqmovn.s32 d27, q12                                   \n\t'
            'vqmovun.s16 d28, q13                                  \n\t'
             'vst1.8 {d28}, [%[dst]]                               \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
               'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28'
        );
    }
})
#else
CVTS_FUNC(u16, u8, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline = vld1q_u16(_src + i);
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        uint8x8_t vRes = vqmovun_s16(vcombine_s16(vRes1, vRes2));
        vst1_u8(_dst + i, vRes);
    }
})
#endif
    
    
    {        for (; i < size.width; ++i)
            result += s32(src0[i]) * s32(src1[i]);
    }
    return result;
#else
    (void)_size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    
        if (borderType == BORDER_MODE_CONSTANT)
        for (s32 k = 0; k < cn; ++k)
        {
            lane[-cn+k] = borderValue;
            lane[-cn-cn+k] = borderValue;
            lane[colsn+k] = borderValue;
            lane[colsn+cn+k] = borderValue;
        }
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
    // Computes one set of 4x8 products of inputs and weights, adding to result.
// Horizontally adds 4 adjacent results, making 8x32-bit results.
// rep_input is assumed to be an 8x replicated set of 4x8-bit signed integers.
// Note that wi must previously have been re-organized with blocks of 4x8
// weights in contiguous memory.
// ones is a register of 16x16-bit values all equal to 1.
// Note: wi is incremented by the amount of data read.
// weights and reps are scratch registers.
// This function must be inlined with references in order for the compiler to
// correctly use the registers declared in the caller.
inline void MultiplyGroup(const __m256i& rep_input, const __m256i& ones,
                          const int8_t*& wi, __m256i& weights, __m256i& reps,
                          __m256i& result) {
  // Load a 4x8 block of weights.
  weights = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(wi));
  wi += kNumInputsPerRegister;
  // Normalize the signs on rep_input, weights, so weights is always +ve.
  reps = _mm256_sign_epi8(rep_input, weights);
  weights = _mm256_sign_epi8(weights, weights);
  // Multiply 32x8-bit reps by 32x8-bit weights to make 16x16-bit results,
  // with adjacent pairs added.
  weights = _mm256_maddubs_epi16(weights, reps);
  // Multiply 16x16-bit result by 16x16-bit ones to make 8x32-bit results,
  // with  adjacent pairs added. What we really want is a horizontal add of
  // 16+16=32 bit result, but there is no such instruction, so multiply by
  // 16-bit ones instead. It is probably faster than all the sign-extending,
  // permuting and adding that would otherwise be required.
  weights = _mm256_madd_epi16(weights, ones);
  result = _mm256_add_epi32(result, weights);
}
    
      // The tesseract engine initialized from equation training data.
  Tesseract equ_tesseract_;
    
      // Write all (changed_) parameters to a config file.
  void WriteParams(char* filename, bool changes_only);
    
    #include <cmath>
    
    bool CompletionQueue::CompletionQueueTLSCache::Flush(void** tag, bool* ok) {
  int res = 0;
  void* res_tag;
  flushed_ = true;
  if (grpc_completion_queue_thread_local_cache_flush(cq_->cq_, &res_tag,
                                                     &res)) {
    auto cq_tag = static_cast<internal::CompletionQueueTag*>(res_tag);
    *ok = res == 1;
    if (cq_tag->FinalizeResult(tag, ok)) {
      return true;
    }
  }
  return false;
}
    
    MeasureInt64 RpcClientReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
      void StartTransportStreamOpBatch(grpc_call_element* elem,
                                   TransportStreamOpBatch* op) override;
    
    const ViewDescriptor& ClientReceivedBytesPerRpcHour() {
  const static ViewDescriptor descriptor =
      HourDescriptor()
          .set_name('grpc.io/client/received_bytes_per_rpc/hour')
          .set_measure(kRpcClientReceivedBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
    
    {  // We had a counted inner array---we need to do an O(N) copy to get the
  // collection into the request local heap.
  auto const apcArr = APCArray::fromHandle(m_arrayHandle);
  auto const col = Object::attach(collections::alloc(m_colType));
  switch (m_colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    fillCollection(static_cast<BaseVector*>(col.get()), apcArr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    fillCollection(static_cast<BaseSet*>(col.get()), apcArr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    fillMap(static_cast<BaseMap*>(col.get()), apcArr);
    break;
  case CollectionType::Pair:
    always_assert(0);
    break;
  }
  return col;
}
    
    namespace HPHP {
    }
    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}
    
        bool isPHP = false;
    const char *p = strrchr(ename, '.');
    if (p) {
      isPHP = (strncmp(p + 1, 'php', 3) == 0);
    } else {
      try {
        std::string line;
        std::ifstream fin(fe.c_str());
        if (std::getline(fin, line)) {
          if (line[0] == '#' && line[1] == '!' &&
              line.find('php') != std::string::npos) {
            isPHP = true;
          }
        }
      } catch (...) {
        Logger::Error('FileUtil::find(): unable to read %s', fe.c_str());
      }
    }
    
    
    {}
    
    bool ColumnFamilyData::RangeOverlapWithCompaction(
    const Slice& smallest_user_key, const Slice& largest_user_key,
    int level) const {
  return compaction_picker_->RangeOverlapWithCompaction(
      smallest_user_key, largest_user_key, level);
}
    
    
    {
    {    if (data.ToString().find('foo567') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('v1.fetdq') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('bar123') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('v2.dfgkjdfghsd') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('dfgk') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
  }
  if (encrypted_env_) {
    ASSERT_EQ(hits, 0);
  } else {
    ASSERT_GE(hits, 4);
  }
}
    
    Status PosixRandomRWFile::Fsync() {
  if (fsync(fd_) < 0) {
    return IOError('While fsync random read/write file', filename_, errno);
  }
  return Status::OK();
}
    
      {
    PinnableSlice pinnable_val;
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
  }