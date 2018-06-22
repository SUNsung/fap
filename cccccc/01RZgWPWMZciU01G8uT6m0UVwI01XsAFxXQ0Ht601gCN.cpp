
        
        void compose_motion(InputArray _om1, InputArray _T1, InputArray _om2, InputArray _T2,
                    Mat& om3, Mat& T3, Mat& dom3dom1, Mat& dom3dT1, Mat& dom3dom2,
                    Mat& dom3dT2, Mat& dT3dom1, Mat& dT3dT1, Mat& dT3dom2, Mat& dT3dT2);
    
    //! @cond IGNORED
    
    // Tests that GetEncodingAsString returns the right result for a trivial
// unicharset.
TEST_F(UnicharcompressTest, GetEncodingAsString) {
  LoadUnicharset('trivial.unicharset');
  ExpectCorrect('trivial');
  STRING encoding = compressed_.GetEncodingAsString(unicharset_);
  string encoding_str(&encoding[0], encoding.length());
  std::vector<string> lines =
      strings::Split(encoding_str, '\n', strings::SkipEmpty());
  EXPECT_EQ(5, lines.size());
  // The first line is always space.
  EXPECT_EQ('0\t ', lines[0]);
  // Next we have i.
  EXPECT_EQ('1\ti', lines[1]);
  // Next we have f.
  EXPECT_EQ('2\tf', lines[2]);
  // Next we have the fi ligature: ﬁ. There are no nulls in it, as there are no
  // repeated letter ligatures in this unicharset, unlike por.unicharset above.
  EXPECT_EQ('2,1\tﬁ', lines[3]);
  // Finally the null character.
  EXPECT_EQ('3\t<nul>', lines[4]);
}
    
    // dims=[5, 4, 3, 2]->[4, 3, 5, 2]
TEST_F(MatrixTest, RotatingTranspose_0_2) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 0, 2, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][24, 25][48, 49][72, 73][96, 97]]
  //                 [[2, 3][26, 27][50, 51][74, 75][98, 99]]
  //                 [[4, 5][28, 29][52, 53][76, 77][100, 101]]]
  //                [[[6, 7]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(24, m(1, 0));
  EXPECT_EQ(25, m(1, 1));
  EXPECT_EQ(96, m(4, 0));
  EXPECT_EQ(97, m(4, 1));
  EXPECT_EQ(2, m(5, 0));
  EXPECT_EQ(6, m(15, 0));
}
    
     protected:
  /**
   * Sets up the internal data for iterating the blobs of a new word, then
   * moves the iterator to the given offset.
   */
  TESS_LOCAL void BeginWord(int offset);
    
    // A simple class to provide a dynamic programming solution to a class of
// 1st-order problems in which the cost is dependent only on the current
// step and the best cost to that step, with a possible special case
// of using the variance of the steps, and only the top choice is required.
// Useful for problems such as finding the optimal cut points in a fixed-pitch
// (vertical or horizontal) situation.
// Skeletal Example:
// DPPoint* array = new DPPoint[width];
// for (int i = 0; i < width; i++) {
//   array[i].AddLocalCost(cost_at_i)
// }
// DPPoint* best_end = DPPoint::Solve(..., array);
// while (best_end != nullptr) {
//   int cut_index = best_end - array;
//   best_end = best_end->best_prev();
// }
// delete [] array;
class DPPoint {
 public:
  // The cost function evaluates the total cost at this (excluding this's
  // local_cost) and if it beats this's total_cost, then
  // replace the appropriate values in this.
  typedef int64_t (DPPoint::*CostFunc)(const DPPoint* prev);
    }
    
      // Accessors.
  int x() const { return x_; }
  int y() const { return y_; }
  int dir() const { return dir_; }
    
      // Adds an element with a weight of 1.
  void add(double x, double y);
  // Adds an element with a specified weight.
  void add(double x, double y, double weight);
  // Adds a whole LLSQ.
  void add(const LLSQ& other);
  // Deletes an element with a weight of 1.
  void remove(double x, double y);
  int32_t count() const {  // no of elements
    return static_cast<int>(total_weight + 0.5);
  }
    
    #include          'mod128.h'
    
    void SavePixForCrash(int resolution, Pix* pix) {
#ifdef __linux__
#ifndef ANDROID
  int thread_id = syscall(SYS_gettid) % kMaxNumThreadPixes;
#else
  int thread_id = gettid() % kMaxNumThreadPixes;
#endif
  pixDestroy(&global_crash_pixes[thread_id]);
  if (pix != nullptr) {
    Pix* clone = pixClone(pix);
    pixSetXRes(clone, resolution);
    pixSetYRes(clone, resolution);
    global_crash_pixes[thread_id] = clone;
  }
#endif
}
    
      if (argv0 != nullptr && *argv0 != '\0') {
    /* Use tessdata prefix from the command line. */
    datadir = argv0;
  } else if (tessdata_prefix) {
    /* Use tessdata prefix from the environment. */
    datadir = tessdata_prefix;
#if defined(_WIN32)
  } else if (datadir == nullptr || _access(datadir.string(), 0) != 0) {
    /* Look for tessdata in directory of executable. */
    char drive[_MAX_DRIVE];
    char dir[_MAX_DIR];
    char path[_MAX_PATH];
    DWORD length = GetModuleFileName(nullptr, path, sizeof(path));
    if (length > 0 && length < sizeof(path)) {
      errno_t result = _splitpath_s(path, drive, sizeof(drive),
                                    dir, sizeof(dir), nullptr, 0, nullptr, 0);
      if (result == ERANGE) {
        tprintf('Error: Path too long: %s\n', path);
      }
    }
    }
    
      assert(peekType(msg) == thpp::Type::LONG_STORAGE);
  THLongStorage *storage2 = unpackTHLongStorage(msg);
  assert(storage2->size == STORAGE_SIZE);
  for (int64_t i = 0; i < STORAGE_SIZE; i++)
    assert(storage2->data[i] == i);
  
  int vec_size = unpackInteger(msg);
  assert(vec_size == VEC_SIZE);
  for (int i = 0; i < VEC_SIZE; i++)
    assert(unpackInteger(msg) == 7);
    
    #define THC_GENERIC_FILE 'torch/csrc/generic/Storage.h'
#include <THC/THCGenerateAllTypes.h>
    
    /* Set of callbacks used to receive callbacks from bidirectional stream. */
typedef struct bidirectional_stream_callback {
  /* Invoked when the stream is ready for reading and writing.
   * Consumer may call bidirectional_stream_read() to start reading data.
   * Consumer may call bidirectional_stream_write() to start writing
   * data.
   */
  void (*on_stream_ready)(bidirectional_stream* stream);
    }
    
    namespace grpc {
namespace testing {
    }
    }
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    
    {  gpr_subprocess* const subprocess_;
};
    
    #include 'grpc_tools/main.h'
    
    AbstractAuthResolver::~AbstractAuthResolver() = default;
    
    namespace aria2 {
    }
    
    
    {  virtual void dropCache(int64_t len, int64_t offset) CXX11_OVERRIDE;
};
    
    void AbstractOptionHandler::setEraseAfterParse(bool f)
{
  updateFlags(FLAG_ERASE_AFTER_PARSE, f);
}
    
      virtual char getShortName() const CXX11_OVERRIDE { return shortName_; }
    
      /**
   * Shuffles all the URLs in each group.
   */
  void shuffle();
    
    #include 'common.h'
    
    #include <ostream>
    
        // print the header
    for (auto B = elements.begin(); B != elements.end();) {
      Out << *B++;
      if (B != elements.end()) Out << ',';
    }
    for (auto B = user_counter_names_.begin(); B != user_counter_names_.end();) {
      Out << ',\'' << *B++ << '\'';
    }
    Out << '\n';
    
    namespace {
    }
    
    #define REQUIRES(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(requires_capability(__VA_ARGS__))
    
    #include 'benchmark/benchmark.h'
#include 'timers.h'
    
    #ifdef BENCHMARK_OS_WINDOWS
#include <Windows.h>
#endif
    
      // Populate the accumulators.
  for (Run const& run : reports) {
    CHECK_EQ(reports[0].benchmark_name, run.benchmark_name);
    CHECK_EQ(run_iterations, run.iterations);
    if (run.error_occurred) continue;
    real_accumulated_time_stat.emplace_back(run.real_accumulated_time);
    cpu_accumulated_time_stat.emplace_back(run.cpu_accumulated_time);
    items_per_second_stat.emplace_back(run.items_per_second);
    bytes_per_second_stat.emplace_back(run.bytes_per_second);
    // user counters
    for(auto const& cnt : run.counters) {
      auto it = counter_stats.find(cnt.first);
      CHECK_NE(it, counter_stats.end());
      it->second.s.emplace_back(cnt.second);
    }
  }