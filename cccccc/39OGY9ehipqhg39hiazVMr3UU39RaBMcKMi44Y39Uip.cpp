
        
        void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Compute the index of the @f$ K @f$ max values for each datum across
 *        all dimensions @f$ (C \times H \times W) @f$.
 *
 * Intended for use after a classification layer to produce a prediction.
 * If parameter out_max_val is set to true, output is a vector of pairs
 * (max_ind, max_val) for each image. The axis parameter specifies an axis
 * along which to maximise.
 *
 * NOTE: does not implement Backwards operation.
 */
template <typename Dtype>
class ArgMaxLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides ArgMaxParameter argmax_param,
   *     with ArgMaxLayer options:
   *   - top_k (\b optional uint, default 1).
   *     the number @f$ K @f$ of maximal items to output.
   *   - out_max_val (\b optional bool, default false).
   *     if set, output a vector of pairs (max_ind, max_val) unless axis is set then
   *     output max_val along the specified axis.
   *   - axis (\b optional int).
   *     if set, maximise along the specified axis else maximise the flattened
   *     trailing dimensions for each index of the first / num dimension.
   */
  explicit ArgMaxLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
      virtual inline const char* type() const { return 'Convolution'; }
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    #endif // __cocos2dx_builder_h__

    
    bool js_cocos2dx_navmesh_NavMeshAgent_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMeshAgent_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMeshAgent(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMeshAgent_setMaxSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_syncToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_completeOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getSeparationWeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setAutoTraverseOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getCurrentVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_syncToAgent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_isOnOffMeshLink(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setSeparationWeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_pause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setAutoOrientation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getMaxSpeed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getCurrentOffMeshLinkData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_resume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setMaxAcceleration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setOrientationRefAxes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getMaxAcceleration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getObstacleAvoidanceType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getVelocity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_setObstacleAvoidanceType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_getNavMeshAgentComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshAgent_NavMeshAgent(JSContext *cx, uint32_t argc, jsval *vp);
    
    bool js_cocos2dx_physics3d_Physics3DConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DConstraint_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setBreakingImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBreakingImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBodyA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_isEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getOverrideNumSolverIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBodyB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setOverrideNumSolverIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getConstraintType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getbtContraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    int register_all_cocos2dx_cocosbuilder(lua_State* tolua_S);
    
    
    
    
    
    
    
    void Test::LaunchBomb()
{
	b2Vec2 p(RandomFloat(-15.0f, 15.0f), 30.0f);
	b2Vec2 v = -5.0f * p;
	LaunchBomb(p, v);
}
    
    /// Random floating point number in range [lo, hi]
inline float32 RandomFloat(float32 lo, float32 hi)
{
	float32 r = (float32)(std::rand() & (RAND_LIMIT));
	r /= RAND_LIMIT;
	r = (hi - lo) * r + lo;
	return r;
}
    
    	static Test* Create()
	{
		return new ApplyForce;
	}
    
    	b2Body* m_body1;
	b2Vec2 m_velocity;
	float32 m_angularVelocity;
	b2PolygonShape m_shape1;
	b2PolygonShape m_shape2;
	b2Fixture* m_piece1;
	b2Fixture* m_piece2;
    
    /**
 * Get the path to the current executable.
 *
 * Note that this is not reliable and not recommended in general; it may not be
 * implemented on your platform (in which case it will throw), the executable
 * might have been moved or replaced while running, and applications comprising
 * of multiple executables should use some form of configuration system to
 * find the other executables rather than relying on relative paths from one
 * to another.
 *
 * So this should only be used for tests, logging, or other innocuous purposes.
 */
path executable_path();
    
    namespace {
    }
    
      // Read and parse /proc/mounts
  std::vector<StringPiece> parts;
  std::vector<StringPiece> options;
    
    // Temporary file that is NOT kept open but is deleted on exit.
// Generate random-looking but reproduceable data.
class TemporaryFile {
 public:
  explicit TemporaryFile(size_t size);
  ~TemporaryFile();
    }
    
    void AsyncFileWriter::performIO(std::vector<std::string>* ioQueue) {
  // kNumIovecs controls the maximum number of strings we write at once in a
  // single writev() call.
  constexpr int kNumIovecs = 64;
  std::array<iovec, kNumIovecs> iovecs;
    }
    
    
    {StringPiece getGlogLevelName(LogLevel level) {
  if (level < LogLevel::INFO) {
    return 'VERBOSE';
  } else if (level < LogLevel::WARN) {
    return 'INFO';
  } else if (level < LogLevel::ERR) {
    return 'WARNING';
  } else if (level < LogLevel::CRITICAL) {
    return 'ERROR';
  }
  return 'CRITICAL';
}
} // namespace
    
    
    {  // Propagate the message up to our parent LogCategory.
  //
  // Maybe in the future it might be worth adding a flag to control if a
  // LogCategory should propagate messages to its parent or not.  (This would
  // be similar to log4j's 'additivity' flag.)
  // For now I don't have a strong use case for this.
  if (parent_) {
    parent_->processMessage(message);
  }
}
    
    namespace folly {
    }
    
    /**
 * Configuration for a LogCategory
 */
class LogCategoryConfig {
 public:
  explicit LogCategoryConfig(
      LogLevel level = LogLevel::WARNING,
      bool inheritParentLevel = true);
  LogCategoryConfig(
      LogLevel level,
      bool inheritParentLevel,
      std::vector<std::string> handlers);
    }
    
    namespace folly {
    }
    
    void ListFilesInDirRecursive(const std::string &Dir, long *Epoch,
                             std::vector<std::string> *V, bool TopDir);
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <cstdarg>
#include <cstdio>
#include <dirent.h>
#include <fstream>
#include <iterator>
#include <libgen.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
    
    
    {}  // namespace fuzzer
    
    struct FuzzingOptions {
  int Verbosity = 1;
  size_t MaxLen = 0;
  int UnitTimeoutSec = 300;
  int TimeoutExitCode = 77;
  int ErrorExitCode = 77;
  int MaxTotalTimeSec = 0;
  int RssLimitMb = 0;
  bool DoCrossOver = true;
  int MutateDepth = 5;
  bool UseCounters = false;
  bool UseIndirCalls = true;
  bool UseMemcmp = true;
  bool UseMemmem = true;
  bool UseCmp = false;
  bool UseValueProfile = false;
  bool Shrink = false;
  int ReloadIntervalSec = 1;
  bool ShuffleAtStartUp = true;
  bool PreferSmall = true;
  size_t MaxNumberOfRuns = -1L;
  int ReportSlowUnits = 10;
  bool OnlyASCII = false;
  std::string OutputCorpus;
  std::string ArtifactPrefix = './';
  std::string ExactArtifactPath;
  std::string ExitOnSrcPos;
  std::string ExitOnItem;
  bool SaveArtifacts = true;
  bool PrintNEW = true; // Print a status line when new units are found;
  bool OutputCSV = false;
  bool PrintNewCovPcs = false;
  bool PrintFinalStats = false;
  bool PrintCorpusStats = false;
  bool PrintCoverage = false;
  bool DumpCoverage = false;
  bool DetectLeaks = true;
  int  TraceMalloc = 0;
  bool HandleAbrt = false;
  bool HandleBus = false;
  bool HandleFpe = false;
  bool HandleIll = false;
  bool HandleInt = false;
  bool HandleSegv = false;
  bool HandleTerm = false;
};
    
    #ifndef LLVM_FUZZER_TRACE_PC
#define LLVM_FUZZER_TRACE_PC
    
    bool ToASCII(uint8_t *Data, size_t Size) {
  bool Changed = false;
  for (size_t i = 0; i < Size; i++) {
    uint8_t &X = Data[i];
    auto NewX = X;
    NewX &= 127;
    if (!isspace(NewX) && !isprint(NewX))
      NewX = ' ';
    Changed |= NewX != X;
    X = NewX;
  }
  return Changed;
}
    
    unsigned long GetPid();
    
    
    {} // namespace A2STR
    
    private:
  std::string userDefinedUser_;
  std::string userDefinedPassword_;
    
      std::chrono::seconds interval_;
  DownloadEngine* e_;
  Timer checkPoint_;
  int numNewConnection_; // the number of the connection to establish.
public:
  ActivePeerConnectionCommand(cuid_t cuid, RequestGroup* requestGroup,
                              DownloadEngine* e, std::chrono::seconds interval);
    
    AdaptiveFileAllocationIterator::~AdaptiveFileAllocationIterator() = default;
    
      virtual void allocateChunk() CXX11_OVERRIDE;
    
      AnnounceTier::AnnounceEvent getEvent() const;