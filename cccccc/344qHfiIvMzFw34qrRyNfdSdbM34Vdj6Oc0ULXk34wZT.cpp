
        
        Q_SIGNALS:
    void valueChanged();
    
    #include <QDialog>
    
    namespace Ui {
    class TransactionDescDialog;
}
    
    #endif // BITCOIN_REVERSELOCK_H

    
    
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
    
        Round(a, b, c, d, e, f, g, h, 0x27b70a85, w0 += sigma1(w14) + w9 + sigma0(w1));
    Round(h, a, b, c, d, e, f, g, 0x2e1b2138, w1 += sigma1(w15) + w10 + sigma0(w2));
    Round(g, h, a, b, c, d, e, f, 0x4d2c6dfc, w2 += sigma1(w0) + w11 + sigma0(w3));
    Round(f, g, h, a, b, c, d, e, 0x53380d13, w3 += sigma1(w1) + w12 + sigma0(w4));
    Round(e, f, g, h, a, b, c, d, 0x650a7354, w4 += sigma1(w2) + w13 + sigma0(w5));
    Round(d, e, f, g, h, a, b, c, 0x766a0abb, w5 += sigma1(w3) + w14 + sigma0(w6));
    Round(c, d, e, f, g, h, a, b, 0x81c2c92e, w6 += sigma1(w4) + w15 + sigma0(w7));
    Round(b, c, d, e, f, g, h, a, 0x92722c85, w7 += sigma1(w5) + w0 + sigma0(w8));
    Round(a, b, c, d, e, f, g, h, 0xa2bfe8a1, w8 += sigma1(w6) + w1 + sigma0(w9));
    Round(h, a, b, c, d, e, f, g, 0xa81a664b, w9 += sigma1(w7) + w2 + sigma0(w10));
    Round(g, h, a, b, c, d, e, f, 0xc24b8b70, w10 += sigma1(w8) + w3 + sigma0(w11));
    Round(f, g, h, a, b, c, d, e, 0xc76c51a3, w11 += sigma1(w9) + w4 + sigma0(w12));
    Round(e, f, g, h, a, b, c, d, 0xd192e819, w12 += sigma1(w10) + w5 + sigma0(w13));
    Round(d, e, f, g, h, a, b, c, 0xd6990624, w13 += sigma1(w11) + w6 + sigma0(w14));
    Round(c, d, e, f, g, h, a, b, 0xf40e3585, w14 += sigma1(w12) + w7 + sigma0(w15));
    Round(b, c, d, e, f, g, h, a, 0x106aa070, w15 += sigma1(w13) + w8 + sigma0(w0));
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
    static const Message* GetCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
static Message* MutableCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
    
    bool AnyMetadata::InternalIs(const Descriptor* descriptor) const {
  const string type_url = type_url_->GetNoArena();
  string full_name;
  if (!ParseAnyTypeUrl(type_url, &full_name)) {
    return false;
  }
  return full_name == descriptor->full_name();
}
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_message.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
#include <google/protobuf/compiler/csharp/csharp_reflection_class.h>
    
    Context::~Context() {
}
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    void ImmutableMapFieldGenerator::
GenerateBuilderMembers(io::Printer* printer) const {
  printer->Print(
      variables_,
      'private com.google.protobuf.MapField<\n'
      '    $type_parameters$> $name$_;\n'
      'private com.google.protobuf.MapField<$type_parameters$>\n'
      'internalGet$capitalized_name$() {\n'
      '  if ($name$_ == null) {\n'
      '    return com.google.protobuf.MapField.emptyMapField(\n'
      '        $map_field_parameter$);\n'
      '  }\n'
      '  return $name$_;\n'
      '}\n'
      'private com.google.protobuf.MapField<$type_parameters$>\n'
      'internalGetMutable$capitalized_name$() {\n'
      '  $on_changed$;\n'
      '  if ($name$_ == null) {\n'
      '    $name$_ = com.google.protobuf.MapField.newMapField(\n'
      '        $map_field_parameter$);\n'
      '  }\n'
      '  if (!$name$_.isMutable()) {\n'
      '    $name$_ = $name$_.copy();\n'
      '  }\n'
      '  return $name$_;\n'
      '}\n');
  GenerateMapGetters(printer);
  printer->Print(
      variables_,
      '$deprecation$\n'
      'public Builder ${$clear$capitalized_name$$}$() {\n'
      '  internalGetMutable$capitalized_name$().getMutableMap()\n'
      '      .clear();\n'
      '  return this;\n'
      '}\n');
  printer->Annotate('{', '}', descriptor_);
  WriteFieldDocComment(printer, descriptor_);
  printer->Print(
      variables_,
      '$deprecation$\n'
      'public Builder ${$remove$capitalized_name$$}$(\n'
      '    $key_type$ key) {\n'
      '  $key_null_check$\n'
      '  internalGetMutable$capitalized_name$().getMutableMap()\n'
      '      .remove(key);\n'
      '  return this;\n'
      '}\n');
  printer->Annotate('{', '}', descriptor_);
  if (GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use alternate mutation accessors instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'public java.util.Map<$boxed_key_type$, $value_enum_type$>\n'
        '${$getMutable$capitalized_name$$}$() {\n'
        '  return internalGetAdapted$capitalized_name$Map(\n'
        '       internalGetMutable$capitalized_name$().getMutableMap());\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(variables_,
                   '$deprecation$public Builder ${$put$capitalized_name$$}$(\n'
                   '    $key_type$ key,\n'
                   '    $value_enum_type$ value) {\n'
                   '  $key_null_check$\n'
                   '  $value_null_check$\n'
                   '  internalGetMutable$capitalized_name$().getMutableMap()\n'
                   '      .put(key, $name$ValueConverter.doBackward(value));\n'
                   '  return this;\n'
                   '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$public Builder ${$putAll$capitalized_name$$}$(\n'
        '    java.util.Map<$boxed_key_type$, $value_enum_type$> values) {\n'
        '  internalGetAdapted$capitalized_name$Map(\n'
        '      internalGetMutable$capitalized_name$().getMutableMap())\n'
        '          .putAll(values);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    if (SupportUnknownEnumValue(descriptor_->file())) {
      printer->Print(
          variables_,
          '/**\n'
          ' * Use alternate mutation accessors instead.\n'
          ' */\n'
          '@java.lang.Deprecated\n'
          'public java.util.Map<$boxed_key_type$, $boxed_value_type$>\n'
          '${$getMutable$capitalized_name$Value$}$() {\n'
          '  return internalGetMutable$capitalized_name$().getMutableMap();\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$public Builder ${$put$capitalized_name$Value$}$(\n'
          '    $key_type$ key,\n'
          '    $value_type$ value) {\n'
          '  $key_null_check$\n'
          '  internalGetMutable$capitalized_name$().getMutableMap()\n'
          '      .put(key, value);\n'
          '  return this;\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$public Builder ${$putAll$capitalized_name$Value$}$(\n'
          '    java.util.Map<$boxed_key_type$, $boxed_value_type$> values) {\n'
          '  internalGetMutable$capitalized_name$().getMutableMap()\n'
          '      .putAll(values);\n'
          '  return this;\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
    }
  } else {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use alternate mutation accessors instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'public java.util.Map<$type_parameters$>\n'
        '${$getMutable$capitalized_name$$}$() {\n'
        '  return internalGetMutable$capitalized_name$().getMutableMap();\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$'
        'public Builder ${$put$capitalized_name$$}$(\n'
        '    $key_type$ key,\n'
        '    $value_type$ value) {\n'
        '  $key_null_check$\n'
        '  $value_null_check$\n'
        '  internalGetMutable$capitalized_name$().getMutableMap()\n'
        '      .put(key, value);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public Builder ${$putAll$capitalized_name$$}$(\n'
        '    java.util.Map<$type_parameters$> values) {\n'
        '  internalGetMutable$capitalized_name$().getMutableMap()\n'
        '      .putAll(values);\n'
        '  return this;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
  }
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace objectivec {
    }
    }
    }
    }
    
      uint8 expected_data[] = {
      0x5,
      // All as is (00 op)
      0x1,  0x0A, 0x0,
      // Underscore, upper + 9 (10 op)
      0x3,  0xCA, 0x0,
      //  Upper + 3 (10 op), underscore, upper + 5 (10 op)
      0x2,  0x44, 0xC6, 0x0,
      // All Upper for 4 (11 op), underscore, underscore, upper + 5 (10 op),
      // underscore, lower + 0 (01 op)
      0x4,  0x64, 0x80, 0xC5, 0xA1, 0x0,
      // 2 byte key: as is + 3 (00 op), underscore, lower + 4 (01 op),
      //   underscore, lower + 3 (01 op), underscore, lower + 1 (01 op),
      //   underscore, lower + 30 (01 op), as is + 30 (00 op), as is + 13 (00
      //   op),
      //   underscore, as is + 3 (00 op)
      0xE8, 0x07, 0x04, 0xA5, 0xA4, 0xA2, 0xBF, 0x1F, 0x0E, 0x84, 0x0,
  };
  string expected((const char*)expected_data, sizeof(expected_data));
    
      CodeGeneratorRequest request;
  if (!request.ParseFromFileDescriptor(STDIN_FILENO)) {
    std::cerr << argv[0] << ': protoc sent unparseable request to plugin.'
              << std::endl;
    return 1;
  }
    
    // Array.
template <typename ToPrint, size_t N, typename OtherOperand>
class FormatForComparison<ToPrint[N], OtherOperand> {
 public:
  static ::std::string Format(const ToPrint* value) {
    return FormatForComparison<const ToPrint*, OtherOperand>::Format(value);
  }
};
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
  const T38 v38_;
  const T39 v39_;
  const T40 v40_;
  const T41 v41_;
  const T42 v42_;
  const T43 v43_;
  const T44 v44_;
  const T45 v45_;
  const T46 v46_;
};
    
    #include <string.h>
#include <string>
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TYPE_UTIL_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TYPE_UTIL_H_
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    #ifndef GTEST_SAMPLES_SAMPLE2_H_
#define GTEST_SAMPLES_SAMPLE2_H_
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    #include <string>
#include <vector>
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
    const std::string doc = R'DOC(
  Single-feature representation:
  - scalar features:
    <feature full name> T
  - list features:
    <feature full name>.lengths int32
    <feature full name>.values T
  - map features:
    <feature full name>.lengths int32
    <feature full name>.keys K
    <feature full name>.values V
    
      FlexibleTopKGradientOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws) {}
    
    workspace.ResetWorkspace()
    
    
    {
    {} // namespace
} // namespace caffe2

    
    namespace {
float sigmoid(const float x) {
  if (x >= 0) {
    return 1. / (1. + exp(-x));
  } else {
    const float exp_x = exp(x);
    return exp_x / (1 + exp_x);
  }
}
} // namespace
    
       friend inline bool operator == (const directory_iterator& f1, const directory_iterator& f2)
   {
      return ((f1.ref->hf == _fi_invalid_handle) && (f2.ref->hf == _fi_invalid_handle));
   }
    
    #ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
    
    class BOOST_REGEX_DECL abstract_protected_call
{
public:
   bool BOOST_REGEX_CALL execute()const;
   // this stops gcc-4 from complaining:
   virtual ~abstract_protected_call(){}
private:
   virtual bool call()const = 0;
};
    
    #ifndef BOOST_REGEX_FWD_HPP
#include <boost/regex_fwd.hpp>
#endif
#ifndef BOOST_REGEX_TRAITS_HPP
#include <boost/regex/regex_traits.hpp>
#endif
#ifndef BOOST_REGEX_RAW_BUFFER_HPP
#include <boost/regex/v4/error_type.hpp>
#endif
#ifndef BOOST_REGEX_V4_MATCH_FLAGS
#include <boost/regex/v4/match_flags.hpp>
#endif
#ifndef BOOST_REGEX_RAW_BUFFER_HPP
#include <boost/regex/v4/regex_raw_buffer.hpp>
#endif
#ifndef BOOST_RE_PAT_EXCEPT_HPP
#include <boost/regex/pattern_except.hpp>
#endif
    
    typedef regex_iterator<const char*> cregex_iterator;
typedef regex_iterator<std::string::const_iterator> sregex_iterator;
#ifndef BOOST_NO_WREGEX
typedef regex_iterator<const wchar_t*> wcregex_iterator;
typedef regex_iterator<std::wstring::const_iterator> wsregex_iterator;
#endif
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    template <class OutputIterator, class BidirectionalIterator, class traits, class charT, class Formatter>
OutputIterator regex_replace(OutputIterator out,
                         BidirectionalIterator first,
                         BidirectionalIterator last,
                         const basic_regex<charT, traits>& e, 
                         Formatter fmt, 
                         match_flag_type flags = match_default)
{
   regex_iterator<BidirectionalIterator, charT, traits> i(first, last, e, flags);
   regex_iterator<BidirectionalIterator, charT, traits> j;
   if(i == j)
   {
      if(!(flags & regex_constants::format_no_copy))
         out = BOOST_REGEX_DETAIL_NS::copy(first, last, out);
   }
   else
   {
      BidirectionalIterator last_m(first);
      while(i != j)
      {
         if(!(flags & regex_constants::format_no_copy))
            out = BOOST_REGEX_DETAIL_NS::copy(i->prefix().first, i->prefix().second, out); 
         out = i->format(out, fmt, flags, e);
         last_m = (*i)[0].second;
         if(flags & regex_constants::format_first_only)
            break;
         ++i;
      }
      if(!(flags & regex_constants::format_no_copy))
         out = BOOST_REGEX_DETAIL_NS::copy(last_m, last, out);
   }
   return out;
}
    
    
    {  EXPECT_EQ(0, exec.refCount);
}
    
    void BENCHFUN(pushBack)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.push_back(obj); }
  });
}
    
      std::string arguments1;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_branch_1', 0, arguments1));
  std::array<int, 1> expected1{{sizeof(uint32_t)}};
  checkTracepointArguments(arguments1, expected1);
    
    
    {} // namespace folly

    
    namespace folly {
    }
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
    enum class CompressionCounterKey {
  BYTES_BEFORE_COMPRESSION = 0,
  BYTES_AFTER_COMPRESSION = 1,
  BYTES_BEFORE_DECOMPRESSION = 2,
  BYTES_AFTER_DECOMPRESSION = 3,
  COMPRESSIONS = 4,
  DECOMPRESSIONS = 5,
  COMPRESSION_MILLISECONDS = 6,
  DECOMPRESSION_MILLISECONDS = 7,
};
    
      unsigned int get_local_count(const PackedPtr& p) const {
    return p.extra() & ~ALIASED_PTR;
  }