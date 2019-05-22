
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    class NwAppClearCacheFunction : public NWSyncExtensionFunction, public content::BrowsingDataRemover::Observer {
 public:
  NwAppClearCacheFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
  void OnBrowsingDataRemoverDone() override;
    }
    
    
    {} // namespace extensions
#endif

    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
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
    
    
    {  // Does this paragraph begin with a drop cap?
  bool has_drop_cap;
};
    
    #define MAX_AMBIG_SIZE    10
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
    
    {}  //  namespace rocksdb

    
    std::unique_ptr<WriteControllerToken>
WriteController::GetCompactionPressureToken() {
  ++total_compaction_pressure_;
  return std::unique_ptr<WriteControllerToken>(
      new CompactionPressureToken(this));
}
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
    // This is an example interface of external-compaction algorithm.
// Compaction algorithm can be implemented outside the core-RocksDB
// code by using the pluggable compaction APIs that RocksDb provides.
class Compactor : public EventListener {
 public:
  // Picks and returns a compaction task given the specified DB
  // and column family.  It is the caller's responsibility to
  // destroy the returned CompactionTask.  Returns 'nullptr'
  // if it cannot find a proper compaction task.
  virtual CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) = 0;
    }
    
    namespace {
// A dummy compaction filter
class DummyCompactionFilter : public CompactionFilter {
 public:
  virtual ~DummyCompactionFilter() {}
  virtual bool Filter(int level, const Slice& key, const Slice& existing_value,
                      std::string* new_value, bool* value_changed) const {
    return false;
  }
  virtual const char* Name() const { return 'DummyCompactionFilter'; }
};
    }
    
      {
    std::string string_val;
    // If it cannot pin the value, it copies the value to its internal buffer.
    // The intenral buffer could be set during construction.
    PinnableSlice pinnable_val(&string_val);
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
    // If the value is not pinned, the internal buffer must have the value.
    assert(pinnable_val.IsPinned() || string_val == 'value');
  }
    
      // Commit.
  s = txn->Commit();
  assert(s.ok());
  delete txn;
  // Clear snapshot from read options since it is no longer valid
  read_options.snapshot = nullptr;
    
    #include 'rocksdb/utilities/lua/rocks_lua_custom_library.h'
    
      OptimisticTransactionDB(const OptimisticTransactionDB&) = delete;
  void operator=(const OptimisticTransactionDB&) = delete;