
        
        #include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
    
    #include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
    
        std::unique_ptr<google::protobuf::io::ZeroCopyOutputStream> output(
        context->Open(basename + '.proto'));
    string content = new_pool_.BuildFile(new_file)->DebugString();
    Printer printer(output.get(), '$');
    printer.WriteRaw(content.c_str(), content.size());
    
    class EnumGenerator {
 public:
  explicit EnumGenerator(const EnumDescriptor* descriptor);
  ~EnumGenerator();
    }
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    
    {  // We had a counted inner array---we need to do an O(N) copy to get the
  // collection into the request local heap.
  auto const apcArr = APCArray::fromHandle(m_arrayHandle);
  auto const col = Object::attach(collections::alloc(m_colType));
  switch (m_colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    fillCollection(static_cast<BaseVector*>(col.get()), apcArr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    fillCollection(static_cast<BaseSet*>(col.get()), apcArr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    fillMap(static_cast<BaseMap*>(col.get()), apcArr);
    break;
  case CollectionType::Pair:
    always_assert(0);
    break;
  }
  return col;
}
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    // This method must return a char* which is owned by the IniSettingMap
// to avoid issues with the lifetime of the char*
const char* Config::Get(const IniSettingMap &ini, const Hdf& config,
                        const std::string& name /* = '' */,
                        const char *defValue /* = nullptr */,
                        const bool prepend_hhvm /* = true */) {
  auto ini_name = IniName(name, prepend_hhvm);
  Hdf hdf = name != '' ? config[name] : config;
  auto value = ini_iterate(ini, ini_name);
  if (value.isString()) {
    // See generic Get##METHOD below for why we are doing this
    // Note that value is a string, so value.toString() is not
    // a temporary.
    const char* ini_ret = value.toString().data();
    const char* hdf_ret = hdf.configGet(ini_ret);
    if (hdf_ret != ini_ret) {
      ini_ret = hdf_ret;
      IniSetting::SetSystem(ini_name, ini_ret);
    }
    return ini_ret;
  }
  return hdf.configGet(defValue);
}
    
    #endif

    
    #include 'hphp/util/stack-trace.h'
    
    #include <atomic>
    
      explicit PlainFile(FILE *stream = nullptr,
                     bool nonblocking = false,
                     const String& wrapper_type = null_string,
                     const String& stream_type = null_string);
  explicit PlainFile(int fd,
                     bool nonblocking = false,
                     const String& wrapper = null_string,
                     const String& stream_type = null_string);
  ~PlainFile() override;
    
      explicit UrlFile(const char *method = 'GET', const Array& headers = null_array,
                   const String& postData = null_string,
                   int maxRedirect = HttpClient::defaultMaxRedirect,
                   int timeout = -1, bool ignoreErrors = false);