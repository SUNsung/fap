
        
              // colon indicates that the argument starts with a URI scheme
      if (c == ':') {
        // it could also be a Windows filesystem path
        if (p == arg + 1)
          break;
    }
    
    void ShowMessageBox(int type,
                    const std::vector<std::string>& buttons,
                    int default_id,
                    int cancel_id,
                    int options,
                    const std::string& title,
                    const std::string& message,
                    const std::string& detail,
                    const std::string& checkbox_label,
                    bool checkbox_checked,
                    const gfx::ImageSkia& icon,
                    atom::NativeWindow* window,
                    mate::Arguments* args) {
  v8::Local<v8::Value> peek = args->PeekNext();
  atom::MessageBoxCallback callback;
  if (mate::Converter<atom::MessageBoxCallback>::FromV8(args->isolate(), peek,
                                                        &callback)) {
    atom::ShowMessageBox(window, static_cast<atom::MessageBoxType>(type),
                         buttons, default_id, cancel_id, options, title,
                         message, detail, checkbox_label, checkbox_checked,
                         icon, callback);
  } else {
    int chosen = atom::ShowMessageBox(
        window, static_cast<atom::MessageBoxType>(type), buttons, default_id,
        cancel_id, options, title, message, detail, icon);
    args->Return(chosen);
  }
}
    
    #ifndef ATOM_BROWSER_API_ATOM_API_DOWNLOAD_ITEM_H_
#define ATOM_BROWSER_API_ATOM_API_DOWNLOAD_ITEM_H_
    
    #include <string>
#include <vector>
    
      // NotificationDelegate:
  void NotificationAction(int index) override;
  void NotificationClick() override;
  void NotificationReplied(const std::string& reply) override;
  void NotificationDisplayed() override;
  void NotificationDestroyed() override;
  void NotificationClosed() override;
    
      // True when a ScopedPyObjectPtr and a raw pointer refer to the same object.
  // Comparison operators are non reflexive.
  bool operator==(const PyObjectStruct* p) const { return ptr_ == p; }
  bool operator!=(const PyObjectStruct* p) const { return ptr_ != p; }
    
      DescriptorCapturingGenerator capturing_generator(file);
  cli->RegisterGenerator('--capture_out', &capturing_generator, '');
    
    const OneofGeneratorInfo* Context::GetOneofGeneratorInfo(
    const OneofDescriptor* oneof) const {
  const OneofGeneratorInfo* result =
      FindOrNull(oneof_generator_info_map_, oneof);
  if (result == NULL) {
    GOOGLE_LOG(FATAL) << 'Can not find OneofGeneratorInfo for oneof: '
               << oneof->name();
  }
  return result;
}
    
    EnumFieldGenerator::EnumFieldGenerator(const FieldDescriptor* descriptor,
                                       const Options& options)
    : SingleFieldGenerator(descriptor, options) {
  SetEnumVariables(descriptor, &variables_);
}
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14>
internal::ValueArray14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14) {
  return internal::ValueArray14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13,
      v14);
}
    
      // Gets the line in the source file where the test part took place,
  // or -1 if it's unknown.
  int line_number() const { return line_number_; }
    
    // This macro is for implementing ASSERT/EXPECT_DEBUG_DEATH when compiled in
// NDEBUG mode. In this case we need the statements to be executed, the regex is
// ignored, and the macro must accept a streamed message even though the message
// is never printed.
# define GTEST_EXECUTE_STATEMENT_(statement, regex) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
     GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } else \
    ::testing::Message()
    
      // Returns a pointer to the last occurence of a valid path separator in
  // the FilePath. On Windows, for example, both '/' and '\' are valid path
  // separators. Returns NULL if no path separator was found.
  const char* FindLastPathSeparator() const;
    
    template<typename T> inline
bool operator==(T* ptr, const linked_ptr<T>& x) {
  return ptr == x.get();
}
    
      virtual bool IsPrime(int n) const {
    return 0 <= n && n < is_prime_size_ && is_prime_[n];
  }
    
      const size_t len = strlen(a_c_string);
  char* const clone = new char[ len + 1 ];
  memcpy(clone, a_c_string, len + 1);
    
    
    {  // Sets the 0-terminated C string this MyString object represents.
  void Set(const char* c_string);
};
    
      // Set should work when the input pointer is the same as the one
  // already in the MyString object.
  s.Set(s.c_string());
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
    
      /**
   * Returns a double in [0, 1)
   */
  template <class RNG = ThreadLocalPRNG, class /* EnableIf */ = ValidRNG<RNG>>
  static double randDouble01(RNG&& rng) {
    return std::generate_canonical<double, std::numeric_limits<double>::digits>(
        rng);
  }
    
    
    {    // Test overflows from an unusual duration where neither the numerator nor
    // denominator are 1.
    using three_halves = std::chrono::duration<uint64_t, std::ratio<3, 2>>;
    EXPECT_THROW(
        to<struct timespec>(three_halves(6148914691236517206ULL)),
        std::range_error);
  }
    
    
    {
    {} // namespace detail
} // namespace folly
