
        
        void ShowOpenDialog(const file_dialog::DialogSettings& settings,
                    mate::Arguments* args) {
  v8::Local<v8::Value> peek = args->PeekNext();
  file_dialog::OpenDialogCallback callback;
  if (mate::Converter<file_dialog::OpenDialogCallback>::FromV8(
          args->isolate(), peek, &callback)) {
    file_dialog::ShowOpenDialog(settings, callback);
  } else {
    std::vector<base::FilePath> paths;
    if (file_dialog::ShowOpenDialog(settings, &paths))
      args->Return(paths);
  }
}
    
    void DownloadItem::Resume() {
  download_item_->Resume();
}
    
    namespace atom {
    }
    
      const char* tmpdir = getenv('TMPDIR');
  if (tmpdir == nullptr) {
    tmpdir = '/tmp';
  }
    
    
    {} // namespace caffe2

    
          CAFFE_ENFORCE(dims.front() >= 0, 'Dimension ids must be non-negative.');
      CAFFE_ENFORCE_GE(
          in[0].dims_size() + dims.size(),
          dims.back() + 1,
          'Input needs at least ',
          (1 + dims.back() - dims.size()),
          ' dimensions given `dims`.');
    
      const auto& X = in[0];
  const auto& W = in[1];
  const auto& b = in[2];
  auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  const int M = size_to_dim_(canonical_axis, GetDimsVector(in[0]));
  const int K = size_from_dim_(canonical_axis, GetDimsVector(in[0]));
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
      FlexibleTopKOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws) {}
    
    Github Link:
- https://github.com/pytorch/pytorch/blob/master/caffe2/operators/floor_op.cc
    
    
    {  bool RunOnDevice() override {
    for (Blob* output : OperatorBase::Outputs()) {
      output->Reset();
    }
    return true;
  }
};
    
    template <>
bool FullyConnectedOp<
    CUDAContext,
    TensorCoreEngine,
    false /* don't transpose weight */>::RunOnDevice() {
  return RunFullyConnectedOpOnCUDADevice(false /* float16_compute */, this);
}
    
    class BSP_Tree;
MAKE_TYPE_INFO(BSP_Tree, Variant::DICTIONARY)
    
    
    {		String name;
		Map<String, Variant> fields;
	};
    
    	struct sockaddr_storage their_addr;
	size_t addr_size = _set_sockaddr(&their_addr, peer_host, peer_port, sock_type);
    
    	virtual bool is_connected_to_host() const;
	virtual Status get_status() const;
	virtual void disconnect_from_host();
    
    #ifdef PTHREAD_BSD_SET_NAME
#include <pthread_np.h>
#endif
    
    		if (!::ReplaceFileW(tmpfile, p_path.c_str(), NULL, 0, NULL, NULL)) {
			DeleteFileW(tmpfile);
			return FAILED;
		}
    
    	Ref<StreamPeerTCPWinsock> conn = memnew(StreamPeerTCPWinsock);
	IP_Address ip;
	int port;
	_set_ip_addr_port(ip, port, &their_addr);
    
      // Read until size drops significantly.
  std::string limit_key = Key(n);
  for (int read = 0; true; read++) {
    ASSERT_LT(read, 100) << 'Taking too long to compact';
    Iterator* iter = db_->NewIterator(ReadOptions());
    for (iter->SeekToFirst();
         iter->Valid() && iter->key().ToString() < limit_key;
         iter->Next()) {
      // Drop data
    }
    delete iter;
    // Wait a little bit to allow any triggered compactions to complete.
    Env::Default()->SleepForMicroseconds(1000000);
    uint64_t size = Size(Key(0), Key(n));
    fprintf(stderr, 'iter %3d => %7.3f MB [other %7.3f MB]\n',
            read+1, size/1048576.0, Size(Key(n), Key(kCount))/1048576.0);
    if (size <= initial_size/10) {
      break;
    }
  }
    
    Status DBImpl::RecoverLogFile(uint64_t log_number, bool last_log,
                              bool* save_manifest, VersionEdit* edit,
                              SequenceNumber* max_sequence) {
  struct LogReporter : public log::Reader::Reporter {
    Env* env;
    Logger* info_log;
    const char* fname;
    Status* status;  // null if options_.paranoid_checks==false
    virtual void Corruption(size_t bytes, const Status& s) {
      Log(info_log, '%s%s: dropping %d bytes; %s',
          (this->status == nullptr ? '(ignoring error) ' : ''),
          fname, static_cast<int>(bytes), s.ToString().c_str());
      if (this->status != nullptr && this->status->ok()) *this->status = s;
    }
  };
    }
    
    void DBIter::FindNextUserEntry(bool skipping, std::string* skip) {
  // Loop until we hit an acceptable entry to yield
  assert(iter_->Valid());
  assert(direction_ == kForward);
  do {
    ParsedInternalKey ikey;
    if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
      switch (ikey.type) {
        case kTypeDeletion:
          // Arrange to skip all upcoming entries for this key since
          // they are hidden by this deletion.
          SaveKey(ikey.user_key, skip);
          skipping = true;
          break;
        case kTypeValue:
          if (skipping &&
              user_comparator_->Compare(ikey.user_key, *skip) <= 0) {
            // Entry hidden
          } else {
            valid_ = true;
            saved_key_.clear();
            return;
          }
          break;
      }
    }
    iter_->Next();
  } while (iter_->Valid());
  saved_key_.clear();
  valid_ = false;
}
    
    TEST(DBTest, MinorCompactionsHappen) {
  Options options = CurrentOptions();
  options.write_buffer_size = 10000;
  Reopen(&options);
    }
    
    static std::string MakeFileName(const std::string& dbname, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return dbname + buf;
}
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
bool ParseFileName(const std::string& filename,
                   uint64_t* number,
                   FileType* type);
    
      // Extend record types with the following special values
  enum {
    kEof = kMaxRecordType + 1,
    // Returned whenever we find an invalid physical record.
    // Currently there are three situations in which this happens:
    // * The record has an invalid CRC (ReadPhysicalRecord reports a drop)
    // * The record is a 0-length record (No drop is reported)
    // * The record is below constructor's initial_offset (No drop is reported)
    kBadRecord = kMaxRecordType + 2
  };
    
    int MemTable::KeyComparator::operator()(const char* aptr, const char* bptr)
    const {
  // Internal keys are encoded as length-prefixed strings.
  Slice a = GetLengthPrefixedSlice(aptr);
  Slice b = GetLengthPrefixedSlice(bptr);
  return comparator.Compare(a, b);
}
    
      std::vector<uint64_t> GetFiles(FileType t) {
    std::vector<std::string> filenames;
    ASSERT_OK(env_->GetChildren(dbname_, &filenames));
    std::vector<uint64_t> result;
    for (size_t i = 0; i < filenames.size(); i++) {
      uint64_t number;
      FileType type;
      if (ParseFileName(filenames[i], &number, &type) && type == t) {
        result.push_back(number);
      }
    }
    return result;
  }
    
    // _fi_sep determines the directory separator, either '\\' or '/'
BOOST_REGEX_DECL extern const char* _fi_sep;
    
    #include <iterator>
#include <boost/type_traits/is_convertible.hpp>
#include <boost/type_traits/is_pointer.hpp>
    
    #ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
    
    
    
    
    {} // namespace boost
    
    

    
    namespace boost{
    }
    
    template< bool Signed >
struct operations< 8u, Signed > :
    public msvc_arm_operations< typename make_storage_type< 8u, Signed >::type, operations< 8u, Signed > >
{
    typedef msvc_arm_operations< typename make_storage_type< 8u, Signed >::type, operations< 8u, Signed > > base_type;
    typedef typename base_type::storage_type storage_type;
    typedef typename make_storage_type< 8u, Signed >::aligned aligned_storage_type;
    }
    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
namespace atomics {
namespace detail {
    }
    }
    }
    
    #if BOOST_ATOMIC_THREAD_FENCE > 0
BOOST_FORCEINLINE void atomic_thread_fence(memory_order order) BOOST_NOEXCEPT
{
    detail::thread_fence(order);
}
#else
BOOST_FORCEINLINE void atomic_thread_fence(memory_order) BOOST_NOEXCEPT
{
    detail::lockpool::thread_fence();
}
#endif