
        
          /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See data_layer.cpp for an example.
   */
  void Transform(const Datum& datum, Blob<Dtype>* transformed_blob);
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
    #include <vector>
    
    /**
 * @brief During training only, sets a random portion of @f$x@f$ to 0, adjusting
 *        the rest of the vector magnitude accordingly.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class DropoutLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides DropoutParameter dropout_param,
   *     with DropoutLayer options:
   *   - dropout_ratio (\b optional, default 0.5).
   *     Sets the probability @f$ p @f$ that any given unit is dropped.
   */
  explicit DropoutLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #ifdef HAVE_OPENCL
    
    
    {        for(size_t i = 0; i < rvecs_exp.size(); ++i)
        {
            projectPoints(_chessboard3D, _rvecs_exp[i], _tvecs_exp[i], eye33, zero15, uv_exp);
            projectPoints(_chessboard3D, rvecs_est[i], tvecs_est[i], eye33, zero15, uv_est);
            for(size_t j = 0; j < cb3d.size(); ++j)
                res += norm(uv_exp[i] - uv_est[i]);
        }
        return res;
    }
    
        bad_caller = caller;
    bad_caller.cameraMatrix = &bad_cameraMatrix_c2;
    errors += run_test_case( CV_StsBadArg, 'Bad camearaMatrix header', bad_caller );
    
        /** numerical jacobian */
    void numericalDerivative(
        cv::Mat& jac,
        double eps,
        const std::vector<cv::Point3d>& obj,
        const cv::Vec3d& rvec,
        const cv::Vec3d& tvec,
        const cv::Matx33d& camera,
        const cv::Vec<double, NUM_DIST_COEFF_TILT>& distor);
    
        ChessBoardGenerator cbg(Size(8,6));
    vector<Point2f> exp_corn;
    Mat cb = cbg(bg, camMat, distCoeffs, exp_corn);
    
        cv::RNG& rng = ts->get_rng();
    int progress = 0;
    
      GPR_ASSERT(sep_len > 0);
    
    static void test_compression_algorithm_states(void) {
  grpc_core::ExecCtx exec_ctx;
  grpc_channel_args *ch_args, *ch_args_wo_gzip, *ch_args_wo_gzip_deflate,
      *ch_args_wo_gzip_deflate_gzip;
  unsigned states_bitset;
  size_t i;
    }
    
        memset(ops, 0, sizeof(ops));
    op = ops;
    op->op = GRPC_OP_RECV_MESSAGE;
    op->data.recv_message.recv_message = &response_payload_recv;
    op->flags = 0;
    op->reserved = nullptr;
    op++;
    error = grpc_call_start_batch(c, ops, (size_t)(op - ops), tag(3), nullptr);
    GPR_ASSERT(GRPC_CALL_OK == error);
    
      GPR_ASSERT(status == GRPC_STATUS_OK);
  GPR_ASSERT(0 == grpc_slice_str_cmp(details, 'xyz'));
  GPR_ASSERT(0 == grpc_slice_str_cmp(call_details.method, '/foo'));
  validate_host_override_string('foo.test.google.fr:1234', call_details.host,
                                config);
  GPR_ASSERT(was_cancelled == 0);
  GPR_ASSERT(byte_buffer_eq_slice(request_payload_recv, request_payload_slice));
  GPR_ASSERT(
      byte_buffer_eq_slice(response_payload_recv, response_payload_slice));
    
    #include <string>
#include <stdint.h>
#include 'db/dbformat.h'
#include 'leveldb/cache.h'
#include 'leveldb/table.h'
#include 'port/port.h'
    
      // Add the specified file at the specified number.
  // REQUIRES: This version has not been saved (see VersionSet::SaveTo)
  // REQUIRES: 'smallest' and 'largest' are smallest and largest keys in file
  void AddFile(int level, uint64_t file,
               uint64_t file_size,
               const InternalKey& smallest,
               const InternalKey& largest) {
    FileMetaData f;
    f.number = file;
    f.file_size = file_size;
    f.smallest = smallest;
    f.largest = largest;
    new_files_.push_back(std::make_pair(level, f));
  }
    
      ASSERT_TRUE(! Overlaps('100', '149'));
  ASSERT_TRUE(! Overlaps('251', '299'));
  ASSERT_TRUE(! Overlaps('451', '500'));
  ASSERT_TRUE(! Overlaps('351', '399'));
    
    
    {    fprintf(stdout, '%-12s : %11.3f micros/op;%s%s\n',
            name.ToString().c_str(),
            (finish - start_) * 1e6 / done_,
            (message_.empty() ? '' : ' '),
            message_.c_str());
    if (FLAGS_histogram) {
      fprintf(stdout, 'Microseconds per op:\n%s\n', hist_.ToString().c_str());
    }
    fflush(stdout);
  }
    
      ASSERT_OK(env_->CreateDir('/dir'));
    
      // compact database
  std::string start_key = Key1(0);
  std::string end_key = Key1(kNumKeys - 1);
  leveldb::Slice least(start_key.data(), start_key.size());
  leveldb::Slice greatest(end_key.data(), end_key.size());
    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options),
      restarts_(),
      counter_(0),
      finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);       // First restart point is at offset 0
}