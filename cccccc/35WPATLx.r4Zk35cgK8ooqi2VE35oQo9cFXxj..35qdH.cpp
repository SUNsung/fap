
        
        #  if _MSC_VER >= 1500 // MSVC 2008
    /// Indicates that the following function is deprecated.
#    define JSONCPP_DEPRECATED(message) __declspec(deprecated(message))
#  endif
    
    // Find the file which defines an extension extending the given message type
// with the given field number.
// Python DescriptorDatabases are not required to implement this method.
bool PyDescriptorDatabase::FindFileContainingExtension(
    const string& containing_type, int field_number,
    FileDescriptorProto* output) {
  ScopedPyObjectPtr py_method(
      PyObject_GetAttrString(py_database_, 'FindFileContainingExtension'));
  if (py_method == NULL) {
    // This method is not implemented, returns without error.
    PyErr_Clear();
    return false;
  }
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallFunction(py_method.get(), 's#i', containing_type.c_str(),
                            containing_type.size(), field_number));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <sstream>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* context,
                string* error) const;
    
      virtual ServiceGenerator* NewServiceGenerator(
      const ServiceDescriptor* descriptor) const;
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
    namespace internal {
    }
    
    // Generates a nonfatal failure at the given source file location with
// a generic message.
#define ADD_FAILURE_AT(file, line) \
  GTEST_MESSAGE_AT_(file, line, 'Failed', \
                    ::testing::TestPartResult::kNonFatalFailure)
    
      // Copy an existing linked_ptr<>, adding ourselves to the list of references.
  template <typename U> linked_ptr(linked_ptr<U> const& ptr) { copy(&ptr); }
  linked_ptr(linked_ptr const& ptr) {  // NOLINT
    assert(&ptr != this);
    copy(&ptr);
  }
    
      // Base part of test case name for display purposes.
  virtual const string& GetTestCaseName() const = 0;
  // Test case id to verify identity.
  virtual TypeId GetTestCaseTypeId() const = 0;
  // UnitTest class invokes this method to register tests in this
  // test case right before running them in RUN_ALL_TESTS macro.
  // This method should not be called more then once on any single
  // instance of a ParameterizedTestCaseInfoBase derived class.
  virtual void RegisterTests() = 0;
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    template <GTEST_10_TYPENAMES_(T)>
struct TupleElement<true, 0, GTEST_10_TUPLE_(T) > {
  typedef T0 type;
};
    
    #include 'sample1.h'
    
    /* Array of request or response headers or trailers. */
typedef struct bidirectional_stream_header_array {
  size_t count;
  size_t capacity;
  bidirectional_stream_header* headers;
} bidirectional_stream_header_array;
    
    
    {  GetReporter()->ReportQPS(*result);
  GetReporter()->ReportLatency(*result);
}
    
    
    {  // Get all comments (leading, leading_detached, trailing) and print them as a
  // docstring. Any leading space of a line will be removed, but the line
  // wrapping will not be changed.
  void PrintAllComments(std::vector<grpc::string> comments,
                        grpc_generator::Printer* out);
};
    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
    #endif  // TEST_QPS_TIMER_H

    
    void ProtoToCoreStats(const grpc::core::Stats& proto, grpc_stats_data* core) {
  memset(core, 0, sizeof(*core));
  for (const auto& m : proto.metrics()) {
    switch (m.value_case()) {
      case Metric::VALUE_NOT_SET:
        break;
      case Metric::kCount:
        for (int i = 0; i < GRPC_STATS_COUNTER_COUNT; i++) {
          if (m.name() == grpc_stats_counter_name[i]) {
            core->counters[i] = m.count();
            break;
          }
        }
        break;
      case Metric::kHistogram:
        for (int i = 0; i < GRPC_STATS_HISTOGRAM_COUNT; i++) {
          if (m.name() == grpc_stats_histogram_name[i]) {
            const auto& h = m.histogram();
            bool valid = true;
            if (grpc_stats_histo_buckets[i] != h.buckets_size()) valid = false;
            for (int j = 0; valid && j < h.buckets_size(); j++) {
              if (grpc_stats_histo_bucket_boundaries[i][j] !=
                  h.buckets(j).start()) {
                valid = false;
              }
            }
            if (!valid) {
              gpr_log(GPR_ERROR,
                      'Found histogram %s but shape is different from proto',
                      m.name().c_str());
            }
            for (int j = 0; valid && j < h.buckets_size(); j++) {
              core->histograms[grpc_stats_histo_start[i] + j] =
                  h.buckets(j).count();
            }
          }
        }
        break;
    }
  }
}
    
    typedef struct _option
{
	std::wstring name;
	bool hasVal;
	std::wstring value;
	bool set;
} option;
    
    // Reads the DRI marker and saved the restart interval into *jpg.
bool ProcessDRI(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  if (jpg->restart_interval > 0) {
    fprintf(stderr, 'Duplicate DRI marker.\n');
    jpg->error = JPEG_DUPLICATE_DRI;
    return false;
  }
  const size_t start_pos = *pos;
  VERIFY_LEN(4);
  size_t marker_len = ReadUint16(data, pos);
  int restart_interval = ReadUint16(data, pos);
  jpg->restart_interval = restart_interval;
  VERIFY_MARKER_END();
  return true;
}
    
    
    {}  // namespace guetzli

    
    #include 'guetzli/jpeg_data.h'
    
    std::string SequencePredictor::ToString(const LaneSequence& sequence) {
  std::string str_lane_sequence = '';
  if (sequence.lane_segment_size() > 0) {
    str_lane_sequence += sequence.lane_segment(0).lane_id();
  }
  for (int i = 1; i < sequence.lane_segment_size(); ++i) {
    str_lane_sequence += ('->' + sequence.lane_segment(i).lane_id());
  }
  return str_lane_sequence;
}
    
    
    {
    {}  // namespace planning
}  // namespace apollo
    
    std::string Polygon2d::DebugString() const {
  return util::StrCat('polygon2d (  num_points = ', num_points_, '  points = (',
                      util::PrintDebugStringIter(points_), ' )  ',
                      is_convex_ ? 'convex' : 'non-convex', '  area = ', area_,
                      ' )');
}
    
    #include <memory>
#include <string>
    
    
    {
    {
    {
    {  if (!ret) {
    AWARN << 'Projection failed projection the traffic light. '
          << 'camera_id: ' << camera_id;
    return false;
  }
  return true;
}
}  // namespace traffic_light
}  // namespace perception
}  // namespace apollo
