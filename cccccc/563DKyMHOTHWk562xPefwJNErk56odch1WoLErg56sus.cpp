
        
        Status ComplexGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForBinaryCwise(g, {
      {{'gx'}, 'Real', {'dz'}},
      {{'gy'}, 'Imag', {'dz'}},
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Complex', ComplexGrad);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  return 0;
}

    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_2 @f$
   *   -# ...
   *   - K @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_K @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      the concatenated output @f$
   *        y = [\begin{array}{cccc} x_1 & x_2 & ... & x_K \end{array}]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      // algorithms for forward and backwards convolutions
  cudnnConvolutionFwdAlgo_t *fwd_algo_;
  cudnnConvolutionBwdFilterAlgo_t *bwd_filter_algo_;
  cudnnConvolutionBwdDataAlgo_t *bwd_data_algo_;
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      virtual inline const char* type() const { return 'Deconvolution'; }
    
    
    {}  // namespace caffe
    
    TEST_F(UnicharcompressTest, DoesChinese) {
  LOG(INFO) << 'Testing chi_tra';
  LoadUnicharset('chi_tra.unicharset');
  ExpectCorrect('chi_tra');
  LOG(INFO) << 'Testing chi_sim';
  LoadUnicharset('chi_sim.unicharset');
  ExpectCorrect('chi_sim');
}
    
      // Sets up the network for training. Initializes weights using weights of
  // scale `range` picked according to the random number generator `randomizer`.
  int InitWeights(float range, TRand* randomizer) override;
  // Recursively searches the network for softmaxes with old_no outputs,
  // and remaps their outputs according to code_map. See network.h for details.
  int RemapOutputs(int old_no, const std::vector<int>& code_map) override;
    
      AppendString(utf8.get());
    
      // Returns the x,y means as an FCOORD.
  FCOORD mean_point() const;
    
    ROW & ROW::operator= (const ROW & source) {
  this->ELIST_LINK::operator= (source);
  kerning = source.kerning;
  spacing = source.spacing;
  xheight = source.xheight;
  bodysize = source.bodysize;
  ascrise = source.ascrise;
  descdrop = source.descdrop;
  if (!words.empty ())
    words.clear ();
  baseline = source.baseline;    //QSPLINES must do =
  bound_box = source.bound_box;
  has_drop_cap_ = source.has_drop_cap_;
  lmargin_ = source.lmargin_;
  rmargin_ = source.rmargin_;
  para_ = source.para_;
  return *this;
}

    
      // Calculate Histogram on GPU
  OpenclDevice od;
  if (od.selectedDeviceIsOpenCL() && (num_channels == 1 || num_channels == 4) &&
      top == 0 && left == 0) {
    od.HistogramRectOCL((unsigned char*)pixGetData(src_pix), num_channels,
                        pixGetWpl(src_pix) * 4, left, top, width, height,
                        kHistogramSize, histogramAllChannels);
    }
    
     * If you orient your head so that 'up' aligns with Orientation,
 * then the characters will appear 'right side up' and readable.
 *
 * In the example above, both the English and Chinese paragraphs are oriented
 * so their 'up' is the top of the page (page up).  The photo credit is read
 * with one's head turned leftward ('up' is to page left).
 *
 * The values of this enum match the convention of Tesseract's osdetect.h
*/
enum Orientation {
  ORIENTATION_PAGE_UP = 0,
  ORIENTATION_PAGE_RIGHT = 1,
  ORIENTATION_PAGE_DOWN = 2,
  ORIENTATION_PAGE_LEFT = 3,
};
    
    #ifndef GRPC_TEST_CPP_UTIL_BENCHMARK_CONFIG_H
#define GRPC_TEST_CPP_UTIL_BENCHMARK_CONFIG_H
    
    #if defined(WIN32)
#define GRPC_SUPPORT_EXPORT
#else
#define GRPC_SUPPORT_EXPORT __attribute__((visibility('default')))
#endif
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, true);
    
    
    {  void ReadLong(long* l) {
    size_t start = current_;
    while (current_ != db_.size() && db_[current_] != ',' && db_[current_] != '}') {
      current_++;
    }
    // It will throw an exception if fails.
    *l = std::stol(db_.substr(start, current_ - start));
  }
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
      grpc::testing::interop::RunServer(
      grpc::testing::CreateInteropServerCredentials());
    
    UsageTimer::UsageTimer() : start_(Sample()) {}
    
    #include <string>
    
    
    {} // namespace aria2
    
    bool AbstractHttpServerResponseCommand::execute()
{
  if (e_->getRequestGroupMan()->downloadFinished() || e_->isHaltRequested()) {
    return true;
  }
  try {
    ssize_t len = httpServer_->sendResponse();
    if (len > 0) {
      timeoutTimer_ = global::wallclock();
    }
  }
  catch (RecoverableException& e) {
    A2_LOG_INFO_EX(fmt('CUID#%' PRId64
                       ' - Error occurred while transmitting response body.',
                       getCuid()),
                   e);
    return true;
  }
  if (httpServer_->sendBufferIsEmpty()) {
    A2_LOG_INFO(fmt('CUID#%' PRId64 ' - HttpServer: all response transmitted.',
                    getCuid()));
    afterSend(httpServer_, e_);
    return true;
  }
  else {
    if (timeoutTimer_.difference(global::wallclock()) >= 30_s) {
      A2_LOG_INFO(fmt('CUID#%' PRId64
                      ' - HttpServer: Timeout while trasmitting response.',
                      getCuid()));
      return true;
    }
    else {
      updateReadWriteCheck();
      e_->addCommand(std::unique_ptr<Command>(this));
      return false;
    }
  }
}
    
    #include 'Command.h'
    
    
    {  virtual std::unique_ptr<Command> getNextCommand() = 0;
};
    
      virtual bool getVerifyPeer() const CXX11_OVERRIDE { return verifyPeer_; }
    
    
    {} // namespace aria2