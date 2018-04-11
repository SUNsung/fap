
        
        void UnregisterShellMenu(std::wstring opt, wchar_t* keyBaseName)
{
	HKEY root = GetRootKey(opt);
	HKEY cmderKey;
	FAIL_ON_ERROR(RegCreateKeyEx(root, keyBaseName, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &cmderKey, NULL));
	FAIL_ON_ERROR(RegDeleteTree(cmderKey, NULL));
	RegCloseKey(cmderKey);
	RegCloseKey(root);
}
    
    const std::string kKernelSyscallAddrModifiedPath = '/sys/kernel/camb/syscall_addr_modified';
const std::string kKernelTextHashPath = '/sys/kernel/camb/text_segment_hash';
    
      // Create the IOCTL (and more) device node.
  osquery.devfs = devfs_make_node(makedev(osquery.major_number, 0),
                                  DEVFS_CHAR,
                                  UID_ROOT,
                                  GID_WHEEL,
                                  0600,
                                  'osquery',
                                  0);
  if (osquery.devfs == NULL) {
    dbg_printf('Could not get a devfs entry!\n');
    goto error_exit;
  }
    
    #include 'osquery/tests/test_util.h'
    
    bool platformModuleClose(ModuleHandle module) {
  return (::dlclose(module) == 0);
}
    
    // customize random engine.
void CustomGlobalRandomEngine::seed(CustomGlobalRandomEngine::result_type val) {
  // ignore the seed
}
    
    
    {    int nindex = index_.num_chunk();
    int nvalue = value_.num_chunk();
    int ntotal = nindex + nvalue;
    #pragma omp parallel for schedule(dynamic, 1)  num_threads(nthread_write_)
    for (int i = 0; i < ntotal; ++i) {
      if (i < nindex) {
        index_.Compress(i, use_lz4_hc_);
      } else {
        value_.Compress(i - nindex, use_lz4_hc_);
      }
    }
    index_.Write(fo);
    value_.Write(fo);
    // statistics
    raw_bytes_index_ += index_.RawBytes() * sizeof(bst_uint) / sizeof(StorageIndex);
    raw_bytes_value_ += value_.RawBytes();
    encoded_bytes_index_ += index_.EncodedBytes();
    encoded_bytes_value_ += value_.EncodedBytes();
    raw_bytes_ += page.offset.size() * sizeof(size_t);
  }
    
        index_.resize((boundary_[nfeature - 1].index_end
                   + (packing_factor_ - 1)) / packing_factor_);
    row_ind_.resize(boundary_[nfeature - 1].row_ind_end);
    
    TEST(Param, VectorIOStream) {
  std::vector<int> vals = {3, 2, 1};
  std::stringstream ss;
  std::vector<int> vals_in;
  
  ss << vals;
  EXPECT_EQ(ss.str(), '(3,2,1)');
    }
    
    // Used to encapsulate a particular instance of an opened database.
//
// This object should not be used directly in C++; it exists solely to provide
// a mapping from a JavaScript object to a C++ code that can use the RocksDB
// API.
class DBWrapper : public node::ObjectWrap {
  public:
    static void Init(Handle<Object> exports);
    }
    
      virtual const char* Name() const override;
    
    #pragma once
#include <deque>
#include <string>
    
      /// Search the list for the (index)'th item (0-based) in (list:key)
  /// A negative index indicates: 'from end-of-list'
  /// If index is within range: return true, and return the value in *result.
  /// If (index < -length OR index>=length), then index is out of range:
  ///   return false (and *result is left unchanged)
  /// May throw RedisListException
  bool Index(const std::string& key, int32_t index,
             std::string* result);
    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
    
    {}  // namespace rocksdb
    
      virtual size_t GetSimCapacity() const override {
    return key_only_cache_->GetCapacity();
  }
  virtual size_t GetSimUsage() const override {
    return key_only_cache_->GetUsage();
  }
  virtual void SetSimCapacity(size_t capacity) override {
    key_only_cache_->SetCapacity(capacity);
  }
    
      TransactionDB* snapshotDB;
  std::vector<ColumnFamilyDescriptor> column_families;
  column_families.push_back(
      ColumnFamilyDescriptor(kDefaultColumnFamilyName, ColumnFamilyOptions()));
  column_families.push_back(
      ColumnFamilyDescriptor('CFA', ColumnFamilyOptions()));
  column_families.push_back(
      ColumnFamilyDescriptor('CFB', ColumnFamilyOptions()));
  std::vector<rocksdb::ColumnFamilyHandle*> cf_handles;
  ASSERT_OK(TransactionDB::Open(options, txn_db_options, snapshot_name_,
                                column_families, &cf_handles, &snapshotDB));
  ASSERT_OK(snapshotDB->Get(read_options, 'foo', &value));
  ASSERT_EQ(value, 'bar');
  ASSERT_OK(snapshotDB->Get(read_options, cf_handles[1], 'foocfa', &value));
  ASSERT_EQ(value, 'barcfa');
    
      bool CanHandleDuplicatedKey() const override { return true; }