
        
          TF_LITE_ENSURE_EQ(context, NumDimensions(fft_length), 1);
  TF_LITE_ENSURE_EQ(context, fft_length_shape.Dims(0), 2);
  if (fft_length->type != kTfLiteInt32) {
    context->ReportError(context,
                         'Type '%s' for fft_length is not supported by rfft2d.',
                         TfLiteTypeGetName(fft_length->type));
    return kTfLiteError;
  }
    
      std::vector<complex<float>> GetOutput() {
    return ExtractVector<complex<float>>(output_);
  }
  std::vector<int> GetOutputShape() { return GetTensorShape(output_); }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace tflite {
namespace evaluation {
    }
    }
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/platform/types.h'
    
      // Preprocess model input metadata for generating random data later.
  for (int i = 0; i < model_info_->inputs.size(); ++i) {
    const TfLiteType model_input_type = model_info_->inputs[i]->type;
    if (model_input_type == kTfLiteUInt8 || model_input_type == kTfLiteInt8 ||
        model_input_type == kTfLiteFloat32) {
    } else {
      LOG(ERROR) << 'InferenceProfilerStage only supports float/int8/uint8 '
                    'input types';
      return kTfLiteError;
    }
    auto* input_shape = model_info_->inputs[i]->dims;
    int64_t total_num_elements = 1;
    for (int i = 0; i < input_shape->size; i++) {
      total_num_elements *= input_shape->data[i];
    }
    input_num_elements_.push_back(total_num_elements);
    float_tensors_.emplace_back();
    uint8_tensors_.emplace_back();
    int8_tensors_.emplace_back();
  }
  // Preprocess output metadata for calculating diffs later.
  for (int i = 0; i < model_info_->outputs.size(); ++i) {
    const TfLiteType model_output_type = model_info_->outputs[i]->type;
    if (model_output_type == kTfLiteUInt8 || model_output_type == kTfLiteInt8 ||
        model_output_type == kTfLiteFloat32) {
    } else {
      LOG(ERROR) << 'InferenceProfilerStage only supports float/int8/uint8 '
                    'output types';
      return kTfLiteError;
    }
    auto* output_shape = model_info_->outputs[i]->dims;
    int64_t total_num_elements = 1;
    for (int i = 0; i < output_shape->size; i++) {
      total_num_elements *= output_shape->data[i];
    }
    output_num_elements_.push_back(total_num_elements);
    }
    
     protected:
  void MakeDataset(OpKernelContext* ctx, DatasetBase* input,
                   DatasetBase** output) override;
    
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
    
    
    {  // Stores all the source points in the order they were given and their
  // halfwidths, if any.
  GenericVector<PointWidth> pts_;
  // Stores the computed perpendicular distances of (some of) the pts_ from a
  // given vector (assuming it goes through the origin, making it a line).
  // Since the distances may be a subset of the input points, and get
  // re-ordered by the nth_item function, the original point is stored
  // along side the distance.
  GenericVector<DistPointPair> distances_;  // Distances of points.
  // The squared length of the vector used to compute distances_.
  double square_length_;
};
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
    inline void ExecutionContext::setThrowAllErrors(bool throwAllErrors) {
  m_throwAllErrors = throwAllErrors;
}
    
      // Adds private properties defined on one of an object's base classes.
  void addClassPrivateProps(
    DebuggerSession* session,
    request_id_t requestId,
    int start,
    int count,
    VariableSubScope* subScope,
    const Variant& var,
    folly::dynamic* vars
  );
    
    void ActRec::setReturn(ActRec* fp, PC callPC, void* retAddr) {
  assertx(fp->func()->contains(callPC));
  assertx(isReturnHelper(retAddr));
  m_sfp = fp;
  m_savedRip = reinterpret_cast<uintptr_t>(retAddr);
  m_callOff = Offset(callPC - fp->func()->getEntry());
}
    
    VregList intersectVregList(VregList l1, VregList l2) {
  l1.erase(
    std::remove_if(
      l1.begin(), l1.end(),
      [&] (Vreg r) { return !inVregList(l2, r); }
    ),
    l1.end()
  );
  return l1;
}
    
    Vptr operator+(Vptr lhs, int32_t d);
Vptr operator+(Vptr lhs, intptr_t d);
Vptr operator+(Vptr lhr, size_t d);
    
    bool simplify(Env& env, const orqi& inst, Vlabel b, size_t i) {
  auto const immed = inst.s0.q();
  return implOrSimplify(env, inst, b, i, immed);
}
    
    void Vgen::emit(const stubtophp& /*i*/) {
  emit(stubunwind{});
}
    
      static ArrayData* SetWithRefIntImpl(ArrayData*, int64_t k, TypedValue v,
                                      bool copy);
  static ArrayData* SetWithRefStrImpl(ArrayData*, StringData* k, TypedValue v,
                                      bool copy);
  static ArrayData* SetWithRefIntVecImpl(ArrayData*, int64_t k,
                                         TypedValue v, bool copy);
    
    
    {private:
  NameValueTable* const m_tab;
};
    
    NameValueTable::Elm* NameValueTable::insert(const StringData* name) {
  reserve(m_elms + 1);
  Elm* elm = insertImpl(name);
  if (elm->m_tv.m_type == kInvalidDataType) {
    ++m_elms;
    name->incRefCount();
  }
  return elm;
}
    
    #define CGET_PROP_HELPER_TABLE(m)                       \
  /* name            keyType       mode  */             \
  m(cGetPropCQuiet,  KeyType::Any, MOpMode::None)      \
  m(cGetPropSQuiet,  KeyType::Str, MOpMode::None)      \
  m(cGetPropC,       KeyType::Any, MOpMode::Warn)      \
  m(cGetPropS,       KeyType::Str, MOpMode::Warn)      \