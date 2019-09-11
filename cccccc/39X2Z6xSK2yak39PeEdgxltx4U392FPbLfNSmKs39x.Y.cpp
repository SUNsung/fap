
        
        namespace xla {
namespace gpu {
    }
    }
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
      // Nothing to be done for empty tuples.
  if (ShapeUtil::IsEmptyTuple(hlo_instruction()->operand(0)->shape())) {
    return Status::OK();
  }
  CHECK(ShapeUtil::Compatible(hlo_instruction()->operand(0)->shape(),
                              outfeed_buffers->shape()));
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Status ImagGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      FDH::Const('zero', 0.f),
      {{'dx'}, 'Complex', {'zero', 'dy'}},
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Imag', ImagGrad);
    
    // CertificateManagerModel is created on the UI thread. It needs a
// NSSCertDatabase handle (and on ChromeOS it needs to get the TPM status) which
// needs to be done on the IO thread.
//
// The initialization flow is roughly:
//
//               UI thread                              IO Thread
//
//   CertificateManagerModel::Create
//                  \--------------------------------------v
//                                CertificateManagerModel::GetCertDBOnIOThread
//                                                         |
//                                     GetNSSCertDatabaseForResourceContext
//                                                         |
//                               CertificateManagerModel::DidGetCertDBOnIOThread
//                  v--------------------------------------/
// CertificateManagerModel::DidGetCertDBOnUIThread
//                  |
//     new CertificateManagerModel
//                  |
//               callback
    
    template <typename P1, typename P2, typename P3, typename P4>
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*(P1, P2, P3, P4)>& callback) {
  typename CallbackParamTraits<P1>::LocalType a1;
  typename CallbackParamTraits<P2>::LocalType a2;
  typename CallbackParamTraits<P3>::LocalType a3;
  typename CallbackParamTraits<P4>::LocalType a4;
  if (!GetNextArgument(args, 0, true, &a1) ||
      !GetNextArgument(args, 0, false, &a2) ||
      !GetNextArgument(args, 0, false, &a3) ||
      !GetNextArgument(args, 0, false, &a4))
    return nullptr;
  return callback.Run(a1, a2, a3, a4);
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #include 'base/callback_list.h'
#include 'gin/handle.h'
#include 'net/cookies/canonical_cookie.h'
#include 'shell/browser/api/trackable_object.h'
#include 'shell/browser/net/cookie_details.h'
#include 'shell/common/promise_util.h'
    
    
    {  // Show the menu.
  int32_t window_id = window->weak_map_id();
  auto close_callback = base::BindRepeating(
      &MenuViews::OnClosed, weak_factory_.GetWeakPtr(), window_id, callback);
  menu_runners_[window_id] =
      std::make_unique<MenuRunner>(model(), flags, close_callback);
  menu_runners_[window_id]->RunMenuAt(
      native_window->widget(), NULL, gfx::Rect(location, gfx::Size()),
      views::MenuAnchorPosition::kTopLeft, ui::MENU_SOURCE_MOUSE);
}
    
    #include 'base/memory/weak_ptr.h'
#include 'shell/browser/api/atom_api_menu.h'
#include 'ui/display/screen.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    void store_t::delayed_clear_and_drop_sindex(
        secondary_index_t sindex,
        auto_drainer_t::lock_t store_keepalive)
        THROWS_NOTHING {
    try {
        rdb_value_sizer_t sizer(cache->max_block_size());
        /* If the index had been completely constructed, we must
         * detach its values since snapshots might be accessing it.
         * If on the other hand the index had not finished post
         * construction, it would be incorrect to do so.
         * The reason being that some of the values that the sindex
         * points to might have been deleted in the meantime
         * (the deletion would be on the sindex queue, but might
         * not have found its way into the index tree yet). */
        rdb_live_deletion_context_t live_deletion_context;
        rdb_post_construction_deletion_context_t post_con_deletion_context;
        deletion_context_t *actual_deletion_context =
            sindex.post_construction_complete()
            ? static_cast<deletion_context_t *>(&live_deletion_context)
            : static_cast<deletion_context_t *>(&post_con_deletion_context);
    }
    }
    
        sindex_disk_info_t sindex_info;
    try {
        deserialize_sindex_info_or_crash(opaque_definition, &sindex_info);
    } catch (const archive_exc_t &e) {
        crash('%s', e.what());
    }
    
      // Appends the TestPartResult object to the TestPartResultArray
  // received in the constructor.
  //
  // This method is from the TestPartResultReporterInterface
  // interface.
  virtual void ReportTestPartResult(const TestPartResult& result);
 private:
  void Init();
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ', '
                            << e4 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3
                            << '\n' << e4 << ' evaluates to ' << v4;
}
    
      static void set_last_death_test_message(const std::string& message);
    
                    case CAL_TAIWAN:
                    return Windows::Globalization::CalendarIdentifiers::Taiwan;
    
    /// <summary>
/// Initializes the singleton application object.  This is the first line of authored code
/// executed, and as such is the logical equivalent of main() or WinMain().
/// </summary>
App::App()
{
    InitializeComponent();
    Suspending += ref new SuspendingEventHandler(this, &App::OnSuspending);
}
    
    void CCalcEngine::DisplayNum(void)
{
    //
    // Only change the display if
    //  we are in record mode                               -OR-
    //  this is the first time DisplayNum has been called,  -OR-
    //  something important has changed since the last time DisplayNum was
    //  called.
    //
    if (m_bRecord || gldPrevious.value != m_currentVal || gldPrevious.precision != m_precision || gldPrevious.radix != m_radix || gldPrevious.nFE != (int)m_nFE
        || gldPrevious.bUseSep != true || gldPrevious.numwidth != m_numwidth || gldPrevious.fIntMath != m_fIntegerMode || gldPrevious.bRecord != m_bRecord)
    {
        gldPrevious.precision = m_precision;
        gldPrevious.radix = m_radix;
        gldPrevious.nFE = (int)m_nFE;
        gldPrevious.numwidth = m_numwidth;
    }
    }
    
    // Include the resource key ID from above into this vector to load it into memory for the engine to use
inline constexpr std::array<std::wstring_view, 120> g_sids = { SIDS_PLUS_MINUS,
                                                               SIDS_C,
                                                               SIDS_CE,
                                                               SIDS_BACKSPACE,
                                                               SIDS_DECIMAL_SEPARATOR,
                                                               SIDS_EMPTY_STRING,
                                                               SIDS_AND,
                                                               SIDS_OR,
                                                               SIDS_XOR,
                                                               SIDS_LSH,
                                                               SIDS_RSH,
                                                               SIDS_DIVIDE,
                                                               SIDS_MULTIPLY,
                                                               SIDS_PLUS,
                                                               SIDS_MINUS,
                                                               SIDS_MOD,
                                                               SIDS_YROOT,
                                                               SIDS_POW_HAT,
                                                               SIDS_INT,
                                                               SIDS_ROL,
                                                               SIDS_ROR,
                                                               SIDS_NOT,
                                                               SIDS_SIN,
                                                               SIDS_COS,
                                                               SIDS_TAN,
                                                               SIDS_SINH,
                                                               SIDS_COSH,
                                                               SIDS_TANH,
                                                               SIDS_LN,
                                                               SIDS_LOG,
                                                               SIDS_SQRT,
                                                               SIDS_XPOW2,
                                                               SIDS_XPOW3,
                                                               SIDS_NFACTORIAL,
                                                               SIDS_RECIPROCAL,
                                                               SIDS_DMS,
                                                               SIDS_CUBEROOT,
                                                               SIDS_POWTEN,
                                                               SIDS_PERCENT,
                                                               SIDS_SCIENTIFIC_NOTATION,
                                                               SIDS_PI,
                                                               SIDS_EQUAL,
                                                               SIDS_MC,
                                                               SIDS_MR,
                                                               SIDS_MS,
                                                               SIDS_MPLUS,
                                                               SIDS_MMINUS,
                                                               SIDS_EXP,
                                                               SIDS_OPEN_PAREN,
                                                               SIDS_CLOSE_PAREN,
                                                               SIDS_0,
                                                               SIDS_1,
                                                               SIDS_2,
                                                               SIDS_3,
                                                               SIDS_4,
                                                               SIDS_5,
                                                               SIDS_6,
                                                               SIDS_7,
                                                               SIDS_8,
                                                               SIDS_9,
                                                               SIDS_A,
                                                               SIDS_B,
                                                               SIDS_C,
                                                               SIDS_D,
                                                               SIDS_E,
                                                               SIDS_F,
                                                               SIDS_FRAC,
                                                               SIDS_SIND,
                                                               SIDS_COSD,
                                                               SIDS_TAND,
                                                               SIDS_ASIND,
                                                               SIDS_ACOSD,
                                                               SIDS_ATAND,
                                                               SIDS_SINR,
                                                               SIDS_COSR,
                                                               SIDS_TANR,
                                                               SIDS_ASINR,
                                                               SIDS_ACOSR,
                                                               SIDS_ATANR,
                                                               SIDS_SING,
                                                               SIDS_COSG,
                                                               SIDS_TANG,
                                                               SIDS_ASING,
                                                               SIDS_ACOSG,
                                                               SIDS_ATANG,
                                                               SIDS_ASINH,
                                                               SIDS_ACOSH,
                                                               SIDS_ATANH,
                                                               SIDS_POWE,
                                                               SIDS_POWTEN2,
                                                               SIDS_SQRT2,
                                                               SIDS_SQR,
                                                               SIDS_CUBE,
                                                               SIDS_CUBERT,
                                                               SIDS_FACT,
                                                               SIDS_RECIPROC,
                                                               SIDS_DEGREES,
                                                               SIDS_NEGATE,
                                                               SIDS_RSH,
                                                               SIDS_DIVIDEBYZERO,
                                                               SIDS_DOMAIN,
                                                               SIDS_UNDEFINED,
                                                               SIDS_POS_INFINITY,
                                                               SIDS_NEG_INFINITY,
                                                               SIDS_ABORTED,
                                                               SIDS_NOMEM,
                                                               SIDS_TOOMANY,
                                                               SIDS_OVERFLOW,
                                                               SIDS_NORESULT,
                                                               SIDS_INSUFFICIENT_DATA,
                                                               SIDS_ERR_UNK_CH,
                                                               SIDS_ERR_UNK_FN,
                                                               SIDS_ERR_UNEX_NUM,
                                                               SIDS_ERR_UNEX_CH,
                                                               SIDS_ERR_UNEX_SZ,
                                                               SIDS_ERR_MISMATCH_CLOSE,
                                                               SIDS_ERR_UNEX_END,
                                                               SIDS_ERR_SG_INV_ERROR,
                                                               SIDS_ERR_INPUT_OVERFLOW,
                                                               SIDS_ERR_OUTPUT_OVERFLOW };

    
    // Adds the m_pszEquation into the running history text
void CHistoryCollector::SetExpressionDisplay()
{
    if (nullptr != m_pCalcDisplay)
    {
        m_pCalcDisplay->SetExpressionDisplay(m_spTokens, m_spCommands);
    }
}
    
    
    {    bool Number::IsZero() const
    {
        return all_of(m_mantissa.begin(), m_mantissa.end(), [](auto&& i) { return i == 0; });
    }
}

    
                virtual bool IndexOf(Platform::Object ^ item, unsigned int* index) = Windows::Foundation::Collections::IVector<Platform::Object ^>::IndexOf
            {
                return m_source->IndexOf(item, index);
            }
    
    void LiveRegionHost::Announce(NarratorAnnouncement ^ announcement)
{
    if (m_host == nullptr)
    {
        m_host = ref new TextBlock();
        AutomationProperties::SetLiveSetting(m_host, AutomationLiveSetting::Assertive);
    }
    }