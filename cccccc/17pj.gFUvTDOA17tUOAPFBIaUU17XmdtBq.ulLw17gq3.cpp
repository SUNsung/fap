
        
          uv_loop_t* loop_;
    
    
    {}  // namespace api
    
      // views::ButtonListener:
  void ButtonPressed(views::Button* sender, const ui::Event& event) override;
    
    template <>
struct Converter<base::trace_event::TraceConfig> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     base::trace_event::TraceConfig* out) {
    Dictionary options;
    if (!ConvertFromV8(isolate, val, &options))
      return false;
    std::string category_filter, trace_options;
    if (!options.Get('categoryFilter', &category_filter) ||
        !options.Get('traceOptions', &trace_options))
      return false;
    *out = base::trace_event::TraceConfig(category_filter, trace_options);
    return true;
  }
};
    
    template <>
struct Converter<file_dialog::Filter> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     file_dialog::Filter* out) {
    mate::Dictionary dict;
    if (!ConvertFromV8(isolate, val, &dict))
      return false;
    if (!dict.Get('name', &(out->first)))
      return false;
    if (!dict.Get('extensions', &(out->second)))
      return false;
    return true;
  }
};
    
    #ifndef ATOM_BROWSER_API_ATOM_API_GLOBAL_SHORTCUT_H_
#define ATOM_BROWSER_API_ATOM_API_GLOBAL_SHORTCUT_H_
    
      // Fake sending an action from the application menu.
  static void SendActionToFirstResponder(const std::string& action);
#endif
    
    
    {  mate::Dictionary dict(isolate, exports);
  dict.Set('net', Net::Create(isolate));
  dict.Set('Net', Net::GetConstructor(isolate)->GetFunction());
}
    
      scoped_ptr<base::Value> value_option(
      converter->FromV8Value(options, isolate->GetCurrentContext()));
  if (!value_option.get() ||
      !value_option->IsType(base::Value::TYPE_DICTIONARY))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'option' passed to AllocateObject')));
    
    
    {} // namespace nwapi

    
    #include 'content/nw/src/api/menu/menu_delegate.h'
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    
    {} // namespace extensions
#endif

    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #ifdef USE_OPENCV
  /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Mat.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<cv::Mat> & mat_vector,
                Blob<Dtype>* transformed_blob);
    
    template <typename Dtype>
class LayerRegistry {
 public:
  typedef shared_ptr<Layer<Dtype> > (*Creator)(const LayerParameter&);
  typedef std::map<string, Creator> CreatorRegistry;
    }
    
     private:
  // wrap im2col/col2im so we don't have to remember the (long) argument lists
  inline void conv_im2col_cpu(const Dtype* data, Dtype* col_buff) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      im2col_cpu(data, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], col_buff);
    } else {
      im2col_nd_cpu(data, num_spatial_axes_, conv_input_shape_.cpu_data(),
          col_buffer_shape_.data(), kernel_shape_.cpu_data(),
          pad_.cpu_data(), stride_.cpu_data(), dilation_.cpu_data(), col_buff);
    }
  }
  inline void conv_col2im_cpu(const Dtype* col_buff, Dtype* data) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      col2im_cpu(col_buff, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], data);
    } else {
      col2im_nd_cpu(col_buff, num_spatial_axes_, conv_input_shape_.cpu_data(),
          col_buffer_shape_.data(), kernel_shape_.cpu_data(),
          pad_.cpu_data(), stride_.cpu_data(), dilation_.cpu_data(), data);
    }
  }
#ifndef CPU_ONLY
  inline void conv_im2col_gpu(const Dtype* data, Dtype* col_buff) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      im2col_gpu(data, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], col_buff);
    } else {
      im2col_nd_gpu(data, num_spatial_axes_, num_kernels_im2col_,
          conv_input_shape_.gpu_data(), col_buffer_.gpu_shape(),
          kernel_shape_.gpu_data(), pad_.gpu_data(),
          stride_.gpu_data(), dilation_.gpu_data(), col_buff);
    }
  }
  inline void conv_col2im_gpu(const Dtype* col_buff, Dtype* data) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      col2im_gpu(col_buff, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], data);
    } else {
      col2im_nd_gpu(col_buff, num_spatial_axes_, num_kernels_col2im_,
          conv_input_shape_.gpu_data(), col_buffer_.gpu_shape(),
          kernel_shape_.gpu_data(), pad_.gpu_data(), stride_.gpu_data(),
          dilation_.gpu_data(), data);
    }
  }
#endif
    
    /**
 * @brief Provides base for data layers that feed blobs to the Net.
 *
 * TODO(dox): thorough documentation for Forward and proto params.
 */
template <typename Dtype>
class BaseDataLayer : public Layer<Dtype> {
 public:
  explicit BaseDataLayer(const LayerParameter& param);
  // LayerSetUp: implements common data layer setup functionality, and calls
  // DataLayerSetUp to do special data layer setup for individual layer types.
  // This method may not be overridden except by the BasePrefetchingDataLayer.
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void DataLayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
  // Data layers have no bottoms, so reshaping is trivial.
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
    }
    
    /**
 * @brief Computes a sum of two input Blobs, with the shape of the latter Blob
 *        'broadcast' to match the shape of the former. Equivalent to tiling
 *        the latter Blob, then computing the elementwise sum.
 *
 * The second input may be omitted, in which case it's learned as a parameter
 * of the layer. Note: in case bias and scaling are desired, both operations can
 * be handled by `ScaleLayer` configured with `bias_term: true`.
 */
template <typename Dtype>
class BiasLayer : public Layer<Dtype> {
 public:
  explicit BiasLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t bias_desc_;
  cudnnFilterDescriptor_t filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    void UNSCALE_BT_BASIS(btTransform &scaledBasis) {
	btMatrix3x3 &m(scaledBasis.getBasis());
	btVector3 column0(m[0][0], m[1][0], m[2][0]);
	btVector3 column1(m[0][1], m[1][1], m[2][1]);
	btVector3 column2(m[0][2], m[1][2], m[2][2]);
	column0.normalize();
	column1.normalize();
	column2.normalize();
	m.setValue(column0[0], column1[0], column2[0], column0[1], column1[1], column2[1], column0[2], column1[2], column2[2]);
}

    
    #include 'btRayShape.h'
#include 'collision_object_bullet.h'
    
    	virtual void processCollision(const btCollisionObjectWrapper *body0Wrap, const btCollisionObjectWrapper *body1Wrap, const btDispatcherInfo &dispatchInfo, btManifoldResult *resultOut);
	virtual btScalar calculateTimeOfImpact(btCollisionObject *body0, btCollisionObject *body1, const btDispatcherInfo &dispatchInfo, btManifoldResult *resultOut);
    
    
    {	return env->NewGlobalRef(context);
#else
	return NULL;
#endif
}
    
    	for (uint32_t i = 0; i < alloc_count - 1; i++) {
    }
    
    
    {}
    
    //////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////
    
      // Parse and process a .hdf string (e.g., -v)
  static void ParseHdfString(const std::string &hdfStr, Hdf &hdf);
    
    
    {  /**
   * Execute a debugger action.
   */
  virtual String debuggerVerb(const std::string& /*verb*/,
                              const std::vector<std::string>& /*args*/) {
    return String();
  }
};
    
    //////////////////////////////////////////////////////////////////////
    
    /**
 * Make sure path exists. Same as 'mkdir -p', but 'a/b' will only make sure
 * 'a/' exists, treating 'b' as a file name.
 */
bool mkdir(const std::string &path, int mode = 0777);
    
    #if DMLC_USE_CXX11
// OperatorProperty allows C++11, while Operator do not rely on it.
/*!
 * \brief OperatorProperty is a object that stores all information about Operator.
 * It also contains method to generate context(device) specific operators.
 *
 * It also contains various functions that can be optimally overriden to
 * provide optimization chance for computation engine.
 */
class OperatorProperty {
 public:
  /*!
   * \brief virtual destructor
   */
  virtual ~OperatorProperty() {}
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief Get a map representation of internal parameters.
   *  This can be used by Init to recover the state of OperatorProperty.
   */
  virtual std::map<std::string, std::string> GetParams() const = 0;
  /*!
   * \brief Get input arguments of the Operator.
   * \return vector of arguments.
   */
  virtual std::vector<std::string> ListArguments() const {
    return {'data'};
  }
  /*!
   * \brief Get name of output values of Operator
   * \return name of output values.
   */
  virtual std::vector<std::string> ListOutputs() const {
    return {'output'};
  }
  /*!
   * \brief Get name of auxiliary states of Operator
   * \return name of return values.
   */
  virtual std::vector<std::string> ListAuxiliaryStates() const {
    return {};
  }
  /*! \return number of real return values of the Operator */
  virtual int NumOutputs() const {
    return this->ListOutputs().size();
  }
  /*!
   * \brief get number of visible return values during Symbol creation.
   *  If NumVisibleOutputs() = k, and NumOutputs() = n.
   *  The first k returns will be presented in the resulting symbol.
   *
   *  The rest of the returns can be used for auxiliary states for Backward.
   *  For example, Dropout will return [data, mask], with NumVisibleOutputs() == 1.
   *  So when user call sym = Dropout(input), only data is presented in sym.
   *  But all the returns will be presented in out_data parameter of Backward if requested.
   *
   * \return number of default return values
   */
  virtual int NumVisibleOutputs() const {
    return NumOutputs();
  }
  /*!
   * \brief infer the shapes of outputs and unknown input arguments
   * \param in_shape the shape of input arguments of the operator
   *     this should be of same length as the vector returned by DescribeArgs
   *     in_shape allows unknown elements, which are checked by shape.ndim() == 0.
   *     For unknown shapes, InferShape will try to fill in the correct Shape in in_shape
   *     For known shapes, InferShape will check shape consistency
   *
   *     common practice: set the shape of data input, and usually weight's shape can be inferred
   *
   * \param out_shape the shape of outputs of the operator
   *     InferShape will modify the vector to fill output TShape
   * \param aux_shape the shape of auxiliary states of the operator
   *     InferShape will modify the vector to fill output TShape
   * \return true if the shape inference is successful, false if there is not enough information.
   * \throws dmlc::Error if the known arg_shapes are inconsistent.
   */
  virtual bool InferShape(std::vector<TShape> *in_shape,
                          std::vector<TShape> *out_shape,
                          std::vector<TShape> *aux_shape) const = 0;
  /*!
   * \brief infer the data types of outputs and unknown input arguments
   * \param in_type the type of input arguments of the operator
   *     this should be of same length as the vector returned by DescribeArgs
   *     in_type allows unknown elements, which are checked by type.ndim() == 0.
   *     For unknown types, Infertype will try to fill in the correct type in in_type
   *     For known types, Infertype will check type consistency
   *
   *     common practice: set the type of data input, and usually weight's type can be inferred
   *
   * \param out_type the type of outputs of the operator
   *     Infertype will modify the vector to fill output Ttype
   * \param aux_type the type of auxiliary states of the operator
   *     Infertype will modify the vector to fill output Ttype
   * \return true if the type inference is successful, false if there is not enough information.
   * \throws dmlc::Error if the known arg_types are inconsistent.
   */
  virtual bool InferType(std::vector<int> *in_type,
                          std::vector<int> *out_type,
                          std::vector<int> *aux_type) const {
    CHECK_LE(in_type->size(), this->ListArguments().size());
    int n_in = this->ListArguments().size();
    for (unsigned i = 0; i < in_type->size(); ++i) {
      CHECK(in_type->at(i) == mshadow::default_type_flag ||
            in_type->at(i) == -1) << 'Unsupported data type ' << in_type->at(i);
    }
    in_type->clear();
    for (int i = 0; i < n_in; ++i ) in_type->push_back(mshadow::default_type_flag);
    }
    }
    
    MXNET_REGISTER_IO_ITER(CaffeDataIter)
.describe('Create MxNet iterator for a Caffe data layer.')
.add_arguments(CaffeDataParam::__FIELDS__())
.add_arguments(PrefetcherParam::__FIELDS__())
.set_body([]() {
    return new CaffeDataIterWrapper();
});
    
    #if defined(__CUDACC__)
    Stream<xpu> *s = ctx.get_stream<xpu>();
    // TODO(Haoran): when need cublas handle in stream?
    CHECK_EQ(s->blas_handle_ownership_, Stream<xpu>::OwnHandle)
          << 'Must init CuBLAS handle in stream';
#endif  // __CUDACC__
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeLossProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    template<typename AttrType, typename FInfer>
bool ApplyOpInferAttr(const nnvm::Graph& g,
                      const FInfer& finfer,
                      const NodeAttrs& attrs,
                      const uint32_t nid,
                      std::vector<AttrType>* in_attrs,
                      std::vector<AttrType>* out_attrs,
                      DispatchMode* dispatch_mode) {
  return finfer(attrs, in_attrs, out_attrs);
}