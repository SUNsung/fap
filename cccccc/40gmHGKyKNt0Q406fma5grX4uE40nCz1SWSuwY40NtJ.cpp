
        
        STATISTIC(NumRequirementEnvironments, '# of requirement environments');
    
    //  This file implements a default caching implementation that never evicts
//  its entries.
    
      Allocated = new char[capacity];
  End = Allocated + capacity;
  Begin = End - oldSize;
  std::memcpy(Begin, oldBegin, oldSize);
    
        {
      Out << Indent;
      if (childKind == ChildKind::Root) {
        Out << '+- ';
      } else if (childKind == ChildKind::Left) {
        Out << '/- ';
      } else if (childKind == ChildKind::Right) {
        Out << '\\- ';
      } else if (childKind == ChildKind::Further) {
        Out << '\\-> ';
      }
      PrintNodeData(Out, node);
      Out << '\n';
    }
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
    
    {  return forInvalid();
}
    
    
void ClangDiagnosticConsumer::HandleDiagnostic(
    clang::DiagnosticsEngine::Level clangDiagLevel,
    const clang::Diagnostic &clangDiag) {
  // Handle the module-not-found diagnostic specially if it's a top-level module
  // we're looking for.
  if (clangDiag.getID() == clang::diag::err_module_not_found &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    return;
  }
    }
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    void GeneratePCHJobAction::anchor() {}

    
      /// The target to be passed to the compiler invocation. By default, this
  /// is the target triple, but this may be overridden to accommodate some
  /// platforms.
  virtual std::string getTargetForLinker() const;
    
        /*
        For each point `p` within `size`, do:
        dst[p] = src0[p] | src1[p]
    */
    void bitwiseOr(const Size2D &size,
                   const u8 *src0Base, ptrdiff_t src0Stride,
                   const u8 *src1Base, ptrdiff_t src1Stride,
                   u8 *dstBase, ptrdiff_t dstStride);
    
    
    {
    {        for (; j < size.width; j++)
        {
            s32 srcVal = src[j];
            dst[j] = internal::saturate_cast<s16>(dst[j] + ((srcVal * srcVal) >> shift));
        }
    }
}
    
    template <typename T>
inline T *getRowPtr(T *base, ptrdiff_t stride, size_t row)
{
    char *baseRaw = const_cast<char *>(reinterpret_cast<const char *>(base));
    return reinterpret_cast<T *>(baseRaw + ptrdiff_t(row) * stride);
}
    
        u32 step_base = 16 / sizeof(T), step_tail = 8 / sizeof(T);
    size_t roiw_base = size.width >= (step_base - 1) ? size.width - step_base + 1 : 0;
    size_t roiw_tail = size.width >= (step_tail - 1) ? size.width - step_tail + 1 : 0;
    
    #ifdef CAROTENE_NEON
    
    void integral(const Size2D &size,
              const u8 * srcBase, ptrdiff_t srcStride,
              u32 * sumBase, ptrdiff_t sumStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    uint32x4_t v_zero = vmovq_n_u32(0u);
    }
    
    #if GTEST_OS_SYMBIAN
  // These are needed as the Nokia Symbian Compiler cannot decide between
  // const T& and const T* in a function template. The Nokia compiler _can_
  // decide between class template specializations for T and T*, so a
  // tr1::type_traits-like is_pointer works, and we can overload on that.
  template <typename T>
  inline void StreamHelper(internal::true_type /*is_pointer*/, T* pointer) {
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
  }
  template <typename T>
  inline void StreamHelper(internal::false_type /*is_pointer*/,
                           const T& value) {
    // See the comments in Message& operator <<(const T&) above for why
    // we need this using statement.
    using ::operator <<;
    *ss_ << value;
  }
#endif  // GTEST_OS_SYMBIAN
    
    // To write value-parameterized tests, first you should define a fixture
// class. It is usually derived from testing::TestWithParam<T> (see below for
// another inheritance scheme that's sometimes useful in more complicated
// class hierarchies), where the type of your parameter values.
// TestWithParam<T> is itself derived from testing::Test. T can be any
// copyable type. If it's a raw pointer, you are responsible for managing the
// lifespan of the pointed values.
    
    #include 'sample1.h'
    
      /*!
  * \brief Issues dequantize operation to be scheduled by the engine
  * Decompresses `from` into `to` using current parameters of `type` and `threshold`
  * \param from the ndarray containing quantized data
  * \param to the target ndarray which contains final dequantized data
  * \param priority Priority of the action.
  */
  void Dequantize(const mxnet::NDArray &from, mxnet::NDArray *to, const int priority);
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file ndarray_function-inl.h
 * \brief The real implementation of NDArray functions.
 */
#ifndef MXNET_NDARRAY_NDARRAY_FUNCTION_INL_H_
#define MXNET_NDARRAY_NDARRAY_FUNCTION_INL_H_
    
      void Run(const RunContext& rctx) {
    // setup DLTensor
    for (size_t i = 0; i < array_loc_.size(); ++i) {
      values_[array_loc_[i]].v_handle =
          const_cast<DLTensor*>(&(array_data_[i].data().dltensor()));
    }
    // run the packed function
    TVMRetValue rv;
    TVMArgs args(&values_[0], &type_codes_[0], values_.size());
    if (ctx().dev_type == Context::kGPU) {
#if MXNET_USE_CUDA
      // pass stream via last argument.
      void* strm = static_cast<void*>(rctx.get_stream<gpu>()->stream_);
      int dev_type = kDLGPU;
      fset_stream_(dev_type, rctx.ctx.dev_id, strm);
      func_.CallPacked(args, &rv);
      fset_stream_(dev_type, rctx.ctx.dev_id, nullptr);
#else
      LOG(FATAL) << 'Please compile with CUDA enabled for cuda features';
#endif
    } else {
      func_.CallPacked(args, &rv);
    }
  }
    
    Crop the 2nd and 3rd dim of input data, with the corresponding size of h_w or
with width and height of the second input symbol, i.e., with one input, we need h_w to
specify the crop height and width, otherwise the second input symbol's size will be used
)code' ADD_FILELINE)
    
    
    {    typename DataType<DType>::ScaleType alpha = (req[bs::kData] == kNullOp) ? 0.0f : 1.0f;
    typename DataType<DType>::ScaleType beta = (req[bs::kData] == kAddTo) ? 1.0f : 0.0f;
    typename DataType<DType>::ScaleType alpha_dgrid = 1.0f;
    typename DataType<DType>::ScaleType beta_dgrid = 0.0f;
    CUDNN_CALL(cudnnSpatialTfSamplerBackward(s->dnn_handle_,
                                             st_desc_,
                                             &alpha,
                                             in_desc_,
                                             data.dptr_,
                                             &beta,
                                             in_desc_/*reuse in_desc_*/,
                                             gdata.dptr_/*output*/,
                                             &alpha_dgrid,
                                             out_desc_/*reuse out_desc_*/,
                                             grad.dptr_,
                                             grid_tmp.dptr_,
                                             &beta_dgrid,
                                             grid_tmp.dptr_));
    Assign(ggrid, req[bs::kGrid], transpose(grid_tmp, Shape4(0, 3, 1, 2)));
  }
    
    
    {
    {        // For now reusing the shim to allow prefetch.
        // Please only use a subset of the shim interface that includes
        // Init()/StartEpoch()/GetMinibatch()/IsEndOfEpoch()
        // Shim will be deleted in the future versions.
        std::shared_ptr<ReaderShim<float>> m_shim;
        Microsoft::MSR::CNTK::StreamMinibatchInputs m_matrices;
    };
}

    
            switch (m_dataType)
        {
        case DataType::Float:
        {
            auto matrix = GetMatrix<float>();
            matrix->TransferFromDeviceToDevice(matrix->GetDeviceId(), AsCNTKImplDeviceId(device), /*isBeingMoved = */ true, /*emptyTransfer =*/ false, /*updatePreferredDevice =*/ true);
            matrix->CollapseDataLocation();
            break;
        }
        case DataType::Double:
        {
            auto matrix = GetMatrix<double>();
            matrix->TransferFromDeviceToDevice(matrix->GetDeviceId(), AsCNTKImplDeviceId(device), /*isBeingMoved = */ true, /*emptyTransfer =*/ false, /*updatePreferredDevice =*/ true);
            matrix->CollapseDataLocation();
            break;
        }
        case DataType::Float16:
        {
            auto matrix = GetMatrix<half>();
            matrix->TransferFromDeviceToDevice(matrix->GetDeviceId(), AsCNTKImplDeviceId(device), /*isBeingMoved = */ true, /*emptyTransfer =*/ false, /*updatePreferredDevice =*/ true);
            matrix->CollapseDataLocation();
            break;
        }
        case DataType::Int8:
        {
            auto matrix = GetMatrix<char>();
            matrix->TransferFromDeviceToDevice(matrix->GetDeviceId(), AsCNTKImplDeviceId(device), /*isBeingMoved = */ true, /*emptyTransfer =*/ false, /*updatePreferredDevice =*/ true);
            matrix->CollapseDataLocation();
            break;
        }
        case DataType::Int16:
        {
            auto matrix = GetMatrix<short>();
            matrix->TransferFromDeviceToDevice(matrix->GetDeviceId(), AsCNTKImplDeviceId(device), /*isBeingMoved = */ true, /*emptyTransfer =*/ false, /*updatePreferredDevice =*/ true);
            matrix->CollapseDataLocation();
            break;
        }
        default:
            LogicError('NDArrayView::ChangeDevice: Unsupported DataType %s', DataTypeName(m_dataType));
            break;
        }
    
            if (sectionOffset.size() > m_maskShape.Rank())
            LogicError('NDMask::MaskSection: The sectionOffset dimensionality (%d) must be <= rank (%d) of 'this' mask.', (int)sectionOffset.size(), (int)m_maskShape.Rank());
    
        template <typename T>
    inline void ValidateType(const Dictionary& dict, const std::wstring& typeValue, size_t currentVersion)
    {
        if (!dict.Contains(typeKey))
        {
            const auto& version = GetVersion(dict);
            LogicError('Required key '%ls' is not found in the dictionary (%s).',
                       typeKey.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        } 
    }
    
            dict[versionKey] = CurrentVersion();
        dict[typeKey] = s_variableTypeValue;
        dict[uidKey] = Uid();
        dict[kindKey] = static_cast<size_t>(Kind());
        dict[dataTypeKey] = static_cast<size_t>(GetDataType());
        const auto& dynamicAxes = DynamicAxes();
        vector<DictionaryValue> dictionaryValueVector; 
        dictionaryValueVector.reserve(dynamicAxes.size());
        for (const auto& axis : dynamicAxes)
            dictionaryValueVector.push_back(axis);
    
            VariableFields(const NDShape& shape, VariableKind varType, ::CNTK::DataType type, const std::weak_ptr<Function>& ownerFunction, const NDArrayViewPtr& value, bool needsGradient, const std::vector<Axis>& dynamicAxes, bool isSparse, const std::wstring& name, const std::wstring& uid)
            : m_shape(shape), m_varKind(varType), m_dataType(type), m_ownerFunction(ownerFunction), m_value(value), m_needsGradient(needsGradient), m_dynamicAxes(dynamicAxes), m_isSparse(isSparse), m_name(name), m_uid(uid), m_valueTimeStamp(0)
        {
            if (value && (type != value->GetDataType()))
                InvalidArgument('The DataType of the Parameter/Constant Variable '%S' does not match the DataType of the associated Value', AsString().c_str());
    }
    
    
    {    ~CrossProcessMutex()
    {
        if (m_handle != NULL)
        {
            Release();
        }
    }
};
    
    
    {
    {        let nodeSet = config[id];
        let nodes = ScriptableObjects::ConfigArray::FlattenedVectorFrom<ComputationNodeBasePtr>(nodeSet);
        for (let& node : nodes)
        {
            node->SetTag(nodeGroup);
            workList.push_back(node);
        }
    }
}
    
    private:
    // TODO: member variables go to the end
    Matrix<ElemType> mAlpha;
    Matrix<ElemType> mBacktrace;
    
            auto parent = iter->second;
        auto& aliasInfo = m_aliasGroups[parent];
        if (aliasInfo.pMatrixPtr == nullptr)
            LogicError('double releasing aliased matrix, or releasing before any allocation for the matrix');
    
    template<class ElemType>
void OptimizedRNNStackNode<ElemType>::BackpropTo(const size_t inputIndex, const FrameRange& fr)
{
    MBLayoutPtr mb = this->GetMBLayout();
    }