
        
        NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)

    
    v8::Local<v8::Value> Arguments::PeekNext() const {
  if (next_ >= info_->Length())
    return v8::Local<v8::Value>();
  return (*info_)[next_];
}
    
    #include 'base/bind.h'
#include 'native_mate/function_template.h'
    
    v8::Local<v8::String> StringToSymbol(v8::Isolate* isolate,
                                     const base::StringPiece& val) {
  return v8::String::NewFromUtf8(isolate, val.data(),
                                 v8::NewStringType::kInternalized,
                                 static_cast<uint32_t>(val.length()))
      .ToLocalChecked();
}
    
    // Like Dictionary, but stores object in persistent handle so you can keep it
// safely on heap.
class PersistentDictionary : public Dictionary {
 public:
  PersistentDictionary();
  PersistentDictionary(v8::Isolate* isolate, v8::Local<v8::Object> object);
  PersistentDictionary(const PersistentDictionary& other);
  ~PersistentDictionary() override;
    }
    
      static v8::Local<v8::FunctionTemplate> GetConstructor(v8::Isolate* isolate) {
    // Fill the object template.
    auto* data = gin::PerIsolateData::From(isolate);
    auto templ = data->GetFunctionTemplate(&kWrapperInfo);
    if (templ.IsEmpty()) {
      templ = v8::FunctionTemplate::New(isolate);
      templ->InstanceTemplate()->SetInternalFieldCount(1);
      T::BuildPrototype(isolate, templ);
      data->SetFunctionTemplate(&kWrapperInfo, templ);
    }
    return templ;
  }
    
    #endif  // NATIVE_MATE_NATIVE_MATE_WRAPPABLE_BASE_H_

    
      // Default function to kill a process, overridable by tests.
  void KillProcess(int pid);
    
        /** Colorize an icon (given object) with the icon color */
    QIcon SingleColorIcon(const QIcon& icon) const;
    
        void showTab_SM(bool fShow);
    void showTab_VM(bool fShow);
    
    private:
    reverse_lock(reverse_lock const&);
    reverse_lock& operator=(reverse_lock const&);
    
    namespace bech32
{
    }
    
    /*
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Copyright (c) 2012, Intel Corporation 
; 
; All rights reserved. 
; 
; Redistribution and use in source and binary forms, with or without
; modification, are permitted provided that the following conditions are
; met: 
; 
; * Redistributions of source code must retain the above copyright
;   notice, this list of conditions and the following disclaimer.  
; 
; * Redistributions in binary form must reproduce the above copyright
;   notice, this list of conditions and the following disclaimer in the
;   documentation and/or other materials provided with the
;   distribution. 
; 
; * Neither the name of the Intel Corporation nor the names of its
;   contributors may be used to endorse or promote products derived from
;   this software without specific prior written permission. 
; 
; 
; THIS SOFTWARE IS PROVIDED BY INTEL CORPORATION 'AS IS' AND ANY
; EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
; IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
; PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL INTEL CORPORATION OR
; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
; EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
; PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
; PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
; LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
; NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
; SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; Example YASM command lines:
; Windows:  yasm -Xvc -f x64 -rnasm -pnasm -o sha256_sse4.obj -g cv8 sha256_sse4.asm
; Linux:    yasm -f x64 -f elf64 -X gnu -g dwarf2 -D LINUX -o sha256_sse4.o sha256_sse4.asm
;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; This code is described in an Intel White-Paper:
; 'Fast SHA-256 Implementations on Intel Architecture Processors'
;
; To find it, surf to http://www.intel.com/p/en_US/embedded 
; and search for that title.
; The paper is expected to be released roughly at the end of April, 2012
;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; This code schedules 1 blocks at a time, with 4 lanes per block
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    
    
    {
    {    // Do a memtable compaction.  Before bug-fix, the compaction would
    // not detect the overlap with level-0 files and would incorrectly place
    // the deletion in a deeper level.
    ASSERT_OK(Delete('600'));
    dbfull()->TEST_CompactMemTable();
    ASSERT_EQ('3', FilesPerLevel());
    ASSERT_EQ('NOT_FOUND', Get('600'));
  } while (ChangeOptions());
}
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
    // Called on every item found in a WriteBatch.
class WriteBatchItemPrinter : public WriteBatch::Handler {
 public:
  WritableFile* dst_;
  virtual void Put(const Slice& key, const Slice& value) {
    std::string r = '  put '';
    AppendEscapedStringTo(&r, key);
    r += '' '';
    AppendEscapedStringTo(&r, value);
    r += ''\n';
    dst_->Append(r);
  }
  virtual void Delete(const Slice& key) {
    std::string r = '  del '';
    AppendEscapedStringTo(&r, key);
    r += ''\n';
    dst_->Append(r);
  }
};
    
    
    {  // Errors
  static const char* errors[] = {
    '',
    'foo',
    'foo-dx-100.log',
    '.log',
    '',
    'manifest',
    'CURREN',
    'CURRENTX',
    'MANIFES',
    'MANIFEST',
    'MANIFEST-',
    'XMANIFEST-3',
    'MANIFEST-3x',
    'LOC',
    'LOCKx',
    'LO',
    'LOGx',
    '18446744073709551616.log',
    '184467440737095516150.log',
    '100',
    '100.',
    '100.lop'
  };
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {
    {}  // namespace
}  // namespace strings
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
namespace util {
namespace error {
inline string CodeEnumToString(error::Code code) {
  switch (code) {
    case OK:
      return 'OK';
    case CANCELLED:
      return 'CANCELLED';
    case UNKNOWN:
      return 'UNKNOWN';
    case INVALID_ARGUMENT:
      return 'INVALID_ARGUMENT';
    case DEADLINE_EXCEEDED:
      return 'DEADLINE_EXCEEDED';
    case NOT_FOUND:
      return 'NOT_FOUND';
    case ALREADY_EXISTS:
      return 'ALREADY_EXISTS';
    case PERMISSION_DENIED:
      return 'PERMISSION_DENIED';
    case UNAUTHENTICATED:
      return 'UNAUTHENTICATED';
    case RESOURCE_EXHAUSTED:
      return 'RESOURCE_EXHAUSTED';
    case FAILED_PRECONDITION:
      return 'FAILED_PRECONDITION';
    case ABORTED:
      return 'ABORTED';
    case OUT_OF_RANGE:
      return 'OUT_OF_RANGE';
    case UNIMPLEMENTED:
      return 'UNIMPLEMENTED';
    case INTERNAL:
      return 'INTERNAL';
    case UNAVAILABLE:
      return 'UNAVAILABLE';
    case DATA_LOSS:
      return 'DATA_LOSS';
  }
    }
    }
    }
    }
    }
    
    class CopyNoAssign {
 public:
  explicit CopyNoAssign(int value) : foo(value) {}
  CopyNoAssign(const CopyNoAssign& other) : foo(other.foo) {}
  int foo;
 private:
  const CopyNoAssign& operator=(const CopyNoAssign&);
};
    
    template<typename A>
struct type_equals_<A, A> : public true_ {
};
    
    // Author: brianolson@google.com (Brian Olson)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Test program to verify that GzipInputStream is compatible with command line
// gunzip or java.util.zip.GzipInputStream
//
// Reads gzip stream on standard input and writes decompressed data to standard
// output.
    
    class GoGoProtoGenerator : public CodeGenerator {
 public:
  virtual bool GenerateAll(const std::vector<const FileDescriptor*>& files,
                           const string& parameter,
                           GeneratorContext* context,
                           string* error) const {
    for (int i = 0; i < files.size(); i++) {
      for (auto file : files) {
        bool can_generate =
            (new_pool_.FindFileByName(file->name()) == nullptr);
        for (int j = 0; j < file->dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->dependency(j)->name()) != nullptr);
        }
        for (int j = 0; j < file->public_dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->public_dependency(j)->name()) != nullptr);
        }
        for (int j = 0; j < file->weak_dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->weak_dependency(j)->name()) != nullptr);
        }
        if (can_generate) {
          Generate(file, parameter, context, error);
          break;
        }
      }
    }
    }
    }
    
    
    {
    {    return true;
  }
 private:
  bool CanGenerate(const FileDescriptor* file) const {
    if (GetPool()->FindFileByName(file->name()) != nullptr) {
      return false;
    }
    for (int j = 0; j < file->dependency_count(); j++) {
      if (GetPool()->FindFileByName(file->dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    for (int j = 0; j < file->public_dependency_count(); j++) {
      if (GetPool()->FindFileByName(
          file->public_dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    for (int j = 0; j < file->weak_dependency_count(); j++) {
      if (GetPool()->FindFileByName(
          file->weak_dependency(j)->name()) == nullptr) {
        return false;
      }
    }
    return true;
  }
};
    
    
    {  return 0;
}

    
    // Iterates though all people in the AddressBook and prints info about them.
void ListPeople(const tutorial::AddressBook& address_book) {
  for (int i = 0; i < address_book.people_size(); i++) {
    const tutorial::Person& person = address_book.people(i);
    }
    }
    
      // Getters for boost rng, curand, and cublas handles
  inline static RNG& rng_stream() {
    if (!Get().random_generator_) {
      Get().random_generator_.reset(new RNG());
    }
    return *(Get().random_generator_);
  }
#ifndef CPU_ONLY
  inline static cublasHandle_t cublas_handle() { return Get().cublas_handle_; }
  inline static curandGenerator_t curand_generator() {
    return Get().curand_generator_;
  }
#endif
    
    
    {
  shared_ptr<Caffe::RNG> rng_;
  Phase phase_;
  Blob<Dtype> data_mean_;
  vector<Dtype> mean_values_;
};
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      int size_, pre_pad_;
  Dtype alpha_, beta_, k_;
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #pragma once
    
    		case Image::Format::RGB8:
		case Image::Format::SRGB8:
			m_pencoding = new Block4x4Encoding_RGB8;
			break;
    
    /*
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
    
    #include 'fixed_armv4.h'
    
    /* (a32 * (opus_int32)((opus_int16)(b32))) >> 16 output have to be 32bit int */
#undef silk_SMULWB
static OPUS_INLINE opus_int32 silk_SMULWB_armv5e(opus_int32 a, opus_int16 b)
{
  int res;
  __asm__(
      '#silk_SMULWB\n\t'
      'smulwb %0, %1, %2\n\t'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define silk_SMULWB(a, b) (silk_SMULWB_armv5e(a, b))
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H */

    
    grpc_error* CensusClientCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  path_ = grpc_slice_ref_internal(args->path);
  start_time_ = absl::Now();
  method_ = GetMethod(&path_);
  qualified_method_ = absl::StrCat('Sent.', method_);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_trailing_metadata_,
                    OnDoneRecvTrailingMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  return GRPC_ERROR_NONE;
}
    
    // Creates a new client context that is by default a new root context.
// If the current context is the default context then the newly created
// span automatically becomes a root span. This should only be called with a
// blank CensusContext as it overwrites it.
void GenerateClientContext(absl::string_view method, CensusContext* ctxt,
                           CensusContext* parent_ctx);
    
    
    { private:
  CensusContext context_;
  // server method
  absl::string_view method_;
  std::string qualified_method_;
  grpc_slice path_;
  // Pointer to the grpc_call element
  grpc_call* gc_;
  // Authorization context for the call.
  grpc_auth_context* auth_context_;
  // Metadata element for census stats.
  grpc_linked_mdelem census_bin_;
  // recv callback
  grpc_metadata_batch* recv_initial_metadata_;
  grpc_closure* initial_on_done_recv_initial_metadata_;
  grpc_closure on_done_recv_initial_metadata_;
  // recv message
  grpc_closure* initial_on_done_recv_message_;
  grpc_closure on_done_recv_message_;
  absl::Time start_time_;
  absl::Duration elapsed_time_;
  grpc_core::OrphanablePtr<grpc_core::ByteStream>* recv_message_;
  uint64_t recv_message_count_;
  uint64_t sent_message_count_;
  // Buffer needed for grpc_slice to reference it when adding metatdata to
  // response.
  char stats_buf_[kMaxServerStatsLen];
};
    
    Status ProtoServerReflection::ServerReflectionInfo(
    ServerContext* context,
    ServerReaderWriter<ServerReflectionResponse, ServerReflectionRequest>*
        stream) {
  ServerReflectionRequest request;
  ServerReflectionResponse response;
  Status status;
  while (stream->Read(&request)) {
    switch (request.message_request_case()) {
      case ServerReflectionRequest::MessageRequestCase::kFileByFilename:
        status = GetFileByName(context, request.file_by_filename(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::kFileContainingSymbol:
        status = GetFileContainingSymbol(
            context, request.file_containing_symbol(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::
          kFileContainingExtension:
        status = GetFileContainingExtension(
            context, &request.file_containing_extension(), &response);
        break;
      case ServerReflectionRequest::MessageRequestCase::
          kAllExtensionNumbersOfType:
        status = GetAllExtensionNumbers(
            context, request.all_extension_numbers_of_type(),
            response.mutable_all_extension_numbers_response());
        break;
      case ServerReflectionRequest::MessageRequestCase::kListServices:
        status =
            ListService(context, response.mutable_list_services_response());
        break;
      default:
        status = Status(StatusCode::UNIMPLEMENTED, '');
    }
    }
    }
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    #include 'src/core/lib/iomgr/socket_utils.h'
#include 'src/cpp/server/load_reporter/load_data_store.h'
    
    #include <grpc/support/log.h>
    
            const std::unordered_map<StreamInformation, MinibatchData>& GetNextMinibatch(
            size_t minibatchSizeInSamples,
            size_t minibatchSizeInSequences,
            size_t numberOfWorkers,
            size_t workerRank,
            const DeviceDescriptor& device = DeviceDescriptor::UseDefaultDevice()) override;
    
    namespace CNTK
{
    const std::wstring versionKey = L'version';
    const std::wstring typeKey = L'type';
    const std::wstring uidKey = L'uid';
    const std::wstring kindKey = L'kind';
    const std::wstring dataTypeKey = L'data_type';
    const std::wstring dynamicAxisKey = L'dynamic_axis';
    const std::wstring isSparseKey = L'is_sparse';
    const std::wstring nameKey = L'name';
    const std::wstring needsGradientKey = L'needs_gradient';
    const std::wstring shapeKey = L'shape';
    const std::wstring valueKey = L'value';
    const std::wstring opKey = L'op';
    const std::wstring attributesKey = L'attributes';
    const std::wstring inputsKey = L'inputs';
    const std::wstring rootKey = L'root';
    const std::wstring functionsKey = L'primitive_functions';
    const std::wstring sampleCountKey = L'sample_count';
    const std::wstring minibatchCountKey = L'minibatchCount'; // TODO: Python-style spelling
    const std::wstring sweepCountKey = L'sweepCount';
    const std::wstring unitKey = L'unit';
    const std::wstring refMBSizeKey = L'ref_mb_size';
    const std::wstring epochSizeKey = L'epoch_size';
    const std::wstring scheduleKey = L'schedule';
    const std::wstring learningRateScheduleKey = L'learnig_rate_schedule';
    const std::wstring smoothedGradientsKey = L'smoothed_gradients';
    const std::wstring noiseInjectionSeedKey = L'noise_injection_seed';
    const std::wstring masterParameterUpdatedKey = L'master_parameter_updated';
    const std::wstring smoothedCountKey = L'smoothed_count';
    const std::wstring stateKey = L'state';
    const std::wstring rngSeedKey = L'rng_seed';
    const std::wstring rngOffsetKey = L'rng_offset';
    const std::wstring blockFunctionCompositeKey = L'block_function_composite';
    const std::wstring blockFunctionOpNameKey = L'block_function_op_name';
    const std::wstring blockFunctionCompositeArgumentsMapKeysKey = L'block_function_composite_arguments_map_keys';
    const std::wstring blockFunctionCompositeArgumentsMapValuesKey = L'block_function_composite_arguments_map_values';
    const std::wstring internalWorkerStateKey = L'internal_worker_state';
    const std::wstring externalWorkerStateKey = L'external_worker_state';
    const std::wstring userDefinedStateKey = L'user_defined_state';
    const std::wstring udfModuleNameKey = L'module';
    const std::wstring udfFactoryMethodNameKey = L'deserialize_method';
    const std::wstring nativeUDFKey = L'native';
    }
    
            dict[dynamicAxisKey] = dictionaryValueVector;
        dict[isSparseKey] = IsSparse();
        if (!Name().empty())
            dict[nameKey] = Name();
        dict[needsGradientKey] = NeedsGradient();
        dict[shapeKey] = Shape();
        if (IsParameter() || IsConstant())
        {
            NDArrayView* value = Value().get();
            if (value == nullptr)
                LogicError('Uninitialized Parameter variable '%S' cannot be saved.', AsString().c_str());
    }
    
    
    {            if ((m_varKind == VariableKind::Parameter) || (m_varKind == VariableKind::Constant))
            {
                if (m_shape.HasFreeDimension())
                    InvalidArgument('Parameter/Constant '%S' has invalid shape '%S'; it is illegal for a Parameter/Constant to have a FreeDimension.', AsString().c_str(), m_shape.AsString().c_str());
            }
        }
    
    public:
    ScopeTimer(size_t verbosity, const std::string& message)
        : m_verbosity(verbosity), m_message(message)
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Start();
        }
    }