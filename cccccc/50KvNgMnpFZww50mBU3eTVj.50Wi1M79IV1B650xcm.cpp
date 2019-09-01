
        
        
    {}  // namespace internal
    
    GURL GetDevToolsURL(bool can_dock) {
  auto url_string = base::StringPrintf(kChromeUIDevToolsURL,
                                       GetRemoteBaseURL().spec().c_str(),
                                       can_dock ? 'true' : '');
  return GURL(url_string);
}
    
      // If the Create() failed, try again to notify. (It could be that another
  // instance was starting at the same time and managed to grab the lock before
  // we did.)
  // This time, we don't want to kill anything if we aren't successful, since we
  // aren't going to try to take over the lock ourselves.
  result = NotifyOtherProcessWithTimeout(command_line, retry_attempts, timeout,
                                         false);
    
    // static
GlobalMenuBarRegistrarX11* GlobalMenuBarRegistrarX11::GetInstance() {
  return base::Singleton<GlobalMenuBarRegistrarX11>::get();
}
    
    #ifndef SHELL_APP_COMMAND_LINE_ARGS_H_
#define SHELL_APP_COMMAND_LINE_ARGS_H_
    
    block_id_t sindex_superblock_t::get_stat_block_id() {
    buf_read_t read(&sb_buf_);
    const reql_btree_superblock_t *sb_data = get_reql_btree_superblock(&read);
    return sb_data->stat_block;
}
    
        void release();
    buf_lock_t *get() { return &sb_buf_; }
    
    // Tests that an exit code describes a normal exit with a given exit code.
class GTEST_API_ ExitedWithCode {
 public:
  explicit ExitedWithCode(int exit_code);
  bool operator()(int exit_status) const;
 private:
  // No implementation - assignment is unsupported.
  void operator=(const ExitedWithCode& other);
    }
    
    // Used to print an STL-style container when the user doesn't define
// a PrintTo() for it.
template <typename C>
void DefaultPrintTo(IsContainer /* dummy */,
                    false_type /* is not a pointer */,
                    const C& container, ::std::ostream* os) {
  const size_t kMaxCount = 32;  // The maximum number of elements to print.
  *os << '{';
  size_t count = 0;
  for (typename C::const_iterator it = container.begin();
       it != container.end(); ++it, ++count) {
    if (count > 0) {
      *os << ',';
      if (count == kMaxCount) {  // Enough has been printed.
        *os << ' ...';
        break;
      }
    }
    *os << ' ';
    // We cannot call PrintTo(*it, os) here as PrintTo() doesn't
    // handle *it being a native array.
    internal::UniversalPrint(*it, os);
  }
    }
    }
    
    // This interface knows how to report a test part result.
class TestPartResultReporterInterface {
 public:
  virtual ~TestPartResultReporterInterface() {}
    }
    
      // Returns true if the death test passed; that is, the test process
  // exited during the test, its exit status matches a user-supplied
  // predicate, and its stderr output matches a user-supplied regular
  // expression.
  // The user-supplied predicate may be a macro expression rather
  // than a function pointer or functor, or else Wait and Passed could
  // be combined.
  virtual bool Passed(bool exit_status_ok) = 0;
    
      // Compares two wide C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike wcscasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL wide C string,
  // including the empty string.
  // NB: The implementations on different platforms slightly differ.
  // On windows, this method uses _wcsicmp which compares according to LC_CTYPE
  // environment variable. On GNU platform this method uses wcscasecmp
  // which compares according to LC_CTYPE category of the current locale.
  // On MacOS X, it uses towlower, which also uses LC_CTYPE category of the
  // current locale.
  static bool CaseInsensitiveWideCStringEquals(const wchar_t* lhs,
                                               const wchar_t* rhs);
    
    template <>
class tuple<> {
 public:
  tuple() {}
  tuple(const tuple& /* t */)  {}
  tuple& operator=(const tuple& /* t */) { return *this; }
};
    
     public:
  AbstractOperation(QSharedPointer<RedisClient::Connection> connection,
                    int dbIndex, OperationCallback callback,
                    QRegExp keyPattern = QRegExp('*', Qt::CaseSensitive,
                                                 QRegExp::Wildcard));