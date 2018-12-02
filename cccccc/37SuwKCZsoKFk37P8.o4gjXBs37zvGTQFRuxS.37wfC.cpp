
        
        StringRef swift::platformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return #X;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
    
    {} // end anonymous namespace
    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
    using namespace swift;
using namespace importer;
    
    
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    // clear cache on the renderer side
IPC_MESSAGE_CONTROL0(ShellViewMsg_ClearCache)
    
    
    {}  // namespace nwapi
    
    
    {}
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    void MenuItem::SetTooltip(const std::string& tooltip) {
  gtk_widget_set_tooltip_text(menu_item_, tooltip.c_str());
}
    
    void WritePropertyDocComment(io::Printer* printer, const FieldDescriptor* field) {
    WriteDocCommentBody(printer, field);
}
    
    void EnumGenerator::Generate(io::Printer* printer) {
  WriteEnumDocComment(printer, descriptor_);
  printer->Print('$access_level$ enum $name$ {\n',
                 'access_level', class_access_level(),
                 'name', descriptor_->name());
  printer->Indent();
  std::set<string> used_names;
  std::set<int> used_number;
  for (int i = 0; i < descriptor_->value_count(); i++) {
      WriteEnumValueDocComment(printer, descriptor_->value(i));
      string original_name = descriptor_->value(i)->name();
      string name = GetEnumValueName(descriptor_->name(), descriptor_->value(i)->name());
      // Make sure we don't get any duplicate names due to prefix removal.
      while (!used_names.insert(name).second) {
        // It's possible we'll end up giving this warning multiple times, but that's better than not at all.
        GOOGLE_LOG(WARNING) << 'Duplicate enum value ' << name << ' (originally ' << original_name
          << ') in ' << descriptor_->name() << '; adding underscore to distinguish';
        name += '_';
      }
      int number = descriptor_->value(i)->number();
      if (!used_number.insert(number).second) {
          printer->Print('[pbr::OriginalName(\'$original_name$\', PreferredAlias = false)] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      } else {
          printer->Print('[pbr::OriginalName(\'$original_name$\')] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      }
  }
  printer->Outdent();
  printer->Print('}\n');
  printer->Print('\n');
}
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
    const FieldGeneratorInfo* Context::GetFieldGeneratorInfo(
    const FieldDescriptor* field) const {
  const FieldGeneratorInfo* result =
      FindOrNull(field_generator_info_map_, field);
  if (result == NULL) {
    GOOGLE_LOG(FATAL) << 'Can not find FieldGeneratorInfo for field: '
               << field->full_name();
  }
  return result;
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    SharedCodeGenerator::~SharedCodeGenerator() {
}
    
      for (int i = 0; i < all_values_.size(); i++) {
    ++enum_value_description_key;
    string short_name(EnumValueShortName(all_values_[i]));
    text_blob += short_name + '\0';
    if (UnCamelCaseEnumShortName(short_name) != all_values_[i]->name()) {
      text_format_decode_data.AddString(enum_value_description_key, short_name,
                                        all_values_[i]->name());
    }
  }
    
    #include <google/protobuf/compiler/objectivec/objectivec_extension.h>
#include <google/protobuf/compiler/objectivec/objectivec_helpers.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/stubs/strutil.h>
#include <google/protobuf/io/printer.h>
    
    TEST(ObjCHelper, TextFormatDecodeData_ByteCodes) {
  TextFormatDecodeData decode_data;
    }
    
    #include <google/protobuf/compiler/objectivec/objectivec_oneof.h>
#include <google/protobuf/compiler/objectivec/objectivec_helpers.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
      void ListParsedFiles(std::vector<const FileDescriptor*>* output) {
    *output = parsed_files_;
  }
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / 3; ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * 3));
      input_blob_names.push_back(I(inputIdx * 3 + 2));
      output_blob_names.push_back(GI(inputIdx * 3 + 1));
    }
    input_blob_names.push_back(GO(3));
    
    template <typename T, class Context>
class FlexibleTopKOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
    #if GTEST_HAS_STD_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::std::wstring& wstr);
#endif  // GTEST_HAS_STD_WSTRING
    
     private:
  // A string containing a description of the outcome of the last death test.
  static std::string last_death_test_message_;
    
        for (int i = 2; i*i <= n; i++) {
      // n is divisible by an integer other than 1 and itself.
      if ((n % i) == 0) return false;
    }
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
    /*! \brief typedef the factory function of operator property */
typedef std::function<OperatorProperty *()> OperatorPropertyFactory;
/*!
 * \brief Registry entry for OperatorProperty factory functions.
 */
struct OperatorPropertyReg
    : public dmlc::FunctionRegEntryBase<OperatorPropertyReg,
                                        OperatorPropertyFactory> {
  /*!
   * \brief Set key_var_num_args
   *  When this is set, the API caller is required to pass in a
   *  argument with key=key_num_args.c_str(), and value=num_args.
   *  num_args is number of positional argument when calling the function.
   *
   *  This is used to pass in length of positional arguments
   *  for operators that can take variable length of input.
   *  Most operators do not need to set this property.
   *
   * \param key the key name to be set
   */
  inline OperatorPropertyReg& set_key_var_num_args(const std::string &key) {  // NOLINT(*)
    this->key_var_num_args = key;
    return *this;
  }
  /*!
   * \brief Check if TypeString of the type matches the registered name
   */
  inline OperatorPropertyReg& check_name() {
    OperatorProperty *p = this->body();
    std::string type = p->TypeString();
    delete p;
    CHECK_EQ(this->name, type)
        << 'Register Name and TypeString mismatch, name=\'' << this->name << '\','
        << ' but TypeString=\'' << type <<'\'';
    return *this;
  }
    }
    
    /*!
 * \brief Environment arguments that is used by the function.
 * These can be things like scalar arguments when add a value with scalar.
 */
struct EnvArguments {
  /*! \brief scalar argument, if enabled */
  real_t scalar;
  /*! \brief keyword arguments */
  std::vector<std::pair<std::string, std::string> > kwargs;
  /*! \brief pointer to the resources requested */
  std::vector<Resource> resource;
};
    
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
    
    #define CHECK_NEXT_TIMING
    
    // specialize define for Layer Parameter
template<>
class FieldEntry<caffe::LayerParameter>
    : public FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> {
 public:
  // parent class
  typedef FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> Parent;
    }
    
    namespace mxnet {
namespace op {
template<>
Operator *CreateOp<cpu>(CaffeLossParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeLoss<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeLoss<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    }
    }
    
    
    { private:
  /*! \brief Concurrency for thread pool */
  static constexpr std::size_t kNumWorkingThreads = 16;
  /*! \brief Maximum number of GPUs */
  static constexpr std::size_t kMaxNumGpus = 16;
  /*!\brief number of streams allocated for each GPU */
  static constexpr std::size_t kNumStreamsPerGpu = 16;
  /*!
   * \brief Streams.
   */
  std::unique_ptr<StreamManager<kMaxNumGpus, kNumStreamsPerGpu>> streams_;
  /*!
   * \brief Task queues.
   */
  std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> task_queue_;
  std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> io_task_queue_;
  /*!
   * \brief Thread pools.
   */
  std::unique_ptr<ThreadPool> thread_pool_;
  std::unique_ptr<ThreadPool> io_thread_pool_;
  /*!
   * \brief Worker.
   * \param task_queue Queue to work on.
   *
   * The method to pass to thread pool to parallelize.
   */
  void ThreadWorker(std::shared_ptr<dmlc::ConcurrentBlockingQueue<OprBlock*>> task_queue,
                    const std::shared_ptr<dmlc::ManualEvent>& ready_event) {
    OprBlock* opr_block;
    ready_event->signal();
    while (task_queue->Pop(&opr_block)) {
      DoExecute(opr_block);
    }
  }
  /*!
   * \brief Execute an operation.
   * \param opr_block The operator block.
   */
  void DoExecute(OprBlock* opr_block) {
    assert(opr_block->wait.load() == 0);
    if (opr_block->ctx.dev_mask() == gpu::kDevMask) {
      #if MXNET_USE_CUDA
      CUDA_CALL(cudaSetDevice(opr_block->ctx.dev_id));
      #else   // MXNET_USE_CUDA
      LOG(FATAL) << 'Please compile with CUDA enabled';
      #endif  // MXNET_USE_CUDA
    }
    bool is_copy = (opr_block->opr->prop == FnProperty::kCopyFromGPU ||
                    opr_block->opr->prop == FnProperty::kCopyToGPU);
    auto&& rctx = is_copy
        ? streams_->GetIORunContext(opr_block->ctx)
        : streams_->GetRunContext(opr_block->ctx);
    this->ExecuteOprBlock(rctx, opr_block);
  }
  /*!
   * \brief Push the operation to the queue.
   * \param opr_block The operator block.
   */
  void DoPushToQueue(OprBlock* opr_block) {
    switch (opr_block->opr->prop) {
      case FnProperty::kCopyFromGPU:
      case FnProperty::kCopyToGPU: {
        io_task_queue_->Push(opr_block);
        break;
      }
      default: {
        task_queue_->Push(opr_block);
        break;
      }
    }
  }
};
    
    /*!
 * \brief a list of (label, example) pairs, examples can have various shape
 */
template<typename DType = real_t>
class InstVector {
 public:
  /*! \brief return the number of (label, example) pairs */
  inline size_t Size(void) const {
    return index_.size();
  }
  // get index
  inline unsigned Index(unsigned i) const {
    return index_[i];
  }
  // instance
  /* \brief get the i-th (label, example) pair */
  inline DataInst operator[](size_t i) const {
    DataInst inst;
    inst.index = index_[i];
    // ImageRecordIter depends on data vector
    // here having size 2. If you want to
    // change this assumption here, change it
    // in there as well (InitBatch section)!
    inst.data.push_back(TBlob(data_[i]));
    inst.data.push_back(TBlob(label_[i]));
    return inst;
  }
  /* \brief get the last (label, example) pair */
  inline DataInst Back() const {
    return (*this)[Size() - 1];
  }
  inline void Clear(void) {
    index_.clear();
    data_.Clear();
    label_.Clear();
  }
  /*
   * \brief push a (label, example) pair
   * only reserved the space, while the data is not copied
   */
  inline void Push(unsigned index,
                   mshadow::Shape<3> dshape,
                   mshadow::Shape<1> lshape) {
    index_.push_back(index);
    data_.Push(dshape);
    label_.Push(lshape);
  }
  /*! \return the data content */
  inline const TensorVector<3, DType>& data() const {
    return data_;
  }
  /*! \return the label content */
  inline const TensorVector<1, real_t>& label() const {
    return label_;
  }
    }
    
    
    {    fprintf(stderr,
            'expected=%d..%d; got=%d; bad_keys=%d; bad_values=%d; missed=%d\n',
            min_expected, max_expected, correct, bad_keys, bad_values, missed);
    ASSERT_LE(min_expected, correct);
    ASSERT_GE(max_expected, correct);
  }
    
    
    {  ASSERT_TRUE(!ParseInternalKey(Slice('bar'), &decoded));
}
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
    uint64_t LogTest::initial_offset_last_record_offsets_[] =
    {0,
     kHeaderSize + 10000,
     2 * (kHeaderSize + 10000),
     2 * (kHeaderSize + 10000) +
         (2 * log::kBlockSize - 1000) + 3 * kHeaderSize,
     2 * (kHeaderSize + 10000) +
         (2 * log::kBlockSize - 1000) + 3 * kHeaderSize
         + kHeaderSize + 1,
     3 * log::kBlockSize,
    };
    
    Writer::Writer(WritableFile* dest)
    : dest_(dest),
      block_offset_(0) {
  InitTypeCrc(type_crc_);
}
    
    class SnapshotList;