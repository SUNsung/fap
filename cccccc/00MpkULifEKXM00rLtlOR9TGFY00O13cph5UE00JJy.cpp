
        
        #include 'ImfAttribute.h'
    
    
//-----------------------------------------------------------------------------
//
//	class FloatVectorAttribute
//
//-----------------------------------------------------------------------------
    
    
Slice *
FrameBuffer::findSlice (const string &name)
{
    return findSlice (name.c_str());
}
    
    
    {    if (!supportsFlags (getFlags (version)))
    {
        THROW (IEX_NAMESPACE::InputExc, 'The file format version number's flag field '
                              'contains unrecognized flags.');
    }
}
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    //
// In order to force the compiler to inline them,
// getChar() and getCode() are implemented as macros
// instead of 'inline' functions.
//
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT

    
    const Header &
InputPart::header () const
{
    return file->header();
}
    
    
    {} // namespace nwapi

    
    namespace nwapi {
    }
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
       bool IsCommandIdChecked(int command_id) const override;
   bool IsCommandIdEnabled(int command_id) const override;
    
    void Menu::Create(const base::DictionaryValue& option) {
  is_menu_modified_ = true;
  menu_delegate_.reset(new MenuDelegate(object_manager()));
  menu_model_.reset(new ui::NwMenuModel(menu_delegate_.get()));
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.readAvailableTypes', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardReadAvailableTypesFunction);
};
    
      // implement nw.Screen.getScreens()
  class NwScreenGetScreensFunction: public NWSyncExtensionFunction {
    public:
      NwScreenGetScreensFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
    const int kBlnCellHeight = 256;     // Full-height for baseline normalization.
const int kBlnXHeight = 128;        // x-height for baseline normalization.
const int kBlnBaselineOffset = 64;  // offset for baseline normalization.
    
    // Computes the Otsu threshold(s) for the given histogram.
// Also returns H = total count in histogram, and
// omega0 = count of histogram below threshold.
int OtsuStats(const int* histogram, int* H_out, int* omega0_out);
    
    // GenericHeap requires 1 template argument:
// Pair will normally be either KDPairInc<Key, Data> or KDPairDec<Key, Data>
// for some arbitrary Key and scalar, smart pointer, or non-ownership pointer
// Data type, according to whether a MIN heap or a MAX heap is desired,
// respectively. Using KDPtrPairInc<Key, Data> or KDPtrPairDec<Key, Data>,
// GenericHeap can also handle simple Data pointers and own them.
// If no additional data is required, Pair can also be a scalar, since
// GenericHeap doesn't look inside it except for operator<.
//
// The heap is stored as a packed binary tree in an array hosted by a
// GenericVector<Pair>, with the invariant that the children of each node are
// both NOT Pair::operator< the parent node. KDPairInc defines Pair::operator<
// to use Key::operator< to generate a MIN heap and KDPairDec defines
// Pair::operator< to use Key::operator> to generate a MAX heap by reversing
// all the comparisons.
// See http://en.wikipedia.org/wiki/Heap_(data_structure) for more detail on
// the basic heap implementation.
//
// Insertion and removal are both O(log n) and, unlike the STL heap, an
// explicit Reshuffle function allows a node to be repositioned in time O(log n)
// after changing its value.
//
// Accessing the element for revaluation is a more complex matter, since the
// index and pointer can be changed arbitrarily by heap operations.
// Revaluation can be done by making the Data type in the Pair derived from or
// contain a DoublePtr as its first data element, making it possible to convert
// the pointer to a Pair using KDPairInc::RecastDataPointer.
template <typename Pair>
class GenericHeap {
 public:
  GenericHeap() = default;
  // The initial size is only a GenericVector::reserve. It is not enforced as
  // the size limit of the heap. Caller must implement their own enforcement.
  explicit GenericHeap(int initial_size) {
    heap_.reserve(initial_size);
  }
    }
    
    namespace tesseract {
    }
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
      // Return the id associated with the given unichar representation,
  // this representation MUST exist within the UNICHARMAP. The first
  // length characters (maximum) from unichar_repr are used. The length
  // MUST be non-zero.
  UNICHAR_ID unichar_to_id(const char* const unichar_repr, int length) const;
    
    namespace tesseract {
class TrainingSample;
}
    
    
    { private:
  ObjectCache<Dawg> dawgs_;
};
    
    protected:
	static void _bind_methods();
    
    public:
	enum SamplePartitionType {
		SAMPLE_PARTITION_WATERSHED = 0,
		SAMPLE_PARTITION_MONOTONE,
		SAMPLE_PARTITION_LAYERS,
		SAMPLE_PARTITION_MAX
	};
    
    #endif

    
    	GDCLASS(AudioStreamEditor, ColorRect);
    
    godot_pool_byte_array_read_access GDAPI *godot_pool_byte_array_read(const godot_pool_byte_array *p_self) {
	const PoolVector<uint8_t> *self = (const PoolVector<uint8_t> *)p_self;
	return (godot_pool_byte_array_read_access *)memnew(PoolVector<uint8_t>::Read(self->read()));
}
    
    	void set_discover_multicast_if(const String &m_if);
	String get_discover_multicast_if() const;
    
    	void set_igd_status(IGDStatus status);
	IGDStatus get_igd_status() const;
    
    	bool UpdatePowerInfo();
    
    void cgsem_init(cgsem_t *cgsem) {
	int flags, fd, i;
    }
    
    
    {	CrashHandler();
	~CrashHandler();
};
    
      // Return an iterator that yields the contents of the memtable.
  //
  // The caller must ensure that the underlying MemTable remains live
  // while the returned iterator is live.  The keys returned by this
  // iterator are internal keys encoded by AppendInternalKey in the
  // db/format.{h,cc} module.
  Iterator* NewIterator();
    
      // Read sequentially.
  ASSERT_OK(env_->NewSequentialFile('/dir/f', &seq_file));
  ASSERT_OK(seq_file->Read(5, &result, scratch));  // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(seq_file->Skip(1));
  ASSERT_OK(seq_file->Read(1000, &result, scratch));  // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(seq_file->Read(1000, &result, scratch));  // Try reading past EOF.
  ASSERT_EQ(0, result.size());
  ASSERT_OK(seq_file->Skip(100));  // Try to skip past end of file.
  ASSERT_OK(seq_file->Read(1000, &result, scratch));
  ASSERT_EQ(0, result.size());
  delete seq_file;
    
      // Return a success status.
  static Status OK() { return Status(); }
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
    #include 'leveldb/env.h'
    
    #endif  // STORAGE_LEVELDB_UTIL_HISTOGRAM_H_

    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options), restarts_(), counter_(0), finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);  // First restart point is at offset 0
}
    
    
    {}  // namespace leveldb
    
    template <class ConfigRecordType, typename ElemType>
function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory(const ConfigRecordType& config)
{
    function<ComputationNetworkPtr(DEVICEID_TYPE)> createNetworkFn;
    bool gotIt = TryGetNetworkFactory<ConfigRecordType, ElemType>(config, createNetworkFn);
    if (!gotIt)
        RuntimeError('No network builder found in the config file. NDLNetworkBuilder, SimpleNetworkBuilder, or BrainScriptNetworkBuilder must be specified');
    else
        return createNetworkFn;
}
    
    template <class ConfigRecordType, typename ElemType>
void DoTrain(const ConfigRecordType& config)
{
    bool makeMode = config(L'makeMode', true);
    DEVICEID_TYPE deviceId = DeviceFromConfig(config);
    int traceLevel = config(L'traceLevel', 0);
    }
    
    
    {
    {        return mainReturn;
    }
    __except (LogDelayLoadError(GetExceptionInformation()), EXCEPTION_EXECUTE_HANDLER)
    {
        auto code = GetExceptionCode();
        const char * msg = '';
        if      (code == EXCEPTION_ACCESS_VIOLATION)   msg = ': Access violation'; // the famous 0xc0000005 error
        else if (code == EXCEPTION_INT_DIVIDE_BY_ZERO) msg = ': Integer division by zero';
        else if (code == EXCEPTION_STACK_OVERFLOW)     msg = ': Stack overflow';
        else if (code == EXCEPTION_DLL_NOT_FOUND)      msg = ': Module not found';
        LOGPRINTF(stderr, 'CNTK: Caught Win32 exception 0x%08x%s.\n', (unsigned int)code, msg);
        fflush(stderr);
        exit(EXIT_FAILURE);
    }
}
#endif
    
    extern 'C' EVAL_API void GetEvalF(IEvaluateModel<float>** peval)
{
    GetEval(peval);
}
extern 'C' EVAL_API void GetEvalD(IEvaluateModel<double>** peval)
{
    GetEval(peval);
}
    
    #include 'Basics.h'
#include 'MPIWrapper.h'
#include 'Matrix.h'
#include 'SimpleDistGradAggregatorHelper.h'
#include 'DistGradHeader.h'
#include 'IDistGradAggregator.h'
#include 'SimpleDistGradAggregator.h'
#include 'V2SimpleDistGradAggregator.h'
    
    BOOST_AUTO_TEST_CASE(EvalRNNTest)
{
    std::string modelDefinition =
        'deviceId = -1 \n'
        'precision = \'float\' \n'
        'traceLevel = 1 \n'
        'run=NDLNetworkBuilder \n'
        'NDLNetworkBuilder = [ \n'
        'LSTMComponent(inputDim, outputDim, cellDim, inputx, cellDimX2, cellDimX3, cellDimX4) = [ \n'
        '   wx = Parameter(cellDimX4, 0, init = \'uniform\', initValueScale = 1); \n'
        '   b = Parameter(cellDimX4, 1, init = \'fixedValue\', value = 0.0);\n'
        '   Wh = Parameter(cellDimX4, 0, init = \'uniform\', initValueScale = 1);\n'
    }
    
    
    {
    {} // namespace tables
} // namespace osquery
    
    bool verifyMacAddress(std::string const& value) {
  if (value == 'incomplete') {
    return true;
  } else {
    boost::smatch match;
    // IEEE 802: six groups of two hexadecimal digits, separated by '-' or ':'
    boost::regex rxMacAddress('^([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})$');
    return boost::regex_match(value, match, rxMacAddress);
  }
}
    
    namespace osquery {
    }
    
    void processLocalGroups(QueryData& results) {
  unsigned long groupInfoLevel = 1;
  unsigned long numGroupsRead = 0;
  unsigned long totalGroups = 0;
  unsigned long resumeHandle = 0;
  unsigned long ret = 0;
  LOCALGROUP_INFO_1* lginfo = nullptr;
    }
    
    void processLocalUserGroups(std::string uid,
                            std::string user,
                            QueryData& results) {
  unsigned long userGroupInfoLevel = 0;
  unsigned long numGroups = 0;
  unsigned long totalUserGroups = 0;
  LOCALGROUP_USERS_INFO_0* ginfo = nullptr;
    }
    
    #include <osquery/carver/carver.h>
#include <osquery/config/tests/test_utils.h>
#include <osquery/database.h>
#include <osquery/filesystem/fileops.h>
#include <osquery/hashing/hashing.h>
#include <osquery/registry.h>
#include <osquery/sql.h>
#include <osquery/system.h>
#include <osquery/utils/json/json.h>
    
    /// The name of the executing query within the single-threaded schedule.
extern const std::string kExecutingQuery;
    
    TEST_F(PacksTests, test_check_platform) {
  // First we exercise some basic functionality which should behave the same
  // regardless of the current build platform.
  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  EXPECT_TRUE(fpack.checkPlatform());
    }
    
    ExpectedSuccess<DatabaseError> Database::putInt32(const std::string& domain,
                                                  const std::string& key,
                                                  const int32_t value) {
  std::string buffer = std::to_string(value);
  return putString(domain, key, buffer);
}
    
    ExpectedSuccess<DatabaseError> InMemoryDatabase::open() {
  debug_only::verifyTrue(!is_open_, 'database is already open');
  for (const auto& domain : kDomains) {
    storage_[domain] = std::make_unique<InMemoryStorage<DataType>>();
  }
  is_open_ = true;
  return Success();
}
    
    #pragma once
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::openInternal(
    const rocksdb::Options& options, const boost::filesystem::path& path) {
  VLOG(1) << 'Will try to open db at path: ' << path.string();
  auto column_families = createDefaultColumnFamilies(options);
  const auto db_path = boost::filesystem::path(path).make_preferred();
  const auto db_parent_path_status =
      boost::filesystem::status(db_path.parent_path());
  const bool exists = boost::filesystem::exists(db_parent_path_status);
  const bool is_directory =
      boost::filesystem::is_directory(db_parent_path_status);
  const bool are_permissions_set =
      boost::filesystem::permissions_present(db_parent_path_status);
  if (!exists || !is_directory || !are_permissions_set) {
    return createError(DatabaseError::InvalidPath,
                       'database path doesn't exist or invalid.\nPath:'')
           << path.string() << ''\nParent: '' << db_path.parent_path().string()
           << ''\nexists:' << exists << ''\nis_directory:' << is_directory
           << ''\npermissions_present:' << are_permissions_set;
  }
  std::vector<Handle*> raw_handles;
  rocksdb::DB* raw_db_handle = nullptr;
  auto open_status = rocksdb::DB::Open(
      options, db_path.string(), column_families, &raw_handles, &raw_db_handle);
  if (open_status.IsCorruption()) {
    auto corruptionError =
        createError(RocksdbError::DatabaseIsCorrupted, open_status.ToString());
    return createError(DatabaseError::Panic,
                       'database is corrrupted',
                       std::move(corruptionError));
  }
  if (!open_status.ok()) {
    return createError(DatabaseError::FailToOpenDatabase,
                       'Fail to open database: ')
           << open_status.ToString();
  }
    }