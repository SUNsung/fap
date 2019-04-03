
        
        SILLayout::SILLayout(CanGenericSignature Sig,
                     ArrayRef<SILField> Fields)
  : GenericSigAndFlags(Sig, getFlagsValue(anyMutable(Fields))),
    NumFields(Fields.size())
{
#ifndef NDEBUG
  verifyFields(Sig, Fields);
#endif
  auto FieldsMem = getTrailingObjects<SILField>();
  for (unsigned i : indices(Fields)) {
    new (FieldsMem + i) SILField(Fields[i]);
  }
}
    
        if (node->Further || node->Right) {
      IndentScope ms(this, (childKind == ChildKind::Right ||
                            childKind == ChildKind::Further ||
                            childKind == ChildKind::Root) ? '  ' : '| ');
    }
    
      while (!RawText.empty()) {
    size_t Pos = RawText.find_first_of('\n\r');
    if (Pos == StringRef::npos)
      Pos = RawText.size();
    }
    
    std::string Mangle::translateOperator(StringRef Op) {
  std::string Encoded;
  for (char ch : Op) {
    Encoded.push_back(translateOperatorChar(ch));
  }
  return Encoded;
}
    
    
    {  // -- Build the decoded string as UTF32 first because we need random access.
  uint32_t n = initial_n;
  int i = 0;
  int bias = initial_bias;
  /// let output = an empty string indexed from 0
  // consume all code points before the last delimiter (if there is one)
  //  and copy them to output,
  size_t lastDelimiter = InputPunycode.find_last_of(delimiter);
  if (lastDelimiter != StringRef::npos) {
    for (char c : InputPunycode.slice(0, lastDelimiter)) {
      // fail on any non-basic code point
      if (static_cast<unsigned char>(c) > 0x7f)
        return true;
      OutCodePoints.push_back(c);
    }
    // if more than zero code points were consumed then consume one more
    //  (which will be the last delimiter)
    InputPunycode =
        InputPunycode.slice(lastDelimiter + 1, InputPunycode.size());
  }
  
  while (!InputPunycode.empty()) {
    int oldi = i;
    int w = 1;
    for (int k = base; ; k += base) {
      // consume a code point, or fail if there was none to consume
      if (InputPunycode.empty())
        return true;
      char codePoint = InputPunycode.front();
      InputPunycode = InputPunycode.slice(1, InputPunycode.size());
      // let digit = the code point's digit-value, fail if it has none
      int digit = digit_index(codePoint);
      if (digit < 0)
        return true;
      
      i = i + digit * w;
      int t = k <= bias ? tmin
            : k >= bias + tmax ? tmax
            : k - bias;
      if (digit < t)
        break;
      w = w * (base - t);
    }
    bias = adapt(i - oldi, OutCodePoints.size() + 1, oldi == 0);
    n = n + i / (OutCodePoints.size() + 1);
    i = i % (OutCodePoints.size() + 1);
    // if n is a basic code point then fail
    if (n < 0x80)
      return true;
    // insert n into output at position i
    OutCodePoints.insert(OutCodePoints.begin() + i, n);
    i++;
  }
  
  return true;
}
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
    
    {private:
    int nextDifferentCharacterIndex(const vector<int> &nums, int p){
        for( ; p < nums.size() ; p ++ )
            if( nums[p] != nums[p - 1] )
                break;
        return p;
    }
};
    
    // Recursive
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    }
    
    using namespace std;
    
    class IExpressionCommand
{
public:
    virtual CalculationManager::CommandType GetCommandType() const = 0;
    virtual void Accept(_In_ ISerializeCommandVisitor &commandVisitor) = 0;
};
    
    // vvv THESE CONSTANTS SHOULD NEVER CHANGE vvv
static constexpr int STANDARD_ID    = 0;
static constexpr int SCIENTIFIC_ID  = 1;
static constexpr int PROGRAMMER_ID  = 2;
static constexpr int DATE_ID        = 3;
static constexpr int VOLUME_ID      = 4;
static constexpr int LENGTH_ID      = 5;
static constexpr int WEIGHT_ID      = 6;
static constexpr int TEMPERATURE_ID = 7;
static constexpr int ENERGY_ID      = 8;
static constexpr int AREA_ID        = 9;
static constexpr int SPEED_ID       = 10;
static constexpr int TIME_ID        = 11;
static constexpr int POWER_ID       = 12;
static constexpr int DATA_ID        = 13;
static constexpr int PRESSURE_ID    = 14;
static constexpr int ANGLE_ID       = 15;
static constexpr int CURRENCY_ID    = 16;
// ^^^ THESE CONSTANTS SHOULD NEVER CHANGE ^^^
    
        const auto& localizationSettings = LocalizationSettings::GetInstance();
    wchar_t ch0 = localizationSettings.GetDigitSymbolFromEnUsDigit('0');
    wchar_t ch1 = localizationSettings.GetDigitSymbolFromEnUsDigit('1');
    
    #include 'Views/CalculatorProgrammerOperators.g.h'
#include 'Controls/RadixButton.h'
#include 'CalcViewModel/StandardCalculatorViewModel.h'
    
    #include 'Converters/BooleanNegationConverter.h'
#include 'Converters/VisibilityNegationConverter.h'
#include 'Views/DateCalculator.g.h'
    
    namespace CalculatorApp
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class Memory sealed
    {
    public:
        Memory();
        property CalculatorApp::ViewModel::StandardCalculatorViewModel^ Model
        {
            CalculatorApp::ViewModel::StandardCalculatorViewModel^ get() {
                return static_cast<CalculatorApp::ViewModel::StandardCalculatorViewModel^>(this->DataContext);
            }
        }
    }
    }
    
    #endif //__CCCAMERA_ACTION_H__

    
        /**
    @brief Initializes the action with center position, radius, number of waves, amplitude, a grid size and duration.
    @param duration Specify the duration of the Ripple3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param position Specify the center position of the ripple effect.
    @param radius Specify the radius of the ripple effect.
    @param waves Specify the waves count of the ripple effect.
    @param amplitude Specify the amplitude of the ripple effect.
    @return If the initialization success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, const Size& gridSize, const Vec2& position, float radius, unsigned int waves, float amplitude);
    
    void CallFunc::update(float time)
{
    ActionInstant::update(time);
    this->execute();
}
    
    
    {
    {
    {            if (action->getTag() == (int)tag && action->getOriginalTarget() == target)
            {
                removeActionAtIndex(i, element);
                break;
            }
        }
    }
}
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
        // Override
    virtual ShatteredTiles3D* clone() const override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ShatteredTiles3D() {}
    virtual ~ShatteredTiles3D() {}
    
        // Overrides
    void startWithTarget(Node *target) override;
    void update(float dt) override;
    ActionTween* reverse() const override;
    ActionTween *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    /** 
     * @brief Initializes the action with the property name (key), and the from and to parameters.
     * @param duration The duration of the ActionTween. It's a value in seconds.
     * @param key The key of property which should be updated.
     * @param from The value of the specified property when the action begin.
     * @param to The value of the specified property when the action end.
     * @return If the initialization success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, const std::string& key, float from, float to);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CC_ANIMATION_CACHE_H__
#define __CC_ANIMATION_CACHE_H__