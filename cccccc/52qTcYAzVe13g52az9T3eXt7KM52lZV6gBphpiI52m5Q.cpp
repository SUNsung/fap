
        
          // Import private keys and certificates from PKCS #12 encoded
  // |data|, using the given |password|. If |is_extractable| is false,
  // mark the private key as unextractable from the module.
  // Returns a net error code on failure.
  int ImportFromPKCS12(PK11SlotInfo* slot_info,
                       const std::string& data,
                       const base::string16& password,
                       bool is_extractable,
                       net::ScopedCERTCertificateList* imported_certs);
    
      status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  if (status != napi_ok)
    return NULL;
    
    v8::Local<v8::ObjectTemplate> ObjectTemplateBuilder::Build() {
  v8::Local<v8::ObjectTemplate> result = template_;
  template_.Clear();
  return result;
}
    
    bool CertificateManagerModel::Delete(CERTCertificate* cert) {
  return cert_db_->DeleteCertAndKey(cert);
}
    
        auto context = isolate->GetCurrentContext();
    std::set<T> result;
    v8::Local<v8::Array> array(v8::Local<v8::Array>::Cast(val));
    uint32_t length = array->Length();
    for (uint32_t i = 0; i < length; ++i) {
      T item;
      if (!Converter<T>::FromV8(isolate,
                                array->Get(context, i).ToLocalChecked(), &item))
        return false;
      result.insert(item);
    }
    
    // Wrappable is a base class for C++ objects that have corresponding v8 wrapper
// objects. To retain a Wrappable object on the stack, use a gin::Handle.
//
// USAGE:
// // my_class.h
// class MyClass : Wrappable<MyClass> {
//  public:
//   ...
// };
//
// Subclasses should also typically have private constructors and expose a
// static Create function that returns a mate::Handle. Forcing creators through
// this static Create function will enforce that clients actually create a
// wrapper for the object. If clients fail to create a wrapper for a wrappable
// object, the object will leak because we use the weak callback from the
// wrapper as the signal to delete the wrapped object.
class WrappableBase {
 public:
  WrappableBase();
  virtual ~WrappableBase();
    }
    
      if (Create()) {
    UMA_HISTOGRAM_MEDIUM_TIMES('Chrome.ProcessSingleton.TimeToCreate',
                               base::TimeTicks::Now() - begin_ticks);
    return PROCESS_NONE;
  }
    
    static bool anyMutable(ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    if (field.isMutable())
      return true;
  }
  return false;
}
    
      Begin -= needed;
    
    const uint16_t swift::unicode::ExtendedGraphemeClusterNoBoundaryRulesMatrix[] = {
% for row in get_extended_grapheme_cluster_rules_matrix(break_table):
  ${row},
% end
};
    
      bool isGetter() const {
    return accessorKind == IAMAccessorKind::Getter;
  }
    
    
bool Mangle::isNonAscii(StringRef str) {
  for (unsigned char c : str) {
    if (c >= 0x80)
      return true;
  }
  return false;
}
    
    /// Sort a set of paths in an order that's (comparatively) stable against
/// variation in filesystem prefix: lexicographic comparison of the
/// byte-reversals of each path. Used for emitting external dependencies.
std::vector<std::string>
reversePathSortedFilenames(const llvm::ArrayRef<std::string> paths);
    
      /// Whether we've emitted the call for the current callee yet.  This
  /// is just for debugging purposes --- e.g. the destructor asserts
  /// that it's true --- but is otherwise derivable from
  /// RemainingArgsForCallee, at least between calls.
  bool EmittedCall;
    
      /**
   * Caffe's thread local state will be initialized using the current
   * thread values, e.g. device id, solver index etc. The random seed
   * is initialized using caffe_rng_rand.
   */
  void StartInternalThread();
    
      /**
   * @brief Returns the exact number of bottom blobs required by the layer,
   *        or -1 if no exact number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some exact number of bottom blobs.
   */
  virtual inline int ExactNumBottomBlobs() const { return -1; }
  /**
   * @brief Returns the minimum number of bottom blobs required by the layer,
   *        or -1 if no minimum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some minimum number of bottom blobs.
   */
  virtual inline int MinBottomBlobs() const { return -1; }
  /**
   * @brief Returns the maximum number of bottom blobs required by the layer,
   *        or -1 if no maximum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some maximum number of bottom blobs.
   */
  virtual inline int MaxBottomBlobs() const { return -1; }
  /**
   * @brief Returns the exact number of top blobs required by the layer,
   *        or -1 if no exact number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some exact number of top blobs.
   */
  virtual inline int ExactNumTopBlobs() const { return -1; }
  /**
   * @brief Returns the minimum number of top blobs required by the layer,
   *        or -1 if no minimum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some minimum number of top blobs.
   */
  virtual inline int MinTopBlobs() const { return -1; }
  /**
   * @brief Returns the maximum number of top blobs required by the layer,
   *        or -1 if no maximum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some maximum number of top blobs.
   */
  virtual inline int MaxTopBlobs() const { return -1; }
  /**
   * @brief Returns true if the layer requires an equal number of bottom and
   *        top blobs.
   *
   * This method should be overridden to return true if your layer expects an
   * equal number of bottom and top blobs.
   */
  virtual inline bool EqualNumBottomTopBlobs() const { return false; }
    
    #include <vector>
    
    #include <vector>
    
     protected:
  /// @copydoc ContrastiveLossLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include <vector>
    
    		m_pencoding->InitFromEncodingBits(this, a_paucEncodingBits, m_afrgbaSource,
										m_pimageSource->GetErrorMetric());
    
    #define MULT16_32_Q15(a,b)     ((a)*(b))
#define MULT16_32_Q16(a,b)     ((a)*(b))
    
    /* result fits in 16 bits */
static OPUS_INLINE short MULT16_16_16(int a, int b)
{
   int res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(b))
   {
      fprintf (stderr, 'MULT16_16_16: inputs are not short: %d %d\n', a, b);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a*b;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'MULT16_16_16: output is not short: %d\n', res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips++;
   return res;
}
    
    /** Arithmetic shift-right of a 16-bit value */
#define SHR16(a,shift) ((a) >> (shift))
/** Arithmetic shift-left of a 16-bit value */
#define SHL16(a,shift) ((opus_int16)((opus_uint16)(a)<<(shift)))
/** Arithmetic shift-right of a 32-bit value */
#define SHR32(a,shift) ((a) >> (shift))
/** Arithmetic shift-left of a 32-bit value */
#define SHL32(a,shift) ((opus_int32)((opus_uint32)(a)<<(shift)))
    
    /* a32 + (b32 * (c32 >> 16)) >> 16 */
#undef silk_SMLAWT
static OPUS_INLINE opus_int32 silk_SMLAWT_armv5e(opus_int32 a, opus_int32 b,
 opus_int32 c)
{
  int res;
  __asm__(
      '#silk_SMLAWT\n\t'
      'smlawt %0, %1, %2, %3\n\t'
      : '=r'(res)
      : 'r'(b), 'r'(c), 'r'(a)
  );
  return res;
}
#define silk_SMLAWT(a, b, c) (silk_SMLAWT_armv5e(a, b, c))
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
    #include <vector>
#include <string>
#include <functional>
#include <utility>
    
    
    {  /*!
   * \brief Create a tree updater given name
   * \param name Name of the tree updater.
   */
  static TreeUpdater* Create(const std::string& name, LearnerTrainParam const* tparam);
};
    
    
    { private:
  HostDeviceVectorImpl<T>* impl_;
};
    
      // try all possible enum values
  kwargs['foo'] = 'bar';
  param.Init(kwargs);
  ASSERT_EQ(param.foo, Foo::kBar);
  kwargs['foo'] = 'frog';
  param.Init(kwargs);
  ASSERT_EQ(param.foo, Foo::kFrog);
  kwargs['foo'] = 'cat';
  param.Init(kwargs);
  ASSERT_EQ(param.foo, Foo::kCat);
  kwargs['foo'] = 'dog';
  param.Init(kwargs);
  ASSERT_EQ(param.foo, Foo::kDog);