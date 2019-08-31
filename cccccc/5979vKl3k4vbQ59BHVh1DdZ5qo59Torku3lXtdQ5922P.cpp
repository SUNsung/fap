
        
        public:
    explicit OpenURIDialog(QWidget *parent);
    ~OpenURIDialog();
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
        BOOST_CHECK(obj.exists('age'));
    BOOST_CHECK(obj.exists('first'));
    BOOST_CHECK(obj.exists('last'));
    BOOST_CHECK(obj.exists('distance'));
    BOOST_CHECK(obj.exists('time'));
    BOOST_CHECK(obj.exists('calories'));
    BOOST_CHECK(obj.exists('temperature'));
    BOOST_CHECK(obj.exists('moon'));
    BOOST_CHECK(obj.exists('spoon'));
    BOOST_CHECK(obj.exists('cat1'));
    BOOST_CHECK(obj.exists('cat2'));
    
      std::string AllEntriesFor(const Slice& user_key) {
    Iterator* iter = dbfull()->TEST_NewInternalIterator();
    InternalKey target(user_key, kMaxSequenceNumber, kTypeValue);
    iter->Seek(target.Encode());
    std::string result;
    if (!iter->status().ok()) {
      result = iter->status().ToString();
    } else {
      result = '[ ';
      bool first = true;
      while (iter->Valid()) {
        ParsedInternalKey ikey;
        if (!ParseInternalKey(iter->key(), &ikey)) {
          result += 'CORRUPTED';
        } else {
          if (last_options_.comparator->Compare(ikey.user_key, user_key) != 0) {
            break;
          }
          if (!first) {
            result += ', ';
          }
          first = false;
          switch (ikey.type) {
            case kTypeValue:
              result += iter->value().ToString();
              break;
            case kTypeDeletion:
              result += 'DEL';
              break;
          }
        }
        iter->Next();
      }
      if (!first) {
        result += ' ';
      }
      result += ']';
    }
    delete iter;
    return result;
  }
    
    void SetProxyConfigCallback(
    base::WaitableEvent* done,
    net::URLRequestContextGetter* url_request_context_getter,
    const net::ProxyConfig& proxy_config) {
  net::ProxyService* proxy_service =
      url_request_context_getter->GetURLRequestContext()->proxy_service();
  proxy_service->ResetConfigService(
      new net::ProxyConfigServiceFixed(proxy_config));
  done->Signal();
}
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
      scoped_ptr<base::Value> value_option(
      converter->FromV8Value(options, isolate->GetCurrentContext()));
  if (!value_option.get() ||
      !value_option->IsType(base::Value::TYPE_DICTIONARY))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'option' passed to AllocateObject')));
    
    
    {} // namespace nwapi

    
    void Menu::RemoveKeys() {
  if (!focus_manager_) return;
    }
    
    class NwClipboardGetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardGetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::const_reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create a JSON number from number_integer_t
    json::number_integer_t value_integer_t = -42;
    json j_integer_t(value_integer_t);
    
        // print values
    std::cout << object << '\n';
    std::cout << *res1.first << ' ' << std::boolalpha << res1.second << '\n';
    
    
    {    // COMPILE_TEMPLATE_DATUM(UserPostProcessing);
}
    
            inline T area() const
        {
            return x * y;
        }
    
        /*! \brief Copy assignment to forward copy to the superclass correctly.
     * Required for MSVC.
     */
    BufferD3D10& operator = (const BufferD3D10 &buf)
    {
        Buffer::operator=(buf);
        return *this;
    }