
        
        #include <set>
#include <string>
#include <vector>
    
    using atom::api::BoxLayout;
    
    namespace atom {
    }
    
    // static
void GlobalShortcut::BuildPrototype(v8::Isolate* isolate,
                                    v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'GlobalShortcut'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetMethod('register', &GlobalShortcut::Register)
      .SetMethod('isRegistered', &GlobalShortcut::IsRegistered)
      .SetMethod('unregister', &GlobalShortcut::Unregister)
      .SetMethod('unregisterAll', &GlobalShortcut::UnregisterAll);
}
    
      // Observable:
  void OnMenuWillClose() override;
  void OnMenuWillShow() override;
    
    #ifndef BITCOIN_QT_PLATFORMSTYLE_H
#define BITCOIN_QT_PLATFORMSTYLE_H
    
    
    {    secp256k1_scalar_get_b32(brx, sigr);
    r = secp256k1_fe_set_b32(&fx, brx);
    (void)r;
    VERIFY_CHECK(r); /* brx comes from a scalar, so is less than the order; certainly less than p */
    if (recid & 2) {
        if (secp256k1_fe_cmp_var(&fx, &secp256k1_ecdsa_const_p_minus_order) >= 0) {
            return 0;
        }
        secp256k1_fe_add(&fx, &secp256k1_ecdsa_const_order_as_fe);
    }
    if (!secp256k1_ge_set_xo_var(&x, &fx, recid & 1)) {
        return 0;
    }
    secp256k1_gej_set_ge(&xj, &x);
    secp256k1_scalar_inverse_var(&rn, sigr);
    secp256k1_scalar_mul(&u1, &rn, message);
    secp256k1_scalar_negate(&u1, &u1);
    secp256k1_scalar_mul(&u2, &rn, sigs);
    secp256k1_ecmult(ctx, &qj, &xj, &u2, &u1);
    secp256k1_ge_set_gej_var(pubkey, &qj);
    return !secp256k1_gej_is_infinity(&qj);
}
    
    #endif /* SECP256K1_MODULE_RECOVERY_TESTS_H */

    
    
/// Format a value into a stream, delegating to operator<< by default.
///
/// Users may override this for their own types.  When this function is called,
/// the stream flags will have been modified according to the format string.
/// The format specification is provided in the range [fmtBegin, fmtEnd).  For
/// truncating conversions, ntrunc is set to the desired maximum number of
/// characters, for example '%.7s' calls formatValue with ntrunc = 7.
///
/// By default, formatValue() uses the usual stream insertion operator
/// operator<< to format the type T, with special cases for the %c and %p
/// conversions.
template<typename T>
inline void formatValue(std::ostream& out, const char* /*fmtBegin*/,
                        const char* fmtEnd, int ntrunc, const T& value)
{
#ifndef TINYFORMAT_ALLOW_WCHAR_STRINGS
    // Since we don't support printing of wchar_t using '%ls', make it fail at
    // compile time in preference to printing as a void* at runtime.
    typedef typename detail::is_wchar<T>::tinyformat_wchar_is_not_supported DummyType;
    (void) DummyType(); // avoid unused type warning with gcc-4.8
#endif
    // The mess here is to support the %c and %p conversions: if these
    // conversions are active we try to convert the type to a char or const
    // void* respectively and format that instead of the value itself.  For the
    // %p conversion it's important to avoid dereferencing the pointer, which
    // could otherwise lead to a crash when printing a dangling (const char*).
    const bool canConvertToChar = detail::is_convertible<T,char>::value;
    const bool canConvertToVoidPtr = detail::is_convertible<T, const void*>::value;
    if(canConvertToChar && *(fmtEnd-1) == 'c')
        detail::formatValueAsType<T, char>::invoke(out, value);
    else if(canConvertToVoidPtr && *(fmtEnd-1) == 'p')
        detail::formatValueAsType<T, const void*>::invoke(out, value);
#ifdef TINYFORMAT_OLD_LIBSTDCPLUSPLUS_WORKAROUND
    else if(detail::formatZeroIntegerWorkaround<T>::invoke(out, value)) /**/;
#endif
    else if(ntrunc >= 0)
    {
        // Take care not to overread C strings in truncating conversions like
        // '%.4s' where at most 4 characters may be read.
        detail::formatTruncated(out, value, ntrunc);
    }
    else
        out << value;
}
    
      bool is_started() const;
    
    /**
 * @brief Computes the classification accuracy for a one-of-many
 *        classification task.
 */
template <typename Dtype>
class AccuracyLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides AccuracyParameter accuracy_param,
   *     with AccuracyLayer options:
   *   - top_k (\b optional, default 1).
   *     Sets the maximum rank @f$ k @f$ at which a prediction is considered
   *     correct.  For example, if @f$ k = 5 @f$, a prediction is counted
   *     correct if the correct label is among the top 5 predicted labels.
   */
  explicit AccuracyLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {}  // namespace caffe
    
    namespace caffe {
    }
    
    REGISTER_GRADIENT(Sub, GetSubGradient);
    
        auto oldSize = new_tensor->size();
    auto maxElem = 1 +
        *(std::max_element(
            indices.template data<int>(),
            indices.template data<int>() + indices.size()));
    
    //////////////////////////////////////////////////////////////////////
    
      bool operator!=(SrcLoc o) const { return !(*this == o); }
    
    struct ObjectData;
struct Object;
    
    inline APCLocalArray* APCLocalArray::Make(const APCArray* aa) {
  auto size = sizeof(APCLocalArray) + aa->size() * sizeof(TypedValue);
  auto local = new (tl_heap->objMalloc(size)) APCLocalArray(aa);
  assertx(local->heapSize() == size);
  return local;
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    #endif

    
    /*!
 * \brief Whether customize the logger outputs.
 */
#ifndef XGBOOST_CUSTOMIZE_LOGGER
#define XGBOOST_CUSTOMIZE_LOGGER XGBOOST_STRICT_R_MODE
#endif
    
    inline Float8 polynomial_5(Float8 const& x, const float c0, const float c1,
                           const float c2, const float c3, const float c4,
                           const float c5) {
  // calculates polynomial c5*x^5 + c4*x^4 + c3*x^3 + c2*x^2 + c1*x + c0
  Float8 x2 = x * x;
  Float8 x4 = x2 * x2;
  return (Float8(c2) + Float8(c3) * x) * x2 +
         ((Float8(c4) + Float8(c5) * x) * x4 + (Float8(c0) + Float8(c1) * x));
}
    
    
    { private:
  std::istream &fin_;
};
    
    using folly::Function;
using folly::FunctionRef;
    
    #include <folly/GLog.h>
    
    // Check a Linux kernel-style return code (>= 0 on success, negative error
// number on error), throw on error.
template <class... Args>
void checkKernelError(ssize_t ret, Args&&... args) {
  if (UNLIKELY(ret < 0)) {
    throwSystemErrorExplicit(int(-ret), std::forward<Args>(args)...);
  }
}
    
    // Empirically, this indicates if the runtime supports
// std::exception_ptr, as not all (arm, for instance) do.
#if defined(__GNUC__) && defined(__GCC_ATOMIC_INT_LOCK_FREE) && \
    __GCC_ATOMIC_INT_LOCK_FREE > 1
inline fbstring exceptionStr(std::exception_ptr ep) {
  try {
    std::rethrow_exception(ep);
  } catch (const std::exception& e) {
    return exceptionStr(e);
  } catch (...) {
    return '<unknown exception>';
  }
}
#endif
    
    /// An Executor accepts units of work with add(), which should be
/// threadsafe.
class Executor {
 public:
  // Workaround for a linkage problem with explicitly defaulted dtor t22914621
  virtual ~Executor() {}
    }
    
      /**
   * Returns a random uint32_t given a specific RNG
   */
  template <class RNG, class /* EnableIf */ = ValidRNG<RNG>>
  static uint32_t rand32(RNG&& rng) {
    return rng();
  }
    
    
    {  // Test for overflow.
  // Use a custom hours type using time_t as the underlying storage type to
  // guarantee that we can overflow.
  using hours_timet = std::chrono::duration<time_t, std::ratio<3600>>;
  EXPECT_THROW(
      to<struct timespec>(hours_timet(std::numeric_limits<time_t>::max())),
      std::range_error);
}
    
    namespace folly {
namespace io {
enum class CodecType;
} // namespace io
    }
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
      std::sort(cpus.begin(), cpus.end(), [&](size_t lhs, size_t rhs) -> bool {
    // sort first by equiv class of cache with highest index,
    // direction doesn't matter.  If different cpus have
    // different numbers of caches then this code might produce
    // a sub-optimal ordering, but it won't crash
    auto& lhsEquiv = equivClassesByCpu[lhs];
    auto& rhsEquiv = equivClassesByCpu[rhs];
    for (ssize_t i = ssize_t(std::min(lhsEquiv.size(), rhsEquiv.size())) - 1;
         i >= 0;
         --i) {
      auto idx = size_t(i);
      if (lhsEquiv[idx] != rhsEquiv[idx]) {
        return lhsEquiv[idx] < rhsEquiv[idx];
      }
    }
    }