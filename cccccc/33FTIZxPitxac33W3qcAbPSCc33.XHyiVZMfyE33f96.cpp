
        
                    // Initialize the necessary startup info struct        
            STARTUPINFOEX startupInfo{};
            if (S_OK == InitializeStartupInfoAttachedToPseudoConsole(&startupInfo, hPC))
            {
                // Launch ping to emit some text back via the pipe
                PROCESS_INFORMATION piClient{};
                hr = CreateProcess(
                    NULL,                           // No module name - use Command Line
                    szCommand,                      // Command Line
                    NULL,                           // Process handle not inheritable
                    NULL,                           // Thread handle not inheritable
                    FALSE,                          // Inherit handles
                    EXTENDED_STARTUPINFO_PRESENT,   // Creation flags
                    NULL,                           // Use parent's environment block
                    NULL,                           // Use parent's starting directory 
                    &startupInfo.StartupInfo,       // Pointer to STARTUPINFO
                    &piClient)                      // Pointer to PROCESS_INFORMATION
                    ? S_OK
                    : GetLastError();
    }
    
    /// A flag which, if set, causes access tracking to be suspended.
/// Accesses which begin while this flag is set will not be tracked,
/// will not cause exclusivity failures, and do not need to be ended.
///
/// This is here to support tools like debuggers.  Debuggers need to
/// be able to run code at breakpoints that does things like read
/// from a variable while there are ongoing formal accesses to it.
/// Such code may also crash, and we need to be able to recover
/// without leaving various objects in a permanent 'accessed'
/// state.  (We also need to not leave references to scratch
/// buffers on the stack sitting around in the runtime.)
SWIFT_RUNTIME_EXPORT
bool _swift_disableExclusivityChecking;
    
      /// A zero relative offset encodes a null reference.
  bool isNull() const & {
    return RelativeOffset == 0;
  }
    
      /// Return a callable function for swift_release_n.
  Constant *getReleaseN(CallInst *OrigI) {
    if (ReleaseN)
      return ReleaseN.get();
    auto *ObjectPtrTy = getObjectPtrTy();
    auto *Int32Ty = Type::getInt32Ty(getModule().getContext());
    auto *VoidTy = Type::getVoidTy(getModule().getContext());
    }
    
    
    {  /// This class provides a non-trivial .cxx_destruct method, but
  /// its .cxx_construct is trivial.  For backwards compatibility,
  /// when setting this flag, HasCXXStructors must be set as well.
  HasCXXDestructorOnly = 0x00100
};
inline ObjCClassFlags &operator|=(ObjCClassFlags &lhs, ObjCClassFlags rhs) {
  lhs = ObjCClassFlags(uint32_t(lhs) | uint32_t(rhs));
  return lhs;
}
inline ObjCClassFlags operator|(ObjCClassFlags lhs, ObjCClassFlags rhs) {
  return (lhs |= rhs);
}
    
    class DiagnosticConsumer;
class DiagnosticEngine;
    
    // Summary: The ExperimentalDependency* files contain infrastructure for a
// dependency system that, in the future, will be finer-grained than the current
// dependency system. At present--12/5/18--they are using the same input
// information as the current system and expected to produce the same results.
// In future, we'll gather more information, feed it into this dependency
// framework and get more selective recompilation.
//
// The frontend uses the information from the compiler to built a
// SourceFileDepGraph consisting of SourceFileDepGraphNodes.
// ExperimentalDependencies.* define these structures, and
// ExperimentalDependenciesProducer has the frontend-unique code used to build
// the SourceFileDepGraph.
//
// The driver reads the SourceFileDepGraph and integrates it into its dependency
// graph, a ModuleDepGraph consisting of ModuleDepGraphNodes.
    
      /// Encapsulate the invariant between where the node resides in
  /// nodesBySwiftDepsFile and the swiftDeps node instance variable here.
  void addToMap(ModuleDepGraphNode *n) {
    nodeMap.insert(n->getSwiftDeps().getValueOr(std::string()), n->getKey(), n);
  }
    
      /// In Single-threaded WMO mode, all inputs are used
  /// both for importing and compiling.
  bool IsSingleThreadedWMO = false;
    
        // use strings to print preset names in the perf test results:
    String preset_string = get<0>(params);
    int preset = DISOpticalFlow::PRESET_FAST;
    if (preset_string == 'PRESET_ULTRAFAST')
        preset = DISOpticalFlow::PRESET_ULTRAFAST;
    else if (preset_string == 'PRESET_FAST')
        preset = DISOpticalFlow::PRESET_FAST;
    else if (preset_string == 'PRESET_MEDIUM')
        preset = DISOpticalFlow::PRESET_MEDIUM;
    Size sz = get<1>(params);
    
    #include <ImfFloatVectorAttribute.h>
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    using namespace IMATH_NAMESPACE;
#include 'ImfNamespace.h'
    
    struct StreamIO
{
    static void
    writeChars (OStream &os, const char c[/*n*/], int n)
    {
        os.write (c, n);
    }
    }
    
    namespace python {
    }
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/compiler/plugin.pb.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/strutil.h>
    
    TEST_F(CppMetadataTest, CapturesEnumNames) {
  FileDescriptorProto file;
  GeneratedCodeInfo info;
  std::string pb_h;
  atu::AddFile('test.proto', kSmallTestFile);
  EXPECT_TRUE(
      CaptureMetadata('test.proto', &file, &pb_h, &info, NULL, NULL, NULL));
  EXPECT_EQ('Enum', file.enum_type(0).name());
  std::vector<int> enum_path;
  enum_path.push_back(FileDescriptorProto::kEnumTypeFieldNumber);
  enum_path.push_back(0);
  const GeneratedCodeInfo::Annotation* enum_annotation =
      atu::FindAnnotationOnPath(info, 'test.proto', enum_path);
  EXPECT_TRUE(NULL != enum_annotation);
  EXPECT_TRUE(atu::AnnotationMatchesSubstring(pb_h, enum_annotation, 'Enum'));
}
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    #include <google/protobuf/compiler/java/java_generator_factory.h>
    
    VARIANT_ENUM_CAST(XMLParser::NodeType);
    
    // Shorthands
typedef unsigned int	U;
typedef unsigned char	U1;
    
    	enum EmissionMode {
		EMISSION_MODE_SOLID,
		EMISSION_MODE_BORDER,
		EMISSION_MODE_BORDER_DIRECTED
	};
    
    
    {
    {
    {		} break;
	}
}
    
    	ConfirmationDialog *emission_mask;
	OptionButton *emission_mask_mode;
	CheckBox *emission_colors;
    
    		float cMax = MAX(cRed, MAX(cGreen, cBlue));
    
    public:
	int get_width() const; ///< Get image width
	int get_height() const; ///< Get image height
	Vector2 get_size() const;
	bool has_mipmaps() const;
	int get_mipmap_count() const;
    
    #include 'core/io/networked_multiplayer_peer.h'
#include 'core/reference.h'
    
    
    {		Vector3 normal;
		int indices[3];
	};
    
    	ERR_FAIL_COND(!custom_code_map.has(p_code_id));
	if (conditional_version.code_version == p_code_id) {
		conditional_version.code_version = 0; //do not keep using a version that is going away
		unbind();
	}
    
    template<typename DType>
struct MultiAllFiniteKernelParam {
  static const int N = 200;
  int count;
  size_t max_size;
  size_t sizes[N];
  DType *arrays[N];
};
    
    inline void AllFiniteCPU(const nnvm::NodeAttrs& attrs,
                         const OpContext &ctx,
                         const std::vector<TBlob> &inputs,
                         const std::vector<OpReqType> &req,
                         const std::vector<TBlob> &outputs) {
  using namespace mxnet_op;
  Stream<cpu>* s = ctx.get_stream<cpu>();
  const AllFiniteParam& op_param = nnvm::get<AllFiniteParam>(attrs.parsed);
  Tensor<cpu, 2, float> out = outputs[0].FlatTo2D<cpu, float>(s);
  if (op_param.init_output) {
    out = 1.;
  }
  MSHADOW_REAL_TYPE_SWITCH(inputs[0].type_flag_, DType, {
    Tensor<cpu, 2, DType> in = inputs[0].FlatTo2D<cpu, DType>(s);
    const int n = in.shape_.Size();
    Kernel<AllFiniteCPUKernel<DType>, cpu>::Launch(s, n, in.dptr_, out.dptr_);
  });
}
    
    using nnvm::Node;
using nnvm::NodePtr;
using nnvm::Graph;
    
    int MXSetIsNumpyShape(int is_np_shape, int* prev) {
  API_BEGIN();
  *prev = Imperative::Get()->set_is_np_shape(static_cast<bool>(is_np_shape));
  API_END();
}
    
      mxnet::TShape dshape = (*in_attrs)[0];
  for (size_t i = 1; i < 3; ++i) {
    SHAPE_ASSIGN_CHECK(*in_attrs, i, mxnet::TShape(1, 1));
  }
    
    inline void IndexArrayBuildSelectedAxesWorkspace(const mxnet::Tuple<int> &axes,
                                                 const std::vector<int64_t> &index_products,
                                                 int64_t* workspace,
                                                 const int ndim) {
  for (int i = 0; i < axes.ndim(); i++) {
    // Make sure that the axis is between 0 and ndim.
    const int axis = ((axes[i] % ndim) + ndim) % ndim;
    }
    }
    
                auto wx_md_n = mkldnn::memory::desc(
                { weights_layer_tz }, mkldnn_dtype, mkldnn::memory::format::ldgoi);
            DType* wx_n = bias_n + (L - 1) * ngates * H;  //  (L - 1) * ngates * H * H
            auto wx_memory_n =
                mkldnn::memory({ wx_md_n, cpu_engine }, wx_n);
            DType* wh_n = wx_n + (L - 1) * ngates * H * H;  //  (L - 1) * ngates * H * H
            auto wh_md_n = mkldnn::memory::desc(
                { weights_iter_tz }, mkldnn_dtype, mkldnn::memory::format::ldgoi);
            auto wh_memory_n =
                mkldnn::memory({ wh_md_n, cpu_engine }, wh_n);