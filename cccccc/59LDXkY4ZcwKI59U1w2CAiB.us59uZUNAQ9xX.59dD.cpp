
        
        #include 'atom/browser/api/trackable_object.h'
#include 'base/callback.h'
#include 'chrome/browser/extensions/global_shortcut_listener.h'
#include 'native_mate/handle.h'
#include 'ui/base/accelerators/accelerator.h'
    
    #endif  // ATOM_BROWSER_RELAUNCHER_H_

    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(WinFrameView);
};
    
    
    {}  // namespace atom
    
      // Returns whether current process is browser process, currently we detect it
  // by checking whether current has used V8 Lock, but it might be a bad idea.
  static inline bool IsBrowserProcess() { return v8::Locker::IsActive(); }
    
    namespace atom {
    }
    
    #include 'ui/gfx/geometry/rect.h'
    
      /* This operation will write the separate BGR planes directly to the
   * input layer of the network because it is wrapped by the cv::Mat
   * objects in input_channels. */
  cv::split(sample_normalized, *input_channels);
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
    
    {  Blob<Dtype> col_buffer_;
  Blob<Dtype> bias_multiplier_;
};
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
    #include 'caffe/layers/pooling_layer.hpp'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    
    {  /**
   * Invoked if the stream was canceled via
   * bidirectional_stream_cancel(). Once invoked, no further callback
   * methods will be invoked.
   */
  void (*on_canceled)(bidirectional_stream* stream);
} bidirectional_stream_callback;
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    #include <algorithm>
    
    // Tucks all generator state in an anonymous namespace away from
// PythonGrpcGenerator and the header file, mostly to encourage future changes
// to not require updates to the grpcio-tools C++ code part. Assumes that it is
// only ever used from a single thread.
struct PrivateGenerator {
  const GeneratorConfiguration& config;
  const grpc_generator::File* file;
    }
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    static int set_addresses(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* data,
		  size_t len) {
	if (msg->ifa_family == AF_INET) {
		sockaddr_in* sa = new sockaddr_in;
		sa->sin_family = AF_INET;
		memcpy(&sa->sin_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else if (msg->ifa_family == AF_INET6) {
		sockaddr_in6* sa = new sockaddr_in6;
		sa->sin6_family = AF_INET6;
		sa->sin6_scope_id = msg->ifa_index;
		memcpy(&sa->sin6_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else {
		return -1;
	}
	return 0;
}
    
    PowerIphone::~PowerIphone() {
	// TODO Auto-generated destructor stub
}

    
    		FileAccess *f = FileAccess::open(certs_path, FileAccess::READ);
		if (f) {
			int flen = f->get_len();
			out.resize(flen + 1);
			{
				PoolByteArray::Write w = out.write();
				f->get_buffer(w.ptr(), flen);
				w[flen] = 0; //end f string
			}
    }
    
    
    {	int sent;
	Error err = sp->base->put_partial_data((const uint8_t *)buf, len, sent);
	if (err != OK) {
		return MBEDTLS_ERR_SSL_INTERNAL_ERROR;
	}
	if (sent == 0) {
		return MBEDTLS_ERR_SSL_WANT_WRITE;
	}
	return sent;
}
    
    	static int bio_recv(void *ctx, unsigned char *buf, size_t len);
	static int bio_send(void *ctx, const unsigned char *buf, size_t len);
    
    #endif // WEBSOCKET_CLIENT_H

    
    		MethodBind *bind = create_method_bind(p_method);
		const Variant *ptr[2] = { &p_def1, &p_def2 };
    
    	bool singleton;
	bool load_once;
	String symbol_prefix;
	bool reloadable;
    
        const int tmp0 = (ACCESS_ROW(0) + ACCESS_ROW(4)) << CONST_BITS;
    const int tmp1 = (ACCESS_ROW(0) - ACCESS_ROW(4)) << CONST_BITS;
    
    
    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
      // Set the multi-thread path, which both threads will write into.
  auto multi_thread_path = fs::path(kTestWorkingDirectory) / 'threadperms.txt';
  kMultiThreadPermissionPath = multi_thread_path.string();
    
    
    {  EXPECT_EQ(constraint.op, EQUALS);
  EXPECT_EQ(constraint.expr, 'none');
}
    
    class TimeTests : public testing::Test {};
    
    
    {  status_ = Status(0);
}
    
    class RocksDBDatabasePluginTests : public DatabasePluginTests {
 protected:
  std::string name() override {
    return 'rocksdb';
  }
};
    
    
    {  auto results = generateHeader(lengths, order);
  auto expected = '| name       | age  | food                    | number |\n';
  EXPECT_EQ(results, expected);
}
    
    struct SCNetworkSubscriptionContext : public SubscriptionContext {
  // Target type.
  SCNetworkSubscriptionType type;
    }
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    SEXP XGBoosterGetAttrNames_R(SEXP handle) {
  SEXP out;
  R_API_BEGIN();
  bst_ulong len;
  const char **res;
  CHECK_CALL(XGBoosterGetAttrNames(R_ExternalPtrAddr(handle),
                                   &len, &res));
  if (len > 0) {
    out = PROTECT(allocVector(STRSXP, len));
    for (size_t i = 0; i < len; ++i) {
      SET_STRING_ELT(out, i, mkChar(res[i]));
    }
  } else {
    out = PROTECT(R_NilValue);
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}

    
    /*! \brief interface of objective function */
class ObjFunction {
 public:
  /*! \brief virtual destructor */
  virtual ~ObjFunction() = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Configure the objective with the specified parameters.
   * \param args arguments to the objective function.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief Get gradient over each of predictions, given existing information.
   * \param preds prediction of current round
   * \param info information about labels, weights, groups in rank
   * \param iteration current iteration number.
   * \param out_gpair output of get gradient, saves gradient and second order gradient in
   */
  virtual void GetGradient(HostDeviceVector<bst_float>* preds,
                           const MetaInfo& info,
                           int iteration,
                           HostDeviceVector<GradientPair>* out_gpair) = 0;
    }