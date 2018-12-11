
        
          /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
      const dmlc::RowBlock<IndexType>& Value() const override {
    return out_;
  }
    
      void InitTreesToUpdate() {
    if (trees_to_update.size() == 0u) {
      for (auto & tree : trees) {
        trees_to_update.push_back(std::move(tree));
      }
      trees.clear();
      param.num_trees = 0;
      tree_info.clear();
    }
  }
    
      virtual ~SplitEvaluator() = default;
    
      // construct column matrix from GHistIndexMatrix
  inline void Init(const GHistIndexMatrix& gmat,
                double  sparse_threshold) {
    const auto nfeature = static_cast<bst_uint>(gmat.cut.row_ptr.size() - 1);
    const size_t nrow = gmat.row_ptr.size() - 1;
    }
    
    TEST(FunctionRef, Traits) {
  static_assert(std::is_literal_type<FunctionRef<int(int)>>::value, '');
// Some earlier versions of libstdc++ lack these traits. Frustrating that
// the value of __GLIBCXX__ doesn't increase with version, but rather reflects
// release date, so some larger values of __GLIBCXX__ lack the traits while
// some smaller values have them. Can't figure out how to reliably test for the
// presence or absence of the traits. :-(
#if !defined(__GLIBCXX__) || __GNUC__ >= 5
  static_assert(
      std::is_trivially_copy_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_move_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_constructible<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
  static_assert(
      std::is_trivially_copy_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_move_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_assignable<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
#endif
  static_assert(
      std::is_nothrow_copy_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_move_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_constructible<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
  static_assert(
      std::is_nothrow_copy_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_move_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_assignable<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
}
    
      for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, -1) << 'every -1ms';
  }
    
    
    {  static constexpr size_t stateSize = StateSizeT<RNG>::value;
  std::array<uint32_t, stateSize> seedData;
};
    
    
    {} // namespace folly

    
    #include <folly/DefaultKeepAliveExecutor.h>
    
      void operator++(int) {
    *this += 1.0;
  }
    
    /**
 * Get the default options for zlib compression.
 * A codec created with these options will have type CodecType::ZLIB.
 */
Options defaultZlibOptions();
    
      std::shared_ptr<T> get() const {
    folly::hazptr_local<1> hazptr;
    auto slots = hazptr[0].get_protected(slots_);
    if (!slots) {
      return nullptr;
    }
    return (slots->slots_)[AccessSpreader<>::current(kNumSlots)];
  }
    
    
    {} // namespace