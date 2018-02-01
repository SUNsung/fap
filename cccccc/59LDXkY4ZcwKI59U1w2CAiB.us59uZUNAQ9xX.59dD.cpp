#if GTEST_OS_SYMBIAN
  // Streams a value (either a pointer or not) to this object.
  template <typename T>
  inline Message& operator <<(const T& value) {
    StreamHelper(typename internal::is_pointer<T>::type(), value);
    return *this;
  }
#else
  // Streams a non-pointer value to this object.
  template <typename T>
  inline Message& operator <<(const T& val) {
    // Some libraries overload << for STL containers.  These
    // overloads are defined in the global namespace instead of ::std.
    //
    // C++'s symbol lookup rule (i.e. Koenig lookup) says that these
    // overloads are visible in either the std namespace or the global
    // namespace, but not other namespaces, including the testing
    // namespace which Google Test's Message class is in.
    //
    // To allow STL containers (and other types that has a << operator
    // defined in the global namespace) to be used in Google Test
    // assertions, testing::Message must access the custom << operator
    // from the global namespace.  With this using declaration,
    // overloads of << defined in the global namespace and those
    // visible via Koenig lookup are both exposed in this function.
    using ::operator <<;
    *ss_ << val;
    return *this;
  }
    
    template <$for j, [[typename Generator$j]]>
internal::CartesianProductHolder$i<$for j, [[Generator$j]]> Combine(
    $for j, [[const Generator$j& g$j]]) {
  return internal::CartesianProductHolder$i<$for j, [[Generator$j]]>(
      $for j, [[g$j]]);
}
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
    // The base case for the compile time recursion.
template <GTEST_TEMPLATE_ Fixture, class TestSel>
class TypeParameterizedTest<Fixture, TestSel, Types0> {
 public:
  static bool Register(const char* /*prefix*/, const char* /*case_name*/,
                       const char* /*test_names*/, int /*index*/) {
    return true;
  }
};
    
    // Protects copying of all linked_ptr objects.
GTEST_API_ GTEST_DECLARE_STATIC_MUTEX_(g_linked_ptr_mutex);
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
    
      virtual bool IsPrime(int n) const {
    return 0 <= n && n < is_prime_size_ && is_prime_[n];
  }
    
      // Now, we have that n is odd and n >= 3.
    
      /**
   * @brief The std::thread's interruption point.
   */
  virtual void interrupt() final;
    
    
    {/**
 * @brief Read the enrollment secret from disk.
 *
 * We suspect multiple enrollment types may require an apriori, and enterprise
 * shared, secret. Use of this enroll or deployment secret is an optional choice
 * made by the enroll plugin type.
 *
 * @return enroll_secret The trimmed content read from FLAGS_enroll_secret_path.
 */
const std::string getEnrollSecret();
}

    
      // Getter for the carver status
  Status getStatus() {
    return status_;
  }
    
    #include <osquery/config.h>
#include <osquery/dispatcher.h>
    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  rocksdb::Slice begin     = *v8::String::Utf8Value(args[0]->ToString());
  rocksdb::Slice end       = *v8::String::Utf8Value(args[1]->ToString());
  db_wrapper->status_    = db_wrapper->db_->CompactRange(&end, &begin);
    
    // InsertBefore and InsertAfter are simply wrappers around the Insert function.
int RedisLists::InsertBefore(const std::string& key, const std::string& pivot,
                             const std::string& value) {
  return Insert(key, pivot, value, false);
}
    
      jstring jname =
      (jstring)env->CallObjectMethod(m_jcallback_obj, jname_method_id);
  if(env->ExceptionCheck()) {
    // exception thrown
    return;
  }
  jboolean has_exception = JNI_FALSE;
  m_name = JniUtil::copyString(env, jname, &has_exception);  // also releases jname
  if (has_exception == JNI_TRUE) {
    // exception thrown
    return;
  }
    
      m_jFindShortestSeparatorMethodId =
    AbstractComparatorJni::getFindShortestSeparatorMethodId(env);
  if(m_jFindShortestSeparatorMethodId == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    
    /*
 * Class:     org_rocksdb_WriteBatchWithIndex
 * Method:    deleteRange
 * Signature: (J[BI[BIJ)V
 */
void Java_org_rocksdb_WriteBatchWithIndex_deleteRange__J_3BI_3BIJ(
    JNIEnv* env, jobject jobj, jlong jwbwi_handle, jbyteArray jbegin_key,
    jint jbegin_key_len, jbyteArray jend_key, jint jend_key_len,
    jlong jcf_handle) {
  auto* wbwi = reinterpret_cast<rocksdb::WriteBatchWithIndex*>(jwbwi_handle);
  assert(wbwi != nullptr);
  auto* cf_handle = reinterpret_cast<rocksdb::ColumnFamilyHandle*>(jcf_handle);
  assert(cf_handle != nullptr);
  auto deleteRange = [&wbwi, &cf_handle](rocksdb::Slice beginKey,
                                         rocksdb::Slice endKey) {
    wbwi->DeleteRange(cf_handle, beginKey, endKey);
  };
  rocksdb::JniUtil::kv_op(deleteRange, env, jobj, jbegin_key, jbegin_key_len,
                          jend_key, jend_key_len);
}
    
      m_env->CallVoidMethod(
      m_jcallback_obj,
      m_jLogDataMethodId,
      j_blob);
  if(m_env->ExceptionCheck()) {
    // exception thrown
    m_env->ExceptionDescribe();
    if(j_blob != nullptr) {
      m_env->DeleteLocalRef(j_blob);
    }
    return;
  }
    
    inline flatbuffers::Offset<EnumVal> CreateEnumValDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    int64_t value = 0,
    flatbuffers::Offset<Object> object = 0,
    flatbuffers::Offset<Type> union_type = 0) {
  return reflection::CreateEnumVal(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      value,
      object,
      union_type);
}
    
    ::grpc::Status MonsterStorage::Service::Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
}
    
    
    {
    {}  // namespace Example
}  // namespace MyGame
    
    inline void IterateObject(const uint8_t *obj, const TypeTable *type_table,
                          IterationVisitor *visitor) {
  visitor->StartSequence();
  const uint8_t *prev_val = nullptr;
  size_t set_idx = 0;
  for (size_t i = 0; i < type_table->num_elems; i++) {
    auto type_code = type_table->type_codes[i];
    auto type = static_cast<ElementaryType>(type_code.base_type);
    auto is_vector = type_code.is_vector != 0;
    auto ref_idx = type_code.sequence_ref;
    const TypeTable *ref = nullptr;
    if (ref_idx >= 0) { ref = type_table->type_refs[ref_idx](); }
    auto name = type_table->names ? type_table->names[i] : nullptr;
    const uint8_t *val = nullptr;
    if (type_table->st == ST_TABLE) {
      val = reinterpret_cast<const Table *>(obj)->GetAddressOf(
          FieldIndexToOffset(static_cast<voffset_t>(i)));
    } else {
      val = obj + type_table->values[i];
    }
    visitor->Field(i, set_idx, type, is_vector, ref, name, val);
    if (val) {
      set_idx++;
      if (is_vector) {
        val += ReadScalar<uoffset_t>(val);
        auto vec = reinterpret_cast<const Vector<uint8_t> *>(val);
        visitor->StartVector();
        auto elem_ptr = vec->Data();
        for (size_t j = 0; j < vec->size(); j++) {
          visitor->Element(j, type, ref, elem_ptr);
          IterateValue(type, elem_ptr, ref, prev_val, static_cast<soffset_t>(j),
                       visitor);
          elem_ptr += InlineSize(type, ref);
        }
        visitor->EndVector();
      } else {
        IterateValue(type, val, ref, prev_val, -1, visitor);
      }
    }
    prev_val = val;
  }
  visitor->EndSequence();
}
    
    // Get any vector element as a 64bit int, regardless of what type it is.
inline int64_t GetAnyVectorElemI(const VectorOfAny *vec,
                                 reflection::BaseType elem_type, size_t i) {
  return GetAnyValueI(elem_type, vec->Data() + GetTypeSize(elem_type) * i);
}