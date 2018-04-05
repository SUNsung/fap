
        
        #include <boost/asio/detail/config.hpp>
    
    #ifndef BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
#define BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
    
      // Consume multiple bytes from the beginning of the buffer.
  void consume(size_type count)
  {
    BOOST_ASIO_ASSERT(begin_offset_ + count <= end_offset_);
    begin_offset_ += count;
    if (empty())
      clear();
  }
    
      descriptor_read_op(int descriptor,
      const MutableBufferSequence& buffers, Handler& handler)
    : descriptor_read_op_base<MutableBufferSequence>(
        descriptor, buffers, &descriptor_read_op::do_complete),
      handler_(BOOST_ASIO_MOVE_CAST(Handler)(handler))
  {
  }
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef null_event event;
#elif defined(BOOST_ASIO_WINDOWS)
typedef win_event event;
#elif defined(BOOST_ASIO_HAS_PTHREADS)
typedef posix_event event;
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
typedef std_event event;
#endif
    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
using std::function;
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
using boost::function;
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
    // Calls to asio_handler_allocate and asio_handler_deallocate must be made from
// a namespace that does not contain any overloads of these functions. The
// boost_asio_handler_alloc_helpers namespace is defined here for that purpose.
namespace boost_asio_handler_alloc_helpers {
    }
    
    template <typename Handler>
char (&two_arg_handler_test(Handler, ...))[2];
    
      explicit winrt_buffer_impl(const boost::asio::mutable_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = 0;
    capacity_ = boost::asio::buffer_size(b);
  }
    
      // Block on the /dev/poll descriptor.
  ::pollfd events[128] = { { 0, 0, 0 } };
  ::dvpoll dp = { 0, 0, 0 };
  dp.dp_fds = events;
  dp.dp_nfds = 128;
  dp.dp_timeout = timeout;
  int num_events = ::ioctl(dev_poll_fd_, DP_POLL, &dp);
    
     public:
  EventFactory(EventFactory const&) = delete;
  EventFactory& operator=(EventFactory const&) = delete;
    
    /// External (extensions) SQL implementation of the osquery query API.
Status queryExternal(const std::string& query, QueryData& results);
    
      /// Set a registry's active plugin.
  Status setActive(const std::string& registry_name,
                   const std::string& item_name);
    
    /**
 * @brief Access the internal storage of the Decorator parser.
 *
 * The decoration set is a map of column name to value. It contains the opaque
 * set of decoration point results.
 *
 * Decorations are applied to log items before they are sent to the downstream
 * logging APIs: logString, logSnapshot, etc.
 *
 * @param results the output parameter to write decorations.
 */
void getDecorations(std::map<std::string, std::string>& results);
    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
    Status FilesystemConfigPlugin::genPack(const std::string& name,
                                       const std::string& value,
                                       std::string& pack) {
  if (name == '*') {
    // The config requested a multi-pack.
    std::vector<std::string> paths;
    resolveFilePattern(value, paths);
    }
    }
    
      char* buffer = (char*)malloc(range.length + 1);
  if (buffer == nullptr) {
    return '';
  }
  memset(buffer, 0, range.length + 1);
    
    // implements rabit error handling.
extern 'C' {
  void XGBoostAssert_R(int exp, const char *fmt, ...);
  void XGBoostCheck_R(int exp, const char *fmt, ...);
}
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    DMLC_REGISTRY_FILE_TAG(sparse_page_raw_format);
    
    
    {
    {    double dat[2]; dat[0] = sum, dat[1] = wsum;
    if (distributed) {
      rabit::Allreduce<rabit::op::Sum>(dat, 2);
    }
    return Derived::GetFinal(dat[0], dat[1]);
  }
  /*!
   * \brief to be implemented by subclass,
   *   get evaluation result from one row
   * \param label label of current instance
   * \param pred prediction value of current instance
   * \param nclass number of class in the prediction
   */
  inline static bst_float EvalRow(int label,
                                  const bst_float *pred,
                                  size_t nclass);
  /*!
   * \brief to be overridden by subclass, final transformation
   * \param esum the sum statistics returned by EvalRow
   * \param wsum sum of weight
   */
  inline static bst_float GetFinal(bst_float esum, bst_float wsum) {
    return esum / wsum;
  }
  // used to store error message
  const char *error_msg_;
};
    
    	xlog_info.tag = tag_jstr.GetChar();
	xlog_info.filename = filename_jstr.GetChar();
	xlog_info.func_name = funcname_jstr.GetChar();
    
    static const char gs_crash_dump_header[] =
    '*** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***';
    
    #include 'boost/any.hpp'
    
    #ifndef _COMM_FUNCTION_H_
#define _COMM_FUNCTION_H_
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}
    
        // Output as Base85 encoded
    FILE* out = stdout;
    fprintf(out, '// File: '%s' (%d bytes)\n', filename, (int)data_sz);
    fprintf(out, '// Exported using binary_to_compressed_c.cpp\n');
	const char* compressed_str = use_compression ? 'compressed_' : '';
    if (use_base85_encoding)
    {
        fprintf(out, 'static const char %s_%sdata_base85[%d+1] =\n    \'', symbol, compressed_str, (int)((compressed_sz+3)/4)*5);
        char prev_c = 0;
        for (int src_i = 0; src_i < compressed_sz; src_i += 4)
        {
            // This is made a little more complicated by the fact that ??X sequences are interpreted as trigraphs by old C/C++ compilers. So we need to escape pairs of ??.
            unsigned int d = *(unsigned int*)(compressed + src_i);
            for (unsigned int n5 = 0; n5 < 5; n5++, d /= 85)
            {
                char c = Encode85Byte(d);
                fprintf(out, (c == '?' && prev_c == '?') ? '\\%c' : '%c', c);
                prev_c = c;
            }
            if ((src_i % 112) == 112-4)
                fprintf(out, '\'\n    \'');
        }
        fprintf(out, '\';\n\n');
    }
    else
    {
        fprintf(out, 'static const unsigned int %s_%ssize = %d;\n', symbol, compressed_str, (int)compressed_sz);
        fprintf(out, 'static const unsigned int %s_%sdata[%d/4] =\n{', symbol, compressed_str, (int)((compressed_sz+3)/4)*4);
        int column = 0;
        for (int i = 0; i < compressed_sz; i += 4)
        {
            unsigned int d = *(unsigned int*)(compressed + i);
            if ((column++ % 12) == 0)
                fprintf(out, '\n    0x%08x, ', d);
            else
                fprintf(out, '0x%08x, ', d);
        }
        fprintf(out, '\n};\n\n');
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX9_CreateDeviceObjects();
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data)
{
    // Handle cases of screen coordinates != from framebuffer coordinates (e.g. retina displays)
    ImGuiIO& io = ImGui::GetIO();
    draw_data->ScaleClipRects(io.DisplayFramebufferScale);
    }
    
    void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}
    
        // Setup ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_Marmalade_Init(true);
    
    #endif

    
      virtual const char* Name() const override;
    
    void JniCallback::releaseJniEnv(jboolean& attached) const {
  JniUtil::releaseJniEnv(m_jvm, attached);
}
    
    
    {  // Fsync directory. Can be called concurrently from multiple threads.
  Status Fsync() {
    return Status::OK();
  }
};
    
        std::string log_line = 'ADD - ';
    log_line += key.ToString(true);
    log_line += ' - ';
    AppendNumberTo(&log_line, size);
  // @lint-ignore TXT2 T25377293 Grandfathered in
		log_line += '\n';
    
      int max_height = max_height_.load(std::memory_order_relaxed);
  while (height > max_height) {
    if (max_height_.compare_exchange_weak(max_height, height)) {
      // successfully updated it
      max_height = height;
      break;
    }
    // else retry, possibly exiting the loop because somebody else
    // increased it
  }
  assert(max_height <= kMaxPossibleHeight);
    
    inline Type ToTypedVector(Type t, size_t fixed_len = 0) {
  assert(IsTypedVectorElementType(t));
  switch (fixed_len) {
    case 0: return static_cast<Type>(t - TYPE_INT + TYPE_VECTOR_INT);
    case 2: return static_cast<Type>(t - TYPE_INT + TYPE_VECTOR_INT2);
    case 3: return static_cast<Type>(t - TYPE_INT + TYPE_VECTOR_INT3);
    case 4: return static_cast<Type>(t - TYPE_INT + TYPE_VECTOR_INT4);
    default: assert(0); return TYPE_NULL;
  }
}
    
      typedef void (*WarnFn)(const FlatCompiler *flatc, const std::string &warn,
                         bool show_exe_name);
    
    #include <cassert>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
    
    #endif

    
    
    {  bool Parse(std::istream &IS, bool ParseCoverage);
  bool Parse(const std::string &Str, bool ParseCoverage);
  void ParseOrExit(std::istream &IS, bool ParseCoverage);
  size_t Merge(std::vector<std::string> *NewFiles);
};
    
    size_t MutationDispatcher::Mutate(uint8_t *Data, size_t Size, size_t MaxSize) {
  return MutateImpl(Data, Size, MaxSize, Mutators);
}
    
    void sha1_write(sha1nfo *s, const char *data, size_t len) {
	for (;len--;) sha1_writebyte(s, (uint8_t) *data++);
}
    
    void PrintASCIIByte(uint8_t Byte) {
  if (Byte == '\\')
    Printf('\\\\');
  else if (Byte == ''')
    Printf('\\\'');
  else if (Byte >= 32 && Byte < 127)
    Printf('%c', Byte);
  else
    Printf('\\x%02x', Byte);
}