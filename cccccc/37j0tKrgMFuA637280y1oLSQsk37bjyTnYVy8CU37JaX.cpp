
        
          // Gets the outcome of the test part.
  Type type() const { return type_; }
    
    
    { private:
  // The key supplied by the user.
  std::string key_;
  // The value supplied by the user.
  std::string value_;
};
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED5.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4,
          typename T5>
AssertionResult AssertPred5Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  const char* e3,
                                  const char* e4,
                                  const char* e5,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2,
                                  const T3& v3,
                                  const T4& v4,
                                  const T5& v5) {
  if (pred(v1, v2, v3, v4, v5)) return AssertionSuccess();
    }
    
    // Constructs and returns the message for an equality assertion
// (e.g. ASSERT_EQ, EXPECT_STREQ, etc) failure.
//
// The first four parameters are the expressions used in the assertion
// and their values, as strings.  For example, for ASSERT_EQ(foo, bar)
// where foo is 5 and bar is 6, we have:
//
//   expected_expression: 'foo'
//   actual_expression:   'bar'
//   expected_value:      '5'
//   actual_value:        '6'
//
// The ignoring_case parameter is true iff the assertion is a
// *_STRCASEEQ*.  When it's true, the string ' (ignoring case)' will
// be inserted into the message.
GTEST_API_ AssertionResult EqFailure(const char* expected_expression,
                                     const char* actual_expression,
                                     const std::string& expected_value,
                                     const std::string& actual_value,
                                     bool ignoring_case);
    
        void ComputeCurrentValue() {
      if (!AtEnd())
        current_value_ = ParamType(*current1_, *current2_, *current3_,
            *current4_);
    }
    bool AtEnd() const {
      // We must report iterator past the end of the range when either of the
      // component iterators has reached the end of its range.
      return
          current1_ == end1_ ||
          current2_ == end2_ ||
          current3_ == end3_ ||
          current4_ == end4_;
    }
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
    #include 'gtest/gtest.h'
    
            virtual const std::unordered_set<StreamInformation>& StreamInfos() override { return m_streamInfos; }
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    // -----------------------------------------------------------------------
// SumColumnElements (input)
// Sums up all elements in each sample (column) of the input. Every sample
// will be reduced to a scalar. This is equivalent to multiplying with a row of ones.
// This is deprecated, in favor of ReduceElements().
// -----------------------------------------------------------------------
    
    // -----------------------------------------------------------------------
// SequenceDecoderNode (label, position_dependent_score, transition_score)
// Decoder that matches CRF training.
//  - label : output label vector of [0:T-1]
//  - position_dependent_score : score from position dependent node,
//    in the R-CRF case, it is the RNN output score before softmax
//  - transition score : score from the transition node,
//    in the R-CRF case, it is the transition probability between labels
// -----------------------------------------------------------------------
    
    Waves3D* Waves3D::clone() const
{
    // no copy constructor
    return Waves3D::create(_duration, _gridSize, _waves, _amplitude);
}
    
    NS_CC_END
    
                coords.bl.z = (sinf(time * (float)M_PI  *_waves * 2 + 
                (coords.bl.y+coords.bl.x) * .01f) * _amplitude * _amplitudeRate );
            coords.br.z    = coords.bl.z;
            coords.tl.z = coords.bl.z;
            coords.tr.z = coords.bl.z;
    
    http://www.cocos2d-x.org
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CC_ANIMATION_H__
#define __CC_ANIMATION_H__
    
    
NS_CC_END

    
    
    {private:
    Map<std::string, Animation*> _animations;
    static AnimationCache* s_sharedAnimationCache;
};