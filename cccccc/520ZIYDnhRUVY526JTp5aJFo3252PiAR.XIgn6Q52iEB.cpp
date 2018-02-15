
        
        
    {}  // namespace leveldb

    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
    // Tag numbers for serialized VersionEdit.  These numbers are written to
// disk and should not be changed.
enum Tag {
  kComparator           = 1,
  kLogNumber            = 2,
  kNextFileNumber       = 3,
  kLastSequence         = 4,
  kCompactPointer       = 5,
  kDeletedFile          = 6,
  kNewFile              = 7,
  // 8 was used for large value refs
  kPrevLogNumber        = 9
};
    
    namespace leveldb {
    }
    
    Status WriteBatchInternal::InsertInto(const WriteBatch* b,
                                      MemTable* memtable) {
  MemTableInserter inserter;
  inserter.sequence_ = WriteBatchInternal::Sequence(b);
  inserter.mem_ = memtable;
  return b->Iterate(&inserter);
}
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_CONCAT_LAYER_HPP_

    
    #include 'caffe/layers/lrn_layer.hpp'
    
    /**
 * @brief During training only, sets a random portion of @f$x@f$ to 0, adjusting
 *        the rest of the vector magnitude accordingly.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class DropoutLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides DropoutParameter dropout_param,
   *     with DropoutLayer options:
   *   - dropout_ratio (\b optional, default 0.5).
   *     Sets the probability @f$ p @f$ that any given unit is dropped.
   */
  explicit DropoutLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      /**
   * @brief Computes the error gradient w.r.t. the forwarded inputs.
   *
   * @param top output Blob vector (length 1+), providing the error gradient with
   *        respect to the outputs
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2+), into which the top error
   *        gradient is copied
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #if 0
    
    #include <iosfwd>
#include <vector>
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-string.h'
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT1.
// Don't use this in your code.
#define GTEST_PRED_FORMAT1_(pred_format, v1, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, v1), \
                on_failure)
    
    // Types of SetUpTestCase() and TearDownTestCase() functions.
typedef void (*SetUpTestCaseFunc)();
typedef void (*TearDownTestCaseFunc)();
    
    // The specialization for size 4.
template <>
class TypeWithSize<4> {
 public:
  // unsigned int has size 4 in both gcc and MSVC.
  //
  // As base/basictypes.h doesn't compile on Windows, we cannot use
  // uint32, uint64, and etc here.
  typedef int Int;
  typedef unsigned int UInt;
};
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
                // Verify that there's indeed a single layout
            for (const auto& iter : inputMatrices)
            {
                assert(iter.second.pMBLayout == pMBLayout);
                // TODO: This must be a runtime check, not an assert().
                UNUSED(iter);
            }
    
    // sets m_learningRateMultiplier in all LearnableParameters feeding into the passed rootNode
// Called from MEL
void ComputationNetwork::SetLearnableNodesBelowLearningRateMultiplier(const float learningRateMultiplier, const ComputationNodeBasePtr& rootNode)
{
    // find nodes from all available nodes
    if (rootNode == nullptr)
    {
        for (auto nodeIter = m_nameToNodeMap.begin(); nodeIter != m_nameToNodeMap.end(); nodeIter++)
        {
            ComputationNodeBasePtr node = nodeIter->second;
            if (node->OperationName() == OperationNameOf(LearnableParameter))
                node->SetLearningRateMultiplier(learningRateMultiplier);
        }
    }
    else
    {
        // for calculating a specific node
        if (!EvalOrderExists(rootNode))
            const_cast<ComputationNetwork&>(*this).FormEvalOrder(rootNode);
    }
    }
    
        // SaveData - save data in the file/files
    // recordStart - Starting record number
    // matricies - a map of section name (section:subsection) to data pointer. Data sepcifications from config file will be used to determine where and how to save data
    // numRecords - number of records we are saving, can be zero if not applicable
    // datasetSize - Size of the dataset
    // byteVariableSized - for variable sized data, size of current block to be written, zero when not used, or ignored if not variable sized data
    virtual bool SaveData(size_t recordStart, const std::map<std::wstring, void*, nocase_compare>& matrices, size_t numRecords, size_t datasetSize, size_t byteVariableSized = 0);
    
    /*static*/ class ProgressTracing
{
    bool m_enabled;
    bool m_tracingFlag;
    bool m_timestampFlag;        // TODO: What does this do? TODO: camelCase
    size_t m_totalNumberOfSteps; // total number of epochs in entire training run
    size_t m_currentStepOffset;  // current offset
    Timer m_progressTracingTimer;
    }
    
    
    {  template <typename Tag, typename Tag::type M>
  struct Rob {
    friend typename Tag::type fieldPtr(Tag) {
      return M;
    }
  };
};
    
      template <typename Rep, typename Period>
  FOLLY_ALWAYS_INLINE bool try_enqueue_for(
      T&& v,
      const std::chrono::duration<Rep, Period>& duration) {
    return tryEnqueueForImpl(std::move(v), duration);
  }
    
      /// Reads CacheLocality information from a tree structured like
  /// the sysfs filesystem.  The provided function will be evaluated
  /// for each sysfs file that needs to be queried.  The function
  /// should return a string containing the first line of the file
  /// (not including the newline), or an empty string if the file does
  /// not exist.  The function will be called with paths of the form
  /// /sys/devices/system/cpu/cpu*/cache/index*/{type,shared_cpu_list} .
  /// Throws an exception if no caches can be parsed at all.
  static CacheLocality readFromSysfsTree(
      const std::function<std::string(std::string)>& mapping);
    
    namespace detail {
    }
    
    // At present, works for lambdas or plain old functions, but can be
// extended.  The comparison deliberately strips cv-qualifieers and
// reference, leaving that choice up to the caller.
template <typename Fn, typename... Args>
struct HasArgumentTypes
    : boost::mpl::template equal<
          typename boost::mpl::template transform<
              typename boost::mpl::template transform<
                  ArgumentTypes<Fn>,
                  typename std::template remove_reference<boost::mpl::_1>>::
                  type,
              typename std::template remove_cv<boost::mpl::_1>>::type,
          boost::mpl::vector<Args...>>::type {};
template <typename... Args>
using EnableForArgTypes =
    typename std::enable_if<HasArgumentTypes<Args...>::value, void>::type;
    
      // Sync + corrupt => no change
  ASSERT_OK(writable_file->Fsync());
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    
    {} // namespace rocksdb

    
    
    {  for (size_t l = 0; l < c->num_input_levels(); l++) {
    if (c->num_input_files(l) != 0) {
      if (l == 0 && c->start_level() == 0) {
        for (size_t i = 0; i < c->num_input_files(0); i++) {
          input_file.f = c->input(0, i);
          input_file.level = 0;
          input_file.index = i;
          smallest_key_priority_q.push(std::move(input_file));
        }
      } else {
        input_file.f = c->input(l, 0);
        input_file.level = l;
        input_file.index = 0;
        smallest_key_priority_q.push(std::move(input_file));
      }
    }
  }
  return smallest_key_priority_q;
}
    
      for (int d = 0; d < kNumDBs; ++d) {
    ASSERT_OK(DestroyDB(dbname_ + ToString(d), options));
    DB* db;
    std::vector<ColumnFamilyHandle*> handles;
    ASSERT_OK(DB::Open(options, dbname_ + ToString(d), &db));
    for (size_t c = 0; c < cf_names.size(); ++c) {
      ColumnFamilyHandle* handle;
      db->CreateColumnFamily(cf_opts, cf_names[c], &handle);
      handles.push_back(handle);
    }
    }
    
    
    {        // We cannot use the key address in the block directly because
        // we have a global_seqno_ that will overwrite the encoded one.
        key_.OwnKey();
        key_pinned_ = false;
      }
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    allowGlobalSeqNo
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_IngestExternalFileOptions_allowGlobalSeqNo(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  return static_cast<jboolean>(options->allow_global_seqno);
}
    
      void CheckFileContents(const std::vector<std::string>& keys,
      const std::vector<std::string>& values,
      const std::vector<uint64_t>& expected_locations,
      std::string expected_unused_bucket, uint64_t expected_table_size,
      uint32_t expected_num_hash_func, bool expected_is_last_level,
      uint32_t expected_cuckoo_block_size = 1) {
    // Read file
    unique_ptr<RandomAccessFile> read_file;
    ASSERT_OK(env_->NewRandomAccessFile(fname, &read_file, env_options_));
    uint64_t read_file_size;
    ASSERT_OK(env_->GetFileSize(fname, &read_file_size));
    }
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        // Render command lists
    for(int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;
        const int nVert = cmd_list->VtxBuffer.Size;
        CIwFVec2* pVertStream = IW_GX_ALLOC(CIwFVec2, nVert);
        CIwFVec2* pUVStream = IW_GX_ALLOC(CIwFVec2, nVert);
        CIwColour* pColStream = IW_GX_ALLOC(CIwColour, nVert);
    }
    
        // Hide OS mouse cursor if ImGui is drawing it
    glfwSetInputMode(g_Window, GLFW_CURSOR, io.MouseDrawCursor ? GLFW_CURSOR_HIDDEN : GLFW_CURSOR_NORMAL);
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfwGL3_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfwGL3_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfwGL3_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfwGL3_CharCallback(GLFWwindow* window, unsigned int c);

    
    
    {    return true;
}
    
    
    {    // Start the frame. This call will update the io.WantCaptureMouse, io.WantCaptureKeyboard flag that you can use to dispatch inputs (or not) to your application.
    ImGui::NewFrame();
}

    
    // Timer management class
class ThreadTimer {
 public:
  ThreadTimer() = default;
    }
    
    // Parses a bool/Int32/string from the environment variable
// corresponding to the given Google Test flag.
bool BoolFromEnv(const char* flag, bool default_val);
int32_t Int32FromEnv(const char* flag, int32_t default_val);
double DoubleFromEnv(const char* flag, double default_val);
const char* StringFromEnv(const char* flag, const char* default_val);
    
      if (!result.report_label.empty()) {
    printer(Out, COLOR_DEFAULT, ' %s', result.report_label.c_str());
  }
    
        // print the header
    for (auto B = elements.begin(); B != elements.end();) {
      Out << *B++;
      if (B != elements.end()) Out << ',';
    }
    for (auto B = user_counter_names_.begin(); B != user_counter_names_.end();) {
      Out << ',\'' << *B++ << '\'';
    }
    Out << '\n';