
        
          /// Indicates whether the diagnostics produced during compilation should be
  /// checked against expected diagnostics, indicated by markers in the
  /// input source file.
  enum {
    NoVerify,
    Verify,
    VerifyAndApplyFixes
  } VerifyMode = NoVerify;
    
    
    {
    {} // end namespace index
} // end namespace swift
    
      ~IndexTrieNode() {
    for (auto *N : Children)
      delete N;
  }
    
    /// This represents one part of a #if block.  If the condition field is
/// non-null, then this represents a #if or a #elseif, otherwise it represents
/// an #else block.
struct IfConfigClause {
  /// The location of the #if, #elseif, or #else keyword.
  SourceLoc Loc;
  
  /// The condition guarding this #if or #elseif block.  If this is null, this
  /// is a #else clause.
  Expr *Cond;
  
  /// Elements inside the clause
  ArrayRef<ASTNode> Elements;
    }
    
      bool thrown = false;
  try {
    thpp::IntTensor &a = dynamic_cast<thpp::IntTensor&>(*tensor);
  } catch(std::bad_cast &e) {
    thrown = true;
  }
  assert(thrown);
    
        SECTION(
        'operator[key] returns the correct modules when given a valid key') {
      REQUIRE(&cursor['0'] == &model[0]);
      REQUIRE(&cursor['1'] == &model[1]);
      REQUIRE(&cursor['2'] == &model[2]);
    }
    
      /// Helper function to construct a vector of zero-d out variables, each the
  /// same shape as the variable at the corresponding index in the input
  /// container.
  template <typename ParameterContainer>
  std::vector<Tensor> zero_buffers_like(const ParameterContainer& parameters) {
    std::vector<Tensor> result;
    result.reserve(parameters.size());
    for (auto& parameter : parameters) {
      result.push_back(torch::zeros_like(parameter));
    }
    return result;
  }
    
    
    {
    {    if (totalSize + self->storageOffset > 0) {
      if (!self->storage)
        self->storage = THDStorage_(new)();
      if (totalSize + self->storageOffset > self->storage->size)
        THDStorage_(resize)(self->storage, totalSize+self->storageOffset);
    }
  } else {
    self->nDimension = 0;
  }
}
    
    #ifdef USE_CUDA
std::vector <THCStream*> THPUtils_PySequence_to_THCStreamList(PyObject *obj) {
  if (!PySequence_Check(obj)) {
    throw std::runtime_error('Expected a sequence in THPUtils_PySequence_to_THCStreamList');
  }
  THPObjectPtr seq = THPObjectPtr(PySequence_Fast(obj, NULL));
  if (seq.get() == NULL) {
    throw std::runtime_error('expected PySequence, but got ' + std::string(THPUtils_typename(obj)));
  }
    }
    
        // Extract max keypoints and probabilities from heatmaps
    for (int j = 0; j < keypoint_count; j++) {
      const int heatmap_index = k * keypoint_count + j;
      const int maxIndex = maxIndices[heatmap_index];
      const float maxScore = maxScores[heatmap_index];
      const int maxY = maxIndex / heatmap_size;
      const int maxX = maxIndex - heatmap_size * maxY;
    }
    
      EMatXf result_gt(5, 5);
  result_gt << 252.668, 107.367, 91.4381, 276.165, 0.0, 217.686, 19.3551,
      147.631, 205.397, 55.0, 187.363, 214.185, 19.865, 31.0368, -80.0, 270.234,
      210.513, 235.963, 130.163, -50.0, 36.1956, 140.863, 62.2665, 259.645, 0.5;
    
    using object_id_type = uint64_t;
    
    void sendValueToMaster(int64_t value) {
  IntScalar scalar(value);
  dataChannel->send(scalar, 0);
}
    
    
    {  if (flags & XhpTrace) {
    s_profiler_factory->start(ProfilerKind::Trace, flags);
  } else if (flags & Memo) {
    flags = 0;  /* flags are not used by MemoProfiler::MemoProfiler */
    s_profiler_factory->start(ProfilerKind::Memo, flags);
  } else if (flags & External) {
    for (ArrayIter iter(args); iter; ++iter) {
      if (iter.first().toInt32() == 0) {
         flags = iter.second().toInt32();
      }
    }
    s_profiler_factory->start(ProfilerKind::External, flags);
  } else {
    s_profiler_factory->start(ProfilerKind::Hierarchical, flags);
  }
}
    
    #define PRINT_MSG(...)                          \
  switch (m_report) {                           \
    case Log:                                   \
      Logger::Info(__VA_ARGS__);                \
      break;                                    \
    case Stderr:                                \
      fprintf(stderr, __VA_ARGS__);             \
      break;                                    \
    case Trace:                                 \
      Trace::traceRelease(__VA_ARGS__);         \
      break;                                    \
    default: not_reached();                     \
  }
    
    #else // USE_GCC_FAST_TLS
    
      /**
   * Get results of a task. This is blocking until task is finished or times
   * out. The status code is set to -1 in the event of a timeout.
   */
  static String TaskResult(const Resource& task,
                           Array &headers,
                           int &code,
                           int64_t timeout_ms);
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    #include 'hphp/runtime/base/exceptions.h'
#include 'hphp/system/systemlib.h'
    
    /*
 * DecRef a string s, calling release if its reference count goes to
 * zero.
 */
void decRefStr(StringData* s);
    
    struct StringDataHashCompare {
  bool equal(const StringData *s1, const StringData *s2) const {
    assertx(s1 && s2);
    return s1->same(s2);
  }
  size_t hash(const StringData *s) const {
    assertx(s);
    return s->hash();
  }
};
    
    namespace HPHP {
    }
    
    /*
 * Functions for differentiating global litstrId's from unit-local Id's.
 */
bool isGlobalLitstrId(Id id);
Id encodeGlobalLitstrId(Id id);
Id decodeGlobalLitstrId(Id id);
    
    #if USE_JEMALLOC_EXTENT_HOOKS
    
    bool set_hugetlbfs_path(const char* path) {
  if (get_hugepage_size(path) != size1g) return false;
  size_t len = strlen(path);
  if (len + 8 >= sizeof(s_hugePath)) return false;
  memcpy(s_hugePath, path, len);
  *reinterpret_cast<int*>(s_hugePath + len) = 0;
  if (s_hugePath[len - 1] != '/') {
    s_hugePath[len] = '/';
  }
  return true;
}
    
    const Func* lookupUnknownFunc(const StringData* name) {
  return loadUnknownFuncHelper(name, raise_resolve_undefined);
}
    
    namespace leveldb {
    }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    static int NextLength(int length) {
  if (length < 10) {
    length += 1;
  } else if (length < 100) {
    length += 10;
  } else if (length < 1000) {
    length += 100;
  } else {
    length += 1000;
  }
  return length;
}
    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
}
    
    #endif  // STORAGE_LEVELDB_UTIL_RANDOM_H_

    
    static const int kValueSize = 200 * 1024;
static const int kTotalSize = 100 * 1024 * 1024;
static const int kCount = kTotalSize / kValueSize;
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
    inline void RowSet::Clear() {
  rows_.clear(); size_ = 0;
}
    
    TEST(Metric, RMSE) {
  xgboost::Metric * metric = xgboost::Metric::Create('rmse');
  ASSERT_STREQ(metric->Name(), 'rmse');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.6403f, 0.001f);
}
    
        ImVec2 max_glyph_size(1.0f, 1.0f);
    
    #include <s3eClipboard.h>
#include <s3ePointer.h>
#include <s3eKeyboard.h>
#include <IwTexture.h>
#include <IwGx.h>
    
        // Per Spec Format and View Format are expected to be the same unless VK_IMAGE_CREATE_MUTABLE_BIT was set at image creation
    // Assuming that the default behavior is without setting this bit, there is no need for separate Swapchain image and image view format
    // Additionally several new color spaces were introduced with Vulkan Spec v1.0.40,
    // hence we must make sure that a format with the mostly available color space, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR, is found and used.
    uint32_t avail_count;
    vkGetPhysicalDeviceSurfaceFormatsKHR(physical_device, surface, &avail_count, NULL);
    ImVector<VkSurfaceFormatKHR> avail_format;
    avail_format.resize((int)avail_count);
    vkGetPhysicalDeviceSurfaceFormatsKHR(physical_device, surface, &avail_count, avail_format.Data);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }
    }
    
    #include 'imgui.h'
#include 'imgui_impl_win32.h'
#include 'imgui_impl_dx11.h'
#include <d3d11.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
      virtual void onAbort();
    
    AbstractOptionHandler::AbstractOptionHandler(PrefPtr pref,
                                             const char* description,
                                             const std::string& defaultValue,
                                             ARG_TYPE argType, char shortName)
    : pref_(pref),
      description_(description),
      defaultValue_(defaultValue),
      argType_(argType),
      shortName_(shortName),
      tags_(0),
      flags_(0)
{
}
    
    #endif // D_LIBSSL_TLS_CONTEXT_H

    
    class AsyncNameResolverMan {
public:
  AsyncNameResolverMan();
  // Destructor does not call disableNameResolverCheck(). Application
  // must call it before the destruction of this object.
  ~AsyncNameResolverMan();
  // Enable IPv4 address lookup. default: true
  void setIPv4(bool ipv4) { ipv4_ = ipv4; }
  // Enable IPv6 address lookup. default: true
  void setIPv6(bool ipv6) { ipv6_ = ipv6; }
  // Returns true if asynchronous name resolution has been started.
  bool started() const;
  // Starts asynchronous name resolution.
  void startAsync(const std::string& hostname, DownloadEngine* e,
                  Command* command);
  // Appends resolved addresses to |res|.
  void getResolvedAddress(std::vector<std::string>& res) const;
  // Adds resolvers to DownloadEngine to check event notification.
  void setNameResolverCheck(DownloadEngine* e, Command* command);
  // Removes resolvers from DownloadEngine.
  void disableNameResolverCheck(DownloadEngine* e, Command* command);
  // Returns true if any of resolvers are added in DownloadEngine.
  bool resolverChecked() const { return resolverCheck_; }
  // Returns status value: 0 for inprogress, 1 for success and -1 for
  // failure.
  int getStatus() const;
  // Returns last error string
  const std::string& getLastError() const;
  // Resets state. Also removes resolvers from DownloadEngine.
  void reset(DownloadEngine* e, Command* command);
    }
    
    #include 'modules/planning/tasks/traffic_decider/traffic_decider.h'
    
    bool ContinuousToDiscrete(const Eigen::MatrixXd &m_a,
                          const Eigen::MatrixXd &m_b,
                          const Eigen::MatrixXd &m_c,
                          const Eigen::MatrixXd &m_d, const double ts,
                          Eigen::MatrixXd *ptr_a_d, Eigen::MatrixXd *ptr_b_d,
                          Eigen::MatrixXd *ptr_c_d, Eigen::MatrixXd *ptr_d_d) {
  if (ts <= 0.0) {
    AERROR << 'ContinuousToDiscrete : ts is less than or equal to zero';
    return false;
  }
    }
    
    #include <array>
#include <memory>
#include <vector>
    
    
    {  const Vec2d direction_vec = Vec2d::CreateUnitVec2d(heading);
  double min_proj = std::numeric_limits<double>::infinity();
  double max_proj = -std::numeric_limits<double>::infinity();
  for (const auto &pt : points_) {
    const double proj = pt.InnerProd(direction_vec);
    if (proj < min_proj) {
      min_proj = proj;
      *first = pt;
    }
    if (proj > max_proj) {
      max_proj = proj;
      *last = pt;
    }
  }
}
    
    #include 'modules/dreamview/backend/handlers/image_handler.h'
#include 'modules/dreamview/backend/handlers/websocket_handler.h'
#include 'modules/dreamview/backend/hmi/hmi.h'
#include 'modules/dreamview/backend/map/map_service.h'
#include 'modules/dreamview/backend/point_cloud/point_cloud_updater.h'
#include 'modules/dreamview/backend/sim_control/sim_control.h'
#include 'modules/dreamview/backend/simulation_world/simulation_world_updater.h'
    
    #include 'modules/common/util/file.h'
#include 'modules/perception/common/perception_gflags.h'
#include 'modules/perception/traffic_light/recognizer/classify.h'
    
    #include 'modules/common/util/file.h'
#include 'modules/perception/common/perception_gflags.h'
#include 'modules/perception/traffic_light/base/utils.h'
#include 'modules/perception/traffic_light/rectify/cropbox.h'
#include 'modules/perception/traffic_light/rectify/detection.h'
#include 'modules/perception/traffic_light/rectify/select.h'
    
    namespace apollo {
namespace perception {
namespace traffic_light {
    }
    }
    }
    
    template<typename T, typename RefType>
auto dynamic_ref_cast(const RefType& ref) ->
enable_if_t<IsPlainJniReference<T>(), decltype(static_ref_cast<T>(ref))>
{
  if (! ref) {
    return decltype(static_ref_cast<T>(ref))();
  }
    }
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
    // Creates a strong reference from a raw pointer, assuming that is already
// referenced from some other RefPtr and that it is non-null. This should be
// used sparingly.
template <typename T>
static inline RefPtr<T> assumeAlreadyReffed(T* ptr) {
  return RefPtr<T>::assumeAlreadyReffed(ptr);
}