// Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
    
namespace nwapi {
    }
    
    #ifndef CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_
#define CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_
    
    
    {#endif
}  // namespace nwapi
    
     protected:
  ~NwAppCrashBrowserFunction() override {}
    
    namespace extensions {
    }
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/pyext/message.h>
#include <google/protobuf/pyext/scoped_pyobject_ptr.h>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__

    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
        GradientsUpdateType GradUpdateType() const
    {
        return m_gradType.type;
    }
    double GradientUpdateNoiseStd() const
    {
        return m_gradType.gaussianNoiseInjectStd;
    }
    
    template<> inline
dnnError_t dnnPrimitiveGetAttributes<double>(dnnPrimitive_t primitive, dnnPrimitiveAttributes_t* attributes)
{
    return dnnPrimitiveGetAttributes_F64(primitive, attributes);
}
    
    
    {
    {
    {// utility function to round an integer up to a multiple of size
size_t RoundUp(size_t value, size_t size);
// HIGH and LOW DWORD functions
DWORD HIDWORD(size_t size);
DWORD LODWORD(size_t size);
} } }

    
        mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    Matrix<float>::ScaleAndAdd(alpha, mAsparse, mBsparse);
    
    class latticepair : public std::pair<msra::lattices::lattice, msra::lattices::lattice>
{
public:
    // NOTE: we don't check numerator lattice now
    size_t getnumframes() const
    {
        return second.getnumframes();
    }
    size_t getnumnodes() const
    {
        return second.getnumnodes();
    }
    size_t getnumedges() const
    {
        return second.getnumedges();
    }
    std::wstring getkey() const
    {
        return second.getkey();
    }
};
    
    template <class _T, int _N>
class hardcoded_array
{
    _T data[_N];
    inline void check_index(size_t i) const
    {
        i;
        assert(i < _N);
    }
    inline void check_size(size_t n) const
    {
        n;
        assert(n == _N);
    }
    }
    
    
    {
    {      if (!well_formed) {
        return scope.Close(Boolean::New(false));
      }
    }
  }
    
    Comparison (single thread, Windows Seven 32 bits, using SMHasher on a Core 2 Duo @3GHz)
    
      virtual const char* Name() const override;
    
    #ifndef JAVA_ROCKSJNI_STATISTICSJNI_H_
#define JAVA_ROCKSJNI_STATISTICSJNI_H_
    
    namespace rocksdb {
    }
    
     private:
    // used for synchronisation in compare method
    std::unique_ptr<port::Mutex> mtx_compare;
    // used for synchronisation in findShortestSeparator method
    std::unique_ptr<port::Mutex> mtx_findShortestSeparator;
    std::unique_ptr<const char[]> m_name;
    jmethodID m_jCompareMethodId;
    jmethodID m_jFindShortestSeparatorMethodId;
    jmethodID m_jFindShortSuccessorMethodId;
    
      class LoggerJniCallback : public JniCallback, public Logger {
   public:
     LoggerJniCallback(JNIEnv* env, jobject jLogger);
     ~LoggerJniCallback();
    }
    
    // Wrapper around the platform efficient
// or otherwise preferrable implementation
using Thread = WindowsThread;
    
        jboolean*   (*GetBooleanArrayElements)(JNIEnv*, jbooleanArray, jboolean*);
    jbyte*      (*GetByteArrayElements)(JNIEnv*, jbyteArray, jboolean*);
    jchar*      (*GetCharArrayElements)(JNIEnv*, jcharArray, jboolean*);
    jshort*     (*GetShortArrayElements)(JNIEnv*, jshortArray, jboolean*);
    jint*       (*GetIntArrayElements)(JNIEnv*, jintArray, jboolean*);
    jlong*      (*GetLongArrayElements)(JNIEnv*, jlongArray, jboolean*);
    jfloat*     (*GetFloatArrayElements)(JNIEnv*, jfloatArray, jboolean*);
    jdouble*    (*GetDoubleArrayElements)(JNIEnv*, jdoubleArray, jboolean*);
    
    Config::~Config(void)
{
    YGConfigFree(m_config);
}
    
        static void destroy(Node * node);
    
    #pragma once
    
      bool hasOnlyOneRef() const {
    return m_refcount == 1;
  }
    
    /**
 * RAII Object that attaches a thread to the JVM. Failing to detach from a thread before it
 * exits will cause a crash, as will calling Detach an extra time, and this guard class helps
 * keep that straight. In addition, it remembers whether it performed the attach or not, so it
 * is safe to nest it with itself or with non-fbjni code that manages the attachment correctly.
 *
 * Potential concerns:
 *  - Attaching to the JVM is fast (~100us on MotoG), but ideally you would attach while the
 *    app is not busy.
 *  - Having a thread detach at arbitrary points is not safe in Dalvik; you need to be sure that
 *    there is no Java code on the current stack or you run the risk of a crash like:
 *      ERROR: detaching thread with interp frames (count=18)
 *    (More detail at https://groups.google.com/forum/#!topic/android-ndk/2H8z5grNqjo)
 *    ThreadScope won't do a detach if the thread was already attached before the guard is
 *    instantiated, but there's probably some usage that could trip this up.
 *  - Newly attached C++ threads only get the bootstrap class loader -- i.e. java language
 *    classes, not any of our application's classes. This will be different behavior than threads
 *    that were initiated on the Java side. A workaround is to pass a global reference for a
 *    class or instance to the new thread; this bypasses the need for the class loader.
 *    (See http://docs.oracle.com/javase/7/docs/technotes/guides/jni/spec/invocation.html#attach_current_thread)
 *    If you need access to the application's classes, you can use ThreadScope::WithClassLoader.
 */
class FBEXPORT ThreadScope {
 public:
  ThreadScope();
  ThreadScope(ThreadScope&) = delete;
  ThreadScope(ThreadScope&&) = default;
  ThreadScope& operator=(ThreadScope&) = delete;
  ThreadScope& operator=(ThreadScope&&) = delete;
  ~ThreadScope();
    }
    
      template <typename ...Args>
  void initialize(Args&&... arguments) {
    FBASSERT(!m_instance);
    m_instance = new T(std::forward<Args>(arguments)...);
  }
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }