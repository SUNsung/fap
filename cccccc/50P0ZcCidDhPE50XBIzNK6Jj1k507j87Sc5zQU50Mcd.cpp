
        
        
    {  DISALLOW_COPY_AND_ASSIGN(DesktopCapturer);
};
    
    class RenderProcessPreferences
    : public mate::Wrappable<RenderProcessPreferences> {
 public:
  static mate::Handle<RenderProcessPreferences>
      ForAllWebContents(v8::Isolate* isolate);
    }
    
    #ifndef ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
#define ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
    
    net::URLRequestJob* HttpProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  return net::URLRequestHttpJob::Factory(request,
                                         network_delegate,
                                         scheme_);
}
    
    class HttpProtocolHandler : public net::URLRequestJobFactory::ProtocolHandler {
 public:
  explicit HttpProtocolHandler(const std::string&);
  virtual ~HttpProtocolHandler();
    }
    
    namespace atom {
    }
    
    namespace atom {
    }
    
    // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    class SourceGeneratorBase {
 protected:
  SourceGeneratorBase(const FileDescriptor* descriptor, const Options* options);
  virtual ~SourceGeneratorBase();
    }
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
        'return this;\n');
    
      // Return the amount of unread data the is in the buffer.
  size_type size() const
  {
    return end_offset_ - begin_offset_;
  }
    
    template<class T, class TimeSystem>
class base_time;
    
      static bool do_perform(reactor_op* base)
  {
    descriptor_read_op_base* o(static_cast<descriptor_read_op_base*>(base));
    }
    
          if (events[i].events & (POLLIN | POLLERR | POLLHUP))
        more_reads = op_queue_[read_op].perform_operations(descriptor, ops);
      else
        more_reads = op_queue_[read_op].has_operation(descriptor);
    
    #endif // defined(BOOST_ASIO_HAS_EPOLL)
    
    class DropPrivileges : private boost::noncopyable {
 public:
  /// Make call sites use 'dropTo' booleans to improve the UI.
  static DropPrivilegesRef get() {
    DropPrivilegesRef handle = DropPrivilegesRef(new DropPrivileges());
    return handle;
  }
    }
    
    // OSQuery character device switch structure.
static struct cdevsw osquery_cdevsw = {
    osquery_open, // open_close_fcn_t *d_open;
    osquery_close, // open_close_fcn_t *d_close;
    eno_rdwrt, // read_write_fcn_t *d_read;
    eno_rdwrt, // read_write_fcn_t *d_write;
    &osquery_ioctl, // ioctl_fcn_t      *d_ioctl;
    eno_stop, // stop_fcn_t       *d_stop;
    eno_reset, // reset_fcn_t      *d_reset;
    NULL, // struct tty      **d_ttys;
    eno_select, // select_fcn_t     *d_select;
    eno_mmap, // mmap_fcn_t       *d_mmap;
    eno_strat, // strategy_fcn_t   *d_strategy;
    eno_getc, // getc_fcn_t       *d_getc;
    eno_putc, // putc_fcn_t       *d_putc;
    0 // int               d_type;
};
    
    
    {    // Check if overflowed
    if (value > 0) {
      return boost::lexical_cast<std::string>(std::llround(value));
    }
  }
    
      if (result.front().at('symlink') == '1') {
    // The file is a symlink, inspect the owner of the link.
    struct stat link_stat;
    if (lstat(parent.c_str(), &link_stat) != 0) {
      return false;
    }
    }
    
    bool starts_with(const path& pth, const path& prefix) {
  path::const_iterator it;
  return skipPrefix(pth, prefix, it);
}
    
    
    {  mmapFileCopy(srcFile, destPath.c_str());
}
    
    // Get raw huge page sizes (without mount points, they'll be filled later)
HugePageSizeVec readRawHugePageSizes() {
  // We need to parse file names from /sys/kernel/mm/hugepages
  static const boost::regex regex(R'!(hugepages-(\d+)kB)!');
  boost::smatch match;
  HugePageSizeVec vec;
  fs::path path('/sys/kernel/mm/hugepages');
  for (fs::directory_iterator it(path); it != fs::directory_iterator(); ++it) {
    std::string filename(it->path().filename().string());
    if (boost::regex_match(filename, match, regex)) {
      StringPiece numStr(
          filename.data() + match.position(1), size_t(match.length(1)));
      vec.emplace_back(to<size_t>(numStr) * 1024);
    }
  }
  return vec;
}
    
    namespace folly {
    }
    
    
    {} // namespace folly

    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
        Config(void);
    
    
    {} // namespace facebook

    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
      // Creates a strong reference from a raw pointer, assuming that it points to a
  // freshly-created object. See the documentation for RefPtr for usage.
  static inline RefPtr<T> adoptRef(T* ptr) {
    return RefPtr<T>(ptr, ConstructionMode::Adopted);
  }
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }
    
      bool HasUnit(const Unit &U) { return Hashes.count(Hash(U)); }
  bool HasUnit(const std::string &H) { return Hashes.count(H); }
  InputInfo &ChooseUnitToMutate(Random &Rand) {
    InputInfo &II = *Inputs[ChooseUnitIdxToMutate(Rand)];
    assert(!II.U.empty());
    return II;
  };
    
    #include <cassert>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = GetFnPtr<decltype(::NAME)>(::NAME, ::NAME##Def, #NAME, WARN);
    }
    
    
    {  std::ofstream OF(CFPath, std::ofstream::out | std::ofstream::app);
  for (size_t i = M.FirstNotProcessedFile; i < M.Files.size(); i++) {
    auto U = FileToVector(M.Files[i].Name);
    if (U.size() > MaxInputLen) {
      U.resize(MaxInputLen);
      U.shrink_to_fit();
    }
    std::ostringstream StartedLine;
    // Write the pre-run marker.
    OF << 'STARTED ' << std::dec << i << ' ' << U.size() << '\n';
    OF.flush();  // Flush is important since ExecuteCommand may crash.
    // Run.
    TPC.ResetMaps();
    ExecuteCallback(U.data(), U.size());
    // Collect coverage.
    std::set<size_t> Features;
    TPC.CollectFeatures([&](size_t Feature) -> bool {
      Features.insert(Feature);
      return true;
    });
    // Show stats.
    TotalNumberOfRuns++;
    if (!(TotalNumberOfRuns & (TotalNumberOfRuns - 1)))
      PrintStats('pulse ');
    // Write the post-run marker and the coverage.
    OF << 'DONE ' << i;
    for (size_t F : Features)
      OF << ' ' << std::hex << F;
    OF << '\n';
  }
}