
        
          // Convert input tensor-as-shape values;
  std::vector<TensorShapeProto> input_tensor_as_shapes_protos(
      input_constant_tensor_as_shape_values.size());
  for (int i = 0; i < input_constant_tensor_as_shape_values.size(); ++i) {
    if (!input_tensor_as_shapes_protos[i].ParseFromString(
            input_constant_tensor_as_shape_values[i])) {
      return errors::InvalidArgument(
          'Error parsing shape proto during cpp shape inference');
    }
  }
    
    
    {
    {}  // namespace swig
}  // namespace tensorflow
    
    REGISTER_OP('ShapelessOp');
    
    void ModelAnalyzer::PrintNodeInfo(const NodeDef* node,
                                  const GraphProperties& properties, bool debug,
                                  std::ostream& os) const {
  os << node->name() << ' [' << node->op() << ']' << std::endl;
  if (properties.HasOutputProperties(node->name())) {
    const std::vector<OpInfo::TensorProperties>& props =
        properties.GetOutputProperties(node->name());
    for (int i = 0; i < props.size(); ++i) {
      const OpInfo::TensorProperties& prop = props[i];
      os << '\t'
         << 'output ' << i << ' (' << DataTypeString(prop.dtype())
         << ') has shape ';
      if (prop.shape().unknown_rank()) {
        os << '?';
      } else {
        os << '[';
        for (int i = 0; i < prop.shape().dim_size(); ++i) {
          if (i > 0) {
            os << ', ';
          }
          if (prop.shape().dim(i).size() >= 0) {
            // Print the actual dimension.
            os << prop.shape().dim(i).size();
          } else if (prop.shape().dim(i).size() == -1) {
            // We don't know anything about the dimension.
            os << '?';
          } else {
            // Symbolic dimension.
            os << 'x' << -prop.shape().dim(i).size();
          }
        }
        os << ']';
      }
      os << std::endl;
    }
  }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Creates a numpy array in 'ret' which either aliases the content of 't' or has
// a copy.
Status TensorToNdarray(const Tensor& t, PyObject** ret);
    
    
    {}  // namespace tensorflow

    
      // Returns the Python exception type corresponding to `code`. Init() must be
  // called before using this function. `code` should not be TF_OK.
  static PyObject* Lookup(TF_Code code);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // Synchronize with spinlocks.
  static const unsigned kScheduleSpin = 0x02;
  // Synchronize with spinlocks that also call CPU yield instructions.
  static const unsigned kScheduleYield = 0x04;
  // Synchronize with a 'synchronization primitive' (e.g. mutex).
  static const unsigned kScheduleBlockingSync = 0x08;
    
      // Acquire the per-Entry mutex without holding the map mutex. Initializing
  // an Executor may be expensive, so we want to allow concurrent
  // initialization of different entries.
  mutex_lock lock{entry->configurations_mutex};
  for (const auto& iter : entry->configurations) {
    if (iter.first.plugin_config == config.plugin_config &&
        iter.first.device_options == config.device_options) {
      VLOG(2) << 'hit in cache';
      return iter.second.get();
    }
  }
    
    U_NAMESPACE_END
    
    CollationElementIterator *
RuleBasedCollator::createCollationElementIterator(const UnicodeString& source) const {
    UErrorCode errorCode = U_ZERO_ERROR;
    if(!initMaxExpansions(errorCode)) { return NULL; }
    CollationElementIterator *cei = new CollationElementIterator(source, this, errorCode);
    if(U_FAILURE(errorCode)) {
        delete cei;
        return NULL;
    }
    return cei;
}
    
    void SearchIterator::reset()
{
    UErrorCode status = U_ZERO_ERROR;
    setMatchNotFound();
    setOffset(0, status);
    m_search_->isOverlap          = FALSE;
    m_search_->isCanonicalMatch   = FALSE;
    m_search_->elementComparisonType = 0;
    m_search_->isForwardSearching = TRUE;
    m_search_->reset              = TRUE;
}
    
    U_NAMESPACE_BEGIN
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
            if (getBooleanAttribute(UDAT_PARSE_MULTIPLE_PATTERNS_FOR_MATCH, status) || count == 3) {
            if ((newStart = matchDayPeriodStrings(text, start, fSymbols->fAbbreviatedDayPeriods,
                                fSymbols->fAbbreviatedDayPeriodsCount, *dayPeriod)) > 0) {
                return newStart;
            }
        }
        if (getBooleanAttribute(UDAT_PARSE_MULTIPLE_PATTERNS_FOR_MATCH, status) || count == 5) {
            if ((newStart = matchDayPeriodStrings(text, start, fSymbols->fNarrowDayPeriods,
                                fSymbols->fNarrowDayPeriodsCount, *dayPeriod)) > 0) {
                return newStart;
            }
        }
        if (getBooleanAttribute(UDAT_PARSE_MULTIPLE_PATTERNS_FOR_MATCH, status) || count == 4) {
            if ((newStart = matchDayPeriodStrings(text, start, fSymbols->fWideDayPeriods,
                                fSymbols->fWideDayPeriodsCount, *dayPeriod)) > 0) {
                return newStart;
            }
        }
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    #include 'unicode/utypes.h'
    
        /**
     * Returns a string representation of this replacer.  If the
     * result of calling this function is passed to the appropriate
     * parser, typically TransliteratorParser, it will produce another
     * replacer that is equal to this one.
     * @param result the string to receive the pattern.  Previous
     * contents will be deleted.
     * @param escapeUnprintable if TRUE then convert unprintable
     * character to their hex escape representations, \\uxxxx or
     * \\Uxxxxxxxx.  Unprintable characters are defined by
     * Utility.isUnprintable().
     * @return a reference to 'result'.
     */
    virtual UnicodeString& toReplacerPattern(UnicodeString& result,
                                             UBool escapeUnprintable) const;
    
            // The temporary buffer starts at tempStart, and extends
        // to destLimit.  The start of the buffer has a single
        // character from before the key.  This provides style
        // data when addition characters are filled into the
        // temporary buffer.  If there is nothing to the left, use
        // the non-character U+FFFF, which Replaceable subclasses
        // should treat specially as a 'no-style character.'
        // destStart points to the point after the style context
        // character, so it is tempStart+1 or tempStart+2.
        int32_t tempStart = text.length(); // start of temp buffer
        int32_t destStart = tempStart; // copy new text to here
        if (start > 0) {
            int32_t len = U16_LENGTH(text.char32At(start-1));
            text.copy(start-len, start, tempStart);
            destStart += len;
        } else {
            UnicodeString str((UChar) 0xFFFF);
            text.handleReplaceBetween(tempStart, tempStart, str);
            destStart++;
        }
        int32_t destLimit = destStart;
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    CardinalSplineTo* CardinalSplineTo::create(float duration, PointArray *points, float tension)
{
    CardinalSplineTo *ret = new (std::nothrow) CardinalSplineTo();
    if (ret)
    {
        if (ret->initWithDuration(duration, points, tension))
        {
            ret->autorelease();
        }
        else 
        {
            CC_SAFE_RELEASE_NULL(ret);
        }
    }
    }
    
        /** 
     * Initializes the action with a duration and an array of points.
     *
     * @param duration In seconds.
     * @param points An PointArray.
     * @param tension Goodness of fit.
     */
    bool initWithDuration(float duration, PointArray* points, float tension);
    /** It will update the target position and change the _previousPosition to newPos
     *
     * @param newPos The new position.
     */
    virtual void updatePosition(const Vec2 &newPos);
    /** Return a PointArray.
     *
     * @return A PointArray.
     */
    PointArray* getPoints() { return _points; }
    /**
     * @js NA
     * @lua NA
     */
    void setPoints(PointArray* points)
    {
        CC_SAFE_RETAIN(points);
        CC_SAFE_RELEASE(_points);
        _points = points;
    }
    
    //
// Show
//
    
        /** 
     * initializes the action 
     * @param duration in seconds
     */
    bool initWithDuration(float duration, int blinks);
    
protected:
    int _times;
    bool _originalState;
    
    // FIXME: Passing 'const O *' instead of 'const O&' because HASH_FIND_IT requires the address of a pointer
// and, it is not possible to get the address of a reference
size_t ActionManager::getNumberOfRunningActionsInTargetByTag(const Node *target,
                                                             int tag)
{
    CCASSERT(tag != Action::INVALID_TAG, 'Invalid tag value!');
    }
    
        _tilesCount = _gridSize.width * _gridSize.height;
    _tilesOrder = new unsigned int[_tilesCount];
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCAnimation.h'
#include 'renderer/CCTextureCache.h'
#include 'renderer/CCTexture2D.h'
#include 'base/CCDirector.h'
    
    ssize_t AtlasNode::getQuadsToDraw() const
{
    return _quadsToDraw;
}
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
    using namespace std;
    
    #include <iostream>
#include <vector>
#include <stack>
    
            vector<vector<int>> res;
        if(root == NULL)
            return res;
    
    
int main() {
    }
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};