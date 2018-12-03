
        
          // Releases ownership of the object without decrementing the reference count.
  // The caller now owns the returned reference.
  PyObjectStruct* release() {
    PyObject* p = ptr_;
    ptr_ = NULL;
    return p;
  }
    
    
    {  if (!endsubmsg) return s->closure;
  hd = upb_handlers_gethandlerdata(s->handlers, sel);
  return endsubmsg(s->closure, hd);
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
    
    int ImmutableExtensionLiteGenerator::GenerateRegistrationCode(
    io::Printer* printer) {
  printer->Print(
    'registry.add($scope$.$name$);\n',
    'scope', scope_,
    'name', UnderscoresToCamelCase(descriptor_));
  return 7;
}
    
    
    {
    {
    {
    {void ExtensionGenerator::GenerateRegistrationSource(io::Printer* printer) {
  printer->Print(
      '[registry addExtension:$root_class_and_method_name$];\n',
      'root_class_and_method_name', root_class_and_method_name_);
}
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
        printer->Indent();
    printer->Indent();
    
    #include <google/protobuf/compiler/objectivec/objectivec_oneof.h>
#include <google/protobuf/compiler/objectivec/objectivec_helpers.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
      // Computes matrix.vector v = Wu.
  // u is of size W.dim2() - 1 and the output v is of size W.dim1().
  // u is imagined to have an extra element at the end with value 1, to
  // implement the bias, but it doesn't actually have it.
  // Computes the base C++ implementation, if there are no partial_funcs_.
  // NOTE: The size of the input vector (u) must be padded using
  // RoundInputs above.
  // The input will be over-read to the extent of the padding. There are no
  // alignment requirements.
  void MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                       const GenericVector<double>& scales, const int8_t* u,
                       double* v) const;
    
     protected:
  // Identify the special text type for one blob, and update its field. When
  // height_th is set (> 0), we will label the blob as BSTT_NONE if its height
  // is less than height_th.
  void IdentifySpecialText(BLOBNBOX *blob, const int height_th);
    
    namespace tesseract {
    }
    
    // The parameters editor enables the user to edit all the parameters used within
// tesseract. It can be invoked on its own, but is supposed to be invoked by
// the program editor.
class ParamsEditor : public SVEventHandler {
 public:
  // Integrate the parameters editor as popupmenu into the existing scrollview
  // window (usually the pg editor). If sv == null, create a new empty
  // empty window and attach the parameter editor to that window (ugly).
  explicit ParamsEditor(tesseract::Tesseract*, ScrollView* sv = nullptr);
    }
    
    #include <cmath>
    
      /// Return true if we are processing the full image.
  bool IsFullImage() const {
    return rect_left_ == 0 && rect_top_ == 0 &&
           rect_width_ == image_width_ && rect_height_ == image_height_;
  }
    
      // Adds the given pix to the set of pages in the PDF file, with the given
  // caption added to the top.
  void AddPix(const Pix* pix, const char* caption) {
    int depth = pixGetDepth(const_cast<Pix*>(pix));
    int color = depth < 8 ? 1 : (depth > 8 ? 0x00ff0000 : 0x80);
    Pix* pix_debug = pixAddSingleTextblock(
        const_cast<Pix*>(pix), fonts_, caption, color, L_ADD_BELOW, nullptr);
    pixaAddPix(pixa_, pix_debug, L_INSERT);
  }
    
    void Assembler::stdu(const Reg64& rt, MemoryRef m) {
  assertx(Reg64(-1) == m.r.index);  // doesn't support base+index
  EmitDSForm(62, rn(rt), rn(m.r.base), m.r.disp, 1);
}
    
    Object APCCollection::createObject() const {
  if (m_arrayHandle->isTypedValue()) {
    Variant local(m_arrayHandle->toLocal());
    assertx(local.isArray());
    return Object::attach(
      collections::alloc(m_colType, local.getArrayData())
    );
  }
    }
    
    struct ObjectData;
struct Object;
    
    inline TypedValue* APCLocalArray::localCache() const {
  return const_cast<TypedValue*>(
    reinterpret_cast<const TypedValue*>(this + 1)
  );
}
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
        bool isPHP = false;
    const char *p = strrchr(ename, '.');
    if (p) {
      isPHP = (strncmp(p + 1, 'php', 3) == 0);
    } else {
      try {
        std::string line;
        std::ifstream fin(fe.c_str());
        if (std::getline(fin, line)) {
          if (line[0] == '#' && line[1] == '!' &&
              line.find('php') != std::string::npos) {
            isPHP = true;
          }
        }
      } catch (...) {
        Logger::Error('FileUtil::find(): unable to read %s', fe.c_str());
      }
    }
    
    #ifndef incl_HPHP_PERF_EVENT_H_
#define incl_HPHP_PERF_EVENT_H_
    
      /*!
   * \brief determines whether updater has enough knowledge about a given dataset
   *        to quickly update prediction cache its training data and performs the
   *        update if possible.
   * \param data: data matrix
   * \param out_preds: prediction cache to be updated
   * \return boolean indicating whether updater has capability to update
   *         the prediction cache. If true, the prediction cache will have been
   *         updated by the time this function returns.
   */
  virtual bool UpdatePredictionCache(const DMatrix* data,
                                     HostDeviceVector<bst_float>* out_preds) {
    return false;
  }
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    SEXP XGBoosterBoostOneIter_R(SEXP handle, SEXP dtrain, SEXP grad, SEXP hess) {
  R_API_BEGIN();
  CHECK_EQ(length(grad), length(hess))
      << 'gradient and hess must have same length';
  int len = length(grad);
  std::vector<float> tgrad(len), thess(len);
  #pragma omp parallel for schedule(static)
  for (int j = 0; j < len; ++j) {
    tgrad[j] = REAL(grad)[j];
    thess[j] = REAL(hess)[j];
  }
  CHECK_CALL(XGBoosterBoostOneIter(R_ExternalPtrAddr(handle),
                                 R_ExternalPtrAddr(dtrain),
                                 BeginPtr(tgrad), BeginPtr(thess),
                                 len));
  R_API_END();
  return R_NilValue;
}
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    #ifdef __CUDACC__
  __device__ void AtomicWriteSymbol
    (CompressedByteT* buffer, uint64_t symbol, size_t offset) {
    size_t ibit_start = offset * symbol_bits_;
    size_t ibit_end = (offset + 1) * symbol_bits_ - 1;
    size_t ibyte_start = ibit_start / 8, ibyte_end = ibit_end / 8;
    }
    
    
    {} // namespace osquery

    
      // Now clear and run again.
  clearDecorations('awesome');
  runDecorators(DECORATE_INTERVAL, 60 * 60);
    
    TEST_F(ViewsConfigParserPluginTests, test_add_view) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
    }
    
    bool Follow::initWithTargetAndOffset(Node *followedNode, float xOffset,float yOffset,const Rect& rect)
{
    CCASSERT(followedNode != nullptr, 'FollowedNode can't be NULL');
    if(followedNode == nullptr)
    {
        log('Follow::initWithTarget error: followedNode is nullptr!');
        return false;
    }
 
    followedNode->retain();
    _followedNode = followedNode;
    _worldRect = rect;
    _boundarySet = !rect.equals(Rect::ZERO);
    _boundaryFullyCovered = false;
    }
    
    EaseBezierAction* EaseBezierAction::reverse() const
{
    EaseBezierAction* reverseAction = EaseBezierAction::create(_inner->reverse());
    reverseAction->setBezierParamer(_p3,_p2,_p1,_p0);
    return reverseAction;
}
    
    
    {        return true;
    }
    
        if (ret && ret->initWithFunction(func) )
    {
        ret->autorelease();
        return ret;
    }
    
    SplitRows* SplitRows::create(float duration, unsigned int nRows)
{
    SplitRows *action = new (std::nothrow) SplitRows();
    }
    
    
    {                
            case 4:
            case 12:
            case 14:
                /* going LEFT with these cases:
                 4          12          14
                 +---+---+  +---+---+   +---+---+
                 |   |   |  |   |   |   |   | 2 |
                 +---+---+  +---+---+   +---+---+
                 | 4 |   |  | 4 | 8 |   | 4 | 8 |
                 +---+---+  +---+---+  	+---+---+
                 */
                stepx = -1;
                stepy = 0;
                break;
                
                
            case 2 :
            case 3 :
            case 7 :
                /* going RIGHT with these cases:
                 2          3           7        
                 +---+---+  +---+---+   +---+---+
                 |   | 2 |  | 1 | 2 |   | 1 | 2 |
                 +---+---+  +---+---+   +---+---+
                 |   |   |  |   |   |   | 4 |   |
                 +---+---+  +---+---+  	+---+---+
                 */
                stepx=1;
                stepy=0;
                break;
            case 9 :
                /*
                 +---+---+
                 | 1 |   |
                 +---+---+
                 |   | 8 |
                 +---+---+
                 this should normally go UP, but if we already been here, we go down
                */
                //find index from xy;
                i = getIndexFromPos(curx, cury);
                it = find (case9s.begin(), case9s.end(), i);
                if (it != case9s.end())
                {
                    //found, so we go down, and delete from case9s;
                    stepx = 0;
                    stepy = 1;
                    case9s.erase(it);
                }
                else
                {
                    //not found, we go up, and add to case9s;
                    stepx = 0;
                    stepy = -1;
                    case9s.push_back(i);
                }
                break;
            case 6 :
                /*
                 6
                 +---+---+
                 |   | 2 |
                 +---+---+
                 | 4 |   |
                 +---+---+
                 this normally go RIGHT, but if its coming from UP, it should go LEFT
                 */
                i = getIndexFromPos(curx, cury);
                it = find (case6s.begin(), case6s.end(), i);
                if (it != case6s.end())
                {
                    //found, so we go down, and delete from case9s;
                    stepx = -1;
                    stepy = 0;
                    case6s.erase(it);
                }
                else{
                    //not found, we go up, and add to case9s;
                    stepx = 1;
                    stepy = 0;
                    case6s.push_back(i);
                }
                break;
            default:
                CCLOG('this shouldn't happen.');
        }
        //little optimization
        // if previous direction is same as current direction,
        // then we should modify the last vec to current
        curx += stepx;
        cury += stepy;
        if(stepx == prevx && stepy == prevy)
        {
            _points.back().x = (float)(curx-rect.origin.x) / _scaleFactor;
            _points.back().y = (float)(rect.size.height - cury + rect.origin.y) / _scaleFactor;
        }
        else
        {
            _points.push_back(Vec2((float)(curx - rect.origin.x) / _scaleFactor, (float)(rect.size.height - cury + rect.origin.y) / _scaleFactor));
        }