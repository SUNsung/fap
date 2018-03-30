
        
        namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // CUDAEvent wraps a CUevent in the platform-independent EventInterface
// interface.
class CUDAEvent : public internal::EventInterface {
 public:
  explicit CUDAEvent(CUDAExecutor* parent);
    }
    
      // Calls Finalize() and verifies it returns success and the result matches
  // expectations.
  void ExpectSuccess(const NodeDefBuilder& builder,
                     DataTypeSlice expected_in_types,
                     DataTypeSlice expected_out_types, StringPiece proto) {
    NodeDef node_def;
    Status status = builder.Finalize(&node_def);
    TF_EXPECT_OK(status);
    if (!status.ok()) return;
    NodeDef expected;
    protobuf::TextFormat::ParseFromString(strings::StrCat('name: 'n' ', proto),
                                          &expected);
    EXPECT_EQ(node_def.DebugString(), expected.DebugString());
    }
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    
    {
    {    // Allocate result tensor of shape
    //   [*first_dim_size] + data.shape[indices.dims:]
    TensorShape result_shape;
    result_shape.AddDim(*first_dim_size);
    for (int d = indices0.dims(); d < data0.dims(); d++) {
      result_shape.AddDim(data0.dim_size(d));
    }
    OP_REQUIRES_OK(c, c->allocate_output(0, result_shape, result_ptr));
  }
};
    
      // y_norm = sqrt(y2_sum)
  auto y_norm = Sqrt(root, y2_sum);
    
    class DesktopCapturer: public mate::EventEmitter<DesktopCapturer>,
                       public DesktopMediaListObserver {
 public:
  static mate::Handle<DesktopCapturer> Create(v8::Isolate* isolate);
    }
    
    
    {}  // namespace atom
    
     private:
  atom::RenderProcessPreferences preferences_;
    
    
    {}  // namespace api
    
    
    {}  // namespace atom
    
    
    {}  // namespace atom
    
    #if defined(OS_WIN)
#include 'base/process/process_handle.h'
#endif
    
    // Trigger command from the accelerators table.
bool TriggerAcceleratorTableCommand(AcceleratorTable* table,
                                    const ui::Accelerator& accelerator);
    
    #include 'ui/views/window/native_frame_view.h'
    
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
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      virtual inline const char* type() const { return 'Concat'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
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
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace
    
    bool SetDepth(int p, HuffmanTree *pool, uint8_t *depth, int max_depth);
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli

    
      // Compute YUV444 DCT coefficients.
  int block_ix = 0;
  for (int block_y = 0; block_y < jpg->MCU_rows; ++block_y) {
    for (int block_x = 0; block_x < jpg->MCU_cols; ++block_x) {
      coeff_t block[3 * kDCTBlockSize];
      // RGB->YUV transform.
      for (int iy = 0; iy < 8; ++iy) {
        for (int ix = 0; ix < 8; ++ix) {
          int y = std::min(h - 1, 8 * block_y + iy);
          int x = std::min(w - 1, 8 * block_x + ix);
          int p = y * w + x;
          RGBToYUV16(&rgb[3 * p], &block[8 * iy + ix]);
        }
      }
      // DCT
      for (int i = 0; i < 3; ++i) {
        ComputeBlockDCT(&block[i * kDCTBlockSize]);
      }
      // Quantization
      for (int i = 0; i < 3 * 64; ++i) {
        Quantize(&block[i], iquant[i]);
      }
      // Copy the resulting coefficients to *jpg.
      for (int i = 0; i < 3; ++i) {
        memcpy(&jpg->components[i].coeffs[block_ix * kDCTBlockSize],
               &block[i * kDCTBlockSize], kDCTBlockSize * sizeof(block[0]));
      }
      ++block_ix;
    }
  }
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #ifdef ANDROID
#include 'comm/android/callstack.h'
#endif
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
      private:
    int __TestFun1(int i);
    
    extern pthread_key_t g_env_key;
    
    #include <jni.h>