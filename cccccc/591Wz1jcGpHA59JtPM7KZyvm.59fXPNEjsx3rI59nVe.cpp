
        
          Status ExecuteOnStream(const ExecuteParams& params) override;
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CUDNN_BATCHNORM_THUNK_H_

    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    TriangularSolveThunk::TriangularSolveThunk(
    const TriangularSolveOptions& options,
    const BufferAllocation::Slice& a_buffer,
    const BufferAllocation::Slice& b_buffer, PrimitiveType type,
    int64 batch_size, int64 m, int64 n, int64 a_batch_stride,
    int64 b_batch_stride, const HloInstruction* hlo)
    : Thunk(Kind::kTriangularSolve, hlo),
      uplo_(options.lower() ? se::blas::UpperLower::kLower
                            : se::blas::UpperLower::kUpper),
      side_(options.left_side() ? se::blas::Side::kLeft
                                : se::blas::Side::kRight),
      unit_diagonal_(options.unit_diagonal() ? se::blas::Diagonal::kUnit
                                             : se::blas::Diagonal::kNonUnit),
      a_buffer_(a_buffer),
      b_buffer_(b_buffer),
      type_(type),
      batch_size_(batch_size),
      m_(m),
      n_(n),
      a_batch_stride_(a_batch_stride),
      b_batch_stride_(b_batch_stride) {
  transpose_a_ = [&] {
    switch (options.transpose_a()) {
      case TriangularSolveOptions::NO_TRANSPOSE:
        return se::blas::Transpose::kNoTranspose;
      case TriangularSolveOptions::TRANSPOSE:
        return se::blas::Transpose::kTranspose;
      case TriangularSolveOptions::ADJOINT:
        return se::blas::Transpose::kConjugateTranspose;
      default:
        LOG(ERROR) << 'Invalid triangular solve transpose value '
                   << options.transpose_a();
        return se::blas::Transpose::kNoTranspose;
    }
  }();
}
    
    // Creates a scalar ge computation and returns it.
XlaComputation CreateScalarGeComputation(PrimitiveType type,
                                         XlaBuilder* builder);
    
        Int64 _ljBase[MAX_CODE_LEN + 1];   // the 'left justified base' table.
                                       // Takes base[i] (i = code length)
                                       // and 'left justifies' it into an Int64
    
    
typedef TypedAttribute<float> FloatAttribute;
template <> IMF_EXPORT const char *FloatAttribute::staticTypeName ();
    
        if (magic != MAGIC)
    {
        throw IEX_NAMESPACE::InputExc ('File is not an image file.');
    }
    
    #include 'ImfIO.h'
#include 'ImfHeader.h'
#include 'ImfNamespace.h'
#include 'ImfExport.h'
    
    #include 'ImfGenericOutputFile.h'
    
        if (!isValidCompression (this->compression()))
  	throw IEX_NAMESPACE::ArgExc ('Unknown compression type in image header.');
    
    if(isDeepData(part_type))
    {
        if (!isValidDeepCompression (this->compression()))
            throw IEX_NAMESPACE::ArgExc ('Compression type in header not valid for deep data');
    }
    
    #include 'ImfLineOrder.h'
#include 'ImfCompression.h'
#include 'ImfName.h'
#include 'ImfTileDescription.h'
#include 'ImfInt64.h'
#include 'ImathVec.h'
#include 'ImathBox.h'
#include 'IexBaseExc.h'
    
        int                 partNumber;
    InputPartData*      part;
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    // Sent by the renderer when the draggable regions are updated.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UpdateDraggableRegions,
                    std::vector<extensions::DraggableRegion> /* regions */)
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    #include 'base/memory/weak_ptr.h'
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
    NwMenuModel::NwMenuModel(Delegate* delegate) : SimpleMenuModel(delegate) {
}
    
    void NwAppQuitFunction::DoJob(ExtensionService* service, std::string extension_id) {
  if (base::FeatureList::IsEnabled(::features::kNWNewWin)) {
    chrome::CloseAllBrowsersAndQuit(true);
    return;
  }
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
                                                        FROM_HERE,
                                                        base::Bind(&ExtensionService::TerminateExtension,
                                                                   service->AsWeakPtr(),
                                                                   extension_id));
}
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
    #include 'caffe2/core/net_async_base.h'
    
      /// The options with which this module was constructed.
  BatchNormOptions options;
    
    Contrast Example 2 with Example 1. For each data point per feature, the values
are sorted by the corresponding KEY.
)DOC')
    .Input(0, 'DATA', 'Tensor of rank 1.')
    .Input(
        1,
        'RANGES',
        'Tensor of int32/int64 ranges, of dims (N, M, 2). '
        'Where N is number of examples and M is a size of each example. '
        'Last dimention represents a range in the format (start, lengths)')
    .Input(2, 'KEY', 'Tensor of rank 1 and type int64.')
    .Output(0, 'OUTPUT', '1-D tensor of size sum of range lengths')
    .Arg('lengths', 'Expected lengths for ranges')
    .TensorInferenceFunction([](const OperatorDef& def,
                                const vector<TensorShape>& in) {
      ArgumentHelper helper(def);
      auto lengths = helper.GetRepeatedArgument<int>('lengths');
      CAFFE_ENFORCE_EQ(in[0].dims_size(), 1, 'DATA should be 1-D tensor.');
      CAFFE_ENFORCE_EQ(in[1].dims_size(), 3, 'RANGES should be 3-D tensor.');
      if (in.size() > 2) {
        CAFFE_ENFORCE_EQ(in[2].dims_size(), 1, 'KEY should be 1-D tensor.');
      }
      CAFFE_ENFORCE_GT(lengths.size(), 0, 'lengths should be non-empty.');
      std::vector<TensorShape> out(lengths.size());
      for (int i = 0; i < lengths.size(); ++i) {
        out[i].set_data_type(in[0].data_type());
        out[i].add_dims(in[1].dims(0));
        out[i].add_dims(lengths[i]);
      }
      return out;
    });
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    
    {}  // namespace grpc_core

    
    #define GPR_GLOBAL_CONFIG_DEFINE_INT32(name, default_value, help)         \
  static char g_env_str_##name[] = #name;                                 \
  static ::grpc_core::GlobalConfigEnvInt32 g_env_##name(g_env_str_##name, \
                                                        default_value);   \
  int32_t gpr_global_config_get_##name() { return g_env_##name.Get(); }   \
  void gpr_global_config_set_##name(int32_t value) { g_env_##name.Set(value); }
    
    TEST(GlobalConfigTest, BoolTest) {
  EXPECT_FALSE(GPR_GLOBAL_CONFIG_GET(bool_var));
  GPR_GLOBAL_CONFIG_SET(bool_var, true);
  EXPECT_TRUE(GPR_GLOBAL_CONFIG_GET(bool_var));
}
    
    
    {}  // namespace grpc
    
      std::unique_ptr<grpc::testing::EchoTestService::Stub> CreateServerAndStub() {
    auto port = grpc_pick_unused_port_or_die();
    std::ostringstream addr_stream;
    addr_stream << 'localhost:' << port;
    auto addr = addr_stream.str();
    server_.reset(new SubProcess({
        g_root + '/client_crash_test_server',
        '--address=' + addr,
    }));
    GPR_ASSERT(server_);
    return grpc::testing::EchoTestService::NewStub(
        grpc::CreateChannel(addr, InsecureChannelCredentials()));
  }
    
    void HandleGenericRequestStream(GenericServerAsyncReaderWriter* stream,
                                CompletionQueue* cq) {
  ByteBuffer recv_buffer;
  EchoRequest recv_request;
  EchoResponse send_response;
  int i = 1;
  while (true) {
    i++;
    stream->Read(&recv_buffer, tag(i));
    if (!VerifyReturnSuccess(cq, i)) {
      break;
    }
    EXPECT_TRUE(ParseFromByteBuffer(&recv_buffer, &recv_request));
    send_response.mutable_message()->append(recv_request.message());
  }
  auto send_buffer = SerializeToByteBuffer(&send_response);
  stream->Write(*send_buffer, tag(99));
  Verify(cq, 99, true);
  stream->Finish(Status::OK, tag(100));
  Verify(cq, 100, true);
}
    
    class Verifier {
 public:
  Verifier() {}
    }
    
      void UpdatePlugins(
      std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {
    plugins->clear();
    }
    
    // DB contents are stored in a set of blocks, each of which holds a
// sequence of key,value pairs.  Each block may be compressed before
// being stored in a file.  The following enum describes which
// compression method (if any) is used to compress a block.
enum CompressionType {
  // NOTE: do not change the values of existing entries, as these are
  // part of the persistent format on disk.
  kNoCompression = 0x0,
  kSnappyCompression = 0x1
};
    
    #include <stddef.h>
#include <stdint.h>
    
    
    {  // Total memory usage of the arena.
  //
  // TODO(costan): This member is accessed via atomics, but the others are
  //               accessed without any locking. Is this OK?
  std::atomic<size_t> memory_usage_;
};
    
    TEST(EnvTest, RunImmediately) {
  std::atomic<bool> called(false);
  env_->Schedule(&SetAtomicBool, &called);
  env_->SleepForMicroseconds(kDelayMicros);
  ASSERT_TRUE(called.load(std::memory_order_relaxed));
}
    
      void Clear();
  void Add(double value);
  void Merge(const Histogram& other);
    
    Status BuildTable(const std::string& dbname, Env* env, const Options& options,
                  TableCache* table_cache, Iterator* iter, FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
    SEXP XGBoosterLoadModelFromRaw_R(SEXP handle, SEXP raw) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterLoadModelFromBuffer(R_ExternalPtrAddr(handle),
                                          RAW(raw),
                                          length(raw)));
  R_API_END();
  return R_NilValue;
}
    
    template <typename T>
common::Span<const T> HostDeviceVector<T>::ConstDeviceSpan(int device) const {
  return common::Span<const T>();
}
    
    namespace mongo {
namespace repl {
    }
    }
    
    
    {    virtual ~OutOfLineExecutor() = default;
};
    
            /**
         * If 'execPtr' hasn't already been disposed, will call dispose(). If 'execPtr' is a
         * yielding PlanExecutor, callers must hold a lock on the collection in at least MODE_IS.
         */
        inline void operator()(PlanExecutor* execPtr) {
            try {
                // It is illegal to invoke operator() on a default constructed Deleter.
                invariant(_opCtx);
                if (!_dismissed) {
                    execPtr->dispose(_opCtx);
                }
                delete execPtr;
            } catch (...) {
                std::terminate();
            }
        }
    
    void Top::appendLatencyStats(const NamespaceString& nss,
                             bool includeHistograms,
                             BSONObjBuilder* builder) {
    auto hashedNs = UsageMap::hasher().hashed_key(nss.ns());
    stdx::lock_guard<SimpleMutex> lk(_lock);
    BSONObjBuilder latencyStatsBuilder;
    _usage[hashedNs].opLatencyHistogram.append(includeHistograms, &latencyStatsBuilder);
    builder->append('ns', nss.ns());
    builder->append('latencyStats', latencyStatsBuilder.obj());
}
    
    TEST(TopTest, CollectionDropped) {
    Top().collectionDropped(NamespaceString('test.coll'));
}
    
    
    {
    {        // finish counting
        while (PlanStage::IS_EOF != countState) {
            countState = count.work(&wsid);
            if (PlanStage::ADVANCED == countState)
                numCounted++;
        }
        ASSERT_EQUALS(2, numCounted);
    }
};
    
                status = U_ZERO_ERROR;
            utext_extract(fInputText, 0, fInputLength, inputChars, input16Len, &status); // not terminated warning
            status = U_ZERO_ERROR;
            utext_replace(dest, 0, utext_nativeLength(dest), inputChars, input16Len, &status);
    
    UOBJECT_DEFINE_RTTI_IMPLEMENTATION(RegexPattern)
    
    ScientificNumberFormatter *ScientificNumberFormatter::createMarkupInstance(
        DecimalFormat *fmtToAdopt,
        const UnicodeString &beginMarkup,
        const UnicodeString &endMarkup,
        UErrorCode &status) {
    return createInstance(
            fmtToAdopt,
            new MarkupStyle(beginMarkup, endMarkup),
            status);
}
    
    UBool ScriptSet::test(UScriptCode script, UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return FALSE;
    }
    if (script < 0 || script >= (int32_t)sizeof(bits) * 8) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return FALSE;
    }
    uint32_t index = script / 32;
    uint32_t bit   = 1 << (script & 31);
    return ((bits[index] & bit) != 0);
}
    
    #include 'unicode/utypes.h'
#include 'unicode/uobject.h'
#include 'unicode/uscript.h'
    
    #define DOT               ((UChar)0x002E)
#define SINGLE_QUOTE      ((UChar)0x0027)
#define SLASH             ((UChar)0x002F)
#define BACKSLASH         ((UChar)0x005C)
#define SPACE             ((UChar)0x0020)
#define TAB               ((UChar)0x0009)
#define QUOTATION_MARK    ((UChar)0x0022)
#define ASTERISK          ((UChar)0x002A)
#define COMMA             ((UChar)0x002C)
#define HYPHEN            ((UChar)0x002D)
#define U_ZERO            ((UChar)0x0030)
#define U_ONE             ((UChar)0x0031)
#define U_TWO             ((UChar)0x0032)
#define U_THREE           ((UChar)0x0033)
#define U_FOUR            ((UChar)0x0034)
#define U_FIVE            ((UChar)0x0035)
#define U_SIX             ((UChar)0x0036)
#define U_SEVEN           ((UChar)0x0037)
#define U_EIGHT           ((UChar)0x0038)
#define U_NINE            ((UChar)0x0039)
#define COLON             ((UChar)0x003A)
#define SEMI_COLON        ((UChar)0x003B)
#define CAP_A             ((UChar)0x0041)
#define CAP_B             ((UChar)0x0042)
#define CAP_R             ((UChar)0x0052)
#define CAP_Z             ((UChar)0x005A)
#define LOWLINE           ((UChar)0x005F)
#define LEFTBRACE         ((UChar)0x007B)
#define RIGHTBRACE        ((UChar)0x007D)