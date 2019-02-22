
        
        // Class to hold an array of bounding boxes for an output word and
// the bounding box of the whole word.
class BoxWord {
 public:
  BoxWord();
  explicit BoxWord(const BoxWord& src);
  ~BoxWord() = default;
    }
    
      // Fits a line to the points, returning the fitted line as a pair of
  // points, and the upper quartile error.
  double Fit(ICOORD* pt1, ICOORD* pt2) {
    return Fit(0, 0, pt1, pt2);
  }
  // Fits a line to the points, ignoring the skip_first initial points and the
  // skip_last final points, returning the fitted line as a pair of points,
  // and the upper quartile error.
  double Fit(int skip_first, int skip_last, ICOORD* pt1, ICOORD* pt2);
    
      // Accessors.
  int total_cost() const {
    return total_cost_;
  }
  int Pathlength() const {
    return total_steps_;
  }
  const DPPoint* best_prev() const {
    return best_prev_;
  }
  void AddLocalCost(int new_cost) {
    local_cost_ += new_cost;
  }
    
      // Computes the maximum x and y value in the features.
  static void ComputeSize(const GenericVector<WordFeature>& features,
                          int* max_x, int* max_y);
  // Draws the features in the given window.
  static void Draw(const GenericVector<WordFeature>& features,
                   ScrollView* window);
    
    #include <cstdint>      // for int32_t
#include 'points.h'     // for FCOORD
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6>
internal::CartesianProductHolder6<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6) {
  return internal::CartesianProductHolder6<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6>(
      g1, g2, g3, g4, g5, g6);
}
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
    
    template <GTEST_3_TYPENAMES_(T)>
struct tuple_size<GTEST_3_TUPLE_(T) > {
  static const int value = 3;
};
    
    #include <grpcpp/impl/grpc_library.h>
#include <grpcpp/security/credentials.h>
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
    const ViewDescriptor& ClientServerLatencyMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/client/server_latency/minute')
          .set_measure(kRpcClientServerLatencyMeasureName)
          .set_aggregation(MillisDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc