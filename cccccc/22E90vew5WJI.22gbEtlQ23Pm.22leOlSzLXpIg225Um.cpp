
        
          // Return value from Code() is prelude_ + result_.
  string prelude_;  // Code before function definition
  string result_;   // Function definition
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/stream_executor/cuda/cuda_activation.h'
    
    class CUDAExecutor;
class ScopedActivateContext;
    
                v_srclo = vget_low_s16(v_src1);
            v_srchi = vget_high_s16(v_src1);
            v_dst1 = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst1))),
                                  vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst1))));
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = internal::saturate_cast<T>((WT)src0[0] + (WT)src1[0]);
    }
};
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        v_dst = veorq_u8(v_src0, v_src1);
    }
    
    #ifndef __ANDROID__
        for (; sj < roiw32; sj += 32, syj += 64, dj += 128)
        {
            internal::prefetch(srcy + syj);
            internal::prefetch(srcu + sj);
            internal::prefetch(srcv + sj);
    }
    
    
    {
    {        size_t dj = 0u, j = 0u;
        for (; j < roiw16; dj += 64, j += 16)
        {
            internal::prefetch(uv + j);
            internal::prefetch(y1 + j);
            internal::prefetch(y2 + j);
#if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
            CONVERTYUV420TORGB(4, d0, d1, q6, q5)
#else
            convertYUV420.ToRGB(y1 + j, y2 + j, uv + j, dst1 + dj, dst2 + dj);
#endif
        }
        for (; j + 2 <= size.width; j+=2, dj += 8)
        {
            convertYUV420ToRGB<4, 0, 1>(y1+j, y2+j, uv+j, dst1 + dj, dst2 + dj);
        }
    }
#else
    (void)size;
    (void)yBase;
    (void)yStride;
    (void)uvBase;
    (void)uvStride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        q0 = vmaxq_s16(q0, vminq_s16(ak0, d0_7));
    q1 = vminq_s16(q1, vmaxq_s16(bk0, d0_7));
    
        for (; j < size.width; ++j)
        sqsum[j] = (prev += src[j]*src[j]);
    
    #if !defined(__AVX__)
// Implementation for non-avx archs.
    
    // Computes part of matrix.vector v = Wu. Computes N=16 results.
// For details see PartialMatrixDotVector64 with N=16.
static void PartialMatrixDotVector16(const int8_t* wi, const double* scales,
                                     const int8_t* u, int num_in, int num_out,
                                     double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  __m256i result1 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result1);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister;
  ExtractResults(result1, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
    // Setter for the value.
void ParamContent::SetValue(const char* val) {
// TODO (wanke) Test if the values actually are properly converted.
// (Quickly visible impacts?)
  changed_ = true;
  if (param_type_ == VT_INTEGER) {
    iIt->set_value(atoi(val));
  } else if (param_type_ == VT_BOOLEAN) {
    bIt->set_value(atoi(val));
  } else if (param_type_ == VT_DOUBLE) {
    dIt->set_value(strtod(val, nullptr));
  } else if (param_type_ == VT_STRING) {
    sIt->set_value(val);
  }
}
    
        for (auto &pfd: pollfds) {
      if (pfd.revents & (POLLERR | POLLHUP)) {
        // some process died
        DEBUG('detaching process');
        auto &session = client_sessions.at(pfd.fd);
        DEBUG('%d has died', session.pid);
        to_remove.push_back(pfd.fd);
      } else if (pfd.revents & POLLIN) {
        if (pfd.fd == srv_socket->socket_fd) {
          // someone is joining
          DEBUG('registered new client');
          auto client = srv_socket->accept();
          int fd = client.socket_fd;
          to_add.push_back(fd);
          client_sessions.emplace(fd, std::move(client));
        } else {
          // someone wants to register a segment
          DEBUG('got alloc info');
          auto &session = client_sessions.at(pfd.fd);
          AllocInfo info = session.socket.receive();
          session.pid = info.pid;
          DEBUG('got alloc info: %d %d %s', (int)info.free, info.pid, info.filename);
          if (info.free) {
            free_used_object(info.filename);
          } else {
            used_objects.insert(info.filename);
            DEBUG('registered object %s', info.filename);
            session.socket.confirm();
          }
        }
      }
    }
    
    namespace {
    }
    
      const auto& X = in[0];
  const auto& W = in[1];
  const auto& b = in[2];
  auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  const int M = size_to_dim_(canonical_axis, GetDimsVector(in[0]));
  const int K = size_from_dim_(canonical_axis, GetDimsVector(in[0]));
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    class GetFlattenGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'ResizeLike', '', vector<string>{GO(0), I(0)}, vector<string>{GI(0)});
  }
};
    
    
    {
    {    const float* Xdata = X.template data<float>();
    float* Ydata = Y->template mutable_data<float>();
    for (int i = 0; i < X.size(); ++i) {
      Ydata[i] = std::floor(Xdata[i]);
    }
    return true;
  }
};
    
    namespace caffe2 {
    }
    
    // The RunFullyConnectedOpOnCUDADevice Function will use the pointer of current
// op and the DoRunWithType will make sure to run the correct things.
template <>
bool FullyConnectedOp<CUDAContext>::RunOnDevice() {
  return RunFullyConnectedOpOnCUDADevice(float16_compute_, this);
}
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    #endif

    
    struct PhpFileDoesNotExistException : ExtendedException {
  explicit PhpFileDoesNotExistException(const char* file)
      : ExtendedException('File could not be loaded: %s', file) {}
  explicit PhpFileDoesNotExistException(const char* msg,
                                        DEBUG_ONLY bool empty_file)
      : ExtendedException('%s', msg) {
    assertx(empty_file);
  }
  EXCEPTION_COMMON_IMPL(PhpFileDoesNotExistException);
};
    
      DIR *dir = opendir(fullPath.c_str());
  if (dir == nullptr) {
    Logger::Error('FileUtil::find(): unable to open directory %s',
                  fullPath.c_str());
    return;
  }
    
            auto flatBufferOffset = AsTensorShape(Shape()).Locate(startOffset);
        auto sliceViewMatrixDims = GetMatrixDimensions(sliceViewShape);
        assert((flatBufferOffset % sliceViewMatrixDims.first) == 0);
        auto sliceMatrixColumnOffset = flatBufferOffset / sliceViewMatrixDims.first;
        void* tensorView = nullptr;
        switch (m_dataType)
        {
        case DataType::Float:
        {
            auto currentMatrix = GetMatrix<float>();
            std::pair<size_t, size_t> currentMatrixDims = { currentMatrix->GetNumRows(), currentMatrix->GetNumCols() };
            std::shared_ptr<Matrix<float>> slicedMatrixView;
            if (sliceViewMatrixDims.first != currentMatrixDims.first)
                slicedMatrixView = make_shared<Matrix<float>>(currentMatrix->Reshaped(1, currentMatrix->GetNumElements()).ColumnSlice(flatBufferOffset, sliceViewShape.TotalSize()));
            else
                slicedMatrixView = make_shared<Matrix<float>>(currentMatrix->ColumnSlice(sliceMatrixColumnOffset, sliceViewMatrixDims.second));
    }
    }
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
        template <typename ElementType>
    /*static*/ ValuePtr Value::CreateBatch(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/)
    {
        //TODO: avoid data copy.
        std::vector<std::vector<size_t>> input(batchData.size());
        for (size_t i = 0; i < batchData.size(); i++)
        {
            input[i] = {batchData[i]};
        }
        // Pass the empty seqStartFlags means all sequences have the start flag with true.
        return Create<ElementType>(dimension, input, {}, device, readOnly);
    }
    
    public:
    DeclareConstructorFromConfigWithNumInputs(ConstantNode);
    ConstantNode(DEVICEID_TYPE deviceId, const wstring& name)
        : Base(deviceId, name)
    {
        m_fillValue = ElemType(0);
    }
    ConstantNode(DEVICEID_TYPE deviceId, const wstring& name, double fillValue)
        : Base(deviceId, name)
    {
        m_fillValue = ElemType(fillValue);
    }
    
    #include 'db/builder.h'
    
    Status DestroyDB(const std::string& dbname, const Options& options) {
  Env* env = options.env;
  std::vector<std::string> filenames;
  Status result = env->GetChildren(dbname, &filenames);
  if (!result.ok()) {
    // Ignore error in case directory does not exist
    return Status::OK();
  }
    }
    
      // Return an internal iterator over the current state of the database.
  // The keys of this iterator are internal keys (see format.h).
  // The returned iterator should be deleted when no longer needed.
  Iterator* TEST_NewInternalIterator();
    
    
    {}  // namespace leveldb
    
      // Return type, or one of the preceding special values
  unsigned int ReadPhysicalRecord(Slice* result);