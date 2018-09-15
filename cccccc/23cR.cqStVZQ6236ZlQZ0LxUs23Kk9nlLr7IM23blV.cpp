
        
        void NwCurrentWindowInternalShowDevTools2InternalFunction::OnOpened() {
  Respond(NoArguments());
  Release();
}
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
       void ExecuteCommand(int command_id, int event_flags) override;
    
    void Menu::Destroy() {
  gtk_widget_destroy(menu_);
  g_object_unref(G_OBJECT(menu_));
}
    
    
    {      return true;
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6>
internal::ValueArray6<T1, T2, T3, T4, T5, T6> Values(T1 v1, T2 v2, T3 v3,
    T4 v4, T5 v5, T6 v6) {
  return internal::ValueArray6<T1, T2, T3, T4, T5, T6>(v1, v2, v3, v4, v5, v6);
}
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
    
      virtual int GetNextPrime(int p) const {
    for (int n = p + 1; n < is_prime_size_; n++) {
      if (is_prime_[n]) return n;
    }
    }
    
    using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;
    
    
// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.
    
      size_t Length() const {
    return c_string_ == NULL ? 0 : strlen(c_string_);
  }