
        
            // Operator signature declaration.
    // It defines input formal parameter, output formal parameters and
    // attributes.
    // Once an operator signature created, it's 'Read-Only'.
    class OpSignature
    {
    public:
    }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(Hardmax)
        .Description('Compute the hardmax normalized values for each layer in the batch '
            'of the given input. The input is a 2-D tensor (Tensor<float>) of size '
            '(batch_size x input_feature_dimensions). The output tensor has the same shape '
            'and contains the softmax normalized values of the corresponding input. '
            '\n'
            'X does not need to explicitly be a 2D vector; rather, it will be coerced into '
            'one. For an arbitrary n-dimensional tensor X in [a_0, a_1, ..., a_{k-1}, '
            'a_k, ..., a_{n-1}] and k is the axis provided, then X will be coerced into a '
            '2-dimensional tensor with dimensions [a_0 * ... * a_{k-1}, a_k * ... * a_{n-1}]. '
            'For the default case where axis=1, this means the X tensor will be coerced into '
            'a 2D tensor of dimensions [a_0, a_1 * ... * a_{n-1}], where a_0 is often the '
            'batch size.  In this situation, we must have a_0 = N and a_1 * ... * a_{n-1} = D. '
            'Each of these dimensions must be matched correctly, or else the operator will '
            'throw errors.')
        .Input('input', 'The input tensor that's coerced into a 2D matrix of size (NxD) as '
            'described above.', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('axis', 'Default to 1; describes the axis of the inputs when coerced to 2D; '
            'defaults to one because the 0th axis most likely describes the batch size.',
            AttrType::AttributeProto_AttributeType_INT, int64_t(1));
    
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
    
        virtual void BackpropToNonLooping(size_t inputIndex) override
    {
        FrameRange fr(Input(0)->GetMBLayout());
        if (inputIndex == 0)
            LogicError('DummyCriterionNode: Gradients with respect to objective features are not necessary, not implemented.\n');
        else if (inputIndex == 1)
            LogicError('DummyCriterionNode: Gradients with respect to derivative features are not necessary, not implemented.\n');
        else if (inputIndex == 2)
        {
            // predictionsGradient += userSuppliedGradient * scalarGradientFromTop
            auto gradient = Input(2)->GradientFor(fr);
            Matrix<ElemType>::Multiply1x1AndWeightedAdd(+1.0f, /*gradient from top:*/Gradient() /*1x1*/, /*user-supplied gradient:*/Input(1)->ValueFor(fr), 1.0f, /*add to:*/gradient);
        }
    }
    
        // Returns all frames of a given utterance.
    msra::dbn::matrixstripe GetUtteranceFrames(size_t index) const
    {
        if (!IsInRam())
        {
            LogicError('GetUtteranceFrames was called when data have not yet been paged in.');
        }
    }
    
    using namespace Microsoft::MSR::CNTK;