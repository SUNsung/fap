
        
          EXPECT_EXIT(TextFormatDecodeData::DecodeDataForString('', ''),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
  EXPECT_EXIT(TextFormatDecodeData::DecodeDataForString('a', ''),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
  EXPECT_EXIT(TextFormatDecodeData::DecodeDataForString('', 'a'),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    class Base1 {
 public:
  virtual ~Base1() {}
  int pad;
};
    
    REGISTER_GRADIENT(Sub, GetSubGradient);
    
    OPERATOR_SCHEMA(FindDuplicateElements)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
The *FindDuplicateElements* op takes a single 1-D tensor *data* as input and returns a single 1-D output tensor *indices*. The output tensor contains the indices of the duplicate elements of the input, excluding the first occurrences. If all elements of *data* are unique, *indices* will be empty.
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    UnicodeString &ScriptSet::displayScripts(UnicodeString &dest) const {
    UBool firstTime = TRUE;
    for (int32_t i = nextSetBit(0); i >= 0; i = nextSetBit(i + 1)) {
        if (!firstTime) {
            dest.append((UChar)0x20);
        }
        firstTime = FALSE;
        const char *scriptName = uscript_getShortName((UScriptCode(i)));
        dest.append(UnicodeString(scriptName, -1, US_INV));
    }
    return dest;
}
    
    #define DOT               ((UChar)0x002E)
#define SINGLE_QUOTE      ((UChar)0x0027)
#define SLASH             ((UChar)0x002F)
#define BACKSLASH         ((UChar)0x005C)
#define SPACE             ((UChar)0x0020)
#define TAB               ((UChar)0x0009)
#define QUOTATION_MARK    ((UChar)0x0022)
#define ASTERISK          ((UChar)0x002A)
#define COMMA             ((UChar)0x002C)
#define HYPHEN            ((UChar)0x002D)
#define U_ZERO            ((UChar)0x0030)
#define U_ONE             ((UChar)0x0031)
#define U_TWO             ((UChar)0x0032)
#define U_THREE           ((UChar)0x0033)
#define U_FOUR            ((UChar)0x0034)
#define U_FIVE            ((UChar)0x0035)
#define U_SIX             ((UChar)0x0036)
#define U_SEVEN           ((UChar)0x0037)
#define U_EIGHT           ((UChar)0x0038)
#define U_NINE            ((UChar)0x0039)
#define COLON             ((UChar)0x003A)
#define SEMI_COLON        ((UChar)0x003B)
#define CAP_A             ((UChar)0x0041)
#define CAP_B             ((UChar)0x0042)
#define CAP_R             ((UChar)0x0052)
#define CAP_Z             ((UChar)0x005A)
#define LOWLINE           ((UChar)0x005F)
#define LEFTBRACE         ((UChar)0x007B)
#define RIGHTBRACE        ((UChar)0x007D)
    
    U_NAMESPACE_END
    
    U_NAMESPACE_END
    
    class U_I18N_API SharedNumberFormat : public SharedObject {
public:
    SharedNumberFormat(NumberFormat *nfToAdopt) : ptr(nfToAdopt) { }
    virtual ~SharedNumberFormat();
    const NumberFormat *get() const { return ptr; }
    const NumberFormat *operator->() const { return ptr; }
    const NumberFormat &operator*() const { return *ptr; }
private:
    NumberFormat *ptr;
    SharedNumberFormat(const SharedNumberFormat &);
    SharedNumberFormat &operator=(const SharedNumberFormat &);
};
    
    #endif

    
        /**
     * Returns TRUE if this instance represents no constraints on significant
     * digits.
     */
    UBool isNoConstraints() const {
        return fMin == 0 && fMax == INT32_MAX;
    }
    
    // A hash code of kInvalidHashCode indicates that the hash code needs
// to be computed. A hash code of kEmptyHashCode is used for empty keys
// and for any key whose computed hash code is kInvalidHashCode.
static const int32_t kInvalidHashCode = 0;
static const int32_t kEmptyHashCode = 1;
// The 'bogus hash code' replaces a separate fBogus flag.
static const int32_t kBogusHashCode = 2;
    
      port::CondVar* GetCondVar() {
    return &cv_;
  }
    
    Status WriteBatchBase::Delete(ColumnFamilyHandle* column_family,
                              const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return Delete(column_family, key_slice);
}
    
      // open DB with two column families
  std::vector<ColumnFamilyDescriptor> column_families;
  // have to open default column family
  column_families.push_back(ColumnFamilyDescriptor(
      kDefaultColumnFamilyName, ColumnFamilyOptions()));
  // open the new one, too
  column_families.push_back(ColumnFamilyDescriptor(
      'new_cf', ColumnFamilyOptions()));
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(DBOptions(), kDBPath, column_families, &handles, &db);
  assert(s.ok());
    
    #include 'rocksdb/db.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/options.h'
    
      // Attempt to acquire lock.  Return OK on success, or other Status on failure.
  // If returned status is OK, TransactionDB will eventually call UnLock().
  virtual Status Lock() = 0;