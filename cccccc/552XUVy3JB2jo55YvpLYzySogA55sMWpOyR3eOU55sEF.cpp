
        
        
    {  TBOX bbox_;
  int length_;
  GenericVector<TBOX> boxes_;
};
    
    
    { private:
  // A name for this document.
  STRING document_name_;
  // A group of pages that corresponds in some loose way to a document.
  PointerVector<ImageData> pages_;
  // Page number of the first index in pages_.
  int pages_offset_;
  // Total number of pages in document (may exceed size of pages_.)
  int total_pages_;
  // Total of all pix sizes in the document.
  int64_t memory_used_;
  // Max memory to use at any time.
  int64_t max_memory_;
  // Saved reader from LoadDocument to allow re-caching.
  FileReader reader_;
  // Mutex that protects pages_ and pages_offset_ against multiple parallel
  // loads, and provides a wait for page.
  SVMutex pages_mutex_;
  // Mutex that protects other data members that callers want to access without
  // waiting for a load operation.
  mutable SVMutex general_mutex_;
};
    
    
// Returns the median value of the vector, given that the values are
// circular, with the given modulus. Values may be signed or unsigned,
// eg range from -pi to pi (modulus 2pi) or from 0 to 2pi (modulus 2pi).
// NOTE that the array is shuffled, but the time taken is linear.
// An assumption is made that most of the values are spread over no more than
// half the range, but wrap-around is accounted for if the median is near
// the wrap-around point.
// Cannot be a member of GenericVector, as it makes heavy used of LLSQ.
// T must be an integer or float/double type.
template<typename T> T MedianOfCircularValues(T modulus, GenericVector<T>* v) {
  LLSQ stats;
  T halfrange = static_cast<T>(modulus / 2);
  int num_elements = v->size();
  for (int i = 0; i < num_elements; ++i) {
    stats.add((*v)[i], (*v)[i] + halfrange);
  }
  bool offset_needed = stats.y_variance() < stats.x_variance();
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] += halfrange;
    }
  }
  int median_index = v->choose_nth_item(num_elements / 2);
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] -= halfrange;
    }
  }
  return (*v)[median_index];
}
    
          if (result > MODULUS / 2)
        result -= MODULUS;       //get in range
      else if (result < -MODULUS / 2)
        result += MODULUS;
      return (int8_t) result;
    }
    DIR128 operator+ (           //addition
      const DIR128 & add) const  //of itself
    {
      DIR128 result;             //sum
    
      // Sets up the DENORM to execute a non-linear transformation based on
  // preserving an even distribution of stroke edges. The transformation
  // operates only within the given box, scaling input coords within the box
  // non-linearly to a box of target_width by target_height, with all other
  // coords being clipped to the box edge. As with SetupNormalization above,
  // final_xshift and final_yshift are applied after scaling, and the bottom-
  // left of box is used as a pre-scaling origin.
  // x_coords is a collection of the x-coords of vertical edges for each
  // y-coord starting at box.bottom().
  // y_coords is a collection of the y-coords of horizontal edges for each
  // x-coord starting at box.left().
  // Eg x_coords[0] is a collection of the x-coords of edges at y=bottom.
  // Eg x_coords[1] is a collection of the x-coords of edges at y=bottom + 1.
  // The second-level vectors must all be sorted in ascending order.
  void SetupNonLinear(const DENORM* predecessor, const TBOX& box,
                      float target_width, float target_height,
                      float final_xshift, float final_yshift,
                      const GenericVector<GenericVector<int> >& x_coords,
                      const GenericVector<GenericVector<int> >& y_coords);
    
      bool rej_before_nn_accept();
  bool rej_between_nn_and_mm();
  bool rej_between_mm_and_quality_accept();
  bool rej_between_quality_and_minimal_rej_accept();
  bool rej_before_mm_accept();
  bool rej_before_quality_accept();
    
    
    {}  // namespace tesseract.
    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
    namespace grpc {
    }
    
    #include <grpc/support/log.h>
    
    const std::set<PerBalancerStore*>* LoadDataStore::GetAssignedStores(
    const grpc::string& hostname, const grpc::string& lb_id) {
  auto it = per_host_stores_.find(hostname);
  if (it == per_host_stores_.end()) return nullptr;
  return it->second.GetAssignedStores(lb_id);
}
    
      bool isValid() const { return past != SrcPos{0,0}; }
    
      // Detect Far branch
  if (di.isFarBranch()) {
    patchAbsolute(jmp, dest);
    return;
  }
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    
    {}
    
      uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
    
    class osqueryConstants {
 public:
  osqueryConstants();
    }
    
    namespace osquery {
namespace perf_event_open {
    }
    }
    
    
    {  FRIEND_TEST(KillswitchTests, test_killswitch_plugin);
};
    
    class keychainAcls : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};
    
    Speed *Speed::reverse() const
{
    if (_innerAction)
        return Speed::create(_innerAction->reverse(), _speed);
    
    return nullptr;
}
    
        r = sqrtf( powf(x,2) + powf(y,2) + powf(z,2));
    s = sqrtf( powf(x,2) + powf(y,2));
    if( s == 0.0f )
        s = FLT_EPSILON;
    if(r==0.0f)
        r = FLT_EPSILON;
    
    bool GridAction::initWithDuration(float duration, const Size& gridSize)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _gridSize = gridSize;
    }
    }
    
        float    x0 = v0.x;
    float    x1 = v1.x;
    float    x;
    Vec2    a, b, c, d;
    
    bool ActionTween::initWithDuration(float duration, const std::string& key, float from, float to)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _key    = key;
        _to       = to;
        _from     = from;
        return true;
    }
    }
    
    /** ActionTween
    
        pq = swHeap_new(SIZE, SW_MAX_HEAP);
    ASSERT_NE(pq, nullptr);
    
        QCoreApplication app(argc, argv);
    
    class ExampleQt : public QObject {
    }
    
    static swMemoryPool *pool = NULL;
    
    
    {    coro_test_wait(&complete_num, args.size());
}
    
    using namespace swoole;
    
    enum
{
    EVENT_onStart = 1u << 1,
    EVENT_onShutdown = 1u << 2,
    EVENT_onWorkerStart = 1u << 3,
    EVENT_onWorkerStop = 1u << 4,
    EVENT_onConnect = 1u << 5,
    EVENT_onReceive = 1u << 6,
    EVENT_onPacket = 1u << 7,
    EVENT_onClose = 1u << 8,
    EVENT_onTask = 1u << 9,
    EVENT_onFinish = 1u << 10,
    EVENT_onPipeMessage = 1u << 11,
};
    
    void swReactor_defer_task_destroy(swReactor *reactor)
{
    list<defer_task *> *tasks = (list<defer_task *> *) reactor->defer_tasks;
    delete tasks;
}