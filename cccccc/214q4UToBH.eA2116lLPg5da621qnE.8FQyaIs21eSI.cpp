
        
          if (flags.bit (CHECK_DAWGS) &&
    (word->best_choice->permuter () != SYSTEM_DAWG_PERM) &&
    (word->best_choice->permuter () != FREQ_DAWG_PERM) &&
    (word->best_choice->permuter () != USER_DAWG_PERM) &&
    (word->best_choice->permuter () != NUMBER_PERM)) {
    if (tessedit_adaption_debug) tprintf('word not in dawgs\n');
    return FALSE;
  }
    
      for (int i = 0; i < boxes.size() - 1; i++) {
    bool foundit = false;
    if (page_res != NULL) {
      if (i == 0) {
        foundit = ResegmentCharBox(page_res, NULL, boxes[i], boxes[i + 1],
                                   full_texts[i].string());
      } else {
        foundit = ResegmentCharBox(page_res, &boxes[i-1], boxes[i],
                                   boxes[i + 1], full_texts[i].string());
      }
    } else {
      foundit = ResegmentWordBox(block_list, boxes[i], boxes[i + 1],
                                 texts[i].string());
    }
    if (!foundit) {
      box_failures++;
      ReportFailedBox(i, boxes[i], texts[i].string(),
                      'FAILURE! Couldn't find a matching blob');
    }
  }
    
    // Returns the x,y means as an FCOORD.
FCOORD LLSQ::mean_point() const {
  if (total_weight > 0.0) {
    return FCOORD(sigx / total_weight, sigy / total_weight);
  } else {
    return FCOORD(0.0f, 0.0f);
  }
}
    
      Pix* render_mask(TBOX* mask_box) {
    return PDBLK::render_mask(re_rotation_, mask_box);
  }
    
    void ROW::recalc_bounding_box() {  //recalculate BB
  WERD *word;                    //current word
  WERD_IT it = &words;           //words of ROW
  inT16 left;                    //of word
  inT16 prev_left;               //old left
    }
    
    
    {    // also update node groups
    for (auto nodeTag : newNodeTags)
    {
        AddToNodeGroup(nodeTag, newNode);
    }
}
    
    void GranularGPUDataTransferer::WaitForSyncPointOnAssignStreamAsync()
{
    PrepareDevice(m_deviceId);
    cudaStreamWaitEvent(GetAssignStream(), m_syncEvent, 0 /*flags 'must be 0'*/) || 'cudaStreamWaitEvent failed';
}
    
        // prepare features
    auto& featureNodes = m_net->FeatureNodes();
    
    // ===========================================================================
// DoExportToDbn() - implements CNTK 'exportdbn' command
// ===========================================================================
    
    #include 'Basics.h'
#include <chrono>
#include 'TimerUtility.h'
#include <string>
    
    namespace msra { namespace dbn {
    }
    }
    
    template <class _T>
class array_ref
{
    _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }
    
    /**
 * @brief An osquery backing storage (database) type that persists executions.
 *
 * The osquery tools need a high-performance storage and indexing mechanism for
 * storing intermediate results from EventPublisher%s, persisting one-time
 * generated values, and performing non-memory backed differentials.
 *
 * Practically, osquery is built around RocksDB's performance guarantees and
 * all of the internal APIs expect RocksDB's indexing and read performance.
 * However, access to this representation of a backing-store is still abstracted
 * to removing RocksDB as a dependency for the osquery SDK.
 */
class DatabasePlugin : public Plugin {
 public:
  /**
   * @brief Perform a domain and key lookup from the backing store.
   *
   * Database value access indexing is abstracted into domains and keys.
   * Both are string values but exist separately for simple indexing without
   * API-enforcing tokenization. In some cases we do add a component-specific
   * tokeninzation to keys.
   *
   * @param domain A string value representing abstract storage indexing.
   * @param key A string value representing the lookup/retrieval key.
   * @param value The output parameter, left empty if the key does not exist.
   * @return Failure if the data could not be accessed. It is up to the plugin
   * to determine if a missing key means a non-success status.
   */
  virtual Status get(const std::string& domain,
                     const std::string& key,
                     std::string& value) const = 0;
    }
    
      /**
   * @brief The std::thread's interruption point.
   */
  virtual void interrupt() final;
    
      /*
   * @brief Print help-style output to stdout for a given flag set.
   *
   * @param shell Only print shell flags.
   * @param external Only print external flags (from extensions).
   */
  static void printFlags(bool shell = false,
                         bool external = false,
                         bool cli = false);
    
      /**
   * @brief A constructor which can be used to concisely express the status of
   * an operation.
   *
   * @param c a status code. The idiom is that a zero status code indicates a
   * successful operation and a non-zero status code indicates a failed
   * operation.
   * @param m a message indicating some extra detail regarding the operation.
   * If all operations were successful, this message should be 'OK'.
   * Otherwise, it doesn't matter what the string is, as long as both the
   * setter and caller agree.
   */
  Status(int c, std::string m) : code_(c), message_(std::move(m)) {}
    
    /**
 * @brief Generate a new generic UUID
 *
 * @return a string containing a random UUID
 */
std::string generateNewUUID();
    
    #include <osquery/sql.h>
    
      status = tls_config_plugin->setUp();
  ASSERT_TRUE(status.ok());
    
    #include 'jsapi.h'
#include 'jsfriendapi.h'
    
    bool js_cocos2dx_navmesh_NavMeshObstacle_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMeshObstacle_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMeshObstacle(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMeshObstacle_getSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_initWith(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_syncToObstacle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_syncToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getNavMeshObstacleComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_NavMeshObstacle(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
        GLESDebugDraw( float32 ratio );
    
    struct TestEntry
{
	const char *name;
	TestCreateFcn *createFcn;
};
    
    
    {			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 2.0f);
			m_attachment->CreateFixture(&shape, 2.0f);
		}
    
    // Compare target key and the block key of the block of `block_index`.
// Return -1 if error.
int BlockIter::CompareBlockKey(uint32_t block_index, const Slice& target) {
  uint32_t region_offset = GetRestartPoint(block_index);
  uint32_t shared, non_shared, value_length;
  const char* key_ptr = DecodeEntry(data_ + region_offset, data_ + restarts_,
                                    &shared, &non_shared, &value_length);
  if (key_ptr == nullptr || (shared != 0)) {
    CorruptionError();
    return 1;  // Return target is smaller
  }
  Slice block_key(key_ptr, non_shared);
  return Compare(block_key, target);
}
    
     private:
  BlockContents contents_;
  const char* data_;            // contents_.data.data()
  size_t size_;                 // contents_.data.size()
  uint32_t restart_offset_;     // Offset in data_ of restart array
  std::unique_ptr<BlockPrefixIndex> prefix_index_;
  std::unique_ptr<BlockReadAmpBitmap> read_amp_bitmap_;
  // All keys in the block will have seqno = global_seqno_, regardless of
  // the encoded value (kDisableGlobalSequenceNumber means disabled)
  const SequenceNumber global_seqno_;
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    allowGlobalSeqNo
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_IngestExternalFileOptions_allowGlobalSeqNo(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  return static_cast<jboolean>(options->allow_global_seqno);
}
    
      auto animal = sample::GetAnimal(builder.GetBufferPointer());
    
    struct EnumValBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(EnumVal::VT_NAME, name);
  }
  void add_value(int64_t value) {
    fbb_.AddElement<int64_t>(EnumVal::VT_VALUE, value, 0);
  }
  void add_object(flatbuffers::Offset<Object> object) {
    fbb_.AddOffset(EnumVal::VT_OBJECT, object);
  }
  void add_union_type(flatbuffers::Offset<Type> union_type) {
    fbb_.AddOffset(EnumVal::VT_UNION_TYPE, union_type);
  }
  EnumValBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  EnumValBuilder &operator=(const EnumValBuilder &);
  flatbuffers::Offset<EnumVal> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<EnumVal>(end);
    fbb_.Required(o, EnumVal::VT_NAME);
    return o;
  }
};
    
    inline flatbuffers::Offset<TableInC> CreateTableInC(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<NamespaceA::TableInFirstNS> refer_to_a1 = 0,
    flatbuffers::Offset<NamespaceA::SecondTableInA> refer_to_a2 = 0) {
  TableInCBuilder builder_(_fbb);
  builder_.add_refer_to_a2(refer_to_a2);
  builder_.add_refer_to_a1(refer_to_a1);
  return builder_.Finish();
}
    
    inline const char **EnumNamesCharacter() {
  static const char *names[] = {
    'NONE',
    'MuLan',
    'Rapunzel',
    'Belle',
    'BookFan',
    'Other',
    'Unused',
    nullptr
  };
  return names;
}
    
    namespace grpc_java_generator {
struct Parameters {
  //        //Defines the custom parameter types for methods
  //        //eg: flatbuffers uses flatbuffers.Builder as input for the client
  //        and output for the server grpc::string custom_method_io_type;
    }
    }
    
    #define FLATBUFFERS_VERSION_MAJOR 1
#define FLATBUFFERS_VERSION_MINOR 8
#define FLATBUFFERS_VERSION_REVISION 0
#define FLATBUFFERS_STRING_EXPAND(X) #X
#define FLATBUFFERS_STRING(X) FLATBUFFERS_STRING_EXPAND(X)
    
    inline void IterateObject(const uint8_t *obj, const TypeTable *type_table,
                          IterationVisitor *visitor) {
  visitor->StartSequence();
  const uint8_t *prev_val = nullptr;
  size_t set_idx = 0;
  for (size_t i = 0; i < type_table->num_elems; i++) {
    auto type_code = type_table->type_codes[i];
    auto type = static_cast<ElementaryType>(type_code.base_type);
    auto is_vector = type_code.is_vector != 0;
    auto ref_idx = type_code.sequence_ref;
    const TypeTable *ref = nullptr;
    if (ref_idx >= 0) { ref = type_table->type_refs[ref_idx](); }
    auto name = type_table->names ? type_table->names[i] : nullptr;
    const uint8_t *val = nullptr;
    if (type_table->st == ST_TABLE) {
      val = reinterpret_cast<const Table *>(obj)->GetAddressOf(
          FieldIndexToOffset(static_cast<voffset_t>(i)));
    } else {
      val = obj + type_table->values[i];
    }
    visitor->Field(i, set_idx, type, is_vector, ref, name, val);
    if (val) {
      set_idx++;
      if (is_vector) {
        val += ReadScalar<uoffset_t>(val);
        auto vec = reinterpret_cast<const Vector<uint8_t> *>(val);
        visitor->StartVector();
        auto elem_ptr = vec->Data();
        for (size_t j = 0; j < vec->size(); j++) {
          visitor->Element(j, type, ref, elem_ptr);
          IterateValue(type, elem_ptr, ref, prev_val, static_cast<soffset_t>(j),
                       visitor);
          elem_ptr += InlineSize(type, ref);
        }
        visitor->EndVector();
      } else {
        IterateValue(type, val, ref, prev_val, -1, visitor);
      }
    }
    prev_val = val;
  }
  visitor->EndSequence();
}
    
    namespace flatbuffers {
    }