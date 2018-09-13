
        
        /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include <vector>
    
    /*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT0)(const OutputGrad& out_grad,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes output value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param out_value the value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT1)(const OutputGrad& out_grad,
                                    const OutputValue& out_value,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Gradient function that takes input value of function and computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param in_data0 the input value of the function.
 * \param env The Environment arguments.
 * \param in_grad The container to store result input gradient.
 * \param req The requirement to store the ret value.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*UnaryGradFunctionT2)(const OutputGrad& out_grad,
                                    const Input0& in_data0,
                                    const EnvArguments& env,
                                    TBlob* in_grad,
                                    OpReqType req,
                                    RunContext ctx);
/*!
 * \brief Binary function that takes lhs, rhs and save result to ret.
 *  The result container is pre-allocated with the correct shape.
 * \param lhs The left operand
 * \param rhs The right operand
 * \param env The Environment arguments.
 * \param ret The containter to store return value.
 * \param req The requirement to stroe the ret.
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryFunction)(const TBlob& lhs,
                               const TBlob& rhs,
                               const EnvArguments& env,
                               TBlob* ret,
                               OpReqType req,
                               RunContext ctx);
    
    
/**
 * \brief this is the implementation of caffe operator in caffe.
 * \tparam xpu the device that the op will be executed on.
 */
template<typename xpu, typename Dtype>
class CaffeOp : public Operator {
 public:
  explicit CaffeOp(CaffeOpParam p):param_(p),
                                   init_w_(false),
                                   init_wd_(false),
                                   setup_(false) {
    std::string type = param_.prototxt.type();
    caffeOp_ = caffe::LayerRegistry<Dtype>::CreateLayer(param_.prototxt);
    }
    }
    
    #include <dmlc/base.h>
#include <dmlc/thread_group.h>
#include <cstddef>
#include <vector>
#include <list>
#include <thread>
#include <utility>
#include 'mxnet/base.h'
    
     protected:
  void PushToExecute(OprBlock *opr_block, bool pusher_thread) override {
    if (opr_block->opr->prop == FnProperty::kAsync && pusher_thread) {
      DoExecute(opr_block);
    } else {
      DoPushToQueue(opr_block);
    }
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
    
      /*! \brief flip image and object coordinates horizontally */
  bool TryMirror() {
    // flip all objects horizontally
    for (auto it = objects_.begin(); it != objects_.end(); ++it) {
      *it = it->HorizontalFlip();
    }
    return true;
  }