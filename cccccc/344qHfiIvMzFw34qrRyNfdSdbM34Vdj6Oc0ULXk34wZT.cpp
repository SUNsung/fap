
        
        template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35>
internal::ValueArray35<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35> Values(T1 v1, T2 v2, T3 v3, T4 v4,
    T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13,
    T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21,
    T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29,
    T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35) {
  return internal::ValueArray35<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35>(v1, v2, v3, v4, v5, v6,
      v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21,
      v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35);
}
    
    // Then, use TYPED_TEST_P() to define as many type-parameterized tests
// for this type-parameterized test case as you want.
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
      // ============= Accessing data ==============.
  // Coordinate system:
  // Integer coordinates are at the cracks between the pixels.
  // The top-left corner of the top-left pixel in the image is at (0,0).
  // The bottom-right corner of the bottom-right pixel in the image is at
  // (width, height).
  // Every bounding box goes from the top-left of the top-left contained
  // pixel to the bottom-right of the bottom-right contained pixel, so
  // the bounding box of the single top-left pixel in the image is:
  // (0,0)->(1,1).
  // If an image rectangle has been set in the API, then returned coordinates
  // relate to the original (full) image, rather than the rectangle.
    
    void ResultIterator::CalculateTextlineOrder(
    bool paragraph_is_ltr,
    const LTRResultIterator &resit,
    GenericVector<StrongScriptDirection> *dirs_arg,
    GenericVectorEqEq<int> *word_indices) const {
  GenericVector<StrongScriptDirection> dirs;
  GenericVector<StrongScriptDirection> *directions;
  directions = (dirs_arg != nullptr) ? dirs_arg : &dirs;
  directions->truncate(0);
    }
    
    const ICOORD *dirtab = (ICOORD *) idirtab;
    
    namespace tesseract {
/**********************************************************************
 * main_setup
 *
 * Main for mithras demo program. Read the arguments and set up globals.
 **********************************************************************/
    }
    
      // Writes the given float_classes (produced by SetupForFloat2Int) as inttemp
  // to the given inttemp_file, and the corresponding pffmtable.
  // The unicharset is the original encoding of graphemes, and shape_set should
  // match the size of the shape_table, and may possibly be totally fake.
  void WriteInttempAndPFFMTable(const UNICHARSET& unicharset,
                                const UNICHARSET& shape_set,
                                const ShapeTable& shape_table,
                                CLASS_STRUCT* float_classes,
                                const char* inttemp_file,
                                const char* pffmtable_file);
    
      // Computes the mean_column_gap_.
  void ComputeMeanColumnGap(bool any_multi_column);
    
    template <typename Stream>
class buffered_read_stream;
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP

    
      // Obtain the value at the top of the stack.
  static Value* top()
  {
    context* elem = top_;
    return elem ? elem->value_ : 0;
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      char* buffer = (char*)malloc(range.length + 1);
  if (buffer == nullptr) {
    return '';
  }
  memset(buffer, 0, range.length + 1);
    
    
    {
    {    // Checking if we are generally in an unprivileged mode.
    auto dropper2 = DropPrivileges::get();
    EXPECT_FALSE(dropper2->dropped());
  }
}
    
      /// Restrict to a specific devtype.
  std::string devtype;
    
      int fd = open(kLinuxMemPath.c_str(), O_RDONLY);
  if (fd < 0) {
    return Status(1, std::string('Cannot open ') + kLinuxMemPath);
  }