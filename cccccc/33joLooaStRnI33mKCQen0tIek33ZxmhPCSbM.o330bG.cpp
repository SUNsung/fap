
        
        CharReaderBuilder::CharReaderBuilder()
{
  setDefaults(&settings_);
}
CharReaderBuilder::~CharReaderBuilder()
{}
CharReader* CharReaderBuilder::newCharReader() const
{
  bool collectComments = settings_['collectComments'].asBool();
  OurFeatures features = OurFeatures::all();
  features.allowComments_ = settings_['allowComments'].asBool();
  features.strictRoot_ = settings_['strictRoot'].asBool();
  features.allowDroppedNullPlaceholders_ = settings_['allowDroppedNullPlaceholders'].asBool();
  features.allowNumericKeys_ = settings_['allowNumericKeys'].asBool();
  features.allowSingleQuotes_ = settings_['allowSingleQuotes'].asBool();
  features.stackLimit_ = settings_['stackLimit'].asInt();
  features.failIfExtra_ = settings_['failIfExtra'].asBool();
  features.rejectDupKeys_ = settings_['rejectDupKeys'].asBool();
  features.allowSpecialFloats_ = settings_['allowSpecialFloats'].asBool();
  return new OurCharReader(collectComments, features);
}
static void getValidReaderKeys(std::set<std::string>* valid_keys)
{
  valid_keys->clear();
  valid_keys->insert('collectComments');
  valid_keys->insert('allowComments');
  valid_keys->insert('strictRoot');
  valid_keys->insert('allowDroppedNullPlaceholders');
  valid_keys->insert('allowNumericKeys');
  valid_keys->insert('allowSingleQuotes');
  valid_keys->insert('stackLimit');
  valid_keys->insert('failIfExtra');
  valid_keys->insert('rejectDupKeys');
  valid_keys->insert('allowSpecialFloats');
}
bool CharReaderBuilder::validate(Json::Value* invalid) const
{
  Json::Value my_invalid;
  if (!invalid) invalid = &my_invalid;  // so we do not need to test for NULL
  Json::Value& inv = *invalid;
  std::set<std::string> valid_keys;
  getValidReaderKeys(&valid_keys);
  Value::Members keys = settings_.getMemberNames();
  size_t n = keys.size();
  for (size_t i = 0; i < n; ++i) {
    std::string const& key = keys[i];
    if (valid_keys.find(key) == valid_keys.end()) {
      inv[key] = settings_[key];
    }
  }
  return 0u == inv.size();
}
Value& CharReaderBuilder::operator[](std::string key)
{
  return settings_[key];
}
// static
void CharReaderBuilder::strictMode(Json::Value* settings)
{
//! [CharReaderBuilderStrictMode]
  (*settings)['allowComments'] = false;
  (*settings)['strictRoot'] = true;
  (*settings)['allowDroppedNullPlaceholders'] = false;
  (*settings)['allowNumericKeys'] = false;
  (*settings)['allowSingleQuotes'] = false;
  (*settings)['stackLimit'] = 1000;
  (*settings)['failIfExtra'] = true;
  (*settings)['rejectDupKeys'] = true;
  (*settings)['allowSpecialFloats'] = false;
//! [CharReaderBuilderStrictMode]
}
// static
void CharReaderBuilder::setDefaults(Json::Value* settings)
{
//! [CharReaderBuilderDefaults]
  (*settings)['collectComments'] = true;
  (*settings)['allowComments'] = true;
  (*settings)['strictRoot'] = false;
  (*settings)['allowDroppedNullPlaceholders'] = false;
  (*settings)['allowNumericKeys'] = false;
  (*settings)['allowSingleQuotes'] = false;
  (*settings)['stackLimit'] = 1000;
  (*settings)['failIfExtra'] = false;
  (*settings)['rejectDupKeys'] = false;
  (*settings)['allowSpecialFloats'] = false;
//! [CharReaderBuilderDefaults]
}
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ReflectionClassGenerator);
};
    
    #include <string>
    
    // Exposed for testing only.
LIBPROTOC_EXPORT string EscapeJavadoc(const string& input);
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    void ImmutableLazyMessageOneofFieldGenerator::
GenerateSerializedSizeCode(io::Printer* printer) const {
  printer->Print(variables_,
    'if ($has_oneof_case_message$) {\n'
    '  size += com.google.protobuf.CodedOutputStream\n'
    '    .computeLazyFieldSize($number$, ($lazy_type$) $oneof_name$_);\n'
    '}\n');
}
    
    std::string stringFromCFNumber(const CFDataRef& cf_number, CFNumberType type) {
  // Make sure the type is a number.
  if (CFGetTypeID(cf_number) != CFNumberGetTypeID()) {
    return '0';
  }
    }
    
      struct ConstraintList cl2;
  cl2.affinity = INTEGER_TYPE;
  constraint = Constraint(LESS_THAN);
  constraint.expr = '1000';
  cl2.add(constraint);
  constraint = Constraint(GREATER_THAN);
  constraint.expr = '1';
  cl2.add(constraint);
    
    /**
 * @brief Generate the separator string for query results
 *
 * @param lengths The data returned from computeQueryDataLengths
 * @param columns The order of the keys (since maps are unordered)
 *
 * @return A string, with a newline, representing your separator
 */
std::string generateToken(const std::map<std::string, size_t>& lengths,
                          const std::vector<std::string>& columns);
    
    #include <osquery/database.h>
#include <osquery/distributed.h>
#include <osquery/flags.h>
#include <osquery/system.h>
    
      Status run() override;
    
    /**
 * @brief An osquery EventPublisher for the Apple FSEvents notification API.
 *
 * This exposes a lightweight filesystem eventing type by wrapping Apple's
 * preferred implementation of FSEvents handling.
 *
 */
class FSEventsEventPublisher
    : public EventPublisher<FSEventsSubscriptionContext, FSEventsEventContext> {
  DECLARE_PUBLISHER('fsevents');
    }
    
      DBWrapper* db_wrapper     = ObjectWrap::Unwrap<DBWrapper>(args.This());
  Handle<Array> sub_batches = Handle<Array>::Cast(args[0]);
  Local<Object> sub_batch;
  rocksdb::WriteBatch batch;
  bool well_formed;
    
    TEST_F(MockEnvTest, FakeSleeping) {
  int64_t now = 0;
  auto s = env_->GetCurrentTime(&now);
  ASSERT_OK(s);
  env_->FakeSleepForMicroseconds(3 * 1000 * 1000);
  int64_t after_sleep = 0;
  s = env_->GetCurrentTime(&after_sleep);
  ASSERT_OK(s);
  auto delta = after_sleep - now;
  // this will be true unless test runs for 2 seconds
  ASSERT_TRUE(delta == 3 || delta == 4);
}
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
      /// If list is empty, return false and leave *result unchanged.
  /// Else, remove the first/last elem, store it in *result, and return true
  bool PopLeft(const std::string& key, std::string* result);  // First
  bool PopRight(const std::string& key, std::string* result); // Last
    
    
    {  librados::bufferlist bl;
  std::set<std::string> keys;
  std::map<std::string, librados::bufferlist> kvs;
  librados::ObjectWriteOperation o;
  bl.append(fid);
  keys.insert(old_fname);
  kvs[new_fname] = bl;
  o.omap_rm_keys(keys);
  o.omap_set(kvs);
  int r = _db_pool_ioctx.operate(_db_name, &o);
  return err_to_status(r);
}
    
      bool IsKeyPinned() const { return (key_ != buf_); }
    
    struct HistogramData {
  double median;
  double percentile95;
  double percentile99;
  double average;
  double standard_deviation;
  // zero-initialize new members since old Statistics::histogramData()
  // implementations won't write them.
  double max = 0.0;
  uint64_t count = 0;
  uint64_t sum = 0;
};