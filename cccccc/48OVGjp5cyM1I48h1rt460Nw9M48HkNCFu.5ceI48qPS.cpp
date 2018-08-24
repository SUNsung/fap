
        
        #include <QComboBox>
#include <QVariant>
    
        /* Check all NULLs are detected */
    CHECK(secp256k1_ecdh(tctx, res, &point, s_one) == 1);
    CHECK(ecount == 0);
    CHECK(secp256k1_ecdh(tctx, NULL, &point, s_one) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdh(tctx, res, NULL, s_one) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdh(tctx, res, &point, NULL) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdh(tctx, res, &point, s_one) == 1);
    CHECK(ecount == 3);
    
    int secp256k1_ecdsa_recover(const secp256k1_context* ctx, secp256k1_pubkey *pubkey, const secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32) {
    secp256k1_ge q;
    secp256k1_scalar r, s;
    secp256k1_scalar m;
    int recid;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_context_is_built(&ctx->ecmult_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(pubkey != NULL);
    }
    
    #include <dmlc/base.h>
#include <dmlc/json.h>
#include <dmlc/logging.h>
#include <dmlc/registry.h>
#include <nnvm/node.h>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include './base.h'
#include './resource.h'
#include './op_attr_types.h'
    
      /*! \brief default constructor, default copy assign will work */
  TBlob(void)
      : dptr_(NULL),
        type_flag_(mshadow::DataType<real_t>::kFlag) {
    SetDLTensor(cpu::kDevMask, 0);
  }
  /*!
   * \brief constructor that construct TBlob from contiguous memory
   * \param dptr the pointer to the memory
   * \param shape the shape of the data
   * \param dev_mask the device mask, can be cpu::kDevMask or gpu::kDevMask
   * \param dev_id the device id
   */
  template<typename DType>
  TBlob(DType *dptr, const TShape &shape, int dev_mask, int dev_id = -1)
      : dptr_(dptr), shape_(shape),
        type_flag_(mshadow::DataType<DType>::kFlag) {
    SetDLTensor(dev_mask, dev_id);
  }
  /*!
   * \brief constructor that construct TBlob from contiguous memory
   * \param dptr the pointer to the memory
   * \param shape the shape of the data
   * \param dev_mask the device mask, can be cpu::kDevMask or gpu::kDevMask
   * \param type_flag the type flag. Can be one of enum mshadow::dtype
   * \param dev_id the device id
   */
  TBlob(void *dptr, const TShape &shape, int dev_mask, int type_flag, int dev_id = -1)
      : dptr_(dptr), shape_(shape), type_flag_(type_flag) {
    SetDLTensor(dev_mask, dev_id);
  }
  /*!
   * \brief constructor from tensor
   * \param src source tensor
   * \tparam Device which device the tensor is on
   * \tparam dim tensor dimension
   * \tparam DType the type of elements in the tensor
   */
  template<typename Device, int dim, typename DType>
  TBlob(const mshadow::Tensor<Device, dim, DType> &src) {  // NOLINT(*)
    *this = src;
  }
  /*!
   * \brief assignment from tensor
   * \param src source tensor
   * \tparam Device which device the tensor is on
   * \tparam dim tensor dimension
   * \tparam DType the type of elements in the tensor
   * \return reference of self
   */
  template<typename Device, int dim, typename DType>
  inline TBlob &operator=(const mshadow::Tensor<Device, dim, DType> &src) {
    dptr_ = src.dptr_;
    shape_ = src.shape_;
    type_flag_ = mshadow::DataType<DType>::kFlag;
    SetDLTensor(Device::kDevMask, -1);
    return *this;
  }
  /*!
   * \return whether the tensor's memory is continuous
   */
  inline bool CheckContiguous(void) const {
    return true;
  }
  /*!
   * \brief reshape to shape
   * \param shape desired shape
   * \return reshaped blob
   */
  inline TBlob reshape(const TShape& shape) const {
    CHECK_EQ(this->shape_.Size(), shape.Size()) << 'Shape size mismatch '
    << this->shape_.Size() << ' v.s. '  << shape.Size();
    TBlob ret(this->dptr_, shape, this->dev_mask(), this->type_flag_, this->dev_id());
    return ret;
  }
  /*!
   * \brief flatten the tensor to 2 dimension, collapse the higher dimensions together
   * \param stream the possible stream target tensor should reside on
   * \tparam Device which device the tensor is on
   * \tparam DType the type of elements in the tensor
   * \return tensor after flatten
   */
  template<typename Device, typename DType>
  inline mshadow::Tensor<Device, 2, DType> FlatTo2D(
    mshadow::Stream<Device> *stream = NULL) const {
    CHECK(Device::kDevMask == this->dev_mask())
      << 'TBlob.get: device type do not match specified type';
    CHECK(mshadow::DataType<DType>::kFlag == type_flag_)
      << 'TBlob.get_with_shape: data type do not match specified type.'
      << 'Expected: ' << type_flag_ << ' v.s. given ' << mshadow::DataType<DType>::kFlag;
    return mshadow::Tensor<Device, 2, DType>(static_cast<DType*>(dptr_),
                                             shape_.FlatTo2D(),
                                             shape_[shape_.ndim() - 1],
                                             stream);
  }
  /*!
   * \brief flatten the tensor to 1 dimension, collapse all the dimensions together.
   * \param stream the possible stream target tensor should reside on
   * \tparam Device which device the tensor is on
   * \tparam DType the type of elements in the tensor
   * \return tensor after flatten
   */
  template<typename Device, typename DType>
  inline mshadow::Tensor<Device, 1, DType> FlatTo1D(
      mshadow::Stream<Device> *stream = NULL) const {
    return this->get_with_shape<Device, 1, DType>(
        mshadow::Shape1(shape_.Size()), stream);
  }
  /*! \brief return number of dimension of the tensor inside */
  inline int ndim(void) const {
    return shape_.ndim();
  }
  /*!
   * \brief return size of i-th dimension, start counting from highest dimension
   * \param idx the dimension count from the highest dimensin
   * \return the size
   */
  inline index_t size(index_t idx) const {
    return shape_[idx];
  }
  /*! \brief total number of elements in the tensor */
  inline index_t Size(void) const {
    return shape_.Size();
  }
  /*! \brief get pointer in dtype */
  template<typename DType>
  inline DType* dptr() const {
    CHECK(mshadow::DataType<DType>::kFlag == type_flag_)
      << 'TBlob.get_with_shape: data type do not match specified type.'
      << 'Expected: ' << type_flag_ << ' v.s. given ' << mshadow::DataType<DType>::kFlag;
    return static_cast<DType*>(dptr_);
  }
  /*! \brief device mask of the corresponding device */
  inline int dev_mask() const {
    return dltensor_.ctx.device_type;
  }
  /*! \brief device index of the corresponding device */
  inline int dev_id() const {
    return dltensor_.ctx.device_id;
  }
  /*!
   * \brief return the corresponding DLTensor
   * \return the address of internal DLTensor
   */
  inline const DLTensor& dltensor() const {
    return dltensor_;
  }
    
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
    
    #include <caffe/proto/caffe.pb.h>
#include <dmlc/parameter.h>
#include <dmlc/base.h>
#include <dmlc/json.h>
#include <dmlc/logging.h>
#include <dmlc/type_traits.h>
#include <google/protobuf/message.h>
#include <google/protobuf/text_format.h>
    
    MXNET_REGISTER_OP_PROPERTY(CaffeOp, CaffeOpProp)
.describe('Apply caffe operator')
.add_argument('data', 'Symbol[]', 'List of tensors')
.add_arguments(CaffeOpParam::__FIELDS__());
    
    // implementation of threaded engine
ThreadedVar* ThreadedEngine::NewVariable() {
  return ThreadedVar::New(VersionedVarBlock::New());
}
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta);
    
    void DBImpl::CompactMemTable() {
  mutex_.AssertHeld();
  assert(imm_ != nullptr);
    }
    
    static bool Between(uint64_t val, uint64_t low, uint64_t high) {
  bool result = (val >= low) && (val <= high);
  if (!result) {
    fprintf(stderr, 'Value %llu is not in range [%llu, %llu]\n',
            (unsigned long long)(val),
            (unsigned long long)(low),
            (unsigned long long)(high));
  }
  return result;
}
    
    std::string LockFileName(const std::string& dbname) {
  return dbname + '/LOCK';
}
    
        // Invariant: we never leave < kHeaderSize bytes in a block.
    assert(kBlockSize - block_offset_ - kHeaderSize >= 0);
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_slow_dot_repeat(bool r)
{
   saved_single_repeat<BidiIterator>* pmp = static_cast<saved_single_repeat<BidiIterator>*>(m_backup_state);
    }
    
    #ifndef BOOST_REGEX_V4_PROTECTED_CALL_HPP
#define BOOST_REGEX_V4_PROTECTED_CALL_HPP
    
    
    
    template <class OutputIterator, class Results, class traits, class ForwardIter>
void basic_regex_formatter<OutputIterator, Results, traits, ForwardIter>::put(const sub_match_type& sub)
{
   typedef typename sub_match_type::iterator iterator_type;
   iterator_type i = sub.first;
   while(i != sub.second)
   {
      put(*i);
      ++i;
   }
}
    
    namespace boost{
    }
    
    #ifndef BOOST_NO_WREGEX
inline bool regex_search(const wchar_t* str, 
                        wcmatch& m, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_search(const wchar_t* first, const wchar_t* last, 
                  const wregex& e, 
                  match_flag_type flags = match_default)
{
   wcmatch m;
   return regex_search(first, last, m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_search(const std::string& s, 
                        smatch& m,
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(s.begin(), s.end(), m, e, flags);
}
#if !defined(BOOST_NO_WREGEX)
inline bool regex_search(const std::basic_string<wchar_t>& s, 
                        wsmatch& m,
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_search(s.begin(), s.end(), m, e, flags);
}
#endif
    
    
// TRACED_FORRANGE(type, var, low, high) expands to a loop that assigns |var|
// every value in the range |low| to (including) |high| and adds a
// SCOPED_TRACE() message for the |var| while inside the loop body.
// TODO(bmeurer): Migrate to C++11 once we're ready.
#define TRACED_FORRANGE(_type, _var, _low, _high)                          \
  for (_type _i = _low; _i <= _high; ++_i)                                 \
    for (bool _done = false; !_done;)                                      \
      for (_type const _var = _i; !_done;)                                 \
        for (SCOPED_TRACE(::testing::Message() << #_var << ' = ' << _var); \
             !_done; _done = true)
    
     private:
  // Calculates and returns the the frame pointer, argument count and formal
  // parameter count to be used to access a function's parameters, taking
  // argument adapter frames into account. The tuple is of the form:
  // <frame_ptr, # parameters actually passed, formal parameter count>
  std::tuple<Node*, Node*, Node*> GetArgumentsFrameAndCount(Node* function,
                                                            ParameterMode mode);
    
      // Perform steps to resume generator after `value` is resolved.
  // `on_reject_context_index` is an index into the Native Context, which should
  // point to a SharedFunctioninfo instance used to create the closure. The
  // value following the reject index should be a similar value for the resolve
  // closure. Returns the Promise-wrapped `value`.
  Node* Await(Node* context, Node* generator, Node* value, Node* outer_promise,
              int context_length,
              const ContextInitializer& init_closure_context,
              Node* on_resolve_context_index, Node* on_reject_context_index,
              Node* is_predicted_as_caught);
  Node* AwaitOptimized(Node* context, Node* generator, Node* value,
                       Node* outer_promise, int context_length,
                       const ContextInitializer& init_closure_context,
                       Node* on_resolve_context_index,
                       Node* on_reject_context_index,
                       Node* is_predicted_as_caught);
  Node* Await(Node* context, Node* generator, Node* value, Node* outer_promise,
              int context_length,
              const ContextInitializer& init_closure_context,
              int on_resolve_context_index, int on_reject_context_index,
              Node* is_predicted_as_caught) {
    return Await(context, generator, value, outer_promise, context_length,
                 init_closure_context, IntPtrConstant(on_resolve_context_index),
                 IntPtrConstant(on_reject_context_index),
                 is_predicted_as_caught);
  }
  Node* AwaitOptimized(Node* context, Node* generator, Node* value,
                       Node* outer_promise, int context_length,
                       const ContextInitializer& init_closure_context,
                       int on_resolve_context_index,
                       int on_reject_context_index,
                       Node* is_predicted_as_caught) {
    return AwaitOptimized(
        context, generator, value, outer_promise, context_length,
        init_closure_context, IntPtrConstant(on_resolve_context_index),
        IntPtrConstant(on_reject_context_index), is_predicted_as_caught);
  }
  Node* Await(Node* context, Node* generator, Node* value, Node* outer_promise,
              int context_length,
              const ContextInitializer& init_closure_context,
              int on_resolve_context_index, int on_reject_context_index,
              bool is_predicted_as_caught) {
    return Await(context, generator, value, outer_promise, context_length,
                 init_closure_context, on_resolve_context_index,
                 on_reject_context_index,
                 BooleanConstant(is_predicted_as_caught));
  }
  Node* AwaitOptimized(Node* context, Node* generator, Node* value,
                       Node* outer_promise, int context_length,
                       const ContextInitializer& init_closure_context,
                       int on_resolve_context_index,
                       int on_reject_context_index,
                       bool is_predicted_as_caught) {
    return AwaitOptimized(context, generator, value, outer_promise,
                          context_length, init_closure_context,
                          on_resolve_context_index, on_reject_context_index,
                          BooleanConstant(is_predicted_as_caught));
  }
    
    #include 'src/builtins/builtins-utils-gen.h'
#include 'src/builtins/builtins.h'
#include 'src/code-stub-assembler.h'
#include 'src/frame-constants.h'
    
      Node* EmitFastNewObject(Node* context, Node* target, Node* new_target);
    
    TF_BUILTIN(DatePrototypeGetFullYear, DateBuiltinsAssembler) {
  Node* context = Parameter(Descriptor::kContext);
  Node* receiver = Parameter(Descriptor::kReceiver);
  Generate_DatePrototype_GetField(context, receiver, JSDate::kYear);
}
    
    void Builtins::Generate_KeyedStoreIC_Megamorphic(
    compiler::CodeAssemblerState* state) {
  KeyedStoreGenericGenerator::Generate(state);
}
    
      void GenerateStringAt(const char* method_name, TNode<Context> context,
                        Node* receiver, TNode<Object> maybe_position,
                        TNode<Object> default_return,
                        StringAtAccessor accessor);
    
    // ES6 #sec-symbol.prototype-@@toprimitive
TF_BUILTIN(SymbolPrototypeToPrimitive, CodeStubAssembler) {
  Node* context = Parameter(Descriptor::kContext);
  Node* receiver = Parameter(Descriptor::kReceiver);
    }
    
      std::string message = greeter.SayHello(name);
  std::cerr << 'Greeter received: ' << message << std::endl;
    
    #include 'monster_test.grpc.fb.h'
#include 'monster_test_generated.h'
    
      flatbuffers::FlatBufferBuilder builder;
  auto name = builder.CreateString('Dog');
  auto sound = builder.CreateString('Bark');
  auto animal_buffer = sample::CreateAnimal(builder, name, sound);
  builder.Finish(animal_buffer);
    
    bool GenerateFBS(const Parser &parser, const std::string &path,
                 const std::string &file_name) {
  return SaveFile((path + file_name + '.fbs').c_str(),
                  GenerateFBS(parser, file_name), false);
}
    
    static bool GenStruct(const StructDef &struct_def, const Table *table,
                      int indent, const IDLOptions &opts, std::string *_text);
    
      cv::Mat element = cv::getStructuringElement( erosion_type,
                                       cv::Size( 2*erosion_size + 1, 2*erosion_size+1 ),
                                       cv::Point( erosion_size, erosion_size ) );
    
    
    {    return 0;
}

    
    
    {        return true;
    }
    
            int currentSum = 0;
        for (size_t j = 0; j < size; ++j)
            if (i & (1 << j))
                currentSum += v[j];