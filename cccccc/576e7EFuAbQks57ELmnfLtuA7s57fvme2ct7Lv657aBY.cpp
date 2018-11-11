
        
              if (node->Further) {
        // Further indent, and include the line to the right child if
        // there is one.
        IndentScope is(this, node->Right ? '|   ' : '    ');
        print(node->Further, ChildKind::Further);
      }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field) {
  // In theory we should have slightly different comments for setters, getters,
  // etc., but in practice everyone already knows the difference between these
  // so it's redundant information.
    }
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {
    {
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
        if (options_.annotate_code) {
      std::unique_ptr<io::ZeroCopyOutputStream> info_output(
          context->Open(info_full_path));
      annotations.SerializeToZeroCopyStream(info_output.get());
      annotation_file_list->push_back(info_full_path);
    }
    
     public:
  virtual void FinishInitialization();
    
    
    {
    {
    {
    {
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ExtensionGenerator);
};
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_MESSAGE_H__

    
    #else  // !defined(__AVX__)
// Implementation for avx capable archs.
#include <immintrin.h>
#include <cstdint>
#include 'dotproductavx.h'
    
    namespace tesseract {
double DotProductSSE(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductSSE can't be used on Android\n');
  abort();
}
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  fprintf(stderr, 'IntDotProductSSE can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    #include <cstdint>      // for int32_t
    
    // Constructor.
// Tests the architecture in a system-dependent way to detect AVX, SSE and
// any other available SIMD equipment.
// __GNUC__ is also defined by compilers that include GNU extensions such as
// clang.
SIMDDetect::SIMDDetect() {
#if defined(X86_BUILD)
#if defined(__GNUC__)
  unsigned int eax, ebx, ecx, edx;
  if (__get_cpuid(1, &eax, &ebx, &ecx, &edx) != 0) {
    // Note that these tests all use hex because the older compilers don't have
    // the newer flags.
    sse_available_ = (ecx & 0x00080000) != 0;
    avx_available_ = (ecx & 0x10000000) != 0;
    if (avx_available_) {
      // There is supposed to be a __get_cpuid_count function, but this is all
      // there is in my cpuid.h. It is a macro for an asm statement and cannot
      // be used inside an if.
      __cpuid_count(7, 0, eax, ebx, ecx, edx);
      avx2_available_ = (ebx & 0x00000020) != 0;
      avx512F_available_ = (ebx & 0x00010000) != 0;
      avx512BW_available_ = (ebx & 0x40000000) != 0;
    }
  }
#elif defined(_WIN32)
  int cpuInfo[4];
  __cpuid(cpuInfo, 0);
  if (cpuInfo[0] >= 1) {
    __cpuid(cpuInfo, 1);
    sse_available_ = (cpuInfo[2] & 0x00080000) != 0;
    avx_available_ = (cpuInfo[2] & 0x10000000) != 0;
  }
#else
#error 'I don't know how to test for SIMD with this compiler'
#endif
#endif  // X86_BUILD
}

    
    // Helper method to convert an orientation index to its value in degrees.
// The value represents the amount of clockwise rotation in degrees that must be
// applied for the text to be upright (readable).
TESS_API int OrientationIdToValue(const int& id);
    
      /**
   * Returns the polygon outline of the current block. The returned Pta must
   * be ptaDestroy-ed after use. Note that the returned Pta lists the vertices
   * of the polygon, and the last edge is the line segment between the last
   * point and the first point. nullptr will be returned if the iterator is
   * at the end of the document or layout analysis was not used.
   */
  Pta* BlockPolygon() const;
    
      //   The text of a paragraph typically starts with the start of an idea and
  // ends with the end of an idea.  Here we define paragraph as something that
  // may have a first line indent and a body indent which may be different.
  // Typical words that start an idea are:
  //   1. Words in western scripts that start with
  //      a capital letter, for example 'The'
  //   2. Bulleted or numbered list items, for
  //      example '2.'
  // Typical words which end an idea are words ending in punctuation marks. In
  // this vocabulary, each list item is represented as a paragraph.
  bool lword_indicates_list_item;
  bool lword_likely_starts_idea;
  bool lword_likely_ends_idea;
    
    
    {  svMenuRoot->BuildMenu(sv, false);
}
    
    bool GodotCollisionDispatcher::needsResponse(const btCollisionObject *body0, const btCollisionObject *body1) {
	if (body0->getUserIndex() == CASTED_TYPE_AREA || body1->getUserIndex() == CASTED_TYPE_AREA) {
		// Avoide area narrow phase
		return false;
	}
	return btCollisionDispatcher::needsResponse(body0, body1);
}

    
    class PinJointBullet : public JointBullet {
	class btPoint2PointConstraint *p2pConstraint;
    }
    
    class RIDBullet : public RID_Data {
	RID self;
	BulletPhysicsServer *physicsServer;
    }
    
    #include 'register_types.h'
    
    void register_etc_types() {
    }
    
    #define WIDEN2(x) L ## x
#define WIDEN(x) WIDEN2(x)
#define __WFUNCTION__ WIDEN(__FUNCTION__)