
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    #include 'base/strings/string_piece.h'
#include 'v8/include/v8.h'
    
    #include 'content/nw/src/api/menu/menu.h'
    
    
    {}  // namespace
    
      remover->AddObserver(this);
  remover->RemoveAndReply(base::Time(), base::Time::Max(),
                          content::BrowsingDataRemover::DATA_TYPE_CACHE,
                          content::BrowsingDataRemover::ORIGIN_TYPE_UNPROTECTED_WEB,
                          this);
  // BrowsingDataRemover deletes itself.
  base::MessageLoopCurrent::ScopedNestableTaskAllower allow;
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethod', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodFunction);
};
    
      // implement nw.Screen.isMonitorStarted()
  class NwScreenIsMonitorStartedFunction : public NWSyncExtensionFunction {
  public:
    NwScreenIsMonitorStartedFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        UText inputText = UTEXT_INITIALIZER;
    utext_openConstUnicodeString(&inputText, &input, &status);
    init2(&inputText, status);
    utext_close(&inputText);
    
        /**
     * Constructs a transliterator.
     */
    RemoveTransliterator();
    
    void SearchIterator::setMatchNotFound() 
{
    setMatchStart(USEARCH_DONE);
    setMatchLength(0);
    UErrorCode status = U_ZERO_ERROR;
    // by default no errors should be returned here since offsets are within 
    // range.
    if (m_search_->isForwardSearching) {
        setOffset(m_search_->textLength, status);
    }
    else {
        setOffset(0, status);
    }
}
    
    U_NAMESPACE_END
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
    #ifndef __SHARED_NUMBERFORMAT_H__
#define __SHARED_NUMBERFORMAT_H__
    
        /**
     * The text to be matched.
     */
    UnicodeString pattern;
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
      void getClosestKNodes(std::vector<std::shared_ptr<DHTNode>>& nodes,
                        const unsigned char* key) const;
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
      Type type_;
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    bool Executor::keepAliveAcquire() {
  return false;
}
    
    
    {} // namespace folly

    
    namespace folly {
    }
    
    
    { private:
  const KeepAlive<> executor_;
};
    
      unsigned int get_local_count(const PackedPtr& p) const {
    return p.extra() & ~ALIASED_PTR;
  }
    
    void AtFork::unregisterHandler(void* object) {
  auto& list = AtForkList::instance();
  std::lock_guard<std::mutex> lg(list.tasksLock);
  for (auto it = list.tasks.begin(); it != list.tasks.end(); ++it) {
    if (it->object == object) {
      list.tasks.erase(it);
      return;
    }
  }
}
    
    
    {
    {template <typename IPAddrType>
inline bool
getNthMSBitImpl(const IPAddrType& ip, size_t bitIndex, sa_family_t family) {
  if (bitIndex >= ip.bitCount()) {
    getNthMSBitImplThrow(ip.bitCount(), family);
  }
  // Underlying bytes are in n/w byte order
  return (ip.getNthMSByte(bitIndex / 8) & (0x80 >> (bitIndex % 8))) != 0;
}
} // namespace detail
} // namespace folly

    
    size_t qfind_first_byte_of_bitset(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  std::bitset<256> s;
  for (auto needle : needles) {
    s[(uint8_t)needle] = true;
  }
  for (size_t index = 0; index < haystack.size(); ++index) {
    if (s[(uint8_t)haystack[index]]) {
      return index;
    }
  }
  return std::string::npos;
}
    
    public:
    JStringCache(int capacity) : capacity(capacity) {}
    
    namespace WeexCore {
    }
    
    #include <map>
#include <set>
#include <string>
    
    namespace WeexCore {
    }
    
    
    {
    { public:
  std::string page_id_;
  std::string ref_;
  std::vector<std::pair<std::string, std::string>> *style_;
  std::vector<std::pair<std::string, std::string>> *margin_;
  std::vector<std::pair<std::string, std::string>> *padding_;
  std::vector<std::pair<std::string, std::string>> *border_;
};
}  // namespace WeexCore
    
    #endif  // CORE_RENDER_NODE_RENDER_APPBAR_H_
