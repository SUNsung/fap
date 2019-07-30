
        
        
    {            if (m_exponent.IsEmpty())
            {
                m_exponent.Clear();
            }
        }
        else
        {
            m_hasExponent = false;
        }
    }
    else
    {
        if (!m_base.IsEmpty())
        {
            m_base.value.pop_back();
        }
    
            case IDC_PWR: // Calculates rhs to the result(th) power.
            result = Pow(rhs, result);
            break;
    
    class IOperatorCommand : public IExpressionCommand
{
public:
    virtual void SetCommand(int command) = 0;
};
    
            // WARNING: mixing numbers and  rationals here.
        // for speed and efficiency.
        INC(count);
        mulnumx(&(factorial->pp), count);
        INC(count)
        mulnumx(&(factorial->pp), count);
    
    
    {    intrat(pa, radix, precision);
    if (!zernum((*pa)->pp))
    {
        // If input is zero we're done.
        if (rat_lt(b, rat_min_exp, precision))
        {
            // Don't attempt rsh of anything big and negative.
            throw(CALC_E_DOMAIN);
        }
        intb = rattoi32(b, radix, precision);
        DUPRAT(pwr, rat_two);
        ratpowi32(&pwr, intb, precision);
        divrat(pa, pwr, precision);
        destroyrat(pwr);
    }
}
    
    namespace CalculatorApp::Common::Automation
{
    // This class exists so that the app can run on RS2 and use LiveRegions
    // to host notifications on those builds.
    // When the app switches to min version RS3, this class can be removed
    // and the app will switch to using the Notification API.
    // TODO - MSFT 12735088
public
    ref class LiveRegionHost sealed : public INarratorAnnouncementHost
    {
    public:
        LiveRegionHost();
    }
    }
    
        private:
        static Windows::UI::Xaml::Automation::Peers::AutomationNotificationKind
        GetWindowsNotificationKind(CalculatorApp::Common::Automation::AutomationNotificationKind customKindType);
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {  void moduleLoad(const IniSetting::Map& ini, Hdf globalConfig) override {
    Config::Bind(Enabled, ini, globalConfig,
                 'HealthMonitor.EnableHealthMonitor', true);
    Config::Bind(UpdateFreq, ini, globalConfig,
                 'HealthMonitor.UpdateFreq', 1000 /* miliseconds */);
  }
} s_host_health_monitor_extension;
    
    
    {  auto const sf = v.makeReg();
  v << decqmlock{v.cns(counterAddr)[0], sf};
  if (RuntimeOption::EvalJitFilterLease) {
    auto filter = v.makeBlock();
    v << jcc{CC_LE, sf, {label(env, inst->next()), filter}};
    v = filter;
    auto const res = v.makeReg();
    cgCallHelper(v, env, CallSpec::direct(couldAcquireOptimizeLease),
                 callDest(res), SyncOptions::None,
                 argGroup(env, inst).immPtr(inst->func()));
    auto const sf2 = v.makeReg();
    v << testb{res, res, sf2};
    v << jcc{CC_NZ, sf2, {label(env, inst->next()), label(env, inst->taken())}};
  } else {
    v << jcc{CC_LE, sf, {label(env, inst->next()), label(env, inst->taken())}};
  }
}
    
    struct ProxygenTransportRepostTest : ProxygenTransportTest {
  // Initiates a simple GET request to the transport
  void SetUp() override {
  }
    }
    
      static const Class::Const* GetConstFor(ObjectData* obj) {
    return Native::data<ReflectionConstHandle>(obj)->getConst();
  }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    #include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/file-stream-wrapper.h'
#include 'hphp/runtime/base/program-functions.h'
#include 'hphp/runtime/base/req-vector.h'
#include 'hphp/runtime/base/runtime-option.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/runtime/ext/extension.h'
#include 'hphp/runtime/ext/json/ext_json.h'
#include 'hphp/runtime/vm/extern-compiler.h'
#include 'hphp/runtime/vm/treadmill.h'
#include 'hphp/util/file.h'
#include 'hphp/util/trace.h'
#include 'hphp/util/job-queue.h'
    
    
    {
    {  if (!ad->isZombie()) {
    auto const elms = ad->data();
    auto const used = ad->m_used;
    for (uint32_t i = 0; i < used; ++i) {
      auto& elm = elms[i];
      if (UNLIKELY(elm.isTombstone())) continue;
      assertx(!elm.isEmpty());
      if (elm.hasStrKey()) {
        auto const skey = elm.strKey();
        assertx(!skey->isRefCounted());
        if (skey->isUncounted()) {
          skey->registerUncountedAllocation(rootAPCHandle);
        }
      }
    }
  }
  assertx(RuntimeOption::EvalGCForAPC);
  APCGCManager::getInstance().registerAllocation(ad,
                                        (char*)ad + ad->heapSize(),
                                        rootAPCHandle);
}
//////////////////////////////////////////////////////////////////////
}

    
    LookupResult lookupClsMethod(const Func*& f,
                             const Class* cls,
                             const StringData* methodName,
                             ObjectData* this_,
                             const Class* ctx,
                             bool raise = false);