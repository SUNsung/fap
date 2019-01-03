
        
        bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv) {
  const base::CommandLine::StringType dashdash(2, '-');
  bool block_args = false;
  for (int i = 0; i < argc; ++i) {
    if (argv[i] == dashdash)
      break;
    if (block_args) {
      return false;
    } else if (IsUrlArg(argv[i])) {
      block_args = true;
    }
  }
  return true;
}
    
    void AutoUpdater::OnUpdateAvailable() {
  Emit('update-available');
}
    
    using atom::api::Net;
using atom::api::URLRequest;
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    
    {}  // namespace auto_updater

    
        /** Colorize an image (given filename) with the icon color */
    QImage SingleColorImage(const QString& filename) const;
    
    Q_SIGNALS:
    void valueChanged();
    
    public:
    explicit SignVerifyMessageDialog(const PlatformStyle *platformStyle, QWidget *parent);
    ~SignVerifyMessageDialog();
    
    protected:
    void paintEvent(QPaintEvent *);
    
    #endif

    
    int secp256k1_ecdh(const secp256k1_context* ctx, unsigned char *result, const secp256k1_pubkey *point, const unsigned char *scalar) {
    int ret = 0;
    int overflow = 0;
    secp256k1_gej res;
    secp256k1_ge pt;
    secp256k1_scalar s;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(result != NULL);
    ARG_CHECK(point != NULL);
    ARG_CHECK(scalar != NULL);
    }
    
    /* Equality between doubles is imprecise. Comparison should be done
 * with a small threshold of tolerance, rather than exact equality.
 */
static bool DoubleEquals(double a, double b, double epsilon)
{
    return std::abs(a - b) < epsilon;
}
    
    
    {
    {    rph->Send(new ShellViewMsg_Reopen());
  }
}
    
    #endif  // CONTENT_NW_SRC_API_APP_APP_H_
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    
    {}
    
    void MenuItem::Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh) {
  if (method == 'SetLabel') {
    std::string label;
    arguments.GetString(0, &label);
    SetLabel(label);
  } else if (method == 'SetIcon') {
    std::string icon;
    arguments.GetString(0, &icon);
    SetIcon(icon);
  } else if (method == 'SetIconIsTemplate') {
    bool isTemplate;
    arguments.GetBoolean(0, &isTemplate);
    SetIconIsTemplate(isTemplate);
  } else if (method == 'SetTooltip') {
    std::string tooltip;
    arguments.GetString(0, &tooltip);
    SetTooltip(tooltip);
  } else if (method == 'SetEnabled') {
    bool enabled = true;
    arguments.GetBoolean(0, &enabled);
    SetEnabled(enabled);
  } else if (method == 'SetChecked') {
    bool checked = false;
    arguments.GetBoolean(0, &checked);
    SetChecked(checked);
  } else if (method == 'SetSubmenu') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    SetSubmenu(object_manager()->GetApiObject<Menu>(object_id));
#if defined(OS_MACOSX)
  } else if (method == 'SetKey') {
    std::string key;
    arguments.GetString(0, &key);
    SetKey(key);
  } else if (method == 'SetModifiers') {
    std::string mod;
    arguments.GetString(0, &mod);
    SetModifiers(mod);
#endif
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {  gtk_widget_show(menu_item_);
  g_object_ref_sink(G_OBJECT(menu_item_));
} 
    
    
    {  gfx::Image originImage;
  nw::Package* package = nw::InitNWPackage();
  if (nw::GetImage(package, base::FilePath::FromUTF8Unsafe(icon), &originImage)) {
    const gfx::ImageSkia* originImageSkia = originImage.ToImageSkia();
    gfx::ImageSkia resizedImageSkia = gfx::ImageSkiaOperations::CreateResizedImage(*originImageSkia,
                                                                                   skia::ImageOperations::RESIZE_GOOD,
                                                                                   gfx::Size(kIconWidth, kIconHeight));
    icon_ = gfx::Image(resizedImageSkia);
  }
}
    
      private:
    bool ReadText(ClipboardData& data) {
      DCHECK(data.type == TYPE_TEXT);
      base::string16 text;
      clipboard_->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
      data.data.reset(new std::string(base::UTF16ToUTF8(text)));
      return true;
    }
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnAllocateObject(id, type, *options, extension_id());
  return true;
}
    
    namespace mxnet {
    }
    
    
    {    CHECK_EQ(cudaStreamSynchronize(NULL), cudaSuccess);
#endif  // __CUDACC__
  }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_loss.cc
 * \brief caffe loss
 * \author Haoran Wang
*/
#include './caffe_loss-inl.h'
    
    #include <dmlc/base.h>
#include <dmlc/thread_group.h>
#include <cstddef>
#include <vector>
#include <list>
#include <thread>
#include <utility>
#include 'mxnet/base.h'
    
    #include <dmlc/registry.h>
    
    void BranchParams::decodeInstr(const PPC64Instr* const pinstr) {
  const DecoderInfo dinfo = Decoder::GetDecoder().decode(pinstr);
  switch (dinfo.opcode_name()) {
    case OpcodeNames::op_b:
    case OpcodeNames::op_bl:
      assert(dinfo.form() == Form::kI);
      defineBoBi(BranchConditions::Always);
      break;
    case OpcodeNames::op_bc:
      assert(dinfo.form() == Form::kB);
      B_form_t bform;
      bform.instruction = dinfo.instruction_image();
      m_bo = BranchParams::BO(bform.BO);
      m_bi = BranchParams::BI(bform.BI);
      break;
    case OpcodeNames::op_bcctr:
    case OpcodeNames::op_bcctrl:
      assert(dinfo.form() == Form::kXL);
      XL_form_t xlform;
      xlform.instruction = dinfo.instruction_image();
      m_bo = BranchParams::BO(xlform.BT);
      m_bi = BranchParams::BI(xlform.BA);
      break;
    default:
      assert(false && 'Not a valid conditional branch instruction');
      // also possible: defineBoBi(BranchConditions::Always);
      break;
  }
    }
    
    template<class T>
void fillCollection(T* coll, const APCArray* ar) {
  for (auto i = uint32_t{0}; i < ar->size(); ++i) {
    coll->add(*ar->getValue(i)->toLocal().asTypedValue());
  }
}
    
    
struct Config {
  /*
   * Normalizes hdf string names to their ini counterparts
   *
   * We have special handling for a few hdf strings such as those containing
   * MySQL, Eval, IPv[4|6] and EnableHipHopSyntax
   */
  static std::string IniName(const Hdf& config,
                             const bool prepend_hhvm = true);
  static std::string IniName(const std::string& config,
                             const bool prepend_hhvm = true);
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {  auto glob = HHVM_FN(glob)(String(path_str, path_len, CopyString));
  if (!glob.isArray()) {
    return nullptr;
  }
  return req::make<ArrayDirectory>(glob.toArray());
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    {}
    
    /*!
 * \brief Whether always log console message with time.
 *  It will display like, with timestamp appended to head of the message.
 *  '[21:47:50] 6513x126 matrix with 143286 entries loaded from
 * ../data/agaricus.txt.train'
 */
#ifndef XGBOOST_LOG_WITH_TIME
#define XGBOOST_LOG_WITH_TIME 1
#endif
    
    #include <dmlc/registry.h>
#include <functional>
#include <vector>
#include <utility>
#include <string>
#include './base.h'
#include './data.h'
#include './tree_model.h'
#include '../../src/common/host_device_vector.h'
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
      /*!
   * \brief feature contributions to individual predictions; the output will be a vector
   *         of length (nfeats + 1) * num_output_group * nsample, arranged in that order
   * \param dmat feature matrix
   * \param out_contribs output vector to hold the contributions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees
   * \param approximate use a faster (inconsistent) approximation of SHAP values
   * \param condition condition on the condition_feature (0=no, -1=cond off, 1=cond on).
   * \param condition_feature feature to condition on (i.e. fix) during calculations
   */
  virtual void PredictContribution(DMatrix* dmat,
                           std::vector<bst_float>* out_contribs,
                           unsigned ntree_limit = 0, bool approximate = false,
                           int condition = 0, unsigned condition_feature = 0) = 0;
    
    
    {} // namespace aria2

    
      void sendMessage();
    
    DHTTaskFactoryImpl::DHTTaskFactoryImpl()
    : routingTable_(nullptr),
      dispatcher_(nullptr),
      factory_(nullptr),
      taskQueue_(nullptr),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
    class DHTTaskQueue {
public:
  virtual ~DHTTaskQueue() = default;
    }
    
    
    {} // namespace aria2
    
    void DNSCache::remove(const std::string& hostname, uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  entries_.erase(target);
}
    
    CC_CONSTRUCTOR_ACCESS:
    FiniteTimeAction()
    : _duration(0)
    {}
    virtual ~FiniteTimeAction(){}
    
        /** Initializes a Catmull Rom config with a capacity hint.
     *
     * @js NA
     * @param capacity The size of the array.
     * @return True.
     */
    bool initWithCapacity(ssize_t capacity);
    
        EaseRateAction *easeRateAction = new (std::nothrow) EaseRateAction();
    if (easeRateAction && easeRateAction->initWithAction(action, rate))
    {
        easeRateAction->autorelease();
        return easeRateAction;
    }
    
    
    {        return true;
    }
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
    
    {        for(const auto &value : spritesheets) {
            std::string path = FileUtils::getInstance()->fullPathFromRelativeFile(value.asString(),plist);
            SpriteFrameCache::getInstance()->addSpriteFramesWithFile(path);
        }
    }
    
    #endif // __CCATLAS_NODE_H__
    
                case 1:
            case 5:
            case 13:
                /* going UP with these cases:
                 1          5           13
                 +---+---+  +---+---+  +---+---+ 
                 | 1 |   |  | 1 |   |  | 1 |   | 
                 +---+---+  +---+---+  +---+---+ 
                 |   |   |  | 4 |   |  | 4 | 8 | 
                 +---+---+  +---+---+  +---+---+
                 */
                stepx = 0;
                stepy = -1;
                break;