
        
        template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
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
    
    ```
    
    			if (szArgList[i + 1] != NULL && szArgList[i + 1][0] != '/')
			{
				cmderOptions.cmderCfgRoot = szArgList[i + 1];
				i++;
			}
		}
		else if (_wcsicmp(L'/start', szArgList[i]) == 0)
		{
			int len = wcslen(szArgList[i + 1]);
			if (wcscmp(&szArgList[i + 1][len - 1], L'\'') == 0)
			{
				szArgList[i + 1][len - 1] = '\0';
			}
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    
    {
    {
    {  // base margin
  bst_float base_margin;
  // model parameter
  GBTreeModelParam param;
  /*! \brief vector of trees stored in the model */
  std::vector<std::unique_ptr<RegTree> > trees;
  /*! \brief for the update process, a place to keep the initial trees */
  std::vector<std::unique_ptr<RegTree> > trees_to_update;
  /*! \brief some information indicator of the tree, reserved */
  std::vector<int> tree_info;
};
}  // namespace gbm
}  // namespace xgboost

    
    namespace xgboost {
namespace obj {
    }
    }
    
      virtual bst_float ComputeSplitScore(bst_uint nodeid,
                                      bst_uint featureid,
                                      const GradStats& left_stats,
                                      const GradStats& right_stats) const;
    
      std::vector<int> range_;
    
    // Source project : https://github.com/ismaelJimenez/cpp.leastsq
// Adapted to be used with google benchmark
    
      for (auto& c : result.counters) {
    const std::size_t cNameLen = std::max(std::string::size_type(10),
                                          c.first.length());
    auto const& s = HumanReadableNumber(c.second.value, 1000);
    if (output_options_ & OO_Tabular) {
      if (c.second.flags & Counter::kIsRate) {
        printer(Out, COLOR_DEFAULT, ' %*s/s', cNameLen - 2, s.c_str());
      } else {
        printer(Out, COLOR_DEFAULT, ' %*s', cNameLen, s.c_str());
      }
    } else {
      const char* unit = (c.second.flags & Counter::kIsRate) ? '/s' : '';
      printer(Out, COLOR_DEFAULT, ' %s=%s%s', c.first.c_str(), s.c_str(),
              unit);
    }
  }
    
    namespace {
std::exception const* get_std_exception_(std::exception_ptr eptr) noexcept {
  try {
    std::rethrow_exception(eptr);
  } catch (const std::exception& ex) {
    return &ex;
  } catch (...) {
    return nullptr;
  }
}
} // namespace
    
    template <class UIntType, UIntType a, UIntType c, UIntType m>
struct StateSize<std::linear_congruential_engine<UIntType, a, c, m>> {
  // From the standard [rand.eng.lcong], this is ceil(log2(m) / 32) + 3,
  // which is the same as ceil(ceil(log2(m) / 32) + 3, and
  // ceil(log2(m)) <= std::numeric_limits<UIntType>::digits
  using type = std::integral_constant<
      size_t,
      (std::numeric_limits<UIntType>::digits + 31) / 32 + 3>;
};
    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}
    
    namespace folly {
    }
    
      ~atomic_shared_ptr() {
    store(SharedPtr(nullptr));
  }
  void operator=(SharedPtr desired) /* noexcept */ {
    store(std::move(desired));
  }
  void operator=(const atomic_shared_ptr<T>&) = delete;
    
    /// Returns the best real CacheLocality information available
static CacheLocality getSystemLocalityInfo() {
  if (kIsLinux) {
    try {
      return CacheLocality::readFromSysfs();
    } catch (...) {
      // keep trying
    }
  }
    }
    
    ErrorCode FakeCanClient::Receive(std::vector<CanFrame> *const frames,
                                 int32_t *const frame_num) {
  if (frame_num == nullptr || frames == nullptr) {
    AERROR << 'frames or frame_num pointer is null';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  frames->resize(*frame_num);
  const int MOCK_LEN = 8;
  for (size_t i = 0; i < frames->size(); ++i) {
    for (int j = 0; j < MOCK_LEN; ++j) {
      (*frames)[i].data[j] = j;
    }
    (*frames)[i].id = i;
    (*frames)[i].len = MOCK_LEN;
    ADEBUG << (*frames)[i].CanFrameString() << 'frame_num[' << i << ']';
  }
  usleep(USLEEP_INTERVAL);
  ++recv_counter_;
  return ErrorCode::OK;
}
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');