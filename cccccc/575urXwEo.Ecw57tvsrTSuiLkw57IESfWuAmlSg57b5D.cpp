
        
        
    {
    {}  // namespace internal
}  // namespace testing
    
    #if GTEST_HAS_PARAM_TEST
    
    TEST_P(FooTest, DoesBlah) {
  // Inside a test, access the test parameter with the GetParam() method
  // of the TestWithParam<T> class:
  EXPECT_TRUE(foo.Blah(GetParam()));
  ...
}
    
      // Returns true if pathname describes a root directory. (Windows has one
  // root directory per disk drive.)
  bool IsRootDirectory() const;
    
    // Used in the Values() function to provide polymorphic capabilities.
template <typename T1>
class ValueArray1 {
 public:
  explicit ValueArray1(T1 v1) : v1_(v1) {}
    }
    
    ]]
      ComputeCurrentValue();
    }
    virtual ParamIteratorInterface<ParamType>* Clone() const {
      return new Iterator(*this);
    }
    virtual const ParamType* Current() const { return &current_value_; }
    virtual bool Equals(const ParamIteratorInterface<ParamType>& other) const {
      // Having the same base generator guarantees that the other
      // iterator is of the same type and we can downcast.
      GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
          << 'The program attempted to compare iterators '
          << 'from different generators.' << std::endl;
      const Iterator* typed_other =
          CheckedDowncastToActualType<const Iterator>(&other);
      // We must report iterators equal if they both point beyond their
      // respective ranges. That can happen in a variety of fashions,
      // so we have to consult AtEnd().
      return (AtEnd() && typed_other->AtEnd()) ||
         ($for j  && [[
    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  rocksdb::Slice begin  = *v8::String::Utf8Value(args[0]->ToString());
  rocksdb::Slice end    = *v8::String::Utf8Value(args[1]->ToString());
  std::string cf        = *v8::String::Utf8Value(args[2]->ToString());
  db_wrapper->status_    = db_wrapper->db_->CompactRange(
      db_wrapper->columnFamilies_[cf], &begin, &end);
    
    #else  // !ROCKSDB_LITE
    
    /*
 * Class:     org_rocksdb_DirectComparator
 * Method:    createNewDirectComparator0
 * Signature: ()J
 */
jlong Java_org_rocksdb_DirectComparator_createNewDirectComparator0(
    JNIEnv* env, jobject jobj, jlong copt_handle) {
  auto* copt =
      reinterpret_cast<rocksdb::ComparatorJniCallbackOptions*>(copt_handle);
  auto* c =
      new rocksdb::DirectComparatorJniCallback(env, jobj, copt);
  return reinterpret_cast<jlong>(c);
}
// </editor-fold>

    
    /*
 * Class:     org_rocksdb_ColumnFamilyOptions
 * Method:    setTargetFileSizeBase
 * Signature: (JJ)V
 */
void Java_org_rocksdb_ColumnFamilyOptions_setTargetFileSizeBase(
    JNIEnv* env, jobject jobj, jlong jhandle,
    jlong jtarget_file_size_base) {
  reinterpret_cast<rocksdb::ColumnFamilyOptions*>(jhandle)->
      target_file_size_base = static_cast<uint64_t>(jtarget_file_size_base);
}
    
    
    {  rocksdb::SstFileWriter *sst_file_writer =
      new rocksdb::SstFileWriter(*env_options, *options, comparator);
  return reinterpret_cast<jlong>(sst_file_writer);
}