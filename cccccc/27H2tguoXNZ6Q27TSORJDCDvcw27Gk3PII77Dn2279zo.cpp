
        
            Q_PROPERTY(QVariant value READ value WRITE setValue NOTIFY valueChanged USER true)
    
    #endif // BITCOIN_QT_TRANSACTIONDESCDIALOG_H

    
    
    {    secp256k1_fe_sqr(&z12, &a->z);
    u1 = a->x; secp256k1_fe_normalize_weak(&u1);
    secp256k1_fe_mul(&u2, &b->x, &z12);
    s1 = a->y; secp256k1_fe_normalize_weak(&s1);
    secp256k1_fe_mul(&s2, &b->y, &z12); secp256k1_fe_mul(&s2, &s2, &a->z);
    secp256k1_fe_negate(&h, &u1, 1); secp256k1_fe_add(&h, &u2);
    secp256k1_fe_negate(&i, &s1, 1); secp256k1_fe_add(&i, &s2);
    if (secp256k1_fe_normalizes_to_zero_var(&h)) {
        if (secp256k1_fe_normalizes_to_zero_var(&i)) {
            secp256k1_gej_double_var(r, a, rzr);
        } else {
            if (rzr != NULL) {
                secp256k1_fe_set_int(rzr, 0);
            }
            r->infinity = 1;
        }
        return;
    }
    secp256k1_fe_sqr(&i2, &i);
    secp256k1_fe_sqr(&h2, &h);
    secp256k1_fe_mul(&h3, &h, &h2);
    if (rzr != NULL) {
        *rzr = h;
    }
    secp256k1_fe_mul(&r->z, &a->z, &h);
    secp256k1_fe_mul(&t, &u1, &h2);
    r->x = t; secp256k1_fe_mul_int(&r->x, 2); secp256k1_fe_add(&r->x, &h3); secp256k1_fe_negate(&r->x, &r->x, 3); secp256k1_fe_add(&r->x, &i2);
    secp256k1_fe_negate(&r->y, &r->x, 5); secp256k1_fe_add(&r->y, &t); secp256k1_fe_mul(&r->y, &r->y, &i);
    secp256k1_fe_mul(&h3, &h3, &s1); secp256k1_fe_negate(&h3, &h3, 1);
    secp256k1_fe_add(&r->y, &h3);
}
    
    #ifndef SECP256K1_MODULE_ECDH_TESTS_H
#define SECP256K1_MODULE_ECDH_TESTS_H
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    static void CheckSplitTorReplyLine(std::string input, std::string command, std::string args)
{
    BOOST_TEST_MESSAGE(std::string('CheckSplitTorReplyLine(') + input + ')');
    auto ret = SplitTorReplyLine(input);
    BOOST_CHECK_EQUAL(ret.first, command);
    BOOST_CHECK_EQUAL(ret.second, args);
}
    
    namespace
{
static bool ParsePrechecks(const std::string& str)
{
    if (str.empty()) // No empty string allowed
        return false;
    if (str.size() >= 1 && (json_isspace(str[0]) || json_isspace(str[str.size()-1]))) // No padding allowed
        return false;
    if (str.size() != strlen(str.c_str())) // No embedded NUL characters allowed
        return false;
    return true;
}
    }
    
        BOOST_CHECK(v.setArray());
    BOOST_CHECK(v.isArray());
    BOOST_CHECK_EQUAL(v.size(), 0);
    
      // True when a ScopedPyObjectPtr and a raw pointer refer to the same object.
  // Comparison operators are non reflexive.
  bool operator==(const PyObjectStruct* p) const { return ptr_ == p; }
  bool operator!=(const PyObjectStruct* p) const { return ptr_ != p; }
    
    // A CodeGenerator that captures the FileDescriptor it's passed as a
// FileDescriptorProto.
class DescriptorCapturingGenerator : public CodeGenerator {
 public:
  // Does not own file; file must outlive the Generator.
  explicit DescriptorCapturingGenerator(FileDescriptorProto* file)
      : file_(file) {}
    }
    
    
    {  for (int i = 0; i < parts.size(); i++) {
    string::size_type equals_pos = parts[i].find_first_of('=');
    std::pair<string, string> value;
    if (equals_pos == string::npos) {
      value.first = parts[i];
      value.second = '';
    } else {
      value.first = parts[i].substr(0, equals_pos);
      value.second = parts[i].substr(equals_pos + 1);
    }
    output->push_back(value);
  }
}
    
    string ClassNameResolver::GetClassName(const EnumDescriptor* descriptor,
                                       bool immutable) {
  return GetClassFullName(ClassNameWithoutPackage(descriptor, immutable),
                          descriptor->file(), immutable,
                          MultipleJavaFiles(descriptor->file(), immutable));
}
    
      for (int i = 0; i < dependencies.size(); i++) {
    const string& dependency = dependencies[i].second;
    printer->Print(
        '      $dependency$.getDescriptor(),\n',
        'dependency', dependency);
  }
    
    MeasureDouble RpcClientReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientReceivedBytesPerRpcMeasureName,
      'Total bytes received across all response messages per RPC', kUnitBytes);
  return measure;
}
    
    
    {}  // namespace grpc

    
    ProtoServerReflectionPlugin::ProtoServerReflectionPlugin()
    : reflection_service_(new grpc::ProtoServerReflection()) {}
    
    
    {  if ((pool_->shutdown_) && (pool_->nthreads_ == 0)) {
    pool_->shutdown_cv_.notify_one();
  }
}
    
    template <typename T>
inline StringName __constant_get_enum_name(T param, const String &p_constant) {
	if (GetTypeInfo<T>::VARIANT_TYPE == Variant::NIL)
		ERR_PRINTS('Missing VARIANT_ENUM_CAST for constant's enum: ' + p_constant);
	return GetTypeInfo<T>::get_class_info().class_name;
}
    
    #include 'collision_object_bullet.h'
    
    #include 'csg_gizmos.h'
#include 'csg_shape.h'
    
    Shell::~Shell() {
}
    
    void RemoveTransliterator::handleTransliterate(Replaceable& text, UTransPosition& index,
                                               UBool /*isIncremental*/) const {
    // Our caller (filteredTransliterate) has already narrowed us
    // to an unfiltered run.  Delete it.
    UnicodeString empty;
    text.handleReplaceBetween(index.start, index.limit, empty);
    int32_t len = index.limit - index.start;
    index.contextLimit -= len;
    index.limit -= len;
}
U_NAMESPACE_END
    
    ScientificNumberFormatter::ScientificNumberFormatter(
        DecimalFormat *fmtToAdopt, Style *styleToAdopt, UErrorCode &status)
        : fPreExponent(),
          fDecimalFormat(fmtToAdopt),
          fStyle(styleToAdopt),
          fStaticSets(NULL) {
    if (U_FAILURE(status)) {
        return;
    }
    if (fDecimalFormat == NULL || fStyle == NULL) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return;
    }
    const DecimalFormatSymbols *sym = fDecimalFormat->getDecimalFormatSymbols();
    if (sym == NULL) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return;
    }
    getPreExponent(*sym, fPreExponent);
    fStaticSets = DecimalFormatStaticSets::getStaticSets(status);
}
    
    #endif /* #if !UCONFIG_NO_TRANSLITERATION */
    
        float x = _eye.x - _center.x;
    float y = _eye.y - _center.y;
    float z = _eye.z - _center.z;
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
        /** Gets the total Delay units of the Animation. 
     *
     * @return The total Delay units of the Animation.
     */
    float getTotalDelayUnits() const { return _totalDelayUnits; };
    
    /** Sets the delay in seconds of the 'delay unit'.
     *
     * @param delayPerUnit The delay in seconds of the 'delay unit'.
     */
    void setDelayPerUnit(float delayPerUnit) { _delayPerUnit = delayPerUnit; };
    
    /** Gets the delay in seconds of the 'delay unit'.
     * 
     * @return The delay in seconds of the 'delay unit'.
     */
    float getDelayPerUnit() const { return _delayPerUnit; };
    
        /** Returns a Animation that was previously added.
     * If the name is not found it will return nil.
     * You should retain the returned copy if you are going to use it.
     *
     * @return A Animation that was previously added. If the name is not found it will return nil.
     */
    Animation* getAnimation(const std::string& name);
    /**
     * @deprecated. Use getAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE Animation* animationByName(const std::string& name){ return getAnimation(name); }