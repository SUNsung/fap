
        
        //
// Read the next few bits out of a bitstream. Will be given a backing buffer
// (buffer) that may still have data left over from previous reads
// (bufferNumBits).  Bitstream pointer (currByte) will be advanced when needed.
//
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    #include <ImfFramesPerSecond.h>
#include 'ImathFun.h'
    
    	    if (dataWindow.min.y % i.channel().ySampling)
	    {
		THROW (IEX_NAMESPACE::ArgExc, 'The minimum y coordinate of the '
				    'image's data window is not a multiple '
				    'of the y subsampling factor of '
				    'the \'' << i.name() << '\' channel.');
	    }
    
    #include 'ImfNamespace.h'
    
    //-------------------------------------------------------------------
// class InputPart:
//
// Same interface as InputFile. Please refer to InputFile.
//-------------------------------------------------------------------
    
      // Setup STARTUPINFO to redirect handles.
  STARTUPINFOA startup_info;
  ZeroMemory(&startup_info, sizeof(startup_info));
  startup_info.cb = sizeof(startup_info);
  startup_info.dwFlags = STARTF_USESTDHANDLES;
  startup_info.hStdInput = stdin_pipe_read;
  startup_info.hStdOutput = stdout_pipe_write;
  startup_info.hStdError = GetStdHandle(STD_ERROR_HANDLE);
    
    TEST_F(DefaultFieldComparatorTest,
       FloatingPointComparisonWithinFractionOrMargin) {
  const FieldDescriptor* field_float =
      descriptor_->FindFieldByName('optional_float');
  const FieldDescriptor* field_double =
      descriptor_->FindFieldByName('optional_double');
    }
    
    TEST_F(JsonObjectWriterTest, EmptyList) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->StartObject('')
      ->RenderString('test', 'value')
      ->StartList('empty')
      ->EndList()
      ->EndObject();
  EXPECT_EQ('{\'test\':\'value\',\'empty\':[]}', CloseStreamAndGetString());
}
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
    
    void MapLiteTestUtil::ExpectMapFieldsModified(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsModified<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
    TEST(TemplateUtilTest, TestIdentity) {
  EXPECT_TRUE(
      (type_equals_<GOOGLE_NAMESPACE::identity_<int>::type, int>::value));
  EXPECT_TRUE(
      (type_equals_<GOOGLE_NAMESPACE::identity_<void>::type, void>::value));
}
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    // Size of buffer used to read a line from a box file.
const int kBoxReadBufSize = 1024;
    
    
    {  // Best available image.
  Pix* pix_;
  // True if the source image is white-on-black.
  bool inverse_;
  // Block the word came from. If not null, block->re_rotation() takes the
  // 'untransformed' coordinates even further back to the original image.
  // Used only on the first DENORM in a chain.
  const BLOCK* block_;
  // Rotation to apply between translation to the origin and scaling.
  const FCOORD* rotation_;
  // Previous transformation in a chain.
  const DENORM* predecessor_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding x-coord. Owned by the DENORM.
  GenericVector<float>* x_map_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding y-coord. Owned by the DENORM.
  GenericVector<float>* y_map_;
  // x-coordinate to be mapped to final_xshift_ in the result.
  float x_origin_;
  // y-coordinate to be mapped to final_yshift_ in the result.
  float y_origin_;
  // Scale factors for x and y coords. Applied to pre-rotation system.
  float x_scale_;
  float y_scale_;
  // Destination coords of the x_origin_ and y_origin_.
  float final_xshift_;
  float final_yshift_;
};
    
      // Provides access to the ShapeTable that this classifier works with.
  virtual const ShapeTable* GetShapeTable() const = 0;
  // Provides access to the UNICHARSET that this classifier works with.
  // Must be overridden IFF GetShapeTable() returns nullptr.
  virtual const UNICHARSET& GetUnicharset() const;
    
                // Let's check the status.
            double statusValue = 0;
            auto status = ::CNTK::MakeSharedObject<::CNTK::NDArrayView>(::CNTK::DataType::Double, ::CNTK::NDShape{ 1 }, &statusValue, sizeof(double), ::CNTK::DeviceDescriptor::CPUDevice());
            std::vector<::CNTK::NDArrayViewPtr> aggregatedStatus { status };
            m_communicator->AggregateInPlace(aggregatedStatus, m_communicator->Workers());
    
    
    {            nodePtr = builder.CreateLearnableParameter(name, rows, cols);
            nodePtr->SetLearningRateMultiplier(0);
        }
        else if (pass == ndlPassFinal || (dynamic_pointer_cast<ComputationNode<ElemType>> (nodePtr))->Value().GetNumElements() != 0)
        {
            ElemType val = parameter[0]->GetScalar();
            m_net->InitLearnableParameters(nodePtr, L'fixedValue', val);
        }
    }
    else if (cnNodeType == L'RowSlice') // Note: This now maps onto SliceNode which specifies the end differently.
    {
        if (parameter.size() != 3)
            RuntimeError('RowSlice should have three parameters. Usage: RowSlice(startRowIndex, numRows, origNodeName.');
    
    template class NDLScript<half>;
template class NDLScript<float>;
template class NDLScript<double>;
    
        ComputationNetwork::BumpEvalTimeStamp(m_inputNodes);
    this->m_net->ForwardProp(m_outputNodes);
    
    
    {        std::vector<MAWorkerStatus> m_MAworkerStatus; 
        int                         m_numSyncPerformed; 
        size_t                      m_numWorkers; 
        size_t                      m_myRank;
        MASGDPerfStats              m_perfReporter;
        MPIWrapperPtr               m_pMPI;
        NcclComm                    m_nccl;
        DEVICEID_TYPE               m_deviceId;
 };
    
        bool ContainsAccumulatedResult(const ComputationNodeBasePtr& node) const
    {
        // Node contains accumulated result if it can be found in the list of accumulation nodes specified in
        // CriterionAccumulator constructor.
        return std::find(m_accumulatorCriterionNodes.begin(), m_accumulatorCriterionNodes.end(), node) !=
               m_accumulatorCriterionNodes.end();
    }