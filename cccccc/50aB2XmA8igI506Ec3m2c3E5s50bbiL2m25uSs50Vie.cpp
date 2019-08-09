
        
            // Just a simple composition of protocols.
    return proto_list;
  }
  case MetadataKind::ExistentialMetatype: {
    auto metatype = static_cast<const ExistentialMetatypeMetadata *>(type);
    auto instance = _swift_buildDemanglingForMetadata(metatype->InstanceType,
                                                      Dem);
    auto node = Dem.createNode(Node::Kind::ExistentialMetatype);
    node->addChild(instance, Dem);
    return node;
  }
  case MetadataKind::Function: {
    auto func = static_cast<const FunctionTypeMetadata *>(type);
    
    
    {    return false;
  }
    
    // Report a warning to system console and stderr.
void
swift::warning(uint32_t flags, const char *format, ...)
{
  va_list args;
  va_start(args, format);
    }
    
    /// This class stores a lexical scope as it is represented in the
/// debug info. In contrast to LLVM IR, SILDebugScope also holds all
/// the inlining information. In LLVM IR the inline info is part of
/// DILocation.
class SILDebugScope : public SILAllocated<SILDebugScope> {
public:
  /// The AST node this lexical scope represents.
  SILLocation Loc;
  /// Always points to the parent lexical scope.
  /// For top-level scopes, this is the SILFunction.
  PointerUnion<const SILDebugScope *, SILFunction *> Parent;
  /// An optional chain of inlined call sites.
  ///
  /// If this scope is inlined, this points to a special 'scope' that
  /// holds the location of the call site.
  const SILDebugScope *InlinedCallSite;
    }
    
        auto SectionTableAddr = COFFFileHdrAddr +
                            sizeof(llvm::object::coff_file_header) +
                            COFFFileHdr->SizeOfOptionalHeader;
    auto SectionTableBuf = this->getReader().readBytes(
        RemoteAddress(SectionTableAddr),
        sizeof(llvm::object::coff_section) * COFFFileHdr->NumberOfSections);
    
      ReadBytesResult readBytes(RemoteAddress Addr, uint64_t Size) override {
    auto I = std::find_if(Images.begin(), Images.end(), [=](const Image &I) {
      return I.isAddressValid(Addr, Size);
    });
    return I == Images.end() ? ReadBytesResult(nullptr, [](const void *) {})
                             : I->readBytes(Addr, Size);
  }
    
        ~reverse_lock() {
        templock.lock();
        templock.swap(lock);
    }
    
    #include <stdint.h>
#include <stdlib.h>
    
    // Maximum level to which a new compacted memtable is pushed if it
// does not create overlap.  We try to push to level 2 to avoid the
// relatively expensive level 0=>1 compactions and to avoid some
// expensive manifest file operations.  We do not push all the way to
// the largest level since that can generate a lot of wasted disk
// space if the same key space is being repeatedly overwritten.
static const int kMaxMemCompactLevel = 2;
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = NULL;
  Table* table = NULL;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
    /* QuadricOrientation */
#define GLU_OUTSIDE                        100020
#define GLU_INSIDE                         100021
    
    
    {  }
    
    Gfx *Page::createGfx(OutputDev *out, double hDPI, double vDPI,
		     int rotate, GBool useMediaBox, GBool crop,
		     int sliceX, int sliceY, int sliceW, int sliceH,
		     GBool printing, Catalog *catalog,
		     GBool (*abortCheckCbk)(void *data),
		     void *abortCheckCbkData,
		     GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
		     void *annotDisplayDecideCbkData) {
  PDFRectangle *mediaBox, *cropBox;
  PDFRectangle box;
  Gfx *gfx;
    }
    
    private:
    
    #include 'XRef.h'
    
      // Destructor.
  ~ProfileData() {}
    
      int permFlags;
  GBool ownerPasswordOk;
  Guchar fileKey[16];
  int fileKeyLength;
  int encVersion;
  int encRevision;
  GBool encryptMetadata;
  CryptAlgorithm encAlgorithm;
    
    
    {  if (readAttrs)
  {
    Object tmp;
    Dict *dict = streamObj->getStream()->getDict();
    dict->lookup('F', &tmp);
    if (!tmp.isNull()) {
      Object obj1;
      // valid 'F' key -> external file
      kind = soundExternal;
      if (getFileSpecNameForPlatform (&tmp, &obj1)) {
        fileName = obj1.getString()->copy();
        obj1.free();
      }
    } else {
      // no file specification, then the sound data have to be
      // extracted from the stream
      kind = soundEmbedded;
    }
    tmp.free();
    // sampling rate
    dict->lookup('R', &tmp);
    if (tmp.isNum()) {
      samplingRate = tmp.getNum();
    }
    tmp.free();
    // sound channels
    dict->lookup('C', &tmp);
    if (tmp.isInt()) {
      channels = tmp.getInt();
    }
    tmp.free();
    // bits per sample
    dict->lookup('B', &tmp);
    if (tmp.isInt()) {
      bitsPerSample = tmp.getInt();
    }
    tmp.free();
    // encoding format
    dict->lookup('E', &tmp);
    if (tmp.isName())
    {
      const char *enc = tmp.getName();
      if (strcmp('Raw', enc) == 0) {
        encoding = soundRaw;
      } else if (strcmp('Signed', enc) == 0) {
        encoding = soundSigned;
      } else if (strcmp('muLaw', enc) == 0) {
        encoding = soundMuLaw;
      } else if (strcmp('ALaw', enc) == 0) {
        encoding = soundALaw;
      }
    }
    tmp.free();
  }
}
    
    void StorageImpl::Alloc(Storage::Handle* handle) {
  // space already recycled, ignore request
  auto&& device = storage_managers_.at(handle->ctx.dev_type);
  std::shared_ptr<storage::StorageManager> manager = device.Get(
      handle->ctx.real_dev_id(), [handle]() {
        storage::StorageManager *ptr = nullptr;
        switch (handle->ctx.dev_type) {
          case Context::kCPU: {
            ptr = new storage::NaiveStorageManager<storage::CPUDeviceStorage>();
            break;
          }
          case Context::kCPUShared: {
#if !defined(ANDROID) && !defined(__ANDROID__)
            ptr = new storage::CPUSharedStorageManager();
#else
            LOG(FATAL) << 'Unimplemented device';
#endif  // !defined(ANDROID) && !defined(__ANDROID__)
            break;
          }
          case Context::kCPUPinned: {
#if MXNET_USE_CUDA
            num_gpu_device = 0;
            cudaError_t e = cudaGetDeviceCount(&num_gpu_device);
            if (e != cudaSuccess) {
              num_gpu_device = 0;
            }
            if (num_gpu_device > 0) {
              ptr = new storage::NaiveStorageManager<storage::PinnedMemoryStorage>();
            } else {
              ptr = new storage::NaiveStorageManager<storage::CPUDeviceStorage>();
            }
#else
            ptr = new storage::NaiveStorageManager<storage::CPUDeviceStorage>();
#endif  // MXNET_USE_CUDA
            break;
          }
          case Context::kGPU: {
#if MXNET_USE_CUDA
            CUDA_CALL(cudaGetDeviceCount(&num_gpu_device));
            CHECK_GT(num_gpu_device, 0) << 'GPU usage requires at least 1 GPU';
    }
    }
    }
    }
    
    
    {      for (index_t g = 0; g < group_; ++g) {
        auto request = (n == 0) ? req[conv::kWeight] : kAddTo;
        // Legacy approach shown here for comparison:
        //   Assign(dweight_3d[g], request, dot(out_grad_3d[g], col_buffer_3d[g].T()));
        linalg_gemm(out_grad_3d[g], col_buffer_3d[g], dweight_3d[g], false, true, s, request);
      }
    }
    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }
    
    #include 'hphp/util/hash-map.h'
#include 'hphp/util/lock.h'
#include <memory>
#include <string>
    
    ////////////////////////////////////////////////////////////////////////////////
    
    // Interface for all mappers. It also includes data about page limit (for huge
// page mappers) and NUMA support.
struct RangeMapper {
 public:
  // State is shared between multiple mappers and multiple threads.
  explicit RangeMapper(RangeState& state, uint32_t maxHugePages = 0,
                       uint32_t numaMask = 0, short nextNode = 0)
    : m_state(state)
    , m_maxHugePages(maxHugePages)
    , m_interleaveMask(numaMask)
    , m_nextNode(nextNode) {}
    }
    
    #endif // incl_HPHP_SYNCHRONIZABLE_H_

    
    void cgMemoGetInstanceValue(IRLS& env, const IRInstruction* inst) {
  auto& v = vmain(env);
  auto const extra = inst->extra<MemoGetInstanceValue>();
  assertx(!extra->asyncEager);
  auto const obj = srcLoc(env, inst, 0).reg();
  auto const valPtr = obj[offsetToMemoSlot(extra->slot, extra->func->cls())];
  auto const sf = v.makeReg();
  // Uninit means the cache isn't initialized
  emitCmpTVType(v, sf, KindOfUninit, valPtr + TVOFF(m_type));
  fwdJcc(v, env, CC_E, sf, inst->taken());
  loadTV(v, inst->dst(), dstLoc(env, inst, 0), valPtr, extra->loadAux);
}
    
      void AddOtherAgent(CanAgent *agent) { other_agent_ = agent; }
    
    namespace apollo {
namespace cyber {
    }
    }
    
      // 4. If the end of current passage region not appeared, no rerouting
  const auto& route_end_waypoint = segments.RouteEndWaypoint();
  if (!route_end_waypoint.lane) {
    return true;
  }
  auto point = route_end_waypoint.lane->GetSmoothPoint(route_end_waypoint.s);
  const auto& reference_line = reference_line_info_->reference_line();
  common::SLPoint sl_point;
  if (!reference_line.XYToSL({point.x(), point.y()}, &sl_point)) {
    AERROR << 'Failed to project point: ' << point.ShortDebugString();
    return false;
  }
  if (!reference_line.IsOnLane(sl_point)) {
    return true;
  }
  // 5. If the end of current passage region is further than kPrepareRoutingTime
  // * speed, no rerouting
  double adc_s = reference_line_info_->AdcSlBoundary().end_s();
  const auto vehicle_state = common::VehicleStateProvider::Instance();
  double speed = vehicle_state->linear_velocity();
  const double prepare_rerouting_time =
      config_.rerouting().prepare_rerouting_time();
  const double prepare_distance = speed * prepare_rerouting_time;
  if (sl_point.s() > adc_s + prepare_distance) {
    ADEBUG << 'No need rerouting now because still can drive for time: '
           << prepare_rerouting_time << ' seconds';
    return true;
  }
  // 6. Check if we have done rerouting before
  auto* rerouting = PlanningContext::Instance()
                        ->mutable_planning_status()
                        ->mutable_rerouting();
  if (rerouting == nullptr) {
    AERROR << 'rerouting is nullptr.';
    return false;
  }
  double current_time = Clock::NowInSeconds();
  if (rerouting->has_last_rerouting_time() &&
      (current_time - rerouting->last_rerouting_time() <
       config_.rerouting().cooldown_time())) {
    ADEBUG << 'Skip rerouting and wait for previous rerouting result';
    return true;
  }
  if (!frame_->Rerouting()) {
    AERROR << 'Failed to send rerouting request';
    return false;
  }
    
      YAML::Node node = YAML::LoadFile(yaml_file);
  if (node.IsNull()) {
    AINFO << 'Load ' << yaml_file << ' failed! please check!';
    return false;
  }
    
    #include 'gtest/gtest.h'
#include 'modules/planning/proto/planning_config.pb.h'
    
    
    {
    {
    {
    {}  // namespace valet_parking
}  // namespace scenario
}  // namespace planning
}  // namespace apollo

    
    namespace apollo {
namespace drivers {
namespace video {
    }
    }
    }
    
    
    {
    {    ADEBUG << 'controller: ' << controller->Name()
           << ' calculation time is: ' << time_diff_ms << ' ms.';
    cmd->mutable_latency_stats()->add_controller_time_ms(time_diff_ms);
  }
  return Status::OK();
}