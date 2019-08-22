
        
        namespace internal {
    }
    
    v8::Local<v8::Value> Converter<Promise>::ToV8(v8::Isolate* isolate,
                                              Promise val) {
  return val.GetHandle();
}
    
    bool CertificateManagerModel::SetCertTrust(
    CERTCertificate* cert,
    net::CertType type,
    net::NSSCertDatabase::TrustBits trust_bits) {
  return cert_db_->SetCertTrust(cert, type, trust_bits);
}
    
    // This set of templates invokes a base::Callback by converting the Arguments
// into native types. It relies on the function_template.h to provide helper
// templates.
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*()>& callback) {
  return callback.Run();
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
    
    
    {  DISALLOW_COPY_AND_ASSIGN(WrappableBase);
};
    
    #ifndef CHROME_BROWSER_PROCESS_SINGLETON_H_
#define CHROME_BROWSER_PROCESS_SINGLETON_H_
    
    #include <emscripten.h>
#include <stdio.h>
#include <setjmp.h>
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
    //------------------------------------------------------------------------
    
    PageLabelInfo::Interval::~Interval() {
  delete prefix;
}
    
      enum MediaFittingPolicy {
    fittingMeet = 0,
    fittingSlice,
    fittingFill,
    fittingScroll,
    fittingHidden,
    fittingUndefined
  };
    
    
    {  return newsound;
}
