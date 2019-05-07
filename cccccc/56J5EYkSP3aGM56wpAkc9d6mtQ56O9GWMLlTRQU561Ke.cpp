
        
        
    {}  // namespace atom
    
      gfx::Point GetCursorScreenPoint();
  display::Display GetPrimaryDisplay();
  std::vector<display::Display> GetAllDisplays();
  display::Display GetDisplayNearestPoint(const gfx::Point& point);
  display::Display GetDisplayMatching(const gfx::Rect& match_rect);
    
      // C++ can not distinguish overloaded member function.
  template <AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template <AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template <typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
      // Finds out the TrackableObject from its ID in weak map.
  static T* FromWeakMapID(v8::Isolate* isolate, int32_t id) {
    if (!weak_map_)
      return nullptr;
    }
    
    #endif  // ATOM_BROWSER_LIB_POWER_OBSERVER_H_

    
    class NativeWindow;
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    #include <stdio.h>
#include <string.h>
#include <algorithm>
    
    TEST(StatusOr, TestAssignmentStatusOk) {
  const int kI = 4;
  StatusOr<int> source(kI);
  StatusOr<int> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(source.ValueOrDie(), target.ValueOrDie());
}
    
    #include <google/protobuf/stubs/common.h>
#include <gtest/gtest.h>
    
    template<typename A>
struct type_equals_<A, A> : public true_ {
};
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    using google::protobuf::FileDescriptorProto;
using google::protobuf::FileDescriptor;
using google::protobuf::DescriptorPool;
using google::protobuf::io::Printer;
using google::protobuf::util::SchemaGroupStripper;
using google::protobuf::util::EnumScrubber;
    
      bool Generate(const FileDescriptor* file,
                        const string& parameter,
                        GeneratorContext* context,
                        string* error) const {
    FileDescriptorProto new_file;
    file->CopyTo(&new_file);
    SchemaGroupStripper::StripFile(file, &new_file);
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_ENUM_H__
#define GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_ENUM_H__