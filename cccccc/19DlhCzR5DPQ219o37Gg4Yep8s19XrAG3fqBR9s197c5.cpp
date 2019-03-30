
        
        namespace c10d {
namespace test {
    }
    }
    
    OPERATOR_SCHEMA(FindDuplicateElements)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
The *FindDuplicateElements* op takes a single 1-D tensor *data* as input and returns a single 1-D output tensor *indices*. The output tensor contains the indices of the duplicate elements of the input, excluding the first occurrences. If all elements of *data* are unique, *indices* will be empty.
    
    #include 'caffe2/utils/math.h'
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
    namespace caffe2 {
    }
    
    namespace grpc {
    }
    
    #include 'absl/strings/string_view.h'
#include 'absl/time/time.h'
#include 'src/cpp/ext/filters/census/channel_filter.h'
#include 'src/cpp/ext/filters/census/context.h'
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    #include <grpcpp/grpcpp.h>
#include 'src/proto/grpc/reflection/v1alpha/reflection.grpc.pb.h'
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
bool ParseFileName(const std::string& filename,
                   uint64_t* number,
                   FileType* type);
    
        ArchiveFile(src);
    if (counter == 0) {
      builder->Abandon();  // Nothing to save
    } else {
      s = builder->Finish();
      if (s.ok()) {
        t.meta.file_size = builder->FileSize();
      }
    }
    delete builder;
    builder = nullptr;
    
    class SnapshotList {
 public:
  SnapshotList() : head_(0) {
    head_.prev_ = &head_;
    head_.next_ = &head_;
  }
    }
    
    TableCache::~TableCache() {
  delete cache_;
}
    
    class Env;
    
      while (msg == nullptr && GetVarint32(&input, &tag)) {
    switch (tag) {
      case kComparator:
        if (GetLengthPrefixedSlice(&input, &str)) {
          comparator_ = str.ToString();
          has_comparator_ = true;
        } else {
          msg = 'comparator name';
        }
        break;
    }
    }
    
        template <typename ElementType>
    void Value::CopyVariableValueToCSCSparse(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<ElementType>& nonZeroValues, size_t& numNonZeroValues)
    {
        // All sanity check has been done in ValidateSparseCSCAndGetIndexSizes().
        NDArrayViewPtr cpuView;
        if (Device().Type() == DeviceKind::GPU)
        {
            // Todo: GPUSparseMatrix to CPUSparseMatrix is not implemented in matrix, as a workaround the dense matrix is used as intermediate presentation.
            // However, it is possible that data value very close to 0 could treated as 0 after transformation between dense and sparse.
            auto cpuDenseView = MakeSharedObject<NDArrayView>(GetDataType(), StorageFormat::Dense, Shape(), DeviceDescriptor::CPUDevice());
            cpuDenseView->CopyFrom(*Data());
            cpuView = MakeSharedObject<NDArrayView>(GetDataType(), GetStorageFormat(), Shape(), DeviceDescriptor::CPUDevice());
            cpuView->CopyFrom(*cpuDenseView);
        }
        else
            cpuView = Data();
    }
    
    namespace CNTK
{
    class PackedValue final : public Value
    {
        template <typename T, typename ...CtorArgTypes>
        friend inline std::shared_ptr<T> MakeSharedObject(CtorArgTypes&& ...ctorArgs);
    }
    }
    
                if (m_varKind == VariableKind::Input)
            {
                for (auto dim : m_shape.Dimensions())
                {
                    if (dim == 0)
                        InvalidArgument('Variable '%S' has invalid shape '%S'.', AsString().c_str(), m_shape.AsString().c_str());
                }
            }
    
    public:
    CrossProcessMutex(const std::string& name)
        : m_handle(NULL),
          m_name('Global\\' + name)
    {
    }
    
    ScriptableObjects::ConfigurableRuntimeTypeRegister::Add<CloneFunctionConfigLambda> registerCloneFunctionConfigLambda(L'CloneFunctionConfigLambda');
    
    
    {                    if (!memAllocInfoVec.empty())
                    {
                        // since we assign from highest memory to lowest, every memory that has been allocated can accommodate the 
                        // current memory request, unless there is a conflict (overlap) 
                        auto iter = memAllocInfoVec.begin();
                        while (iter != memAllocInfoVec.end() && CheckOverlap(make_pair(memInfo.allocStep, memInfo.releaseStep), iter->occupancy))
                            iter++;
                        if (iter == memAllocInfoVec.end())
                        {
                            // no current memory can be assigned, need to create a new one 
                            vector<pair<int, int>> occ;
                            occ.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                            MemAllocInfo ma(memoryCounter, memInfo.matrixSize, occ);
                            // insert in the front of the vector to maintain sorted order 
                            memAllocInfoVec.insert(memAllocInfoVec.begin(), ma);
                            memInfo.SetMemoryId(memoryCounter);
                            memoryCounter++;
                        }
                        else
                        {
                            iter->occupancy.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                            memInfo.SetMemoryId(iter->memoryId);
                        }
                    }
                    else
                    {
                        vector<pair<int, int>> occ;
                        occ.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                        MemAllocInfo ma(memoryCounter, memInfo.matrixSize, occ);
                        memAllocInfoVec.push_back(ma);
                        memInfo.SetMemoryId(memoryCounter);
                        memoryCounter++;
                    }
                }
    
    //////////////////////////////////////////////////////////////////////
    
    void Assembler::patchAbsolute(CodeAddress jmp, CodeAddress dest) {
  // Initialize code block cb pointing to li64
  HPHP::CodeBlock cb;
  cb.init(jmp, Assembler::kLimmLen, 'patched bctr');
  Assembler a{ cb };
  a.limmediate(reg::r12, ssize_t(dest), ImmType::TocOnly, true);
}
    
    
    {}
    
      if (comma != data) {
    // we have meta
    ssize_t meta_len = comma - data;
    data_len -= meta_len;
    char* semi = (char*)memchr(data, ';', meta_len);
    char* slash = (char*)memchr(data, '/', meta_len);
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {}

    
    /*
 * If the given AtomicHashMap has more than one submap allocated, log a perf
 * warning with its name.
 *
 * A single unique done flag should exist for each map being checked, to avoid
 * logging more than once (process, map) pair.
 */
template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done);
    
    
    {private:
  bool closeImpl();
};
    
    #include 'imgui.h'
#include 'imgui_impl_glfw.h'
#include 'imgui_impl_opengl3.h'
#include <stdio.h>
    
    #include 'imgui.h'
#include 'imgui_impl_marmalade.h'
#include <stdio.h>
    
            // If you are using this code with non-legacy OpenGL header/contexts (which you should not, prefer using imgui_impl_opengl3.cpp!!), 
        // you may need to backup/reset/restore current shader using the commented lines below.
        //GLint last_program; 
        //glGetIntegerv(GL_CURRENT_PROGRAM, &last_program);
        //glUseProgram(0);
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        //glUseProgram(last_program);
    
    
    {        // Setup the debug report callback
        VkDebugReportCallbackCreateInfoEXT debug_report_ci = {};
        debug_report_ci.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
        debug_report_ci.flags = VK_DEBUG_REPORT_ERROR_BIT_EXT | VK_DEBUG_REPORT_WARNING_BIT_EXT | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT;
        debug_report_ci.pfnCallback = debug_report;
        debug_report_ci.pUserData = NULL;
        err = vkCreateDebugReportCallbackEXT(g_Instance, &debug_report_ci, g_Allocator, &g_DebugReport);
        check_vk_result(err);
#else
        // Create Vulkan Instance without any debug feature
        err = vkCreateInstance(&create_info, g_Allocator, &g_Instance);
        check_vk_result(err);
#endif
    }
    
    // About Desktop OpenGL function loaders:
//  Modern desktop OpenGL doesn't have a standard portable header file to load OpenGL function pointers.
//  Helper libraries are often used for this purpose! Here we are supporting a few common ones (gl3w, glew, glad).
//  You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
    // Chain GLFW callbacks: our callbacks will call the user's previously installed callbacks, if any.
static GLFWmousebuttonfun   g_PrevUserCallbackMousebutton = NULL;
static GLFWscrollfun        g_PrevUserCallbackScroll = NULL;
static GLFWkeyfun           g_PrevUserCallbackKey = NULL;
static GLFWcharfun          g_PrevUserCallbackChar = NULL;
    
    #endif // D_DHT_REPLACE_NODE_TASK_H

    
      DHTTaskQueue* taskQueue_;
    
    namespace {
void readBytes(BufferedFile& fp, unsigned char* buf, size_t buflen,
               size_t readlen)
{
  assert(readlen <= buflen);
  READ_CHECK(fp, buf, readlen);
}
} // namespace
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
      virtual void
  addPeriodicTask2(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
    bool DNSCache::CacheEntry::operator==(const CacheEntry& e) const
{
  return hostname_ == e.hostname_ && port_ == e.port_;
}
    
        // change element with key 'the bad'
    object.at('the bad') = 'il cattivo';