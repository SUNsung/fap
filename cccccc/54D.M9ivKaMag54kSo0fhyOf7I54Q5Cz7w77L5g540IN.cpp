
        
        namespace atom {
    }
    
    
    {}  // namespace api
    
    // static
mate::WrappableBase* BoxLayout::New(mate::Arguments* args,
                                    views::BoxLayout::Orientation orientation) {
  auto* layout = new BoxLayout(orientation);
  layout->InitWith(args->isolate(), args->GetThis());
  return layout;
}
    
    class View;
    
    std::string DownloadItem::GetLastModifiedTime() const {
  return download_item_->GetLastModifiedTime();
}
    
    // static
void GlobalShortcut::BuildPrototype(v8::Isolate* isolate,
                                    v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'GlobalShortcut'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetMethod('register', &GlobalShortcut::Register)
      .SetMethod('isRegistered', &GlobalShortcut::IsRegistered)
      .SetMethod('unregister', &GlobalShortcut::Unregister)
      .SetMethod('unregisterAll', &GlobalShortcut::UnregisterAll);
}
    
     protected:
  explicit LabelButton(const std::string& text);
  ~LabelButton() override;
    
            kernel 1    kernel 3    kernel 5
        0  1  0     2  0  2     1   2   2   2   1
        1 -4  1     0 -8  0     2   0  -4   0   2
        0  1  0     2  0  2     2  -4 -12  -4   2
                                2   0  -4   0   2
                                1   2   2   2   1
    
        enum BORDER_MODE
    {
        BORDER_MODE_UNDEFINED,
        BORDER_MODE_CONSTANT,
        BORDER_MODE_REPLICATE,
        BORDER_MODE_REFLECT,
        BORDER_MODE_REFLECT101,
        BORDER_MODE_WRAP
    };
    
    #define SPLIT64(sgn,n) void split##n(const Size2D &_size,                                               \
                                     const sgn##64 * srcBase, ptrdiff_t srcStride                       \
                                     FILL_LINES##n(FARG, sgn##64) )                                     \
{                                                                                                       \
    internal::assertSupportedConfiguration();                                                           \
    Size2D size(_size);                                                                                 \
    if (CONTDST##n                                                                                      \
        dst0Stride == (ptrdiff_t)(size.width))                                                          \
    {                                                                                                   \
        size.width *= size.height;                                                                      \
        size.height = 1;                                                                                \
    }                                                                                                   \
    typedef internal::VecTraits<sgn##64, n>::vec64 vec64;                                               \
                                                                                                        \
    for (size_t i = 0u; i < size.height; ++i)                                                           \
    {                                                                                                   \
        const sgn##64 * src = internal::getRowPtr(srcBase, srcStride, i);                               \
        FILL_LINES##n(VROW, sgn##64)                                                                    \
        size_t sj = 0u, dj = 0u;                                                                        \
                                                                                                        \
        for (; dj < size.width; sj += n, ++dj)                                                          \
        {                                                                                               \
            vec64 v_src = vld##n##_##sgn##64(src + sj);                                                 \
            FILL_LINES##n(VST1, sgn##64)                                                                \
        }                                                                                               \
    }                                                                                                   \
}
    
    #ifndef __ANDROID__
        for (; sj < roiw32; sj += 32, syj += 64, dj += 128)
        {
            internal::prefetch(srcy + syj);
            internal::prefetch(srcu + sj);
            internal::prefetch(srcv + sj);
    }
    
    #include 'common.hpp'
    
    
    {                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t0_16s), kernelBase[8]);
                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t1_16s), kernelBase[7]);
                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t2_16s), kernelBase[6]);
            }
    
    template <typename T>
inline T recipSaturate(const T &v2, const float scale)
{
    return internal::vqmovn(recipSaturateQ(internal::vmovl(v2), scale));
}
template <>
inline int32x2_t recipSaturate<int32x2_t>(const int32x2_t &v2, const float scale)
{ return vcvt_s32_f32(vmul_n_f32(internal::vrecp_f32(vcvt_f32_s32(v2)), scale)); }
template <>
inline uint32x2_t recipSaturate<uint32x2_t>(const uint32x2_t &v2, const float scale)
{ return vcvt_u32_f32(vmul_n_f32(internal::vrecp_f32(vcvt_f32_u32(v2)), scale)); }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const s32 * src = internal::getRowPtr(srcBase, srcStride, i);
        size_t j = 0;
    }
    
    namespace mxnet {
    }
    
    
    {    int n_aux = this->ListAuxiliaryStates().size();
    aux_type->clear();
    for (int i = 0; i < n_aux; ++i ) aux_type->push_back(mshadow::default_type_flag);
    return true;
  }
  /*!
   * \brief Copy this OperatorProperty.
   * \return a pointer to the copied OperatorProperty
   */
  virtual OperatorProperty* Copy() const = 0;
  /*!
   * \brief Create a Operator on specific context
   */
  virtual Operator* CreateOperator(Context ctx) const = 0;
  /*!
   * \brief Create a Operator on specific context and input shape/type
   * \param ctx context of this operator
   * \param in_shape shape of the input ndarrays
   * \param in_type dtype of the input ndarrays
   * \return the created operator
   */
  virtual Operator* CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
    std::vector<int> out_type, aux_type;
    std::vector<TShape> out_shape, aux_shape;
    out_type.resize(this->ListOutputs().size());
    out_shape.resize(this->ListOutputs().size());
    aux_type.resize(this->ListAuxiliaryStates().size());
    aux_shape.resize(this->ListAuxiliaryStates().size());
    CHECK(InferType(in_type, &out_type, &aux_type));
    CHECK(InferShape(in_shape, &out_shape, &aux_shape));
    return CreateOperator(ctx);
  }
  /*!
   * \brief return the type string of the Operator
   *  subclasses override this function.
   * \return The type string.
   */
  virtual std::string TypeString() const = 0;
  //--------------------------------------------------------
  // All the below functions are optional to override.
  //--------------------------------------------------------
  /*!
   * \brief Declare additional resource required in forward pass.
   *  These additional resources will be presented in OpContext.requested
   *  in the same order of the returned Resource.
   * \param in_shape The input shape to the operator, corresponds to shapes of in_data.
   * \return Additional resource request
   */
  virtual std::vector<ResourceRequest> ForwardResource(
      const std::vector<TShape> &in_shape) const {
    return std::vector<ResourceRequest>();
  }
  /*!
   * \brief Declare additional resource required in backward pass.
   *  These additional resources will be presented in OpContext.requested
   *  in the same order of the returned Resource.
   * \param in_shape The input shape to the operator, corresponds to shapes of in_data.
   * \return Additional resource request
   */
  virtual std::vector<ResourceRequest> BackwardResource(
      const std::vector<TShape> &in_shape) const {
    return std::vector<ResourceRequest>();
  }
  /*!
   * \brief Declare the input requirement of Backward pass.
   *
   *  Only the returned list of variables will be used in Backward.
   *  This function is used for memory optimization.
   *  It is advised to override and only return what is actually needed.
   *  If this function is not overriden, all the variables will be valid in Backward.
   *
   * \code
   *  // The following code declares Backward need out_grad[0], in_data[0],in_data[1]
   *  vector<int> BackwardInputs(const vector<int> &out_grad,
   *                             const vector<int> &in_data,
   *                             const vector<int> &out_data) const {
   *    return {out_grad[0], in_data[0], in_data[1]};
   *  }
   * \endcode
   * \param out_grad gradient of outputs in backward pass.
   * \param in_data the input data in forward pass.
   * \param out_data the output data in forward pass.
   * \return an integer vector indicating the input requirments
   * \sa BackwardInputs
   */
  virtual std::vector<int> DeclareBackwardDependency(
      const std::vector<int> &out_grad,
      const std::vector<int> &in_data,
      const std::vector<int> &out_data) const {
    // By default requires to see all the things.
    // remember to override this function to get a better performance.
    std::vector<int> ret = out_grad;
    ret.insert(ret.end(), in_data.begin(), in_data.end());
    ret.insert(ret.end(), out_data.begin(), out_data.end());
    return ret;
  }
  /*!
   * \brief Get possible forward inplace options.
   *  This function enables optimization to reuse memory of inputs in output.
   *  Only override when necessary, by default in-place is disabled.
   *
   *  The reason for void* type in the out_data is to distinguish the order
   *  of mappings between the two, compiler will report error when
   *  in_data and out_data's order in the pair get reversed.
   *
   * \code
   *  // The following code says out_data[0] can share data with in_data[0]
   *  vector<pair<int, void*> > ForwardInplaceOption(const vector<int> &in_data,
   *                                                 const vector<void*> &out_data) const {
   *    return {{in_data[0], out_data[0]}};
   *  }
   * \endcode
   * \param in_data The input data in forward pass.
   * \param out_data The output data in forward pass.
   * \return list of pair of that maps input->output,
   *   indicating possible in place operations.
   */
  virtual std::vector<std::pair<int, void*> > ForwardInplaceOption(
      const std::vector<int> &in_data,
      const std::vector<void*> &out_data) const {
    return std::vector<std::pair<int, void*> >();
  }
  /*!
   * \brief Get possible backward inplace options.
   *  This function enables optimization to reuse memory of inputs in output.
   *  Only override when necessary, by default in-place is disabled.
   *
   *  The reason for void* type in the in_grad is to distinguish the order
   *  of mappings between the two, compiler will report error when
   *  in_data and out_data's order in the pair get reversed.
   *
   * \code
   *  // The following code says in_grad[0] can share data with in_data[0]
   *  vector<pair<int,int> > BackwardInplaceOption(
   *                 const std::vector<int> &out_grad,
   *                 const std::vector<int> &in_data,
   *                 const std::vector<int> &out_data,
   *                 const std::vector<int> &in_grad) const {
   *    return {in_data[0], in_grad[0]}};
   *  }
   * \endcode
   * \param in_data The input data in forward pass.
   * \param out_data The output data in forward pass.
   * \param in_grad Gradient of inputs in backward pass.
   * \param out_grad Gradient of outputs in backward pass.
   * \return list of pair of that maps input->output,
   *   indicating possible in place operations.
   */
  virtual std::vector<std::pair<int, void*> > BackwardInplaceOption(
      const std::vector<int> &out_grad,
      const std::vector<int> &in_data,
      const std::vector<int> &out_data,
      const std::vector<void*> &in_grad) const {
    return std::vector<std::pair<int, void*> >();
  }
  /*!
   * \brief Get Backward Input Dependency for generic types of data.
   *  Normally T can be pointer of Symbol::DataEntry, or NDArray.
   *  This function will select the result list of T according to DeclareBackwardDependency.
   *
   * \param in_data the input data in forward pass.
   * \param out_data the output data in forward pass.
   * \param out_grad gradient of outputs in backward pass.
   * \tparam T the generic type parameter.
   * \return vector of inputs the Backward Operation depends on.
   * \sa DeclareBackwardDependency
   */
  template<typename T>
  inline std::vector<T> BackwardInputs(const std::vector<T> &out_grad,
                                       const std::vector<T> &in_data,
                                       const std::vector<T> &out_data) const {
    int counter = 0;
    std::vector<int> out_grad_index(out_grad.size());
    std::vector<int> in_data_index(in_data.size());
    std::vector<int> out_data_index(out_data.size());
    for (size_t i = 0; i < out_grad_index.size(); ++i) {
      out_grad_index[i] = counter++;
    }
    for (size_t i = 0; i < in_data_index.size(); ++i) {
      in_data_index[i] = counter++;
    }
    for (size_t i = 0; i < out_data_index.size(); ++i) {
      out_data_index[i] = counter++;
    }
    std::vector<T> all_data;
    all_data.insert(all_data.end(), out_grad.begin(), out_grad.end());
    all_data.insert(all_data.end(), in_data.begin(), in_data.end());
    all_data.insert(all_data.end(), out_data.begin(), out_data.end());
    
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
    
    template<typename Dtype>
void SetOpBlobs(::caffe::Layer<Dtype> *caffeOp,
                const std::vector< ::caffe::Blob<Dtype>*>& weights) {
  CHECK_EQ(caffeOp->blobs().size(), weights.size());
  for (int i = 0; i < weights.size(); ++i)
    caffeOp->blobs()[i].reset(weights[i]);
}
    
    #include <cstddef>
#include <cstdlib>
#include <sstream>
#include <limits>
#include <map>
#include <set>
#include <typeinfo>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
    
    void OrbitCamera::startWithTarget(Node *target)
{
    ActionCamera::startWithTarget(target);
    }
    
        /** 
     * Initializes the action with a duration and an array of points.
     *
     * @param dt In seconds.
     * @param points An PointArray.
     */
    bool initWithDuration(float dt, PointArray* points);
    
    /**
@brief Shaky3D action.
@details This action is used for take effect on the target node as shaky.
        You can create the action by these parameters:
        duration, grid size, range, whether shake on the z axis.
*/
class CC_DLL Shaky3D : public Grid3DAction
{
public:
    /** 
    @brief Create the action with a range, shake Z vertices, a grid and duration.
    @param initWithDuration Specify the duration of the Shaky3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param range Specify the range of the shaky effect.
    @param shakeZ Specify whether shake on the z axis.
    @return If the creation success, return a pointer of Shaky3D action; otherwise, return nil.
    */
    static Shaky3D* create(float initWithDuration, const Size& gridSize, int range, bool shakeZ);
    }
    
    /** @class ResizeTo
* @brief Resize a Node object to the final size by modifying it's Size attribute.
*/
class  CC_DLL ResizeTo : public ActionInterval 
{
public:
    /**
    * Creates the action.
    * @brief Resize a Node object to the final size by modifying it's Size attribute. Works on all nodes where setContentSize is effective. But it's mostly useful for nodes where 9-slice is enabled
    * @param duration Duration time, in seconds.
    * @param final_size The target size to reach
    * @return An autoreleased RotateTo object.
    */
    static ResizeTo* create(float duration, const cocos2d::Size& final_size);
    }
    
    // FIXME: Passing 'const O *' instead of 'const O&' because HASH_FIND_IT requires the address of a pointer
// and, it is not possible to get the address of a reference
size_t ActionManager::getNumberOfRunningActionsInTargetByTag(const Node *target,
                                                             int tag)
{
    CCASSERT(tag != Action::INVALID_TAG, 'Invalid tag value!');
    }
    
    
    {        return true;
    }
    
        /** 
     * @brief Initializes the action with the number rows and the duration.
     * @param duration Specify the duration of the SplitRows action. It's a value in seconds.
     * @param rows Specify the rows count should be split.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, unsigned int rows);
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
     @code
     auto modifyWidth = ActionTween::create(2, 'width', 200, 300);
     target->runAction(modifyWidth);
 @endcode
    
        /** Adds a Animation with a name.
     *
     * @param animation An animation.
     * @param name The name of animation.
     */
    void addAnimation(Animation *animation, const std::string& name);
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    BENCHMARK_RELATIVE(exception_wrapper_create_and_cast_concurrent, iters) {
  std::atomic<bool> go(false);
  std::vector<std::thread> threads;
  BENCHMARK_SUSPEND {
    for (int t = 0; t < FLAGS_num_threads; ++t) {
      threads.emplace_back([&go, iters] {
        while (!go) { }
        std::runtime_error e('payload');
        for (size_t i = 0; i < iters; ++i) {
          auto ew = folly::make_exception_wrapper<std::runtime_error>(e);
          bool b = ew.is_compatible_with<std::runtime_error>();
          folly::doNotOptimizeAway(b);
        }
      });
    }
  }
  go.store(true);
  for (auto& t : threads) {
    t.join();
  }
}
    
    // error result
Expected<int, Err> f4(int, double, Err err) {
  return makeUnexpected(err);
}
    
    template <class String> void clause11_21_4_8_1_i(String & test) {
  String s;
  randomString(&s, maxString);
  String s1;
  randomString(&s1, maxString);
  test = s + s1.c_str();
}