
        
        #ifndef TENSORFLOW_COMMON_RUNTIME_SESSION_FACTORY_H_
#define TENSORFLOW_COMMON_RUNTIME_SESSION_FACTORY_H_
    
    
    {  TF_DISALLOW_COPY_AND_ASSIGN(RecordWriter);
};
    
      void CopyCPUTensorToDevice(const Tensor *cpu_tensor, Device *device,
                             Tensor *device_tensor,
                             StatusCallback done) const override;
    
    
    {    EXPECT_NE(a_1_1.get(), d_4_2.get());
    EXPECT_NE(a_1_1.get(), e_5_2.get());
    EXPECT_NE(d_4_1.get(), e_5_2.get());
  }
    
    #include <string>
#include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_shape.h'
#include 'tensorflow/core/framework/tensor_slice.pb.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#include 'tensorflow/core/lib/gtl/inlined_vector.h'
#include 'tensorflow/core/platform/logging.h'
    
      DebugGrpcIO::SetDebugNodeKeyGrpcState(
      kGrpcUrl1, 'foo:0:DebugIdentity',
      EventReply::DebugOpStateChange::READ_ONLY);
  DebugGrpcIO::SetDebugNodeKeyGrpcState(
      kGrpcUrl2, 'bar:0:DebugIdentity',
      EventReply::DebugOpStateChange::READ_ONLY);
    
    
    {        p_type = p_attr.type();
        if (AttrType::AttributeProto_AttributeType_UNDEFINED == p_type)
        {
            if (p_attr.has_f())
            {
                p_type = AttrType::AttributeProto_AttributeType_FLOAT;
            }
            else if (p_attr.has_i())
            {
                p_type = AttrType::AttributeProto_AttributeType_INT;
            }
            else if (p_attr.has_s())
            {
                p_type = AttrType::AttributeProto_AttributeType_STRING;
            }
            else if (p_attr.has_t())
            {
                p_type = AttrType::AttributeProto_AttributeType_TENSOR;
            }
            else if (p_attr.has_g())
            {
                p_type = AttrType::AttributeProto_AttributeType_GRAPH;
            }
            else if (p_attr.floats_size())
            {
                p_type = AttrType::AttributeProto_AttributeType_FLOATS;
            }
            else if (p_attr.ints_size())
            {
                p_type = AttrType::AttributeProto_AttributeType_INTS;
            }
            else if (p_attr.strings_size())
            {
                p_type = AttrType::AttributeProto_AttributeType_STRINGS;
            }
            else if (p_attr.tensors_size())
            {
                p_type = AttrType::AttributeProto_AttributeType_TENSORS;
            }
            else if (p_attr.graphs_size())
            {
                p_type = AttrType::AttributeProto_AttributeType_GRAPHS;
            }
            else
            {
                return Status(ONNX, FAIL, 'Invalid AttributeProto.');
            }
        }
        return Status::OK();
    }
    
    #define REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(OpName)                                                      \
    REGISTER_OPERATOR_SCHEMA(OpName)                                                                            \
        .Description('Returns the tensor resulted from performing the ''#OpName'' logical operation'            \
        'elementwise on the input tensors A and B. If broadcasting is enabled, the right-hand-side'             \
        'argument will be broadcasted to match the shape of left-hand-side argument. Refer to Add for'          \
        'a detailed description of the broadcasting rules.')                                                    \
        .Input('A', 'First operand, should share the type with the second operand.', 'T1')                      \
        .Input('B', 'Second operand. With broadcasting can be of smaller size than A.'                          \
            'If broadcasting is disabled, it should be of the same size.', 'T1')                                \
        .Output('C', 'Result, has same dimensions as A and type bool.', 'T2')                                   \
        .TypeConstraint('T1', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },                         \
                'Constrain input to float tensors.')                                                            \
        .TypeConstraint('T2', { 'tensor(bool)' }, 'Constrain output types to bool tensor.')                     \
        .Attr('axis', 'If set, defines the broadcast dimensions.',                                              \
            AttrType::AttributeProto_AttributeType_INT)                                                         \
        .Attr('broadcast', 'Pass 1 to enable broadcasting.',                                                    \
            AttrType::AttributeProto_AttributeType_INT);
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Conv)
        .Description('The convolution operator consumes an input tensor and a filter, and'
            'computes the output.')
        .Input('X',
             'Input data tensor from previous layer; has size (N x C x H x W)'
             ', where N is the batch size, C is the number of channels, and'
             ' H and W are the height and width. Note that this is for the 2D image.'
             'Otherwise the size is (N x D1 x D2 ... x Dn)',
             'T')
        .Input('W',
             'The weight tensor that will be used in the convolutions; has size (M x C x kH x kW), '
             'where C is the number of channels, and kH and kW are the height and width of the kernel, '
             'and M is the number of feature maps. For more than 2 dimensions, the kernel shape will be '
             '(M x C x k1 x k2 x ... x kn), where is the dimension of the kernel',
             'T')
        .Input('B',
            'Optional 1D bias to be added to the convolution, has size of M.',
            'T')
        .Output('Y',
              'Output data tensor that contains the result of the convolution. The '
              'output dimensions are functions of the kernel size, stride size, '
              'and pad lengths.',
              'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('auto_pad',
            'auto_pad must be either SAME_UPPER, SAME_LOWER or VALID. Where SAME_UPPER '
            'or SAME_LOWER mean pad the input so that the ouput size match the input. '
            'In case of odd number add the extra padding at the end for SAME_UPPER and '
            'at the begining for SAME_LOWER. VALID mean no padding, therefore, read the '
            'pixel values from the pads attribute.',
            AttrType::AttributeProto_AttributeType_STRING)
        .Attr('kernel_shape',
            'The shape of the convolution kernel.',
             AttrType::AttributeProto_AttributeType_INTS)
        .Attr('dilations',
            'dilation value along each axis of the filter.',
            AttrType::AttributeProto_AttributeType_INTS)
        .Attr('strides',
            'stride along each axis.',
            AttrType::AttributeProto_AttributeType_INTS)
        .Attr('pads',
            'Padding for lower and upper side along each axis, it can take any value greater '
            'than or equal to 0. The value represent the number of pixels added to the lower '
            'and upper part of the corresponding axis. So `pads` will have two values per axis, '
            'first value corresponding to the number of pixels added to the begining of the '
            'axis and the second value corresponding to the number of pixels add at the end '
            'of the axis.',
            AttrType::AttributeProto_AttributeType_INTS)
        .Attr('group',
            'number of groups input channels and output channels are divided into',
            AttrType::AttributeProto_AttributeType_INT);
    
                Equations:
              - Ht = Activation(Wi*Xt + Ri*Ht-1 + Wbi + Rbi)
            )DOC')
        .FillUsing(RNNDocGeneratorInputX())
        .Input('W',
            'The weight tensor for input gate. Concatenation of `Wi` and `WBi` '
            '(if bidirectional). The tensor has shape '
            '`[num_directions, hidden_size, input_size]`.', 'T')
        .Input('R',
            'The recurrence weight tensor. Concatenation of `Ri` and `RBi` '
            '(if bidirectional). The tensor has shape '
            '`[num_directions, hidden_size, hidden_size]`.', 'T')
        .Input('B',
            'The bias tensor for input gate. Concatenation of `[Wbi, Rbi]` '
            'and `[WBbi, RBbi]` (if bidirectional). The tensor has shape '
            '`[num_directions, 2*hidden_size]`, Optional: If not specified - assumed '
            'to be 0.', 'T',
            true)
        .FillUsing(RNNDocGeneratorInputSeqLen())
        .FillUsing(RNNDocGeneratorInputInitialH())
        .Attr('activations', 'One (or two if bidirectional) activation function for '
            'input gate. It must be one of tanh and ReLU. Default `tanh`.',
            AttrType::AttributeProto_AttributeType_STRINGS)
        .FillUsing(RNNDocGeneratorActivationArgs())
        .FillUsing(RNNDocGeneratorAttrOutput());
    
    
    REGISTER_OPERATOR_SCHEMA(TreeEnsembleRegressor)
        .SetDomain(c_mlDomain)
        .Input('X', 'Input N,F', 'T')
        .Output('Y', 'NxE floats', 'tensor(float)')
        .Description(R'DOC(
            Tree Ensemble regressor.  Returns the regressed values for each input in N.
            All args with nodes_ are fields of a tuple of tree nodes, and
            it is assumed they are the same length, and an index i will decode the
            tuple across these inputs.  Each node id can appear only once
            for each tree id.
            All fields prefixed with target_ are tuples of votes at the leaves.
            A leaf may have multiple votes, where each vote is weighted by
            the associated target_weights index.
            All trees must have their node ids start at 0 and increment by 1.
            Mode enum is BRANCH_LEQ, BRANCH_LT, BRANCH_GTE, BRANCH_GT, BRANCH_EQ, BRANCH_NEQ, LEAF
            )DOC')
        .TypeConstraint('T', { 'tensor(float)', 'tensor(double)', 'tensor(int64)', 'tensor(int32)' }, ' allowed types.')
        .Attr('nodes_treeids', 'tree id for this node', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_nodeids', 'node id for this node, node ids may restart at zero for each tree (but not required).', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_featureids', 'feature id for this node', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_values', 'thresholds to do the splitting on for this node.', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('nodes_hitrates', '', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('nodes_modes', 'enum of behavior for this node.  enum 'BRANCH_LEQ', 'BRANCH_LT', 'BRANCH_GTE', 'BRANCH_GT', 'BRANCH_EQ', 'BRANCH_NEQ', 'LEAF'', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('nodes_truenodeids', 'child node if expression is true', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_falsenodeids', 'child node if expression is false', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_missing_value_tracks_true', 'for each node, decide if the value is missing (nan) then use true branch, this field can be left unset and will assume false for all nodes', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('target_treeids', 'tree that this node is in', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('target_nodeids', 'node id that this weight is for', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('target_ids', 'index of the class list that this weight is for', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('target_weights', 'the weight for the class in target_id', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('n_targets', 'number of regression targets', AttrType::AttributeProto_AttributeType_INT)
        .Attr('post_transform', 'post eval transform for score, enum 'NONE', 'SOFTMAX', 'LOGISTIC', 'SOFTMAX_ZERO', 'PROBIT'', AttrType::AttributeProto_AttributeType_STRING)
        .Attr('aggregate_function', 'post eval transform for score,  enum 'AVERAGE', 'SUM', 'MIN', 'MAX'', AttrType::AttributeProto_AttributeType_STRING)
        .Attr('base_values', 'base values for regression, added to final score, size must be the same as n_outputs or can be left unassigned (assumed 0)', AttrType::AttributeProto_AttributeType_FLOATS);
    
        ConfigHelper config(feature);
    config.CheckFeatureType();
    
    FunctionPtr CreateRNN(const ONNXIR::Node *node, const std::vector<Variable> &inputs, const std::string &direction,
    const std::vector<string> &activations, const std::vector<float> &activation_alpha, const std::vector<float> &activation_beta);
    
        ComputationNodeBasePtr fromRoot = fromNet.GetNodeFromName(fromName);