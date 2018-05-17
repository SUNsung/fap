
        
        // ---------------------------------------------------------------------------
// Inline implementation
// ---------------------------------------------------------------------------
template <PrefetchHint hint>
inline void prefetch(const void* x) {
// Check of COMPILER_GCC macro below is kept only for backward-compatibility
// reasons. COMPILER_GCC3 is the macro that actually enables prefetch.
#if defined(__llvm__) || defined(COMPILER_GCC) || defined(COMPILER_GCC3)
  __builtin_prefetch(x, 0, hint);
#else
// You get no effect.  Feel free to add more sections above.
#endif
}
    
    REGISTER_KERNEL_BUILDER(Name('EncodeAudio').Device(DEVICE_CPU), EncodeAudioOp);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Adds resource events for a single device.
void AddResourceMetadata(uint32 device_id,
                         const std::map<uint32, const Resource *> &resources,
                         string *json) {
  for (const auto &pair : resources) {
    uint32 resource_id = pair.first;
    const Resource &resource = *pair.second;
    if (!resource.name().empty()) {
      Appendf(json,
              R'({'ph':'M','pid':%u,'tid':%u,)'
              R'('name':'thread_name','args':{)',
              device_id, resource_id);
      AppendEscapedName(json, resource.name());
      Appendf(json, '}},');
    }
    Appendf(json,
            R'({'ph':'M','pid':%u,'tid':%u,)'
            R'('name':'thread_sort_index','args':{'sort_index':%u}},)',
            device_id, resource_id, resource_id);
  }
}
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    void RepeatedEnumFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    void RepeatedPrimitiveFieldGenerator::GenerateParsingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.AddEntriesFrom(input, _repeated_$name$_codec);\n');
}
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    // Author: kenton@google.com (Kenton Varda)
    
    // ===================================================================
    
        std::function<void(OperatorSchemaSetter&)> RNNDocGeneratorInputSeqLen() {
        return [=](OperatorSchemaSetter& schema) {
            schema.Input('sequence_lens',
                'Optional tensor specifying lengths of the sequences in a batch. '
                'If not specified - assumed all sequences in the batch to have '
                'length `seq_length`. It has shape `[batch_size]`.', 'T1', true /*optional*/);
            schema.TypeConstraint('T1', { 'tensor(int32)' }, 'Constrain seq_lens to integer tensor.');
        };
    }
    
    template <class ElemType>
void ReaderShim<ElemType>::SetConfiguration(const ReaderConfiguration& config, const std::map<std::wstring, int>& inputDescriptions)
{
    // Make sure there are no outstanding reads.
    if (m_prefetchTask.valid())
        m_prefetchTask.get();
    }
    
    /// Adds buffering to the read-related operations of a stream.
/**
 * The buffered_read_stream class template can be used to add buffering to the
 * synchronous and asynchronous read operations of a stream.
 *
 * @par Thread Safety
 * @e Distinct @e objects: Safe.@n
 * @e Shared @e objects: Unsafe.
 *
 * @par Concepts:
 * AsyncReadStream, AsyncWriteStream, Stream, SyncReadStream, SyncWriteStream.
 */
template <typename Stream>
class buffered_read_stream
  : private noncopyable
{
public:
  /// The type of the next layer.
  typedef typename remove_reference<Stream>::type next_layer_type;
    }
    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
      // Return a pointer to the beginning of the unread data.
  const_buffer data() const
  {
    return boost::asio::buffer(buffer_) + begin_offset_;
  }
    
      static void do_complete(io_service_impl* owner, operation* base,
      const boost::system::error_code& /*ec*/,
      std::size_t /*bytes_transferred*/)
  {
    // Take ownership of the handler object.
    descriptor_read_op* o(static_cast<descriptor_read_op*>(base));
    ptr p = { boost::asio::detail::addressof(o->handler_), o, o };
    }
    
      STDMETHODIMP get_Length(UINT32 *value)
  {
    *value = length_;
    return S_OK;
  }
    
    template <typename Time_Traits>
void dev_poll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
    
    #include <boost/asio/detail/pop_options.hpp>
    
      // All control should be from a single daemon.
  // Wrap all IOCTL API handling in locks to guarantee proper use.
  lck_mtx_lock(osquery.mtx);
  switch (cmd) {
  // Daemon is requesting a new subscription (e.g., monitored path).
  case OSQUERY_IOCTL_SUBSCRIPTION:
    sub = (osquery_subscription_args_t *)data;
    if ((err = subscribe_to_event(sub->event, sub->subscribe))) {
      goto error_exit;
    }
    break;
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
    #include <osquery/config.h>
#include <osquery/dispatcher.h>
    
    #include <poll.h>
#include <pwd.h>
    
    #include 'osquery/core/utils.h'
#include 'osquery/tests/test_util.h'
    
    /// Backing-storage provider for osquery internal/core.
REGISTER_INTERNAL(EphemeralDatabasePlugin, 'database', 'ephemeral');
    
    TEST(Metric, LogLoss) {
  xgboost::Metric * metric = xgboost::Metric::Create('logloss');
  ASSERT_STREQ(metric->Name(), 'logloss');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              1.2039f, 0.001f);
}
    
    SEXP XGBoosterSetAttr_R(SEXP handle, SEXP name, SEXP val) {
  R_API_BEGIN();
  const char *v = isNull(val) ? nullptr : CHAR(asChar(val));
  CHECK_CALL(XGBoosterSetAttr(R_ExternalPtrAddr(handle),
                              CHAR(asChar(name)), v));
  R_API_END();
  return R_NilValue;
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitVersionNumber
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitVersionNumber
  (JNIEnv *jenv, jclass jcls, jintArray jout) {
  jint out = RabitVersionNumber();
  jenv->SetIntArrayRegion(jout, 0, 1, &out);
  return 0;
}
    
            ID3DBlob* blob = NULL;
        if (D3D12SerializeRootSignature(&desc, D3D_ROOT_SIGNATURE_VERSION_1, &blob, NULL) != S_OK)
            return false;
    
    
    {    // At this point note that we set ImGui::GetIO().Fonts->TexID to be == g_FontTexture, so clear both.
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(g_FontTexture == io.Fonts->TexID);
    if (g_FontTexture)
        g_FontTexture->Release();
    g_FontTexture = NULL;
    io.Fonts->TexID = NULL;
}
    
                    // Copy rasterized pixels to main texture
                uint8_t* blit_dst = atlas->TexPixelsAlpha8 + rect.y * atlas->TexWidth + rect.x;
                font_face.BlitGlyph(ft_glyph_bitmap, blit_dst, atlas->TexWidth, multiply_enabled ? multiply_table : NULL);
                FT_Done_Glyph(ft_glyph);
    
            // Rendering
        ImGui::EndFrame();
        g_pd3dDevice->SetRenderState(D3DRS_ZENABLE, false);
        g_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
        g_pd3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
        D3DCOLOR clear_col_dx = D3DCOLOR_RGBA((int)(clear_color.x*255.0f), (int)(clear_color.y*255.0f), (int)(clear_color.z*255.0f), (int)(clear_color.w*255.0f));
        g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, clear_col_dx, 1.0f, 0);
        if (g_pd3dDevice->BeginScene() >= 0)
        {
            ImGui::Render();
            ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
            g_pd3dDevice->EndScene();
        }
        HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);
    
    int main(int, char**)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
    static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, 'Error %d: %s\n', error, description);
}
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_ImplSdlGL2_Init(window);
    
      using ByteAlloc = typename std::allocator_traits<
      allocator_type>::template rebind_alloc<uint8_t>;
  using BytePtr = typename std::allocator_traits<ByteAlloc>::pointer;
    
    template <size_t M>
FOLLY_ALWAYS_INLINE hazptr_array<M>& hazptr_array<M>::operator=(
    hazptr_array&& other) noexcept {
  HAZPTR_DEBUG_PRINT(this << ' ' << M << ' ' << &other);
  auto h = reinterpret_cast<hazptr_holder*>(&raw_);
  for (size_t i = 0; i < M; ++i) {
    h[i] = std::move(other[i]);
    HAZPTR_DEBUG_PRINT(i << ' ' << &h[i] << ' ' << &other[i]);
  }
  empty_ = other.empty_;
  other.empty_ = true;
  return *this;
}
    
    
    {template <class T>
T* pointerFlagSet(T* p) {
  return reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(p) | 1);
}
template <class T>
bool pointerFlagGet(T* p) {
  return reinterpret_cast<uintptr_t>(p) & 1;
}
template <class T>
T* pointerFlagClear(T* p) {
  return reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(p) & ~uintptr_t(1));
}
inline void* shiftPointer(void* p, size_t sizeBytes) {
  return static_cast<char*>(p) + sizeBytes;
}
} // namespace detail
    
    std::ostream& operator << (std::ostream& os,
                           const AsyncSocket::StateEnum& state) {
  os << static_cast<int>(state);
  return os;
}