
        
        TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
namespace util {
namespace error {
inline string CodeEnumToString(error::Code code) {
  switch (code) {
    case OK:
      return 'OK';
    case CANCELLED:
      return 'CANCELLED';
    case UNKNOWN:
      return 'UNKNOWN';
    case INVALID_ARGUMENT:
      return 'INVALID_ARGUMENT';
    case DEADLINE_EXCEEDED:
      return 'DEADLINE_EXCEEDED';
    case NOT_FOUND:
      return 'NOT_FOUND';
    case ALREADY_EXISTS:
      return 'ALREADY_EXISTS';
    case PERMISSION_DENIED:
      return 'PERMISSION_DENIED';
    case UNAUTHENTICATED:
      return 'UNAUTHENTICATED';
    case RESOURCE_EXHAUSTED:
      return 'RESOURCE_EXHAUSTED';
    case FAILED_PRECONDITION:
      return 'FAILED_PRECONDITION';
    case ABORTED:
      return 'ABORTED';
    case OUT_OF_RANGE:
      return 'OUT_OF_RANGE';
    case UNIMPLEMENTED:
      return 'UNIMPLEMENTED';
    case INTERNAL:
      return 'INTERNAL';
    case UNAVAILABLE:
      return 'UNAVAILABLE';
    case DATA_LOSS:
      return 'DATA_LOSS';
  }
    }
    }
    }
    }
    }
    
    TEST(StructurallyValidTest, ValidUTF8String) {
  // On GCC, this string can be written as:
  //   'abcd 1234 - \u2014\u2013\u2212'
  // MSVC seems to interpret \u differently.
  string valid_str('abcd 1234 - \342\200\224\342\200\223\342\210\222 - xyz789');
  EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data(),
                                      valid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data() + i,
                                        valid_str.size() - i));
  }
}
    
    
// Abbreviations: true_type and false_type are structs that represent boolean
// true and false values. Also define the boost::mpl versions of those names,
// true_ and false_.
typedef integral_constant<bool, true>  true_type;
typedef integral_constant<bool, false> false_type;
typedef true_type  true_;
typedef false_type false_;
    
    bool secondary_indexes_are_equivalent(const std::vector<char> &left,
                                      const std::vector<char> &right) {
    sindex_disk_info_t sindex_info_left;
    sindex_disk_info_t sindex_info_right;
    deserialize_sindex_info_or_crash(left, &sindex_info_left);
    deserialize_sindex_info_or_crash(right, &sindex_info_right);
    }
    
    // An array of TestPartResult objects.
//
// Don't inherit from TestPartResultArray as its destructor is not
// virtual.
class GTEST_API_ TestPartResultArray {
 public:
  TestPartResultArray() {}
    }
    
      // A helper class that aborts a death test when it's deleted.
  class ReturnSentinel {
   public:
    explicit ReturnSentinel(DeathTest* test) : test_(test) { }
    ~ReturnSentinel() { test_->Abort(TEST_ENCOUNTERED_RETURN_STATEMENT); }
   private:
    DeathTest* const test_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(ReturnSentinel);
  } GTEST_ATTRIBUTE_UNUSED_;
    
      // Create the directory so that path exists. Returns true if successful or
  // if the directory already exists; returns false if unable to create the
  // directory for any reason, including if the parent directory does not
  // exist. Not named 'CreateDirectory' because that's a macro on Windows.
  bool CreateFolder() const;
    
        if ((level == psLevel2Sep || level == psLevel3Sep) && colorMap &&
	colorMap->getColorSpace()->getMode() == csSeparation) {
      color.c[0] = gfxColorComp1;
      sepCS = (GfxSeparationColorSpace *)colorMap->getColorSpace();
      sepCS->getCMYK(&color, &cmyk);
      writePSFmt('{0:.4g} {1:.4g} {2:.4g} {3:.4g} ({4:t}) pdfImSep\n',
		 colToDbl(cmyk.c), colToDbl(cmyk.m),
		 colToDbl(cmyk.y), colToDbl(cmyk.k),
		 sepCS->getName());
    } else {
      writePSFmt('{0:s}\n', colorMap ? 'pdfIm' : 'pdfImM');
    }
    
    void Page::displaySlice(OutputDev *out, double hDPI, double vDPI,
			int rotate, GBool useMediaBox, GBool crop,
			int sliceX, int sliceY, int sliceW, int sliceH,
			GBool printing, Catalog *catalog,
			GBool (*abortCheckCbk)(void *data),
			void *abortCheckCbkData,
                        GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
                        void *annotDisplayDecideCbkData) {
  Gfx *gfx;
  Object obj;
  Annots *annotList;
  int i;
  
  if (!out->checkPageSlice(this, hDPI, vDPI, rotate, useMediaBox, crop,
			   sliceX, sliceY, sliceW, sliceH,
			   printing, catalog,
			   abortCheckCbk, abortCheckCbkData)) {
    return;
  }
    }
    
      // get type
  if (dict->lookup('S', &obj)->isName()) {
    const char *s = obj.getName();
    
    if (strcmp('R', s) == 0)
      type = transitionReplace;
    else if (strcmp('Split', s) == 0)
      type = transitionSplit;
    else if (strcmp('Blinds', s) == 0)
      type = transitionBlinds;
    else if (strcmp('Box', s) == 0)
      type = transitionBox;
    else if (strcmp('Wipe', s) == 0)
      type = transitionWipe;
    else if (strcmp('Dissolve', s) == 0)
      type = transitionDissolve;
    else if (strcmp('Glitter', s) == 0)
      type = transitionGlitter;
    else if (strcmp('Fly', s) == 0)
      type = transitionFly;
    else if (strcmp('Push', s) == 0)
      type = transitionPush;
    else if (strcmp('Cover', s) == 0)
      type = transitionCover;
    else if (strcmp('Uncover', s) == 0)
      type = transitionUncover;
    else if (strcmp('Fade', s) == 0)
      type = transitionFade;
  }
  obj.free();
    
    PopplerCache::~PopplerCache()
{
  for (int i = 0; i <= lastValidCacheIndex; ++i) {
    delete keys[i];
    delete items[i];
  }
  delete[] keys;
  delete[] items;
}
    
    class PopplerCache
{
  public:
    PopplerCache(int cacheSizeA);
    ~PopplerCache();
    
    /* The item returned is owned by the cache */
    PopplerCacheItem *lookup(const PopplerCacheKey &key);
    
    /* The key and item pointers ownership is taken by the cache */
    void put(PopplerCacheKey *key, PopplerCacheItem *item);
    
    /* The max size of the cache */
    int size();
    
    /* The number of items in the cache */
    int numberOfItems();
    
    /* The n-th item in the cache */
    PopplerCacheItem *item(int index);
    
    /* The n-th key in the cache */
    PopplerCacheKey *key(int index);
  
  private:
    PopplerCache(const PopplerCache &cache); // not allowed
  
    PopplerCacheKey **keys;
    PopplerCacheItem **items;
    int lastValidCacheIndex;
    int cacheSize;
};
    
      MediaRendition* copy();
    
        void UserPostProcessing::doSomething(cv::Mat& output, const cv::Mat& input)
    {
        try
        {
            // Random operation on data
            cv::bitwise_not(input, output);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
        }
    }
    
        /*! \brief Constructor from cl_mem - takes ownership.
     *
     * \param retainObject will cause the constructor to retain its cl object.
     *                     Defaults to false to maintain compatibility with
     *                     earlier versions.
     *  See Memory for further details.
     */
    explicit Image1DBuffer(const cl_mem& image1D, bool retainObject = false) :
        Image(image1D, retainObject) { }
    
        private:
        const bool mMergeResults;
        const int mLevels;
        const int mPatchSize;
        const bool mTrackVelocity;
        const float mConfidenceThreshold;
        const bool mScaleVarying;
        const float mRescale;
    
    QHash<QString, std::function<void()>>
ConnectionsTree::TreeItem::eventHandlers() {
  QHash<QString, std::function<void()>> events;
  events['cancel'] = [this]() { cancelCurrentOperation(); };
  return events;
}
    
      auto errCallback = [this](const QString& k) {
    return [this, k](const QString& err) {
      QMutexLocker l(&m_errorsMutex);
      m_errors.append(QCoreApplication::translate('RDM', 'Cannot copy key ') +
                      QString('%1: %2').arg(k).arg(err));
    };
  };
    
      virtual void deleteDbKeys(ConnectionsTree::DatabaseItem& db) override;
    
    class AbstractOperation : public QObject {
  Q_OBJECT
    }