
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // A thunk that copies data from a device buffer to another device buffer.
class DeviceToDeviceCopyThunk : public Thunk {
 public:
  // Constructs a CopyThunk that copies host data from `source_buffer` to the
  // device buffer `destination_buffer`. `mem_size` is the size of the data in
  // bytes.
  DeviceToDeviceCopyThunk(const BufferAllocation::Slice& source_buffer,
                          const BufferAllocation::Slice& destination_buffer,
                          uint64 mem_size,
                          const HloInstruction* hlo_instruction);
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // A thunk that infeeds data. Data must be already resident on the
// device. This thunk performs an intra-device copy from that location
// to the buffer allocated for the infeed op.
class InfeedThunk : public Thunk {
 public:
  // Constructs a InfeedThunk that copies data from the on-device
  // infeed queue into the buffers in the given shape tree.
  InfeedThunk(const ShapeTree<BufferAllocation::Slice>& infeed_slices,
              const HloInstruction* hlo_instruction);
    }
    
    Status Memset32BitValueThunk::ExecuteOnStream(const ExecuteParams& params) {
  se::DeviceMemoryBase dest_data =
      params.buffer_allocations->GetDeviceAddress(dest_);
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  params.stream->ThenMemset32(&dest_data, value_, dest_data.size());
  return Status::OK();
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Called computation for the call instruction.
  auto callee_builder = HloComputation::Builder(TestName() + '-callee');
  {
    auto param = callee_builder.AddInstruction(
        HloInstruction::CreateParameter(0, shape, 'param'));
    callee_builder.AddInstruction(
        HloInstruction::CreateUnary(shape, HloOpcode::kNegate, param));
  }
  auto called_computation =
      module->AddEmbeddedComputation(callee_builder.Build());
    
      // Subtract the max in batch b from every element in batch b.
  // Broadcasts along the batch dimension.
  auto shifted_logits = xla::Sub(logits, logits_max, {kBatchDim});
    
    namespace winrt::Microsoft::Terminal::Settings::implementation
{
    KeyChord::KeyChord(bool ctrl, bool alt, bool shift, int32_t vkey) :
        _modifiers{ (ctrl ? Settings::KeyModifiers::Ctrl : Settings::KeyModifiers::None) |
                    (alt ? Settings::KeyModifiers::Alt : Settings::KeyModifiers::None) |
                    (shift ? Settings::KeyModifiers::Shift : Settings::KeyModifiers::None) },
        _vkey{ vkey }
    {
    }
    }
    
    
/// Try to determine the exact dynamic type of the underlying object.
/// returns the exact dynamic type of a value, or an empty type if the exact
/// type could not be determined.
SILType
swift::getExactDynamicTypeOfUnderlyingObject(SILValue S,
                                             ClassHierarchyAnalysis *CHA) {
  return getExactDynamicType(S, CHA, /* ForUnderlyingObject */ true);
}
    
    // Crash due to retain of a dead unowned reference.
// FIXME: can't pass the object's address from InlineRefCounts without hacks
void swift::swift_abortRetainUnowned(const void *object) {
  if (object) {
    swift::fatalError(FatalErrorFlags::ReportBacktrace,
                      'Fatal error: Attempted to read an unowned reference but '
                      'object %p was already deallocated', object);
  } else {
    swift::fatalError(FatalErrorFlags::ReportBacktrace,
                      'Fatal error: Attempted to read an unowned reference but '
                      'the object was already deallocated');
  }
}
    
    #if __ANDROID_API__ < 26 // Introduced in Android API 26 - O
static double swift_strtod_l(const char *nptr, char **endptr, locale_t loc) {
  return strtod(nptr, endptr);
}
static float swift_strtof_l(const char *nptr, char **endptr, locale_t loc) {
  return strtof(nptr, endptr);
}
#define strtod_l swift_strtod_l
#define strtof_l swift_strtof_l
#endif
#elif defined(__linux__)
#include <locale.h>
#else
#include <xlocale.h>
#endif
#include <limits>
#include <thread>
#include 'llvm/ADT/StringExtras.h'
#include 'llvm/Support/Compiler.h'
#include 'swift/Runtime/Debug.h'
#include 'swift/Runtime/SwiftDtoa.h'
#include 'swift/Basic/Lazy.h'
    
    namespace swift {
    }
    
      /// Mapping from SILDeclRefs to emitted SILFunctions.
  llvm::DenseMap<SILDeclRef, SILFunction*> emittedFunctions;
  /// Mapping from ProtocolConformances to emitted SILWitnessTables.
  llvm::DenseMap<NormalProtocolConformance*, SILWitnessTable*> emittedWitnessTables;
    
    namespace swift {
namespace reflection {
    }
    }
    
      constexpr static KeyPathComponentHeader
  forStructComponentWithUnresolvedFieldOffset(bool isLet) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_StructTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_UnresolvedFieldOffsetPayload
      | isLetBit(isLet));
  }
  
  constexpr static KeyPathComponentHeader
  forClassComponentWithInlineOffset(bool isLet,
                                    unsigned offset) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_ClassTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | validateInlineOffset(offset)
      | isLetBit(isLet));
  }
    
      /// Set if the type is an importer-synthesized related entity.
  /// A related entity is an entity synthesized in response to an imported
  /// type which is not the type itself; for example, when the importer
  /// sees an ObjC error domain, it creates an error-wrapper type (a
  /// related entity) and a `Code` enum (not a related entity because it's
  /// exactly the original type).
  ///
  /// The name and import namespace (together with the parent context)
  /// identify the original declaration.
  StringType RelatedEntityName;
    
    class PrimarySpecificPaths {
public:
  /// The name of the main output file,
  /// that is, the .o file for this input (or a file specified by -o).
  /// If there is no such file, contains an empty string. If the output
  /// is to be written to stdout, contains '-'.
  std::string OutputFilename;
    }
    
    private Q_SLOTS:
    void on_selectFileButton_clicked();
    
        secp256k1_context_set_error_callback(none, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_error_callback(sign, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_error_callback(vrfy, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_error_callback(both, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(none, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(sign, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(vrfy, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(both, counting_illegal_callback_fn, &ecount);
    
        /* Check for (correctly reporting) a parsing error if the initial
       JSON construct is followed by more stuff.  Note that whitespace
       is, of course, exempt.  */
    
    
    {
      } else {                                    // Multi-element batch
        WriteBatch b;
        const int num = rnd.Uniform(8);
        for (int i = 0; i < num; i++) {
          if (i == 0 || !rnd.OneIn(10)) {
            k = RandomKey(&rnd);
          } else {
            // Periodically re-use the same key from the previous iter, so
            // we have multiple entries in the write batch for the same key
          }
          if (rnd.OneIn(2)) {
            v = RandomString(&rnd, rnd.Uniform(10));
            b.Put(k, v);
          } else {
            b.Delete(k);
          }
        }
        ASSERT_OK(model.Write(WriteOptions(), &b));
        ASSERT_OK(db_->Write(WriteOptions(), &b));
      }
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    TEST(FileNameTest, Parse) {
  Slice db;
  FileType type;
  uint64_t number;
    }
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
    static const int kBlockSize = 32768;
    
    void DHTReplaceNodeTask::onTimeout(const std::shared_ptr<DHTNode>& node)
{
  ++numRetry_;
  if (numRetry_ >= MAX_RETRY) {
    A2_LOG_INFO(fmt('ReplaceNode: Ping failed %d times. Replace %s with %s.',
                    numRetry_, node->toString().c_str(),
                    newNode_->toString().c_str()));
    node->markBad();
    bucket_->addNode(newNode_);
    setFinished(true);
  }
  else {
    A2_LOG_INFO(fmt('ReplaceNode: Ping reply timeout from %s. Try once more.',
                    node->toString().c_str()));
    sendMessage();
  }
}
    
    class DHTRoutingTableDeserializer {
private:
  int family_;
    }
    
    class DHTSetup {
public:
  DHTSetup();
    }
    
      DHTTaskQueue* taskQueue_;
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    namespace aria2 {
    }
    
    
    {  void updateTokenSecret();
};
    
    bool DNSCache::CacheEntry::add(const std::string& addr)
{
  for (std::vector<AddrEntry>::const_iterator i = addrEntries_.begin(),
                                              eoi = addrEntries_.end();
       i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return false;
    }
  }
  addrEntries_.push_back(AddrEntry(addr));
  return true;
}
    
    #define DEFINE_JSON_OUTPUT_TYPE(type) \
  struct type { \
    typedef _OutputStream<type>  OutputStream; \
    typedef _MapStream<type>     MapStream; \
    typedef _ListStream<type>    ListStream; \
    typedef _ISerializable<type> ISerializable; \
  }
    
      /* Get <Body> element */
  body = nullptr;
  while (trav != nullptr && trav->type != XML_ELEMENT_NODE) {
    trav = trav->next;
  }
  if (trav != nullptr && node_is_equal_ex(trav,'Body',envelope_ns)) {
    body = trav;
    trav = trav->next;
  }
  while (trav != nullptr && trav->type != XML_ELEMENT_NODE) {
    trav = trav->next;
  }
  if (body == nullptr) {
    add_soap_fault(obj, 'Client', 'Body must be present in a SOAP envelope');
    xmlFreeDoc(response);
    return false;
  }
  attr = body->properties;
  while (attr != nullptr) {
    if (attr->ns == nullptr) {
      if (soap_version == SOAP_1_2) {
        add_soap_fault(obj, 'Client',
                       'A SOAP Body element cannot have non Namespace '
                       'qualified attributes');
        xmlFreeDoc(response);
        return false;
      }
    } else if (attr_is_equal_ex(attr,'encodingStyle',SOAP_1_2_ENV_NAMESPACE)) {
      if (soap_version == SOAP_1_2) {
        add_soap_fault(obj, 'Client',
                       'encodingStyle cannot be specified on the Body');
        xmlFreeDoc(response);
        return false;
      }
      if (strcmp((char*)attr->children->content, SOAP_1_1_ENC_NAMESPACE)) {
        add_soap_fault(obj, 'Client', 'Unknown data encoding style');
        xmlFreeDoc(response);
        return false;
      }
    }
    attr = attr->next;
  }
  if (trav != nullptr && soap_version == SOAP_1_2) {
    add_soap_fault(obj, 'Client',
                   'A SOAP 1.2 envelope can contain only Header and Body');
    xmlFreeDoc(response);
    return false;
  }
    
    
template<Direction D = Direction::LowToHigh>
struct BumpNormalMapper : public RangeMapper {
 public:
  template<typename... Args>
  explicit BumpNormalMapper(Args&&... args)
    : RangeMapper(std::forward<Args>(args)...) {}
    }
    
    /*
 * This contains shared stubs used for multiple purposes in the
 * ArrayData vtable.  Most of the functions used by more than one
 * kind, or for more than one purpose should be collected here.
 *
 * Note: if you have entry points on an array kind that should never
 * be called, it's generaelly preferable to give them their own unique
 * functions so it will be obvious which kind was involved in core
 * files.  We only try to consolidate the common array functions that
 * should actually be called.
 */
struct ArrayCommon {
  static ssize_t ReturnInvalidIndex(const ArrayData*);
    }
    
      std::sort(
    obj.members.begin(),
    obj.members.end(),
    [&](const Object::Member& m1, const Object::Member& m2) {
      return std::tie(m1.offset, m1.name) <
        std::tie(m2.offset, m2.name);
    }
  );
    
    #ifndef incl_HPHP_BUILD_INFO_H_
#define incl_HPHP_BUILD_INFO_H_
    
    /*
 * Check instanceof using the superclass vector on the end of the Class entry.
 */
void cgExtendsClass(IRLS& env, const IRInstruction* inst) {
  auto const extra = inst->extra<ExtendsClassData>();
  auto const dst = dstLoc(env, inst, 0).reg();
  auto const lhs = srcLoc(env, inst, 0).reg();
  auto const rhsCls = extra->cls;
  auto& v = vmain(env);
    }
    
    
    {  return 0;
}
    
      m_progress = 0;
  m_errors.clear();
    
      if (m_operation->multiConnectionOperation()) {
    if (!(connectionIndex >= 0 && dbIndex >= 0 &&
          m_model->getByIndex(connectionIndex))) {
      qWarning() << 'invalid target connection';
      return;
    }
    }
    
      virtual void run(QSharedPointer<RedisClient::Connection> targetConnection =
                       QSharedPointer<RedisClient::Connection>(),
                   int targetDbIndex = 0);