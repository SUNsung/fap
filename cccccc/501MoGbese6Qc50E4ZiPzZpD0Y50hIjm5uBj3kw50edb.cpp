
        
        // Implements printing a reference type T&.
template <typename T>
class UniversalPrinter<T&> {
 public:
  // MSVC warns about adding const to a function type, so we want to
  // disable the warning.
#ifdef _MSC_VER
# pragma warning(push)          // Saves the current warning state.
# pragma warning(disable:4180)  // Temporarily disables warning 4180.
#endif  // _MSC_VER
    }
    
      // Gets the summary of the failure message by omitting the stack
  // trace in it.
  static std::string ExtractSummary(const char* message);
    
      // Adds a test property to the list. The property is validated and may add
  // a non-fatal failure if invalid (e.g., if it conflicts with reserved
  // key names). If a property is already recorded for the same key, the
  // value will be updated, rather than storing multiple values for the same
  // key.  xml_element specifies the element for which the property is being
  // recorded and is used for validation.
  void RecordProperty(const std::string& xml_element,
                      const TestProperty& test_property);
    
      // Copy an existing linked_ptr<>, adding ourselves to the list of references.
  template <typename U> linked_ptr(linked_ptr<U> const& ptr) { copy(&ptr); }
  linked_ptr(linked_ptr const& ptr) {  // NOLINT
    assert(&ptr != this);
    copy(&ptr);
  }
    
    
template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7>
class CartesianProductGenerator7
    : public ParamGeneratorInterface< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6,
        T7> > {
 public:
  typedef ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7> ParamType;
    }
    
    // 6.1.3.2 Tuple creation functions.
    
    // Known limitations: we don't support passing an
// std::tr1::reference_wrapper<T> to make_tuple().  And we don't
// implement tie().
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44>
struct Types44 {
  typedef T1 Head;
  typedef Types43<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
      T44> Tail;
};
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
      // Sets up the network for training. Initializes weights using weights of
  // scale `range` picked according to the random number generator `randomizer`.
  int InitWeights(float range, TRand* randomizer) override;
  // Recursively searches the network for softmaxes with old_no outputs,
  // and remaps their outputs according to code_map. See network.h for details.
  int RemapOutputs(int old_no, const std::vector<int>& code_map) override;
    
    const char *kApostropheLikeUTF8[] = {
  ''',       // ASCII apostrophe
  '`',       // ASCII backtick
  '\u2018',  // opening single quote
  '\u2019',  // closing single quote
  '\u2032',  // mathematical prime mark
  nullptr,      // end of our list.
};
    
    
    {  // Top-level iteration. Shape index in sparse charset_map space.
  int shape_index_;
  int num_shapes_;
  // Index to the character class within a shape.
  int shape_char_index_;
  int num_shape_chars_;
  // Index to the font within a shape/class pair.
  int shape_font_index_;
  int num_shape_fonts_;
  // The lowest level iteration. sample_index_/num_samples_ counts samples
  // in the current shape/class/font combination.
  int sample_index_;
  int num_samples_;
};
    
    #endif

    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    
    {  // Check that deleting works.
  ASSERT_TRUE(!env_->DeleteFile('/dir/non_existent').ok());
  ASSERT_OK(env_->DeleteFile('/dir/g'));
  ASSERT_TRUE(!env_->FileExists('/dir/g'));
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(0, children.size());
  ASSERT_OK(env_->DeleteDir('/dir'));
}
    
    TEST(FilterBlockTest, MultiChunk) {
  FilterBlockBuilder builder(&policy_);
    }
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
    XGB_DLL int XGDMatrixGetFloatInfo(const DMatrixHandle handle,
                                  const char* field,
                                  xgboost::bst_ulong* out_len,
                                  const bst_float** out_dptr) {
  API_BEGIN();
  CHECK_HANDLE();
  const MetaInfo& info = static_cast<std::shared_ptr<DMatrix>*>(handle)->get()->Info();
  const std::vector<bst_float>* vec = nullptr;
  if (!std::strcmp(field, 'label')) {
    vec = &info.labels_;
  } else if (!std::strcmp(field, 'weight')) {
    vec = &info.weights_;
  } else if (!std::strcmp(field, 'base_margin')) {
    vec = &info.base_margin_;
  } else {
    LOG(FATAL) << 'Unknown float field name ' << field;
  }
  *out_len = static_cast<xgboost::bst_ulong>(vec->size());  // NOLINT
  *out_dptr = dmlc::BeginPtr(*vec);
  API_END();
}
    
    template<>
inline XGBOOST_DEVICE float GradientPairInternal<int64_t>::GetGrad() const {
  return grad_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE float GradientPairInternal<int64_t>::GetHess() const {
  return hess_ * 1e-4f;
}
template<>
inline XGBOOST_DEVICE void GradientPairInternal<int64_t>::SetGrad(float g) {
  grad_ = static_cast<int64_t>(std::round(g * 1e4));
}
template<>
inline XGBOOST_DEVICE void GradientPairInternal<int64_t>::SetHess(float h) {
  hess_ = static_cast<int64_t>(std::round(h * 1e4));
}
    
    XGBOOST_REGISTER_TREE_UPDATER(LocalHistMaker, 'grow_local_histmaker')
.describe('Tree constructor that uses approximate histogram construction.')
.set_body([]() {
    return new CQHistMaker<GradStats>();
  });
    
    
/*! \brief Cut configuration for one feature */
struct HistCutUnit {
  /*! \brief the index pointer of each histunit */
  const bst_float* cut;
  /*! \brief number of cutting point, containing the maximum point */
  uint32_t size;
  // default constructor
  HistCutUnit() = default;
  // constructor
  HistCutUnit(const bst_float* cut, uint32_t size)
      : cut(cut), size(size) {}
};