
        
          // Methods used during initialization, see the comment at the top of the .cc
  // file for details.
  static void DidGetCertDBOnUIThread(net::NSSCertDatabase* cert_db,
                                     bool is_user_db_available,
                                     const CreationCallback& callback);
  static void DidGetCertDBOnIOThread(const CreationCallback& callback,
                                     net::NSSCertDatabase* cert_db);
  static void GetCertDBOnIOThread(content::ResourceContext* context,
                                  const CreationCallback& callback);
    
    template <>
struct Converter<v8::Local<v8::String>> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   v8::Local<v8::String> val);
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     v8::Local<v8::String>* out);
};
    
      template <typename T>
  bool SetHidden(const base::StringPiece& key, T val) {
    v8::Local<v8::Value> v8_value;
    if (!TryConvertToV8(isolate_, val, &v8_value))
      return false;
    v8::Local<v8::Context> context = isolate_->GetCurrentContext();
    v8::Local<v8::Private> privateKey =
        v8::Private::ForApi(isolate_, StringToV8(isolate_, key));
    v8::Maybe<bool> result =
        GetHandle()->SetPrivate(context, privateKey, v8_value);
    return !result.IsNothing() && result.FromJust();
  }
    
     private:
  ObjectTemplateBuilder& SetImpl(const base::StringPiece& name,
                                 v8::Local<v8::Data> val);
  ObjectTemplateBuilder& SetPropertyImpl(
      const base::StringPiece& name,
      v8::Local<v8::FunctionTemplate> getter,
      v8::Local<v8::FunctionTemplate> setter);
    
    
    {  static bool FromV8(v8::Isolate* isolate, v8::Local<v8::Value> val, T** out) {
    *out = static_cast<T*>(
        static_cast<WrappableBase*>(internal::FromV8Impl(isolate, val)));
    return *out != nullptr;
  }
};
    
    // static
void CertificateManagerModel::DidGetCertDBOnUIThread(
    net::NSSCertDatabase* cert_db,
    bool is_user_db_available,
    const CreationCallback& callback) {
  DCHECK_CURRENTLY_ON(BrowserThread::UI);
    }
    
      // Stored delegate methods.
  base::RepeatingCallback<bool(v8::Local<v8::Value>, int)> is_checked_;
  base::RepeatingCallback<bool(v8::Local<v8::Value>, int)> is_enabled_;
  base::RepeatingCallback<bool(v8::Local<v8::Value>, int)> is_visible_;
  base::RepeatingCallback<bool(v8::Local<v8::Value>, int)> works_when_hidden_;
  base::RepeatingCallback<v8::Local<v8::Value>(v8::Local<v8::Value>, int, bool)>
      get_accelerator_;
  base::RepeatingCallback<bool(v8::Local<v8::Value>, int)>
      should_register_accelerator_;
  base::RepeatingCallback<void(v8::Local<v8::Value>, v8::Local<v8::Value>, int)>
      execute_command_;
  base::RepeatingCallback<void(v8::Local<v8::Value>)> menu_will_show_;
    
      // Marks this activity object as inactive without invalidating it.
  void ResignCurrentActivity();
    
        /** Colorize an icon (given filename) with the text color */
    QIcon TextColorIcon(const QString& filename) const;
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
    // A helper class useful for DBImpl::Get()
class LookupKey {
 public:
  // Initialize *this for looking up user_key at a snapshot with
  // the specified sequence number.
  LookupKey(const Slice& user_key, SequenceNumber sequence);
    }
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
    #include 'tesseractclass.h'
#ifdef _OPENMP
#include <omp.h>
#endif  // _OPENMP
    
    bool ParagraphModel::ValidFirstLine(int lmargin, int lindent,
                                    int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + first_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + first_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
      // Get the value of the top (smallest, defined by operator< ) element.
  const Pair& PeekTop() const {
    return heap_[0];
  }
  // Get the value of the worst (largest, defined by operator< ) element.
  const Pair& PeekWorst() const { return heap_[IndexOfWorst()]; }
    
    class QRSequenceGenerator {
 public:
  // Object is initialized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
      const dmlc::RowBlock<IndexType>& Value() const override {
    return out_;
  }
    
    
    {  {
    auto lparam = xgboost::CreateEmptyGenericParam(1, -1);
    xgboost::Metric * metric = xgboost::Metric::Create('rmse', &lparam);
    ASSERT_STREQ(metric->Name(), 'rmse');
    EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
    EXPECT_NEAR(GetMetricEval(metric,
                              {0.1f, 0.9f, 0.1f, 0.9f},
                              {  0,   0,   1,   1}),
                0.6403f, 0.001f);
    delete metric;
  }
}
#endif

    
      ConfigureUpdaters({cfg.begin(), cfg.cend()});