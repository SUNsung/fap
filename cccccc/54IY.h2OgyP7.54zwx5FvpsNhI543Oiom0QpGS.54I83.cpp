
        
        // ResourceOpKernel<T> is a virtual base class for resource op implementing
// interface type T. The inherited op looks up the resource name (determined by
// ContainerInfo), and creates a new resource if necessary.
//
// Requirements:
//  - Op must be marked as stateful.
//  - Op must have `container` and `shared_name` attributes. Empty `container`
//  means using the default container. Empty `shared_name` means private
//  resource.
//  - Subclass must override CreateResource().
//  - Subclass is encouraged to override VerifyResource().
template <typename T>
class ResourceOpKernel : public OpKernel {
 public:
  explicit ResourceOpKernel(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context,
                   context->allocate_persistent(DT_STRING, TensorShape({2}),
                                                &handle_, nullptr));
  }
    }
    
    #include 'tensorflow/compiler/xla/service/hlo_module.h'
#include 'tensorflow/compiler/xla/service/hlo_pass_interface.h'
    
    
    { private:
  Cluster* cluster_;  // Not owned.
  int measurement_steps_;
  int measurement_threads_;
  std::vector<std::pair<string, Tensor>> feed_;
  std::vector<string> fetch_;
  std::unique_ptr<thread::ThreadPool> thread_pool_;
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // A PluginConfig describes the set of plugins to be used by a StreamExecutor
// instance. Each plugin is defined by an arbitrary identifier, usually best set
// to the address static member in the implementation (to avoid conflicts).
//
// A PluginConfig may be passed to the StreamExecutor constructor - the plugins
// described therein will be used to provide BLAS, DNN, FFT, and RNG
// functionality. Platform-appropriate defaults will be used for any un-set
// libraries. If a platform does not support a specified plugin (ex. cuBLAS on
// an OpenCL executor), then an error will be logged and no plugin operations
// will succeed.
//
// The StreamExecutor BUILD target does not link ANY plugin libraries - even
// common host fallbacks! Any plugins must be explicitly linked by dependent
// targets. See the cuda, opencl and host BUILD files for implemented plugin
// support (search for 'plugin').
class PluginConfig {
 public:
  // Value specifying the platform's default option for that plugin.
  static const PluginId kDefault;
    }
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
    bool HloReachabilityMap::SetReachabilityToUnion(
    tensorflow::gtl::ArraySlice<const HloInstruction*> inputs,
    const HloInstruction* instruction) {
  BitVector& bit_vector = GetBitVector(instruction);
  tmp_bit_vector_ = bit_vector;
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
            // get MB size and tell Network to update its nodes' buffers based on what's in the input matrices
        // Note: Decimation may have reduced this to 0 frames. We still must return 'true'.
        // BUGBUG: This has a definitional problem once we support multiple feature streams with different lengths.
        // BUGBUG: We should discount gaps.
        actualMBSize = net->DetermineActualMBSizeFromFeatures();
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(ScaledTanh)
        .Description('ScaledTanh takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the scaled hyperbolic tangent function, '
            'f(x) = alpha*tanh⁡(beta*x), is applied to the  tensor elementwise.')
        .Input('input', 'Input tensor, typically 1-D.', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('beta', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT);
    
        // Taken from Caffe2
    REGISTER_OPERATOR_SCHEMA(MaxRoiPool)
        .Description('ROI max pool consumes an input tensor X and region of interests (RoIs) to '
            'apply max pooling across each RoI, to produce output 4-D tensor of shape '
            '(num_rois, channels, pooled_shape[0], pooled_shape[1]).')
        .Input('X', 'The input 4-D tensor of data. Only NCHW order is currently supported.', 'T')
        .Input('rois', 'RoIs (Regions of Interest) to pool over. Should be a 2-D tensor of '
            'shape (num_rois, 5) given as [[batch_id, x1, y1, x2, y2], ...].', 'T')
        .Output('Y', 'RoI pooled output 4-D tensor of shape '
            '(num_rois, channels, pooled_h, pooled_w).', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('pooled_shape', 'ROI pool output shape (height, width).',
            AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('spatial_scale', 'Multiplicative spatial scale factor to translate ROI '
            'coordinates from their input scale to the scale used when pooling (Default: 1.0).',
            AttrType::AttributeProto_AttributeType_FLOAT, float(1.0));
    
        ConfigParameters streamConfig = input(inputName);
    
    extern JSClass  *jsb_cocos2d_Physics3DComponent_class;
extern JSObject *jsb_cocos2d_Physics3DComponent_prototype;
    
    
    
        cobj = (CocosDenshion::SimpleAudioEngine*)tolua_tousertype(tolua_S,1,0);
    
    
    
    
    
    
    
    #ifndef AddPair_H
#define AddPair_H
    
    		b2Body* ground;
		{
			b2BodyDef bd;
			bd.position.Set(0.0f, 20.0f);
			ground = m_world->CreateBody(&bd);
    }
    
    			b2EdgeShape shape;
    
    ////////////////////////////////////////////////////////////////////////////////
/// Disclaimer: This is intended only as a partial stand-in for
/// std::pmr::memory_resource (C++17) as needed for developing a
/// hazptr prototype.
////////////////////////////////////////////////////////////////////////////////
    
    #include <folly/Format.h>
#include <folly/Range.h>
#include <folly/experimental/io/HugePages.h>
#include <folly/portability/GFlags.h>
#include <folly/system/MemoryMapping.h>
    
    #include <boost/operators.hpp>
    
    
    {
    {    // Wait for notification from the I/O thread that it has done work.
    ioCV_.wait(data.getUniqueLock());
  }
}
    
    namespace folly {
    }
    
    namespace folly {
    }
    
    
    { protected:
  const uint8_t *data_;
  uint8_t byte_width_;
};
    
    // Return the epilogue of the generated header file.
grpc::string GetHeaderEpilogue(grpc_generator::File *file,
                               const Parameters &params);
    
    // Generates Server method signature source
void GenerateServerMethodSignature(const grpc_generator::Method *method, grpc_generator::Printer *printer,
                                   std::map<grpc::string, grpc::string> vars) {
	vars['Method'] = exportName(method->name());
	vars['Request'] = method->get_input_type_name();
	vars['Response'] = (vars['CustomMethodIO'] == '') ? method->get_output_type_name() : vars['CustomMethodIO'];
	if (method->NoStreaming()) {
		printer->Print(vars, '$Method$($context$.Context, *$Request$) (*$Response$, error)');
	} else if (ServerOnlyStreaming(method)) {
		printer->Print(vars, '$Method$(*$Request$, $Service$_$Method$Server) error');
	} else {
		printer->Print(vars, '$Method$($Service$_$Method$Server) error');
	}
}
    
    
    {  flatbuffers::grpc::MessageBuilder mb_;
};
    
    #include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace MyGame {
namespace Example {
    }
    }
    
      virtual grpc::string name() const = 0;
    
      // Modify any parsing / output options used by the other functions.
  void SetOptions(const IDLOptions &opts) { opts_ = opts; }
    
      // Create a FlatBuffer's `vector` from the `std::vector`.
  std::vector<flatbuffers::Offset<Weapon>> weapons_vector;
  weapons_vector.push_back(sword);
  weapons_vector.push_back(axe);
  auto weapons = builder.CreateVector(weapons_vector);
    
    std::string BaseGenerator::FullNamespace(const char *separator,
                                         const Namespace &ns) {
  std::string namespace_name;
  auto &namespaces = ns.components;
  for (auto it = namespaces.begin(); it != namespaces.end(); ++it) {
    if (namespace_name.length()) namespace_name += separator;
    namespace_name += *it;
  }
  return namespace_name;
}
    
    static void Warn(const flatbuffers::FlatCompiler *flatc,
                 const std::string &warn, bool show_exe_name) {
  (void)flatc;
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('warning: %s\n', warn.c_str());
}