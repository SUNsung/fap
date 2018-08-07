
        
          /// This is the second time DebuggerClient is consulted:
  /// after all names in external Modules are checked, the client
  /// gets a chance to add names to the list of candidates that
  /// have been found in the external module lookup.
    
    
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
    #include 'swift/Basic/LLVM.h'
#include 'llvm/ADT/ArrayRef.h'
#include 'llvm/ADT/StringRef.h'
    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
      /// Tracks previous replacements so we don't pump the rewrite buffer with
  /// multiple equivalent replacements, which can result in weird behavior.
  llvm::SmallSet<Replacement, 32> Replacements;
    
    
    {
    {    rph->Send(new ShellViewMsg_Reopen());
  }
}
    
      // Post 'reopen' event.
  // (This event is received when the user clicked the icon in the Dock).
  static void EmitReopenEvent();
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
     protected:
  ~NwAppClearAppCacheFunction() override;
    
     protected:
  ~NwObjCreateFunction() override;
    
     protected:
   /**
   * @brief Generates a random integer from Uniform({0, 1, ..., n-1}).
   *
   * @param n
   *    The upperbound (exclusive) value of the random number.
   * @return
   *    A uniformly random integer value from ({0, 1, ..., n-1}).
   */
  virtual int Rand(int n);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of ConvolutionLayer.
 *        Fallback to ConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates convolution through forward kernels for filtering and bias
 * plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
 *
 * The CUDNN engine does not have memory overhead for matrix buffers. For many
 * input and filter regimes the CUDNN engine is faster than the CAFFE engine,
 * but for fully-convolutional models and large inputs the CAFFE engine can be
 * faster as long as it fits in memory.
*/
template <typename Dtype>
class CuDNNConvolutionLayer : public ConvolutionLayer<Dtype> {
 public:
  explicit CuDNNConvolutionLayer(const LayerParameter& param)
      : ConvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNConvolutionLayer();
    }
    
      EltwiseParameter_EltwiseOp op_;
  vector<Dtype> coeffs_;
  Blob<int> max_idx_;
    
    #include 'network.h'
#include 'fullyconnected.h'
    
      /**
   * Returns true if the iterator is at the start of an object at the given
   * level.
   *
   * For instance, suppose an iterator it is pointed to the first symbol of the
   * first word of the third line of the second paragraph of the first block in
   * a page, then:
   *   it.IsAtBeginningOf(RIL_BLOCK) = false
   *   it.IsAtBeginningOf(RIL_PARA) = false
   *   it.IsAtBeginningOf(RIL_TEXTLINE) = true
   *   it.IsAtBeginningOf(RIL_WORD) = true
   *   it.IsAtBeginningOf(RIL_SYMBOL) = true
   */
  virtual bool IsAtBeginningOf(PageIteratorLevel level) const;
    
      /// Return true if we are processing the full image.
  bool IsFullImage() const {
    return rect_left_ == 0 && rect_top_ == 0 &&
           rect_width_ == image_width_ && rect_height_ == image_height_;
  }
    
    namespace tesseract {
    }
    
      // Returns the average (in some sense) distance between the two given
  // shapes, which may contain multiple fonts and/or unichars.
  // This function is public to facilitate testing.
  float ShapeDistance(const ShapeTable& shapes, int s1, int s2);
    
    struct CrackPos {
  CRACKEDGE** free_cracks;   // Freelist for fast allocation.
  int x;                     // Position of new edge.
  int y;
};
    
    class PythonGrpcGenerator : public grpc::protobuf::compiler::CodeGenerator {
 public:
  PythonGrpcGenerator(const GeneratorConfiguration& config);
  ~PythonGrpcGenerator();
    }
    
    
    {  const Result start_;
};
    
    #include 'src/compiler/python_generator.h'
    
        private:
        void EnumerateStatefulNodesForRoot(ComputationNetwork& net, ComputationNodeBasePtr root, std::map<wstring, shared_ptr<IStatefulNode>>& statefulNodes)
        {
            for (const auto& node : net.GetAllNodesForRoot(root))
            {
                const auto& name = node->GetName();
                if (statefulNodes.find(name) != statefulNodes.end())
                    continue; // already in the list  --TODO: use insert()
                shared_ptr<IStatefulNode> pNode = dynamic_pointer_cast<IStatefulNode>(node);
                if (pNode) // if it is an IStatefulNode then report it
                    statefulNodes[name] = pNode;
            }
        }
    
    // -----------------------------------------------------------------------
// network editing
// -----------------------------------------------------------------------
    
        bool transposeA = false, transposeB = false;
    float alpha = 0.3f;
    float beta = 0.0f;
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAdense, transposeB, beta, mC);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAsparse, transposeB, beta, mD);
    
    template void DoConvertFromDbn<float>(const ConfigParameters& config);
template void DoConvertFromDbn<double>(const ConfigParameters& config);
template void DoExportToDbn<float>(const ConfigParameters& config);
template void DoExportToDbn<double>(const ConfigParameters& config);

    
    #include <memory> // for shared_ptr
    
    public:
    // DataWriter Constructor
    // config - [in] configuration parameters for the datareader
    template <class ConfigRecordType>
    DataWriter(const ConfigRecordType& config);
    // constructor from Scripting
    DataWriter(const ScriptableObjects::IConfigRecordPtr configp)
        : DataWriter(*configp)
    {
    }
    virtual ~DataWriter();
    
        // This prints a PROGRESS message with a percentage value of 0 to prevent timeouts on Philly
    // when executing long running non-training operations like PreCompute, CV, Eval, and Write
    static size_t TraceFakeProgress(size_t numIterationsBeforePrintingProgress, size_t numItersSinceLastPrintOfProgress)
    {
        size_t newNumItersSinceLastPrintOfProgress = numItersSinceLastPrintOfProgress;
        if (GetTracingFlag())
        {
            newNumItersSinceLastPrintOfProgress++;
            if (newNumItersSinceLastPrintOfProgress >= numIterationsBeforePrintingProgress)
            {
                printf('PROGRESS: %.2f%%\n', 0.0f);
                newNumItersSinceLastPrintOfProgress = 0;
            }
        }
    }
    
    // ---------------------------------------------------------------------------
// array_ref -- wraps a C pointer to an array together with its size.
//
// Called _ref because this is a reference to the array rather than the array
// itself (since it wraps a pointer). No need to pass an array_ref by reference.
//
// operator[] checks index bounds in Debug builds. size() is provided such
// that this class can be substituted for STL vector in many cases.
// ---------------------------------------------------------------------------
    
        template<template<typename> class ValueContainer> 
    void ForwardPassT(const std::vector < ValueBuffer<ElemType, ValueContainer> >& inputs,
                      std::vector < ValueBuffer<ElemType, ValueContainer> >& outputs, bool resetRNN);
    
    //****************************
// Simple Hash Functions
//****************************
    
    namespace rocksdb {
    }
    
      // Offset of the file position indicator within the last block when an
  // EOF was detected.
  size_t eof_offset_;
    
    JNIEnv* JniCallback::getJniEnv(jboolean* attached) const {
  return JniUtil::getJniEnv(m_jvm, attached);
}
    
      /**
   * @brief [brief description]
   * @details [long description]
   * @return true if Sync() and Fsync() are safe to call concurrently with Append()and Flush().
   */
  bool IsSyncThreadSafe() const {
    return true;
  }
    
    // The factory is to create memtables based on a hash table:
// it contains a fixed array of buckets, each pointing to either a linked list
// or a skip list if number of entries inside the bucket exceeds
// threshold_use_skiplist.
// @bucket_count: number of fixed array buckets
// @huge_page_tlb_size: if <=0, allocate the hash table bytes from malloc.
//                      Otherwise from huge page TLB. The user needs to reserve
//                      huge pages for it to be allocated, like:
//                          sysctl -w vm.nr_hugepages=20
//                      See linux doc Documentation/vm/hugetlbpage.txt
// @bucket_entries_logging_threshold: if number of entries in one bucket
//                                    exceeds this number, log about it.
// @if_log_bucket_dist_when_flash: if true, log distribution of number of
//                                 entries when flushing.
// @threshold_use_skiplist: a bucket switches to skip list if number of
//                          entries exceed this parameter.
extern MemTableRepFactory* NewHashLinkListRepFactory(
    size_t bucket_count = 50000, size_t huge_page_tlb_size = 0,
    int bucket_entries_logging_threshold = 4096,
    bool if_log_bucket_dist_when_flash = true,
    uint32_t threshold_use_skiplist = 256);
    
      if(m_jSliceA != nullptr) {
    env->DeleteGlobalRef(m_jSliceA);
  }
    
    
    {  ComparatorJniCallbackOptions() : use_adaptive_mutex(false) {
  }
};
    
    void TestKillRandom(std::string kill_point, int odds,
                    const std::string& srcfile, int srcline) {
  for (auto& p : rocksdb_kill_prefix_blacklist) {
    if (kill_point.substr(0, p.length()) == p) {
      return;
    }
  }
    }
    
    
    {// Instantiate the most common Future types to save compile time
template class SemiFuture<Unit>;
template class SemiFuture<bool>;
template class SemiFuture<int>;
template class SemiFuture<int64_t>;
template class SemiFuture<std::string>;
template class SemiFuture<double>;
template class Future<Unit>;
template class Future<bool>;
template class Future<int>;
template class Future<int64_t>;
template class Future<std::string>;
template class Future<double>;
} // namespace folly
    
      ThreadPtr makeThread() override;
  std::shared_ptr<IOThread> pickThread();
  void threadRun(ThreadPtr thread) override;
  void stopThreads(size_t n) override;
  size_t getPendingTaskCountImpl() override;
    
    #include <folly/stats/detail/BufferedStat.h>
    
      // Not yet built.  Is it currently in progress?
  if (creating_thread_.load(std::memory_order_acquire) != std::thread::id()) {
    return true;
  }
    
      TypeDescriptor type() const {
    return type_;
  }
  virtual bool hasLiveInstance() = 0;
  virtual void createInstance() = 0;
  virtual bool creationStarted() = 0;
  virtual void preDestroyInstance(ReadMostlyMainPtrDeleter<>&) = 0;
  virtual void destroyInstance() = 0;
    
      BENCHMARK_DEPRECATED_MSG('use 'range(1)' instead')
  int range_y() const { return range(1); }
    
    #endif  // BENCHMARK_COLORPRINT_H_

    
    // Reads and returns the string environment variable corresponding to
// the given flag; if it's not set, returns default_value.
const char* StringFromEnv(const char* flag, const char* default_value) {
  const std::string env_var = FlagToEnvVar(flag);
  const char* const value = getenv(env_var.c_str());
  return value == nullptr ? default_value : value;
}
    
    
    {    // Compute all possible fitting curves and stick to the best one
    for (const auto& fit : fit_curves) {
      LeastSq current_fit = MinimalLeastSq(n, time, FittingCurve(fit));
      if (current_fit.rms < best_fit.rms) {
        best_fit = current_fit;
        best_fit.complexity = fit;
      }
    }
  } else {
    best_fit = MinimalLeastSq(n, time, FittingCurve(complexity));
    best_fit.complexity = complexity;
  }