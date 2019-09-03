
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Construct top-level tuple of infeed containing the data and the token. Use
  // a nullptr for the token, it should never be dereferenced.
  se::DeviceMemoryBase data_address =
      buffer_allocations.GetDeviceAddress(infeed_slices_.element({0}));
  void* infeed_addresses[] = {data_address.opaque(), nullptr};
  se::DeviceMemoryBase top_level_address =
      buffer_allocations.GetDeviceAddress(infeed_slices_.element({}));
  stream.ThenMemcpy(&top_level_address, infeed_addresses, 2 * sizeof(void*));
    
    // Thunk that zeroes out a given chunk of memory.
class MemzeroThunk : public Thunk {
 public:
  explicit MemzeroThunk(const BufferAllocation::Slice& dest,
                        const HloInstruction* hlo)
      : Thunk(Kind::kMemzero, hlo), dest_(dest) {}
    }
    
    
    {  const int64 replica_count_;
  const int64 element_count_;
  const BufferAllocation::Slice source_buffer_;
  const BufferAllocation::Slice destination_buffer_;
  std::unique_ptr<AuxData> aux_data_;
};
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_SEQUENTIAL_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_SEQUENTIAL_THUNK_H_
    
      llvm::DenseMap<ASTNode, ASTNode> RegionCondToParentMap;
    
      void *operator new(size_t Bytes) throw() = delete;
  void operator delete(void *Data) throw() = delete;
  void *operator new(size_t Bytes, void *Mem) throw() = delete;
  void *operator new(size_t Bytes, ASTContext &C,
                     unsigned Alignment = 8);
    
      llvm::DenseMap<AbstractFunctionDecl *, MethodInfo *> MethodInfos;
  llvm::SpecificBumpPtrAllocator<MethodInfo> MethodInfoAllocator;
    
    KNOWN_STDLIB_TYPE_DECL(OptionSet, NominalTypeDecl, 1)
    
    /// An ASTVisitor for generating SIL from top-level declarations in a module.
class LLVM_LIBRARY_VISIBILITY SILGenModule : public ASTVisitor<SILGenModule> {
public:
  /// The Module being constructed.
  SILModule &M;
  
  /// The type converter for the module.
  TypeConverter &Types;
  
  /// The Swift module we are visiting.
  ModuleDecl *SwiftModule;
  
  /// TopLevelSGF - The SILGenFunction used to visit top-level code, or null if
  /// the current source file is not a script source file.
  SILGenFunction /*nullable*/ *TopLevelSGF;
    }
    
    namespace swift {
namespace reflection {
    }
    }
    
    
    {  bool operator!=(const MetadataSourceRecordIterator &other) const {
    return !(*this == other);
  }
};
    
    /// Field types and flags as represented in a nominal type's field/case type
/// vector.
class FieldType {
  typedef uintptr_t int_type;
  // Type metadata is always at least pointer-aligned, so we get at least two
  // low bits to stash flags. We could use three low bits on 64-bit, and maybe
  // some high bits as well.
  enum : int_type {
    Indirect = 1,
    Weak = 2,
    }
    }
    
    /// A value for `SymbolNamespace` which indicates that this type came
/// from a C `typedef` that was imported as a distinct type instead
/// of a `typealias`.  This can happen for reasons like:
///
/// - the `typedef` was declared with the `swift_wrapper` attribute
/// - the `typedef` is a CF type
constexpr static const char CTypedef[] = 't';
    
      std::string mangleConstructorEntity(const ConstructorDecl *ctor,
                                      bool isAllocating, bool isCurried,
                                      SymbolKind SKind = SymbolKind::Default);
    
    class PrimarySpecificPaths {
public:
  /// The name of the main output file,
  /// that is, the .o file for this input (or a file specified by -o).
  /// If there is no such file, contains an empty string. If the output
  /// is to be written to stdout, contains '-'.
  std::string OutputFilename;
    }
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    #ifndef TESSERACT_CCUTIL_BOXREAD_H_
#define TESSERACT_CCUTIL_BOXREAD_H_
    
    // Computes the Otsu threshold(s) for the given image rectangle, making one
// for each channel. Each channel is always one byte per pixel.
// Returns an array of threshold values and an array of hi_values, such
// that a pixel value >threshold[channel] is considered foreground if
// hi_values[channel] is 0 or background if 1. A hi_value of -1 indicates
// that there is no apparent foreground. At least one hi_value will not be -1.
// Delete thresholds and hi_values with delete [] after use.
// The return value is the number of channels in the input image, being
// the size of the output thresholds and hi_values arrays.
int OtsuThreshold(Pix* src_pix, int left, int top, int width, int height,
                  int** thresholds, int** hi_values);
    
    
    {}  // namespace tesseract.
    
        class Rational
    {
    public:
        Rational() noexcept;
        Rational(Number const& n) noexcept;
        Rational(Number const& p, Number const& q) noexcept;
        Rational(int32_t i);
        Rational(uint32_t ui);
        Rational(uint64_t ui);
    }
    
    
    {                return localizationSettings;
            }
    
    /// <summary>
/// Invoked when the application is launched normally by the end user. Other entry points
/// will be used such as when the application is launched to open a specific file.
/// </summary>
/// <param name='e'>Details about the launch request and process.</param>
void App::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs ^ e)
{
#if _DEBUG
    // Show graphics profiling information while debugging.
    if (IsDebuggerPresent())
    {
        // Display the current frame rate counters
        DebugSettings->EnableFrameRateCounter = true;
    }
#endif
    }
    
    Size HorizontalNoOverflowStackPanel::MeasureOverride(Size availableSize)
{
    float maxHeight = 0;
    float width = 0;
    for (auto child : Children)
    {
        child->Measure(Size(numeric_limits<float>::infinity(), numeric_limits<float>::infinity()));
        maxHeight = max(maxHeight, child->DesiredSize.Height);
        width += child->DesiredSize.Width;
    }
    return Size(min(width, availableSize.Width), min(availableSize.Height, maxHeight));
}
    
            try
        {
            rshrat(&lhsRat, rhsRat, RATIONAL_BASE, RATIONAL_PRECISION);
            destroyrat(rhsRat);
        }
        catch (uint32_t error)
        {
            destroyrat(lhsRat);
            destroyrat(rhsRat);
            throw(error);
        }
    
            UCM::Category m_curCategory;
        UCM::Unit m_curFrom;
        UCM::Unit m_curTo;
        UCM::Command m_lastCommand;
    
    // Called after = with the result of the equation
// Responsible for clearing the top line of current running history display, as well as adding yet another element to
// history of equations
void CHistoryCollector::CompleteHistoryLine(wstring_view numStr)
{
    if (nullptr != m_pCalcDisplay)
    {
        m_pCalcDisplay->SetExpressionDisplay(
            std::make_shared<CalculatorVector<std::pair<std::wstring, int>>>(), std::make_shared<CalculatorVector<std::shared_ptr<IExpressionCommand>>>());
    }
    }
    
        PNUMBER Number::ToPNUMBER() const
    {
        PNUMBER ret = _createnum(static_cast<uint32_t>(this->Mantissa().size()) + 1);
        ret->sign = this->Sign();
        ret->exp = this->Exp();
        ret->cdigit = static_cast<int32_t>(this->Mantissa().size());
    }
    
            bool IsNegative()
        {
            return m_isNegative;
        }
        void IsNegative(bool isNegative)
        {
            m_isNegative = isNegative;
        }
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetHistoryClearedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::HistoryCleared, AutomationNotificationKind::ItemRemoved, AutomationNotificationProcessing::MostRecent);
}
    
    
    {        Platform::String ^ m_announcement;
        Platform::String ^ m_activityId;
        AutomationNotificationKind m_kind;
        AutomationNotificationProcessing m_processing;
    };
    
    #include <emscripten.h>
#include <stdio.h>
#include <setjmp.h>
    
    //------------------------------------------------------------------------
    
    //------------------------------------------------------------------------
// PageAttrs
//------------------------------------------------------------------------
    
    class PageLabelInfo {
public:
  PageLabelInfo(Object *tree, int numPages);
  ~PageLabelInfo();
  GBool labelToIndex(GooString *label, int *index);
  GBool indexToLabel(int index, GooString *label);
    }
    
      // Get scale
  double getScale() { return scale; }
    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
      void dropNode(const std::shared_ptr<DHTNode>& node);
    
      char zero[18];
  memset(zero, 0, sizeof(zero));
    
      void setNodes(const std::vector<std::shared_ptr<DHTNode>>& nodes);
    
    
    {  virtual bool finished() = 0;
};
    
    
    {} // namespace aria2

    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
    DHTTokenUpdateCommand::~DHTTokenUpdateCommand() = default;
    
    DNSCache::CacheEntry::~CacheEntry() = default;
    
    
    {  keppler_orbit->set_gnss_type(apollo::drivers::gnss::GnssType::GPS_SYS);
  keppler_orbit->set_gnss_time_type(
      apollo::drivers::gnss::GnssTimeType::GPS_TIME);
  keppler_orbit->set_sat_prn(gps_emph->prn);
  keppler_orbit->set_week_num(gps_emph->week);
  keppler_orbit->set_af0(gps_emph->af0);
  keppler_orbit->set_af1(gps_emph->af1);
  keppler_orbit->set_af2(gps_emph->af2);
  keppler_orbit->set_iode(gps_emph->iode1);
  keppler_orbit->set_deltan(gps_emph->delta_A);
  keppler_orbit->set_m0(gps_emph->M_0);
  keppler_orbit->set_e(gps_emph->ecc);
  keppler_orbit->set_roota(sqrt(gps_emph->A));
  keppler_orbit->set_toe(gps_emph->toe);
  keppler_orbit->set_toc(gps_emph->toc);
  keppler_orbit->set_cic(gps_emph->cic);
  keppler_orbit->set_crc(gps_emph->crc);
  keppler_orbit->set_cis(gps_emph->cis);
  keppler_orbit->set_crs(gps_emph->crs);
  keppler_orbit->set_cuc(gps_emph->cuc);
  keppler_orbit->set_cus(gps_emph->cus);
  keppler_orbit->set_omega0(gps_emph->omega_0);
  keppler_orbit->set_omega(gps_emph->omega);
  keppler_orbit->set_i0(gps_emph->I_0);
  keppler_orbit->set_omegadot(gps_emph->dot_omega);
  keppler_orbit->set_idot(gps_emph->dot_I);
  keppler_orbit->set_accuracy(
      static_cast<google::protobuf::uint32>(sqrt(gps_emph->ura)));
  keppler_orbit->set_health(gps_emph->health);
  keppler_orbit->set_tgd(gps_emph->tgd);
  keppler_orbit->set_iodc(gps_emph->iodc);
  return true;
}
    
    inline uint32_t crc32_block(const uint8_t* buffer, size_t length) {
  uint32_t word = 0;
  while (length--) {
    uint32_t t1 = (word >> 8) & 0xFFFFFF;
    uint32_t t2 = crc32_word((word ^ *buffer++) & 0xFF);
    word = t1 ^ t2;
  }
  return word;
}
    
      a.setStyleSheet(
      'QSplitter::handle {'
      '   background: lightGray;'
      '   border-radius: 2px; '
      '}');
    
    // @brief default initializer used in concurrent object pool
template <class T>
struct ObjectPoolDefaultInitializer {
  void operator()(T* t) const {}
};
// @brief concurrent object pool with dynamic size
template <class ObjectType, size_t N = kPoolDefaultSize,
          class Initializer = ObjectPoolDefaultInitializer<ObjectType>>
class ConcurrentObjectPool : public BaseObjectPool<ObjectType> {
 public:
  // using ObjectTypePtr = typename BaseObjectPool<ObjectType>::ObjectTypePtr;
  using BaseObjectPool<ObjectType>::capacity_;
  // @brief Only allow accessing from global instance
  static ConcurrentObjectPool& Instance() {
    static ConcurrentObjectPool pool(N);
    return pool;
  }
  // @brief overrided function to get object smart pointer
  std::shared_ptr<ObjectType> Get() override {
// TODO(All): remove conditional build
#ifndef PERCEPTION_BASE_DISABLE_POOL
    ObjectType* ptr = nullptr;
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (queue_.empty()) {
        Add(1 + kPoolDefaultExtendNum);
      }
      ptr = queue_.front();
      queue_.pop();
    }
    // For efficiency consideration, initialization should be invoked
    // after releasing the mutex
    kInitializer(ptr);
    return std::shared_ptr<ObjectType>(ptr, [&](ObjectType* obj_ptr) {
      std::lock_guard<std::mutex> lock(mutex_);
      queue_.push(obj_ptr);
    });
#else
    return std::shared_ptr<ObjectType>(new ObjectType);
#endif
  }
  // @brief overrided function to get batch of smart pointers
  // @params[IN] num: batch number
  // @params[OUT] data: vector container to store the pointers
  void BatchGet(size_t num,
                std::vector<std::shared_ptr<ObjectType>>* data) override {
#ifndef PERCEPTION_BASE_DISABLE_POOL
    std::vector<ObjectType*> buffer(num, nullptr);
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (queue_.size() < num) {
        Add(num - queue_.size() + kPoolDefaultExtendNum);
      }
      for (size_t i = 0; i < num; ++i) {
        buffer[i] = queue_.front();
        queue_.pop();
      }
    }
    // For efficiency consideration, initialization should be invoked
    // after releasing the mutex
    for (size_t i = 0; i < num; ++i) {
      kInitializer(buffer[i]);
      data->emplace_back(
          std::shared_ptr<ObjectType>(buffer[i], [&](ObjectType* obj_ptr) {
            std::lock_guard<std::mutex> lock(mutex_);
            queue_.push(obj_ptr);
          }));
    }
#else
    for (size_t i = 0; i < num; ++i) {
      data->emplace_back(std::shared_ptr<ObjectType>(new ObjectType));
    }
#endif
  }
  // @brief overrided function to get batch of smart pointers
  // @params[IN] num: batch number
  // @params[IN] is_front: indicating insert to front or back of the list
  // @params[OUT] data: list container to store the pointers
  void BatchGet(size_t num, bool is_front,
                std::list<std::shared_ptr<ObjectType>>* data) override {
#ifndef PERCEPTION_BASE_DISABLE_POOL
    std::vector<ObjectType*> buffer(num, nullptr);
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (queue_.size() < num) {
        Add(num - queue_.size() + kPoolDefaultExtendNum);
      }
      for (size_t i = 0; i < num; ++i) {
        buffer[i] = queue_.front();
        queue_.pop();
      }
    }
    // For efficiency consideration, initialization should be invoked
    // after releasing the mutex
    for (size_t i = 0; i < num; ++i) {
      kInitializer(buffer[i]);
      is_front ? data->emplace_front(std::shared_ptr<ObjectType>(
                     buffer[i],
                     [&](ObjectType* obj_ptr) {
                       std::lock_guard<std::mutex> lock(mutex_);
                       queue_.push(obj_ptr);
                     }))
               : data->emplace_back(std::shared_ptr<ObjectType>(
                     buffer[i], [&](ObjectType* obj_ptr) {
                       std::lock_guard<std::mutex> lock(mutex_);
                       queue_.push(obj_ptr);
                     }));
    }
#else
    for (size_t i = 0; i < num; ++i) {
      is_front
          ? data->emplace_front(std::shared_ptr<ObjectType>(new ObjectType))
          : data->emplace_back(std::shared_ptr<ObjectType>(new ObjectType));
    }
#endif
  }
  // @brief overrided function to get batch of smart pointers
  // @params[IN] num: batch number
  // @params[IN] is_front: indicating insert to front or back of the deque
  // @params[OUT] data: deque container to store the pointers
  void BatchGet(size_t num, bool is_front,
                std::deque<std::shared_ptr<ObjectType>>* data) override {
#ifndef PERCEPTION_BASE_DISABLE_POOL
    std::vector<ObjectType*> buffer(num, nullptr);
    {
      std::lock_guard<std::mutex> lock(mutex_);
      if (queue_.size() < num) {
        Add(num - queue_.size() + kPoolDefaultExtendNum);
      }
      for (size_t i = 0; i < num; ++i) {
        buffer[i] = queue_.front();
        queue_.pop();
      }
    }
    for (size_t i = 0; i < num; ++i) {
      kInitializer(buffer[i]);
      is_front ? data->emplace_front(std::shared_ptr<ObjectType>(
                     buffer[i],
                     [&](ObjectType* obj_ptr) {
                       std::lock_guard<std::mutex> lock(mutex_);
                       queue_.push(obj_ptr);
                     }))
               : data->emplace_back(std::shared_ptr<ObjectType>(
                     buffer[i], [&](ObjectType* obj_ptr) {
                       std::lock_guard<std::mutex> lock(mutex_);
                       queue_.push(obj_ptr);
                     }));
    }
#else
    for (size_t i = 0; i < num; ++i) {
      is_front
          ? data->emplace_front(std::shared_ptr<ObjectType>(new ObjectType))
          : data->emplace_back(std::shared_ptr<ObjectType>(new ObjectType));
    }
#endif
  }
#ifndef PERCEPTION_BASE_DISABLE_POOL
  // @brief overrided function to set capacity
  void set_capacity(size_t capacity) override {
    std::lock_guard<std::mutex> lock(mutex_);
    if (capacity_ < capacity) {
      Add(capacity - capacity_);
    }
  }
  // @brief get remained object number
  size_t RemainedNum() override { return queue_.size(); }
#endif
  // @brief destructor to release the cached memory
  ~ConcurrentObjectPool() override {
    if (cache_) {
      delete[] cache_;
      cache_ = nullptr;
    }
    for (auto& ptr : extended_cache_) {
      delete ptr;
    }
    extended_cache_.clear();
  }
    }
    
    // Definition of the use type of a lane mark in lane adjustment
enum class LaneLineUseType { REAL = 0, VIRTUAL };
    
    // @brief: scale input prob within input range
// @return bounded & scaled prob
// @NOTE: original method name is bound_scale_probability
double BoundedScalePositiveProbability(double p, double max_p, double min_p);
    
    
    {  float scalar_radar_velocity = radar_velocity.norm();
  float scalar_camera_velocity = camera_velocity.norm();
  if (std::max(scalar_radar_velocity, scalar_camera_velocity) > 2) {
    float diff_velocity = (radar_velocity - camera_velocity).norm() / 2;
    float diff_velocity_ratio =
        diff_velocity / std::max(scalar_camera_velocity, scalar_radar_velocity);
    const float velocity_std = 0.15f;
    const float max_velocity_p = 0.9f;
    const float th_velocity_p = 0.5f;
    float velocity_score = static_cast<float>(
        1 - ChiSquaredCdf1TableFun(diff_velocity_ratio * diff_velocity_ratio /
                                   velocity_std / velocity_std));
    velocity_score = static_cast<float>(ScalePositiveProbability(
        velocity_score, max_velocity_p, th_velocity_p));
    return velocity_score;
  } else {
    return 0.5;
  }
}
    
    #include 'cyber/common/file.h'
#include 'cyber/common/log.h'
    
    #endif // OPENPOSE_HAND_HAND_PARAMETERS_HPP

    
        class OP_API PersonTracker
    {
    }