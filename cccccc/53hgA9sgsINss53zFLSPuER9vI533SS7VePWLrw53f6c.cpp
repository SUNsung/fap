
        
        
    {    return S_OK;
}
    
    struct CV_EXPORTS IntrinsicParams
{
    Vec2d f;
    Vec2d c;
    Vec4d k;
    double alpha;
    std::vector<uchar> isEstimate;
    }
    
    #include 'common.hpp'
#include 'warp_reduce.hpp'
    
    namespace cv
{
    }
    
    #undef cv_hal_LU32f
#define cv_hal_LU32f lapack_LU32f
#undef cv_hal_LU64f
#define cv_hal_LU64f lapack_LU64f
    
    
    {    // Explicit template instantiations
    template /*static*/ CNTK_API ValuePtr Value::Create<float>(const NDShape& sampleShape, const std::vector<std::vector<float>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<double>(const NDShape& sampleShape, const std::vector<std::vector<double>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float16>(const NDShape& sampleShape, const std::vector<std::vector<float16>>& sequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<double>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::Create<float16>(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float>(const NDShape& sampleShape, const std::vector<float>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<double>(const NDShape& sampleShape, const std::vector<double>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float16>(const NDShape& sampleShape, const std::vector<float16>& batchData, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(const NDShape& sampleShape, const std::vector<float>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(const NDShape& sampleShape, const std::vector<double>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16> (const NDShape& sampleShape, const std::vector<float16>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float>(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<double>(size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateBatch<float16> (size_t dimension, const std::vector<size_t>& batchData, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16>(size_t dimension, const std::vector<size_t>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const float* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<double>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const double* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template /*static*/ CNTK_API ValuePtr Value::CreateSequence<float16>(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const float16* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/);
    template CNTK_API void Value::CopyVariableValueToVector<float>(const Variable& outputVariable, std::vector<std::vector<float>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<double>(const Variable& outputVariable, std::vector<std::vector<double>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float16>(const Variable& outputVariable, std::vector<std::vector<float16>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<double>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API void Value::CopyVariableValueToVector<float16>(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<float>(const Variable& outputVariable);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<double>(const Variable& outputVariable);
    template CNTK_API std::tuple<size_t, size_t, size_t> Value::ValidateSparseCSCAndGetIndexBufferSizes<float16>(const Variable& outputVariable);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<float>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<float>& nonZeroValues, size_t& numNonZeroValues);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<double>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<double>& nonZeroValues, size_t& numNonZeroValues);
    template CNTK_API void Value::CopyVariableValueToCSCSparse<float16>(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<float16>& nonZeroValues, size_t& numNonZeroValues);
    template float Value::AsScalar<float>() const;
    template double Value::AsScalar<double>() const;
    template float16 Value::AsScalar<float16>() const;
}

    
    #include 'Basics.h'
#include 'Platform.h'
#include 'simple_checked_arrays.h' // ... for dotprod(); we can eliminate this I believe
#include 'ssefloat4.h'
#include <stdexcept>
#ifndef __unix__
#include <ppl.h>
#include 'pplhelpers.h'
#include 'numahelpers.h'
#endif
#include 'fileutil.h' // for saving and reading matrices
#include <limits>     // for NaN
#include <malloc.h>
    
    void GranularGPUDataTransferer::WaitForSyncPointOnAssignStreamAsync()
{
    PrepareDevice(m_deviceId);
    cudaStreamWaitEvent(GetAssignStream(), m_syncEvent, 0 /*flags 'must be 0'*/) || 'cudaStreamWaitEvent failed';
}
    
        // save model
    if (!useParallelTrain || m_mpi->CurrentNodeRank() == m_mpi->MainNodeRank())
        m_net->Save(newModelPath);
    
        // SaveData - save data in the file/files
    // recordStart - Starting record number
    // matricies - a map of section name (section:subsection) to data pointer. Data sepcifications from config file will be used to determine where and how to save data
    // numRecords - number of records we are saving, can be zero if not applicable
    // datasetSize - size of the dataset (in records)
    // byteVariableSized - for variable sized data, size of current block to be written, zero when not used, or ignored if not variable sized data
    virtual bool SaveData(size_t recordStart, const std::map<std::wstring, void*, nocase_compare>& matrices, size_t numRecords, size_t datasetSize, size_t byteVariableSized = 0);
    
        bool empty() const
    {
#ifndef NONUMLATTICEMMI // TODO:set NUM lattice to null so as to save memory
        if (numlattices.empty() ^ denlattices.empty())
            RuntimeError('latticesource: numerator and denominator lattices must be either both empty or both not empty');
#endif
        return denlattices.empty();
    }
    
        // prefetch a float4 from an address
    static void prefetch(const float4* p)
    {
        _mm_prefetch((const char*) const_cast<float4*>(p), _MM_HINT_T0);
    }
    
    // ===================================================================
// behave like a config
// This allows to access nodes inside a network as if it was an IConfigRecord.
// This is meant to be used by whatever we will replace MEL.
// ===================================================================
    
      /// Open the acceptor using the specified protocol.
  /**
   * This function opens the socket acceptor so that it will use the specified
   * protocol.
   *
   * @param protocol An object specifying which protocol is to be used.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * acceptor.open(boost::asio::ip::tcp::v4());
   * @endcode
   */
  void open(const protocol_type& protocol = protocol_type())
  {
    boost::system::error_code ec;
    this->get_service().open(this->get_implementation(), protocol, ec);
    boost::asio::detail::throw_error(ec, 'open');
  }
    
    
    {
    {} // namespace asio
} // namespace boost
    
    template <typename Stream>
class buffered_read_stream;
    
    template <typename CompletionCondition>
class base_from_completion_cond
{
protected:
  explicit base_from_completion_cond(CompletionCondition completion_condition)
    : completion_condition_(completion_condition)
  {
  }
    }
    
    
    {private:
  native_buffer_type buffers_[2];
  std::size_t total_buffer_size_;
};
    
    #endif // BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP

    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      errno = 0;
#if defined(__SYMBIAN32__)
  int result = error_wrapper(::fcntl(d, F_GETFL, 0), ec);
  if (result >= 0)
  {
    errno = 0;
    int flag = (value ? (result | O_NONBLOCK) : (result & ~O_NONBLOCK));
    result = error_wrapper(::fcntl(d, F_SETFL, flag), ec);
  }
#else // defined(__SYMBIAN32__)
  ioctl_arg_type arg = (value ? 1 : 0);
  int result = error_wrapper(::ioctl(d, FIONBIO, &arg), ec);
#endif // defined(__SYMBIAN32__)
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixFree
 * Signature: (J)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixFree
  (JNIEnv *jenv, jclass jcls, jlong jhandle) {
  DMatrixHandle handle = (DMatrixHandle) jhandle;
  int ret = XGDMatrixFree(handle);
  return ret;
}
    
    #include '../helpers.h'
    
    TEST(Metric, Error) {
  xgboost::Metric * metric = xgboost::Metric::Create('error');
  ASSERT_STREQ(metric->Name(), 'error');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
    }
    
    
    {/// Clear decorations for a source when it updates.
void clearDecorations(const std::string& source);
}

    
    
    {  status_ = Status(0);
}
    
    
    {
    {  resetDatabase();
  EXPECT_FALSE(pathExists(path_ + '.backup'));
}
}

    
      /// Restrict to a specific devnode.
  std::string devnode;
    
    
    {  std::vector<std::string> program_arguments = {
      '/System/Library/CoreServices/FileSyncAgent.app/Contents/Resources/'
      'FileSyncAgent_sshd-keygen-wrapper',
      '-i',
      '-f',
      '/System/Library/CoreServices/FileSyncAgent.app/Contents/Resources/'
      'FileSyncAgent_sshd_config',
  };
  pt::ptree program_arguments_tree = tree.get_child('ProgramArguments');
  std::vector<std::string> program_arguments_parsed;
  for (const auto& argument : program_arguments_tree) {
    program_arguments_parsed.push_back(argument.second.get<std::string>(''));
  }
  EXPECT_EQ(program_arguments_parsed, program_arguments);
}
    
    void BuildDCHistograms(const JPEGData& jpg, JpegHistogram* histo) {
  for (size_t i = 0; i < jpg.components.size(); ++i) {
    const JPEGComponent& c = jpg.components[i];
    JpegHistogram* dc_histogram = &histo[i];
    coeff_t last_dc_coeff = 0;
    for (int mcu_y = 0; mcu_y < jpg.MCU_rows; ++mcu_y) {
      for (int mcu_x = 0; mcu_x < jpg.MCU_cols; ++mcu_x) {
        for (int iy = 0; iy < c.v_samp_factor; ++iy) {
          for (int ix = 0; ix < c.h_samp_factor; ++ix) {
            int block_y = mcu_y * c.v_samp_factor + iy;
            int block_x = mcu_x * c.h_samp_factor + ix;
            int block_idx = block_y * c.width_in_blocks + block_x;
            coeff_t dc_coeff = c.coeffs[block_idx << 6];
            int diff = std::abs(dc_coeff - last_dc_coeff);
            int nbits = Log2Floor(diff) + 1;
            dc_histogram->Add(nbits);
            last_dc_coeff = dc_coeff;
          }
        }
      }
    }
  }
}
    
    inline float RGBToY(float r, float g, float b) {
  return 0.299f * r + 0.587f * g + 0.114f * b;
}
    
    #endif  // GUETZLI_ENTROPY_ENCODE_H_

    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    namespace guetzli {
    }
    
    #endif  // GUETZLI_JPEG_DATA_READER_H_

    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
    void CommFrequencyLimit::__DelOlderTouchTime(uint64_t _time) {
    for (std::list<uint64_t>::iterator iter = touch_times_.begin(); iter != touch_times_.end();) {
        if ((_time - (*iter)) > time_span_) {
            iter = touch_times_.erase(iter);
            continue;
        }
    }
    }
    
    #include 'comm/debugger/test_spy_sample.h'
#include 'comm/xlogger/xlogger.h'
    
    
#endif /* defined(__PublicComponent__testspy__) */

    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        ~ScopedJstring();
    
    void Obstacle::SetVelocity(const PerceptionObstacle& perception_obstacle,
                           Feature* feature) {
  double velocity_x = 0.0;
  double velocity_y = 0.0;
  double velocity_z = 0.0;
    }
    
    Box2d::Box2d(const AABox2d &aabox)
    : center_(aabox.center()),
      length_(aabox.length()),
      width_(aabox.width()),
      half_length_(aabox.half_length()),
      half_width_(aabox.half_width()),
      heading_(0.0),
      cos_heading_(1.0),
      sin_heading_(0.0) {
  CHECK_GT(length_, -kMathEpsilon);
  CHECK_GT(width_, -kMathEpsilon);
}
    
    
    {  if (config_.recognizer_config_size() != 2) {
    AERROR << 'RecognizeConfig size should be 2.';
    return false;
  }
  for (const auto &recognizer_config : config_.recognizer_config()) {
    if (recognizer_config.name() == 'UnityRecognizeNight') {
      classify_night_ = std::make_shared<ClassifyBySimple>(
          recognizer_config.classify_net(), recognizer_config.classify_model(),
          recognizer_config.classify_threshold(),
          static_cast<unsigned int>(recognizer_config.classify_resize_width()),
          static_cast<unsigned int>(
              recognizer_config.classify_resize_height()));
    }
    if (recognizer_config.name() == 'UnityRecognize') {
      classify_day_ = std::make_shared<ClassifyBySimple>(
          recognizer_config.classify_net(), recognizer_config.classify_model(),
          recognizer_config.classify_threshold(),
          static_cast<unsigned int>(recognizer_config.classify_resize_width()),
          static_cast<unsigned int>(
              recognizer_config.classify_resize_height()));
    }
  }
  return true;
}
    
     private:
  bool InitSharedData();
  bool InitRectifier();
  bool InitRecognizer();
  bool InitReviser();
    
    bool UnityRectify::Init() {
  if (!GetProtoFromFile(FLAGS_traffic_light_rectifier_config, &config_)) {
    AERROR << 'Cannot get config proto from file: '
           << FLAGS_traffic_light_rectifier_config;
    return false;
  }
    }