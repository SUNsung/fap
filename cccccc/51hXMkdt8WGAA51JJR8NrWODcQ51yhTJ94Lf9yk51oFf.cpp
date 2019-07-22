
        
          // Import private keys and certificates from PKCS #12 encoded
  // |data|, using the given |password|. If |is_extractable| is false,
  // mark the private key as unextractable from the module.
  // Returns a net error code on failure.
  int ImportFromPKCS12(PK11SlotInfo* slot_info,
                       const std::string& data,
                       const base::string16& password,
                       bool is_extractable,
                       net::ScopedCERTCertificateList* imported_certs);
    
    #include 'base/logging.h'
#include 'native_mate/dictionary.h'
#include 'native_mate/object_template_builder.h'
    
      template <typename T>
  bool SetMethod(const base::StringPiece& key, const T& callback) {
    return GetHandle()
        ->Set(isolate_->GetCurrentContext(), StringToV8(isolate_, key),
              CallbackTraits<T>::CreateTemplate(isolate_, callback)
                  ->GetFunction(isolate_->GetCurrentContext())
                  .ToLocalChecked())
        .ToChecked();
  }
    
    #include 'native_mate/dictionary.h'
#include 'native_mate/scoped_persistent.h'
    
    class Promise {
 public:
  Promise();
  explicit Promise(v8::Isolate* isolate);
  virtual ~Promise();
    }
    
    
    {    // |wrapper| may be empty in some extreme cases, e.g., when
    // Object.prototype.constructor is overwritten.
    v8::Local<v8::Object> wrapper;
    if (!templ->InstanceTemplate()
             ->NewInstance(isolate->GetCurrentContext())
             .ToLocal(&wrapper)) {
      // The current wrappable object will be no longer managed by V8. Delete
      // this now.
      delete this;
      return;
    }
    InitWith(isolate, wrapper);
  }
    
    // Helper to convert from OnceCallback to Callback.
template <typename T>
void CallMigrationCallback(T callback,
                           std::unique_ptr<content::StreamInfo> stream_info) {
  std::move(callback).Run(std::move(stream_info));
}
    
    
    {  base::ListValue result;
  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method_Sync(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get()),
      &result));
  return converter->ToV8Value(&result, isolate->GetCurrentContext());
}
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    #include 'ui/base/models/simple_menu_model.h'
    
    // Popup menus may get squished if they open up too close to the bottom of the
// screen. This function takes the size of the screen, the size of the menu,
// an optional widget, the Y position of the mouse click, and adjusts the popup
// menu's Y position to make it fit if it's possible to do so.
// Returns the new Y position of the popup menu.
int CalculateMenuYPosition(const GdkRectangle* screen_rect,
                           const GtkRequisition* menu_req,
                           GtkWidget* widget, const int y) {
  CHECK(screen_rect);
  CHECK(menu_req);
  // If the menu would run off the bottom of the screen, and there is enough
  // screen space upwards to accommodate the menu, then pop upwards. If there
  // is a widget, then also move the anchor point to the top of the widget
  // rather than the bottom.
  const int screen_top = screen_rect->y;
  const int screen_bottom = screen_rect->y + screen_rect->height;
  const int menu_bottom = y + menu_req->height;
  int alternate_y = y - menu_req->height;
  if (widget) {
    GtkAllocation allocation;
    gtk_widget_get_allocation(widget, &allocation);
    alternate_y -= allocation.height;
  }
  if (menu_bottom >= screen_bottom && alternate_y >= screen_top)
    return alternate_y;
  return y;
}
    
    
    {  // Convert from content coordinates to window coordinates.
  // This code copied from chrome_web_contents_view_delegate_views.cc
  aura::Window* target_window = GetActiveNativeView(rfh);
  aura::Window* root_window = target_window->GetRootWindow();
  views::Widget* top_level_widget =
    views::Widget::GetTopLevelWidgetForNativeView(target_window);
  aura::client::ScreenPositionClient* screen_position_client =
        aura::client::GetScreenPositionClient(root_window);
  if (screen_position_client) {
    screen_position_client->ConvertPointToScreen(target_window,
             &screen_point);
  }
  set_delay_destruction(true);
  menu_runner_.reset(new views::MenuRunner(menu_model_.get(), views::MenuRunner::CONTEXT_MENU,
                                           base::Bind(&Menu::OnMenuClosed, base::Unretained(this))));
  menu_runner_->RunMenuAt(top_level_widget,
                       nullptr,
                       gfx::Rect(screen_point, gfx::Size()),
                          views::MenuAnchorPosition::kTopRight,
                       ui::MENU_SOURCE_NONE);
  // It is possible for the same MenuMessageLoopAura to start a nested
  // message-loop while it is already running a nested loop. So make
  // sure the quit-closure gets reset to the outer loop's quit-closure
  // once the innermost loop terminates.
  {
    base::AutoReset<base::Closure> reset_quit_closure(&message_loop_quit_,
                                                      base::Closure());
  
    //base::MessageLoop* loop = base::MessageLoop::current();
    base::MessageLoopCurrent::ScopedNestableTaskAllower allow;
    base::RunLoop run_loop;
    message_loop_quit_ = run_loop.QuitClosure();
  
    run_loop.Run();
  }
  set_delay_destruction(false);
  if (pending_destruction())
    object_manager_->OnDeallocateObject(id_);
}
    
    static const int kIconWidth = 16;
static const int kIconHeight = 16;
    
    class NwAppCloseAllWindowsFunction : public UIThreadExtensionFunction {
 public:
  NwAppCloseAllWindowsFunction() {}
    }
    
    NwObjDestroyFunction::~NwObjDestroyFunction() {
}
    
    class NwObjAllocateIdFunction : public NWSyncExtensionFunction {
 public:
  NwObjAllocateIdFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #endif   // CAFFE_UTIL_HDF5_H_
#endif   // USE_HDF5

    
    
    {    // Check out generate_sample_data.py in the same directory.
    filename = new string(ABS_TEST_DATA_DIR '/sample_data_list.txt');
    LOG(INFO)<< 'Using sample HDF5 data file ' << filename;
  }
    
    void hdf5_save_string(hid_t loc_id, const string& dataset_name,
                      const string& s) {
  herr_t status = \
    H5LTmake_dataset_string(loc_id, dataset_name.c_str(), s.c_str());
  CHECK_GE(status, 0)
    << 'Failed to save string dataset with name ' << dataset_name;
}
    
     protected:
  // Helpers for Init.
  /// @brief Append a new top blob to the net.
  void AppendTop(const NetParameter& param, const int layer_id,
                 const int top_id, set<string>* available_blobs,
                 map<string, int>* blob_name_to_idx);
  /// @brief Append a new bottom blob to the net.
  int AppendBottom(const NetParameter& param, const int layer_id,
                   const int bottom_id, set<string>* available_blobs,
                   map<string, int>* blob_name_to_idx);
  /// @brief Append a new parameter blob to the net.
  void AppendParam(const NetParameter& param, const int layer_id,
                   const int param_id);
    
    void convert_dataset(const string& input_folder, const string& output_folder,
    const string& db_type) {
  scoped_ptr<db::DB> train_db(db::GetDB(db_type));
  train_db->Open(output_folder + '/cifar10_train_' + db_type, db::NEW);
  scoped_ptr<db::Transaction> txn(train_db->NewTransaction());
  // Data buffer
  int label;
  char str_buffer[kCIFARImageNBytes];
  Datum datum;
  datum.set_channels(3);
  datum.set_height(kCIFARSize);
  datum.set_width(kCIFARSize);
    }
    
    #include 'boost/scoped_ptr.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/db.hpp'
#include 'caffe/util/format.hpp'
    
      virtual inline const char* type() const { return 'Pooling'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int MinTopBlobs() const { return 1; }
  // MAX POOL layers can output an extra top blob for the mask;
  // others can only output the pooled inputs.
  virtual inline int MaxTopBlobs() const {
    return (this->layer_param_.pooling_param().pool() ==
            PoolingParameter_PoolMethod_MAX) ? 2 : 1;
  }
    
    
    {
  shared_ptr<Caffe::RNG> rng_;
  Phase phase_;
  Blob<Dtype> data_mean_;
  vector<Dtype> mean_values_;
};
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    // Open the boxfile based on the given image filename.
// Returns nullptr if the box file cannot be opened.
FILE* OpenBoxFile(const STRING& fname);
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    // Computes the histogram for the given image rectangle, and the given
// single channel. Each channel is always one byte per pixel.
// Histogram is always a kHistogramSize(256) element array to count
// occurrences of each pixel value.
void HistogramRect(Pix* src_pix, int channel,
                   int left, int top, int width, int height,
                   int* histogram);
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
    block_id_t real_superblock_t::get_sindex_block_id() {
    buf_read_t read(&sb_buf_);
    const reql_btree_superblock_t *sb_data = get_reql_btree_superblock(&read);
    return sb_data->sindex_block;
}
    
        MUST_USE bool mark_secondary_index_deleted(
            buf_lock_t *sindex_block,
            const sindex_name_t &name);
    
    // The tests from the instantiation above will have these names:
//
//    * AnotherInstantiationName/FooTest.DoesBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.DoesBlah/1 for 'dog'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/0 for 'cat'
//    * AnotherInstantiationName/FooTest.HasBlahBlah/1 for 'dog'
//
// Please note that INSTANTIATE_TEST_CASE_P will instantiate all tests
// in the given test case, whether their definitions come before or
// AFTER the INSTANTIATE_TEST_CASE_P statement.
//
// Please also note that generator expressions (including parameters to the
// generators) are evaluated in InitGoogleTest(), after main() has started.
// This allows the user on one hand, to adjust generator parameters in order
// to dynamically determine a set of tests to run and on the other hand,
// give the user a chance to inspect the generated tests with Google Test
// reflection API before RUN_ALL_TESTS() is executed.
//
// You can see samples/sample7_unittest.cc and samples/sample8_unittest.cc
// for more examples.
//
// In the future, we plan to publish the API for defining new parameter
// generators. But for now this interface remains part of the internal
// implementation and is subject to change.
//
//
// A parameterized test fixture must be derived from testing::Test and from
// testing::WithParamInterface<T>, where T is the type of the parameter
// values. Inheriting from TestWithParam<T> satisfies that requirement because
// TestWithParam<T> inherits from both Test and WithParamInterface. In more
// complicated hierarchies, however, it is occasionally useful to inherit
// separately from Test and WithParamInterface. For example:
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(SingleFailureChecker);
};
    
    // The variables defined in the type-parameterized test macros are
// static as typically these macros are used in a .h file that can be
// #included in multiple translation units linked together.
# define TYPED_TEST_CASE_P(CaseName) \
  static ::testing::internal::TypedTestCasePState \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName)
    
    // This flags control whether Google Test prints the elapsed time for each
// test.
GTEST_DECLARE_bool_(print_time);
    
    ]]
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file fully_connected.cc
 * \brief fully connect operator
*/
#include './fully_connected-inl.h'
#include './mkldnn/mkldnn_ops-inl.h'
#include './mkldnn/mkldnn_base-inl.h'
#if MXNET_USE_NNPACK == 1
#include '../nnpack/nnpack_fully_connected-inl.h'
#endif  // MXNET_USE_NNPACK
    
      if (rnn_forward_prim->size() <= (size_t)layer_index) {
    primitive rnn_prim = rnn_forward(prim_desc, (*x_memory)[layer_index],
          (*hcx_memory)[layer_index], (*wx_memory)[layer_index],
          (*wh_memory)[layer_index], (*bias_memory)[layer_index],
          (*y_memory)[layer_index],
         (*hcy_memory)[layer_index], null_memory_);
    rnn_forward_prim->push_back(rnn_prim);
  }
  MKLDNNStream::Get()->RegisterPrim((*rnn_forward_prim)[layer_index]);
  MKLDNNStream::Get()->Submit();
    
    struct IndexArrayParam : public dmlc::Parameter<IndexArrayParam> {
  dmlc::optional<mxnet::Tuple<int>> axes;
  DMLC_DECLARE_PARAMETER(IndexArrayParam) {
    DMLC_DECLARE_FIELD(axes).set_default(dmlc::optional<mxnet::Tuple<int>>())
      .describe('The axes to include in the index array. Supports negative values.');
  }
};  // struct IndexArrayParam
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
        Collection* getCollection() const;
    void setCollection(Collection* oplog);
    void resetCollection();
    
    TEST(BSONElementIntegerParseTest, ParseIntegerElementToLongRejectsString) {
    BSONObj query = BSON(''
                         << '1');
    ASSERT_NOT_OK(query.firstElement().parseIntegerElementToLong());
}
    
    TEST(CountCommandTest, ConvertToAggregationWithQueryAndFilterAndLimit) {
    auto commandObj = BSON('count'
                           << 'TestColl'
                           << '$db'
                           << 'TestDB'
                           << 'limit'
                           << 200
                           << 'skip'
                           << 300
                           << 'query'
                           << BSON('x' << 7));
    auto countCmd = CountCommand::parse(ctxt, commandObj);
    auto agg = uassertStatusOK(countCommandAsAggregationCommand(countCmd, testns));
    }
    
        auto& document = array->getDocument();
    auto firstElementToInsert =
        document.makeElementWithNewFieldName(StringData(), valuesToPush.front());
    
    
    {    CollectionData& coll = _usage[hashedNs];
    _record(opCtx, coll, logicalOp, lockType, micros, readWriteType);
}