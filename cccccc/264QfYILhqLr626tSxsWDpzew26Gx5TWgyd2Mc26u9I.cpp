
        
          static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    
    {}
    
      std::string url = *v8::String::Utf8Value(args[0]);
    
    void DispatcherHost::SendEvent(Base* object,
                               const std::string& event,
                               const base::ListValue& arguments) {
  Send(new ShellViewMsg_Object_On_Event(
       routing_id(), object->id(), event, arguments));
}
    
    #include 'base/basictypes.h'
#include 'base/id_map.h'
#include 'base/memory/weak_ptr.h'
#include 'content/public/browser/web_contents_observer.h'
    
    bool MenuDelegate::IsCommandIdChecked(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
    namespace {
    }
    
    #include 'base/files/file_path.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/threading/thread_restrictions.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
#include 'content/nw/src/nw_base.h'
#include 'content/nw/src/nw_content.h'
#include 'content/nw/src/nw_package.h'
#include 'ui/base/accelerators/accelerator.h'
#include 'ui/gfx/image/image_skia_operations.h'
#include 'ui/events/event_constants.h'//for modifier key code
#include 'base/logging.h'
    
    namespace {
void SetProxyConfigCallback(
    base::WaitableEvent* done,
    const scoped_refptr<net::URLRequestContextGetter>& url_request_context_getter,
    const net::ProxyConfig& proxy_config) {
  net::ProxyService* proxy_service =
      url_request_context_getter->GetURLRequestContext()->proxy_service();
  proxy_service->ResetConfigService(base::WrapUnique(new net::ProxyConfigServiceFixed(proxy_config)));
  done->Signal();
}
} // namespace
    
    class NwAppGetDataPathFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetDataPathFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwAppGetDataPathFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.App.getDataPath', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetDataPathFunction);
};
    
    class NwClipboardSetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardSetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
                template<typename T>
            static __device__ __forceinline__ T atomicInc(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count;
                unsigned int tag = threadIdx.x << ( (sizeof(unsigned int) << 3) - 5U);
                do
                {
                    count = *address & TAG_MASK;
                    count = tag | (count + 1);
                    *address = count;
                } while (*address != count);
    }
    
    #endif

    
    #ifdef _MSC_VER
#pragma warning(disable:4244)  // Conversion warnings
#endif
    
      // Computes and returns the squared evaluation metric for a line fit.
  double EvaluateLineFit();
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    // Creates a report of the error rate. The report_level controls the detail
// that is reported to stderr via tprintf:
// 0   -> no output.
// >=1 -> bottom-line error rate.
// >=3 -> font-level error rate.
// boosting_mode determines the return value. It selects which (un-weighted)
// error rate to return.
// The fontinfo_table from MasterTrainer provides the names of fonts.
// The it determines the current subset of the training samples.
// If not NULL, the top-choice unichar error rate is saved in unichar_error.
// If not NULL, the report string is saved in fonts_report.
// (Ignoring report_level).
double ErrorCounter::ReportErrors(int report_level, CountTypes boosting_mode,
                                  const FontInfoTable& fontinfo_table,
                                  const SampleIterator& it,
                                  double* unichar_error,
                                  STRING* fonts_report) {
  // Compute totals over all the fonts and report individual font results
  // when required.
  Counts totals;
  int fontsize = font_counts_.size();
  for (int f = 0; f < fontsize; ++f) {
    // Accumulate counts over fonts.
    totals += font_counts_[f];
    STRING font_report;
    if (ReportString(false, font_counts_[f], &font_report)) {
      if (fonts_report != NULL) {
        *fonts_report += fontinfo_table.get(f).name;
        *fonts_report += ': ';
        *fonts_report += font_report;
        *fonts_report += '\n';
      }
      if (report_level > 2) {
        // Report individual font error rates.
        tprintf('%s: %s\n', fontinfo_table.get(f).name, font_report.string());
      }
    }
  }
  // Report the totals.
  STRING total_report;
  bool any_results = ReportString(true, totals, &total_report);
  if (fonts_report != NULL && fonts_report->length() == 0) {
    // Make sure we return something even if there were no samples.
    *fonts_report = 'NoSamplesFound: ';
    *fonts_report += total_report;
    *fonts_report += '\n';
  }
  if (report_level > 0) {
    // Report the totals.
    STRING total_report;
    if (any_results) {
      tprintf('TOTAL Scaled Err=%.4g%%, %s\n',
              scaled_error_ * 100.0, total_report.string());
    }
    // Report the worst substitution error only for now.
    if (totals.n[CT_UNICHAR_TOP1_ERR] > 0) {
      int charsetsize = unicharset_.size();
      int worst_uni_id = 0;
      int worst_result_id = 0;
      int worst_err = 0;
      for (int u = 0; u < charsetsize; ++u) {
        for (int v = 0; v < charsetsize; ++v) {
          if (unichar_counts_(u, v) > worst_err) {
            worst_err = unichar_counts_(u, v);
            worst_uni_id = u;
            worst_result_id = v;
          }
        }
      }
      if (worst_err > 0) {
        tprintf('Worst error = %d:%s -> %s with %d/%d=%.2f%% errors\n',
                worst_uni_id, unicharset_.id_to_unichar(worst_uni_id),
                unicharset_.id_to_unichar(worst_result_id),
                worst_err, totals.n[CT_UNICHAR_TOP1_ERR],
                100.0 * worst_err / totals.n[CT_UNICHAR_TOP1_ERR]);
      }
    }
    tprintf('Multi-unichar shape use:\n');
    for (int u = 0; u < multi_unichar_counts_.size(); ++u) {
      if (multi_unichar_counts_[u] > 0) {
        tprintf('%d multiple answers for unichar: %s\n',
                multi_unichar_counts_[u],
                unicharset_.id_to_unichar(u));
      }
    }
    tprintf('OK Score histogram:\n');
    ok_score_hist_.print();
    tprintf('ERROR Score histogram:\n');
    bad_score_hist_.print();
  }
    }
    
    #define XIntersectionOf(A,B,X)  ( SlopeFrom(A,B) * ((X) - A.x) + A.y)
    
      // Initialize the bool array to the given size of feature space.
  // The feature_map is just borrowed, and must exist for the entire
  // lifetime of the IntFeatureDist.
  void Init(const IntFeatureMap* feature_map);
    
    /**----------------------------------------------------------------------------
          Macros
----------------------------------------------------------------------------**/
#define AverageOf(A,B)    (((A) + (B)) / 2)
    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
        return 0;
}
int lua_cocos2dx_physics_PhysicsJointLimit_setAnchr1(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointLimit* cobj = nullptr;
    bool ok  = true;
    
    #ifndef AddPair_H
#define AddPair_H
    
    			b2PrismaticJointDef pjd;
			pjd.Initialize(ground, m_platform, b2Vec2(0.0f, 5.0f), b2Vec2(1.0f, 0.0f));
    
    		float32 maxImpulse = 0.0f;
		for (int32 i = 0; i < count; ++i)
		{
			maxImpulse = b2Max(maxImpulse, impulse->normalImpulses[i]);
		}
    
    				if (i > 0)
				{
					b2Vec2 anchor(5.0f + 1.0f * i, 10.0f);
					jd.Initialize(prevBody, body, anchor);
					m_world->CreateJoint(&jd);
				}
    
      // ...Code to store on disk or send over a network goes here...
    
      for (auto file_it = filenames.begin(); file_it != filenames.end();
       ++file_it) {
    auto &filename = *file_it;
    std::string contents;
    if (!flatbuffers::LoadFile(filename.c_str(), true, &contents))
      Error('unable to load file: ' + filename);
    }
    
    static const char* MonsterStorage_method_names[] = {
  '/MyGame.Example.MonsterStorage/Store',
  '/MyGame.Example.MonsterStorage/Retrieve',
};
    
      // Parameters required to initialize the FlatCompiler.
  struct InitParams {
    InitParams()
        : generators(nullptr),
          num_generators(0),
          warn_fn(nullptr),
          error_fn(nullptr) {}
    }
    
    static void Warn(const flatbuffers::FlatCompiler *flatc,
                 const std::string &warn, bool show_exe_name) {
  (void)flatc;
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('warning: %s\n', warn.c_str());
}
    
    namespace flatbuffers {
    }