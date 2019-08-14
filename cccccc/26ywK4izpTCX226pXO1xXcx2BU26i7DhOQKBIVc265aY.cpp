
        
        const flatbuffers::Vector<flatbuffers::Offset<Buffer>>* CreateBuffers() {
  using flatbuffers::Offset;
  flatbuffers::FlatBufferBuilder* builder = BuilderInstance();
  constexpr size_t buffers_size = 1;
  const Offset<Buffer> buffers[buffers_size] = {
      CreateBuffer(*builder),
  };
  const flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Buffer>>>
      buffers_offset = builder->CreateVector(buffers, buffers_size);
  builder->Finish(buffers_offset);
  void* buffers_pointer = builder->GetBufferPointer();
  const flatbuffers::Vector<flatbuffers::Offset<Buffer>>* result =
      flatbuffers::GetRoot<flatbuffers::Vector<flatbuffers::Offset<Buffer>>>(
          buffers_pointer);
  return result;
}
    
      std::vector<complex<float>> GetOutput() {
    return ExtractVector<complex<float>>(output_);
  }
  std::vector<int> GetOutputShape() { return GetTensorShape(output_); }
    
    #define REGISTER_MATRIX_BAND_PART(type)                                    \
  REGISTER_KERNEL_BUILDER(                                                 \
      Name('MatrixBandPart').Device(DEVICE_CPU).TypeConstraint<type>('T'), \
      MatrixBandPartOp<CPUDevice, type>);
TF_CALL_POD_TYPES(REGISTER_MATRIX_BAND_PART);
#undef REGISTER_MATRIX_BAND_PART
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #if GOOGLE_CUDA || TENSORFLOW_USE_ROCM
    
    
    {
    {    auto compute_shard = [&output, &diag, &lower_diag_index, &upper_diag_index,
                          &max_diag_len, &padding_value](Eigen::Index begin,
                                                         Eigen::Index end) {
      const int num_diags = upper_diag_index - lower_diag_index + 1;
      const int diag_elements_in_batch = num_diags * max_diag_len;
      Eigen::Index diag_batch_base_index = begin * diag_elements_in_batch;
      for (Eigen::Index batch = begin; batch < end; ++batch) {
        for (Eigen::Index i = 0; i < output.dimension(1); ++i) {
          for (Eigen::Index j = 0; j < output.dimension(2); ++j) {
            const int diag_index = j - i;
            const int diag_index_in_input = upper_diag_index - diag_index;
            const int index_in_the_diagonal =
                j - std::max<Eigen::Index>(diag_index, 0);
            if (lower_diag_index <= diag_index &&
                diag_index <= upper_diag_index) {
              output(batch, i, j) = diag(diag_batch_base_index +
                                         diag_index_in_input * max_diag_len +
                                         index_in_the_diagonal);
            } else {
              output(batch, i, j) = padding_value;
            }
          }
        }
        diag_batch_base_index += diag_elements_in_batch;
      }
    };
    auto thread_pool =
        context->device()->tensorflow_cpu_worker_threads()->workers;
    thread_pool->ParallelFor(num_batches, cost_per_batch,
                             std::move(compute_shard));
  }
};
    
    template <typename Device, typename T>
struct MatrixSetDiag {
  static void Compute(OpKernelContext* context, const Device& device,
                      typename TTypes<T, 3>::ConstTensor& input,
                      typename TTypes<T>::ConstTensor& diag,
                      typename TTypes<T, 3>::Tensor& output,
                      const Eigen::Index d_lower, const Eigen::Index d_upper,
                      const Eigen::Index max_diag_len);
};
    
      // Find out how each tensor is produced. This does not account for
  // tensors that are not produce by eager ops.
  for (auto& node_data : op_data->nodes) {
    node_data->mutable_outputs()->InitializeGraphOutputs(output_set);
    for (int i = 0; i < node_data->outputs().Size(); ++i) {
      int output_index = node_data->outputs().TfLiteIndex(i);
      tflite_tensor_sources[output_index] = TensorSource{node_data.get(), i};
    }
  }
    
    #define DEFINE_GPU_SPECS_INDEX(T, Index)    \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 0); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 1); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 2); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 3); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 4); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 5); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 6); \
  DEFINE_GPU_SPECS_INDEX_NDIM(T, Index, 7);
    
      GDBusProxy* registrar_proxy_;
    
    v8::Local<v8::Object> Dictionary::GetHandle() const {
  return object_;
}
    
    Promise Promise::Create(v8::Isolate* isolate) {
  return Promise(isolate);
}
    
    // You can use mate::Handle on the stack to retain a mate::Wrappable object.
// Currently we don't have a mechanism for retaining a mate::Wrappable object
// in the C++ heap because strong references from C++ to V8 can cause memory
// leaks.
template <typename T>
class Handle {
 public:
  Handle() : object_(NULL) {}
    }
    
    #include 'native_mate/converter.h'
    
    
    {}  // namespace mate
    
      // If the devtools can dock, 'SetIsDocked' will be called by devtools itself.
  if (!can_dock_) {
    SetIsDocked(DispatchCallback(), false);
  } else {
    if (dock_state_.empty()) {
      const base::DictionaryValue* prefs =
          pref_service_->GetDictionary(kDevToolsPreferences);
      std::string current_dock_state;
      prefs->GetString('currentDockState', &current_dock_state);
      base::RemoveChars(current_dock_state, '\'', &dock_state_);
    }
    base::string16 javascript = base::UTF8ToUTF16(
        'Components.dockController.setDockSide(\'' + dock_state_ + '\');');
    GetDevToolsWebContents()->GetMainFrame()->ExecuteJavaScript(
        javascript, base::NullCallback());
  }
    
        QColor TextColor() const { return textColor; }
    QColor SingleColor() const { return singleColor; }
    
    
    {    secp256k1_scalar_set_b32(&r, &input64[0], &overflow);
    ret &= !overflow;
    secp256k1_scalar_set_b32(&s, &input64[32], &overflow);
    ret &= !overflow;
    if (ret) {
        secp256k1_ecdsa_recoverable_signature_save(sig, &r, &s, recid);
    } else {
        memset(sig, 0, sizeof(*sig));
    }
    return ret;
}
    
        /* Generate a random key and message. */
    {
        secp256k1_scalar msg, key;
        random_scalar_order_test(&msg);
        random_scalar_order_test(&key);
        secp256k1_scalar_get_b32(privkey, &key);
        secp256k1_scalar_get_b32(message, &msg);
    }
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
      void CloseDB() {
    delete db_;
    db_ = NULL;
  }
    
                if (symbol + runLen > maxSymbol + 1)
            {
                throw IEX_NAMESPACE::InputExc ('Error decoding Huffman table '
                                               '(Run beyond end of table).');
            }
            
            symbol += runLen - 1;
    
    Rational
guessExactFps (double fps)
{
    return guessExactFps (Rational (fps));
}
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    	//
	// Access decoding table
	//
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT

    
    void
InputPart::rawPixelData (int firstScanLine, const char *&pixelData, int &pixelDataSize)
{
    file->rawPixelData(firstScanLine, pixelData, pixelDataSize);
}
    
    #endif /* IMFINPUTSTREAMMUTEX_H_ */

    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    const int kServerDefaultResponseStreamsToSend = 3;
const char* const kServerResponseStreamsToSend = 'server_responses_to_send';
const char* const kServerTryCancelRequest = 'server_try_cancel';
const char* const kServerUseCancelCallback = 'server_use_cancel_callback';
const char* const kDebugInfoTrailerKey = 'debug-info-bin';
const char* const kServerFinishAfterNReads = 'server_finish_after_n_reads';
const char* const kServerUseCoalescingApi = 'server_use_coalescing_api';
const char* const kCheckClientInitialMetadataKey = 'custom_client_metadata';
const char* const kCheckClientInitialMetadataVal = 'Value for client metadata';
    
      LoadBalanceResponse BuildRandomResponseForBackends() {
    // Generate a random serverlist with varying size (if N =
    // all_backend_ports_.size(), num_non_drop_entry is in [0, 2N],
    // num_drop_entry is in [0, N]), order, duplicate, and drop rate.
    size_t num_non_drop_entry =
        std::rand() % (all_backend_ports_.size() * 2 + 1);
    size_t num_drop_entry = std::rand() % (all_backend_ports_.size() + 1);
    std::vector<int> random_backend_indices;
    for (size_t i = 0; i < num_non_drop_entry; ++i) {
      random_backend_indices.push_back(std::rand() % all_backend_ports_.size());
    }
    for (size_t i = 0; i < num_drop_entry; ++i) {
      random_backend_indices.push_back(-1);
    }
    std::shuffle(random_backend_indices.begin(), random_backend_indices.end(),
                 std::mt19937(std::random_device()()));
    // Build the response according to the random list generated above.
    LoadBalanceResponse response;
    for (int index : random_backend_indices) {
      auto* server = response.mutable_server_list()->add_servers();
      if (index < 0) {
        server->set_drop(true);
        server->set_load_balance_token('load_balancing');
      } else {
        server->set_ip_address(Ip4ToPackedString('127.0.0.1'));
        server->set_port(all_backend_ports_[index]);
      }
    }
    return response;
  }
    
    void DefaultGlobalConfigEnvErrorFunction(const char* error_message) {
  gpr_log(GPR_ERROR, '%s', error_message);
}
    
    namespace {
    }
    
      KillServer();
    
      Status BidiStream(
      ServerContext* context,
      ServerReaderWriter<EchoResponse, EchoRequest>* stream) override {
    EchoRequest request;
    EchoResponse response;
    while (stream->Read(&request)) {
      gpr_log(GPR_INFO, 'recv msg %s', request.message().c_str());
      response.set_message(request.message());
      stream->Write(response);
    }
    return Status::OK;
  }
    
      void SetRegisterService() { register_service_ = true; }
    
    #if 0
    
      // Gets the number of all tests.
  int total_test_count() const;
    
    // A compile-time bool constant that is true if and only if x is a
// null pointer literal (i.e. NULL or any 0-valued compile-time
// integral constant).
#ifdef GTEST_ELLIPSIS_NEEDS_POD_
// We lose support for NULL detection where the compiler doesn't like
// passing non-POD classes through ellipsis (...).
# define GTEST_IS_NULL_LITERAL_(x) false
#else
# define GTEST_IS_NULL_LITERAL_(x) \
    (sizeof(::testing::internal::IsNullLiteralHelper(x)) == 1)
#endif  // GTEST_ELLIPSIS_NEEDS_POD_
    
    
]]