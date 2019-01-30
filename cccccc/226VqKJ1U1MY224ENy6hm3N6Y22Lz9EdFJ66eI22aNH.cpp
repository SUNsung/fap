
        
        
    {
    {
    {
    {bool AnnotationMatchesSubstring(const string& file_content,
                                const GeneratedCodeInfo::Annotation* annotation,
                                const string& expected_text) {
  std::vector<const GeneratedCodeInfo::Annotation*> annotations;
  annotations.push_back(annotation);
  return AtLeastOneAnnotationMatchesSubstring(file_content, annotations,
                                              expected_text);
}
}  // namespace annotation_test_util
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    { private:
  Version compiler_version_;
  CodeGeneratorResponse* response_;
  const std::vector<const FileDescriptor*>& parsed_files_;
};
    
    static const uint32 kCRC32Table[256] = {
  0x00000000, 0x77073096, 0xee0e612c, 0x990951ba, 0x076dc419, 0x706af48f,
  0xe963a535, 0x9e6495a3, 0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988,
  0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91, 0x1db71064, 0x6ab020f2,
  0xf3b97148, 0x84be41de, 0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7,
  0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec, 0x14015c4f, 0x63066cd9,
  0xfa0f3d63, 0x8d080df5, 0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172,
  0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b, 0x35b5a8fa, 0x42b2986c,
  0xdbbbc9d6, 0xacbcf940, 0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59,
  0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116, 0x21b4f4b5, 0x56b3c423,
  0xcfba9599, 0xb8bda50f, 0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924,
  0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d, 0x76dc4190, 0x01db7106,
  0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433,
  0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818, 0x7f6a0dbb, 0x086d3d2d,
  0x91646c97, 0xe6635c01, 0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e,
  0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457, 0x65b0d9c6, 0x12b7e950,
  0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65,
  0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2, 0x4adfa541, 0x3dd895d7,
  0xa4d1c46d, 0xd3d6f4fb, 0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0,
  0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9, 0x5005713c, 0x270241aa,
  0xbe0b1010, 0xc90c2086, 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
  0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4, 0x59b33d17, 0x2eb40d81,
  0xb7bd5c3b, 0xc0ba6cad, 0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a,
  0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683, 0xe3630b12, 0x94643b84,
  0x0d6d6a3e, 0x7a6a5aa8, 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1,
  0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe, 0xf762575d, 0x806567cb,
  0x196c3671, 0x6e6b06e7, 0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc,
  0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5, 0xd6d6a3e8, 0xa1d1937e,
  0x38d8c2c4, 0x4fdff252, 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b,
  0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60, 0xdf60efc3, 0xa867df55,
  0x316e8eef, 0x4669be79, 0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236,
  0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f, 0xc5ba3bbe, 0xb2bd0b28,
  0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d,
  0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a, 0x9c0906a9, 0xeb0e363f,
  0x72076785, 0x05005713, 0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38,
  0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21, 0x86d3d2d4, 0xf1d4e242,
  0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777,
  0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c, 0x8f659eff, 0xf862ae69,
  0x616bffd3, 0x166ccf45, 0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2,
  0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db, 0xaed16a4a, 0xd9d65adc,
  0x40df0b66, 0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
  0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6, 0xbad03605, 0xcdd70693,
  0x54de5729, 0x23d967bf, 0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94,
  0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d
};
    
    // implements ZeroCopyInputStream ----------------------------------
bool GzipInputStream::Next(const void** data, int* size) {
  bool ok = (zerror_ == Z_OK) || (zerror_ == Z_STREAM_END)
      || (zerror_ == Z_BUF_ERROR);
  if ((!ok) || (zcontext_.next_out == NULL)) {
    return false;
  }
  if (zcontext_.next_out != output_position_) {
    DoNextOutput(data, size);
    return true;
  }
  if (zerror_ == Z_STREAM_END) {
    if (zcontext_.next_out != NULL) {
      // sub_stream_ may have concatenated streams to follow
      zerror_ = inflateEnd(&zcontext_);
      byte_count_ += zcontext_.total_out;
      if (zerror_ != Z_OK) {
        return false;
      }
      zerror_ = internalInflateInit2(&zcontext_, format_);
      if (zerror_ != Z_OK) {
        return false;
      }
    } else {
      *data = NULL;
      *size = 0;
      return false;
    }
  }
  zerror_ = Inflate(Z_NO_FLUSH);
  if ((zerror_ == Z_STREAM_END) && (zcontext_.next_out == NULL)) {
    // The underlying stream's Next returned false inside Inflate.
    return false;
  }
  ok = (zerror_ == Z_OK) || (zerror_ == Z_STREAM_END)
      || (zerror_ == Z_BUF_ERROR);
  if (!ok) {
    return false;
  }
  DoNextOutput(data, size);
  return true;
}
void GzipInputStream::BackUp(int count) {
  output_position_ = reinterpret_cast<void*>(
      reinterpret_cast<uintptr_t>(output_position_) - count);
}
bool GzipInputStream::Skip(int count) {
  const void* data;
  int size = 0;
  bool ok = Next(&data, &size);
  while (ok && (size < count)) {
    count -= size;
    ok = Next(&data, &size);
  }
  if (size > count) {
    BackUp(size - count);
  }
  return ok;
}
int64 GzipInputStream::ByteCount() const {
  int64 ret = byte_count_ + zcontext_.total_out;
  if (zcontext_.next_out != NULL && output_position_ != NULL) {
    ret += reinterpret_cast<uintptr_t>(zcontext_.next_out) -
           reinterpret_cast<uintptr_t>(output_position_);
  }
  return ret;
}
    
    double NoLocaleStrtod(const char* text, char** original_endptr) {
  // We cannot simply set the locale to 'C' temporarily with setlocale()
  // as this is not thread-safe.  Instead, we try to parse in the current
  // locale first.  If parsing stops at a '.' character, then this is a
  // pretty good hint that we're actually in some other locale in which
  // '.' is not the radix character.
    }
    
    // Range() returns generators providing sequences of values in a range.
//
// Synopsis:
// Range(start, end)
//   - returns a generator producing a sequence of values {start, start+1,
//     start+2, ..., }.
// Range(start, end, step)
//   - returns a generator producing a sequence of values {start, start+step,
//     start+step+step, ..., }.
// Notes:
//   * The generated sequences never include end. For example, Range(1, 5)
//     returns a generator producing a sequence {1, 2, 3, 4}. Range(1, 9, 2)
//     returns a generator producing {1, 3, 5, 7}.
//   * start and end must have the same type. That type may be any integral or
//     floating-point type or a user defined type satisfying these conditions:
//     * It must be assignable (have operator=() defined).
//     * It must have operator+() (operator+(int-compatible type) for
//       two-operand version).
//     * It must have operator<() defined.
//     Elements in the resulting sequences will also have that type.
//   * Condition start < end must be satisfied in order for resulting sequences
//     to contain any elements.
//
template <typename T, typename IncrementT>
internal::ParamGenerator<T> Range(T start, T end, IncrementT step) {
  return internal::ParamGenerator<T>(
      new internal::RangeGenerator<T, IncrementT>(start, end, step));
}
    
      // C'tor.  TestPartResult does NOT have a default constructor.
  // Always use this constructor (with parameters) to create a
  // TestPartResult object.
  TestPartResult(Type a_type,
                 const char* a_file_name,
                 int a_line_number,
                 const char* a_message)
      : type_(a_type),
        file_name_(a_file_name == NULL ? '' : a_file_name),
        line_number_(a_line_number),
        summary_(ExtractSummary(a_message)),
        message_(a_message) {
  }
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ', '
                            << e4 << ', '
                            << e5 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3
                            << '\n' << e4 << ' evaluates to ' << v4
                            << '\n' << e5 << ' evaluates to ' << v5;
}
    
    #include <stdlib.h>
#include <assert.h>
    
    template <class Generator1, class Generator2, class Generator3,
    class Generator4, class Generator5, class Generator6>
class CartesianProductHolder6 {
 public:
CartesianProductHolder6(const Generator1& g1, const Generator2& g2,
    const Generator3& g3, const Generator4& g4, const Generator5& g5,
    const Generator6& g6)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6) {}
  template <typename T1, typename T2, typename T3, typename T4, typename T5,
      typename T6>
  operator ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6> >() const {
    return ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6> >(
        new CartesianProductGenerator6<T1, T2, T3, T4, T5, T6>(
        static_cast<ParamGenerator<T1> >(g1_),
        static_cast<ParamGenerator<T2> >(g2_),
        static_cast<ParamGenerator<T3> >(g3_),
        static_cast<ParamGenerator<T4> >(g4_),
        static_cast<ParamGenerator<T5> >(g5_),
        static_cast<ParamGenerator<T6> >(g6_)));
  }
    }
    
    template <>
class Get<1> {
 public:
  template <class Tuple>
  static GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(1, Tuple))
  Field(Tuple& t) { return t.f1_; }  // NOLINT
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10>
struct Types10 {
  typedef T1 Head;
  typedef Types9<T2, T3, T4, T5, T6, T7, T8, T9, T10> Tail;
};
    
    // Type utilities needed for implementing typed and type-parameterized
// tests.  This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
// Currently we support at most $n types in a list, and at most $n
// type-parameterized tests in one type-parameterized test case.
// Please contact googletestframework@googlegroups.com if you need
// more.
    
    
    {  // n has no integer factor in the range (1, n), and thus is prime.
  return true;
}

    
      ////////////////////////////////////////////////////////////
  //
  // D'tor.  MyString is intended to be a final class, so the d'tor
  // doesn't need to be virtual.
  ~MyString() { delete[] c_string_; }
    
    // In this example, we test the MyString class (a simple string).
    
    class ExtensionManagerIfSingletonFactory : virtual public ExtensionManagerIfFactory {
 public:
  ExtensionManagerIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<ExtensionManagerIf>& iface) : iface_(iface) {}
  virtual ~ExtensionManagerIfSingletonFactory() {}
    }
    
      uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
    
    /**
 * @brief Represents a hardware driver type that SMART api can you use to query
 * device information.
 *
 * @param driver name of SMART controller driver
 * @param maxID max ID number of which disks on the controller is monitored
 */
struct hardwareDriver {
  std::string driver;
  size_t maxID;
};
    
      r['sycall_addr_modified'] = syscall_addr_modified;
  r['text_segment_hash'] = text_segment_hash;
  results.push_back(r);
    
    TEST_F(SystemCpuTests, decodeMaskFromString_fail_4) {
  auto exp = cpu::decodeMaskFromString('0,9-a');
  ASSERT_TRUE(exp.isError());
  ASSERT_EQ(exp.getErrorCode(), cpu::Error::IncorrectRange);
}
    
    #include <gtest/gtest.h>
    
    
    {}
    
    #pragma once
    
    /**
 * @brief Take object copy from the table by key
 *
 * @param table to look up (std::map or std::unordered_map)
 * @param key to look up by in the table
 *
 * @return Expected object with value if such key exists in the table,
 * otherwise Error of type MapTakeError
 */
template <typename MapType,
          typename KeyType = typename MapType::key_type,
          typename ValueType = typename MapType::mapped_type>
inline typename std::enable_if<impl::IsMap<MapType>::value,
                               Expected<ValueType, MapTakeError>>::type
tryTakeCopy(MapType const& from, KeyType const& key) {
  auto const it = from.find(key);
  if (it == from.end()) {
    return createError(MapTakeError::NoSuchKey, 'no such key in the table');
  }
  return it->second;
}
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
    
    {    // Store letters in KeysDown[] array as both uppercase and lowercase + Handle GLUT translating CTRL+A..CTRL+Z as 1..26.
    // This is a hacky mess but GLUT is unable to distinguish e.g. a TAB key from CTRL+I so this is probably the best we can do here.
    if (c >= 1 && c <= 26)
        io.KeysDown[c] = io.KeysDown[c - 1 + 'a'] = io.KeysDown[c - 1 + 'A'] = true;
    else if (c >= 'a' && c <= 'z')
        io.KeysDown[c] = io.KeysDown[c - 'a' + 'A'] = true;
    else if (c >= 'A' && c <= 'Z')
        io.KeysDown[c] = io.KeysDown[c - 'A' + 'a'] = true;
    else
        io.KeysDown[c] = true;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
        const GLchar* fragment_shader_glsl_120 =
        '#ifdef GL_ES\n'
        '    precision mediump float;\n'
        '#endif\n'
        'uniform sampler2D Texture;\n'
        'varying vec2 Frag_UV;\n'
        'varying vec4 Frag_Color;\n'
        'void main()\n'
        '{\n'
        '    gl_FragColor = Frag_Color * texture2D(Texture, Frag_UV.st);\n'
        '}\n';
    
    DHTResponseMessage::~DHTResponseMessage() = default;
    
    std::shared_ptr<DHTNode> DHTRoutingTable::getNode(const unsigned char* nodeID,
                                                  const std::string& ipaddr,
                                                  uint16_t port) const
{
  std::shared_ptr<DHTBucket> bucket = getBucketFor(nodeID);
  return bucket->getNode(nodeID, ipaddr, port);
}
    
    
    {} // namespace aria2
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
    #include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
    
    void deleteLinkedList(ListNode* head){
    }
    
    // Counting
// Time Complexity: O(n)
// Space Complexity: O(3)
class Solution {
public:
    void sortColors(vector<int> &nums) {
    }
    }
    
                TreeNode* node = q.front().first;
            int level = q.front().second;
            q.pop();
    
    #include <iostream>
#include <vector>
#include <stack>
#include <cassert>
    
            stack<TreeNode*> stack;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()){
            while(cur != NULL){
                res.push_back(cur->val);
                stack.push(cur);
                cur = cur->left;
            }
    }
    
        TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> res = Solution().preorderTraversal(root);
    print_vec(res);
    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
    }
    }
    
    
    {  while (iters--) {
    for (int i = -100; i < 100; i++) {
      p = bigBuf.data();
      suspender.dismissing(
          [&] { format20Numbers(i, make_index_sequence<20>())(writeToBuf); });
    }
  }
}
    
    
    {  FunctionRef<int(int, std::vector<int> const&)> variant6const = cof;
  EXPECT_EQ(100 + 6 * 21, variant6const(21, {}));
  FunctionRef<int(int, std::vector<int> const&)> const cvariant6const = cof;
  EXPECT_EQ(100 + 6 * 21, cvariant6const(21, {}));
}
    
    #include <folly/GLog.h>
    
    namespace {
std::exception const* get_std_exception_(std::exception_ptr eptr) noexcept {
  try {
    std::rethrow_exception(eptr);
  } catch (const std::exception& ex) {
    return &ex;
  } catch (...) {
    return nullptr;
  }
}
} // namespace
    
    
    {void Executor::keepAliveRelease() {
  LOG(FATAL) << __func__ << '() should not be called for folly::Executor types '
             << 'which do not override keepAliveAcquire()';
}
} // namespace folly

    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * All methods are threadsafe.  Hazard pointers are used to avoid
 * use-after-free for concurrent reset() and get() operations.
 *
 * Concurrent reset()s are sequenced with respect to each other: the
 * sharded shared_ptrs will always all be set to the same value.
 * get()s will never see a newer pointer on one core, and an older
 * pointer on another after a subsequent thread migration.
 */
template <class T, size_t kNumSlots = 64>
class AtomicCoreCachedSharedPtr {
 public:
  explicit AtomicCoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }
    
      counted_ptr(const counted_ptr& o) : p_(o.p_) {
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
  }
  counted_ptr& operator=(const counted_ptr& o) {
    if (p_ && counted_ptr_base<Atom>::getRef(p_)->release_ref() == 1) {
      p_->~T();
      free(counted_ptr_base<Atom>::getRef(p_));
    }
    p_ = o.p_;
    if (p_) {
      counted_ptr_base<Atom>::getRef(p_)->add_ref();
    }
    return *this;
  }
  explicit counted_ptr(T* p) : p_(p) {
    CHECK(!p);
  }
  ~counted_ptr() {
    if (p_ && counted_ptr_base<Atom>::getRef(p_)->release_ref() == 1) {
      p_->~T();
      free(counted_ptr_base<Atom>::getRef(p_));
    }
  }
  typename std::add_lvalue_reference<T>::type operator*() const {
    return *p_;
  }