
        
          char *oldBegin = Begin;
  char *oldEnd = End;
  std::size_t oldSize = (std::size_t) (oldEnd - oldBegin);
    
    char Mangle::getStandardTypeSubst(StringRef TypeName) {
#define STANDARD_TYPE(KIND, MANGLING, TYPENAME)      \
  if (TypeName == #TYPENAME) {                       \
    return #MANGLING[0];                             \
  }
    }
    
    #endif

    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    
    {  int result = 0;
  RenderThread::Get()->Send(new ShellViewHostMsg_AllocateId(
      routing_id,
      &result));
  return scope.Escape(v8::Integer::New(isolate, result));
}
    
    
    {}  // namespace nwapi

    
    NwMenuModel::NwMenuModel(Delegate* delegate) : SimpleMenuModel(delegate) {
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.readAvailableTypes', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardReadAvailableTypesFunction);
};
    
      std::shared_ptr<DHTNode> localNode_;
    
    #include 'common.h'
    
    
    {  virtual bool finished() = 0;
};
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
    StopWriteToken::~StopWriteToken() {
  assert(controller_->total_stopped_ >= 1);
  --controller_->total_stopped_;
}
    
      // these three metods are querying the state of the WriteController
  bool IsStopped() const;
  bool NeedsDelay() const { return total_delayed_.load() > 0; }
  bool NeedSpeedupCompaction() const {
    return IsStopped() || NeedsDelay() || total_compaction_pressure_ > 0;
  }
  // return how many microseconds the caller needs to sleep after the call
  // num_bytes: how many number of bytes to put into the DB.
  // Prerequisite: DB mutex held.
  uint64_t GetDelay(Env* env, uint64_t num_bytes);
  void set_delayed_write_rate(uint64_t write_rate) {
    // avoid divide 0
    if (write_rate == 0) {
      write_rate = 1u;
    } else if (write_rate > max_delayed_write_rate()) {
      write_rate = max_delayed_write_rate();
    }
    delayed_write_rate_ = write_rate;
  }
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      Status s = OptimisticTransactionDB::Open(options, kDBPath, &txn_db);
  assert(s.ok());
  db = txn_db->GetBaseDB();
    
      txn->Rollback();
    
    // Simple RAII wrapper class for Snapshot.
// Constructing this object will create a snapshot.  Destructing will
// release the snapshot.
class ManagedSnapshot {
 public:
  explicit ManagedSnapshot(DB* db);
    }
    
    class Checkpoint {
 public:
  // Creates a Checkpoint object to be used for creating openable snapshots
  static Status Create(DB* db, Checkpoint** checkpoint_ptr);
    }
    
      static int GetSweepSpaceIndex(AllocationSpace space) {
    DCHECK(IsValidSweepingSpace(space));
    return space - FIRST_GROWABLE_PAGED_SPACE;
  }
    
    
void Assembler::rcl(Register dst, uint8_t imm8) {
  EnsureSpace ensure_space(this);
  DCHECK(is_uint5(imm8));  // illegal shift count
  if (imm8 == 1) {
    EMIT(0xD1);
    EMIT(0xD0 | dst.code());
  } else {
    EMIT(0xC1);
    EMIT(0xD0 | dst.code());
    EMIT(imm8);
  }
}
    
      void minps(XMMRegister dst, Operand src);
  void minps(XMMRegister dst, XMMRegister src) { minps(dst, Operand(src)); }
  void maxps(XMMRegister dst, Operand src);
  void maxps(XMMRegister dst, XMMRegister src) { maxps(dst, Operand(src)); }
    
      int double_regs_offset = FrameDescription::double_registers_offset();
  // Fill in the double input registers.
  for (int i = 0; i < config->num_allocatable_double_registers(); ++i) {
    int code = config->GetAllocatableDoubleCode(i);
    int dst_offset = code * kDoubleSize + double_regs_offset;
    int src_offset = code * kDoubleSize;
    __ movsd(xmm0, Operand(esp, src_offset));
    __ movsd(Operand(esi, dst_offset), xmm0);
  }
    
    Register JavaScriptFrame::fp_register() { return ebp; }
Register JavaScriptFrame::context_register() { return esi; }
Register JavaScriptFrame::constant_pool_pointer_register() { UNREACHABLE(); }
    
    
    {  // Rest of parameters passed to JSRunMicrotasksEntry.
  static constexpr int kMicrotaskQueueArgOffset = +3 * kSystemPointerSize;
};
    
    const Register StoreTransitionDescriptor::SlotRegister() { return no_reg; }
const Register StoreTransitionDescriptor::VectorRegister() { return no_reg; }
const Register StoreTransitionDescriptor::MapRegister() { return edi; }
    
      BIND(&if_lhsisnotnumber);
  {
    // No checks on rhs are done yet. We just know lhs is not a number or Smi.
    Label if_lhsisoddball(this), if_lhsisnotoddball(this);
    Node* lhs_instance_type = LoadInstanceType(lhs);
    Node* lhs_is_oddball = InstanceTypeEqual(lhs_instance_type, ODDBALL_TYPE);
    Branch(lhs_is_oddball, &if_lhsisoddball, &if_lhsisnotoddball);
    }