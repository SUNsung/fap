
        
        
    {}  // namespace
    
    namespace atom {
    }
    
    #include 'atom/browser/api/event_emitter.h'
    
    namespace api {
    }
    
    namespace in_app_purchase {
    }
    
      // Downloadable Content Information
  bool downloadable = false;
    
    #include <sstream>
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
    string ClassNameResolver::GetJavaImmutableClassName(
    const EnumDescriptor* descriptor) {
  return GetJavaClassFullName(
      ClassNameWithoutPackage(descriptor, true),
      descriptor->file(), true);
}
    
    #include <google/protobuf/io/strtod.h>
    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
    #include <mxnet/op_attr_types.h>
#include <mxnet/graph_attr_types.h>
#include <mxnet/c_api.h>
#include <nnvm/symbolic.h>
#include <nnvm/op.h>
#include <nnvm/graph.h>
#include <vector>
#include <atomic>
#include <utility>
#include <string>
#include <unordered_map>
    
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
    
    /*!
 * \brief Shape inference function to get the correct shape given source shapes.
 * \param lhs The shape of left operand.
 * \param rhs The shape of right operand.
 * \param env The Environment arguments.
 * \return The inferred result shape.
 */
typedef TShape (*BinaryShapeFunction)(const TShape& lhs,
                                      const TShape& rhs,
                                      const EnvArguments& env);
/*!
 * \brief Gradient function that takes only output gradient and computes gradient wrt to input.
 *  We support total gradient as a whole to make it easy to combine a few ops.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param lhs_grad The container to store result of lhs gradient.
 * \param rhs_grad The container to store result of lhs gradient.
 * \param req_lhs_grad The requirement to store the lhs_grad
 * \param req_rhs_grad The requirement to store the rhs_grad
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryGradFunctionT0)(const OutputGrad& out_grad,
                                     const EnvArguments& env,
                                     TBlob* lhs_grad,
                                     TBlob* rhs_grad,
                                     OpReqType req_lhs_grad,
                                     OpReqType req_rhs_grad,
                                     RunContext ctx);
/*!
 * \brief Gradient function that takes inputs of function anod computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param lhs The left operand to the function.
 * \param rhs The right operand to the function.
 * \param env The Environment arguments.
 * \param lhs_grad The container to store result of lhs gradient.
 * \param rhs_grad The container to store result of lhs gradient.
 * \param req_lhs_grad The requirement to store the lhs_grad
 * \param req_rhs_grad The requirement to store the rhs_grad
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryGradFunctionT1)(const OutputGrad& out_grad,
                                     const Input0& lhs,
                                     const Input1& rhs,
                                     const EnvArguments& env,
                                     TBlob* lhs_grad,
                                     TBlob* rhs_grad,
                                     OpReqType req_lhs_grad,
                                     OpReqType req_rhs_grad,
                                     RunContext ctx);
    
    #include <vector>
#include <string>
#include <memory>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include './ndarray.h'
    
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
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    #include <mxnet/io.h>
#include <mxnet/base.h>
#include <dmlc/logging.h>
#include <mshadow/tensor.h>
#include <utility>
#include <vector>
#include <string>
#include './inst_vector.h'
#include './image_iter_common.h'
    
     protected:
  /*! \brief prefetcher parameters */
  PrefetcherParam param_;
  /*! \brief backend thread */
  dmlc::ThreadedIter<DataBatch> iter;
  /*! \brief internal batch loader */
  std::unique_ptr<IIterator<TBlobBatch> > loader_;
    
    void swap(InternalOptionInfo &a, InternalOptionInfo &b) {
  using ::std::swap;
  swap(a.value, b.value);
  swap(a.default_value, b.default_value);
  swap(a.type, b.type);
  swap(a.__isset, b.__isset);
}
    
    class InternalExtensionInfo : public virtual ::apache::thrift::TBase {
 public:
    }
    
      std::string q4 =
      R'(DELETE FROM test_table WHERE username = 'matt' AND age = 27)';
  QueryData d4;
  Row row4_1;
  row4_1['username'] = 'mike';
  row4_1['age'] = '23';
  d4.push_back(row4_1);
  Row row4_2;
  row4_2['username'] = 'joe';
  row4_2['age'] = '25';
  d4.push_back(row4_2);
  results.push_back(std::make_pair(q4, d4));
    
    // getSerializedQueryLogItem() return an std::pair where pair->first
// is a string which should serialize to pair->second. pair->second
// should deserialize to pair->first
std::pair<JSON, QueryLogItem> getSerializedQueryLogItem();
std::pair<std::string, QueryLogItem> getSerializedQueryLogItemJSON();
    
    #include <osquery/tables.h>
    
    namespace osquery {
    }
    
    
    {} // namespace
    
    template <typename ToType>
inline typename std::enable_if<std::is_same<ToType, PosixError>::value,
                               PosixError>::type
to(int from_errno) {
  return impl::toPosixSystemError(from_errno);
}
    
      int64_t num_record_drop_hidden = 0;
  int64_t num_record_drop_obsolete = 0;
  int64_t num_record_drop_range_del = 0;
  int64_t num_range_del_drop_obsolete = 0;
  // Deletions obsoleted before bottom level due to file gap optimization.
  int64_t num_optimized_del_drop_obsolete = 0;
  uint64_t total_filter_time = 0;
    
      virtual Status Read(uint64_t offset, size_t n, Slice* result,
                      char* scratch) const override;
    
    
    {    std::vector<std::string> input_file_names;
    for (auto level : cf_meta.levels) {
      for (auto file : level.files) {
        if (file.being_compacted) {
          return nullptr;
        }
        input_file_names.push_back(file.name);
      }
    }
    return new CompactionTask(
        db, this, cf_name, input_file_names,
        options_.num_levels - 1, compact_options_, false);
  }
    
      {
    PinnableSlice pinnable_val;
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
  }
    
    Status GetPlainTableOptionsFromString(
    const PlainTableOptions& table_options,
    const std::string& opts_str,
    PlainTableOptions* new_table_options);
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
      // number of bytes that has been written.
  uint64_t bytes_written;
  // number of bytes that has been read.
  uint64_t bytes_read;
    
      virtual ~PersistentCache() {}
    
        //
    // Override
    //
    virtual Speed* clone() const override;
    virtual Speed* reverse() const override;
    virtual void startWithTarget(Node* target) override;
    virtual void stop() override;
    /**
     * @param dt in seconds.
     */
    virtual void step(float dt) override;
    /** Return true if the action has finished.
     *
     * @return Is true if the action has finished.
     */
    virtual bool isDone() const  override;
    
CC_CONSTRUCTOR_ACCESS:
    Speed();
    virtual ~Speed(void);
    /** Initializes the action. */
    bool initWithAction(ActionInterval *action, float speed);
    
    /**
 *@brief Base class for Camera actions.
 *@ingroup Actions
 */
class CC_DLL ActionCamera : public ActionInterval
{
public:
    /**
     * @js ctor
     * @lua new
     */
    ActionCamera();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionCamera(){};
    }
    
        /** Get the value of a controlPoint at a given index.
     *
     * @js NA
     * @param index Get the point in index.
     * @return A Vec2.
     */
    const Vec2& getControlPointAtIndex(ssize_t index) const;
    
    class CC_DLL __CCCallFuncO : public CallFunc
{
public:
    /** Creates the action with the callback.
        typedef void (Ref::*SEL_CallFuncO)(Ref*);
     *
     * @param target    A certain target.
     * @param selector  The callback need to be executed.
     * @param object    An object as the callback's first argument.
     * @return An autoreleased __CCCallFuncO object.
     */
    CC_DEPRECATED_ATTRIBUTE static __CCCallFuncO * create(Ref* target, SEL_CallFuncO selector, Ref* object);
    //
    // Overrides
    //
    virtual __CCCallFuncO* clone() const override;
    virtual void execute() override;
    
    Ref* getObject() const;
    void setObject(Ref* obj);
    
CC_CONSTRUCTOR_ACCESS:
    __CCCallFuncO();
    virtual ~__CCCallFuncO();
    /** initializes the action with the callback
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
                p.y = ( R + ay - ( r * (1 - cosBeta) * sinTheta));
    
    Animation* Animation::createWithSpriteFrames(const Vector<SpriteFrame*>& frames, float delay/* = 0.0f*/, unsigned int loops/* = 1*/)
{
    Animation *animation = new (std::nothrow) Animation();
    animation->initWithSpriteFrames(frames, delay, loops);
    animation->autorelease();
    }
    
    
    {    /** how many times the animation is going to loop. 0 means animation is not animated. 1, animation is executed one time, ... */
    unsigned int _loops;
    
private:
    CC_DISALLOW_COPY_AND_ASSIGN(Animation);
};
    
    
    {    // special opacity for premultiplied textures
    if( _isOpacityModifyRGB )
        this->setColor(_colorUnmodified);
}