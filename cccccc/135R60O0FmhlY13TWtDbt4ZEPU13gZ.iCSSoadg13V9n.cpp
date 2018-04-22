
        
        namespace routeguide {
class Feature;
    }
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    class CodegenTestMinimal : public ::testing::Test {};
    
      grpc::testing::interop::RunServer(
      grpc::testing::CreateInteropServerCredentials());
    
    
    { private:
  gpr_timespec start_time_;
  long num_queries_;
  std::mutex num_queries_mu_;
};
    
    
    {  grpc::string package = service->full_name();
  size_t pos = package.rfind('.' + service->name());
  if (pos != grpc::string::npos) {
    package.erase(pos);
    result.append('package: ' + package + ';\n');
  }
  result.append('service ' + service->name() + ' {\n');
  for (int i = 0; i < service->method_count(); ++i) {
    result.append(DescribeMethod(service->method(i)));
  }
  result.append('}\n\n');
  return result;
}
    
            void DecimateLattices(
            LatticePtr decimatedLattices,         /* output: lattices after decimation*/
            BoundariesPtr decimatedBoundaryPtr,   /* output: boundary after decimation*/
            ExtrauttMapPtr decimatedExtraMapPtr,  /* output: extramap after decimation*/
            UidPtr decimatedUidPtr,               /* output: Uid after decimation*/
            const Lattice lattices,               /* input: lattices to be decimated */
            const Boundaries boundaries,          /* input: boundary to be decimated */
            const ExtrauttMap extraMaps,          /* input: extra map to be decimated */
            const Uid uids,                       /* input: uid to be decimated*/
            pair<size_t, size_t> parallelSeqRange /* input: what parallel sequence range we are looking at */
            )
        {
            size_t parallelSeqStId = parallelSeqRange.first;
            size_t parallelSeqEnId = parallelSeqRange.second;
    }
    
    
    {        (*p_model).reset(new Model(std::move(modelProto)));
        if ((*p_model)->MainGraph() != nullptr)
        {
            RETURN_IF_ERROR((*p_model)->MainGraph()->Resolve());
        }
        return Status::OK();
    }
    
            // Get model's domain.
        // Return null pointer if not specified.
        const std::string& Domain() const;
        // Set models' damain.
        void SetDomain(const std::string& p_domain);
    
    
    {
    {        const std::string& Status::EmptyString()
        {
            static std::string s_emptyStr = '';
            return s_emptyStr;
        }
    }
}

    
    
    {
    {
    {
    {            }
        };
    }
}
    
            REGISTER_OPERATOR_SCHEMA(Not)
        .Description('Performs element-wise negation.')
        .Input('X', 'Input tensor of type bool.', 'T')
        .Output('Y', '  Output tensor of type bool.', 'T')
        .TypeConstraint('T', { 'tensor(bool)' }, 'Constrain input and output types to bool tensor.');
    
    #define REGISTER_ELEMENTWISE_BROADCAST_OPERATOR_SCHEMA(OpName)                                          \
    REGISTER_OPERATOR_SCHEMA(OpName)                                                                        \
        .Description(                                                                                        \
            'Performs element-wise binary '#OpName' (with limited broadcast support).'                        \
                                                                                                            \
            'If necessary, the right-hand-side argument will be broadcasted to match the shape of'            \
            'left-handside argument. When broadcasting is specified, the second tensor can either be of'    \
            'size 1 (a scalar value) or having its shape as a contiguous subset of the first tensor's'        \
            'shape. The starting of the mutually equal shape is specified by the argument \'axis\' and if'    \
            'it is not set, suffix matching is assumed. 1-dim expansion doesn't work yet. '                    \
                                                                                                            \
            'For example, the following tensor shapes are supported (with broadcast=1): '                    \
            'shape(A) = (2, 3, 4, 5), shape(B) = (,), i.e. B is a scalar'                                    \
            'shape(A) = (2, 3, 4, 5), shape(B) = (5,)'                                                        \
            'shape(A) = (2, 3, 4, 5), shape(B) = (4, 5)'                                                    \
            'shape(A) = (2, 3, 4, 5), shape(B) = (3, 4), with axis=1'                                        \
            'shape(A) = (2, 3, 4, 5), shape(B) = (2), with axis=0'                                            \
                                                                                                            \
            'Attribute broadcast=1 needs to be passed to enable broadcasting')                                \
        .Input('A', 'First operand, should share the type with the second operand.', 'T')                   \
        .Input('B', 'Second operand. With broadcasting can be of smaller size than A. '                     \
            'If broadcasting is disabled it should be of the same size..', 'T')                             \
        .Output('C', 'Result, has same dimensions and type as A.', 'T')                                     \
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },                      \
            'Constrain input and output types to float tensors.')                                           \
        .Attr('axis', 'If set, defines the broadcast dimensions.',                                          \
            AttrType::AttributeProto_AttributeType_INT)                                                     \
        .Attr('broadcast', 'Enable broadcasting.',                                                          \
            AttrType::AttributeProto_AttributeType_INT);
    
        REGISTER_OPERATOR_SCHEMA(Dropout)
        .Description('Dropout takes one input data (Tensor<float>) and produces two Tensor outputs, '
            'output (Tensor<float>) and mask (Tensor<bool>). Depending on whether it is in '
            'test mode or not, the output Y will either be a random dropout, or a simple '
            'copy of the input. Note that our implementation of Dropout does scaling in '
            'the training phase, so during testing nothing needs to be done.')
        .Input('data', 'The input data as Tensor.', 'T')
        .Output('output', 'The output.', 'T')
        .Output('mask',
            'The output mask. If is_test is nonzero, this output is not filled.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('ratio',
            '(float, default 0.5) the ratio of random dropout',
            AttrType::AttributeProto_AttributeType_FLOAT, float(0.5))
        .Attr('is_test',
            '(int, default 0) if nonzero, run dropout in test mode where '
            'the output is simply Y = X.',
            AttrType::AttributeProto_AttributeType_INT, int64_t(0));
    
        std::function<void(OperatorSchemaSetter&)> RNNDocGeneratorActivationArgs() {
        return [=](OperatorSchemaSetter& schema) {
            schema.Attr('activation_alpha',
                'Optional scaling values used by some activation functions.',
                AttrType::AttributeProto_AttributeType_FLOATS);
            schema.Attr('activation_beta',
                'Optional scaling values used by some activation functions.',
                AttrType::AttributeProto_AttributeType_FLOATS);
        };
    }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Concat)
        .Description('Concatenate takes as input a list of tensors, all of the same shape'
            'expect for the concatenation axis, and returns a single tensor, the concatenation'
            'of all inputs.')
        .Input('input', 'A list of input tensors.', 'T')
        .Output('concat_result', 'Concatenated tensor', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('axis', 'Axis along which to concatenate', AttrType::AttributeProto_AttributeType_INT);
    
    
    REGISTER_OPERATOR_SCHEMA(SVMRegressor)
        .SetDomain(c_mlDomain)
        .Input('X', 'Input N,F', 'T')
        .Output('Y', 'All target scores, N,E', 'tensor(float)')
        .Description(R'DOC(
            SVM regressor. Also supports oneclass svm.
            )DOC')
        .TypeConstraint('T', { 'tensor(float)', 'tensor(double)', 'tensor(int64)', 'tensor(int32)' }, ' allowed types.')
        .Attr('kernel_type', 'enum 'LINEAR', 'POLY', 'RBF', 'SIGMOID', defaults to linear', AttrType::AttributeProto_AttributeType_STRING)
        .Attr('kernel_params', 'Tensor of 3 elements containing gamma, coef0, degree in that order.  Zero if unused for the kernel.', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('post_transform', 'post eval transform for score, enum 'NONE', 'SOFTMAX', 'LOGISTIC', 'SOFTMAX_ZERO', 'PROBIT'', AttrType::AttributeProto_AttributeType_STRING)
        .Attr('vectors_per_class', '', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('support_vectors', '', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('n_supports', 'number of support vectors', AttrType::AttributeProto_AttributeType_INT)
        .Attr('coefficients', '', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('rho', '', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('one_class', 'If this regressor is a oneclass svm set this param to 1, otherwise use 0 (default is zero)', AttrType::AttributeProto_AttributeType_INT);
    
        TraceNode(const ScriptableObjects::IConfigRecordPtr configp);
    virtual void Save(File& fstream) const override;
    virtual void Load(File& fstream, size_t modelVersion) override;
    virtual void /*IComputationNode::*/ BeginForwardProp() override;
    virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override;
    virtual void /*ComputationNode::*/ BackpropTo(const size_t inputIndex, const FrameRange& fr) override;
    virtual void /*ComputationNode::*/ Validate(bool isFinalValidationPass) override;
    
        // Get start frame index inside chunk.
    size_t GetStartFrameIndexInsideChunk(size_t index) const
    {
        return m_firstFrames[index];
    }
    
    template <class ElemType>
ReaderShim<ElemType>::ReaderShim(ReaderPtr reader) :
    ReaderShim()
{
    m_reader = reader;
}
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
    IMGUI_API bool        ImGui_ImplGlfwGL2_Init(GLFWwindow* window, bool install_callbacks);
IMGUI_API void        ImGui_ImplGlfwGL2_Shutdown();
IMGUI_API void        ImGui_ImplGlfwGL2_NewFrame();
IMGUI_API void        ImGui_ImplGlfwGL2_RenderDrawData(ImDrawData* draw_data);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Setup ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_ImplDX11_Init(hwnd, g_pd3dDevice, g_pd3dDeviceContext);
    
        for (UINT i = 0; i < NUM_FRAMES_IN_FLIGHT; i++)
        if (g_pd3dDevice->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&g_frameContext[i].CommandAllocator)) != S_OK)
            return E_FAIL;