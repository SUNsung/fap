
        
        
    {
    {SHOULD_NOT_DO_GRADIENT(FindDuplicateElements);
} // namespace
} // namespace caffe2

    
    <summary> <b>Example</b> </summary>
    
      /**
   * Returns the baseline of the current object at the given level.
   * The baseline is the line that passes through (x1, y1) and (x2, y2).
   * WARNING: with vertical text, baselines may be vertical!
   * Returns false if there is no baseline at the current position.
   */
  bool Baseline(PageIteratorLevel level,
                int* x1, int* y1, int* x2, int* y2) const;
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
      // Clean up the bounding boxes from the polygonal approximation by
  // expanding slightly, then clipping to the blobs from the original_word
  // that overlap. If not null, the block provides the inverse rotation.
  void ClipToOriginalWord(const BLOCK* block, WERD* original_word);
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
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
    
    TShape Vector2TShape(const std::vector<int> &vec_int);
std::vector<int> TShape2Vector(const TShape &tshape);
    
    MXNET_REGISTER_OP_PROPERTY(CaffeLoss, CaffeLossProp)
.describe('Caffe loss layer')
.add_arguments(CaffeLossParam::__FIELDS__());
    
    
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
