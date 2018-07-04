
        
        
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
     private:
  const FileDescriptor* file_;
    
    
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
      // Returns an estimate of the number of bytes the printed code will compile to
  virtual int GenerateRegistrationCode(io::Printer* printer);
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
      // overroads ImmutableMessageFieldGenerator ---------------------------------
  void GenerateMembers(io::Printer* printer) const;
  void GenerateBuilderMembers(io::Printer* printer) const;
  void GenerateInitializationCode(io::Printer* printer) const;
  void GenerateBuilderClearCode(io::Printer* printer) const;
  void GenerateMergingCode(io::Printer* printer) const;
  void GenerateBuildingCode(io::Printer* printer) const;
  void GenerateParsingCode(io::Printer* printer) const;
  void GenerateSerializationCode(io::Printer* printer) const;
  void GenerateSerializedSizeCode(io::Printer* printer) const;
    
    #endif

    
    #include <set>
    
    #include 'hphp/runtime/ext/extension.h'
#include 'hphp/util/type-scan.h'
#include <curl/curl.h>
    
    const StaticString s_empty('');
const Func* lookupDirectFunc(SrcKey const sk,
                             const StringData* fname,
                             const StringData* clsName,
                             bool isExact,
                             bool isStatic) {
  if (clsName && !clsName->empty()) {
    auto const cls = Unit::lookupUniqueClassInContext(clsName,
                                                      sk.func()->cls());
    bool magic = false;
    auto const func = lookupImmutableMethod(cls, fname, magic,
                                            isStatic, sk.func(), isExact);
    if (func &&
        !isExact &&
        !func->isImmutableFrom(cls) &&
        (isStatic || !(func->attrs() & AttrPrivate))) return nullptr;
    return func;
  }
  return lookupImmutableFunc(sk.unit(), fname).func;
}
    
    template<> inline
dnnError_t dnnLRNCreateBackward<float>(
    dnnPrimitive_t* pLrn,
    dnnPrimitiveAttributes_t attributes,
    const dnnLayout_t diffLayout,
    const dnnLayout_t dataLayout,
    size_t kernel_size,
    float alpha,
    float beta,
    float k)
{
    return dnnLRNCreateBackward_F32(
        pLrn, attributes, diffLayout, dataLayout, kernel_size, alpha, beta, k);
}
    
    
    {
    {
    {}}} // end namespaces

    
    template <class _T>
class array_ref
{
    _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }
    
        if (st.total_length > _rawlen) return LONGLINKPACK_CONTINUE_data;
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    Config::~Config(void)
{
    YGConfigFree(m_config);
}
    
    /* static */ Node * Node::fromYGNode(YGNodeRef nodeRef)
{
    return reinterpret_cast<Node *>(YGNodeGetContext(nodeRef));
}
    
        Value getPadding(int edge) const;
    
        method(setFlex);
    method(setFlexBasis);
    method(setFlexBasisPercent);
    method(setFlexGrow);
    method(setFlexShrink);
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    #pragma once