
        
         private:
#if defined(OS_MACOSX)
  void SetUpBundleOverrides();
#endif
    
    
    {}  // namespace
    
      v8::V8::Dispose();
    
    namespace atom {
    }
    
    #include 'base/callback.h'
#include 'base/location.h'
#include 'base/single_thread_task_runner.h'
#include 'uv.h'  // NOLINT(build/include)
    
    namespace atom {
    }
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_button, Initialize)

    
    std::string DownloadItem::GetFilename() const {
  return base::UTF16ToUTF8(
      net::GenerateFileName(GetURL(), GetContentDisposition(), std::string(),
                            download_item_->GetSuggestedFilename(),
                            GetMimeType(), 'download')
          .LossyDisplayName());
}
    
    #endif  // PYTHON_PROTO2_PYTHON_IMPL
#endif  // PYTHON_PROTO2_CPP_IMPL_V2
#endif  // PYTHON_PROTO2_CPP_IMPL_V1
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_SCOPED_PYOBJECT_PTR_H__

    
    const GeneratedCodeInfo::Annotation* FindAnnotationOnPath(
    const GeneratedCodeInfo& info, const string& source_file,
    const std::vector<int>& path) {
  std::vector<const GeneratedCodeInfo::Annotation*> annotations;
  FindAnnotationsOnPath(info, source_file, path, &annotations);
  if (annotations.empty()) {
    return NULL;
  }
  return annotations[0];
}
    
    // Functions to create C# XML documentation comments.
// Currently this only includes documentation comments containing text specified as comments
// in the .proto file; documentation comments generated just from field/message/enum/proto names
// is inlined in the relevant code. If more control is required, that code can be moved here.
    
    void EnumGenerator::Generate(io::Printer* printer) {
  WriteEnumDocComment(printer, descriptor_);
  printer->Print('$access_level$ enum $name$ {\n',
                 'access_level', class_access_level(),
                 'name', descriptor_->name());
  printer->Indent();
  std::set<string> used_names;
  std::set<int> used_number;
  for (int i = 0; i < descriptor_->value_count(); i++) {
      WriteEnumValueDocComment(printer, descriptor_->value(i));
      string original_name = descriptor_->value(i)->name();
      string name = GetEnumValueName(descriptor_->name(), descriptor_->value(i)->name());
      // Make sure we don't get any duplicate names due to prefix removal.
      while (!used_names.insert(name).second) {
        // It's possible we'll end up giving this warning multiple times, but that's better than not at all.
        GOOGLE_LOG(WARNING) << 'Duplicate enum value ' << name << ' (originally ' << original_name
          << ') in ' << descriptor_->name() << '; adding underscore to distinguish';
        name += '_';
      }
      int number = descriptor_->value(i)->number();
      if (!used_number.insert(number).second) {
          printer->Print('[pbr::OriginalName(\'$original_name$\', PreferredAlias = false)] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      } else {
          printer->Print('[pbr::OriginalName(\'$original_name$\')] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      }
  }
  printer->Outdent();
  printer->Print('}\n');
  printer->Print('\n');
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void MessageGenerator::Generate(io::Printer* printer) {
  std::map<string, string> vars;
  vars['class_name'] = class_name();
  vars['access_level'] = class_access_level();
    }
    
    void PrimitiveFieldGenerator::GenerateMergingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'if ($other_has_property_check$) {\n'
    '  $property_name$ = other.$property_name$;\n'
    '}\n');
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_PRIMITIVE_FIELD_H__
    
    bool object_exists(const char *name) {
  int fd = shm_open(name, O_RDONLY, 0);
  if (fd >= 0) {
    close(fd);
    return true;
  } else {
    return false;
  }
}
    
    namespace {
    }
    
    X before running op:
[[0.5821691  0.07719802 0.50159824]
 [0.40952456 0.36788362 0.84887683]
 [0.02472685 0.65730894 0.9066397 ]]
X after running op:
[[1.7899168 1.080256  1.6513585]
 [1.5061016 1.4446739 2.3370204]
 [1.0250351 1.9295927 2.4759884]]
    
    REGISTER_CPU_OPERATOR(
    MergeSingleScalarFeatureTensorsGradient,
    MergeSingleScalarFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleScalarFeatureTensorsGradient)
    .SetDoc(
        'Explode multi-feature tensor of scalar features into one or more'
        'single-feature tensors' +
        doc)
    .NumInputs([](int n) { return n >= 2; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_presence', '.presence')
    .Input(1, '.values_grad', '.values_grad')
    .Output(0, 'in1_grad', '_grad of inputs');
REGISTER_GRADIENT(
    MergeSingleScalarFeatureTensors,
    GetMergeSingleScalarFeatureTensorsGradient);
    
    
    {
    {SHOULD_NOT_DO_GRADIENT(FindDuplicateElements);
} // namespace
} // namespace caffe2

    
    <details>
    
    template <typename T, class Context>
class FloorOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  USE_SIMPLE_CTOR_DTOR(FloorOp);
    }
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    template <class FullyConnectedOp>
bool RunFullyConnectedOpOnCUDADevice(
    const bool float16_compute,
    FullyConnectedOp* op) {
  if (op->Input(0).template IsType<float>()) {
    return op->template DoRunWithType<
        float, // X
        float, // W
        float, // B
        float, // Y
        float>(); // Math
  } else if (op->Input(0).template IsType<float16>()) {
    if (float16_compute) {
      const cudaDeviceProp& prop = GetDeviceProperty(0);
      if (prop.major >= kFp16CUDADevicePropMajor) {
        return op->template DoRunWithType<
            float16, // X
            float16, // W
            float16, // B
            float16, // Y
            float16>(); // Math
      } else {
        LOG(INFO) << 'CUDA Device does not support FP16 computation, '
                     'falling back to FP32.';
        return op->template DoRunWithType<
            float16, // X
            float16, // W
            float16, // B
            float16, // Y
            float>(); // Math
      }
    } else {
      return op->template DoRunWithType<
          float16, // X
          float16, // W
          float16, // B
          float16, // Y
          float>(); // Math
    }
  } else {
    CAFFE_THROW('Unsupported type');
  }
  return false;
}
    
    #define TEMPL_MAKE_ENUM_TYPE_INFO(m_enum, m_impl)                                                                                                                                 \
	template <>                                                                                                                                                                   \
	struct GetTypeInfo<m_impl> {                                                                                                                                                  \
		static const Variant::Type VARIANT_TYPE = Variant::INT;                                                                                                                   \
		static inline PropertyInfo get_class_info() {                                                                                                                             \
			return PropertyInfo(Variant::INT, String(), PROPERTY_HINT_NONE, String(), PROPERTY_USAGE_DEFAULT | PROPERTY_USAGE_CLASS_IS_ENUM, String(#m_enum).replace('::', '.')); \
		}                                                                                                                                                                         \
	};
    
    
    {		Map<StringName, ShaderLanguage::ShaderNode::Uniform> *uniforms;
	};
    
    	virtual void canvas_render_items(Item *p_item_list, int p_z, const Color &p_modulate, Light *p_light, const Transform2D &p_transform);
	virtual void canvas_debug_viewport_shadows(Light *p_lights_with_shadow);
    
    
    {	return memnew(SemaphorePosix);
}
    
    	static Error set_name_func_posix(const String &p_name);
    
    	if (worked) {
    }
    
    #endif

    
    #include 'os/mutex.h'
#include <windows.h>
/**
	@author Juan Linietsky <reduzio@gmail.com>
*/
class MutexWindows : public Mutex {
    }
    
    
    {	if (sockfd != -1)
		::closesocket(sockfd);
	sockfd = -1;
	sock_type = IP::TYPE_NONE;
	rb.resize(16);
	queue_count = 0;
}
    
    #endif

    
    void TCPServerWinsock::stop() {
    }
    
    DWORD ThreadWindows::thread_callback(LPVOID userdata) {
    }
    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }
    
    template <typename Dtype>
class LayerRegistry {
 public:
  static ::caffe::Layer<Dtype> * CreateLayer(const ::caffe::LayerParameter& param) {
    ::caffe::shared_ptr< ::caffe::Layer<Dtype> > ptr =
      ::caffe::LayerRegistry<Dtype>::CreateLayer(param);
    // avoid caffe::layer destructor, which deletes the weights layer owns
    new ::caffe::shared_ptr< ::caffe::Layer<Dtype> >(ptr);
    return ptr.get();
  }
};
    
    static inline bool is_env_set(const char *var) {
  return dmlc::GetEnv(var, INT_MIN) != INT_MIN;
}
    
    template <std::size_t kNumGpus, std::size_t kStreams>
StreamManager<kNumGpus, kStreams>::StreamManager() {
#if MXNET_USE_CUDA
  for (std::size_t i = 0; i < kNumGpus; ++i) {
    gpu_cnt_.at(i) = -1;
  }
  for (auto&& i : gpu_io_streams_) {
    i = nullptr;
  }
#endif  // MXNET_USE_CUDA
}
    
    ThreadedOpr* ThreadedEngine::NewOperator(
    ThreadedEngine::AsyncFn fn,
    std::vector<VarHandle> const& const_vars,
    std::vector<VarHandle> const& mutable_vars,
    FnProperty prop,
    const char* opr_name,
    bool wait) {
  auto ret = ThreadedOpr::New();
  ret->opr_name = opr_name;
  ret->fn = std::move(fn);
  ret->prop = prop;
  ret->const_vars.resize(const_vars.size());
  ret->mutable_vars.resize(mutable_vars.size());
  ret->wait = wait;
  std::transform(const_vars.begin(), const_vars.end(),
                 ret->const_vars.begin(), ThreadedVar::CastFromBase);
  std::transform(mutable_vars.begin(), mutable_vars.end(),
                 ret->mutable_vars.begin(), ThreadedVar::CastFromBase);
  if (ENGINE_DEBUG != 0) {
    CheckDuplicate(const_vars, mutable_vars);
  }
  return ret;
}
    
    template<typename AttrType, typename FInfer>
bool ApplyOpInferAttr(const nnvm::Graph& g,
                      const FInfer& finfer,
                      const NodeAttrs& attrs,
                      const uint32_t nid,
                      std::vector<AttrType>* in_attrs,
                      std::vector<AttrType>* out_attrs,
                      DispatchMode* dispatch_mode) {
  return finfer(attrs, in_attrs, out_attrs);
}
    
    namespace guetzli {
    }
    
    
    {  // Returns a heuristic cutoff on block errors in the sense that we won't
  // consider distortions where a block error is greater than this.
  virtual float BlockErrorLimit() const = 0;
  // Given the search direction (+1 for upwards and -1 for downwards) and the
  // current distance map, fills in *block_weight image with the relative block
  // error adjustment weights.
  // The target_mul param has the same semantics as in DistanceOK().
  // Note that this is essentially a static function in the sense that it does
  // not depend on the last Compare() call.
  virtual void ComputeBlockErrorAdjustmentWeights(
      int direction, int max_block_dist, double target_mul, int factor_x,
      int factor_y, const std::vector<float>& distmap,
      std::vector<float>* block_weight) = 0;
};
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    // Represents one component of a jpeg file.
struct JPEGComponent {
  JPEGComponent() : id(0),
                    h_samp_factor(1),
                    v_samp_factor(1),
                    quant_idx(0),
                    width_in_blocks(0),
                    height_in_blocks(0) {}
    }
    
    #include 'guetzli/jpeg_data.h'
    
    // Keep this data global and non-const, so the compiler cannot make
// any assumptions about the actual values at compile time
    
    BENCHMARK(exception_ptr_create_and_throw_concurrent, iters) {
  std::atomic<bool> go(false);
  std::vector<std::thread> threads;
  BENCHMARK_SUSPEND {
    for (int t = 0; t < FLAGS_num_threads; ++t) {
      threads.emplace_back([&go, iters] {
        while (!go) { }
        std::runtime_error e('payload');
        for (size_t i = 0; i < iters; ++i) {
          auto ep = std::make_exception_ptr(e);
          try {
            std::rethrow_exception(ep);
          } catch (std::runtime_error&) {
          }
        }
      });
    }
  }
  go.store(true);
  for (auto& t : threads) {
    t.join();
  }
}
    
    #include <atomic>
    
    void BENCHFUN(short_append)(size_t iters, size_t arg) {
  FOR_EACH_RANGE (i, 0, iters) {
    STRING s;
    FOR_EACH_RANGE (j, 0, arg) {
      s += '012';
    }
  }
}
BENCHMARK_PARAM(BENCHFUN(short_append), 23)
BENCHMARK_PARAM(BENCHFUN(short_append), 1024)
    
    #include <boost/random.hpp>
    
    void BENCHFUN(insertFront)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.insert(v.begin(), obj); }
  });
}
    
    TEST(fbvector, clause_23_3_6_1_3_ambiguity) {
  fbvector<int> v(10, 20);
  EXPECT_EQ(v.size(), 10);
  FOR_EACH (i, v) {
    EXPECT_EQ(*i, 20);
  }
}
    
      // write-like
  ssize_t operator()(int fd, void* buf, size_t count);
    
    void initialize() {
  std::mt19937 rng;
  for (int i = 0; i < kMaxIds; i++) {
    ids[i] = (((uint64_t)rng()) << 32) | rng();
  }
  // Use randomly generated words.  These numbers are out of my hat and
  // probably wrong.
  // word length = uniformly distributed between 1 and 10
  // charset = 0x20 - 0x7f
  std::uniform_int_distribution<size_t> term_len(1, 10);
  std::uniform_int_distribution<uint16_t> term_char(0x20, 0x7f);
  for (int i = 0; i < kMaxTerms; i++) {
    std::string& term = terms[i];
    int len = term_len(rng);
    term.reserve(len);
    for (int j = 0; j < len; j++) {
      term.append(1, (char)term_char(rng));
    }
  }
}
    
    TEST(FunctionRef, Traits) {
  static_assert(std::is_literal_type<FunctionRef<int(int)>>::value, '');
// Some earlier versions of libstdc++ lack these traits. Frustrating that
// the value of __GLIBCXX__ doesn't increase with version, but rather reflects
// release date, so some larger values of __GLIBCXX__ lack the traits while
// some smaller values have them. Can't figure out how to reliably test for the
// presence or absence of the traits. :-(
#if !defined(__GLIBCXX__) || __GNUC__ >= 5
  static_assert(
      std::is_trivially_copy_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_move_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_constructible<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
  static_assert(
      std::is_trivially_copy_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_move_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_assignable<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
#endif
  static_assert(
      std::is_nothrow_copy_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_move_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_constructible<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
  static_assert(
      std::is_nothrow_copy_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_move_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_assignable<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
}
    
    int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  folly::runBenchmarks();
  return 0;
}
