
        
        namespace Ui {
    class TransactionDescDialog;
}
    
    #ifndef BITCOIN_RPC_MINING_H
#define BITCOIN_RPC_MINING_H
    
    
    {    secp256k1_scalar_set_b32(&r, &input64[0], &overflow);
    ret &= !overflow;
    secp256k1_scalar_set_b32(&s, &input64[32], &overflow);
    ret &= !overflow;
    if (ret) {
        secp256k1_ecdsa_recoverable_signature_save(sig, &r, &s, recid);
    } else {
        memset(sig, 0, sizeof(*sig));
    }
    return ret;
}
    
        // C escapes
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\nBaz\\t\' Spam=\'\\rEggs\' Octals=\'\\1a\\11\\17\\18\\81\\377\\378\\400\\2222\' Final=Check', {
            {'Foo', 'Bar\nBaz\t'},
            {'Spam', '\rEggs'},
            {'Octals', '\1a\11\17\1' '881\377\37' '8\40' '0\222' '2'},
            {'Final', 'Check'},
        });
    CheckParseTorReplyMapping(
        'Valid=Mapping Escaped=\'Escape\\\\\'', {
            {'Valid', 'Mapping'},
            {'Escaped', 'Escape\\'},
        });
    CheckParseTorReplyMapping(
        'Valid=Mapping Bare=\'Escape\\\'', {});
    CheckParseTorReplyMapping(
        'OneOctal=\'OneEnd\\1\' TwoOctal=\'TwoEnd\\11\'', {
            {'OneOctal', 'OneEnd\1'},
            {'TwoOctal', 'TwoEnd\11'},
        });
    
    const std::vector<UniValue>& UniValue::getValues() const
{
    if (typ != VOBJ && typ != VARR)
        throw std::runtime_error('JSON value is not an object or array as expected');
    return values;
}
    
    /** Encode a Bech32 string. Returns the empty string in case of failure. */
std::string Encode(const std::string& hrp, const std::vector<uint8_t>& values);
    
        ctx->kernel_data = new CAROTENE_NS::s16[kernel_width*kernel_height];
    if(!ctx->kernel_data)
        return CV_HAL_ERROR_UNKNOWN;
    switch(kernel_type)
    {
    case CV_8UC1:
        convert(ctx->ksize, (CAROTENE_NS::u8*)kernel_data, kernel_step, ctx->kernel_data, kernel_width);
        break;
    case CV_8SC1:
        convert(ctx->ksize, (CAROTENE_NS::s8*)kernel_data, kernel_step, ctx->kernel_data, kernel_width);
        break;
    case CV_16UC1:
        for(int j = 0; j < kernel_height; ++j)
        {
            std::memcpy(ctx->kernel_data + kernel_width * j, kernel_data + kernel_step * j, kernel_width * sizeof(int16_t));
        }
    default:
        delete[] ctx->kernel_data;
        delete ctx;
        return CV_HAL_ERROR_NOT_IMPLEMENTED;
    }
    
    void add(const Size2D &size,
         const u8 * src0Base, ptrdiff_t src0Stride,
         const s16 * src1Base, ptrdiff_t src1Stride,
         s16 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #define MERGE_ASM2(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vst2.' #bits ' {d0, d2}, [%[out0]]           \n\t' \
                                          'vst2.' #bits ' {d1, d3}, [%[out1]]           \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL2(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3' \
                                      );
#define MERGE_ASM3(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vst3.' #bits ' {d0, d2, d4}, [%[out0]]       \n\t' \
                                          'vst3.' #bits ' {d1, d3, d5}, [%[out1]]       \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL3(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5' \
                                      );
#define MERGE_ASM4(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vld1.' #bits ' {d6-d7}, [%[in3]]             \n\t' \
                                          'vst4.' #bits ' {d0, d2, d4, d6}, [%[out0]]   \n\t' \
                                          'vst4.' #bits ' {d1, d3, d5, d7}, [%[out1]]   \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), [in3] 'r' (src3 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL4(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                      );
    
             int16x8_t vline1_s16 = vmovl_s8(vget_low_s8(vline_s8));
         int16x8_t vline2_s16 = vmovl_s8(vget_high_s8(vline_s8));
    
                {
                // combine 3 'shifted' vectors
                t0 = vext_u8(tprev[1], tcurr[1], 7);
                t1 = tcurr[1];
                t2 = vext_u8(tcurr[1], tnext[1], 1);
    }
    
    // It is possible to accumulate up to 66051 uchar multiplication results in uint32 without overflow
// We process 16 elements and accumulate two new elements per step. So we could handle 66051/2*16 elements
#define DOT_UINT_BLOCKSIZE 66050*8
    f64 result = 0.0;
    for (size_t row = 0; row < size.height; ++row)
    {
        const u8 * src0 = internal::getRowPtr(src0Base, src0Stride, row);
        const u8 * src1 = internal::getRowPtr(src1Base, src1Stride, row);
    }
    
    
    {                lane[colsn+k] = lane[idx_r1 + k];
                lane[colsn+cn+k] = lane[idx_r2 + k];
            }
    
      // Gets the text streamed to this object so far as an std::string.
  // Each '\0' character in the buffer is replaced with '\\0'.
  //
  // INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
  std::string GetString() const;
    
    // Type-parameterized tests are abstract test patterns parameterized
// by a type.  Compared with typed tests, type-parameterized tests
// allow you to define the test pattern without knowing what the type
// parameters are.  The defined pattern can be instantiated with
// different types any number of times, in any number of translation
// units.
//
// If you are designing an interface or concept, you can define a
// suite of type-parameterized tests to verify properties that any
// valid implementation of the interface/concept should have.  Then,
// each implementation can easily instantiate the test suite to verify
// that it conforms to the requirements, without having to write
// similar tests repeatedly.  Here's an example:
    
    
    {  const ParamGenerator<T1> g1_;
  const ParamGenerator<T2> g2_;
  const ParamGenerator<T3> g3_;
  const ParamGenerator<T4> g4_;
  const ParamGenerator<T5> g5_;
  const ParamGenerator<T6> g6_;
};  // class CartesianProductGenerator6
    
    
    { private:
  String();  // Not meant to be instantiated.
};  // class String
    
      // If we are given the --check_for_leaks command line flag, installs the
  // leak checker.
  if (check_for_leaks) {
    TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    }
    
      // Clears the queue.
  void Clear() {
    if (size_ > 0) {
      // 1. Deletes every node.
      QueueNode<E>* node = head_;
      QueueNode<E>* next = node->next();
      for (; ;) {
        delete node;
        node = next;
        if (node == NULL) break;
        next = node->next();
      }
    }
    }
    
    
    {}  // namespace mxnet
    
        int n_out = this->ListOutputs().size();
    out_type->clear();
    for (int i = 0; i < n_out; ++i ) out_type->push_back(mshadow::default_type_flag);
    
    /*! \brief registry entry to register simple operators via functions. */
class SimpleOpRegEntry {
 public:
  /*! \brief declare self type */
  typedef SimpleOpRegEntry TSelf;
  /*! \brief name of the operator */
  std::string name;
  /*!
   * \brief set a seperate name for symbol
   *  This must be called before set_function.
   *  Default: this is set to be same as the name of operator.
   * \param symbol_name the name of symbolic operator.
   */
  virtual TSelf& set_symbol_op_name(char const* symbol_name) = 0;
  /*!
   * \brief set number of scalar arguments needed to be passed in env
   *  A function cannot have both kwargs and scalar arguments.
   *  Default: this is set to false
   * \param enable_scalar whether to enable scalar argument
   * \param type_mask the position of the scalar argument.
   */
  virtual TSelf& set_enable_scalar(
      bool enable_scalar,
      SimpleOpScalarOption type_mask = kArrayBeforeScalar) = 0;
  /*!
   * \brief set whether to enable kwargs
   *  A function cannot have both kwargs and scalar arguments.
   *  Default: this is set to false
   * \param enable_kwargs whether to enable kwargs
   */
  virtual TSelf& set_enable_kwargs(bool enable_kwargs) = 0;
  /*!
   * \brief set resource request
   *  By default there is no resource request.
   *  The resource will be presented in both forward and backward.
   * \param reqs the request.
   */
  virtual TSelf& set_resource_request(
      const std::vector<ResourceRequest>& reqs) = 0;
  /*!
   * \brief set resource request
   *  By default there is no resource request.
   *  The resource will be presented in both forward and backward.
   * \param req the request.
   */
  virtual TSelf& set_resource_request(ResourceRequest req) = 0;
  /*!
   * \brief set source inference function.
   * \param fshapeinfer The source function that peforms the operation.
   */
  virtual TSelf& set_shape_function(SourceShapeFunction fshapeinfer) = 0;
  /*!
   * \brief set shape inference function.
   *  Default: out_shape = in_shape
   * \param fshapeinfer The unary function that peforms the operation.
   */
  virtual TSelf& set_shape_function(UnaryShapeFunction fshapeinfer) = 0;
  /*!
   * \brief set shape inference function to be the binary inference function
   *  Default: out_shape = lhs_shape, and lhs_shape must equal rhs_shape.
   * \param fshapeinfer The binary function that peforms the operation.
   */
  virtual TSelf& set_shape_function(BinaryShapeFunction fshapeinfer) = 0;
  /*!
   * \brief set function of the function to be fsource
   * \param dev_mask The device mask of the function can act on.
   * \param fsource The unary function that peforms the operation.
   * \param register_symbolic Whether register a symbolic operator as well.
   */
  virtual TSelf& set_function(
      int dev_mask,
      SourceFunction fsource,
      SimpleOpRegOption register_symbolic = kRegisterSymbolic) = 0;
  /*!
   * \brief set function of the function to be funary
   * \param dev_mask The device mask of the function can act on.
   * \param funary The unary function that peforms the operation.
   * \param inplace_in_out Whether do inplace optimization on in and out.
   * \param register_symbolic Whether register a symbolic operator as well.
   */
  virtual TSelf& set_function(
      int dev_mask,
      UnaryFunction funary,
      SimpleOpInplaceOption inplace_in_out,
      SimpleOpRegOption register_symbolic = kRegisterSymbolic) = 0;
  /*!
   * \brief set function of the function to be funary
   * \param dev_mask The device mask of the function can act on.
   * \param fbinary The binary function that peforms the operation.
   * \param inplace_lhs_out Whether do inplace optimization on lhs and out.
   * \param register_symbolic Whether register a symbolic operator as well.
   */
  virtual TSelf& set_function(
      int dev_mask,
      BinaryFunction fbinary,
      SimpleOpInplaceOption inplace_lhs_out,
      SimpleOpRegOption register_symbolic = kRegisterSymbolic) = 0;
  /*!
   * \brief set gradient of the function of this function.
   * \param dev_mask The device mask of the function can act on.
   * \param fgrad The gradient function to be set.
   * \param inplace_out_in_grad whether out_grad and in_grad can share memory.
   */
  virtual TSelf& set_gradient(int dev_mask,
                              UnaryGradFunctionT0 fgrad,
                              SimpleOpInplaceOption inplace_out_in_grad) = 0;
  /*!
   * \brief set gradient of the function of this function.
   * \param dev_mask The device mask of the function can act on.
   * \param fgrad The gradient function to be set.
   * \param inplace_out_in_grad whether out_grad and in_grad can share memory.
   */
  virtual TSelf& set_gradient(int dev_mask,
                              UnaryGradFunctionT1 fgrad,
                              SimpleOpInplaceOption inplace_out_in_grad) = 0;
  /*!
   * \brief set gradient of the function of this function.
   * \param dev_mask The device mask of the function can act on.
   * \param fgrad The gradient function to be set.
   * \param inplace_out_in_grad whether out_grad and in_grad can share memory.
   */
  virtual TSelf& set_gradient(int dev_mask,
                              UnaryGradFunctionT2 fgrad,
                              SimpleOpInplaceOption inplace_out_in_grad) = 0;
  /*!
   * \brief set gradient of the function of this function.
   * \param dev_mask The device mask of the function can act on.
   * \param fgrad The gradient function to be set.
   * \param inplace_out_lhs_grad whether out_grad and lhs_grad can share memory.
   */
  virtual TSelf& set_gradient(int dev_mask,
                              BinaryGradFunctionT0 fgrad,
                              SimpleOpInplaceOption inplace_out_lhs_grad) = 0;
  /*!
   * \brief set gradient of the function of this function.
   * \param dev_mask The device mask of the function can act on.
   * \param fgrad The gradient function to be set.
   * \param inplace_out_lhs_grad whether out_grad and lhs_grad can share memory.
   */
  virtual TSelf& set_gradient(int dev_mask,
                              BinaryGradFunctionT1 fgrad,
                              SimpleOpInplaceOption inplace_out_lhs_grad) = 0;
  /*!
   * \brief Describe the function.
   * \param description The description of the function.
   * \return reference to self.
   */
  virtual TSelf& describe(const std::string &description) = 0;
  /*!
   * \brief Describe the function.
   * \param args argument information.
   *  Add additional arguments to the function.
   * \return reference to self.
   */
  virtual TSelf& add_arguments(const std::vector<dmlc::ParamFieldInfo> &args) = 0;
  /*! \brief virtual destructor */
  virtual ~SimpleOpRegEntry() {}
};
    
    #ifndef MXNET_RTC_H_
#define MXNET_RTC_H_
#include './base.h'
#if MXNET_USE_CUDA && MXNET_ENABLE_CUDA_RTC
#include <nvrtc.h>
#include <cuda.h>
    
    template<>
void SetDataGradToBlob<mshadow::cpu, float>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<float>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  float *data_ptr = reinterpret_cast<float*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_cpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, float)->set_cpu_diff(data_ptr);
}
    
        // Init caffe's gradient pointer
    if (!init_wd_) {
      init_wd_ = true;
      caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Grad,
                                         wei_.begin(),
                                         in_grad.begin() + param_.num_data,
                                         param_.num_weight);
    }
    
    
    {  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(ndsrc.shape()[0], ndsrc.shape()[1],
                  dims[2] == 3 ? CV_8UC3 : CV_8U, ndsrc.data().dptr_);
      cv::Mat dst(h, w, dims[2] == 3 ? CV_8UC3 : CV_8U, ndout.data().dptr_);
      cv::resize(buf, dst, cv::Size(w, h), 0, 0, interpolation);
      CHECK(!dst.empty());
    }, ndout.ctx(), {ndsrc.var()}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}
    
    namespace mxnet {
namespace io {
/*!
 * \brief OpenCV based Image augmenter,
 *  The augmenter can contain internal temp state.
 */
class ImageAugmenter {
 public:
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief augment src image.
   *   this function is not thread safe, and will only be called by one thread
   *   however, it will tries to re-use memory space as much as possible
   * \param src the source image
   * \param prnd pointer to random number generator.
   * \return The processed image.
   */
  virtual cv::Mat Process(const cv::Mat &src, std::vector<float> *label,
                          common::RANDOM_ENGINE *prnd) = 0;
  // virtual destructor
  virtual ~ImageAugmenter() {}
  /*!
   * \brief factory function
   * \param name Name of the augmenter
   * \return The created augmenter.
   */
  static ImageAugmenter* Create(const std::string& name);
};
    }
    }
    
    /*
 * Call a function on each element of `inputs', in parallel.
 *
 * If `func' throws an exception, some of the work will not be
 * attempted.
 */
template<class Func, class Item>
void for_each(const std::vector<Item>& inputs, Func func) {
  std::atomic<bool> failed{false};
  std::atomic<size_t> index{0};
    }
    
          A_form_t a_formater {{
                           rc,
                           xop,
                           static_cast<uint32_t>(bc),
                           static_cast<uint32_t>(rb),
                           static_cast<uint32_t>(ra),
                           static_cast<uint32_t>(rt),
                           op
                          }};
    
    
    {///////////////////////////////////////////////////////////////////////////////
}

    
    void PlainDirectory::close() {
  if (m_dir) {
    ::closedir(m_dir);
    m_dir = nullptr;
  }
}
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    /*
 * If the given AtomicHashMap has more than one submap allocated, log a perf
 * warning with its name.
 *
 * A single unique done flag should exist for each map being checked, to avoid
 * logging more than once (process, map) pair.
 */
template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done);
    
    class DHTNode;
class DHTRoutingTable;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTPeerAnnounceStorage;
class DHTTokenTracker;
class DHTMessageDispatcher;
class DHTMessageReceiver;
class DHTMessageFactory;
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    namespace aria2 {
    }
    
    class DHTNode;
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    #include <cstring>
    
    void DHTTokenUpdateCommand::setTokenTracker(DHTTokenTracker* tokenTracker)
{
  tokenTracker_ = tokenTracker;
}
    
      virtual void preProcess() CXX11_OVERRIDE;