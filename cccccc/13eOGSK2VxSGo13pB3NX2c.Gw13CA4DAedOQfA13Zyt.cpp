
        
        bool DecodeMetadata(const string& path, GeneratedCodeInfo* info) {
  string data;
  GOOGLE_CHECK_OK(File::GetContents(path, &data, true));
  io::ArrayInputStream input(data.data(), data.size());
  return info->ParseFromZeroCopyStream(&input);
}
    
    
    {  string str_with_null_char('ab\0c', 4);
  EXPECT_EXIT(
      TextFormatDecodeData::DecodeDataForString(str_with_null_char, 'def'),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
  EXPECT_EXIT(
      TextFormatDecodeData::DecodeDataForString('def', str_with_null_char),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
}
#endif  // PROTOBUF_HAS_DEATH_TEST
    
    
    { private:
  Version compiler_version_;
  CodeGeneratorResponse* response_;
  const std::vector<const FileDescriptor*>& parsed_files_;
};
    
    bool GzipOutputStream::Flush() {
  zerror_ = Deflate(Z_FULL_FLUSH);
  // Return true if the flush succeeded or if it was a no-op.
  return  (zerror_ == Z_OK) ||
      (zerror_ == Z_BUF_ERROR && zcontext_.avail_in == 0 &&
       zcontext_.avail_out != 0);
}
    
    
    {}  // namespace internal
    
    #if 0
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
    
    // SameSizeTuplePrefixComparator<k, k>::Eq(t1, t2) returns true if the
// first k fields of t1 equals the first k fields of t2.
// SameSizeTuplePrefixComparator(k1, k2) would be a compiler error if
// k1 != k2.
template <int kSize1, int kSize2>
struct SameSizeTuplePrefixComparator;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45>
struct Types45 {
  typedef T1 Head;
  typedef Types44<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
      T44, T45> Tail;
};
    
      // If we are given the --check_for_leaks command line flag, installs the
  // leak checker.
  if (check_for_leaks) {
    TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    }
    
      // Gets the number of elements.
  size_t Size() const { return size_; }
    
    	if (cmderOptions.registerApp == true)
	{
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_BACKGROUND, cmderOptions.cmderCfgRoot, cmderOptions.cmderSingle);
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_LISTITEM, cmderOptions.cmderCfgRoot, cmderOptions.cmderSingle);
	}
	else if (cmderOptions.unRegisterApp == true)
	{
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_BACKGROUND);
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_LISTITEM);
	}
	else if (cmderOptions.error == true)
	{
		return 1;
	}
	else
	{
		StartCmder(cmderOptions.cmderStart, cmderOptions.cmderSingle, cmderOptions.cmderTask, cmderOptions.cmderCfgRoot, cmderOptions.cmderUserCfg);
	}
    
    /*! \brief a single data instance */
struct DataInst {
  /*! \brief unique id for instance */
  unsigned index;
  /*! \brief content of data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
};  // struct DataInst
    
    TShape Vector2TShape(const std::vector<int> &vec_int) {
  std::vector<mshadow::index_t> vec;
  for (uint32_t i = 0; i < vec_int.size(); ++i)
    vec.push_back(vec_int[i]);
  // 0-dim represents scalar in caffe
  if (vec_int.size() == 0)
    vec.push_back(1);
  return {vec.begin(), vec.end()};
}
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(CaffeLossParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeLoss<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeLoss<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    }
    }
    
      for (auto& e : idx.outputs()) {
    ++ref_count[idx.entry_id(e)];
  }
  for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    for (auto &e : idx[nid].inputs) {
      ++ref_count[idx.entry_id(e)];
    }
  }
    
    std::unique_ptr<BenchmarkReporter> CreateReporter(
    std::string const& name, ConsoleReporter::OutputOptions output_opts) {
  typedef std::unique_ptr<BenchmarkReporter> PtrType;
  if (name == 'console') {
    return PtrType(new ConsoleReporter(output_opts));
  } else if (name == 'json') {
    return PtrType(new JSONReporter);
  } else if (name == 'csv') {
    return PtrType(new CSVReporter);
  } else {
    std::cerr << 'Unexpected format: '' << name << ''\n';
    std::exit(1);
  }
}
    
    std::string FormatString(const char* msg, va_list args);
std::string FormatString(const char* msg, ...);
    
    namespace benchmark {
    }
    
    
    { private:
  LogType(std::ostream* out) : out_(out) {}
  std::ostream* out_;
  BENCHMARK_DISALLOW_COPY_AND_ASSIGN(LogType);
};