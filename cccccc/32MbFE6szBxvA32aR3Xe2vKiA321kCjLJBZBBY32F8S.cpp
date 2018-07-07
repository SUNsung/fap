
        
        struct StatusTestParam {
  Status executor_status;
  Status partial_run_status;
  Status expected_status;
};
    
    class SmoothHingeLossUpdater : public DualLossUpdater {
 public:
  // Computes the updated dual variable (corresponding) to a single example. The
  // updated dual value maximizes the objective function of the dual
  // optimization problem associated with smooth hinge loss. The computations
  // are detailed in readme.md.
  double ComputeUpdatedDual(const int num_partitions, const double label,
                            const double example_weight,
                            const double current_dual, const double wx,
                            const double weighted_example_norm) const final {
    // Intutitvely there are 3 cases:
    // a. new optimal value of the dual variable falls within the admissible
    // range [0, 1]. In this case we set new dual to this value.
    // b. new optimal value is < 0. Then, because of convexity, the optimal
    // valid value for new dual = 0
    // c. new optimal value > 1.0. Then new optimal value should be set to 1.0.
    const double candidate_optimal_dual =
        current_dual +
        (label - wx - gamma * current_dual) /
            (num_partitions * example_weight * weighted_example_norm + gamma);
    if (label * candidate_optimal_dual < 0) {
      return 0.0;
    }
    if (label * candidate_optimal_dual > 1.0) {
      return label;
    }
    return candidate_optimal_dual;
  }
    }
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/framework/register_types.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/kernels/cuda_device_array_gpu.h'
#include 'tensorflow/core/util/cuda_kernel_helper.h'
    
    MPIUtils::MPIUtils(const std::string& worker_name) {
  InitMPI();
  // Connect the MPI process IDs to the worker names that are used by TF.
  // Gather the names of all the active processes (name can't be longer than
  // 128 bytes)
  int proc_id = 0, number_of_procs = 1;
  char my_name[max_worker_name_length];
  MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    }
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
    
    TEST_F(GrpcDebugTest, SendDebugTensorWithLargeStringAtIndex1ViaGrpcTest) {
  Tensor tensor(DT_STRING, TensorShape({1, 2}));
  tensor.flat<string>()(0) = 'A';
  tensor.flat<string>()(1) = string(5000 * 1024, 'A');
  const DebugNodeKey kDebugNodeKey('/job:localhost/replica:0/task:0/cpu:0',
                                   'foo_tensor', 0, 'DebugIdentity');
  const Status status = DebugIO::PublishDebugTensor(
      kDebugNodeKey, tensor, Env::Default()->NowMicros(), {server_data_.url});
  ASSERT_FALSE(status.ok());
  ASSERT_NE(status.error_message().find('string value at index 1 from debug '
                                        'node foo_tensor:0:DebugIdentity does '
                                        'not fit gRPC message size limit'),
            string::npos);
  TF_ASSERT_OK(DebugIO::CloseDebugURL(server_data_.url));
}
    
    TEST(AccuracyUtilsTest, ReadGroundTruthFile) {
  string file_name = tensorflow::io::JoinPath(tensorflow::testing::TmpDir(),
                                              'ground_truth.txt');
  string file_data = 'a,10\nb,12\n';
  TF_ASSERT_OK(WriteStringToFile(Env::Default(), file_name, file_data));
    }
    
    
    {  /* Copy the output layer to a std::vector */
  Blob<float>* output_layer = net_->output_blobs()[0];
  const float* begin = output_layer->cpu_data();
  const float* end = begin + output_layer->channels();
  return std::vector<float>(begin, end);
}
    
    
    {  if (argc != 4) {
    gflags::ShowUsageWithFlagsRestrict(argv[0],
        'examples/mnist/convert_mnist_data');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3], db_backend);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB and LMDB; ' <<
  'compile with USE_LEVELDB and USE_LMDB.';
}
#endif  // USE_LEVELDB and USE_LMDB

    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
    #include <vector>
    
    #include <vector>
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include <vector>
    
      explicit WorkloadStats(State guardedState);
  ~WorkloadStats();
    
    #include <cassert>
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}}

    
    struct IRGS;
    
      struct alignas(64) CondVarNode {
    pthread_cond_t m_cond;
    folly::IntrusiveListHook m_listHook;
    }
    
    namespace {
    }
    
    TEST(Issue200, Test) {
  // Get rid of any state from an old run.
  std::string dbpath = test::TmpDir() + '/leveldb_issue200_test';
  DestroyDB(dbpath, Options());
    }
    
    
    {  // Check last filter
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(9000, 'hello'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(9000, 'bar'));
}
    
    // Different bits-per-byte
    
    double Histogram::Average() const {
  if (num_ == 0.0) return 0;
  return sum_ / num_;
}
    
    class SCOPED_LOCKABLE MutexLock {
 public:
  explicit MutexLock(port::Mutex *mu) EXCLUSIVE_LOCK_FUNCTION(mu)
      : mu_(mu)  {
    this->mu_->Lock();
  }
  ~MutexLock() UNLOCK_FUNCTION() { this->mu_->Unlock(); }
    }
    
      // Compute the crc of the record type and the payload.
  uint32_t crc = crc32c::Extend(type_crc_[t], ptr, n);
  crc = crc32c::Mask(crc);                 // Adjust for storage
  EncodeFixed32(buf, crc);
    
      size_t size() const { return size_; }
  Iterator* NewIterator(const Comparator* comparator);
    
    bool js_cocos2dx_studio_InputDelegate_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_InputDelegate_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_InputDelegate(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_InputDelegate_isAccelerometerEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_setKeypadEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_getTouchMode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_setAccelerometerEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_isKeypadEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_isTouchEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_setTouchPriority(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_getTouchPriority(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_setTouchEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_InputDelegate_setTouchMode(JSContext *cx, uint32_t argc, jsval *vp);
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    GLESDebugDraw::GLESDebugDraw( float32 ratio )
    : mRatio( ratio )
{
    this->initShader();
}
    
        virtual void DrawPolygon(const b2Vec2* vertices, int vertexCount, const b2Color& color);
    
    #ifndef AddPair_H
#define AddPair_H
    
    class DumpCrashStack {
  public:
    DumpCrashStack() {}
    ~DumpCrashStack() {}
    }
    
        void* This() const {return m_this;}
    
    #include 'comm/debugger/spy.inl'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.