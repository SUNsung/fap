
        
        
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    public:
    explicit TransactionDescDialog(const QModelIndex &idx, QWidget *parent = 0);
    ~TransactionDescDialog();
    
    /* These points can be generated in sage as follows:
 *
 * 0. Setup a worksheet with the following parameters.
 *   b = 4  # whatever CURVE_B will be set to
 *   F = FiniteField (0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFC2F)
 *   C = EllipticCurve ([F (0), F (b)])
 *
 * 1. Determine all the small orders available to you. (If there are
 *    no satisfactory ones, go back and change b.)
 *   print C.order().factor(limit=1000)
 *
 * 2. Choose an order as one of the prime factors listed in the above step.
 *    (You can also multiply some to get a composite order, though the
 *    tests will crash trying to invert scalars during signing.) We take a
 *    random point and scale it to drop its order to the desired value.
 *    There is some probability this won't work; just try again.
 *   order = 199
 *   P = C.random_point()
 *   P = (int(P.order()) / int(order)) * P
 *   assert(P.order() == order)
 *
 * 3. Print the values. You'll need to use a vim macro or something to
 *    split the hex output into 4-byte chunks.
 *   print '%x %x' % P.xy()
 */
#if defined(EXHAUSTIVE_TEST_ORDER)
#  if EXHAUSTIVE_TEST_ORDER == 199
const secp256k1_ge secp256k1_ge_const_g = SECP256K1_GE_CONST(
    0xFA7CC9A7, 0x0737F2DB, 0xA749DD39, 0x2B4FB069,
    0x3B017A7D, 0xA808C2F1, 0xFB12940C, 0x9EA66C18,
    0x78AC123A, 0x5ED8AEF3, 0x8732BC91, 0x1F3A2868,
    0x48DF246C, 0x808DAE72, 0xCFE52572, 0x7F0501ED
);
    
    static void secp256k1_hmac_sha256_initialize(secp256k1_hmac_sha256_t *hash, const unsigned char *key, size_t keylen) {
    int n;
    unsigned char rkey[64];
    if (keylen <= 64) {
        memcpy(rkey, key, keylen);
        memset(rkey + keylen, 0, 64 - keylen);
    } else {
        secp256k1_sha256_t sha256;
        secp256k1_sha256_initialize(&sha256);
        secp256k1_sha256_write(&sha256, key, keylen);
        secp256k1_sha256_finalize(&sha256, rkey);
        memset(rkey + 32, 0, 32);
    }
    }
    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
    
std::pair<std::string, std::string> SplitTorReplyLine(const std::string& s);
std::map<std::string, std::string> ParseTorReplyMapping(const std::string& s);
    
    const std::vector<UniValue>& UniValue::getValues() const
{
    if (typ != VOBJ && typ != VARR)
        throw std::runtime_error('JSON value is not an object or array as expected');
    return values;
}
    
      bool ShapeEquals(const BlobProto& other);
    
      virtual inline const char* type() const { return 'AbsVal'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      virtual inline const char* type() const { return 'BatchNorm'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    namespace caffe {
    }
    
    template <typename Dtype>
class CropLayer : public Layer<Dtype> {
 public:
  explicit CropLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
};
#endif
    
    template <class Context>
class ExtendTensorOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  ExtendTensorOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws),
        growthPct_(OperatorBase::GetSingleArgument<int>('growthPct', 40)) {}
    }
    
      auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    ```
    
      for (auto& t : workers) t.join();
    
    /*
 * Perform a block-local optimization that folds sequences of Concat opcodes
 * into ConcatN opcodes.
 */
struct ConcatPeephole {
  explicit ConcatPeephole(BasicPeephole next)
    : m_next(next)
  {}
  ConcatPeephole(ConcatPeephole&&) = default;
  ConcatPeephole& operator=(const ConcatPeephole&) = delete;
    }
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    int execute_program(int argc, char **argv);
    
    namespace HPHP {
    }
    
    #define ERROR_RAISE_WARNING(exp)        \
  int ret = (exp);                      \
  if (ret != 0) {                       \
    raise_warning(                      \
      '%s(): %s',                       \
      __FUNCTION__,                     \
      folly::errnoStr(errno).c_str()    \
    );                                  \
  }                                     \
    
    #include 'hphp/runtime/base/file-util.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
#include 'hphp/runtime/base/unit-cache.h'
#include 'hphp/runtime/ext/std/ext_std_file.h'
#include 'hphp/util/logger.h'
    
    
    {  strcpy(path_end, to_start);
  return ret.setSize(strlen(path));
}
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::parse_perl_verb()
{
   if(++m_position == m_end)
   {
      // Rewind to start of (* sequence:
      --m_position;
      while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
      fail(regex_constants::error_perl_extension, m_position - m_base);
      return false;
   }
   switch(*m_position)
   {
   case 'F':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if((this->m_traits.syntax_type(*m_position) == regex_constants::syntax_close_mark) || match_verb('AIL'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         this->append_state(syntax_element_fail);
         return true;
      }
      break;
   case 'A':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('CCEPT'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         this->append_state(syntax_element_accept);
         return true;
      }
      break;
   case 'C':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('OMMIT'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         static_cast<re_commit*>(this->append_state(syntax_element_commit, sizeof(re_commit)))->action = commit_commit;
         this->m_pdata->m_disable_match_any = true;
         return true;
      }
      break;
   case 'P':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('RUNE'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         static_cast<re_commit*>(this->append_state(syntax_element_commit, sizeof(re_commit)))->action = commit_prune;
         this->m_pdata->m_disable_match_any = true;
         return true;
      }
      break;
   case 'S':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('KIP'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         static_cast<re_commit*>(this->append_state(syntax_element_commit, sizeof(re_commit)))->action = commit_skip;
         this->m_pdata->m_disable_match_any = true;
         return true;
      }
      break;
   case 'T':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('HEN'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         this->append_state(syntax_element_then);
         this->m_pdata->m_disable_match_any = true;
         return true;
      }
      break;
   }
   return false;
}
    
    #ifdef __cplusplus
namespace boost{
   namespace regex_constants{
#endif
    }
    }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_slow()
{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4127)
#endif
   unsigned count = 0;
   const re_repeat* rep = static_cast<const re_repeat*>(pstate);
   re_syntax_base* psingle = rep->next.p;
   // match compulsary repeats first:
   while(count < rep->min)
   {
      pstate = psingle;
      if(!match_wild())
         return false;
      ++count;
   }
   bool greedy = (rep->greedy) && (!(m_match_flags & regex_constants::match_any) || m_independent);   
   if(greedy)
   {
      // normal repeat:
      while(count < rep->max)
      {
         pstate = psingle;
         if(!match_wild())
            break;
         ++count;
      }
      if((rep->leading) && (count < rep->max))
         restart = position;
      pstate = rep;
      return backtrack_till_match(count - rep->min);
   }
   else
   {
      // non-greedy, keep trying till we get a match:
      BidiIterator save_pos;
      do
      {
         if((rep->leading) && (rep->max == UINT_MAX))
            restart = position;
         pstate = rep->alt.p;
         save_pos = position;
         ++state_count;
         if(match_all_states())
            return true;
         if((count >= rep->max) || !m_can_backtrack)
            return false;
         ++count;
         pstate = psingle;
         position = save_pos;
         if(!match_wild())
            return false;
      }while(true);
   }
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    //
// struct trivial_format_traits:
// defines minimum localisation support for formatting
// in the case that the actual regex traits is unavailable.
//
template <class charT>
struct trivial_format_traits
{
   typedef charT char_type;
    }
    
    typedef basic_regex<char, regex_traits<char> > regex;
#ifndef BOOST_NO_WREGEX
typedef basic_regex<wchar_t, regex_traits<wchar_t> > wregex;
#endif
    
    
    
       void BOOST_REGEX_CALL clear()
   {
      end = start;
   }
    
         */
    bool initWithTargetAndOffset(Node *followedNode,float xOffset,float yOffset,const Rect& rect = Rect::ZERO);
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    CardinalSplineTo::CardinalSplineTo()
: _points(nullptr)
, _deltaT(0.f)
, _tension(0.f)
{
}
    
        if (action)
    {
        if (action->initWithDuration(duration, gridSize, waves, amplitude))
        {
            action->autorelease();
        }
        else
        {
            CC_SAFE_RELEASE_NULL(action);
        }
    }
    
        /** @deprecated Use getNumberOfRunningActionsInTarget() instead.
     */
    CC_DEPRECATED_ATTRIBUTE ssize_t numberOfRunningActionsInTarget(Node *target) const { return getNumberOfRunningActionsInTarget(target); }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
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
    
    #include <string>
#include <vector>
#include 'esd_can/include/ntcan.h'
#include 'gflags/gflags.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    ErrorCode FakeCanClient::Start() { return ErrorCode::OK; }
    
    /**
 * @class SocketCanClientRaw
 * @brief The class which defines a ESD CAN client which inherites CanClient.
 */
class SocketCanClientRaw : public CanClient {
 public:
  /**
   * @brief Initialize the ESD CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &parameter) override;
    }
    
    #include <vector>
    
    #include <memory>
#include <mutex>
#include <set>
#include <thread>
#include <unordered_map>
#include <vector>
#include <condition_variable>
    
    const uint8_t BIT_MASK_1[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
const uint8_t BIT_MASK_0[] = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};
const uint8_t RANG_MASK_1_L[] = {0x01, 0x03, 0x07, 0x0F,
                                 0x1F, 0x3F, 0x7F, 0xFF};
const uint8_t RANG_MASK_0_L[] = {0xFE, 0XFC, 0xF8, 0xF0,
                                 0xE0, 0xC0, 0x80, 0x00};
    
    // data file
DEFINE_string(sensor_conf_file, '', 'Sensor conf file');