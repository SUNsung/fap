
        
        
    {
    {
    {      rph->Send(new ViewMsg_WillQuit(&no_use));
    }
    CloseAllWindows(true);
  }
  // Then quit.
  MessageLoop::current()->PostTask(FROM_HERE, MessageLoop::QuitClosure());
}
    
      virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Dispatcher);
};
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    class NwAppGetArgvSyncFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetArgvSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    using namespace extensions::nwapi::nw__clipboard;
    
    // Find the file which defines an extension extending the given message type
// with the given field number.
// Python DescriptorDatabases are not required to implement this method.
bool PyDescriptorDatabase::FindFileContainingExtension(
    const string& containing_type, int field_number,
    FileDescriptorProto* output) {
  ScopedPyObjectPtr py_method(
      PyObject_GetAttrString(py_database_, 'FindFileContainingExtension'));
  if (py_method == NULL) {
    // This method is not implemented, returns without error.
    PyErr_Clear();
    return false;
  }
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallFunction(py_method.get(), 's#i', containing_type.c_str(),
                            containing_type.size(), field_number));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    
    { private:
  // The python object that implements the database. The reference is owned.
  PyObject* py_database_;
};
    
    #include <string>
    
    #include <gtest/gtest.h>
    
    SSATmp* implInstanceOfD(IRGS& env, SSATmp* src, const StringData* className);
    
    bool Vunit::needsRegAlloc() const {
  if (next_vr > Vreg::V0) return true;
    }
    
      int num_inner_frames{0};
    
    //////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
    /*
 * Reclaim all TC space associated with func
 *
 * Before any space is reclaimed the following actions will be performed:
 *  (1) Smash all prologues
 *  (2) Smash all callers to bind-call unique stubs
 *  (3) Erase all call meta-data for calls into function
 *
 * After all calls and prologues have been smashed any on-going requests will be
 * allowed to complete before TC Space will be reclaimed for:
 *  (1) All prologues
 *  (2) All translations
 *  (3) All anchor translations
 *
 * This function should only be called from Func::destroy() and may access the
 * fullname and ID of the function.
 */
void reclaimFunction(const Func* func);
    
    std::string read_embedded_data(const embedded_data& desc);
    
            // TODO: move this into shim for the old readers.
        // decimate if needed. Decimation happens in-place.
        // This is only allowed for old readers, which support a single layout for all inputs.
        if (!useDistributedMBReading && useParallelTrain)
        {
            auto& pMBLayout = net->GetMBLayoutPtrOfNetwork();
            
            // Verify that there's indeed a single layout
            for (const auto& iter : inputMatrices)
            {
                assert(iter.second.pMBLayout == pMBLayout);
                // TODO: This must be a runtime check, not an assert().
                UNUSED(iter);
            }
    }
    
        doubleargvector m_dropoutRates;
    doubleargvector m_batchNormalizationTimeConstant;
    doubleargvector m_batchNormalizationBlendTimeConstant;
    size_t m_maxTempMemSizeInSamplesForCNN;
    
    #include <functional>
#include <unordered_map>
#include <unordered_set>
#include 'utils.h'
#pragma warning(push)
#pragma warning(disable : 4800 4610 4512 4510 4267 4127 4125 4100 4456 4189 4996 4503)
#include 'proto/onnx/protobuf/onnx-ml.pb.h'
#pragma warning(pop)
    
            void StringRange::RestartCapture()
        {
            m_start = m_data;
            m_end = m_data;
        }
    
        //‘GREATER’, ‘LESS’, ‘EQUALS,
    REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Greater)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Less)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Equal)
    
        std::function<void(OperatorSchemaSetter&)> RNNDocGeneratorInputSeqLen() {
        return [=](OperatorSchemaSetter& schema) {
            schema.Input('sequence_lens',
                'Optional tensor specifying lengths of the sequences in a batch. '
                'If not specified - assumed all sequences in the batch to have '
                'length `seq_length`. It has shape `[batch_size]`.', 'T1', true /*optional*/);
            schema.TypeConstraint('T1', { 'tensor(int32)' }, 'Constrain seq_lens to integer tensor.');
        };
    }
    
    void init_gloo_worker(unsigned int id, int workers) {
  g_mutex.lock();
  setenv(RANK_ENV, std::to_string(id).data(), 1);
  setenv(MASTER_ADDR_ENV, std::string('127.0.0.1:' + std::to_string(MASTER_PORT)).data(), 1);
  auto worker_channel = std::make_shared<thd::DataChannelGloo>(thd::getInitConfig('env://')); // reads all env variable
  g_mutex.unlock();
    }
    
      struct Group : DataChannel::Group {
    Group(const std::string& addr, port_type port,
              std::vector<rank_type> ranks, rank_type max_rank,
              int store_socket);
    }
    
    /* Destroy generators and free memory */
void THCRandom_shutdown(THCState* state)
{
  THCRNGState* rng_state = THCState_getRngState(state);
  if (rng_state->gen == NULL) return;
  for (int i = 0; i < rng_state->num_devices; ++i)
  {
    destroyGenerator(state, &rng_state->gen[i]);
  }
  free(rng_state->gen);
  rng_state->gen = NULL;
}
    
      // create second key range
  batch.Clear();
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Put(Key2(i), 'value for range 2 key');
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    
    {}  // namespace leveldb

    
      virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const {
    for (int i = 0; i < n; i++) {
      uint32_t h = Hash(keys[i].data(), keys[i].size(), 1);
      PutFixed32(dst, h);
    }
  }
    
    TEST(BloomTest, VaryingLengths) {
  char buffer[sizeof(int)];
    }
    
    const double Histogram::kBucketLimit[kNumBuckets] = {
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 25, 30, 35, 40, 45,
  50, 60, 70, 80, 90, 100, 120, 140, 160, 180, 200, 250, 300, 350, 400, 450,
  500, 600, 700, 800, 900, 1000, 1200, 1400, 1600, 1800, 2000, 2500, 3000,
  3500, 4000, 4500, 5000, 6000, 7000, 8000, 9000, 10000, 12000, 14000,
  16000, 18000, 20000, 25000, 30000, 35000, 40000, 45000, 50000, 60000,
  70000, 80000, 90000, 100000, 120000, 140000, 160000, 180000, 200000,
  250000, 300000, 350000, 400000, 450000, 500000, 600000, 700000, 800000,
  900000, 1000000, 1200000, 1400000, 1600000, 1800000, 2000000, 2500000,
  3000000, 3500000, 4000000, 4500000, 5000000, 6000000, 7000000, 8000000,
  9000000, 10000000, 12000000, 14000000, 16000000, 18000000, 20000000,
  25000000, 30000000, 35000000, 40000000, 45000000, 50000000, 60000000,
  70000000, 80000000, 90000000, 100000000, 120000000, 140000000, 160000000,
  180000000, 200000000, 250000000, 300000000, 350000000, 400000000,
  450000000, 500000000, 600000000, 700000000, 800000000, 900000000,
  1000000000, 1200000000, 1400000000, 1600000000, 1800000000, 2000000000,
  2500000000.0, 3000000000.0, 3500000000.0, 4000000000.0, 4500000000.0,
  5000000000.0, 6000000000.0, 7000000000.0, 8000000000.0, 9000000000.0,
  1e200,
};
    
    
#endif  // STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_

    
    // A very simple random number generator.  Not especially good at
// generating truly random bits, but good enough for our needs in this
// package.
class Random {
 private:
  uint32_t seed_;
 public:
  explicit Random(uint32_t s) : seed_(s & 0x7fffffffu) {
    // Avoid bad seeds.
    if (seed_ == 0 || seed_ == 2147483647L) {
      seed_ = 1;
    }
  }
  uint32_t Next() {
    static const uint32_t M = 2147483647L;   // 2^31-1
    static const uint64_t A = 16807;  // bits 14, 8, 7, 5, 2, 1, 0
    // We are computing
    //       seed_ = (seed_ * A) % M,    where M = 2^31-1
    //
    // seed_ must not be zero or M, or else all subsequent computed values
    // will be zero or M respectively.  For all other values, seed_ will end
    // up cycling through every number in [1,M-1]
    uint64_t product = seed_ * A;
    }
    }
    
    bool InternalFilterPolicy::KeyMayMatch(const Slice& key, const Slice& f) const {
  return user_policy_->KeyMayMatch(ExtractUserKey(key), f);
}
    
    TEST(FormatTest, InternalKeyShortSeparator) {
  // When user keys are same
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 99, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 101, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeDeletion)));
    }
    
    
    
    struct b2AABB;
    
    class AddPair : public Test
{
public:
    }
    
    		body1->DestroyFixture(m_piece2);
		m_piece2 = NULL;
    
    class BulletTest : public Test
{
public:
    }
    
    		{
			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 0.125f);
    }
    
      std::string scratch;
  scratch.resize(kGood.size() + kCorrupted.size() + 16);
  Slice result;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_OK(env_->NewRandomAccessFile(kFileName, &rand_file, soptions_));
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
      // Return true if the current MemTableRep supports concurrent inserts
  // Default: false
  virtual bool IsInsertConcurrentlySupported() const { return false; }
    
    inline
void BlockFetcher::CheckBlockChecksum() {
  // Check the crc of the type and the block contents
  if (read_options_.verify_checksums) {
    const char* data = slice_.data();  // Pointer to where Read put the data
    PERF_TIMER_GUARD(block_checksum_time);
    uint32_t value = DecodeFixed32(data + block_size_ + 1);
    uint32_t actual = 0;
    switch (footer_.checksum()) {
      case kNoChecksum:
        break;
      case kCRC32c:
        value = crc32c::Unmask(value);
        actual = crc32c::Value(data, block_size_ + 1);
        break;
      case kxxHash:
        actual = XXH32(data, static_cast<int>(block_size_) + 1, 0);
        break;
      default:
        status_ = Status::Corruption(
            'unknown checksum type ' + ToString(footer_.checksum()) + ' in ' +
            file_->file_name() + ' offset ' + ToString(handle_.offset()) +
            ' size ' + ToString(block_size_));
    }
    if (status_.ok() && actual != value) {
      status_ = Status::Corruption(
          'block checksum mismatch: expected ' + ToString(actual) + ', got ' +
          ToString(value) + '  in ' + file_->file_name() + ' offset ' +
          ToString(handle_.offset()) + ' size ' + ToString(block_size_));
    }
  }
}