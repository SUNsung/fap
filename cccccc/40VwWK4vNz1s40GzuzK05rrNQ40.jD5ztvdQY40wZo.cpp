
        
        void DocumentHook2(bool start, content::RenderFrame* frame, Dispatcher* dispatcher) {
  // ignore the first invocation of this hook for iframe
  // or we'll trigger creating a context with invalid type
  // there will follow another one with valid url
  blink::ScriptForbiddenScope::AllowUserAgentScript script;
  blink::WebLocalFrame* web_frame = frame->GetWebFrame();
  GURL frame_url = ScriptContext::GetDocumentLoaderURLForFrame(web_frame);
  if (web_frame->Parent() && (!frame_url.is_valid() || frame_url.is_empty()))
    return;
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::HandleScope scope(isolate);
  blink::WebFrame* f = frame->GetRenderView()->GetWebView()->MainFrame();
  if (!f->IsWebLocalFrame())
    return;
  blink::WebLocalFrame* local_frame = f->ToWebLocalFrame();
  v8::Local<v8::Context> v8_context = local_frame->MainWorldScriptContext();
  ScriptContext* script_context =
      dispatcher->script_context_set().GetByV8Context(v8_context);
  if (start)
    TryInjectStartScript(web_frame, script_context ? script_context->extension() : nullptr, true);
  if (!script_context)
    return;
  std::vector<v8::Handle<v8::Value> > arguments;
  v8::Local<v8::Value> window =
    web_frame->MainWorldScriptContext()->Global();
  arguments.push_back(v8::Boolean::New(isolate, start));
  arguments.push_back(window);
  if (base::FeatureList::IsEnabled(::features::kNWNewWin)) {
    content::RenderFrame* main_frame = frame->GetRenderView()->GetMainRenderFrame();
    arguments.push_back(v8::Integer::New(isolate, main_frame->GetRoutingID()));
    }
    }
    
        // Ignore first non-switch arg if it's not a standalone package.
    bool ignore_arg = !package->self_extract();
    for (unsigned i = 1; i < argv.size(); ++i) {
      if (ignore_arg && argv[i] == args[0]) {
        ignore_arg = false;
        continue;
      }
    }
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    #include 'content/nw/src/api/menu/menu_delegate.h'
    
    
    {  is_menu_modified_ = true;
  menu_item->menu_ = this;
  menu_items_.insert(menu_items_.begin() + pos, menu_item);
}
    
    class NwAppGetArgvSyncFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetArgvSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #include <vector>
    
    NwObjAllocateIdFunction::~NwObjAllocateIdFunction() {
}
    
    
    { protected:
  int n_ = 0;
  std::mutex m_;
  std::condition_variable cv_;
};
    
    OPERATOR_SCHEMA(Exp)
    .NumInputs(1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .IdenticalTypeAndShape()
    .SetDoc(R'DOC(
Calculates the exponential of the given input tensor ($exp(x)$), element-wise. This
operation can be done in an in-place fashion too, by providing the same input
and output blobs.
    
    OpSchema::Cost CostInferenceForFC(
    const OperatorDef& def,
    const vector<TensorShape>& in) {
  CAFFE_ENFORCE_EQ(in.size(), 3, 'FC requires three inputs');
  struct OpSchema::Cost c;
  ArgumentHelper helper(def);
    }
    
    namespace caffe2 {
    }
    
    namespace caffe2 {
namespace {
    }
    }
    
    /// Root key to retrieve Kafka topic configurations.
const std::string kKafkaTopicParserRootKey('kafka_topics');
    
    Status PrometheusMetricsConfigParserPlugin::update(const std::string& source,
                                                   const ParserConfig& config) {
  auto prometheus_targets = config.find(kPrometheusParserRootKey);
  if (prometheus_targets != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(prometheus_targets->second.doc(), obj);
    data_.add(kPrometheusParserRootKey, obj);
  }
    }
    
    
    {
    {  c.reset();
}
}

    
      auto obj = data_.getObject();
  data_.copyFrom(cv->second.doc(), obj);
  data_.add('views', obj);
    
    #include <gtest/gtest.h>
    
      auto constraint = Constraint(EQUALS);
  constraint.expr = 'some';
  cl.add(constraint);
    
    
    {/// Get a performance limit by name and optional level.
size_t getWorkerLimit(WatchdogLimitType limit);
}

    
    
    {  EXPECT_EQ(reply.type, audit_event_record.type);
  EXPECT_EQ('1440542781.644:403030', audit_event_record.audit_id);
  EXPECT_EQ(audit_event_record.fields.size(), 4U);
  EXPECT_EQ(audit_event_record.fields.count('argc'), 1U);
  EXPECT_EQ(audit_event_record.fields['argc'], '3');
  EXPECT_EQ(audit_event_record.fields['a0'], '\'H=1 \'');
  EXPECT_EQ(audit_event_record.fields['a1'], '\'/bin/sh\'');
  EXPECT_EQ(audit_event_record.fields['a2'], 'c');
}