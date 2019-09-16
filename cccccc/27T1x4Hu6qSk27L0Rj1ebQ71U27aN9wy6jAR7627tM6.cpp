
        
        Contrast Example 2 with Example 1. For each data point per feature, the values
are sorted by the corresponding KEY.
)DOC')
    .Input(0, 'DATA', 'Tensor of rank 1.')
    .Input(
        1,
        'RANGES',
        'Tensor of int32/int64 ranges, of dims (N, M, 2). '
        'Where N is number of examples and M is a size of each example. '
        'Last dimention represents a range in the format (start, lengths)')
    .Input(2, 'KEY', 'Tensor of rank 1 and type int64.')
    .Output(0, 'OUTPUT', '1-D tensor of size sum of range lengths')
    .Arg('lengths', 'Expected lengths for ranges')
    .TensorInferenceFunction([](const OperatorDef& def,
                                const vector<TensorShape>& in) {
      ArgumentHelper helper(def);
      auto lengths = helper.GetRepeatedArgument<int>('lengths');
      CAFFE_ENFORCE_EQ(in[0].dims_size(), 1, 'DATA should be 1-D tensor.');
      CAFFE_ENFORCE_EQ(in[1].dims_size(), 3, 'RANGES should be 3-D tensor.');
      if (in.size() > 2) {
        CAFFE_ENFORCE_EQ(in[2].dims_size(), 1, 'KEY should be 1-D tensor.');
      }
      CAFFE_ENFORCE_GT(lengths.size(), 0, 'lengths should be non-empty.');
      std::vector<TensorShape> out(lengths.size());
      for (int i = 0; i < lengths.size(); ++i) {
        out[i].set_data_type(in[0].data_type());
        out[i].add_dims(in[1].dims(0));
        out[i].add_dims(lengths[i]);
      }
      return out;
    });
    
    class GetCol2ImGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Im2Col', '', std::vector<string>{GO(0)}, std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Col2Im, GetCol2ImGradient);
    
    void _check_keys_are_present(store_t *store,
        sindex_name_t sindex_name) {
    ql::configured_limits_t limits;
    for (int i = 0; i < TOTAL_KEYS_TO_INSERT; ++i) {
        ql::grouped_t<ql::stream_t> groups =
            read_row_via_sindex(store, sindex_name, i * i);
        ASSERT_EQ(1, groups.size());
        // The order of `groups` doesn't matter because this is a small unit test.
        ql::stream_t *stream = &groups.begin()->second;
        ASSERT_TRUE(stream != nullptr);
        ASSERT_EQ(1ul, stream->substreams.size());
        ql::raw_stream_t *raw_stream = &stream->substreams.begin()->second.stream;
        ASSERT_EQ(1ul, raw_stream->size());
    }
    }
    
      // Returns a copy of the FilePath with the case-insensitive extension removed.
  // Example: FilePath('dir/file.exe').RemoveExtension('EXE') returns
  // FilePath('dir/file'). If a case-insensitive extension is not
  // found, returns a copy of the original FilePath.
  FilePath RemoveExtension(const char* extension) const;
    
    
    {    const ParamGeneratorInterface<ParamType>* const base_;
    // begin[i]_ and end[i]_ define the i-th range that Iterator traverses.
    // current[i]_ is the actual traversing iterator.
    const typename ParamGenerator<T1>::iterator begin1_;
    const typename ParamGenerator<T1>::iterator end1_;
    typename ParamGenerator<T1>::iterator current1_;
    const typename ParamGenerator<T2>::iterator begin2_;
    const typename ParamGenerator<T2>::iterator end2_;
    typename ParamGenerator<T2>::iterator current2_;
    ParamType current_value_;
  };  // class CartesianProductGenerator2::Iterator
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create an array from std::list
    std::list<bool> c_list {true, true, false, true};
    json j_list(c_list);
    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }
    
    using ServiceNameMap = std::unordered_map<std::string, std::string>;
    
      for (const auto& entry : containers) {
    const pt::ptree& container = entry.second;
    try {
      for (const auto& node : container.get_child('NetworkSettings.Networks')) {
        const pt::ptree& network = node.second;
        Row r;
        r['id'] = getValue(container, ids, 'Id');
        r['name'] = node.first.data();
        r['network_id'] = network.get<std::string>('NetworkID', '');
        r['endpoint_id'] = network.get<std::string>('EndpointID', '');
        r['gateway'] = network.get<std::string>('Gateway', '');
        r['ip_address'] = network.get<std::string>('IPAddress', '');
        r['ip_prefix_len'] = INTEGER(network.get<int>('IPPrefixLen', 0));
        r['ipv6_gateway'] = network.get<std::string>('IPv6Gateway', '');
        r['ipv6_address'] = network.get<std::string>('GlobalIPv6Address', '');
        r['ipv6_prefix_len'] =
            INTEGER(network.get<int>('GlobalIPv6PrefixLen', 0));
        r['mac_address'] = network.get<std::string>('MacAddress', '');
        results.push_back(r);
      }
    } catch (const pt::ptree_error& e) {
      VLOG(1) << 'Error getting docker container networks ' << e.what();
    }
  }
    
      if (isShell() || FLAGS_ephemeral) {
    if (Flag::isDefault('database_path') &&
        Flag::isDefault('disable_database')) {
      // The shell should not use a database by default, but should use the DB
      // specified by database_path if it is set
      FLAGS_disable_database = true;
    }
  }
    
    /**
 * @brief Platform-agnostic process object.
 *
 * PlatformProcess is a specialized, platform-agnostic class that handles the
 * process operation needs of osquery.
 */
class PlatformProcess : private boost::noncopyable {
 public:
  /// Default constructor marks the process as invalid
  explicit PlatformProcess() : id_(kInvalidPid) {}
  explicit PlatformProcess(PlatformPidType id);
    }
    
    
    {  NetApiBufferFree(userBuff);
  return gid;
}
    
    
    {  MODULEENTRY32 me;
  MEMORY_BASIC_INFORMATION mInfo;
  me.dwSize = sizeof(MODULEENTRY32);
  auto ret = Module32First(modSnap, &me);
  while (ret != FALSE) {
    for (auto p = me.modBaseAddr;
         VirtualQueryEx(proc, p, &mInfo, sizeof(mInfo)) == sizeof(mInfo) &&
         p < (me.modBaseAddr + me.modBaseSize);
         p += mInfo.RegionSize) {
      Row r;
      r['pid'] = INTEGER(pid);
      std::stringstream ssStart;
      ssStart << std::hex << mInfo.BaseAddress;
      r['start'] = '0x' + ssStart.str();
      std::stringstream ssEnd;
      ssEnd << std::hex << std::setfill('0') << std::setw(16)
            << reinterpret_cast<unsigned long long>(mInfo.BaseAddress) +
                   mInfo.RegionSize;
      r['end'] = '0x' + ssEnd.str();
      r['permissions'] = formatMemPerms(mInfo.Protect);
      r['offset'] =
          BIGINT(reinterpret_cast<unsigned long long>(mInfo.AllocationBase));
      r['device'] = '-1';
      r['inode'] = INTEGER(-1);
      r['path'] = me.szExePath;
      r['pseudo'] = INTEGER(-1);
      results.push_back(r);
    }
    ret = Module32Next(modSnap, &me);
  }
  CloseHandle(proc);
  CloseHandle(modSnap);
  return Status::success();
}
    
    
    {  QueryData const rows = execute_query('select * from interface_details');
  auto verify_non_negative_or_empty = [](std::string const& value) {
    if (value.empty()) {
      return isPlatform(PlatformType::TYPE_WINDOWS);
    }
    auto cast_result = tryTo<int64_t>(value);
    if (!cast_result) {
      return false;
    }
    return cast_result.get() >= 0;
  };
  auto verify_non_empty_string_or_empty_on_win = [](std::string const& value) {
    if (value.empty()) {
      return isPlatform(PlatformType::TYPE_WINDOWS);
    }
    return true;
  };
#ifdef OSQUERY_WINDOWS
  auto verify_int_or_empty_on_win = [](std::string const& value) {
    if (value.empty()) {
      return isPlatform(PlatformType::TYPE_WINDOWS);
    }
    auto cast_result = tryTo<int64_t>(value);
    if (!cast_result) {
      return false;
    }
    return true;
  };
  auto verify_bool_or_empty_on_win = [](std::string const& value) {
    if (value.empty()) {
      return isPlatform(PlatformType::TYPE_WINDOWS);
    }
    if (value != '1' && value != '0') {
      return false;
    }
    return true;
  };
#endif
  auto const row_map = ValidatatioMap{
      {'interface', NonEmptyString},
      {'mac', verify_non_empty_string_or_empty_on_win},
      {'type', NonNegativeInt},
      {'mtu', verify_non_empty_string_or_empty_on_win},
      {'metric', NonNegativeInt},
      {'flags', NonNegativeInt},
      {'ipackets', verify_non_negative_or_empty},
      {'opackets', verify_non_negative_or_empty},
      {'ibytes', verify_non_negative_or_empty},
      {'obytes', verify_non_negative_or_empty},
      {'ierrors', verify_non_negative_or_empty},
      {'oerrors', verify_non_negative_or_empty},
      {'idrops', verify_non_negative_or_empty},
      {'odrops', verify_non_negative_or_empty},
      {'collisions', NonNegativeOrErrorInt},
      {'last_change', IntType},
#ifdef OSQUERY_POSIX
      {'link_speed', NonNegativeInt},
#endif
#ifdef OSQUERY_LINUX
      {'pci_slot', NormalType},
#endif
#ifdef OSQUERY_WINDOWS
      {'friendly_name', NormalType},
      {'description', NormalType},
      {'manufacturer', NormalType},
      {'connection_id', NormalType},
      {'connection_status', verify_int_or_empty_on_win},
      {'enabled', verify_bool_or_empty_on_win},
      {'physical_adapter', verify_bool_or_empty_on_win},
      {'speed', verify_non_negative_or_empty},
      {'service', NormalType},
      {'dhcp_enabled', verify_bool_or_empty_on_win},
      {'dhcp_lease_expires', NormalType},
      {'dhcp_lease_obtained', NormalType},
      {'dhcp_server', NormalType},
      {'dns_domain', NormalType},
      {'dns_domain_suffix_search_order', NormalType},
      {'dns_host_name', NormalType},
      {'dns_server_search_order', NormalType},
#endif
  };
  validate_rows(rows, row_map);
}
    
    #include <osquery/config/tests/test_utils.h>
    
    #include <boost/filesystem/path.hpp>
    
    class InMemoryDatabase final : public Database {
 public:
  explicit InMemoryDatabase(std::string name) : Database(std::move(name)){};
  ~InMemoryDatabase() override {}
    }
    
        for (const auto& op : merge_in.operand_list) {
      if (max.compare(op) < 0) {
        max = op;
      }
    }
    
    
    {  return Put(key_slice, value_slice);
}
    
    // Returns the current memory usage of the specified DB instances.
class MemoryUtil {
 public:
  enum UsageType : int {
    // Memory usage of all the mem-tables.
    kMemTableTotal = 0,
    // Memory usage of those un-flushed mem-tables.
    kMemTableUnFlushed = 1,
    // Memory usage of all the table readers.
    kTableReadersTotal = 2,
    // Memory usage by Cache.
    kCacheTotal = 3,
    kNumUsageTypes = 4
  };
    }
    
    class OptimisticTransactionDB : public StackableDB {
 public:
  // Open an OptimisticTransactionDB similar to DB::Open().
  static Status Open(const Options& options, const std::string& dbname,
                     OptimisticTransactionDB** dbptr);
    }