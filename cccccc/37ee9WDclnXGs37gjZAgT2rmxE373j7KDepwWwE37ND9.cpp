
        
        void dls::compute_eigenvec(const cv::Mat& Mtilde, cv::Mat& eigenval_real, cv::Mat& eigenval_imag,
                                                  cv::Mat& eigenvec_real, cv::Mat& eigenvec_imag)
{
#ifdef HAVE_EIGEN
    Eigen::MatrixXd Mtilde_eig, zeros_eig;
    cv::cv2eigen(Mtilde, Mtilde_eig);
    cv::cv2eigen(cv::Mat::zeros(27, 27, CV_64F), zeros_eig);
    }
    
    #ifndef GL_VERSION_2_0
    // GL type for program/shader text
    typedef char GLchar;
#endif
    
    /* [-255..255].^2 */
const ushort g_8x16uSqrTab[] =
{
    65025, 64516, 64009, 63504, 63001, 62500, 62001, 61504, 61009, 60516, 60025, 59536,
    59049, 58564, 58081, 57600, 57121, 56644, 56169, 55696, 55225, 54756, 54289, 53824,
    53361, 52900, 52441, 51984, 51529, 51076, 50625, 50176, 49729, 49284, 48841, 48400,
    47961, 47524, 47089, 46656, 46225, 45796, 45369, 44944, 44521, 44100, 43681, 43264,
    42849, 42436, 42025, 41616, 41209, 40804, 40401, 40000, 39601, 39204, 38809, 38416,
    38025, 37636, 37249, 36864, 36481, 36100, 35721, 35344, 34969, 34596, 34225, 33856,
    33489, 33124, 32761, 32400, 32041, 31684, 31329, 30976, 30625, 30276, 29929, 29584,
    29241, 28900, 28561, 28224, 27889, 27556, 27225, 26896, 26569, 26244, 25921, 25600,
    25281, 24964, 24649, 24336, 24025, 23716, 23409, 23104, 22801, 22500, 22201, 21904,
    21609, 21316, 21025, 20736, 20449, 20164, 19881, 19600, 19321, 19044, 18769, 18496,
    18225, 17956, 17689, 17424, 17161, 16900, 16641, 16384, 16129, 15876, 15625, 15376,
    15129, 14884, 14641, 14400, 14161, 13924, 13689, 13456, 13225, 12996, 12769, 12544,
    12321, 12100, 11881, 11664, 11449, 11236, 11025, 10816, 10609, 10404, 10201, 10000,
     9801,  9604,  9409,  9216,  9025,  8836,  8649,  8464,  8281,  8100,  7921,  7744,
     7569,  7396,  7225,  7056,  6889,  6724,  6561,  6400,  6241,  6084,  5929,  5776,
     5625,  5476,  5329,  5184,  5041,  4900,  4761,  4624,  4489,  4356,  4225,  4096,
     3969,  3844,  3721,  3600,  3481,  3364,  3249,  3136,  3025,  2916,  2809,  2704,
     2601,  2500,  2401,  2304,  2209,  2116,  2025,  1936,  1849,  1764,  1681,  1600,
     1521,  1444,  1369,  1296,  1225,  1156,  1089,  1024,   961,   900,   841,   784,
      729,   676,   625,   576,   529,   484,   441,   400,   361,   324,   289,   256,
      225,   196,   169,   144,   121,   100,    81,    64,    49,    36,    25,    16,
        9,     4,     1,     0,     1,     4,     9,    16,    25,    36,    49,    64,
       81,   100,   121,   144,   169,   196,   225,   256,   289,   324,   361,   400,
      441,   484,   529,   576,   625,   676,   729,   784,   841,   900,   961,  1024,
     1089,  1156,  1225,  1296,  1369,  1444,  1521,  1600,  1681,  1764,  1849,  1936,
     2025,  2116,  2209,  2304,  2401,  2500,  2601,  2704,  2809,  2916,  3025,  3136,
     3249,  3364,  3481,  3600,  3721,  3844,  3969,  4096,  4225,  4356,  4489,  4624,
     4761,  4900,  5041,  5184,  5329,  5476,  5625,  5776,  5929,  6084,  6241,  6400,
     6561,  6724,  6889,  7056,  7225,  7396,  7569,  7744,  7921,  8100,  8281,  8464,
     8649,  8836,  9025,  9216,  9409,  9604,  9801, 10000, 10201, 10404, 10609, 10816,
    11025, 11236, 11449, 11664, 11881, 12100, 12321, 12544, 12769, 12996, 13225, 13456,
    13689, 13924, 14161, 14400, 14641, 14884, 15129, 15376, 15625, 15876, 16129, 16384,
    16641, 16900, 17161, 17424, 17689, 17956, 18225, 18496, 18769, 19044, 19321, 19600,
    19881, 20164, 20449, 20736, 21025, 21316, 21609, 21904, 22201, 22500, 22801, 23104,
    23409, 23716, 24025, 24336, 24649, 24964, 25281, 25600, 25921, 26244, 26569, 26896,
    27225, 27556, 27889, 28224, 28561, 28900, 29241, 29584, 29929, 30276, 30625, 30976,
    31329, 31684, 32041, 32400, 32761, 33124, 33489, 33856, 34225, 34596, 34969, 35344,
    35721, 36100, 36481, 36864, 37249, 37636, 38025, 38416, 38809, 39204, 39601, 40000,
    40401, 40804, 41209, 41616, 42025, 42436, 42849, 43264, 43681, 44100, 44521, 44944,
    45369, 45796, 46225, 46656, 47089, 47524, 47961, 48400, 48841, 49284, 49729, 50176,
    50625, 51076, 51529, 51984, 52441, 52900, 53361, 53824, 54289, 54756, 55225, 55696,
    56169, 56644, 57121, 57600, 58081, 58564, 59049, 59536, 60025, 60516, 61009, 61504,
    62001, 62500, 63001, 63504, 64009, 64516, 65025
};
    
    Classifier::Classifier(const string& model_file,
                       const string& trained_file,
                       const string& mean_file,
                       const string& label_file) {
#ifdef CPU_ONLY
  Caffe::set_mode(Caffe::CPU);
#else
  Caffe::set_mode(Caffe::GPU);
#endif
    }
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_path, const string& db_backend) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
    namespace caffe {
    }
    
      virtual inline const char* type() const { return 'BatchReindex'; }
  virtual inline int ExactNumBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return true; }
  virtual void compute_output_shape();
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    DEFINE_FIND_STATIC_METHOD(KXlog_appenderOpenWithMultipathWithLevel, KXlog, 'appenderOpen', '(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_appenderOpen
	(JNIEnv *env, jclass, jint level, jint mode, jstring _cache_dir, jstring _log_dir, jstring _nameprefix, jstring _pubkey) {
	if (NULL == _log_dir || NULL == _nameprefix) {
		return;
	}
    }
    
    #include 'wakeuplock.h'
#include 'assert/__assert.h'
#include 'xlogger/xlogger.h'
    
        _packlen = ntoh(*(T*)_rawbuf);
    
    
    {  private:
    size_t count_;
    uint64_t time_span_;
    std::list<uint64_t> touch_times_;
};
    
      private:
    SpyCore() {}
    ~SpyCore() {}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #ifndef COMM_HAS_MEMBER_H_
#define COMM_HAS_MEMBER_H_