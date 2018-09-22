
        
        private:
    int role;
    
    QT_BEGIN_NAMESPACE
class QPaintEvent;
class QTimer;
QT_END_NAMESPACE
    
    
    {    /* d = (a0*2) * a3 */
    'leaq (%%r10,%%r10,1),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rbx\n'
    'movq %%rdx,%%rcx\n'
    /* d += (a1*2) * a2 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c = a4 * a4 */
    'movq %%r14,%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* a4 *= 2 */
    'addq %%r14,%%r14\n'
    /* d += a0 * a4 */
    'movq %%r10,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d+= (a1*2) * a3 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a2 * a2 */
    'movq %%r12,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * a0 */
    'movq %%r10,%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a1 * a4 */
    'movq %%r11,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += (a2*2) * a3 */
    'leaq (%%r12,%%r12,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* a0 *= 2 */
    'addq %%r10,%%r10\n'
    /* c += a0 * a1 */
    'movq %%r10,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a2 * a4 */
    'movq %%r12,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a3 * a3 */
    'movq %%r13,%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a0 * a2 (last use of %%r10) */
    'movq %%r10,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0),t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* c += a1 * a1 */
    'movq %%r11,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a3 * a4 */
    'movq %%r13,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rbx only) */
    'shrdq $52,%%rcx,%%rbx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rbx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'D'(r)
: '%rax', '%rbx', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    #endif /* SECP256K1_MODULE_ECDH_MAIN_H */

    
    void GeneratorContext::ListParsedFiles(
    std::vector<const FileDescriptor*>* output) {
  GOOGLE_LOG(FATAL) << 'This GeneratorContext does not support ListParsedFiles';
}
    
    TEST(MovableMessageTest, Noexcept) {
  EXPECT_TRUE(
      std::is_nothrow_move_constructible<protobuf_unittest::TestAllTypes>());
  EXPECT_TRUE(std::is_nothrow_move_assignable<protobuf_unittest::TestAllTypes>());
}
    
    void EnumOneofFieldGenerator::GenerateMergingCode(io::Printer* printer) {
  printer->Print(variables_, '$property_name$ = other.$property_name$;\n');
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
    
    void PrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  // TODO(jonskeet): Work out whether we want to prevent the fields from ever being
  // null, or whether we just handle it, in the cases of bytes and string.
  // (Basically, should null-handling code be in the getter or the setter?)
  printer->Print(
    variables_,
    'private $type_name$ $name_def_message$;\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ $type_name$ $property_name$ {\n'
    '  get { return $name$_; }\n'
    '  set {\n');
  if (is_value_type) {
    printer->Print(
      variables_,
      '    $name$_ = value;\n');
  } else {
    printer->Print(
      variables_,
      '    $name$_ = pb::ProtoPreconditions.CheckNotNull(value, \'value\');\n');
  }
  printer->Print(
    '  }\n'
    '}\n');
}
    
    MAKE_TYPE_INFO(String, Variant::STRING)
MAKE_TYPE_INFO(Vector2, Variant::VECTOR2)
MAKE_TYPE_INFO(Rect2, Variant::RECT2)
MAKE_TYPE_INFO(Vector3, Variant::VECTOR3)
MAKE_TYPE_INFO(Transform2D, Variant::TRANSFORM2D)
MAKE_TYPE_INFO(Plane, Variant::PLANE)
MAKE_TYPE_INFO(Quat, Variant::QUAT)
MAKE_TYPE_INFO(AABB, Variant::AABB)
MAKE_TYPE_INFO(Basis, Variant::BASIS)
MAKE_TYPE_INFO(Transform, Variant::TRANSFORM)
MAKE_TYPE_INFO(Color, Variant::COLOR)
MAKE_TYPE_INFO(NodePath, Variant::NODE_PATH)
MAKE_TYPE_INFO(RID, Variant::_RID)
MAKE_TYPE_INFO(Dictionary, Variant::DICTIONARY)
MAKE_TYPE_INFO(Array, Variant::ARRAY)
MAKE_TYPE_INFO(PoolByteArray, Variant::POOL_BYTE_ARRAY)
MAKE_TYPE_INFO(PoolIntArray, Variant::POOL_INT_ARRAY)
MAKE_TYPE_INFO(PoolRealArray, Variant::POOL_REAL_ARRAY)
MAKE_TYPE_INFO(PoolStringArray, Variant::POOL_STRING_ARRAY)
MAKE_TYPE_INFO(PoolVector2Array, Variant::POOL_VECTOR2_ARRAY)
MAKE_TYPE_INFO(PoolVector3Array, Variant::POOL_VECTOR3_ARRAY)
MAKE_TYPE_INFO(PoolColorArray, Variant::POOL_COLOR_ARRAY)
    
    // Bullet to Godot
extern void B_TO_G(btVector3 const &inVal, Vector3 &outVal);
extern void INVERT_B_TO_G(btVector3 const &inVal, Vector3 &outVal);
extern void B_TO_G(btMatrix3x3 const &inVal, Basis &outVal);
extern void INVERT_B_TO_G(btMatrix3x3 const &inVal, Basis &outVal);
extern void B_TO_G(btTransform const &inVal, Transform &outVal);
    
    	real_t get_hinge_angle();
    
    class RigidBodyBullet;
    
    
    {	memdelete(resource_loader_pkm);
}

    
      SrcLoc(SrcPos start, SrcPos past)
    : start(start)
    , past(past)
  {}
    
    struct APCCollection {
  static APCHandle::Pair Make(const ObjectData*,
                              APCHandleLevel level,
                              bool unserializeObj);
  static void Delete(APCHandle*);
    }
    
    template<class T> static T variant_init(T v) {
    return v;
}
static int64_t variant_init(uint32_t v) {
    return v;
}
    
    #ifndef incl_HPHP_CONFIG_H_
#define incl_HPHP_CONFIG_H_
    
      // RFC 2397 specifies 'data:' as the prefix,
  // but zend's PHP supports 'data://' as well
  if (data_len >= 2 && data[0] == '/' && data[1] == '/') {
    data_len -= 2;
    data += 2;
  }
    
    Variant ArrayDirectory::read() {
  if (!m_it) {
    return false;
  }
    }
    
    struct FatalErrorException : ExtendedException {
  explicit FatalErrorException(const char *msg)
    : ExtendedException('%s', msg)
  {}
  FatalErrorException(int, ATTRIBUTE_PRINTF_STRING const char *msg, ...)
    ATTRIBUTE_PRINTF(3,4);
  FatalErrorException(const std::string&, const Array& backtrace,
                      bool isRecoverable = false);
    }
    
    struct ExecutionProfiler {
  ExecutionProfiler(ThreadInfo *info, bool builtin) : m_info(info) {
    m_executing = m_info->m_executing;
    m_info->m_executing =
      builtin ? ThreadInfo::ExtensionFunctions : ThreadInfo::UserFunctions;
  }
  explicit ExecutionProfiler(ThreadInfo::Executing executing) {
    m_info = ThreadInfo::s_threadInfo.getNoCheck();
    m_executing = m_info->m_executing;
    m_info->m_executing = executing;
  }
  ~ExecutionProfiler() {
    m_info->m_executing = m_executing;
  }
private:
  ThreadInfo *m_info;
  ThreadInfo::Executing m_executing;
};
    
    namespace HPHP { namespace FileUtil {
    }
    }
    
    
    {#ifdef _MSC_VER
  // Need to normalize to Windows directory separators, as the underlying
  // system calls don't like unix path separators.
  for (int i = 0; i < pathlen; i++) {
    if (path[i] == '/') {
      path[i] = '\\';
    }
  }
#endif
  ret.setSize(pathlen);
  return ret;
}
    
    /**
 * Find the relative path from a directory with trailing slash to the file
 */
String relativePath(const std::string& fromDir, const String& toFile);
    
        static BOOST_FORCEINLINE storage_type fetch_or(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        return static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR64(&storage, v));
    }