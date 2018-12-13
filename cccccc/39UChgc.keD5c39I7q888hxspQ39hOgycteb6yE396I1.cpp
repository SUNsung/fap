
        
        // Calls the registered C++ shape inference function for <node> (a serialized
// NodeDef).
// Should not be called for shape functions that access input tensors; constant
// input tensor values are not made available, and so the inferred shapes will
// be less precise than they could be.
//
// Returns an error, or OK, in <out_status> according to whether the shape
// inference was successful.
//
// On success, returns a vector populated with the inferred output shapes (as
// serialized CppShapeInferenceResult protos) followed by a serialized
// CppShapeInferenceInputsNeeded proto.
//
// This is temporary code to be used during the migration
// from python shape inference functions to C++ shape inference functions.
std::vector<string> RunCppShapeInference(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    PyObject* input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    TF_Status* out_status);
    
    Status CostAnalyzer::GenerateReport(std::ostream& os, bool per_node_report,
                                    bool verbose) {
  GatherCosts();
  PreprocessCosts();
  AnalyzeCosts();
  PrintAnalysis(os, per_node_report, verbose);
  return Status::OK();
}
    
    REGISTER_OP('Ackermann')
    .Output('ackermann: string')
    .Doc(R'doc(
Output a fact about the ackermann function.
)doc');
    
    Safe_PyObjectPtr make_safe(PyObject* object) {
  return Safe_PyObjectPtr(object);
}
    
      // The CUDA stream callback type signature.
  // The data passed to AddStreamCallback is subsequently passed to this
  // callback when it fires.
  //
  // Some notable things:
  // * Callbacks must not make any CUDA API calls.
  // * Callbacks from independent streams execute in an undefined order and may
  //   be serialized.
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__STREAM.html#group__CUDA__STREAM_1g613d97a277d7640f4cb1c03bd51c2483
  typedef void (*StreamCallback)(CUstream stream, CUresult status, void *data);
    
    class InAppPurchase : public mate::EventEmitter<InAppPurchase>,
                      public in_app_purchase::TransactionObserver {
 public:
  static mate::Handle<InAppPurchase> Create(v8::Isolate* isolate);
    }
    
    
    {}  // namespace atom
    
    class Screen : public mate::EventEmitter<Screen>,
               public display::DisplayObserver {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
    namespace gfx {
class Image;
}
    
    void Event::RenderFrameHostChanged(content::RenderFrameHost* old_rfh,
                                   content::RenderFrameHost* new_rfh) {
  if (sender_ && sender_ == old_rfh)
    sender_ = new_rfh;
}
    
    class Event : public Wrappable<Event>, public content::WebContentsObserver {
 public:
  static Handle<Event> Create(v8::Isolate* isolate);
    }
    
    namespace atom {
    }
    
    template <typename T>
int32_t TrackableObject<T>::next_id_ = 0;
    
    v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    #ifndef CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
#define CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
    
    namespace nw {
    }
    
    bool NwAppClearCacheFunction::RunNWSync(base::ListValue* response, std::string* error) {
  content::BrowsingDataRemover* remover = content::BrowserContext::GetBrowsingDataRemover(
      Profile::FromBrowserContext(context_));
    }
    
        std::string error() {
      return error_;
    }
    
    namespace extensions {
    }
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethod(render_frame_host(), id, type, method, *arguments);
  return true;
}
    
      private:
    ~NwScreenDisplayObserver() override;
    // gfx::DisplayObserver implementation.
    void OnDisplayMetricsChanged(const display::Display& display, uint32_t changed_metrics) override;
    void OnDisplayAdded(const display::Display& new_display) override;
    void OnDisplayRemoved(const display::Display& old_display) override;
    
      // The ColPartitionGrid that we are processing. This pointer is passed in from
  // the caller, so do NOT destroy it in the class.
  ColPartitionGrid* part_grid_;
    
      /**
   * Returns orientation for the block the iterator points to.
   *   orientation, writing_direction, textline_order: see publictypes.h
   *   deskew_angle: after rotating the block so the text orientation is
   *                 upright, how many radians does one have to rotate the
   *                 block anti-clockwise for it to be level?
   *                   -Pi/4 <= deskew_angle <= Pi/4
   */
  void Orientation(tesseract::Orientation *orientation,
                   tesseract::WritingDirection *writing_direction,
                   tesseract::TextlineOrder *textline_order,
                   float *deskew_angle) const;
    
    
    {}  // namespace tesseract.

    
      // Count the # of entries starting with a specific prefix.
  for (vc_it.mark_cycle_pt(); !vc_it.cycled_list(); vc_it.forward()) {
    ParamContent* vc = vc_it.data();
    STRING tag;
    STRING tag2;
    STRING tag3;
    }
    
    // Reads all boxes from the string. Otherwise, as ReadAllBoxes.
// continue_on_failure allows reading to continue even if an invalid box is
// encountered and will return true if it succeeds in reading some boxes.
// It otherwise gives up and returns false on encountering an invalid box.
bool ReadMemBoxes(int target_page, bool skip_blanks, const char* box_data,
                  bool continue_on_failure,
                  GenericVector<TBOX>* boxes,
                  GenericVector<STRING>* texts,
                  GenericVector<STRING>* box_texts,
                  GenericVector<int>* pages);
    
    // Converts a streamable value to an std::string.  A NULL pointer is
// converted to '(null)'.  When the input value is a ::string,
// ::std::string, ::wstring, or ::std::wstring object, each NUL
// character in it is replaced with '\\0'.
template <typename T>
std::string StreamableToString(const T& streamable) {
  return (Message() << streamable).GetString();
}
    
      // Returns true iff the unit test passed (i.e. all test cases passed).
  bool Passed() const;
    
      void depart() {
    if (link_.depart()) delete value_;
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12>
struct Types12 {
  typedef T1 Head;
  typedef Types11<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> Tail;
};
    
    
    {
    {      // Marks all multiples of i (except i itself) as non-prime.
      for (int j = 2*i; j <= max; j += i) {
        is_prime_[j] = false;
      }
    }
  }
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
     public:
  // Clones a 0-terminated C string, allocating memory using new.
  static const char* CloneCString(const char* a_c_string);
    
    // Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}