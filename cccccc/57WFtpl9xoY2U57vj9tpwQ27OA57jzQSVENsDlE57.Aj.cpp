
        
        // hidden_ops should be a list of Op names that should get a leading _
// in the output. Prints the output to stdout.
// Optional fourth argument is the name of the original C++ source file
// where the ops' REGISTER_OP() calls reside.
void PrintPythonOps(const OpList& ops, const ApiDefMap& api_defs,
                    const std::vector<string>& hidden_ops, bool require_shapes,
                    const string& source_file_name = '');
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include <Python.h>
    
    // Global registry mapping C API error codes to the corresponding custom Python
// exception type. This is used to expose the exception types to C extension
// code (i.e. so we can raise custom exceptions via SWIG).
//
// Init() must be called exactly once at the beginning of the process before
// Lookup() can be used.
//
// Example usage:
//   TF_Status* status = TF_NewStatus();
//   TF_Foo(..., status);
//
//   if (TF_GetCode(status) != TF_OK) {
//     PyObject* exc_type = PyExceptionRegistry::Lookup(TF_GetCode(status));
//     // Arguments to OpError base class. Set `node_def` and `op` to None.
//     PyObject* args =
//       Py_BuildValue('sss', nullptr, nullptr, TF_Message(status));
//     PyErr_SetObject(exc_type, args);
//     Py_DECREF(args);
//     TF_DeleteStatus(status);
//     return NULL;
//   }
class PyExceptionRegistry {
 public:
  // Initializes the process-wide registry. Should be called exactly once near
  // the beginning of the process. The arguments are the various Python
  // exception types (e.g. `cancelled_exc` corresponds to
  // errors.CancelledError).
  static void Init(PyObject* code_to_exc_type_map);
    }
    
    // Must be included first
#include 'tensorflow/python/lib/core/numpy.h'
    
    // Opaque and unique identifier for the cuda platform.
// This is needed so that plugins can refer to/identify this platform without
// instantiating a CudaPlatform object.
// This is broken out here to avoid a circular dependency between CudaPlatform
// and CudaExecutor.
extern const Platform::Id kCudaPlatformId;
    
      string ToString() {
    return flags_ == 0 ? 'none' : 'kDoNotReclaimStackAllocation';
  }
    
    #endif  // ATOM_BROWSER_API_ATOM_API_AUTO_UPDATER_H_

    
     private:
  static int32_t next_id_;
  static atom::KeyWeakMap<int32_t>* weak_map_;  // leaked on purpose
    
    void AutoUpdater::QuitAndInstall() {}
#endif
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    const SkBitmap* OffscreenViewProxy::GetBitmap() const {
  return view_bitmap_.get();
}
    
    void DragFileItems(const std::vector<base::FilePath>& files,
                   const gfx::Image& icon,
                   gfx::NativeView view) {
  // Set up our OLE machinery
  ui::OSExchangeData data;
    }
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
    
    {  *icon = item->icon_;
  return true;
}
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    MenuItem::~MenuItem() {
  Destroy();
}
    
    
    {  int menu_id;
  if (option.GetInteger('submenu', &menu_id))
    SetSubmenu(object_manager()->GetApiObject<Menu>(menu_id));
}
    
    ExtensionFunction::ResponseAction
NwAppCloseAllWindowsFunction::Run() {
  AppWindowRegistry* registry = AppWindowRegistry::Get(browser_context());
  if (!registry)
    return RespondNow(Error(''));
  base::MessageLoopCurrent::Get()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&NwAppCloseAllWindowsFunction::DoJob, registry, extension()->id()));
    }
    
    
    {} // namespace extensions
#endif

    
    class NwObjCallObjectMethodAsyncFunction : public UIThreadExtensionFunction {
 public:
  NwObjCallObjectMethodAsyncFunction();
    }
    
    
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    #include 'caffe2/utils/math.h'
    
    
    {} // namespace caffe2
    
    // EXPECT_DEBUG_DEATH asserts that the given statements die in debug mode.
// The death testing framework causes this to have interesting semantics,
// since the sideeffects of the call are only visible in opt mode, and not
// in debug mode.
//
// In practice, this can be used to test functions that utilize the
// LOG(DFATAL) macro using the following style:
//
// int DieInDebugOr12(int* sideeffect) {
//   if (sideeffect) {
//     *sideeffect = 12;
//   }
//   LOG(DFATAL) << 'death';
//   return 12;
// }
//
// TEST(TestCase, TestDieOr12WorksInDgbAndOpt) {
//   int sideeffect = 0;
//   // Only asserts in dbg.
//   EXPECT_DEBUG_DEATH(DieInDebugOr12(&sideeffect), 'death');
//
// #ifdef NDEBUG
//   // opt-mode has sideeffect visible.
//   EXPECT_EQ(12, sideeffect);
// #else
//   // dbg-mode no visible sideeffect.
//   EXPECT_EQ(0, sideeffect);
// #endif
// }
//
// This will assert that DieInDebugReturn12InOpt() crashes in debug
// mode, usually due to a DCHECK or LOG(DFATAL), but returns the
// appropriate fallback value (12 in this case) in opt mode. If you
// need to test that a function has appropriate side-effects in opt
// mode, include assertions against the side-effects.  A general
// pattern for this is:
//
// EXPECT_DEBUG_DEATH({
//   // Side-effects here will have an effect after this statement in
//   // opt mode, but none in debug mode.
//   EXPECT_EQ(12, DieInDebugOr12(&sideeffect));
// }, 'death');
//
# ifdef NDEBUG
    
    // Values() allows generating tests from explicitly specified list of
// parameters.
//
// Synopsis:
// Values(T v1, T v2, ..., T vN)
//   - returns a generator producing sequences with elements v1, v2, ..., vN.
//
// For example, this instantiates tests from test case BarTest each
// with values 'one', 'two', and 'three':
//
// INSTANTIATE_TEST_CASE_P(NumSequence, BarTest, Values('one', 'two', 'three'));
//
// This instantiates tests from test case BazTest each with values 1, 2, 3.5.
// The exact type of values will depend on the type of parameter in BazTest.
//
// INSTANTIATE_TEST_CASE_P(FloatingNumbers, BazTest, Values(1, 2, 3.5));
//
// Currently, Values() supports from 1 to $n parameters.
//
$range i 1..n
$for i [[
$range j 1..i
    
      // Gets the line in the source file where the test part took place,
  // or -1 if it's unknown.
  int line_number() const { return line_number_; }
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10>
struct Templates10 {
  typedef TemplateSel<T1> Head;
  typedef Templates9<T2, T3, T4, T5, T6, T7, T8, T9, T10> Tail;
};
    
      // Now, we have that n is odd and n >= 3.
    
    namespace {
    }
    
    
// Queue is a simple queue implemented as a singled-linked list.
//
// The element type must support copy constructor.
template <typename E>  // E is the element type
class Queue;
    
    SearchIterator::SearchIterator(const UnicodeString &text, 
                                     BreakIterator *breakiter) :
                                     m_breakiterator_(breakiter),
                                     m_text_(text)
{
    m_search_                     = (USearch *)uprv_malloc(sizeof(USearch));
    m_search_->breakIter          = NULL;
    m_search_->isOverlap          = FALSE;
    m_search_->isCanonicalMatch   = FALSE;
    m_search_->elementComparisonType = 0;
    m_search_->isForwardSearching = TRUE;
    m_search_->reset              = TRUE;
    m_search_->matchedIndex       = USEARCH_DONE;
    m_search_->matchedLength      = 0;
    m_search_->text               = m_text_.getBuffer();
    m_search_->textLength         = text.length();
}
    
    #ifndef __SHARED_DATEFORMATSYMBOLS_H__
#define __SHARED_DATEFORMATSYMBOLS_H__
    
            // Create a TimeZoneRule for standard time
        timeRuleType = (endTimeMode == STANDARD_TIME) ? DateTimeRule::STANDARD_TIME :
            ((endTimeMode == UTC_TIME) ? DateTimeRule::UTC_TIME : DateTimeRule::WALL_TIME);
        switch (endMode) {
        case DOM_MODE:
            dtRule = new DateTimeRule(endMonth, endDay, endTime, timeRuleType);
            break;
        case DOW_IN_MONTH_MODE:
            dtRule = new DateTimeRule(endMonth, endDay, endDayOfWeek, endTime, timeRuleType);
            break;
        case DOW_GE_DOM_MODE:
            dtRule = new DateTimeRule(endMonth, endDay, endDayOfWeek, true, endTime, timeRuleType);
            break;
        case DOW_LE_DOM_MODE:
            dtRule = new DateTimeRule(endMonth, endDay, endDayOfWeek, false, endTime, timeRuleType);
            break;
        }
        
        // Check for Null pointer
        if (dtRule == NULL) {
            status = U_MEMORY_ALLOCATION_ERROR;
            deleteTransitionRules();
            return;
        }
        // For now, use ID + '(STD)' as the name
        stdRule = new AnnualTimeZoneRule(tzid+UnicodeString(STD_STR), getRawOffset(), 0,
            dtRule, startYear, AnnualTimeZoneRule::MAX_YEAR);
        
        //Check for Null pointer
        if (stdRule == NULL) {
            status = U_MEMORY_ALLOCATION_ERROR;
            deleteTransitionRules();
            return;
        }
    
    U_NAMESPACE_END
    
    #ifndef SMPDTFST_H
#define SMPDTFST_H