
        
        class DebugGraphDecorator : public DebugGraphDecoratorInterface {
 public:
  DebugGraphDecorator(const DebugOptions& debug_options)
      : debug_options_(debug_options) {}
  virtual ~DebugGraphDecorator() {}
    }
    
    #include 'tensorflow/core/platform/env.h'
    
          T* resource;
      OP_REQUIRES_OK(
          context,
          mgr->LookupOrCreate<T>(cinfo_.container(), cinfo_.name(), &resource,
                                 [this](T** ret) EXCLUSIVE_LOCKS_REQUIRED(mu_) {
                                   Status s = CreateResource(ret);
                                   if (!s.ok() && *ret != nullptr) {
                                     CHECK((*ret)->Unref());
                                   }
                                   return s;
                                 }));
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      Status Optimize(Cluster* cluster, const GrapplerItem& item,
                  GraphDef* pruned_graph) override;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {
    {
    {}  // namespace cuda
}  // namespace gputools
}  // namespace perftools
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    class RecordWriterOptions {
 public:
  enum CompressionType { NONE = 0, ZLIB_COMPRESSION = 1 };
  CompressionType compression_type = NONE;
    }
    
    class TextLineReaderOp : public ReaderOpKernel {
 public:
  explicit TextLineReaderOp(OpKernelConstruction* context)
      : ReaderOpKernel(context) {
    int skip_header_lines = -1;
    OP_REQUIRES_OK(context,
                   context->GetAttr('skip_header_lines', &skip_header_lines));
    OP_REQUIRES(context, skip_header_lines >= 0,
                errors::InvalidArgument('skip_header_lines must be >= 0 not ',
                                        skip_header_lines));
    Env* env = context->env();
    SetReaderFactory([this, skip_header_lines, env]() {
      return new TextLineReader(name(), skip_header_lines, env);
    });
  }
};
    
    
    {    io::RecordReaderOptions options =
        io::RecordReaderOptions::CreateRecordReaderOptions(compression_type_);
    reader_.reset(new io::RecordReader(file_.get(), options));
    return Status::OK();
  }
    
    #define REGISTER_DYNAMIC_STITCH(type)                    \
  REGISTER_KERNEL_BUILDER(Name('DynamicStitch')          \
                              .Device(DEVICE_CPU)        \
                              .TypeConstraint<type>('T') \
                              .HostMemory('indices'),    \
                          DynamicStitchOpCPU<type>)      \
  REGISTER_KERNEL_BUILDER(Name('ParallelDynamicStitch')  \
                              .Device(DEVICE_CPU)        \
                              .TypeConstraint<type>('T') \
                              .HostMemory('indices'),    \
                          ParallelDynamicStitchOpCPU<type>)
    
    
    {  // Don't bind REPL metavariables to simple declrefs.
  if (auto DRE = dyn_cast<DeclRefExpr>(E))
    return dyn_cast<VarDecl>(DRE->getDecl());
  return nullptr;
}
    
      /// The kind of message to send through the Objective-C runtime.
  enum class ObjCMessageKind {
    /// A normally-dispatched call.
    Normal,
    /// A call to a superclass method.
    Super,
    /// A call to a peer method.
    Peer
  };
    
    /// A utility for finding dead-end blocks.
///
/// Dead-end blocks are blocks from which there is no path to the function exit
/// (either return or throw). These are blocks which end with an unreachable
/// instruction and blocks from which all paths end in 'unreachable' blocks.
/// This utility is needed to determine if the a value definition can have a
/// lack of users ignored along a specific path.
class DeadEndBlocks {
  llvm::SetVector<const SILBasicBlock *> ReachableBlocks;
  const SILFunction *F;
  bool isComputed = false;
    }
    
        // Otherwise, lets do a quick check on what the checker thinks the lifetime
    // ending and non-lifetime ending users. To be conservative, we bail unless
    // each lifetime ending use is a destroy_value and if each non-lifetime
    // ending use is one of the following instructions:
    //
    // 1. copy_value.
    // 2. begin_borrow.
    // 3. end_borrow.
    if (!all_of(Checker.LifetimeEndingUsers, [](SILInstruction *I) -> bool {
          return isa<DestroyValueInst>(I);
        }))
      continue;
    
    #include 'swift/SIL/SILDebugScope.h'
#include 'swift/SIL/SILFunction.h'
    
    // FIXME: Soon this will change.
using SubstitutionList = ArrayRef<Substitution>;
    
    
    {  bool operator==(ConcreteDeclRef rhs) const {
    return Data == rhs.Data;
  }
  
  /// Dump a debug representation of this reference.
  void dump(raw_ostream &os);
  void dump() LLVM_ATTRIBUTE_USED;
};
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Allocate_Object,
                    int /* object id */,
                    std::string /* type name */,
                    base::DictionaryValue /* option */)
    
      WebView* view = frame->view();
  if (!view)
    return NULL;  // can happen during closing.
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
      blink::LocalFrame* core_frame = blink::toWebLocalFrameImpl(frame)->frame();
  if (core_frame->deprecatedLocalOwner()) {
    element = blink::toV8((blink::HTMLElement*)core_frame->deprecatedLocalOwner(),
                            frame->mainWorldScriptContext()->Global(),
                            frame->mainWorldScriptContext()->GetIsolate());
  }
  args->Set(0, element);
  args->Set(1, v8_str(request.url().string().utf8().c_str()));
  args->Set(2, policy_obj);
    
    void MenuItem::SetLabel(const std::string& label) {
  label_ = label;
  gtk_menu_item_set_label(GTK_MENU_ITEM(menu_item_), label.c_str());
}
    
    
    {}
    
    
    {  // [start, limit) byte offsets in the source JSON text from which this Value
  // was extracted.
  size_t start_;
  size_t limit_;
};
    
    Value::Value(const std::string& value) {
  initBasic(stringValue, true);
  value_.string_ =
      duplicateAndPrefixStringValue(value.data(), static_cast<unsigned>(value.length()));
}
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_REPEATED_SCALAR_CONTAINER_H__

    
    TEST(AnyTest, TestPackAndUnpack) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(submessage);
    }
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Generates C++ code for a given .proto file.
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__

    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void RepeatedPrimitiveFieldGenerator::GenerateCloningCode(io::Printer* printer) {
  printer->Print(variables_,
    '$name$_ = other.$name$_.Clone();\n');
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
    
    
    {  LOG(INFO) << 'Writing Testing data';
  scoped_ptr<db::DB> test_db(db::GetDB(db_type));
  test_db->Open(output_folder + '/cifar10_test_' + db_type, db::NEW);
  txn.reset(test_db->NewTransaction());
  // Open files
  std::ifstream data_file((input_folder + '/test_batch.bin').c_str(),
      std::ios::in | std::ios::binary);
  CHECK(data_file) << 'Unable to open test file.';
  for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
    read_image(&data_file, &label, str_buffer);
    datum.set_label(label);
    datum.set_data(str_buffer, kCIFARImageNBytes);
    string out;
    CHECK(datum.SerializeToString(&out));
    txn->Put(caffe::format_int(itemid, 5), out);
  }
  txn->Commit();
  test_db->Close();
}
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    #include <vector>
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of SigmoidLayer.
 */
template <typename Dtype>
class CuDNNSigmoidLayer : public SigmoidLayer<Dtype> {
 public:
  explicit CuDNNSigmoidLayer(const LayerParameter& param)
      : SigmoidLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSigmoidLayer();
    }
    
    namespace caffe {
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/base_conv_layer.hpp'
    
    
    {  bool first_reshape_;
  vector<int> indices_to_forward_;
};
    
    // Store the snappy compression of 'input[0,input_length-1]' in *output.
// Returns false if snappy is not supported by this port.
extern bool Snappy_Compress(const char* input, size_t input_length,
                            std::string* output);
    
      FILE* f = fopen(test_file.c_str(), 'w');
  ASSERT_TRUE(f != NULL);
  const char kFileData[] = 'abcdefghijklmnopqrstuvwxyz';
  fputs(kFileData, f);
  fclose(f);
    
      // SnapshotImpl is kept in a doubly-linked circular list
  SnapshotImpl* prev_;
  SnapshotImpl* next_;
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    
    {  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
}
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
    class Benchmark {
 private:
  kyotocabinet::TreeDB* db_;
  int db_num_;
  int num_;
  int reads_;
  double start_;
  double last_op_finish_;
  int64_t bytes_;
  std::string message_;
  Histogram hist_;
  RandomGenerator gen_;
  Random rand_;
  kyotocabinet::LZOCompressor<kyotocabinet::LZO::RAW> comp_;
    }
    
      virtual Status RenameFile(const std::string& src,
                            const std::string& target) {
    MutexLock lock(&mutex_);
    if (file_map_.find(src) == file_map_.end()) {
      return Status::IOError(src, 'File not found');
    }
    }
    
    Iterator* NewEmptyIterator() {
  return new EmptyIterator(Status::OK());
}
    
    // Helper structure to read bits from the entropy coded data segment.
struct BitReaderState {
  BitReaderState(const uint8_t* data, const size_t len, size_t pos)
      : data_(data), len_(len) {
    Reset(pos);
  }
    }
    
      // Must be called before any CompareBlock() calls can be called.
  virtual void StartBlockComparisons() = 0;
  // No more CompareBlock() calls can be called after this.
  virtual void FinishBlockComparisons() = 0;
    
    // Computes out[x] = sum{kIDCTMatrix[8*x+u]*in[u*stride]; for u in [0..7]}
inline void Compute1dIDCT(const coeff_t* in, const int stride, int out[8]) {
  int tmp0, tmp1, tmp2, tmp3, tmp4;
    }
    
    // Library to decode jpeg coefficients into an RGB image.
    
    
// Adds APP0 header data.
void AddApp0Data(JPEGData* jpg);
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    namespace guetzli {
    }