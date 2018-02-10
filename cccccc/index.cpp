
        
        #endif

    
        // Otherwise, we may not have a way to name all of the pieces of the pattern.
    // Create a repl metavariable to capture the whole thing so we can reference
    // it, then assign that into the pattern.  For example, translate:
    //   var (x, y, _) = foo()
    // into:
    //   var r123 = foo()
    //   var (x, y, _) = r123
    //   replPrint(r123)
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
    namespace llvm {
class FoldingSetNodeID;
} // end namespace llvm
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
extern Status BuildTable(const std::string& dbname,
                         Env* env,
                         const Options& options,
                         TableCache* table_cache,
                         Iterator* iter,
                         FileMetaData* meta);
    
      Status status_;
  std::string saved_key_;     // == current key when direction_==kReverse
  std::string saved_value_;   // == current raw value when direction_==kReverse
  Direction direction_;
  bool valid_;
    
    namespace leveldb {
    }
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
      // Successful parses
  static struct {
    const char* fname;
    uint64_t number;
    FileType type;
  } cases[] = {
    { '100.log',            100,   kLogFile },
    { '0.log',              0,     kLogFile },
    { '0.sst',              0,     kTableFile },
    { '0.ldb',              0,     kTableFile },
    { 'CURRENT',            0,     kCurrentFile },
    { 'LOCK',               0,     kDBLockFile },
    { 'MANIFEST-2',         2,     kDescriptorFile },
    { 'MANIFEST-7',         7,     kDescriptorFile },
    { 'LOG',                0,     kInfoLogFile },
    { 'LOG.old',            0,     kInfoLogFile },
    { '18446744073709551615.log', 18446744073709551615ull, kLogFile },
  };
  for (int i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
    std::string f = cases[i].fname;
    ASSERT_TRUE(ParseFileName(f, &number, &type)) << f;
    ASSERT_EQ(cases[i].type, type) << f;
    ASSERT_EQ(cases[i].number, number) << f;
  }
    
    TableCache::TableCache(const std::string& dbname,
                       const Options* options,
                       int entries)
    : env_(options->env),
      dbname_(dbname),
      options_(options),
      cache_(NewLRUCache(entries)) {
}
    
    
    {
    {  virtual void Put(const Slice& key, const Slice& value) {
    mem_->Add(sequence_, kTypeValue, key, value);
    sequence_++;
  }
  virtual void Delete(const Slice& key) {
    mem_->Add(sequence_, kTypeDeletion, key, Slice());
    sequence_++;
  }
};
}  // namespace
    
    class Benchmark {
 private:
  kyotocabinet::TreeDB* db_;
  int db_num_;
  int num_;
  int reads_;
  double start_;
  double last_op_finish_;
  int64_t bytes_;
  std::string message_;
  Histogram hist_;
  RandomGenerator gen_;
  Random rand_;
  kyotocabinet::LZOCompressor<kyotocabinet::LZO::RAW> comp_;
    }
    
    
    {}  // namespace leveldb
    
    PyObject* NewFileExtensionsByName(const FileDescriptor* descriptor);
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    RepeatedMessageFieldGenerator::RepeatedMessageFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
      // Returns an estimate of the number of bytes the printed code will compile to
  virtual int GenerateRegistrationCode(io::Printer* printer);
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
      {2,0,32,  &_residue_44_mid,
   &_huff_book__44c4_s_long,&_huff_book__44c4_s_long,
   &_resbook_44s_4,&_resbook_44s_4}
};
static const vorbis_residue_template _res_44s_5[]={
  {2,0,16,  &_residue_44_mid,
   &_huff_book__44c5_s_short,&_huff_book__44c5_s_short,
   &_resbook_44s_5,&_resbook_44s_5},
    
    #include <math.h>
#include <ogg/os_types.h>
    
    /*
 * This is a *generic* version. Seem to perform best on platforms that
 * offer explicit support for extraction of 8-bit nibbles preferably
 * complemented with 'multiplying' of array index by sizeof(BF_LONG).
 * For the moment of this writing the list comprises Alpha CPU featuring
 * extbl and s[48]addq instructions.
 */
    
    
    
    /// Copies a limited number of bytes from a source buffer to a target buffer.
/**
 * @param target A modifiable buffer representing the memory region to which
 * the bytes will be copied.
 *
 * @param source A non-modifiable buffer representing the memory region from
 * which the bytes will be copied.
 *
 * @param max_bytes_to_copy The maximum number of bytes to be copied.
 *
 * @returns The number of bytes copied.
 *
 * @note The number of bytes copied is the lesser of:
 *
 * @li @c buffer_size(target)
 *
 * @li @c buffer_size(source)
 *
 * @li @c max_bytes_to_copy
 *
 * This function is implemented in terms of @c memcpy, and consequently it
 * cannot be used to copy between overlapping memory regions.
 */
inline std::size_t buffer_copy(const mutable_buffers_1& target,
    const const_buffers_1& source, std::size_t max_bytes_to_copy)
{
  return buffer_copy(buffer(target, max_bytes_to_copy), source);
}
    
    #ifndef BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
    template <typename MutableBufferSequence, typename Handler>
class descriptor_read_op
  : public descriptor_read_op_base<MutableBufferSequence>
{
public:
  BOOST_ASIO_DEFINE_HANDLER_PTR(descriptor_read_op);
    }
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef null_event event;
#elif defined(BOOST_ASIO_WINDOWS)
typedef win_event event;
#elif defined(BOOST_ASIO_HAS_PTHREADS)
typedef posix_event event;
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
typedef std_event event;
#endif
    
    #if defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
typedef win_fd_set_adapter fd_set_adapter;
#else
typedef posix_fd_set_adapter fd_set_adapter;
#endif
    
    
    {private:
  static void barrier()
  {
#if defined(__ARM_ARCH_4__) \
    || defined(__ARM_ARCH_4T__) \
    || defined(__ARM_ARCH_5__) \
    || defined(__ARM_ARCH_5E__) \
    || defined(__ARM_ARCH_5T__) \
    || defined(__ARM_ARCH_5TE__) \
    || defined(__ARM_ARCH_5TEJ__) \
    || defined(__ARM_ARCH_6__) \
    || defined(__ARM_ARCH_6J__) \
    || defined(__ARM_ARCH_6K__) \
    || defined(__ARM_ARCH_6Z__) \
    || defined(__ARM_ARCH_6ZK__) \
    || defined(__ARM_ARCH_6T2__)
# if defined(__thumb__)
    // This is just a placeholder and almost certainly not sufficient.
    __asm__ __volatile__ ('' : : : 'memory');
# else // defined(__thumb__)
    int a = 0, b = 0;
    __asm__ __volatile__ ('swp %0, %1, [%2]'
        : '=&r'(a) : 'r'(1), 'r'(&b) : 'memory', 'cc');
# endif // defined(__thumb__)
#else
    // ARMv7 and later.
    __asm__ __volatile__ ('dmb' : : : 'memory');
#endif
  }
};
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      // Write the pending event registration changes to the /dev/poll descriptor.
  std::size_t events_size = sizeof(::pollfd) * pending_event_changes_.size();
  if (events_size > 0)
  {
    errno = 0;
    int result = ::write(dev_poll_fd_,
        &pending_event_changes_[0], events_size);
    if (result != static_cast<int>(events_size))
    {
      boost::system::error_code ec = boost::system::error_code(
          errno, boost::asio::error::get_system_category());
      for (std::size_t i = 0; i < pending_event_changes_.size(); ++i)
      {
        int descriptor = pending_event_changes_[i].fd;
        for (int j = 0; j < max_ops; ++j)
          op_queue_[j].cancel_operations(descriptor, ops, ec);
      }
    }
    pending_event_changes_.clear();
    pending_event_change_index_.clear();
  }
    
    bool SetDepth(int p0, HuffmanTree *pool, uint8_t *depth, int max_depth) {
  int stack[17];
  int level = 0;
  int p = p0;
  assert(max_depth <= 16);
  stack[0] = -1;
  while (true) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return false;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = static_cast<uint8_t>(level);
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return true;
    p = stack[level];
    stack[level] = -1;
  }
}
    
    // Entropy encoding (Huffman) utilities.
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    namespace guetzli {
    }
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
      tmp0 = in[stride];
  tmp1 = kIDCTMatrix[ 1] * tmp0;
  tmp2 = kIDCTMatrix[ 9] * tmp0;
  tmp3 = kIDCTMatrix[17] * tmp0;
  tmp4 = kIDCTMatrix[25] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    // Functions for reading a jpeg byte stream into a JPEGData object.
    
    // Implemented features:
//  [X] User texture binding. Use 'ALLEGRO_BITMAP*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] Clipboard support via al_set_clipboard_text/al_clipboard_has_text.
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
        ImGuiIO& io = ImGui::GetIO();
    io.KeyMap[ImGuiKey_Tab] = VK_TAB;                       // Keyboard mapping. ImGui will use those indices to peek into the io.KeyDown[] array that we will update during the application lifetime.
    io.KeyMap[ImGuiKey_LeftArrow] = VK_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = VK_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = VK_UP;
    io.KeyMap[ImGuiKey_DownArrow] = VK_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = VK_PRIOR;
    io.KeyMap[ImGuiKey_PageDown] = VK_NEXT;
    io.KeyMap[ImGuiKey_Home] = VK_HOME;
    io.KeyMap[ImGuiKey_End] = VK_END;
    io.KeyMap[ImGuiKey_Insert] = VK_INSERT;
    io.KeyMap[ImGuiKey_Delete] = VK_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = VK_BACK;
    io.KeyMap[ImGuiKey_Space] = VK_SPACE;
    io.KeyMap[ImGuiKey_Enter] = VK_RETURN;
    io.KeyMap[ImGuiKey_Escape] = VK_ESCAPE;
    io.KeyMap[ImGuiKey_A] = 'A';
    io.KeyMap[ImGuiKey_C] = 'C';
    io.KeyMap[ImGuiKey_V] = 'V';
    io.KeyMap[ImGuiKey_X] = 'X';
    io.KeyMap[ImGuiKey_Y] = 'Y';
    io.KeyMap[ImGuiKey_Z] = 'Z';
    
        double mouse_x, mouse_y;
    mouse_x = s3ePointerGetX();
    mouse_y = s3ePointerGetY();
    io.MousePos = ImVec2((float)mouse_x/g_scale.x, (float)mouse_y/g_scale.y);   // Mouse position (set to -FLT_MAX,-FLT_MAX if no mouse / on another screen, etc.)
    
            // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        s3eKeyboardUpdate();
        s3ePointerUpdate();
        ImGui_Marmalade_NewFrame();
    
    struct SDL_Window;
typedef union SDL_Event SDL_Event;
    
    static YGSize globalMeasureFunc(YGNodeRef nodeRef, float width, YGMeasureMode widthMode, float height, YGMeasureMode heightMode)
{
    Node const & node = *reinterpret_cast<Node const *>(YGNodeGetContext(nodeRef));
    }
    
    struct Layout
{
    double left;
    double right;
    }
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(width, height);
    }
};

    
      const YGNodeRef root_child4 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(root_child4, 50);
  YGNodeInsertChild(root, root_child4, 4);
  YGNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root));
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root_child0_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child0_child0));
    
    
    {  YGNodeFreeRecursive(root);
}

    
    #else
# define ALOGV(...) ((void)0)
# define ALOGD(...) ((void)0)
# define ALOGI(...) ((void)0)
# define ALOGW(...) ((void)0)
# define ALOGE(...) ((void)0)
# define ALOGF(...) ((void)0)
#endif
