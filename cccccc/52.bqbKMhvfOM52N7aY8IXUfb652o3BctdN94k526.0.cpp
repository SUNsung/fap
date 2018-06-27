
        
        #endif  // ATOM_BROWSER_API_ATOM_API_GLOBAL_SHORTCUT_H_

    
    
    {}  // namespace atom
    
    
    { protected:
  virtual ~WindowListObserver() {}
};
    
    #endif  // CHROME_BROWSER_MEDIA_DESKTOP_MEDIA_LIST_H_

    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    #include <string>
    
    #if defined(OS_MACOSX)
// NOTE: if you change the value of kFrameworkName, please don't forget to
// update components/test/run_all_unittests.cc as well.
// TODO(tfarina): Remove the comment above, when you fix components to use plist
// on Mac.
extern const base::FilePath::CharType kFrameworkName[];
#endif  // OS_MACOSX
    
    // dims=[5, 4, 3, 2]->[5, 3, 2, 4]
TEST_F(MatrixTest, RotatingTranspose_1_3) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 1, 3, &m);
  m.ResizeNoInit(kInputSize_ / 4, 4);
  // Verify that the result is:
  // output tensor=[[[[0, 6, 12, 18][1, 7, 13, 19]]
  //                 [[2, 8, 14, 20][3, 9, 15, 21]]
  //                 [[4, 10, 16, 22][5, 11, 17, 23]]]
  //                [[[24, 30, 36, 42]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(6, m(0, 1));
  EXPECT_EQ(1, m(1, 0));
  EXPECT_EQ(2, m(2, 0));
  EXPECT_EQ(3, m(3, 0));
  EXPECT_EQ(4, m(4, 0));
  EXPECT_EQ(5, m(5, 0));
  EXPECT_EQ(24, m(6, 0));
  EXPECT_EQ(30, m(6, 1));
}
    
      /**
   * Returns information about the current paragraph, if available.
   *
   *   justification -
   *     LEFT if ragged right, or fully justified and script is left-to-right.
   *     RIGHT if ragged left, or fully justified and script is right-to-left.
   *     unknown if it looks like source code or we have very few lines.
   *   is_list_item -
   *     true if we believe this is a member of an ordered or unordered list.
   *   is_crown -
   *     true if the first line of the paragraph is aligned with the other
   *     lines of the paragraph even though subsequent paragraphs have first
   *     line indents.  This typically indicates that this is the continuation
   *     of a previous paragraph or that it is the very first paragraph in
   *     the chapter.
   *   first_line_indent -
   *     For LEFT aligned paragraphs, the first text line of paragraphs of
   *     this kind are indented this many pixels from the left edge of the
   *     rest of the paragraph.
   *     for RIGHT aligned paragraphs, the first text line of paragraphs of
   *     this kind are indented this many pixels from the right edge of the
   *     rest of the paragraph.
   *     NOTE 1: This value may be negative.
   *     NOTE 2: if *is_crown == true, the first line of this paragraph is
   *             actually flush, and first_line_indent is set to the 'common'
   *             first_line_indent for subsequent paragraphs in this block
   *             of text.
   */
  void ParagraphInfo(tesseract::ParagraphJustification *justification,
                     bool *is_list_item,
                     bool *is_crown,
                     int *first_line_indent) const;
    
    /**
 * NOTE! This is an exact copy of PageIterator::IsAtFinalElement with the
 *   change that the variable next is now a ResultIterator instead of a
 *   PageIterator.
 */
bool ResultIterator::IsAtFinalElement(PageIteratorLevel level,
                                      PageIteratorLevel element) const {
  if (Empty(element)) return true;  // Already at the end!
  // The result is true if we step forward by element and find we are
  // at the the end of the page or at beginning of *all* levels in:
  // [level, element).
  // When there is more than one level difference between element and level,
  // we could for instance move forward one symbol and still be at the first
  // word on a line, so we also have to be at the first symbol in a word.
  ResultIterator next(*this);
  next.Next(element);
  if (next.Empty(element)) return true;  // Reached the end of the page.
  while (element > level) {
    element = static_cast<PageIteratorLevel>(element - 1);
    if (!next.IsAtBeginningOf(element))
      return false;
  }
  return true;
}
    
    const int16_t idirtab[] = {
  1000, 0, 998, 49, 995, 98, 989, 146,
  980, 195, 970, 242, 956, 290, 941, 336,
  923, 382, 903, 427, 881, 471, 857, 514,
  831, 555, 803, 595, 773, 634, 740, 671,
  707, 707, 671, 740, 634, 773, 595, 803,
  555, 831, 514, 857, 471, 881, 427, 903,
  382, 923, 336, 941, 290, 956, 242, 970,
  195, 980, 146, 989, 98, 995, 49, 998,
  0, 1000, -49, 998, -98, 995, -146, 989,
  -195, 980, -242, 970, -290, 956, -336, 941,
  -382, 923, -427, 903, -471, 881, -514, 857,
  -555, 831, -595, 803, -634, 773, -671, 740,
  -707, 707, -740, 671, -773, 634, -803, 595,
  -831, 555, -857, 514, -881, 471, -903, 427,
  -923, 382, -941, 336, -956, 290, -970, 242,
  -980, 195, -989, 146, -995, 98, -998, 49,
  -1000, 0, -998, -49, -995, -98, -989, -146,
  -980, -195, -970, -242, -956, -290, -941, -336,
  -923, -382, -903, -427, -881, -471, -857, -514,
  -831, -555, -803, -595, -773, -634, -740, -671,
  -707, -707, -671, -740, -634, -773, -595, -803,
  -555, -831, -514, -857, -471, -881, -427, -903,
  -382, -923, -336, -941, -290, -956, -242, -970,
  -195, -980, -146, -989, -98, -995, -49, -998,
  0, -1000, 49, -998, 98, -995, 146, -989,
  195, -980, 242, -970, 290, -956, 336, -941,
  382, -923, 427, -903, 471, -881, 514, -857,
  555, -831, 595, -803, 634, -773, 671, -740,
  707, -707, 740, -671, 773, -634, 803, -595,
  831, -555, 857, -514, 881, -471, 903, -427,
  923, -382, 941, -336, 956, -290, 970, -242,
  980, -195, 989, -146, 995, -98, 998, -49
};
    
    #include          'rect.h'
    
    // Returns an INT_FEATURE_STRUCT corresponding to the given bucket coords.
INT_FEATURE_STRUCT IntFeatureSpace::PositionFromBuckets(int x,
                                                        int y,
                                                        int theta) const {
  INT_FEATURE_STRUCT pos(
      (x * kIntFeatureExtent + kIntFeatureExtent / 2) / x_buckets_,
      (y * kIntFeatureExtent + kIntFeatureExtent / 2) / y_buckets_,
      DivRounded(theta * kIntFeatureExtent, theta_buckets_));
  return pos;
}
    
    template<typename T>
struct or_trait<T> : T {};
    
    class TLSConfigPlugin;
    
      // Now test that the default value is tracked.
  EXPECT_FALSE(Flag::isDefault('test_string_flag'));
    
      {
    auto nobody = getpwnam('nobody');
    auto dropper = DropPrivileges::get();
    dropper->dropTo(nobody->pw_uid, nobody->pw_gid);
    PlatformFile fd(file_path, PF_OPEN_EXISTING | PF_READ);
    EXPECT_FALSE(fd.isValid());
  }
    
      // If a constraint list does not exist, then all checks will match.
  // If there is no predicate clause then all results will match.
  EXPECT_TRUE(cm['not_path'].matches('some'));
  EXPECT_TRUE(cm['not_path'].notExistsOrMatches('some'));
  EXPECT_FALSE(cm['not_path'].exists());
  EXPECT_FALSE(cm['not_path'].existsAndMatches('some'));
    
    Status WmiResultItem::GetString(const std::string& name,
                                std::string& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
  if (hr != S_OK) {
    ret = '';
    return Status(-1, 'Error retrieving data from WMI query.');
  }
  if (value.vt != VT_BSTR) {
    ret = '';
    VariantClear(&value);
    return Status(-1, 'Invalid data type returned.');
  }
  ret = bstrToString(value.bstrVal);
  VariantClear(&value);
  return Status(0);
}
    
      /// For testing only, allow the event stream to publish its own events.
  bool no_self_{true};
    
    template <typename EventType>
using TypedKernelEventContextRef =
    std::shared_ptr<TypedKernelEventContext<EventType>>;
    
    
    
    
    
    
    
    
    
    
    
        mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);
    
    	static Test* Create()
	{
		return new BodyTypes;
	}
    
    			m_body = m_world->CreateBody(&bd);
			m_body->CreateFixture(&box, 1.0f);
    
    
    {			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-8.0f + 8.0f * i, 12.0f);
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&fd);
		}
    
      std::vector<rocksdb::ColumnFamilyDescriptor> families;
    
     private:
  char delim_;         // The delimiter is inserted between elements
    
    class StringAppendTESTOperator : public MergeOperator {
 public:
  // Constructor with delimiter
  explicit StringAppendTESTOperator(char delim_char);
    }
    
    TEST_F(StringAppendOperatorTest, VariousKeys) {
  auto db = OpenDb('\n');
  StringLists slists(db);
    }
    
    
    {  // No copying allowed
  Reader(const Reader&);
  void operator=(const Reader&);
};
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
    void SyncPoint::LoadDependencyAndMarkers(
  const std::vector<SyncPointPair>& dependencies,
  const std::vector<SyncPointPair>& markers) {
  impl_->LoadDependencyAndMarkers(dependencies, markers);
}
    
    
    {  m_jFindShortSuccessorMethodId =
    AbstractComparatorJni::getFindShortSuccessorMethodId(env);
  if(m_jFindShortSuccessorMethodId == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}
    
    /**
 * This class acts as a bridge between C++
 * and Java. The methods in this class will be
 * called back from the RocksDB storage engine (C++)
 * we then callback to the appropriate Java method
 * this enables Comparators to be implemented in Java.
 *
 * The design of this Comparator caches the Java Slice
 * objects that are used in the compare and findShortestSeparator
 * method callbacks. Instead of creating new objects for each callback
 * of those functions, by reuse via setHandle we are a lot
 * faster; Unfortunately this means that we have to
 * introduce independent locking in regions of each of those methods
 * via the mutexs mtx_compare and mtx_findShortestSeparator respectively
 */
class BaseComparatorJniCallback : public JniCallback, public Comparator {
 public:
    BaseComparatorJniCallback(
      JNIEnv* env, jobject jComparator,
      const ComparatorJniCallbackOptions* copt);
    virtual const char* Name() const;
    virtual int Compare(const Slice& a, const Slice& b) const;
    virtual void FindShortestSeparator(
      std::string* start, const Slice& limit) const;
    virtual void FindShortSuccessor(std::string* key) const;
    }
    
      auto marker_iter = markers_.find(point);
  if (marker_iter != markers_.end()) {
    for (auto& marked_point : marker_iter->second) {
      marked_thread_id_.emplace(marked_point, thread_id);
    }
  }