
        
        #include <map>
    
    void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
    
    {}  // namespace atom
    
      // Called by native calles.
  bool ShouldShutdown();
    
      // C++ can not distinguish overloaded member function.
  template <AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template <AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template <typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
    class Event : public Wrappable<Event>, public content::WebContentsObserver {
 public:
  static Handle<Event> Create(v8::Isolate* isolate);
    }
    
    void SavePageHandler::OnDownloadUpdated(download::DownloadItem* item) {
  if (item->IsDone()) {
    v8::Isolate* isolate = v8::Isolate::GetCurrent();
    v8::Locker locker(isolate);
    v8::HandleScope handle_scope(isolate);
    if (item->GetState() == download::DownloadItem::COMPLETE) {
      callback_.Run(v8::Null(isolate));
    } else {
      v8::Local<v8::String> error_message =
          v8::String::NewFromUtf8(isolate, 'Fail to save page');
      callback_.Run(v8::Exception::Error(error_message));
    }
    Destroy(item);
  }
}
    
    
    {}  // namespace api
    
    namespace atom {
    }
    
    #if defined(OS_LINUX)
#include 'atom/browser/lib/power_observer_linux.h'
#else
#include 'base/power_monitor/power_observer.h'
#endif  // defined(OS_LINUX)
    
    std::string GetReceiptURL(void);
    
    namespace base {
class TaskRunner;
}
    
    OPERATOR_SCHEMA(FindDuplicateElements)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
The *FindDuplicateElements* op takes a single 1-D tensor *data* as input and returns a single 1-D output tensor *indices*. The output tensor contains the indices of the duplicate elements of the input, excluding the first occurrences. If all elements of *data* are unique, *indices* will be empty.
    
    
    {} // namespace caffe2
    
    REGISTER_CPU_OPERATOR(GatherRangesToDense, GatherRangesToDenseOp<CPUContext>);
NO_GRADIENT(GatherRangesToDense);
    
    <summary> <b>Example</b> </summary>
    
    int16_t word_blob_quality(WERD_RES *word, ROW *row);
void reject_whole_page(PAGE_RES_IT &page_res_it);
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
      /// Return true if we are processing the full image.
  bool IsFullImage() const {
    return rect_left_ == 0 && rect_top_ == 0 &&
           rect_width_ == image_width_ && rect_height_ == image_height_;
  }
    
    // Creates a box file string from a unichar string, TBOX and page number.
void MakeBoxFileStr(const char* unichar_str, const TBOX& box, int page_num,
                    STRING* box_str);
    
    // Deletes all the boxes stored in BoxWord.
void BoxWord::DeleteAllBoxes() {
  length_ = 0;
  boxes_.clear();
  bbox_ = TBOX();
}
    
    
    {}  // namespace tesseract.

    
    template <typename T> class GenericVector;
    
    #include <grpcpp/impl/grpc_library.h>
#include <grpcpp/security/credentials.h>
    
    namespace grpc {
    }
    
    inline absl::string_view GetMethod(const grpc_slice* path) {
  if (GRPC_SLICE_IS_EMPTY(*path)) {
    return '';
  }
  // Check for leading '/' and trim it if present.
  return absl::StripPrefix(absl::string_view(reinterpret_cast<const char*>(
                                                 GRPC_SLICE_START_PTR(*path)),
                                             GRPC_SLICE_LENGTH(*path)),
                           '/');
}
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_SERVER_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_SERVER_FILTER_H
    
    class ProtoServerReflection final
    : public reflection::v1alpha::ServerReflection::Service {
 public:
  ProtoServerReflection();
    }
    
    DynamicThreadPool::DynamicThreadPool(int reserve_threads)
    : shutdown_(false),
      reserve_threads_(reserve_threads),
      nthreads_(0),
      threads_waiting_(0) {
  for (int i = 0; i < reserve_threads_; i++) {
    std::lock_guard<std::mutex> lock(mu_);
    nthreads_++;
    new DynamicThread(this);
  }
}
    
    template<>
void SetDataGradToBlob<mshadow::gpu, float>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<float>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  float *data_ptr = reinterpret_cast<float*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, float)->set_gpu_diff(data_ptr);
}
    
    // Initialization funciton called by caffeOp & caffeLoss
template<typename Dtype>
void InitCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    v->push_back(new ::caffe::Blob<Dtype>());
}
    
      for (auto& e : idx.outputs()) {
    ++ref_count[idx.entry_id(e)];
  }
  for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    for (auto &e : idx[nid].inputs) {
      ++ref_count[idx.entry_id(e)];
    }
  }
    
    namespace mxnet {
namespace io {
// iterator on image recordio
class PrefetcherIter : public IIterator<DataBatch> {
 public:
  explicit PrefetcherIter(IIterator<TBlobBatch>* base)
      : loader_(base), out_(nullptr) {}
    }
    }
    }
    
      int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;
    
    std::pair<JSON, QueryLogItem> getSerializedQueryLogItem() {
  std::pair<JSON, QueryLogItem> p;
  QueryLogItem i;
  JSON doc = JSON::newObject();
  auto dr = getSerializedDiffResults();
  i.results = std::move(dr.second);
  i.name = 'foobar';
  i.calendar_time = 'Mon Aug 25 12:10:57 2014';
  i.time = 1408993857;
  i.identifier = 'foobaz';
  i.epoch = 0L;
  i.counter = 0L;
    }
    
    #include <smartmontools/libsmartctl.h>
    
    #include <fstream>
    
    Expected<std::size_t, Error> decodeCpuNumber(const std::string& str) {
  auto exp = tryTo<std::size_t>(str);
  if (exp.isError()) {
    return createError(Error::IncorrectRange, '', exp.takeError())
           << 'Incorrect CPU number representation ' << boost::io::quoted(str);
  }
  return exp.take();
}
    
    #include <gtest/gtest.h>
    
    class PosixDirectory : public Directory {
 public:
  explicit PosixDirectory(int fd) : fd_(fd) {}
  ~PosixDirectory();
  virtual Status Fsync() override;
    }
    
    std::string kDBPath = '/tmp/rocksdb_column_families_example';
    
      const char* Name() const override { return 'MyFilter'; }
    
    #pragma once
#include <stddef.h>
#include <stdint.h>
#include <string>
    
    // Verify the checksum of file
Status VerifySstFileChecksum(const Options& options,
                             const EnvOptions& env_options,
                             const std::string& file_path);
#endif  // ROCKSDB_LITE
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
      // Return a new block flush policy that flushes data blocks by data size.
  // FlushBlockPolicy may need to access the metadata of the data block
  // builder to determine when to flush the blocks.
  //
  // Callers must delete the result after any database that is using the
  // result has been closed.
  virtual FlushBlockPolicy* NewFlushBlockPolicy(
      const BlockBasedTableOptions& table_options,
      const BlockBuilder& data_block_builder) const = 0;
    
    struct IOStatsContext {
  // reset all io-stats counter to zero
  void Reset();
    }
    
      ThreadStatus(const uint64_t _id,
               const ThreadType _thread_type,
               const std::string& _db_name,
               const std::string& _cf_name,
               const OperationType _operation_type,
               const uint64_t _op_elapsed_micros,
               const OperationStage _operation_stage,
               const uint64_t _op_props[],
               const StateType _state_type) :
      thread_id(_id), thread_type(_thread_type),
      db_name(_db_name),
      cf_name(_cf_name),
      operation_type(_operation_type),
      op_elapsed_micros(_op_elapsed_micros),
      operation_stage(_operation_stage),
      state_type(_state_type) {
    for (int i = 0; i < kNumOperationProperties; ++i) {
      op_properties[i] = _op_props[i];
    }
  }
    
    #include 'modules/drivers/canbus/sensor_gflags.h'
    
    
    {  int ret = x;
  return ret;
}
    
    namespace apollo {
namespace drivers {
namespace conti_radar {
    }
    }
    }
    
    
    {  int ret = x;
  return ret;
}
    
    TEST_F(SpeedLimitTest, SimpleSpeedLimitCreation) {
  SpeedLimit simple_speed_limit;
  EXPECT_TRUE(simple_speed_limit.speed_limit_points().empty());
  EXPECT_EQ(speed_limit_.speed_limit_points().size(), 100);
}
    
    void BackupTrajectoryGenerator::GenerateTrajectory1dPairs(
    const State& init_s, const State& init_d) {
  std::vector<std::shared_ptr<Curve1d>> lon_trajectories;
  std::array<double, 5> dds_condidates = {-0.1, -1.0, -2.0, -3.0, -4.0};
  for (const auto dds : dds_condidates) {
    lon_trajectories.emplace_back(
        new ConstantDecelerationTrajectory1d(init_s[0], init_s[1], dds));
  }
    }
    
    const PolynomialXd& Spline1dSeg::ThirdOrderDerivative() const {
  return third_order_derivative_;
}
    
    Eigen::MatrixXd SplineSegKernel::ThirdOrderDerivativeKernel(
    const uint32_t num_params, const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateThirdOrderDerivative(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'third_order', &term_matrix);
  return (kernel_third_order_derivative_.block(0, 0, num_params, num_params))
      .cwiseProduct(term_matrix);
}
    
    #include 'modules/prediction/common/kml_map_based_test.h'
#include 'modules/prediction/common/prediction_map.h'
    
    namespace apollo {
namespace routing {
    }
    }