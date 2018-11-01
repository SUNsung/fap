
        
          // Rounds the size up to a multiple of the input register size (in int8_t).
  int RoundInputs(int size) const {
    return Roundup(size, num_inputs_per_register_);
  }
  // Rounds the size up to a multiple of the output register size (in int32_t).
  int RoundOutputs(int size) const {
    return Roundup(size, num_outputs_per_register_);
  }
    
    // Helper method to convert an orientation index to its value in degrees.
// The value represents the amount of clockwise rotation in degrees that must be
// applied for the text to be upright (readable).
TESS_API int OrientationIdToValue(const int& id);
    
      /**
   * Page/ResultIterators may be copied! This makes it possible to iterate over
   * all the objects at a lower level, while maintaining an iterator to
   * objects at a higher level. These constructors DO NOT CALL Begin, so
   * iterations will continue from the location of src.
   */
  PageIterator(const PageIterator& src);
  const PageIterator& operator=(const PageIterator& src);
    
    namespace tesseract {
    }
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    #include 'elst.h'        // for ELIST_ITERATOR, ELISTIZEH, ELIST_LINK
#include 'scrollview.h'  // for ScrollView (ptr only), SVEvent (ptr only)
#include 'strngs.h'      // for STRING
    
    
/**********************************************************************
 * recog_word_recursive
 *
 * Convert the word to tess form and pass it to the tess segmenter.
 * Convert the output back to editor form.
 **********************************************************************/
void Tesseract::recog_word_recursive(WERD_RES *word) {
  int word_length = word->chopped_word->NumBlobs();  // no of blobs
  if (word_length > MAX_UNDIVIDED_LENGTH) {
    return split_and_recog_word(word);
  }
  cc_recog(word);
  word_length = word->rebuild_word->NumBlobs();  // No of blobs in output.
    }
    
      AuthPropertyIterator begin() const override;
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
    #include <grpc/support/port_platform.h>
    
    #include <unordered_set>
#include <vector>
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    #ifndef GRPC_CUSTOM_DEFAULT_THREAD_POOL
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    /** @class RemoveSelf
* @brief Remove the node.
*/
class CC_DLL RemoveSelf : public ActionInstant
{
public:
    /** Create the action.
     *
     * @param isNeedCleanUp Is need to clean up, the default value is true.
     * @return An autoreleased RemoveSelf object.
     */
    static RemoveSelf * create(bool isNeedCleanUp = true);
    }
    
    /**
@brief Progress to percentage.
@details This action show the target node from current percentage to the specified percentage.
        You should specify the destination percentage when creating the action.
@since v0.99.1
*/
class CC_DLL ProgressTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes with a duration and a destination percentage.
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressTo action; otherwise, return nil.
     */
    static ProgressTo* create(float duration, float percent);
    }
    
     @code
     // scaleA and scaleB are equivalents
     auto scaleA = ScaleTo::create(2, 3);                 // (duration, to)
     auto scaleB = ActionTween::create(2, 'scale', 1, 3); // (duration, key, from, to)
 @endcode
    
        /** Adds an animation from an NSDictionary.
     * Make sure that the frames were previously loaded in the SpriteFrameCache.
     * @param dictionary An NSDictionary.
     * @param plist The path of the relative file,it use to find the plist path for load SpriteFrames.
     * @since v1.1
	 @js NA
     */
    void addAnimationsWithDictionary(const ValueMap& dictionary,const std::string& plist);
    
    AtlasNode::AtlasNode()
: _itemsPerRow(0)
, _itemsPerColumn(0)
, _itemWidth(0)
, _itemHeight(0)
, _textureAtlas(nullptr)
, _isOpacityModifyRGB(false)
, _quadsToDraw(0)
, _uniformColor(0)
, _ignoreContentScaleFactor(false)
{
}
    
    http://www.cocos2d-x.org