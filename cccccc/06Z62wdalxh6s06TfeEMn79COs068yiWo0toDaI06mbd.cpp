
        
        
    {  char* a_base = static_cast<char*>(
      params.buffer_allocations->GetDeviceAddress(a_buffer_).opaque());
  int* info_base = static_cast<int*>(
      params.buffer_allocations->GetDeviceAddress(info_buffer_).opaque());
  se::DeviceMemoryBase workspace_data =
      params.buffer_allocations->GetDeviceAddress(workspace_buffer_);
  for (int64 i = 0; i < batch_size_; ++i) {
    se::DeviceMemoryBase a_data =
        se::DeviceMemoryBase(a_base + i * a_batch_stride_, a_batch_stride_);
    se::DeviceMemory<int> info_data(
        se::DeviceMemoryBase(info_base + i, sizeof(int)));
    switch (type_) {
      case F32: {
        TF_RETURN_IF_ERROR(
            context->Potrf(uplo_, n_, se::DeviceMemory<float>(a_data), n_,
                           info_data, se::DeviceMemory<float>(workspace_data)));
        break;
      }
      case F64: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<double>(a_data), n_, info_data,
            se::DeviceMemory<double>(workspace_data)));
        break;
      }
      case C64: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<std::complex<float>>(a_data), n_,
            info_data, se::DeviceMemory<std::complex<float>>(workspace_data)));
        break;
      }
      case C128: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<std::complex<double>>(a_data), n_,
            info_data, se::DeviceMemory<std::complex<double>>(workspace_data)));
        break;
      }
      default:
        return InvalidArgument('Invalid type for cholesky %s',
                               PrimitiveType_Name(type_));
    }
  }
  return Status::OK();
}
    
    
    {
    {}  // namespace gpu
}  // namespace xla
    
    // A thunk that wraps a list of sub-thunks. Executing this thunk executes all
// the sub-thunks sequentially. This is useful to implement instructions that
// require multiple kernel launches or library calls.
class SequentialThunk : public Thunk {
 public:
  SequentialThunk(std::vector<std::unique_ptr<Thunk>> thunks,
                  const HloInstruction* hlo);
  SequentialThunk(const SequentialThunk&) = delete;
  SequentialThunk& operator=(const SequentialThunk&) = delete;
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Outer called computation that calls the nested computation.
  auto callee_builder = HloComputation::Builder(TestName() + '-callee');
  {
    auto param = callee_builder.AddInstruction(
        HloInstruction::CreateParameter(0, shape, 'param'));
    callee_builder.AddInstruction(
        HloInstruction::CreateCall(shape, {param}, nested_called_computation));
  }
  auto called_computation =
      module->AddEmbeddedComputation(callee_builder.Build());
    
    // Return the current learning rate. The currently implemented learning rate
// policies are as follows:
//    - fixed: always return base_lr.
//    - step: return base_lr * gamma ^ (floor(iter / step))
//    - exp: return base_lr * gamma ^ iter
//    - inv: return base_lr * (1 + gamma * iter) ^ (- power)
//    - multistep: similar to step but it allows non uniform steps defined by
//      stepvalue
//    - poly: the effective learning rate follows a polynomial decay, to be
//      zero by the max_iter. return base_lr (1 - iter/max_iter) ^ (power)
//    - sigmoid: the effective learning rate follows a sigmod decay
//      return base_lr ( 1/(1 + exp(-gamma * (iter - stepsize))))
//
// where base_lr, max_iter, gamma, step, stepvalue and power are defined
// in the solver parameter protocol buffer, and iter is the current iteration.
template <typename Dtype>
Dtype SGDSolver<Dtype>::GetLearningRate() {
  Dtype rate;
  const string& lr_policy = this->param_.lr_policy();
  if (lr_policy == 'fixed') {
    rate = this->param_.base_lr();
  } else if (lr_policy == 'step') {
    CHECK_GT(this->param_.stepsize(), 0);
    this->current_step_ = this->iter_ / this->param_.stepsize();
    CHECK_GE(this->param_.gamma(), 0);
    rate = this->param_.base_lr() *
        pow(this->param_.gamma(), this->current_step_);
  } else if (lr_policy == 'exp') {
    CHECK_GE(this->param_.gamma(), 0);
    rate = this->param_.base_lr() * pow(this->param_.gamma(), this->iter_);
  } else if (lr_policy == 'inv') {
    CHECK_GE(this->param_.gamma(), 0);
    rate = this->param_.base_lr() *
        pow(Dtype(1) + this->param_.gamma() * this->iter_,
            - this->param_.power());
  } else if (lr_policy == 'multistep') {
    if (this->current_step_ < this->param_.stepvalue_size() &&
          this->iter_ >= this->param_.stepvalue(this->current_step_)) {
      this->current_step_++;
      LOG(INFO) << 'MultiStep Status: Iteration ' <<
      this->iter_ << ', step = ' << this->current_step_;
    }
    CHECK_GE(this->param_.gamma(), 0);
    rate = this->param_.base_lr() *
        pow(this->param_.gamma(), this->current_step_);
  } else if (lr_policy == 'poly') {
    rate = this->param_.base_lr() * pow(Dtype(1.) -
        (Dtype(this->iter_) / Dtype(this->param_.max_iter())),
        this->param_.power());
  } else if (lr_policy == 'sigmoid') {
    CHECK_GE(this->param_.gamma(), 0);
    CHECK_GT(this->param_.stepsize(), 0);
    rate = this->param_.base_lr() * (Dtype(1.) /
        (Dtype(1.) + exp(-this->param_.gamma() * (Dtype(this->iter_) -
          Dtype(this->param_.stepsize())))));
  } else {
    LOG(FATAL) << 'Unknown learning rate policy: ' << lr_policy;
  }
  return rate;
}
    
    BOOST_PYTHON_MODULE(_caffe) {
  // below, we prepend an underscore to methods that will be replaced
  // in Python
    }
    
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
    
    
    {}  // namespace caffe
    
      DeviceNRecoder(Stream *strA, int widthA, int heightA,
		 GfxImageColorMap *colorMapA);
  virtual ~DeviceNRecoder();
  virtual StreamKind getKind() { return strWeird; }
  virtual void reset();
  virtual int getChar()
    { return (bufIdx >= bufSize && !fillBuf()) ? EOF : buf[bufIdx++]; }
  virtual int lookChar()
    { return (bufIdx >= bufSize && !fillBuf()) ? EOF : buf[bufIdx]; }
  virtual GooString *getPSFilter(int psLevel, char *indent) { return NULL; }
  virtual GBool isBinary(GBool last = gTrue) { return gTrue; }
  virtual GBool isEncoder() { return gTrue; }
    
      // Construct a new PageAttrs object by merging a dictionary
  // (of type Pages or Page) into another PageAttrs object.  If
  // <attrs> is NULL, uses defaults.
  PageAttrs(PageAttrs *attrs, Dict *dict);
    
    
    {    Object item;
};
    
      // Constructor.
  PreScanOutputDev();