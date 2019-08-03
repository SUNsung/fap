
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {
    {}  // namespace functor
}  // namespace tensorflow
    
    
    {  return kTfLiteOk;
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Advertises our menu bars to Unity.
//
// GlobalMenuBarX11 is responsible for managing the DbusmenuServer for each
// XID. We need a separate object to own the dbus channel to
// com.canonical.AppMenu.Registrar and to register/unregister the mapping
// between a XID and the DbusmenuServer instance we are offering.
class GlobalMenuBarRegistrarX11 {
 public:
  static GlobalMenuBarRegistrarX11* GetInstance();
    }
    
    std::string V8TypeAsString(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  if (value.IsEmpty())
    return '<empty handle>';
  v8::MaybeLocal<v8::String> details =
      value->ToDetailString(isolate->GetCurrentContext());
  std::string result;
  if (!details.IsEmpty())
    ConvertFromV8(isolate, details.ToLocalChecked(), &result);
  return result;
}
    
      ~ScopedPersistent() { reset(); }
    
      // Retrieve the v8 wrapper object cooresponding to this object.
  v8::Local<v8::Object> GetWrapper() const;
  v8::MaybeLocal<v8::Object> GetWrapper(v8::Isolate* isolate) const;
    
    // static
GlobalMenuBarRegistrarX11* GlobalMenuBarRegistrarX11::GetInstance() {
  return base::Singleton<GlobalMenuBarRegistrarX11>::get();
}
    
    namespace electron {
    }
    
      // add two new params for better error handling
  errorObject
      ->Set(context, mate::StringToV8(isolate(), 'code'),
            v8::Integer::New(isolate(), code))
      .Check();
  errorObject
      ->Set(context, mate::StringToV8(isolate(), 'domain'),
            mate::StringToV8(isolate(), domain))
      .Check();
    
    namespace winrt::Microsoft::Terminal::Settings::implementation
{
    KeyChord::KeyChord(bool ctrl, bool alt, bool shift, int32_t vkey) :
        _modifiers{ (ctrl ? Settings::KeyModifiers::Ctrl : Settings::KeyModifiers::None) |
                    (alt ? Settings::KeyModifiers::Alt : Settings::KeyModifiers::None) |
                    (shift ? Settings::KeyModifiers::Shift : Settings::KeyModifiers::None) },
        _vkey{ vkey }
    {
    }
    }
    
        rassert(end - cur >= static_cast<int64_t>(value_size), 'Superblock metainfo data is corrupted: walked past the end off the buffer');
    if (end - cur < static_cast<int64_t>(value_size)) {
        goto check_failed;
    }
    value_ptr = cur;
    cur += value_size;
    
    ql::grouped_t<ql::stream_t> read_row_via_sindex(
        store_t *store,
        const sindex_name_t &sindex_name,
        int sindex_value) {
    cond_t dummy_interruptor;
    read_token_t token;
    store->new_read_token(&token);
    }
    
    // EXPECT_DEATH_IF_SUPPORTED(statement, regex) and
// ASSERT_DEATH_IF_SUPPORTED(statement, regex) expand to real death tests if
// death tests are supported; otherwise they just issue a warning.  This is
// useful when you are combining death test assertions with normal test
// assertions in one test.
#if GTEST_HAS_DEATH_TEST
# define EXPECT_DEATH_IF_SUPPORTED(statement, regex) \
    EXPECT_DEATH(statement, regex)
# define ASSERT_DEATH_IF_SUPPORTED(statement, regex) \
    ASSERT_DEATH(statement, regex)
#else
# define EXPECT_DEATH_IF_SUPPORTED(statement, regex) \
    GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, )
# define ASSERT_DEATH_IF_SUPPORTED(statement, regex) \
    GTEST_UNSUPPORTED_DEATH_TEST_(statement, regex, return)
#endif
    
      // Streams a pointer value to this object.
  //
  // This function is an overload of the previous one.  When you
  // stream a pointer to a Message, this definition will be used as it
  // is more specialized.  (The C++ Standard, section
  // [temp.func.order].)  If you stream a non-pointer, then the
  // previous definition will be used.
  //
  // The reason for this overload is that streaming a NULL pointer to
  // ostream is undefined behavior.  Depending on the compiler, you
  // may get '0', '(nil)', '(null)', or an access violation.  To
  // ensure consistent result across compilers, we always treat NULL
  // as '(null)'.
  template <typename T>
  inline Message& operator <<(T* const& pointer) {  // NOLINT
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
    return *this;
  }
#endif  // GTEST_OS_SYMBIAN
    
      // Gets the outcome of the test part.
  Type type() const { return type_; }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35>
struct Types35 {
  typedef T1 Head;
  typedef Types34<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35> Tail;
};
    
      void SetSendMessage(ByteBuffer* buf, const void** msg,
                      bool* fail_send_message,
                      std::function<Status(const void*)> serializer) {
    send_message_ = buf;
    orig_send_message_ = msg;
    fail_send_message_ = fail_send_message;
    serializer_ = serializer;
  }
    
      // Unimplemented is left unimplemented to test the returned error.
  bool signal_client() {
    std::unique_lock<std::mutex> lock(mu_);
    return signal_client_;
  }
    
    #include <atomic>
#include <memory>
#include <mutex>
#include <random>
#include <sstream>
#include <thread>
    
    static void create_sockets(SOCKET sv[2]) {
  SOCKET svr_sock = INVALID_SOCKET;
  SOCKET lst_sock = INVALID_SOCKET;
  SOCKET cli_sock = INVALID_SOCKET;
  SOCKADDR_IN addr;
  int addr_len = sizeof(addr);
    }
    
    #endif  // GRPCPP_CREATE_CHANNEL_H

    
    
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
    
    
    {    // By default ImGuiFreeType will use IM_ALLOC()/IM_FREE().
    // However, as FreeType does lots of allocations we provide a way for the user to redirect it to a separate memory heap if desired:
    IMGUI_API void SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = NULL);
}

    
            D3D12_TEXTURE_COPY_LOCATION dstLocation = {};
        dstLocation.pResource = pTexture;
        dstLocation.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
        dstLocation.SubresourceIndex = 0;
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // Setup Platform/Renderer bindings
    ImGui_ImplSDL2_InitForD3D(window);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
      bool reached_threshold(int rc, int hc) const noexcept {
    return rc >= kThreshold && rc >= kMultiplier * hc;
  }
    
    namespace folly {
    }
    
      /*
   * A simple implementation using two queues.
   * All writer threads enqueue into one queue while the I/O thread is
   * processing the other.
   *
   * We could potentially also provide an implementation using folly::MPMCQueue
   * in the future, which may improve contention under very high write loads.
   */
  struct Data {
    std::array<std::vector<std::string>, 2> queues;
    uint32_t flags{0};
    uint64_t ioThreadCounter{0};
    size_t maxBufferBytes{kDefaultMaxBufferSize};
    size_t currentBufferSize{0};
    size_t numDiscarded{0};
    std::thread ioThread;
    }
    
    template <class Alloc>
void Arena<Alloc>::Block::deallocate(Alloc& alloc) {
  this->~Block();
  std::allocator_traits<Alloc>::deallocate(alloc, this, 1);
}