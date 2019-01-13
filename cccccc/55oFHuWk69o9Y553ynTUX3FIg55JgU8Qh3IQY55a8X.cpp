// Max number of scripts in ICU + 'NULL' + Japanese and Korean + Fraktur
const int kMaxNumberOfScripts = 116 + 1 + 2 + 1;
    
    /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
      STRING lword_text;   // the UTF-8 text of the leftmost werd
  STRING rword_text;   // the UTF-8 text of the rightmost werd
    
    #include 'blread.h'
#include <cstdio>       // for fclose, fopen, FILE
#include 'host.h'       // for TRUE
#include 'ocrblock.h'   // for BLOCK_IT, BLOCK, BLOCK_LIST (ptr only)
#include 'scanutils.h'  // for tfscanf
    
      // This and other putatively are the same, so call the (permanent) callback
  // for each blob index where the bounding boxes match.
  // The callback is deleted on completion.
  void ProcessMatchedBlobs(const TWERD& other, TessCallback1<int>* cb) const;
    
    TEST_P(DerivedTest, DoesBlah) {
  // GetParam works just the same here as if you inherit from TestWithParam.
  EXPECT_TRUE(foo.Blah(GetParam()));
}
    
      template <GTEST_9_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_9_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    f6_ = t.f6_;
    f7_ = t.f7_;
    f8_ = t.f8_;
    return *this;
  }
    
    #include <osquery/config/config.h>
#include <osquery/database.h>
    
    
    {REGISTER_INTERNAL(EventsConfigParserPlugin, 'config_parser', 'events');
}

    
    #pragma once
    
    TEST_F(EventsConfigParserPluginTests, test_get_event) {
  // Reset the schedule in case other tests were modifying.
  auto& c = Config::get();
  c.reset();
    }
    
      size_t numFiles() {
    size_t count = 0;
    Config::get().files(([&count](
        const std::string&, const std::vector<std::string>&) { count++; }));
    return count;
  }
    
      fpack.platform_ = '';
  EXPECT_TRUE(fpack.checkPlatform());
    
    #include 'db/write_controller.h'
    
    
    {
    {}  // namespace experimental
}  // namespace rocksdb

    
    // FlushBlockPolicy provides a configurable way to determine when to flush a
// block in the block based tables,
class FlushBlockPolicy {
 public:
  // Keep track of the key/value sequences and return the boolean value to
  // determine if table builder should flush current data block.
  virtual bool Update(const Slice& key,
                      const Slice& value) = 0;
    }
    
    #include <stdint.h>
#include <string>