
        
        namespace atom {
    }
    
        uint8_t flags = 0;
    bool width = false;
    if (params.Get('width', &width) && width) {
      flags |= atom::kAutoResizeWidth;
    }
    bool height = false;
    if (params.Get('height', &height) && height) {
      flags |= atom::kAutoResizeHeight;
    }
    
    template <>
struct Converter<file_dialog::DialogSettings> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     file_dialog::DialogSettings* out) {
    mate::Dictionary dict;
    if (!ConvertFromV8(isolate, val, &dict))
      return false;
    dict.Get('window', &(out->parent_window));
    dict.Get('title', &(out->title));
    dict.Get('message', &(out->message));
    dict.Get('buttonLabel', &(out->button_label));
    dict.Get('nameFieldLabel', &(out->name_field_label));
    dict.Get('defaultPath', &(out->default_path));
    dict.Get('filters', &(out->filters));
    dict.Get('properties', &(out->properties));
    dict.Get('showsTagField', &(out->shows_tag_field));
#if defined(MAS_BUILD)
    dict.Get('securityScopedBookmarks', &(out->security_scoped_bookmarks));
#endif
    return true;
  }
};
    
    namespace atom {
    }
    
      views::LayoutManager* layout_manager() const { return layout_manager_; }
    
    bool Menu::IsEnabledAt(int index) const {
  return model_->IsEnabledAt(index);
}
    
    #include <Python.h>
    
    static const Message* GetCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
static Message* MutableCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
    
    
    {
    {
    {
    {bool AnnotationMatchesSubstring(const string& file_content,
                                const GeneratedCodeInfo::Annotation* annotation,
                                const string& expected_text) {
  std::vector<const GeneratedCodeInfo::Annotation*> annotations;
  annotations.push_back(annotation);
  return AtLeastOneAnnotationMatchesSubstring(file_content, annotations,
                                              expected_text);
}
}  // namespace annotation_test_util
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <string>
    
    // Groups are hacky:  The name of the field is just the lower-cased name
// of the group type.  In C#, though, we would like to retain the original
// capitalization of the type name.
std::string GetFieldName(const FieldDescriptor* descriptor) {
  if (descriptor->type() == FieldDescriptor::TYPE_GROUP) {
    return descriptor->message_type()->name();
  } else {
    return descriptor->name();
  }
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    void PrimitiveFieldGenerator::WriteHash(io::Printer* printer) {
  const char *text = 'if ($has_property_check$) hash ^= $property_name$.GetHashCode();\n';
  if (descriptor_->type() == FieldDescriptor::TYPE_FLOAT) {
    text = 'if ($has_property_check$) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode($property_name$);\n';
  } else if (descriptor_->type() == FieldDescriptor::TYPE_DOUBLE) {
    text = 'if ($has_property_check$) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode($property_name$);\n';
  }
	printer->Print(variables_, text);
}
void PrimitiveFieldGenerator::WriteEquals(io::Printer* printer) {
  const char *text = 'if ($property_name$ != other.$property_name$) return false;\n';
  if (descriptor_->type() == FieldDescriptor::TYPE_FLOAT) {
    text = 'if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals($property_name$, other.$property_name$)) return false;\n';
  } else if (descriptor_->type() == FieldDescriptor::TYPE_DOUBLE) {
    text = 'if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals($property_name$, other.$property_name$)) return false;\n';
  }
  printer->Print(variables_, text);
}
void PrimitiveFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(
    variables_,
    'PrintField(\'$descriptor_name$\', $has_property_check$, $property_name$, writer);\n');
}
    
      virtual void GenerateCodecCode(io::Printer* printer);
  virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    {
    {  if (!namespace_.empty()) {
    printer->Outdent();
    printer->Print('}\n');
  }
  printer->Print('\n');
  printer->Print('#endregion Designer generated code\n');
}
    
    std::shared_ptr<Channel> CreateChannelInternal(const grpc::string& host,
                                               grpc_channel* c_channel);
    
    namespace internal {
class AlarmImpl : public CompletionQueueTag {
 public:
  AlarmImpl() : cq_(nullptr), tag_(nullptr) {
    gpr_ref_init(&refs_, 1);
    grpc_timer_init_unset(&timer_);
    GRPC_CLOSURE_INIT(&on_alarm_,
                      [](void* arg, grpc_error* error) {
                        // queue the op on the completion queue
                        AlarmImpl* alarm = static_cast<AlarmImpl*>(arg);
                        alarm->Ref();
                        grpc_cq_end_op(
                            alarm->cq_, alarm, error,
                            [](void* arg, grpc_cq_completion* completion) {},
                            arg, &alarm->completion_);
                      },
                      this, grpc_schedule_on_exec_ctx);
  }
  ~AlarmImpl() {
    grpc_core::ExecCtx exec_ctx;
    if (cq_ != nullptr) {
      GRPC_CQ_INTERNAL_UNREF(cq_, 'alarm');
    }
  }
  bool FinalizeResult(void** tag, bool* status) override {
    *tag = tag_;
    Unref();
    return true;
  }
  void Set(CompletionQueue* cq, gpr_timespec deadline, void* tag) {
    grpc_core::ExecCtx exec_ctx;
    GRPC_CQ_INTERNAL_REF(cq->cq(), 'alarm');
    cq_ = cq->cq();
    tag_ = tag;
    GPR_ASSERT(grpc_cq_begin_op(cq_, this));
    grpc_timer_init(&timer_, grpc_timespec_to_millis_round_up(deadline),
                    &on_alarm_);
  }
  void Cancel() {
    grpc_core::ExecCtx exec_ctx;
    grpc_timer_cancel(&timer_);
  }
  void Destroy() {
    Cancel();
    Unref();
  }
    }
    }
    
    AuthPropertyIterator::~AuthPropertyIterator() {}
    
    grpc::string SecureAuthContext::GetPeerIdentityPropertyName() const {
  if (!ctx_) {
    return '';
  }
  const char* name = grpc_auth_context_peer_identity_property_name(ctx_);
  return name == nullptr ? '' : name;
}
    
    #include <grpcpp/support/channel_arguments.h>
    
    namespace grpc {
    }
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    void CensusServerCallData::OnDoneRecvMessageCb(void* user_data,
                                               grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusServerCallData* calld =
      reinterpret_cast<CensusServerCallData*>(elem->call_data);
  CensusChannelData* channeld =
      reinterpret_cast<CensusChannelData*>(elem->channel_data);
  GPR_ASSERT(calld != nullptr);
  GPR_ASSERT(channeld != nullptr);
  // Stream messages are no longer valid after receiving trailing metadata.
  if ((*calld->recv_message_) != nullptr) {
    ++calld->recv_message_count_;
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_message_, GRPC_ERROR_REF(error));
}
    
    bool GodotCollisionDispatcher::needsCollision(const btCollisionObject *body0, const btCollisionObject *body1) {
	if (body0->getUserIndex() == CASTED_TYPE_AREA || body1->getUserIndex() == CASTED_TYPE_AREA) {
		// Avoide area narrow phase
		return false;
	}
	return btCollisionDispatcher::needsCollision(body0, body1);
}
    
    
    {#ifdef TOOLS_ENABLED
	EditorPlugins::add_by_type<EditorPluginCSG>();
#endif
#endif
}
    
    class Camera;
    
    NS_CC_BEGIN
// implementation of GridAction
    
    #include '2d/CCAction.h'
#include 'base/CCVector.h'
#include 'base/CCRef.h'
    
    /*
 * Update each tick
 * Time is the percentage of the way through the duration
 */
void PageTurn3D::update(float time)
{
    float tt = MAX(0, time - 0.25f);
    float deltaAy = (tt * tt * 500);
    float ay = -100 - deltaAy;
    
    float deltaTheta = sqrtf(time);
    float theta = deltaTheta > 0.5f ? (float)M_PI_2*deltaTheta : (float)M_PI_2*(1-deltaTheta);
    
    float rotateByYAxis = (2-time)* M_PI;
    
    float sinTheta = sinf(theta);
    float cosTheta = cosf(theta);
    
    for (int i = 0; i <= _gridSize.width; ++i)
    {
        for (int j = 0; j <= _gridSize.height; ++j)
        {
            // Get original vertex
            Vec3 p = getOriginalVertex(Vec2(i ,j));
            
            p.x -= getGridRect().origin.x;
            float R = sqrtf((p.x * p.x) + ((p.y - ay) * (p.y - ay)));
            float r = R * sinTheta;
            float alpha = asinf( p.x / R );
            float beta = alpha / sinTheta;
            float cosBeta = cosf( beta );
            
            // If beta > PI then we've wrapped around the cone
            // Reduce the radius to stop these points interfering with others
            if (beta <= M_PI)
            {
                p.x = ( r * sinf(beta));
            }
            else
            {
                // Force X = 0 to stop wrapped
                // points
                p.x = 0;
            }
    }
    }
    }
    
    /**
 @brief This action simulates a page turn from the bottom right hand corner of the screen.
 
 @details It's not much use by itself but is used by the PageTurnTransition.
         Based on an original paper by L Hong et al.
         http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
  
 @since v0.8.2
 */
class CC_DLL PageTurn3D : public Grid3DAction
{
public:
    /**
     * @js NA 
     */
    virtual GridBase* getGrid() override;
    }
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
    #include 'guetzli/jpeg_data_encoder.h'
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    
    {}  // namespace guetzli