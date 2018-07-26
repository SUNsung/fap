  // Quit the whole app.
  static void Quit(content::RenderProcessHost* rph = NULL);
    
    
    {}  // namespace nw

    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
    
    {} // namespace nwapi
    
    #include 'content/nw/src/api/menu/menu.h'
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return !item->icon_.IsEmpty();
}
    
    class NwAppGetDataPathFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetDataPathFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwAppGetDataPathFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.App.getDataPath', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetDataPathFunction);
};
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
      protected:
    ~NwScreenIsMonitorStartedFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.isMonitorStarted', UNKNOWN)
    
    int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
    namespace caffe {
    }
    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
      /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    
    {}  // namespace caffe
    
      virtual inline const char* type() const { return 'Eltwise'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    /**
 * @brief Exponential Linear Unit non-linearity @f$
 *        y = \left\{
 *        \begin{array}{lr}
 *            x                  & \mathrm{if} \; x > 0 \\
 *            \alpha (\exp(x)-1) & \mathrm{if} \; x \le 0
 *        \end{array} \right.
 *      @f$.  
 */
template <typename Dtype>
class ELULayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ELUParameter elu_param,
   *     with ELULayer options:
   *   - alpha (\b optional, default 1).
   *     the value @f$ \alpha @f$ by which controls saturation for negative inputs.
   */
  explicit ELULayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    namespace tesseract {
namespace {
    }
    }
    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
      // Gets the canonical sample for the given font, class pair.
  // ComputeCanonicalSamples must have been called first.
  const TrainingSample* GetCanonicalSample(int font_id, int class_id) const;
  // Gets the max distance for the given canonical sample.
  // ComputeCanonicalSamples must have been called first.
  float GetCanonicalDist(int font_id, int class_id) const;
    
      // This only keeps a copy of the block list pointer. At split call, the list
  // object should still be alive. This block list is used as a golden
  // segmentation when performing splitting.
  void set_segmentation_block_list(BLOCK_LIST* block_list) {
    segmentation_block_list_ = block_list;
  }
    
    #define MINEDGELENGTH   8        // min decent length
    
    
// Finds the number of powers of 2 in the prime factorization of X.
template<int X, int LSB = 1 & X> struct sNumFactorsOf2 {
	enum { shifted = X >> 1 };
	enum { value = 1 + sNumFactorsOf2<shifted>::value };
};
template<int X> struct sNumFactorsOf2<X, 1> {
	enum { value = 0 };
};
    
    #include <dmlc/logging.h>
#include <dmlc/parameter.h>
#include <mxnet/operator.h>
#include <mxnet/ndarray.h>
#include <map>
#include <vector>
#include <string>
#include <utility>
/* contrib
#include '../ndarray/ndarray_function.h'
#include './operator_common.h'
#include './mxnet_op.h'
#include './mshadow_op.h'
*/
#include '../../ndarray/ndarray_function.h'
#include '../operator_common.h'
#include '../mxnet_op.h'
#include '../mshadow_op.h'
    
    
    {
    {
    {      const size_t row_length = out->data().shape_.ProdShape(1, out->data().shape_.ndim());
      auto out_values = out->data().get_with_shape<cpu, 2, DType>(
          mshadow::Shape2(out->storage_shape()[0], row_length), s);
      auto out_indices = out->aux_data(rowsparse::kIdx).FlatTo1D<cpu, IType>();
      for (size_t i = row_block_start; i < row_block_end; ++i) {
        out_indices[i] = uniq_row_idx[i];
      }
      for (const auto& nd : nds) {
        if (nd.storage_initialized()) {
          const auto nd_indices = nd.aux_data(rowsparse::kIdx).FlatTo1D<cpu, IType>();
          const auto nd_values = nd.data().get_with_shape<cpu, 2, DType>(
              mshadow::Shape2(nd.storage_shape()[0], row_length), s);
          const auto nd_num_rows = nd.aux_shape(rowsparse::kIdx).Size();
          const IType* nd_indices_start = &nd_indices[0];
          const IType* nd_indices_end = nd_indices_start + nd_num_rows;
          const IType* row_idx_ptr = std::lower_bound(nd_indices_start, nd_indices_end,
                                                      out_indices[row_block_start]);
          // skip this nd if all of its row indices are smaller than out_indices[row_block_start]
          // or current row block is not covered by [*row_idx_ptr, nd_indices_end).
          if (nd_indices_end == row_idx_ptr || *row_idx_ptr > out_indices[row_block_end-1]) {
            continue;
          }
          for (size_t irow = row_block_start;
               irow < row_block_end && row_idx_ptr != nd_indices_end;) {
            if (out_indices[irow] == *row_idx_ptr) {
              auto out_value_cur_row = out_values[irow];
              const auto offset = row_idx_ptr - nd_indices_start;
              auto nd_value_cur_row = nd_values[offset];
              for (size_t j = 0; j < nd_value_cur_row.shape_[0]; ++j) {
                out_value_cur_row[j] += nd_value_cur_row[j];
              }
              ++irow;
              ++row_idx_ptr;
            } else if (out_indices[irow] < *row_idx_ptr) {
              ++irow;
            } else {
              ++row_idx_ptr;
            }
          }
        }
      }
    }
  }
}