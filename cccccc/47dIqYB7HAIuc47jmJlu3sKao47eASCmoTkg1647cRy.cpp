
        
        // This file defines a C++ DescriptorDatabase, which wraps a Python Database
// and delegate all its operations to Python methods.
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <string>
    
    void RepeatedPrimitiveFieldGenerator::GenerateCloningCode(io::Printer* printer) {
  printer->Print(variables_,
    '$name$_ = other.$name$_.Clone();\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
      assert(peekType(msg) == thpp::Type::LONG);
  int64_t arg2 = unpackInteger(msg);
  assert(arg2 == 100);
    
    bool cudnn_is_acceptable(const Tensor& self) {
  if (!globalContext().userEnabledCuDNN()) return false;
  if (!self.is_cuda()) return false;
  auto st = self.type().scalarType();
  if (!(st == kDouble || st == kFloat || st == kHalf)) return false;
  if (!AT_CUDNN_ENABLED()) return false;
  // NB: In the old Python code, there was also a test to see if the
  // cuDNN library was actually dynamically linked or not.  I'm not
  // sure if we can actually test this.
  return true;
}
    
    ${Tensor}::${Tensor}(Context* context)
: ${Tensor}(context,${THTensor}_new(${state})) {}
    
    
    {    std::shared_ptr<store_type> _store;
  };
    
        OperatorSchemaSetter&
        OperatorSchemaSetter::SinceVersion(int p_opSetVersion)
    {
        m_opSchema.m_opSignature.m_sinceVersion = p_opSetVersion;
        return *this;
    }
    
    namespace ONNXIR
{
    namespace Common
    {
        Status::Status(StatusCategory p_category, int p_code, const std::string& p_msg)
        {
            m_state.reset(new State());
            m_state->m_category = p_category;
            m_state->m_code = p_code;
            m_state->m_msg = p_msg;
        }
    }
    }
    
        //‘GREATER’, ‘LESS’, ‘EQUALS,
    REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Greater)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Less)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Equal)
    
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
    
    void TraceLSTMPathes(const FunctionPtr& src, string &f_activation, string &g_activation, string &h_activation,
    RNNDirection &direction, Variable &initStateH, Variable &initStateC, Variable &peepholeCi, Variable &peepholeCo, Variable &peepholeCf,
    double &stabilizer_dh, double &stabilizer_dc, double &stabilizer_c);
    
        Matrix<float> mA2sparseCSC(mA2dense.DeepClone());
    mA2sparseCSC.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSC, true);
    
    	jstring tag = (jstring)JNU_GetField(env, _log_info, 'tag', 'Ljava/lang/String;').l;
	jstring filename = (jstring)JNU_GetField(env, _log_info, 'filename', 'Ljava/lang/String;').l;
	jstring funcname = (jstring)JNU_GetField(env, _log_info, 'funcname', 'Ljava/lang/String;').l;
	jint line = JNU_GetField(env, _log_info, 'line', 'I').i;
	jlong pid = JNU_GetField(env, _log_info, 'pid', 'J').i;
	jlong tid = JNU_GetField(env, _log_info, 'tid', 'J').j;
	jlong maintid = JNU_GetField(env, _log_info, 'maintid', 'J').j;
    
    
    {        vecdump_.push_back(strstack);
        strstack.clear();
    }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
        if (((st.head_length + st.url_length + st.total_length) & 0xFF) != st.magic) return __LINE__;
    
        void* This() const {return m_this;}
    
    
    {  private:
    virtual void __OnAttach(const char* _key) {}
    virtual void __OnDetach(const char* _key) {}
};

    
    
/*
 * scop_jenv.cpp
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    class Config {
    }
    
    #pragma once
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }