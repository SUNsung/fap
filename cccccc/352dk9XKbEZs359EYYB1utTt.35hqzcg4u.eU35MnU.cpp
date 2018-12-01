
        
        // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
    void Clipboard::SetText(std::string& text) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  ui::Clipboard::ObjectMap map;
  map[ui::Clipboard::CBF_TEXT].push_back(
      std::vector<char>(text.begin(), text.end()));
  clipboard->WriteObjects(ui::CLIPBOARD_TYPE_COPY_PASTE, map);
}
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    void MenuItem::SetChecked(bool checked) {
  // Set active will cause 'activate' to be emitted, so block here
  block_active_ = true;
  gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(menu_item_), checked);
  block_active_ = false;
}
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, enum_);
  printer->Print(
    ' * Protobuf enum {@code $fullname$}\n'
    ' */\n',
    'fullname', EscapeJavadoc(enum_->full_name()));
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
    
      (*variables)['key_type'] = TypeName(key, name_resolver, false);
  string boxed_key_type = TypeName(key, name_resolver, true);
  (*variables)['boxed_key_type'] = boxed_key_type;
  // Used for calling the serialization function.
  (*variables)['short_key_type'] =
      boxed_key_type.substr(boxed_key_type.rfind('.') + 1);
  (*variables)['key_wire_type'] = WireType(key);
  (*variables)['key_default_value'] = DefaultValue(key, true, name_resolver);
  (*variables)['key_null_check'] = IsReferenceType(keyJavaType) ?
      'if (key == null) { throw new java.lang.NullPointerException(); }' : '';
  (*variables)['value_null_check'] = IsReferenceType(valueJavaType) ?
      'if (value == null) { throw new java.lang.NullPointerException(); }' : '';
  if (valueJavaType == JAVATYPE_ENUM) {
    // We store enums as Integers internally.
    (*variables)['value_type'] = 'int';
    (*variables)['boxed_value_type'] = 'java.lang.Integer';
    (*variables)['value_wire_type'] = WireType(value);
    (*variables)['value_default_value'] =
        DefaultValue(value, true, name_resolver) + '.getNumber()';
    }
    
    // Get the full name of a Java class by prepending the Java package name
// or outer class name.
string ClassNameResolver::GetClassFullName(const string& name_without_package,
                                           const FileDescriptor* file,
                                           bool immutable,
                                           bool multiple_files) {
  string result;
  if (multiple_files) {
    result = FileJavaPackage(file, immutable);
  } else {
    result = GetClassName(file, immutable);
  }
  if (!result.empty()) {
    result += '.';
  }
  result += name_without_package;
  return result;
}
    
        void absDiff(const Size2D &size,
                 const s32 * src0Base, ptrdiff_t src0Stride,
                 const s32 * src1Base, ptrdiff_t src1Stride,
                 s32 * dstBase, ptrdiff_t dstStride);
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s16, s32, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.16 {d0-d1}, [%[src]]                              \n\t'
             'vmovl.s16 q1, d0                                       \n\t'
             'vmovl.s16 q2, d1                                       \n\t'
             'vst1.32 {d2-d3}, [%[dst1]]                             \n\t'
             'vst1.32 {d4-d5}, [%[dst2]]                             \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst1] 'r' (_dst + i + 0),
               [dst2] 'r' (_dst + i + 4)
             : 'd0','d1','d2','d3','d4','d5'
         );
     }
})
#else
CVT_FUNC(s16, s32, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int16x8_t vline_s16 = vld1q_s16(_src + i);
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(f32, s8, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vadd.f32 q6, q4, q1                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vcvt.s32.f32 q8, q6                                     \n\t'
            'vcvt.s32.f32 q9, q7                                     \n\t'
            'vqmovn.s32 d14, q8                                      \n\t'
            'vqmovn.s32 d15, q9                                      \n\t'
            'vqmovn.s16 d16, q7                                      \n\t'
            'vst1.8 {d16}, [%[dst]]                                  \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w' (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19'
        );
    }
})
#else
CVTS_FUNC(f32, s8, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        int8x8_t vRes = vqmovn_s16(vcombine_s16(vRes1, vRes2));
        vst1_s8(_dst + i, vRes);
    }
})
#endif
    
    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
                if (mask[0])
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
            if (mask[1])
                process(src, j + 8, j + 16, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
        for ( ; j < roiw8; j += 8)
        {
            internal::prefetch(src + j);
            uint16x8_t v_src = vld1q_u16(src + j);
    
            prev = v_zero;
        j = 0u;
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_PARAM_TEST_H_

    
    TEST_P(FooTest, HasBlahBlah) {
  ...
}
    
    
    {  // Tersely prints the first N fields of a tuple to a string vector,
  // one element for each field.
  template <typename Tuple>
  static void TersePrintPrefixToStrings(const Tuple& t, Strings* strings) {
    TuplePrefixPrinter<N - 1>::TersePrintPrefixToStrings(t, strings);
    ::std::stringstream ss;
    UniversalTersePrint(::std::tr1::get<N - 1>(t), &ss);
    strings->push_back(ss.str());
  }
};
    
      // Sets up the test fixture.
  virtual void SetUp();
    
      // Returns a pathname for a file that does not currently exist. The pathname
  // will be directory/base_name.extension or
  // directory/base_name_<number>.extension if directory/base_name.extension
  // already exists. The number will be incremented until a pathname is found
  // that does not already exist.
  // Examples: 'dir/foo_test.xml' or 'dir/foo_test_1.xml'.
  // There could be a race condition if two or more processes are calling this
  // function at the same time -- they could both pick the same filename.
  static FilePath GenerateUniqueFileName(const FilePath& directory,
                                         const FilePath& base_name,
                                         const char* extension);
    
    #include <stdlib.h>
#include <assert.h>
    
      template <GTEST_1_TYPENAMES_(U)>
  tuple& operator=(const GTEST_1_TUPLE_(U)& t) {
    return CopyFrom(t);
  }
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
     private:
  /*
   * @brief A helper function to 'carve' files from disk
   *
   * This function performs a 'forensic carve' of a specified path to the
   * users tmp directory
   */
  Status carve(const boost::filesystem::path& path);
    
    namespace rj = rapidjson;
    
    namespace osquery {
    }
    
    class OptionsConfigParserPluginTests : public testing::Test {};
    
        QueryDataSet qds;
    for (auto& i : result.second) {
      qds.insert(i);
    }
    
      /// Enable for sanity check from unit test(s).
  bool inotify_sanity_check{false};