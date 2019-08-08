
        
          uint8_t* result = allocator.AllocateMemory(1, 1);
  TF_LITE_MICRO_EXPECT_NE(nullptr, result);
    
    #include <gtest/gtest.h>
#include 'tensorflow/lite/interpreter.h'
#include 'tensorflow/lite/kernels/custom_ops_register.h'
#include 'tensorflow/lite/kernels/test_util.h'
#include 'tensorflow/lite/model.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  // Verify metrics.
  EvaluationStageMetrics metrics = stage.LatestMetrics();
  EXPECT_EQ(metrics.num_runs(), 1);
  const auto& max_latency = metrics.process_metrics().total_latency().max_us();
  EXPECT_GT(max_latency, 0);
  EXPECT_LT(max_latency, 1e7);
  EXPECT_LE(metrics.process_metrics().total_latency().last_us(), max_latency);
  EXPECT_LE(metrics.process_metrics().total_latency().min_us(), max_latency);
  EXPECT_GT(metrics.process_metrics().total_latency().sum_us(), max_latency);
  EXPECT_LE(metrics.process_metrics().total_latency().avg_us(), max_latency);
  EXPECT_EQ(
      metrics.process_metrics().tflite_inference_metrics().num_inferences(), 2);
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      if (num_retvals != node_data->NumOutputs()) {
    return tensorflow::errors::Internal(
        'Unexpected number of outputs from EagerExecute');
  }
    
    template <typename T, typename Index, int IXDIM>
struct GatherNdSlice<GPUDevice, T, Index, IXDIM> {
  Index operator()(const GPUDevice& d, const Index unused_slice_size,
                   typename TTypes<int32>::Scalar Tscratch,
                   typename TTypes<T, IXDIM + 1>::ConstTensor Tparams,
                   typename TTypes<Index>::ConstMatrix Tindices,
                   typename TTypes<T>::Matrix Tout) {
    const int64 indices_size = Tindices.dimension(1);
    const int64 out_size = Tout.size();
    int64 s_size = Tout.dimension(1);
    Eigen::array<int64, IXDIM> batch_strides;
    Eigen::array<int64, IXDIM> batch_indices;
    if (IXDIM > 0) {
      batch_strides[size_t(IXDIM - 1)] = s_size;
      batch_indices[size_t(IXDIM - 1)] = Tparams.dimension(IXDIM - 1);
    }
    for (int i = IXDIM - 1; i > 0; --i) {
      batch_indices[i - 1] = Tparams.dimension(i - 1);
      batch_strides[i - 1] = batch_strides[i] * Tparams.dimension(i);
    }
    GpuLaunchConfig config = GetGpuLaunchConfig(out_size, d);
    }
    }
    
      std::string error;
  auto isUptodateOpt = parentUnitWriter.isUnitUpToDateForOutputFile(/*FilePath=*/filename,
                                                                /*TimeCompareFilePath=*/filename, error);
  if (!isUptodateOpt.hasValue()) {
    diags.diagnose(SourceLoc(), diag::error_index_failed_status_check, error);
    return true;
  }
  if (*isUptodateOpt)
    return false;
    
    namespace {
/// Infers the availability required to access a type.
class AvailabilityInferenceTypeWalker : public TypeWalker {
public:
  ASTContext &AC;
  AvailabilityContext AvailabilityInfo = AvailabilityContext::alwaysAvailable();
    }
    }
    
      void appendFunctionSignature(AnyFunctionType *fn,
                               const ValueDecl *forDecl = nullptr);
    
      DiagnosticSuppression(const DiagnosticSuppression &) = delete;
  DiagnosticSuppression &operator=(const DiagnosticSuppression &) = delete;
    
      bool insert(const Key1 &k1, const Key2 &k2, Value &v) {
    const bool r1 = map1.insert(k1, k2, v);
    const bool r2 = map2.insert(k2, k1, v);
    assertConsistent(r1, r2);
    return r1;
  }
  bool insert(const Key2 &k2, const Key1 &k1, Value &v) {
    return insert(k1, k2, v);
  }
  Optional<Value> find(const Key1 &k1, const Key2 &k2) const {
    auto v = map1.find(k1, k2);
    assert(assertConsistent(v, map2.find(k2, k1)));
    return v;
  }
  Optional<Value> find(const Key2 &k2, Key1 &k1) const { return find(k1, k2); }
    
    double UniValue::get_real() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not a number as expected');
    double retval;
    if (!ParseDouble(getValStr(), &retval))
        throw std::runtime_error('JSON double out of range');
    return retval;
}
    
    #ifndef BITCOIN_CRYPTO_RIPEMD160_H
#define BITCOIN_CRYPTO_RIPEMD160_H
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = NULL;
  Table* table = NULL;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
    namespace leveldb {
    }
    
    
template <>
void
EnvmapAttribute::readValueFrom (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream &is, int size, int version)
{
    unsigned char tmp;
    Xdr::read <StreamIO> (is, tmp);
    _value = Envmap (tmp);
}
    
        int             _rleSymbol;        // RLE symbol written by the encoder.
                                       // This could be 65536, so beware
                                       // when you use shorts to hold things.
    
    
typedef TypedAttribute<float> FloatAttribute;
template <> IMF_EXPORT const char *FloatAttribute::staticTypeName ();
    
    //-----------------------------------------------------------------------------
//
//      class Slice
//      class FrameBuffer
//
//-----------------------------------------------------------------------------
    
    
//-----------------------------------------------------------------------------
//
//	Low-level file input and output for OpenEXR.
//
//-----------------------------------------------------------------------------
    
                _data->tFile = new TiledInputFile (_data->header,
                                               _data->_streamData->is,
                                               _data->version,
                                               _data->numThreads);
        }
        
        else if(!_data->header.hasType() || _data->header.type()==SCANLINEIMAGE)
        {
            _data->sFile = new ScanLineInputFile (_data->header,
                                                  _data->_streamData->is,
                                                  _data->numThreads);
        }else{
            // type set but not recognised
            
            THROW(IEX_NAMESPACE::ArgExc, 'InputFile cannot handle parts of type ' << _data->header.type());
        }
    }
    else
    {
        if(_data->header.hasType() && _data->header.type()==DEEPSCANLINE)
        {
            _data->isTiled=false;
            const Box2i &dataWindow = _data->header.dataWindow();
            _data->minY = dataWindow.min.y;
            _data->maxY = dataWindow.max.y;
            
            _data->dsFile = new DeepScanLineInputFile (_data->part);
            _data->compositor = new CompositeDeepScanLine;
            _data->compositor->addSource(_data->dsFile);
        }
        else if (isTiled (_data->header.type()))
        {
            _data->isTiled = true;
            _data->lineOrder = _data->header.lineOrder();
    
    
void
InputPart::rawPixelDataToBuffer (int scanLine, char *pixelData, int &pixelDataSize) const
{
    file->rawPixelDataToBuffer(scanLine, pixelData, pixelDataSize);
}
    
    
template <>
const char *
IntAttribute::staticTypeName ()
{
    return 'int';
}
    
      std::multimap<grpc::string_ref, grpc::string_ref>* GetRecvTrailingMetadata()
      override {
    GPR_CODEGEN_ASSERT(false &&
                       'It is illegal to call GetRecvTrailingMetadata on a '
                       'method which has a Cancel notification');
    return nullptr;
  }
    
      GPR_ASSERT(WSAConnect(cli_sock, (grpc_sockaddr*)&addr, addr_len, NULL, NULL,
                        NULL, NULL) == 0);
  svr_sock = accept(lst_sock, (grpc_sockaddr*)&addr, &addr_len);
  GPR_ASSERT(svr_sock != INVALID_SOCKET);
    
    DWORD grpc_get_default_wsa_socket_flags() { return s_wsa_socket_flags; }
    
    
    {  gpr_setenv(name, value);
  retrieved_value = gpr_getenv(name);
  GPR_ASSERT(retrieved_value != nullptr);
  GPR_ASSERT(strcmp(value, retrieved_value) == 0);
  gpr_free(retrieved_value);
}
    
    GPR_GLOBAL_CONFIG_DECLARE_BOOL(bool_var);
    
    
    { protected:
  std::unique_ptr<Server> server_;
  std::unique_ptr<grpc::testing::EchoTestService::Stub> stub_;
  std::unique_ptr<ProtoReflectionDescriptorDatabase> desc_db_;
  std::unique_ptr<protobuf::DescriptorPool> desc_pool_;
  std::unordered_set<string> known_files_;
  std::unordered_set<string> known_types_;
  const protobuf::DescriptorPool* ref_desc_pool_;
  int port_;
  reflection::ProtoServerReflectionPlugin plugin_;
};
    
      grpc::string name() override { return PLUGIN_NAME; }