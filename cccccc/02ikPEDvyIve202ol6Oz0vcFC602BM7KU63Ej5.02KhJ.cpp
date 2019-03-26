
        
          // Convert output shapes.
  output_tensor_shape_protos->resize(c.num_outputs());
  CppShapeInferenceResult out;
  for (int i = 0; i < c.num_outputs(); ++i) {
    out.Clear();
    ProtoFromShapeHandle(c.output(i), &c, out.mutable_shape());
    }
    
    #include <iomanip>
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/tensor_shape.pb.h'
#include 'tensorflow/core/grappler/costs/graph_properties.h'
#include 'tensorflow/core/grappler/grappler_item.h'
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    REGISTER_OP('Add').Doc(R'doc(
An op to test that duplicate registrations don't override previously
registered ops.
)doc');
    
    // Creates a numpy array in 'ret' which either aliases the content of 't' or has
// a copy.
Status TensorToNdarray(const Tensor& t, PyObject** ret);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include <map>
    
    struct TFTensorDeleter {
  void operator()(TF_Tensor* p) const { TF_DeleteTensor(p); }
};
    
    #ifndef TENSORFLOW_PYTHON_LIB_IO_PY_RECORD_READER_H_
#define TENSORFLOW_PYTHON_LIB_IO_PY_RECORD_READER_H_
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
     private:
  // Each Entry contains zero or more cached executors for a device ordinal.
  struct Entry {
    ~Entry();
    }
    
        /*
        Performs detection of FAST features
    */
    void FAST(const Size2D &size,
              u8 *srcBase, ptrdiff_t srcStride,
              KeypointStore *keypoints,
              u8 threshold, bool nonmax_suppression);
    
    void add(const Size2D &size,
         const u16 * src0Base, ptrdiff_t src0Stride,
         const u16 * src1Base, ptrdiff_t src1Stride,
         u16 * dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<u16, u32>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<u16, u32>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    template <typename T> struct TypeTraits;
template <> struct TypeTraits< u8> { typedef u16 wide;                     typedef  u8 unsign; typedef  uint8x16_t vec128; };
template <> struct TypeTraits< s8> { typedef s16 wide;                     typedef  u8 unsign; typedef   int8x16_t vec128; };
template <> struct TypeTraits<u16> { typedef u32 wide; typedef  u8 narrow; typedef u16 unsign; typedef  uint16x8_t vec128; };
template <> struct TypeTraits<s16> { typedef s32 wide; typedef  s8 narrow; typedef u16 unsign; typedef   int16x8_t vec128; };
template <> struct TypeTraits<u32> { typedef u64 wide; typedef u16 narrow; typedef u32 unsign; typedef  uint32x4_t vec128; };
template <> struct TypeTraits<s32> { typedef s64 wide; typedef s16 narrow; typedef u32 unsign; typedef   int32x4_t vec128; };
template <> struct TypeTraits<f32> { typedef f64 wide;                                         typedef float32x4_t vec128; };
    
                x -= 8;
            if(x == colsn){
                x--;
            }
            s16 prevx, rowx, nextx;
            prevx = srow2[x-1] + srow1[x-1] + srow0[x-1];
            rowx = srow2[x] + srow1[x] + srow0[x];
            for( ; x < colsn; x++ )
            {
                if(x+1 >= colsn) {
                    // make border
                    if (borderType == BORDER_MODE_CONSTANT)
                    {
                        nextx = borderValue;
                    } else if (borderType == BORDER_MODE_REFLECT101)
                    {
                        nextx = srow2[x-1] + srow1[x-1] + srow0[x-1];
                    } else {
                        nextx = srow2[x] + srow1[x] + srow0[x];
                    }
                } else {
                    nextx = srow2[x+1] + srow1[x+1] + srow0[x+1];
                }
                *(drow+x) = internal::saturate_cast<u8>((prevx + rowx + nextx)*(1/9.));
                prevx = rowx;
                rowx = nextx;
            }
        }
    }
    else
    {
        for( size_t y = 0; y < size.height; y++ )
        {
            const u8* srow0;
            const u8* srow1 = internal::getRowPtr(srcBase, srcStride, y);
            const u8* srow2;
            u8* drow = internal::getRowPtr(dstBase, dstStride, y);
            if (borderType == BORDER_MODE_REFLECT101) {
                srow0 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 1);
                srow2 = internal::getRowPtr(srcBase, srcStride, y < size.height-1 ? y+1 : size.height-2);
            } else  if (borderType == BORDER_MODE_CONSTANT) {
                srow0 = y > 0 ? internal::getRowPtr(srcBase, srcStride, y-1) : tmp;
                srow2 =  y < size.height-1 ? internal::getRowPtr(srcBase, srcStride, y+1) : tmp;
            } else { // BORDER_MODE_REFLECT || BORDER_MODE_REPLICATE
                srow0 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
                srow2 = internal::getRowPtr(srcBase, srcStride, y < size.height-1 ? y+1 : size.height-1);
            }
    
            for (; sj < roiw8; sj += 8, syj += 16, dj += 32)
        {
            uint8x8x2_t v_y = vld2_u8(srcy + syj);
            uint8x8x4_t v_dst;
            v_dst.val[0] = v_y.val[0];
            v_dst.val[1] = vld1_u8(srcu + sj);
            v_dst.val[2] = v_y.val[1];
            v_dst.val[3] = vld1_u8(srcv + sj);
            vst4_u8(dst + dj, v_dst);
        }
    
    
    {} // namespace CAROTENE_NS

    
    #if defined WITH_NEON && (defined __ARM_NEON__ || defined __ARM_NEON)
#define CAROTENE_NEON
#endif
    
            const u16* ln0 = idx_rm2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm2) : tmp;
        const u16* ln1 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const u16* ln2 = internal::getRowPtr(srcBase, srcStride, i);
        const u16* ln3 = idx_rp1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp1) : tmp;
        const u16* ln4 = idx_rp2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp2) : tmp;
    
        double prev = 0.;
    size_t j = 0u;
    
    inline uint8x8_t vqtbl1_u8 (uint8x16_t a, uint8x8_t b)
{
#ifdef __aarch64__
    // AArch64 supports this natively
    return ::vqtbl1_u8(a, b);
#else
    union { uint8x16_t v; uint8x8x2_t w; } u = { a };
    return vtbl2_u8(u.w, b);
#endif
}
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
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
    
    #include <vector>
    
    #endif  // CAFFE_BNLL_LAYER_HPP_

    
    #include 'caffe/layers/loss_layer.hpp'
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    #endif  // CAFFE_CUDNN_LRN_LAYER_HPP_

    
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
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      // This and other putatively are the same, so call the (permanent) callback
  // for each blob index where the bounding boxes match.
  // The callback is deleted on completion.
  void ProcessMatchedBlobs(const TWERD& other, TessCallback1<int>* cb) const;
    
    class b2Triangle{
public:
	float* x;
    float* y;
	b2Triangle();
	b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3);
	~b2Triangle();
	bool IsInside(float32 _x, float32 _y);
	void Set(const b2Triangle& toMe);
    }
    
    #define AF_BLUE_PROPERTY_CJK_TOP    ( 1U << 0 )       /* must have value 1 */
#define AF_BLUE_PROPERTY_CJK_HORIZ  ( 1U << 1 )       /* must have value 2 */
#define AF_BLUE_PROPERTY_CJK_RIGHT  AF_BLUE_PROPERTY_CJK_TOP
    
    #endif  // VPX_DSP_TXFM_COMMON_H_

    
    bool Clipper::IsContributing(const TEdge& edge) const
{
  PolyFillType pft, pft2;
  if (edge.PolyTyp == ptSubject)
  {
    pft = m_SubjFillType;
    pft2 = m_ClipFillType;
  } else
  {
    pft = m_ClipFillType;
    pft2 = m_SubjFillType;
  }
    }
    
    class clipperException : public std::exception
{
  public:
    clipperException(const char* description): m_descr(description) {}
    virtual ~clipperException() throw() {}
    virtual const char* what() const throw() {return m_descr.c_str();}
  private:
    std::string m_descr;
};
//------------------------------------------------------------------------------
    
    
    {
    {
    {  /*!
   * \brief Worker threads.
   */
  std::vector<std::thread> worker_threads_;
  /*!
   * \brief Startup synchronization objects
   */
  std::list<std::shared_ptr<dmlc::ManualEvent>> ready_events_;
  /*!
   * \brief Disallow default construction.
   */
  ThreadPool() = delete;
  /*!
   * \brief Disallow copy construction and assignment.
   */
  DISALLOW_COPY_AND_ASSIGN(ThreadPool);
};
}  // namespace engine
}  // namespace mxnet
#endif  // MXNET_ENGINE_THREAD_POOL_H_

    
    
    {
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<ImageAugmenter *()> ImageAugmenterFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct ImageAugmenterReg
    : public dmlc::FunctionRegEntryBase<ImageAugmenterReg,
                                        ImageAugmenterFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register image augmenter
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IMAGE_AUGMENTER(aug_default)
 * .describe('default augmenter')
 * .set_body([]() {
 *     return new DefaultAugmenter();
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IMAGE_AUGMENTER(name)                            \
  DMLC_REGISTRY_REGISTER(::mxnet::io::ImageAugmenterReg, ImageAugmenterReg, name)
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_USE_OPENCV
    
      virtual bool Next(void) {
    if (out_ != nullptr) {
      recycle_queue_.push(out_); out_ = nullptr;
    }
    // do recycle
    if (recycle_queue_.size() == param_.prefetch_buffer) {
      DataBatch *old_batch =  recycle_queue_.front();
      // can be more efficient on engine
      for (NDArray& arr : old_batch->data) {
        arr.WaitToWrite();
      }
      recycle_queue_.pop();
      iter.Recycle(&old_batch);
    }
    return iter.Next(&out_);
  }
  virtual const DataBatch &Value(void) const {
    return *out_;
  }
    
    struct GradientCompressionParam : public dmlc::Parameter<GradientCompressionParam> {
  std::string type;
  float threshold;
  DMLC_DECLARE_PARAMETER(GradientCompressionParam) {
    DMLC_DECLARE_FIELD(type)
      .describe('Type of gradient compression to use, like `2bit` for example');
    DMLC_DECLARE_FIELD(threshold).set_default(0.5)
      .describe('Threshold to use for 2bit gradient compression');
  }
};
    
    #if MXNET_USE_DIST_KVSTORE
#include './kvstore_dist.h'
std::atomic<int> mxnet::kvstore::KVStoreDist::customer_id_{0};
#endif  // MXNET_USE_DIST_KVSTORE
#if MXNET_USE_NCCL
#include './kvstore_nccl.h'
#endif  // MXNET_USE_NCCL
    
    
// Wrap a TVM function to a function that invokes MXNet's Engine
// It does two things: call the engine properly
// set up the NDArray to DLTensor during invocation.
void WrapAsyncCall(TVMArgs wrap_args, TVMRetValue* wrap_rv) {
  PackedFunc f = wrap_args[0];
  PackedFunc fset_stream =  wrap_args[1];
  int num_const = wrap_args[2];
    }
    
    /*!
 *  Copyright (c) 2017 by Contributors
 *  \file krprod.h
 *  \brief Core function for Khatri-Rao product
 *  \author Jencir Lee, Chris Swierczewski
 */
#ifndef MXNET_OPERATOR_CONTRIB_KRPROD_H_
#define MXNET_OPERATOR_CONTRIB_KRPROD_H_
#include <algorithm>
#include <utility>
#include <vector>
#include 'mshadow/tensor.h'
#include '../operator_common.h'
#include '../c_lapack_api.h'
    
     private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    #if CUDNN_MAJOR >= 5
    format_ = CUDNN_TENSOR_NCHW;
    #endif
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 2U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[bs::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[bs::kOut].get<gpu, 4, DType>(s);
      CUDNN_CALL(cudnnCreateSpatialTransformerDescriptor(&st_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&in_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&out_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(in_desc_,
                                            format_,
                                            dtype_,
                                            data.size(0),
                                            data.size(1),
                                            data.size(2),
                                            data.size(3)));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(out_desc_,
                                            format_,
                                            dtype_,
                                            out.size(0),
                                            out.size(1),
                                            out.size(2),
                                            out.size(3)));
      int dim[] = {static_cast<int>(out.size(0)), static_cast<int>(out.size(1)),
                   static_cast<int>(out.size(2)), static_cast<int>(out.size(3))};
      CUDNN_CALL(cudnnSetSpatialTransformerNdDescriptor(st_desc_,
                                                        sampler_,
                                                        dtype_,
                                                        4,
                                                        dim));
    }
  }
    
    MXNET_REGISTER_OP_PROPERTY(_Native, NativeOpProp)
.describe('Stub for implementing an operator implemented in native frontend language.')
.add_argument('data', 'NDArray-or-Symbol[]', 'Input data for the custom operator.')
.add_arguments(NativeOpParam::__FIELDS__());
    
        head = Solution().removeNthFromEnd(head, 2);
    printLinkedList(head);
    
    /// LinkedList Test Helper Functions
ListNode* createLinkedList(int arr[], int n){
    }
    
    // Counting
// Time Complexity: O(n)
// Space Complexity: O(3)
class Solution {
public:
    void sortColors(vector<int> &nums) {
    }
    }
    
                cur = stack.top();
            stack.pop();
            res.push_back(cur->val);
            cur = cur->right;
    
    private:
    void preorderTraversal(TreeNode* node, vector<int> &res){
    }
    
            vector<int> res;
        if(root == NULL)
            return res;
    
    
    {            if(node->left != NULL)
                stack.push(node->left);
            if(node->right != NULL)
                stack.push(node->right);
        }
    
    
// Non-Recursive
// Using two stacks, Reverse the Preorder Traversal!
//
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
    }