
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      const string& kernel_name() const { return kernel_name_; }
  int unroll_factor() const { return unroll_factor_; }
  void SetLaunchDimensions(const LaunchDimensions& launch_dims);
    
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
    
    // Returns the argmax of `input` along `axis`. `output_type` is the type to
// use for the output.
XlaOp ArgMax(XlaOp input, PrimitiveType output_type, int axis);
XlaOp ArgMaxTwoPass(XlaOp input, PrimitiveType output_type, int axis);
    
    // Register the CPU kernels.
#define REGISTER_DIAGOP(T)                                    \
  REGISTER_KERNEL_BUILDER(                                    \
      Name('Diag').Device(DEVICE_CPU).TypeConstraint<T>('T'), \
      DiagOp<CPUDevice, T>)
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    namespace content {
class RenderFrameHost;
}
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    base::string16 MenuDelegate::GetLabelForCommandId(int command_id) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  return item->label_;
}
    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
    bool NwAppGetDataPathFunction::RunNWSync(base::ListValue* response, std::string* error) {
  response->AppendString(browser_context()->GetPath().value());
  return true;
}
    
    bool NwObjAllocateIdFunction::RunNWSync(base::ListValue* response, std::string* error) {
  response->AppendInteger(nw::ObjectManager::AllocateId());
  return true;
}
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
      // Setup the normalization transformation parameters.
  // The normalizations applied to a blob are as follows:
  // 1. An optional block layout rotation that was applied during layout
  // analysis to make the textlines horizontal.
  // 2. A normalization transformation (LocalNormTransform):
  // Subtract the 'origin'
  // Apply an x,y scaling.
  // Apply an optional rotation.
  // Add back a final translation.
  // The origin is in the block-rotated space, and is usually something like
  // the x-middle of the word at the baseline.
  // 3. Zero or more further normalization transformations that are applied
  // in sequence, with a similar pattern to the first normalization transform.
  //
  // A DENORM holds the parameters of a single normalization, and can execute
  // both the LocalNormTransform (a forwards normalization), and the
  // LocalDenormTransform which is an inverse transform or de-normalization.
  // A DENORM may point to a predecessor DENORM, which is actually the earlier
  // normalization, so the full normalization sequence involves executing all
  // predecessors first and then the transform in 'this'.
  // Let x be image co-ordinates and that we have normalization classes A, B, C
  // where we first apply A then B then C to get normalized x':
  // x' = CBAx
  // Then the backwards (to original coordinates) would be:
  // x = A^-1 B^-1 C^-1 x'
  // and A = B->predecessor_ and B = C->predecessor_
  // NormTransform executes all predecessors recursively, and then this.
  // NormTransform would be used to transform an image-based feature to
  // normalized space for use in a classifier
  // DenormTransform inverts this and then all predecessors. It can be
  // used to get back to the original image coordinates from normalized space.
  // The LocalNormTransform member executes just the transformation
  // in 'this' without the layout rotation or any predecessors. It would be
  // used to run each successive normalization, eg the word normalization,
  // and later the character normalization.
    
    ELISTIZEH(PARA)
    
    class REJMAP
{
  std::unique_ptr<REJ[]> ptr;  // ptr to the chars
  int16_t len;                 //Number of chars
    }
    
      // Functions to navigate the tree. Unlike the original implementation, we
  // store the root at index 0.
  int ParentNode(int index) const {
    return (index + 1) / 2 - 1;
  }
  int LeftChild(int index) const {
    return index * 2 + 1;
  }
    
      int operator==(const KDPtrPair<Key, Data>& other) const {
    return key_ == other.key_;
  }
    
    struct INT_FX_RESULT_STRUCT {
  int32_t Length;                  // total length of all outlines
  int16_t Xmean, Ymean;            // center of mass of all outlines
  int16_t Rx, Ry;                  // radius of gyration
  int16_t NumBL, NumCN;            // number of features extracted
  int16_t Width;                   // Width of blob in BLN coords.
  uint8_t YBottom;                 // Bottom of blob in BLN coords.
  uint8_t YTop;                    // Top of blob in BLN coords.
};
    
    // Provides access to the ShapeTable that this classifier works with.
const ShapeTable* TessClassifier::GetShapeTable() const {
  return classify_->shape_table();
}
// Provides access to the UNICHARSET that this classifier works with.
// Only needs to be overridden if GetShapeTable() can return nullptr.
const UNICHARSET& TessClassifier::GetUnicharset() const {
  return classify_->unicharset;
}
    
      Status RequestStream(ServerContext* context,
                       ServerReader<EchoRequest>* reader,
                       EchoResponse* response) override;
    
    #include <grpcpp/support/channel_arguments.h>
    
    #include <grpc/grpc.h>
#include <grpc/support/alloc.h>
#include <grpc/support/log.h>
#include <grpc/support/string_util.h>
#include <grpc/support/time.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/impl/codegen/sync.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
    
      /* It wouldn't be unusual to get a success immediately. But we'll still get
     an IOCP notification, so let's ignore it. */
  if (!success) {
    int last_error = WSAGetLastError();
    if (last_error != ERROR_IO_PENDING) {
      error = GRPC_WSA_ERROR(last_error, 'ConnectEx');
      goto failure;
    }
  }
    
    // This function is for preventing the program from invoking
// an error handler due to configuration error and
// make test routines know whether there is error.
void FakeConfigErrorFunction(const char* error_message) {
  g_config_error_function_called = true;
}
    
    namespace grpc_impl {
    }
    
    
    {  grpc::testing::UnimplementedEchoService::Service unimplemented_service_;
  std::vector<std::unique_ptr<ServerCompletionQueue>> cqs_;
  std::unique_ptr<grpc::testing::EchoTestService::Stub> stub_;
  std::unique_ptr<Server> server_;
  std::ostringstream server_address_;
  bool inproc_;
};
    
      Status RequestStream(ServerContext* context,
                       ServerReader<EchoRequest>* reader,
                       EchoResponse* response) override {
    EchoRequest request;
    grpc::string resp('');
    while (reader->Read(&request)) {
      gpr_log(GPR_INFO, 'recv msg %s', request.message().c_str());
      resp.append(request.message());
    }
    response->set_message(resp);
    return Status::OK;
  }
    
      Verifier().Expect(1, true).Expect(2, true).Verify(cq_.get());
  ParseFromByteBuffer(&recv_request_buffer_, &recv_request_);
  EXPECT_EQ(send_request_.message(), recv_request_.message());
    
      // actions
  pageDict->lookupNF('AA', &actions);
  if (!(actions.isDict() || actions.isNull())) {
      error(-1, 'Page additional action object (page %d) is wrong type (%s)',
            num, actions.getTypeName());
      actions.initNull();
  }
  
  return;
    
    static int fromRoman(const char *buffer) {
  int digit_value, prev_digit_value, value;
  int i;
    }
    
    Object *Parser::getObj(Object *obj, std::set<int> *fetchOriginatorNums)
{
  return getObj(obj, NULL, cryptRC4, 0, 0, 0, fetchOriginatorNums);
}
    
      // Does this device use upside-down coordinates?
  // (Upside-down means (0,0) is the top left corner of the page.)
  virtual GBool upsideDown() { return gTrue; }
    
      GBool isOk () { return ok; }
    
      //----- update graphics state
  virtual void updateAll(GfxState *state);
  virtual void updateCTM(GfxState *state, double m11, double m12,
			 double m21, double m22, double m31, double m32);
  virtual void updateLineDash(GfxState *state);
  virtual void updateFlatness(GfxState *state);
  virtual void updateLineJoin(GfxState *state);
  virtual void updateLineCap(GfxState *state);
  virtual void updateMiterLimit(GfxState *state);
  virtual void updateLineWidth(GfxState *state);
  virtual void updateStrokeAdjust(GfxState *state);
  virtual void updateFillColor(GfxState *state);
  virtual void updateStrokeColor(GfxState *state);
  virtual void updateBlendMode(GfxState *state);
  virtual void updateFillOpacity(GfxState *state);
  virtual void updateStrokeOpacity(GfxState *state);
    
      if (action->second == 'genConfig') {
    std::map<std::string, std::string> config;
    auto stat = genConfig(config);
    response.push_back(config);
    return stat;
  } else if (action->second == 'genPack') {
    auto name = request.find('name');
    auto value = request.find('value');
    if (name == request.end() || value == request.end()) {
      return Status(1, 'Missing name or value');
    }
    }
    
      const std::string& getName() const {
    return name_;
  }
    
    ExpectedSuccess<DatabaseError> InMemoryDatabase::putString(
    const std::string& domain,
    const std::string& key,
    const std::string& value) {
  return putValue(domain, key, value);
}
    
    
    {} // namespace
    
    enum class RocksdbMigrationError {
  InvalidArgument = 1,
  FailToOpen = 2,
  FailToGetVersion = 3,
  NoMigrationFromCurrentVersion = 5,
  MigrationLogicError = 6,
  FailToOpenSrcDatabase = 7,
  FailMoveDatabase = 8,
};
    
      auto& aliases = instance().aliases_;
  for (const auto& flag : ordered_info) {
    if (details.count(flag.second->name) > 0) {
      const auto& detail = details.at(flag.second->name);
      if ((shell && !detail.shell) || (!shell && detail.shell) ||
          (external && !detail.external) || (!external && detail.external) ||
          (cli && !detail.cli) || (!cli && detail.cli) || detail.hidden) {
        continue;
      }
    } else if (aliases.count(flag.second->name) > 0) {
      const auto& alias = aliases.at(flag.second->name);
      // Aliases are only printed if this is an external tool and the alias
      // is external.
      if (!alias.external || !external) {
        continue;
      }
    } else {
      // This flag was not defined as an osquery flag or flag alias.
      continue;
    }
    }
    
      /// Tables may be detached by name.
  virtual void detach(const std::string& /*name*/) {}