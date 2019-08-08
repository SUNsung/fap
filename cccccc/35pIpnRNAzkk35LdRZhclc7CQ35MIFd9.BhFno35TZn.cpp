
        
        
    {
    {      // white-space before a colon means it's not a URL
      if (c == ' ' || (0x9 <= c && c <= 0xD))
        break;
    }
  }
    
    #ifndef SHELL_APP_COMMAND_LINE_ARGS_H_
#define SHELL_APP_COMMAND_LINE_ARGS_H_
    
    class AutoUpdater : public mate::EventEmitter<AutoUpdater>,
                    public auto_updater::Delegate,
                    public WindowListObserver {
 public:
  static mate::Handle<AutoUpdater> Create(v8::Isolate* isolate);
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(BrowserWindow);
};
    
    
    {}  // namespace electron

    
    using electron::api::Debugger;
    
      PendingRequestMap pending_requests_;
  int previous_request_id_ = 0;
    
    class DownloadItem : public mate::TrackableObject<DownloadItem>,
                     public download::DownloadItem::Observer {
 public:
  static mate::Handle<DownloadItem> Create(v8::Isolate* isolate,
                                           download::DownloadItem* item);
    }
    
    public:
    explicit SignVerifyMessageDialog(const PlatformStyle *platformStyle, QWidget *parent);
    ~SignVerifyMessageDialog();
    
    /**
 * Changelog:
 * - March 2013, Diederik Huys:    original version
 * - November 2014, Pieter Wuille: updated to use Peter Dettman's parallel multiplication algorithm
 * - December 2014, Pieter Wuille: converted from YASM to GCC inline assembly
 */
    
    bool ParseInt32(const std::string& str, int32_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtol will not set errno if valid
    long int n = strtol(str.c_str(), &endp, 10);
    if(out) *out = (int32_t)n;
    // Note that strtol returns a *long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int32_t*. On 64-bit
    // platforms the size of these types may be different.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int32_t>::min() &&
        n <= std::numeric_limits<int32_t>::max();
}
    
        Random rnd(301);
    std::string big1 = RandomString(&rnd, 100000);
    ASSERT_OK(Put(Key(0), RandomString(&rnd, 10000)));
    ASSERT_OK(Put(Key(1), RandomString(&rnd, 10000)));
    ASSERT_OK(Put(Key(2), big1));
    ASSERT_OK(Put(Key(3), RandomString(&rnd, 10000)));
    ASSERT_OK(Put(Key(4), big1));
    ASSERT_OK(Put(Key(5), RandomString(&rnd, 10000)));
    ASSERT_OK(Put(Key(6), RandomString(&rnd, 300000)));
    ASSERT_OK(Put(Key(7), RandomString(&rnd, 10000)));
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    TestWritableFile::TestWritableFile(const FileState& state,
                                   WritableFile* f,
                                   FaultInjectionTestEnv* env)
    : state_(state),
      target_(f),
      writable_file_opened_(true),
      env_(env) {
  assert(f != NULL);
}
    
    std::string TableFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'ldb');
}
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string LogFileName(const std::string& dbname, uint64_t number);
    
    
    {};
    
        // Construct blocks for gain compensator
    for (int img_idx = 0; img_idx < num_images; ++img_idx)
    {
        Size bl_per_img((images[img_idx].cols + bl_width_ - 1) / bl_width_,
                        (images[img_idx].rows + bl_height_ - 1) / bl_height_);
        int bl_width = (images[img_idx].cols + bl_per_img.width - 1) / bl_per_img.width;
        int bl_height = (images[img_idx].rows + bl_per_img.height - 1) / bl_per_img.height;
        bl_per_imgs[img_idx] = bl_per_img;
        for (int by = 0; by < bl_per_img.height; ++by)
        {
            for (int bx = 0; bx < bl_per_img.width; ++bx)
            {
                Point bl_tl(bx * bl_width, by * bl_height);
                Point bl_br(std::min(bl_tl.x + bl_width, images[img_idx].cols),
                            std::min(bl_tl.y + bl_height, images[img_idx].rows));
    }
    }
    }
    
            size_t col = 0;
        for(; col < src_w8; col += 8)
        {
            internal::prefetch(rows[3] + col);
            internal::prefetch(rows[7] + col);
            internal::prefetch(rows[11] + col);
            internal::prefetch(rows[15] + col);
resize8u_ystretch:
            uint8x8_t vsrc0l1 = vld1_u8(rows[0] + col);
            uint8x8_t vsrc0l2 = vld1_u8(rows[1] + col);
            uint8x8_t vsrc1l1 = vld1_u8(rows[2] + col);
            uint8x8_t vsrc1l2 = vld1_u8(rows[3] + col);
    }
    
    
    {        void init(int n) {
            static const float r[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.04761904761904762f, 0.09523809523809523f, 0.1428571428571428f, 0.1904761904761905f, 0.2380952380952381f, 0.2857142857142857f, 0.3333333333333333f, 0.3809523809523809f, 0.4285714285714285f, 0.4761904761904762f, 0.5238095238095238f, 0.5714285714285714f, 0.6190476190476191f, 0.6666666666666666f, 0.7142857142857143f, 0.7619047619047619f, 0.8095238095238095f, 0.8571428571428571f, 0.9047619047619048f, 0.9523809523809523f, 1};
            static const float g[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02380952380952381f, 0.04761904761904762f, 0.07142857142857142f, 0.09523809523809523f, 0.119047619047619f, 0.1428571428571428f, 0.1666666666666667f, 0.1904761904761905f, 0.2142857142857143f, 0.2380952380952381f, 0.2619047619047619f, 0.2857142857142857f, 0.3095238095238095f, 0.3333333333333333f, 0.3571428571428572f, 0.3809523809523809f, 0.4047619047619048f, 0.4285714285714285f, 0.4523809523809524f, 0.4761904761904762f, 0.5f, 0.5238095238095238f, 0.5476190476190477f, 0.5714285714285714f, 0.5952380952380952f, 0.6190476190476191f, 0.6428571428571429f, 0.6666666666666666f, 0.6904761904761905f, 0.7142857142857143f, 0.7380952380952381f, 0.7619047619047619f, 0.7857142857142857f, 0.8095238095238095f, 0.8333333333333334f, 0.8571428571428571f, 0.8809523809523809f, 0.9047619047619048f, 0.9285714285714286f, 0.9523809523809523f, 0.9761904761904762f, 1};
            static const float b[] = { 0, 0.01587301587301587f, 0.03174603174603174f, 0.04761904761904762f, 0.06349206349206349f, 0.07936507936507936f, 0.09523809523809523f, 0.1111111111111111f, 0.126984126984127f, 0.1428571428571428f, 0.1587301587301587f, 0.1746031746031746f, 0.1904761904761905f, 0.2063492063492063f, 0.2222222222222222f, 0.2380952380952381f, 0.253968253968254f, 0.2698412698412698f, 0.2857142857142857f, 0.3015873015873016f, 0.3174603174603174f, 0.3333333333333333f, 0.3492063492063492f, 0.3650793650793651f, 0.3809523809523809f, 0.3968253968253968f, 0.4126984126984127f, 0.4285714285714285f, 0.4444444444444444f, 0.4603174603174603f, 0.4761904761904762f, 0.492063492063492f, 0.5079365079365079f, 0.5238095238095238f, 0.5396825396825397f, 0.5555555555555556f, 0.5714285714285714f, 0.5873015873015873f, 0.6031746031746031f, 0.6190476190476191f, 0.6349206349206349f, 0.6507936507936508f, 0.6666666666666666f, 0.6825396825396826f, 0.6984126984126984f, 0.7142857142857143f, 0.7301587301587301f, 0.746031746031746f, 0.7619047619047619f, 0.7777777777777778f, 0.7936507936507936f, 0.8095238095238095f, 0.8253968253968254f, 0.8412698412698413f, 0.8571428571428571f, 0.873015873015873f, 0.8888888888888888f, 0.9047619047619048f, 0.9206349206349206f, 0.9365079365079365f, 0.9523809523809523f, 0.9682539682539683f, 0.9841269841269841f, 1};
            Mat X = linspace(0,1,64);
            this->_lut = ColorMap::linear_colormap(X,
                    Mat(64,1, CV_32FC1, (void*)r).clone(), // red
                    Mat(64,1, CV_32FC1, (void*)g).clone(), // green
                    Mat(64,1, CV_32FC1, (void*)b).clone(), // blue
                    n);  // number of sample points
        }
    };
    
    INSTANTIATE_TEST_CASE_P(Sanity, PlanarTest,
                        Values(std::make_pair(cv::Size{8, 8}, cv::Size{4, 4})
                              ,std::make_pair(cv::Size{960, 540}, cv::Size{224, 224})
                              ,std::make_pair(cv::Size{64, 64}, cv::Size{224, 224})
                              ));
    
        Returns false if error occurred while accessing the parameters (bad conversion, missing arguments,
    etc.). Call @ref printErrors to print error messages list.
     */
    bool check() const;
    
        std::string fileName_perf_validation_results_src = args.get<std::string>('perf_read_validation_results');
    if (!fileName_perf_validation_results_src.empty())
    {
        perf_validation_enabled = true;
        loadPerfValidationResults(perf_validation_results_directory + fileName_perf_validation_results_src);
    }
    
    #ifndef OPENCV_LOGGER_DEFINES_HPP
#define OPENCV_LOGGER_DEFINES_HPP
    
      // Computes all the cross product distances of the points from the line,
  // storing the actual (signed) cross products in distances_.
  // Ignores distances of points that are further away than the previous point,
  // and overlaps the previous point by at least half.
  void ComputeDistances(const ICOORD& start, const ICOORD& end);
    
    void hdf5_save_int(hid_t loc_id, const string& dataset_name, int i) {
  hsize_t one = 1;
  herr_t status = \
    H5LTmake_dataset_int(loc_id, dataset_name.c_str(), 1, &one, &i);
  CHECK_GE(status, 0)
    << 'Failed to save int dataset with name ' << dataset_name;
}
    
    #include <vector>
    
    
    {  for (int i = 0; i < count; ++i) {
    top_data[i] = std::max(min, std::min(bottom_data[i], max));
  }
}
    
    #include 'caffe/blob.hpp'
#include 'caffe/common.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      Preprocess(img, &input_channels);
    
      FLAGS_alsologtostderr = 1;
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    					int vtx = face[idx][0].to_int() - 1;
					if (vtx < 0)
						vtx += vertices.size() + 1;
					ERR_FAIL_INDEX_V(vtx, vertices.size(), ERR_FILE_CORRUPT);
    
    			if (ofs < decr_size) {
    }
    
    			linear_velocity *= damp;
			angular_velocity *= angular_damp;
    
    void CPUParticles2DEditorPlugin::_menu_callback(int p_idx) {
    }
    
    class CPUParticles2DEditorPlugin : public EditorPlugin {
    }
    
    CPUParticlesEditorPlugin::~CPUParticlesEditorPlugin() {
}

    
    #include 'editor/editor_node.h'
#include 'editor/editor_plugin.h'
#include 'scene/2d/collision_polygon_2d.h'
#include 'scene/2d/particles_2d.h'
#include 'scene/gui/box_container.h'
#include 'scene/gui/file_dialog.h'
    
    class ParticlesEditorPlugin : public EditorPlugin {
    }
    
    				DEBUG_TIME('sem_open');
				int status = get_32();
				if (status != OK) {
					fa->_respond(0, Error(status));
				} else {
					uint64_t len = get_64();
					fa->_respond(len, Error(status));
				}
    
    // Note: a second call to this will add in front the result of the first call.
// An example is calling this on a copy of ChannelArguments which already has a
// prefix. The user can build up a prefix string by calling this multiple times,
// each with more significant identifier.
void ChannelArguments::SetUserAgentPrefix(
    const grpc::string& user_agent_prefix) {
  if (user_agent_prefix.empty()) {
    return;
  }
  bool replaced = false;
  auto strings_it = strings_.begin();
  for (auto it = args_.begin(); it != args_.end(); ++it) {
    const grpc_arg& arg = *it;
    ++strings_it;
    if (arg.type == GRPC_ARG_STRING) {
      if (grpc::string(arg.key) == GRPC_ARG_PRIMARY_USER_AGENT_STRING) {
        GPR_ASSERT(arg.value.string == strings_it->c_str());
        *(strings_it) = user_agent_prefix + ' ' + arg.value.string;
        it->value.string = const_cast<char*>(strings_it->c_str());
        replaced = true;
        break;
      }
      ++strings_it;
    }
  }
  if (!replaced) {
    SetString(GRPC_ARG_PRIMARY_USER_AGENT_STRING, user_agent_prefix);
  }
}
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
      void SetNextResolution(const std::vector<AddressData>& address_data) {
    grpc_core::ExecCtx exec_ctx;
    grpc_core::Resolver::Result result;
    for (const auto& addr : address_data) {
      char* lb_uri_str;
      gpr_asprintf(&lb_uri_str, 'ipv4:127.0.0.1:%d', addr.port);
      grpc_uri* lb_uri = grpc_uri_parse(lb_uri_str, true);
      GPR_ASSERT(lb_uri != nullptr);
      grpc_resolved_address address;
      GPR_ASSERT(grpc_parse_uri(lb_uri, &address));
      std::vector<grpc_arg> args_to_add;
      if (addr.is_balancer) {
        args_to_add.emplace_back(grpc_channel_arg_integer_create(
            const_cast<char*>(GRPC_ARG_ADDRESS_IS_BALANCER), 1));
        args_to_add.emplace_back(grpc_channel_arg_string_create(
            const_cast<char*>(GRPC_ARG_ADDRESS_BALANCER_NAME),
            const_cast<char*>(addr.balancer_name.c_str())));
      }
      grpc_channel_args* args = grpc_channel_args_copy_and_add(
          nullptr, args_to_add.data(), args_to_add.size());
      result.addresses.emplace_back(address.addr, address.len, args);
      grpc_uri_destroy(lb_uri);
      gpr_free(lb_uri_str);
    }
    response_generator_->SetResponse(std::move(result));
  }
    
    #include 'src/core/lib/iomgr/port.h'
    
    int main(int argc, char** argv) {
  grpc::testing::TestEnvironment env(argc, argv);
  test_strdup();
  test_dump();
  test_parse_uint32();
  test_asprintf();
  test_strjoin();
  test_strjoin_sep();
  test_ltoa();
  test_int64toa();
  test_leftpad();
  test_stricmp();
  test_memrchr();
  test_parse_bool_value();
  return 0;
}

    
    #include <grpcpp/create_channel_impl.h>
#include <grpcpp/support/channel_arguments.h>
    
    CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
      auto stream = stub->BidiStream(&context);
    
      std::vector<grpc::string> services;
  desc_db_->GetServices(&services);
  // The service list has at least one service (reflection servcie).
  EXPECT_TRUE(services.size() > 0);
    
    
    { private:
  bool init_server_is_called_;
  bool finish_is_called_;
  bool change_arguments_is_called_;
  bool register_service_;
  std::shared_ptr<TestServiceImpl> service_;
};
    
    
    {
    {}  // namespace profiler
}  // namespace mxnet
#endif  // MXNET_PROFILER_AGGREGATE_STATS_H_

    
      std::lock_guard<std::mutex> lock(Storage::Get()->GetMutex(Context::kGPU));
  int bucket = get_bucket(handle->size);
  size_t size = get_size(bucket);
  auto&& reuse_pool = memory_pool_[bucket];
  if (reuse_pool.size() == 0) {
    mxnet::common::cuda::DeviceStore device_store(handle->ctx.real_dev_id(), true);
    size_t free, total;
    cudaMemGetInfo(&free, &total);
    if (free <= total * reserve_ / 100 || size > free - total * reserve_ / 100)
      ReleaseAll();
    }
    
    std::shared_ptr<Storage> Storage::_GetSharedRef() {
#ifdef __MXNET_JS__
  // dummy code needed for emscripten code to pass
  // do not know why, the new will be NULLPTR
  static int *q = new int();
#endif
  static std::shared_ptr<Storage> inst(new StorageImpl());
  return inst;
}
    
        for (index_t col_c = (offset_c / 2); col_c < channel_per_group; col_c += col_step) {
      const index_t col_pos = ((col_c * height_col) + h) * width_col + w;
      const index_t bp_dir = offset_c % 2;
    }
    
      DType* back_ht1;
  DType* back_dht1 = dht1 + N * H;  // [N, H]
  DType* back_gateN = gateN + T * N * H;
  DType* back_wx_ptr = wx_ptr + I * H + H * H;
  DType* back_wh_ptr = wh_ptr + I * H + H * H;
  DType* back_dwx = dwx + I * H + H * H;
  DType* back_dwh = dwh + I * H + H * H;
  DType* back_dbx = dbx + H * 2;
  DType* back_dbh = dbh + H * 2;
    
          DType sub_bin_size_h = bin_size_h / static_cast<DType>(sample_per_part);
      DType sub_bin_size_w = bin_size_w / static_cast<DType>(sample_per_part);
    
      std::vector<NDArray*> outputs, ograds, variables;
  outputs.reserve(num_output);
  for (mx_uint i = 0; i < num_output; ++i) {
    outputs.emplace_back(reinterpret_cast<NDArray*>(output_handles[i]));
  }
    
                                                      [[1 1]
                                                   [1 1]]]
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
    // Initialization funciton called by caffeOp & caffeLoss
template<typename Dtype>
void InitCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    v->push_back(new ::caffe::Blob<Dtype>());
}
    
    
    {
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Protoxt ' << value <<' is more than one layer';
    default_value_ = caffe::LayerParameter(net_param.layer(0));
    has_default_ = true;
    // return self to allow chaining
    return this->self();
  }
};