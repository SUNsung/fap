
        
          // Convert input tensor values;
  std::vector<Tensor> input_tensor_values(input_constant_tensor_values.size());
  std::vector<const Tensor*> input_tensors;
  for (int i = 0; i < input_constant_tensor_values.size(); ++i) {
    auto* py_val = input_constant_tensor_values[i];
    if (py_val == Py_None) {
      input_tensors.push_back(nullptr);
    } else {
      TF_RETURN_IF_ERROR(
          ConvertNdarrayToTensor(py_val, &input_tensor_values[i]));
      input_tensors.push_back(&input_tensor_values[i]);
    }
  }
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/core/framework/api_def.pb.h'
#include 'tensorflow/core/framework/attr_value.pb.h'
#include 'tensorflow/core/framework/op_def.pb.h'
#include 'tensorflow/core/platform/types.h'
    
      for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // A wrapper around io::RecordReader that is more easily SWIG wrapped for
// Python.  An instance of this class is not safe for concurrent access
// by multiple threads.
class PyRecordReader {
 public:
  // TODO(vrv): make this take a shared proto to configure
  // the compression options.
  static PyRecordReader* New(const string& filename, uint64 start_offset,
                             const string& compression_type_string,
                             TF_Status* out_status);
    }
    
    #include 'tensorflow/stream_executor/platform/port.h'
    
    
    {  DefaultCacheKey CKey(const_cast<void*>(Key), &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    // FIXME: Not thread-safe! It should avoid deleting the value until
    // 'releaseValue is called on it.
    *Value_out = Entry->second;
    return true;
  }
  return false;
}
    
    class TreePrinter {
  llvm::raw_ostream &Out;
  void (&PrintNodeData)(llvm::raw_ostream &out, void *node);
  SmallString<40> Indent;
public:
  TreePrinter(llvm::raw_ostream &out,
              void (&printNodeData)(llvm::raw_ostream &out, void *node))
    : Out(out), PrintNodeData(printNodeData) {}
    }
    
    // DummyTaskQueue implementation
    
    swift::UUID::UUID(FromRandom_t) {
#if defined(_WIN32)
  ::UUID uuid;
  ::CoCreateGuid(&uuid);
    }
    
      const llvm::UTF8 *SourceNext = SourceStart;
  llvm::UTF32 C;
  llvm::UTF32 *TargetStart = &C;
    
      bool isConst() const { return IsConst; }
    
        void div(const Size2D &size,
             const u16 * src0Base, ptrdiff_t src0Stride,
             const u16 * src1Base, ptrdiff_t src1Stride,
             u16 * dstBase, ptrdiff_t dstStride,
             f32 scale,
             CONVERT_POLICY cpolicy);
    
        s32* laneb = internal::alignPtr(laneA + cn * (size.width + 2), 32);
    s32* laneB = internal::alignPtr(laneb + cn * (size.width + 2), 32);
    
                v_src0 = internal::vld1q(src0 + x);
            v_src1 = internal::vld1q(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1q(dst + x, v_dst);
            x+=16;
        }
        if( x + 8 < width)
        {
            vec64  v_src0, v_src1;
            uvec64 v_dst;
    
            int16x8_t buv = (int16x8_t)vmlsl_u8(convertYUV420Internals.vc17672, raw_uv.val[1-vIdx], convertYUV420Internals.vc129); //(17672-129*u)
        int16x8_t guv = (int16x8_t)vmlsl_u8(gu,      raw_uv.val[vIdx], convertYUV420Internals.vc52);  //((8696-25*u)-52*v))
    
                    d &= tab[ptr[pixel[1]]] | tab[ptr[pixel[9]]];
                d &= tab[ptr[pixel[3]]] | tab[ptr[pixel[11]]];
                d &= tab[ptr[pixel[5]]] | tab[ptr[pixel[13]]];
                d &= tab[ptr[pixel[7]]] | tab[ptr[pixel[15]]];
    
        if (func == NULL)
        return;
    
    // table lookup with the table in a 128-bit register
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
    namespace caffe2 {
namespace {
    }
    }
    
    #include 'caffe2/operators/glu_op.h'
    
    
    {          return out;
        });
OPERATOR_SCHEMA(Float16ConstantFill)
    .NumInputs(0)
    .NumOutputs(1)
    .TensorInferenceFunction(Float16FillerTensorInference)
    .Arg('value', 'The value for the elements of the output tensor.')
    .Arg('shape', 'The shape of the output tensor.')
    .Output(
        0,
        'output',
        'Output tensor of constant values specified by 'value'');
    
       static size_type length(const char_type* p) 
   { 
      return (std::wcslen)(p); 
   }
    
    typedef enum _match_flags
{
   match_default = 0,
   match_not_bol = 1,                                /* first is not start of line */
   match_not_eol = match_not_bol << 1,               /* last is not end of line */
   match_not_bob = match_not_eol << 1,               /* first is not start of buffer */
   match_not_eob = match_not_bob << 1,               /* last is not end of buffer */
   match_not_bow = match_not_eob << 1,               /* first is not start of word */
   match_not_eow = match_not_bow << 1,               /* last is not end of word */
   match_not_dot_newline = match_not_eow << 1,       /* \n is not matched by '.' */
   match_not_dot_null = match_not_dot_newline << 1,  /* '\0' is not matched by '.' */
   match_prev_avail = match_not_dot_null << 1,       /* *--first is a valid expression */
   match_init = match_prev_avail << 1,               /* internal use */
   match_any = match_init << 1,                      /* don't care what we match */
   match_not_null = match_any << 1,                  /* string can't be null */
   match_continuous = match_not_null << 1,           /* each grep match must continue from */
                                                     /* uninterupted from the previous one */
   match_partial = match_continuous << 1,            /* find partial matches */
   
   match_stop = match_partial << 1,                  /* stop after first match (grep) V3 only */
   match_not_initial_null = match_stop,              /* don't match initial null, V4 only */
   match_all = match_stop << 1,                      /* must find the whole of input even if match_any is set */
   match_perl = match_all << 1,                      /* Use perl matching rules */
   match_posix = match_perl << 1,                    /* Use POSIX matching rules */
   match_nosubs = match_posix << 1,                  /* don't trap marked subs */
   match_extra = match_nosubs << 1,                  /* include full capture information for repeated captures */
   match_single_line = match_extra << 1,             /* treat text as single line and ignor any \n's when matching ^ and $. */
   match_unused1 = match_single_line << 1,           /* unused */
   match_unused2 = match_unused1 << 1,               /* unused */
   match_unused3 = match_unused2 << 1,               /* unused */
   match_max = match_unused3,
    }
    
    
    {
   if(set_->cranges || set_->cequivalents)
   {
      traits_string_type s1;
      //
      // try and match a range, NB only a single character can match
      if(set_->cranges)
      {
         if((e.m_flags & regex_constants::collate) == 0)
            s1.assign(1, col);
         else
         {
            charT a[2] = { col, charT(0), };
            s1 = traits_inst.transform(a, a + 1);
         }
         for(i = 0; i < set_->cranges; ++i)
         {
            if(STR_COMP(s1, p) >= 0)
            {
               do{ ++p; }while(*p);
               ++p;
               if(STR_COMP(s1, p) <= 0)
                  return set_->isnot ? next : ++next;
            }
            else
            {
               // skip first string
               do{ ++p; }while(*p);
               ++p;
            }
            // skip second string
            do{ ++p; }while(*p);
            ++p;
         }
      }
      //
      // try and match an equivalence class, NB only a single character can match
      if(set_->cequivalents)
      {
         charT a[2] = { col, charT(0), };
         s1 = traits_inst.transform_primary(a, a +1);
         for(i = 0; i < set_->cequivalents; ++i)
         {
            if(STR_COMP(s1, p) == 0)
               return set_->isnot ? next : ++next;
            // skip string
            do{ ++p; }while(*p);
            ++p;
         }
      }
   }
   if(traits_inst.isctype(col, set_->cclasses) == true)
      return set_->isnot ? next : ++next;
   if((set_->cnclasses != 0) && (traits_inst.isctype(col, set_->cnclasses) == false))
      return set_->isnot ? next : ++next;
   return set_->isnot ? ++next : next;
}
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::skip_until_paren(int index, bool have_match)
{
   while(pstate)
   {
      if(pstate->type == syntax_element_endmark)
      {
         if(static_cast<const re_brace*>(pstate)->index == index)
         {
            if(have_match)
               return this->match_endmark();
            pstate = pstate->next.p;
            return true;
         }
         else
         {
            // Unenclosed closing ), occurs when (*ACCEPT) is inside some other 
            // parenthesis which may or may not have other side effects associated with it.
            match_endmark();
            if(!pstate)
            {
               unwind(true);
            }
         }
         continue;
      }
      else if(pstate->type == syntax_element_match)
         return true;
      else if(pstate->type == syntax_element_startmark)
      {
         int idx = static_cast<const re_brace*>(pstate)->index;
         pstate = pstate->next.p;
         skip_until_paren(idx, false);
         continue;
      }
      pstate = pstate->next.p;
   }
   return true;
}
    
    #ifndef BOOST_REGEX_V4_REGBASE_HPP
#define BOOST_REGEX_V4_REGBASE_HPP
    
    
    {}  // namespace detail
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~TreeUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief perform update to the tree models
   * \param gpair the gradient pair statistics of the data
   * \param data The data matrix passed to the updater.
   * \param trees references the trees to be updated, updater will change the content of trees
   *   note: all the trees in the vector are updated, with the same statistics,
   *         but maybe different random seeds, usually one tree is passed in at a time,
   *         there can be multiple trees when we train random forest style model
   */
  virtual void Update(HostDeviceVector<GradientPair>* gpair,
                      DMatrix* data,
                      const std::vector<RegTree*>& trees) = 0;
    }
    }
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    
    {
    {XGBOOST_REGISTER_TREE_UPDATER(TreePruner, 'prune')
.describe('Pruner that prune the tree according to statistics.')
.set_body([]() {
    return new TreePruner();
  });
}  // namespace tree
}  // namespace xgboost

    
      {
    auto ka = getKeepAliveToken(exec);
    EXPECT_TRUE(ka);
    EXPECT_EQ(&exec, ka.get());
    EXPECT_EQ(1, exec.refCount);
    }
    
    #include <folly/Expected.h>
#include <folly/Portability.h>
#include <folly/ScopeGuard.h>
#include <folly/portability/GTest.h>
    
    
    {  EXPECT_TRUE(fref);
  EXPECT_EQ(42, fref(4, 2));
}
    
    using namespace std;
    
    
    {} // namespace folly

    
      // Test with unusual durations where neither the numerator nor denominator
  // are 1.
  using five_sevenths = std::chrono::duration<int64_t, std::ratio<5, 7>>;
  ts.tv_sec = 1;
  ts.tv_nsec = 0;
  EXPECT_EQ(1, to<five_sevenths>(ts).count());
  ts.tv_sec = 1;
  ts.tv_nsec = 428571500;
  EXPECT_EQ(2, to<five_sevenths>(ts).count());