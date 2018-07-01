
        
        ExtensionFunction::ResponseAction
NwCurrentWindowInternalCloseDevToolsFunction::Run() {
  content::RenderFrameHost* rfh = render_frame_host();
  content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rfh);
  scoped_refptr<content::DevToolsAgentHost> agent(
      content::DevToolsAgentHost::GetOrCreateFor(web_contents));
  DevToolsWindow* devtools_window =
      DevToolsWindow::FindDevToolsWindow(agent.get());
  if (devtools_window) {
    devtools_window->Close();
  }
  return RespondNow(NoArguments());
}
    
     private:
  ObjectManager* object_manager_;
    
    void Menu::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    for(auto* item : menu_items_) {
      item->UpdateKeys(focus_manager);
    }
  }
}
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    void MenuItem::SetIcon(const std::string& icon) {
  if (icon.empty()) {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_), NULL); 
  } else {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                  gtk_image_new_from_file(icon.c_str()));
    gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                              TRUE);
  }
}
    
      std::string icon;
  if (option.GetString('icon', &icon) && !icon.empty())
    SetIcon(icon);
    
    
    {      data.data.reset(new std::string(encoded_image_base64));
      LOG(INFO) << 'NwClipboardGetSyncFunction::RunSync(' << nwapi::nw__clipboard::ToString(data.type) << ')';
      return true;
    }
    
    #include 'extensions/browser/extension_function.h'
    
    
    {      return displayResult;
    }
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenIsMonitorStartedFunction);
  };
    
    # if !GTEST_OS_WINDOWS
// Tests that an exit code describes an exit due to termination by a
// given signal.
class GTEST_API_ KilledBySignal {
 public:
  explicit KilledBySignal(int signum);
  bool operator()(int exit_status) const;
 private:
  const int signum_;
};
# endif  // !GTEST_OS_WINDOWS
    
      // Returns true if pathname describes an absolute path.
  bool IsAbsolutePath() const;
    
     private:
  // No implementation - assignment is unsupported.
  void operator=(const ValueArray47& other);
    
    // <regex.h> is not available on Windows.  Use our own simple regex
// implementation instead.
# define GTEST_USES_SIMPLE_RE 1
    
    template <GTEST_10_TYPENAMES_(T), GTEST_10_TYPENAMES_(U)>
inline bool operator==(const GTEST_10_TUPLE_(T)& t,
                       const GTEST_10_TUPLE_(U)& u) {
  return gtest_internal::SameSizeTuplePrefixComparator<
      tuple_size<GTEST_10_TUPLE_(T) >::value,
      tuple_size<GTEST_10_TUPLE_(U) >::value>::Eq(t, u);
}
    
    // The following family of struct and struct templates are used to
// represent type lists.  In particular, TypesN<T1, T2, ..., TN>
// represents a type list with N types (T1, T2, ..., and TN) in it.
// Except for Types0, every struct in the family has two member types:
// Head for the first type in the list, and Tail for the rest of the
// list.
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    
    {  GetReporter()->ReportQPSPerCore(*result);
  GetReporter()->ReportLatency(*result);
}
    
      bool PrintBetaServicer(const grpc_generator::Service* service,
                         grpc_generator::Printer* out);
  bool PrintBetaServerFactory(
      const grpc::string& package_qualified_service_name,
      const grpc_generator::Service* service, grpc_generator::Printer* out);
  bool PrintBetaStub(const grpc_generator::Service* service,
                     grpc_generator::Printer* out);
  bool PrintBetaStubFactory(const grpc::string& package_qualified_service_name,
                            const grpc_generator::Service* service,
                            grpc_generator::Printer* out);
    
    template <class T, class F>
double average(const T& container, F functor) {
  return sum(container, functor) / container.size();
}
    
      /// Sets the non-blocking mode of the native acceptor implementation.
  /**
   * This function is used to modify the non-blocking mode of the underlying
   * native acceptor. It has no effect on the behaviour of the acceptor object's
   * synchronous operations.
   *
   * @param mode If @c true, the underlying acceptor is put into non-blocking
   * mode and direct system calls may fail with boost::asio::error::would_block
   * (or the equivalent system error).
   *
   * @param ec Set to indicate what error occurred, if any. If the @c mode is
   * @c false, but the current value of @c non_blocking() is @c true, this
   * function fails with boost::asio::error::invalid_argument, as the
   * combination does not make sense.
   */
  boost::system::error_code native_non_blocking(
      bool mode, boost::system::error_code& ec)
  {
    return this->get_service().native_non_blocking(
        this->get_implementation(), mode, ec);
  }
    
        // Pop the key/value pair from the stack.
    ~context()
    {
      call_stack<Key, Value>::top_ = next_;
    }
    
    
    {} // namespace boost_asio_handler_invoke_helpers
    
    #define BOOST_ASIO_COMPOSED_CONNECT_HANDLER_CHECK( \
    handler_type, handler, iter_type) \
  typedef int BOOST_ASIO_UNUSED_TYPEDEF
    
    SEXP XGDMatrixCreateFromCSC_R(SEXP indptr,
                              SEXP indices,
                              SEXP data,
                              SEXP num_row) {
  SEXP ret;
  R_API_BEGIN();
  const int *p_indptr = INTEGER(indptr);
  const int *p_indices = INTEGER(indices);
  const double *p_data = REAL(data);
  size_t nindptr = static_cast<size_t>(length(indptr));
  size_t ndata = static_cast<size_t>(length(data));
  size_t nrow = static_cast<size_t>(INTEGER(num_row)[0]);
  std::vector<size_t> col_ptr_(nindptr);
  std::vector<unsigned> indices_(ndata);
  std::vector<float> data_(ndata);
    }
    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
    template<>
inline XGBOOST_DEVICE float GradientPairInternal<int64_t>::GetGrad() const {
  return grad_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE float GradientPairInternal<int64_t>::GetHess() const {
  return hess_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE void GradientPairInternal<int64_t>::SetGrad(float g) {
  grad_ = static_cast<int64_t>(std::round(g * 1e4));
}
template<>
inline XGBOOST_DEVICE void GradientPairInternal<int64_t>::SetHess(float h) {
  hess_ = static_cast<int64_t>(std::round(h * 1e4));
}
    
    // Store 8 gradient pairs given vectors containing gradient and Hessian
inline void StoreGpair(xgboost::GradientPair* dst, const Float8& grad,
                       const Float8& hess) {
  float* ptr = reinterpret_cast<float*>(dst);
  __m256 gpair_low = _mm256_unpacklo_ps(grad.x, hess.x);
  __m256 gpair_high = _mm256_unpackhi_ps(grad.x, hess.x);
  _mm256_storeu_ps(ptr, _mm256_permute2f128_ps(gpair_low, gpair_high, 0x20));
  _mm256_storeu_ps(ptr + 8,
                   _mm256_permute2f128_ps(gpair_low, gpair_high, 0x31));
}
}  // namespace avx
#else
namespace avx {
/**
 * \struct  Float8
 *
 * \brief Fallback implementation not using AVX.
 */
    
    template <typename C>
struct compare_equal_to : detail::cmp_pred<C, ordering::eq, 0> {
  using detail::cmp_pred<C, ordering::eq, 0>::cmp_pred;
};
    
    class SingletonVault {
 public:
  enum class Type {
    Strict, // Singletons can't be created before registrationComplete()
    Relaxed, // Singletons can be created before registrationComplete()
  };
    }
    
    // See portability/Unistd.h for why these need to be in a namespace
// rather then extern 'C'.
namespace folly {
namespace portability {
namespace fcntl {
int creat(char const* fn, int pm);
int fcntl(int fd, int cmd, ...);
int posix_fallocate(int fd, off_t offset, off_t len);
int open(char const* fn, int of, int pm = 0);
}
}
}
    
    
    {  ExampleObject('foo');
  XLOG(INFO) << 'main returning';
  return 0;
}

    
      argumentEvaluated = false;
  XLOGC_IF(DBG1, true, 'xlog format string %d', getValue());
  ASSERT_EQ(1, messages.size());
  EXPECT_TRUE(argumentEvaluated);
  messages.clear();
    
    
    {  // xlogStripFilename() should ideally be a purely compile-time evaluation.
  // Use a static_assert() to ensure that it can be evaluated at compile time.
  // We use EXPECT_STREQ() checks above for most of the testing since it
  // produces nicer messages on failure.
  static_assert(
      constexpr_strcmp(
          xlogStripFilename('/my/project/src/test.cpp', '/my/project'),
          'src/test.cpp') == 0,
      'incorrect xlogStripFilename() behavior');
}

    
    #include <yoga/Yoga.h>
    
    
    {  return _URC_NO_REASON;
}
    
        double top;
    double bottom;
    
    
    {
    {
    {  static void OnLoad();
 private:
  bool attachedWithThisScope_;
};
}
}

    
    
    {}

    
    namespace facebook {
    }