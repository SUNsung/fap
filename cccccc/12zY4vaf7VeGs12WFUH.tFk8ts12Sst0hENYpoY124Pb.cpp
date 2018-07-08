
    { private:
  DISALLOW_COPY_AND_ASSIGN(UnresponsiveSuppressor);
};
    
    
    { protected:
  virtual ~WindowListObserver() {}
};
    
    struct DraggableRegion {
  bool draggable;
  gfx::Rect bounds;
    }
    
    namespace ui {
class Accelerator;
}
    
    // DesktopMediaList provides the list of desktop media source (screens, windows,
// tabs), and their thumbnails, to the desktop media picker dialog. It
// transparently updates the list in the background, and notifies the desktop
// media picker when something changes.
class DesktopMediaList {
 public:
  // Struct used to represent each entry in the list.
  struct Source {
    // Id of the source.
    content::DesktopMediaID id;
    }
    }
    
    void TtsPlatformImpl::clear_error() {
  error_ = std::string();
}
    
    // filenames
const base::FilePath::CharType kCacheDirname[] = FPL('Cache');
const base::FilePath::CharType kChannelIDFilename[] = FPL('Origin Bound Certs');
const base::FilePath::CharType kCookieFilename[] = FPL('Cookies');
const base::FilePath::CharType kCRLSetFilename[] =
    FPL('Certificate Revocation Lists');
const base::FilePath::CharType kCustomDictionaryFileName[] =
    FPL('Custom Dictionary.txt');
const base::FilePath::CharType kExtensionActivityLogFilename[] =
    FPL('Extension Activity');
const base::FilePath::CharType kExtensionsCookieFilename[] =
    FPL('Extension Cookies');
const base::FilePath::CharType kFirstRunSentinel[] = FPL('First Run');
const base::FilePath::CharType kGCMStoreDirname[] = FPL('GCM Store');
const base::FilePath::CharType kLocalStateFilename[] = FPL('Local State');
const base::FilePath::CharType kLocalStorePoolName[] = FPL('LocalStorePool');
const base::FilePath::CharType kMediaCacheDirname[] = FPL('Media Cache');
const base::FilePath::CharType kNetworkPersistentStateFilename[] =
    FPL('Network Persistent State');
const base::FilePath::CharType kOfflinePageArchviesDirname[] =
    FPL('Offline Pages/archives');
const base::FilePath::CharType kOfflinePageMetadataDirname[] =
    FPL('Offline Pages/metadata');
const base::FilePath::CharType kPreferencesFilename[] = FPL('Preferences');
const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[] =
    FPL('Protected Preferences');
const base::FilePath::CharType kReadmeFilename[] = FPL('README');
const base::FilePath::CharType kResetPromptMementoFilename[] =
    FPL('Reset Prompt Memento');
const base::FilePath::CharType kSafeBrowsingBaseFilename[] =
    FPL('Safe Browsing');
const base::FilePath::CharType kSecurePreferencesFilename[] =
    FPL('Secure Preferences');
const base::FilePath::CharType kServiceStateFileName[] = FPL('Service State');
const base::FilePath::CharType kSingletonCookieFilename[] =
    FPL('SingletonCookie');
const base::FilePath::CharType kSingletonLockFilename[] = FPL('SingletonLock');
const base::FilePath::CharType kSingletonSocketFilename[] =
    FPL('SingletonSocket');
const base::FilePath::CharType kSupervisedUserSettingsFilename[] =
    FPL('Managed Mode Settings');
const base::FilePath::CharType kThemePackFilename[] = FPL('Cached Theme.pak');
const base::FilePath::CharType kThemePackMaterialDesignFilename[] =
    FPL('Cached Theme Material Design.pak');
const base::FilePath::CharType kWebAppDirname[] = FPL('Web Applications');
    
    #if defined(OS_MACOSX)
// NOTE: if you change the value of kFrameworkName, please don't forget to
// update components/test/run_all_unittests.cc as well.
// TODO(tfarina): Remove the comment above, when you fix components to use plist
// on Mac.
extern const base::FilePath::CharType kFrameworkName[];
#endif  // OS_MACOSX
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    
    {    if(start_x == -1)
    {
        return 0;
    }
    else
    {
        low_thresh = cvRound(max_start_x + 0.25*(max_end_x - max_start_x));
        high_thresh = cvRound(max_start_x + 0.75*(max_end_x - max_start_x));
        return 1;
    }
}
    
                static __device__ __forceinline__ int atomicMin(int* address, int val)
            {
                return ::atomicMin(address, val);
            }
            static __device__ __forceinline__ float atomicMin(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 120
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(::fminf(val, __int_as_float(assumed))));
                } while (assumed != old);
                return __int_as_float(old);
            #else
                (void) address;
                (void) val;
                return 0.0f;
            #endif
            }
            static __device__ __forceinline__ double atomicMin(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(::fmin(val, __longlong_as_double(assumed))));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
    
        // Extension: 1.2
    extern void (CODEGEN_FUNCPTR *BlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    extern void (CODEGEN_FUNCPTR *BlendEquation)(GLenum mode);
    extern void (CODEGEN_FUNCPTR *DrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
    extern void (CODEGEN_FUNCPTR *TexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
    extern void (CODEGEN_FUNCPTR *CopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    
    #if defined(_WIN32)
#include <windows.h>
    
    namespace cv { namespace ocl { namespace runtime {
    }
    }
    }
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
    #include 'override_macros.h'
    
    
    {  PyTypeObject* srcType = THPTypeInfo<TensorSrc>::pyType();
  copyList.push_back({ srcType, wrapper, false });
}
    
          int optval = 1;
      SYSCHECK(::setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(int)))
      SYSCHECK(::bind(socket, next_addr->ai_addr, next_addr->ai_addrlen))
      SYSCHECK(::listen(socket, LISTEN_QUEUE_SIZE))
      break;
    } catch (const std::system_error& e) {
      ::close(socket);
      next_addr = next_addr->ai_next;
    
      /**
   * Add a piece of response to the pipeline.
   */
  static void AddToPipeline(const std::string &s);
    
    //////////////////////////////////////////////////////////////////////
    
    
void Instruction::SetBranchImmTarget(Instruction* target) {
  assert(((target - this) & 3) == 0);
  Instr branch_imm = 0;
  uint32_t imm_mask = 0;
  int offset = (target - this) >> kInstructionSizeLog2;
  switch (BranchType()) {
    case CondBranchType: {
      branch_imm = Assembler::ImmCondBranch(offset);
      imm_mask = ImmCondBranch_mask;
      break;
    }
    case UncondBranchType: {
      branch_imm = Assembler::ImmUncondBranch(offset);
      imm_mask = ImmUncondBranch_mask;
      break;
    }
    case CompareBranchType: {
      branch_imm = Assembler::ImmCmpBranch(offset);
      imm_mask = ImmCmpBranch_mask;
      break;
    }
    case TestBranchType: {
      branch_imm = Assembler::ImmTestBranch(offset);
      imm_mask = ImmTestBranch_mask;
      break;
    }
    default: not_reached();
  }
  SetInstructionBits(Mask(~imm_mask) | branch_imm);
}
    
    namespace HPHP {
/////////////////////////////////////////////////////////////////////////////
    }
    
    
    {/////////////////////////////////////////////////////////////////////////////
}
#endif

    
    void MethodStatement::checkParameters(FileScopeRawPtr scope) {
  // only allow parameter modifiers (public, private, protected)
  // on constructor for promotion
  if (!m_params) {
    return;
  }
  bool isCtor = isNamed('__construct');
  for (int i = 0; i < m_params->getCount(); i++) {
    auto param =
      dynamic_pointer_cast<ParameterExpression>((*m_params)[i]);
    switch (param->getModifier()) {
    case 0:
      continue;
    case T_PUBLIC:
    case T_PRIVATE:
    case T_PROTECTED:
      if (isCtor) {
        m_autoPropCount++;
        continue;
      }
    default:
      if (isCtor) {
        param->parseTimeFatal(scope,
                              'Invalid modifier on __construct, only public, '
                              'private or protected allowed');
      } else {
        param->parseTimeFatal(scope,
                              'Parameters modifiers not allowed on methods');
      }
    }
  }
}

    
    TEST_F(YogaTest_HadOverflowTests, children_overflow_no_wrap_and_no_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 15);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
    /* static */ Config * Config::create(void)
{
    return new Config();
}
    
    int Node::getFlexDirection(void) const
{
    return YGNodeStyleGetFlexDirection(m_node);
}
    
    void setAssertHandler(AssertHandler assertHandler) {
    gAssertHandler = assertHandler;
}