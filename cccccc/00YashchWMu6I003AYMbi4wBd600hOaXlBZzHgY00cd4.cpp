
        
        
    {    void KeyChord::Vkey(int32_t value)
    {
        _vkey = value;
    }
}

    
    // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    static PyObject* AddMessage(RepeatedCompositeContainer* self, PyObject* value) {
  cmessage::AssureWritable(self->parent);
  PyObject* py_cmsg;
  Message* message = self->parent->message;
  const Reflection* reflection = message->GetReflection();
  py_cmsg = Add(self, nullptr, nullptr);
  if (py_cmsg == nullptr) return nullptr;
  CMessage* cmsg = reinterpret_cast<CMessage*>(py_cmsg);
  if (ScopedPyObjectPtr(cmessage::MergeFrom(cmsg, value)) == nullptr) {
    reflection->RemoveLast(
        message, self->parent_field_descriptor);
    Py_DECREF(cmsg);
    return nullptr;
  }
  return py_cmsg;
}
    
    #include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/logging.h>
    
    
    {  ArenaStringPtr field2;
  field2.UnsafeSetDefault(&default_value);
  std::string* mut = field2.Mutable(&default_value, NULL);
  EXPECT_EQ(mut, field2.Mutable(&default_value, NULL));
  EXPECT_EQ(mut, &field2.Get());
  EXPECT_NE(&default_value, mut);
  EXPECT_EQ(std::string('default'), *mut);
  *mut = 'Test long long long long value';  // ensure string allocates storage
  EXPECT_EQ(std::string('Test long long long long value'), field2.Get());
  field2.Destroy(&default_value, NULL);
}
    
    CodeGenerator::~CodeGenerator() {}
    
      // Opens the given file, truncating it if it exists, and returns a
  // ZeroCopyOutputStream that writes to the file.  The caller takes ownership
  // of the returned object.  This method never fails (a dummy stream will be
  // returned instead).
  //
  // The filename given should be relative to the root of the source tree.
  // E.g. the C++ generator, when generating code for 'foo/bar.proto', will
  // generate the files 'foo/bar.pb.h' and 'foo/bar.pb.cc'; note that
  // 'foo/' is included in these filenames.  The filename is not allowed to
  // contain '.' or '..' components.
  virtual io::ZeroCopyOutputStream* Open(const std::string& filename) = 0;
    
      // Generate header code defining the enum.  This code should be placed
  // within the enum's package namespace, but NOT within any class, even for
  // nested enums.
  void GenerateDefinition(io::Printer* printer);
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
class Context;            // context.h
class ClassNameResolver;  // name_resolver.h
}  // namespace java
}  // namespace compiler
namespace io {
class Printer;  // printer.h
}
}  // namespace protobuf
}  // namespace google
    
    #ifndef CPU_ONLY
template <typename Dtype>
void sgd_update_gpu(int N, Dtype* g, Dtype* h, Dtype momentum,
    Dtype local_rate);
#endif
    
      virtual inline const char* type() const { return 'Clip'; }
    
    TYPED_TEST(NeuronLayerTest, TestELUasReLU) {
  typedef typename TypeParam::Dtype Dtype;
  LayerParameter layer_param;
  CHECK(google::protobuf::TextFormat::ParseFromString(
      'elu_param { alpha: 0 }', &layer_param));
  ELULayer<Dtype> layer(layer_param);
  layer.SetUp(this->blob_bottom_vec_, this->blob_top_vec_);
  layer.Forward(this->blob_bottom_vec_, this->blob_top_vec_);
  // Now, check values
  const Dtype* bottom_data = this->blob_bottom_->cpu_data();
  const Dtype* top_data = this->blob_top_->cpu_data();
  for (int i = 0; i < this->blob_bottom_->count(); ++i) {
    EXPECT_GE(top_data[i], 0.);
    EXPECT_TRUE(top_data[i] == 0 || top_data[i] == bottom_data[i]);
  }
}
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::Forward_cpu(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top) {
  const Dtype* bottom_data = bottom[0]->cpu_data();
  Dtype* top_data = top[0]->mutable_cpu_data();
  const Dtype* weight = this->blobs_[0]->cpu_data();
  caffe_cpu_gemm<Dtype>(CblasNoTrans, transpose_ ? CblasNoTrans : CblasTrans,
      M_, N_, K_, (Dtype)1.,
      bottom_data, weight, (Dtype)0., top_data);
  if (bias_term_) {
    caffe_cpu_gemm<Dtype>(CblasNoTrans, CblasNoTrans, M_, N_, 1, (Dtype)1.,
        bias_multiplier_.cpu_data(),
        this->blobs_[1]->cpu_data(), (Dtype)1., top_data);
  }
}
    
      bp::class_<Timer, shared_ptr<Timer>, boost::noncopyable>(
    'Timer', bp::init<>())
    .def('start', &Timer::Start)
    .def('stop', &Timer::Stop)
    .add_property('ms', &Timer::MilliSeconds);
  BP_REGISTER_SHARED_PTR_TO_PYTHON(Timer);
    
    template <typename Dtype>
void Net<Dtype>::ToHDF5(const string& filename, bool write_diff) const {
// This code is taken from https://github.com/sh1r0/caffe-android-lib
#ifdef USE_HDF5
  hid_t file_hid = H5Fcreate(filename.c_str(), H5F_ACC_TRUNC, H5P_DEFAULT,
      H5P_DEFAULT);
  CHECK_GE(file_hid, 0)
      << 'Couldn't open ' << filename << ' to save weights.';
  hid_t data_hid = H5Gcreate2(file_hid, 'data', H5P_DEFAULT, H5P_DEFAULT,
      H5P_DEFAULT);
  CHECK_GE(data_hid, 0) << 'Error saving weights to ' << filename << '.';
  hid_t diff_hid = -1;
  if (write_diff) {
    diff_hid = H5Gcreate2(file_hid, 'diff', H5P_DEFAULT, H5P_DEFAULT,
        H5P_DEFAULT);
    CHECK_GE(diff_hid, 0) << 'Error saving weights to ' << filename << '.';
  }
  for (int layer_id = 0; layer_id < layers_.size(); ++layer_id) {
    const LayerParameter& layer_param = layers_[layer_id]->layer_param();
    string layer_name = layer_param.name();
    hid_t layer_data_hid = H5Gcreate2(data_hid, layer_name.c_str(),
        H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
    CHECK_GE(layer_data_hid, 0)
        << 'Error saving weights to ' << filename << '.';
    hid_t layer_diff_hid = -1;
    if (write_diff) {
      layer_diff_hid = H5Gcreate2(diff_hid, layer_name.c_str(),
          H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
      CHECK_GE(layer_diff_hid, 0)
          << 'Error saving weights to ' << filename << '.';
    }
    int num_params = layers_[layer_id]->blobs().size();
    for (int param_id = 0; param_id < num_params; ++param_id) {
      ostringstream dataset_name;
      dataset_name << param_id;
      const int net_param_id = param_id_vecs_[layer_id][param_id];
      if (param_owners_[net_param_id] == -1) {
        // Only save params that own themselves
        hdf5_save_nd_dataset<Dtype>(layer_data_hid, dataset_name.str(),
            *params_[net_param_id]);
      }
      if (write_diff) {
        // Write diffs regardless of weight-sharing
        hdf5_save_nd_dataset<Dtype>(layer_diff_hid, dataset_name.str(),
            *params_[net_param_id], true);
      }
    }
    H5Gclose(layer_data_hid);
    if (write_diff) {
      H5Gclose(layer_diff_hid);
    }
  }
  H5Gclose(data_hid);
  if (write_diff) {
    H5Gclose(diff_hid);
  }
  H5Fclose(file_hid);
// This code is taken from https://github.com/sh1r0/caffe-android-lib
#else
  LOG(FATAL) << 'ToHDF5 requires hdf5; compile with USE_HDF5.';
#endif  // USE_HDF5
}
    
    template <typename Dtype>
string Solver<Dtype>::SnapshotFilename(const string& extension) {
  return param_.snapshot_prefix() + '_iter_' + caffe::format_int(iter_)
    + extension;
}
    
    const int kCIFARSize = 32;
const int kCIFARImageNBytes = 3072;
const int kCIFARBatchSize = 10000;
const int kCIFARTrainBatches = 5;
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    
    {}  // namespace caffe
    
    
    {
    {            // Assign to param, constructing with retain behaviour
            // to correctly capture each underlying CL object
            for (size_type i = 0; i < ids.size(); i++) {
                (*devices)[i] = Device(ids[i], true);
            }
        }
        return CL_SUCCESS;
    }
#endif
    
            void trackLockThread(Array<float>& poseKeypoints, Array<long long>& poseIds, const cv::Mat& cvMatInput,
                             const long long frameId);
    
    
    {    template Rectangle<char> recenter(const Rectangle<char>& rectangle, const char newWidth, const char newHeight);
    template Rectangle<signed char> recenter(const Rectangle<signed char>& rectangle, const signed char newWidth, const signed char newHeight);
    template Rectangle<short> recenter(const Rectangle<short>& rectangle, const short newWidth, const short newHeight);
    template Rectangle<int> recenter(const Rectangle<int>& rectangle, const int newWidth, const int newHeight);
    template Rectangle<long> recenter(const Rectangle<long>& rectangle, const long newWidth, const long newHeight);
    template Rectangle<long long> recenter(const Rectangle<long long>& rectangle, const long long newWidth, const long long newHeight);
    template Rectangle<unsigned char> recenter(const Rectangle<unsigned char>& rectangle, const unsigned char newWidth, const unsigned char newHeight);
    template Rectangle<unsigned short> recenter(const Rectangle<unsigned short>& rectangle, const unsigned short newWidth, const unsigned short newHeight);
    template Rectangle<unsigned int> recenter(const Rectangle<unsigned int>& rectangle, const unsigned int newWidth, const unsigned int newHeight);
    template Rectangle<unsigned long> recenter(const Rectangle<unsigned long>& rectangle, const unsigned long newWidth, const unsigned long newHeight);
    template Rectangle<unsigned long long> recenter(const Rectangle<unsigned long long>& rectangle, const unsigned long long newWidth, const unsigned long long newHeight);
    template Rectangle<float> recenter(const Rectangle<float>& rectangle, const float newWidth, const float newHeight);
    template Rectangle<double> recenter(const Rectangle<double>& rectangle, const double newWidth, const double newHeight);
    template Rectangle<long double> recenter(const Rectangle<long double>& rectangle, const long double newWidth, const long double newHeight);
}

    
      z_stream strm;
  strm.zalloc = Z_NULL;
  strm.zfree = Z_NULL;
  strm.opaque = Z_NULL;
  strm.avail_in = 0;
  strm.next_in = Z_NULL;
  QByteArray output;
    
    
    {}  // namespace ValueEditor

    
      // Dialogs
  void requestBulkOperation(
      QSharedPointer<RedisClient::Connection> connection, int dbIndex,
      BulkOperations::Manager::Operation op, QRegExp keyPattern,
      BulkOperations::AbstractOperation::OperationCallback callback);
    
    #endif  // V8_HEAP_STORE_BUFFER_INL_H_

    
    
    {  for (Address* current = start_[index]; current < lazy_top_[index];
       current++) {
    Address addr = *current;
    if (chunk == nullptr ||
        MemoryChunk::BaseAddress(addr) != chunk->address()) {
      chunk = MemoryChunk::FromAnyPointerAddress(addr);
    }
    if (IsDeletionAddress(addr)) {
      last_inserted_addr = kNullAddress;
      current++;
      Address end = *current;
      DCHECK(!IsDeletionAddress(end));
      addr = UnmarkDeletionAddress(addr);
      if (end) {
        RememberedSet<OLD_TO_NEW>::RemoveRange(chunk, addr, end,
                                               SlotSet::PREFREE_EMPTY_BUCKETS);
      } else {
        RememberedSet<OLD_TO_NEW>::Remove(chunk, addr);
      }
    } else {
      DCHECK(!IsDeletionAddress(addr));
      if (addr != last_inserted_addr) {
        RememberedSet<OLD_TO_NEW>::Insert(chunk, addr);
        last_inserted_addr = addr;
      }
    }
  }
  lazy_top_[index] = nullptr;
}
    
      double max_new_space_size_reached_;
    
      int RawSweep(Page* p, FreeListRebuildingMode free_list_mode,
               FreeSpaceTreatmentMode free_space_mode);
    
    #ifdef DEBUG
  ~EnsureSpace() {
    int bytes_generated = space_before_ - assembler_->available_space();
    DCHECK(bytes_generated < assembler_->kGap);
  }
#endif
    
    void TurboAssembler::Psraw(XMMRegister dst, uint8_t shift) {
  if (CpuFeatures::IsSupported(AVX)) {
    CpuFeatureScope scope(this, AVX);
    vpsraw(dst, dst, shift);
  } else {
    psraw(dst, shift);
  }
}
    
          CSA_ASSERT(this, IsWeakOrCleared(maybe_context));
      TNode<Object> context = Select<Object>(
          IsCleared(maybe_context), [=] { return SmiConstant(0); },
          [=] { return GetHeapObjectAssumeWeak(maybe_context); });
    
    namespace v8 {
namespace internal {
    }
    }