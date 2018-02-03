
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    class Dispatcher : public content::RenderViewObserver {
 public:
  explicit Dispatcher(content::RenderView* render_view);
  ~Dispatcher() final;
    }
    
      bool handled = true;
  base::ThreadRestrictions::ScopedAllowIO allow_io;
  base::ThreadRestrictions::ScopedAllowWait allow_wait;
  IPC_BEGIN_MESSAGE_MAP(DispatcherHost, message)
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_Allocate_Object, OnAllocateObject)
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_Deallocate_Object, OnDeallocateObject)
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_Call_Object_Method, OnCallObjectMethod)
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_Call_Object_Method_Sync,
                        OnCallObjectMethodSync)
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_Call_Static_Method, OnCallStaticMethod)
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_Call_Static_Method_Sync,
                        OnCallStaticMethodSync)
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_UncaughtException,
                        OnUncaughtException);
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_GetShellId, OnGetShellId);
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_CreateShell, OnCreateShell);
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_AllocateId, OnAllocateId);
    IPC_MESSAGE_HANDLER(ShellViewHostMsg_SetForceClose, OnSetForceClose);
    IPC_MESSAGE_UNHANDLED(handled = false)
  IPC_END_MESSAGE_MAP()
    
      static void ClearObjectRegistry();
    
    
namespace nwapi {
    }
    
    Menu::~Menu() {
  Destroy();
}
    
    
    {}  // namespace nw

    
    void MenuItem::SetChecked(bool checked) {
  // Set active will cause 'activate' to be emitted, so block here
  block_active_ = true;
  gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(menu_item_), checked);
  block_active_ = false;
}
    
      base::ThreadRestrictions::ScopedAllowWait allow_wait;
    
      for(auto& data : params->data) {
    if (!reader->Read(data)) {
      *error = reader->error();
      return false;
    }
    response->Append(data.ToValue());
  }
    
        // Finish and check for builder errors
    if (s.ok()) {
      s = builder->Finish();
      if (s.ok()) {
        meta->file_size = builder->FileSize();
        assert(meta->file_size > 0);
      }
    } else {
      builder->Abandon();
    }
    delete builder;
    
    
    {}  // namespace leveldb
    
    struct leveldb_filterpolicy_t : public FilterPolicy {
  void* state_;
  void (*destructor_)(void*);
  const char* (*name_)(void*);
  char* (*create_)(
      void*,
      const char* const* key_array, const size_t* key_length_array,
      int num_keys,
      size_t* filter_length);
  unsigned char (*key_match_)(
      void*,
      const char* key, size_t length,
      const char* filter, size_t filter_length);
    }
    
    #ifndef STORAGE_LEVELDB_DB_DB_ITER_H_
#define STORAGE_LEVELDB_DB_DB_ITER_H_
    
    // A helper class useful for DBImpl::Get()
class LookupKey {
 public:
  // Initialize *this for looking up user_key at a snapshot with
  // the specified sequence number.
  LookupKey(const Slice& user_key, SequenceNumber sequence);
    }
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    
    {  ASSERT_TRUE(! Overlaps(NULL, 'j'));
  ASSERT_TRUE(! Overlaps('r', NULL));
  ASSERT_TRUE(Overlaps(NULL, 'p'));
  ASSERT_TRUE(Overlaps(NULL, 'p1'));
  ASSERT_TRUE(Overlaps('q', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
}
    
    void WriteBatch::Put(const Slice& key, const Slice& value) {
  WriteBatchInternal::SetCount(this, WriteBatchInternal::Count(this) + 1);
  rep_.push_back(static_cast<char>(kTypeValue));
  PutLengthPrefixedSlice(&rep_, key);
  PutLengthPrefixedSlice(&rep_, value);
}
    
            // Create values for key-value pair
        const int k = (order == SEQUENTIAL) ? i + j :
                      (rand_.Next() % num_entries);
        char key[100];
        snprintf(key, sizeof(key), '%016d', k);
    
      /// Construct a buffer to represent a given memory range.
  const_buffer(const void* data, std::size_t size)
    : data_(data),
      size_(size)
  {
  }
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef long atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef std::atomic<long> atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef boost::detail::atomic_count atomic_count;
inline void increment(atomic_count& a, long b) { while (b > 0) ++a, --b; }
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
    #endif // BOOST_ASIO_DETAIL_CALL_STACK_HPP

    
    #if !defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
    #endif // BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP

    
    void buffer_sequence_adapter_base::init_native_buffer(
    buffer_sequence_adapter_base::native_buffer_type& buf,
    const boost::asio::mutable_buffer& buffer)
{
  std::memset(&buf, 0, sizeof(native_buffer_type));
  Microsoft::WRL::ComPtr<IInspectable> insp
    = Microsoft::WRL::Make<winrt_buffer_impl>(buffer);
  buf = reinterpret_cast<Windows::Storage::Streams::IBuffer^>(insp.Get());
}
    
      sorted_vector_map<int, Movable> vmap(
      std::make_move_iterator(s.begin()), std::make_move_iterator(s.end()));
    
      __m128i arr1;
  if (HAYSTACK_ALIGNED) {
    arr1 = _mm_load_si128(
        reinterpret_cast<const __m128i*>(haystack.data() + blockStartIdx));
  } else {
    arr1 = _mm_loadu_si128(
        reinterpret_cast<const __m128i*>(haystack.data() + blockStartIdx));
  }
    
    #pragma once
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
      virtual bool Merge(const Slice& key,
                     const Slice* existing_value,
                     const Slice& value,
                     std::string* new_value,
                     Logger* logger) const override;
    
      // size amplification = percentage of additional size
  if (candidate_size * 100 < ratio * earliest_file_size) {
    ROCKS_LOG_BUFFER(
        log_buffer,
        '[%s] Universal: size amp not needed. newer-files-total-size %' PRIu64
        ' earliest-file-size %' PRIu64,
        cf_name.c_str(), candidate_size, earliest_file_size);
    return nullptr;
  } else {
    ROCKS_LOG_BUFFER(
        log_buffer,
        '[%s] Universal: size amp needed. newer-files-total-size %' PRIu64
        ' earliest-file-size %' PRIu64,
        cf_name.c_str(), candidate_size, earliest_file_size);
  }
  assert(start_index < sorted_runs.size() - 1);
    
      // Write 8 files in L0
  for (int i = 0; i < 8; i++) {
    GenerateNewRandomFile(&rnd);
  }
  dbfull()->TEST_WaitForCompact();
    
    inline size_t Roundup(size_t x, size_t y) {
  return ((x + y - 1) / y) * y;
}
    
      // Helper functions for DumpTable()
  Status DumpIndexBlock(WritableFile* out_file);
  Status DumpDataBlocks(WritableFile* out_file);
  void DumpKeyValue(const Slice& key, const Slice& value,
                    WritableFile* out_file);
    
      // REQUIRES: The client must provide a merge operator if Merge operation
  // needs to be accessed. Calling Merge on a DB without a merge operator
  // would result in Status::NotSupported. The client must ensure that the
  // merge operator supplied here has the same name and *exactly* the same
  // semantics as the merge operator provided to previous open calls on
  // the same DB. The only exception is reserved for upgrade, where a DB
  // previously without a merge operator is introduced to Merge operation
  // for the first time. It's necessary to specify a merge operator when
  // opening the DB in this case.
  // Default: nullptr
  std::shared_ptr<MergeOperator> merge_operator = nullptr;
    
    bool nextConnection(int tid)
{
    m.lock();
    int socketfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socketfd == -1) {
        cout << 'FD error, connections: ' << connections << endl;
        return false;
    }
    }
    
    int getKb(int pid) {
    std::string line;
    std::ifstream self((std::string('/proc/') + std::to_string(pid) + std::string('/status')).c_str());
    int vmRSS;
    while(!self.eof()) {
        std::getline(self, line, ':');
        if (line == 'VmRSS') {
            self >> vmRSS;
        }
        std::getline(self, line);
    }
    return vmRSS;
}
    
        // Format message frame(s)
    unsigned char *framePackBufferOffset = framePackBuffer;
    for (int i = 0; i < framesPerSend; i++) {
        framePackBufferOffset[0] = 130;
        if (byteSize < 126) {
            framePackBufferLength += byteSize + 6;
            framePackBufferOffset[1] = 128 | byteSize;
            framePackBufferOffset += byteSize + 6;
        } else if (byteSize <= UINT16_MAX) {
            framePackBufferLength += byteSize + 8;
            framePackBufferOffset[1] = 128 | 126;
            *((uint16_t *) &framePackBufferOffset[2]) = htons(byteSize);
            framePackBufferOffset += byteSize + 8;
        } else {
            framePackBufferLength += byteSize + 14;
            framePackBufferOffset[1] = 128 | 127;
            *((uint64_t *) &framePackBufferOffset[2]) = htobe64(byteSize);
            framePackBufferOffset += byteSize + 14;
        }
    }
    
    #endif // EXTENSIONS_UWS_H

    
        Hub(int extensionOptions = 0, bool useDefaultLoop = false, unsigned int maxPayload = 16777216) : uS::Node(LARGE_BUFFER_SIZE, WebSocketProtocol<SERVER, WebSocket<SERVER>>::CONSUME_PRE_PADDING, WebSocketProtocol<SERVER, WebSocket<SERVER>>::CONSUME_POST_PADDING, useDefaultLoop),
                                             Group<SERVER>(extensionOptions, maxPayload, this, nodeData), Group<CLIENT>(0, maxPayload, this, nodeData) {
        inflateInit2(&inflationStream, -15);
        inflationBuffer = new char[LARGE_BUFFER_SIZE];
    }