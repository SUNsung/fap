
        
        
namespace google {
namespace protobuf {
namespace internal {
    }
    }
    }
    
    bool DecodeMetadata(const string& path, GeneratedCodeInfo* info) {
  string data;
  GOOGLE_CHECK_OK(File::GetContents(path, &data, true));
  io::ArrayInputStream input(data.data(), data.size());
  return info->ParseFromZeroCopyStream(&input);
}
    
    TEST(MovableMessageTest, MoveDifferentArenas) {
  Arena arena1, arena2;
    }
    
    #include <google/protobuf/compiler/java/java_extension_lite.h>
    
    #include <google/protobuf/compiler/java/java_generator_factory.h>
    
      (*variables)['type'] =
      name_resolver->GetImmutableClassName(descriptor->message_type());
  const FieldDescriptor* key = KeyField(descriptor);
  const FieldDescriptor* value = ValueField(descriptor);
  const JavaType keyJavaType = GetJavaType(key);
  const JavaType valueJavaType = GetJavaType(value);
    
      CodeGeneratorRequest request;
  if (!request.ParseFromFileDescriptor(STDIN_FILENO)) {
    std::cerr << argv[0] << ': protoc sent unparseable request to plugin.'
              << std::endl;
    return 1;
  }
    
    // Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// https://developers.google.com/protocol-buffers/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
    #include <string>
#include <vector>
    
    REGISTER_CPU_OPERATOR(
    MergeMultiMapFeatureTensorsGradient,
    MergeMultiListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeMultiMapFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with map features '
        'into many.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_values_lengths', '.values.lengths')
    .Input(2, 'out_values_values_grad', '.values.values_grad')
    .Output(0, 'in1_values_values_grad', '.values.values_grad');
REGISTER_GRADIENT(
    MergeMultiMapFeatureTensors,
    GetMergeMultiMapFeatureTensorsGradient);
    
    workspace.ResetWorkspace()
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
    class GetFloatToHalfGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'HalfToFloat', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(FloatToHalf, GetFloatToHalfGradient);
    
    
    {} // namespace caffe2

    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
    
    { private:
  // no copying allowed
  WriteControllerToken(const WriteControllerToken&) = delete;
  void operator=(const WriteControllerToken&) = delete;
};
    
      env.now_micros_ += 100u;  // sleep credit 100
  // 1000 used, 7240 left
  ASSERT_EQ(static_cast<uint64_t>(0), controller.GetDelay(&env, 1000u));
    
    
    {  if (close(fd_) < 0) {
    s = IOError('While closing file after writing', filename_, errno);
  }
  fd_ = -1;
  return s;
}
    
    using namespace rocksdb;
    
    // Take a default BlockBasedTableOptions 'table_options' in addition to a
// map 'opts_map' of option name to option value to construct the new
// BlockBasedTableOptions 'new_table_options'.
//
// Below are the instructions of how to config some non-primitive-typed
// options in BlockBasedTableOptions:
//
// * filter_policy:
//   We currently only support the following FilterPolicy in the convenience
//   functions:
//   - BloomFilter: use 'bloomfilter:[bits_per_key]:[use_block_based_builder]'
//     to specify BloomFilter.  The above string is equivalent to calling
//     NewBloomFilterPolicy(bits_per_key, use_block_based_builder).
//     [Example]:
//     - Pass {'filter_policy', 'bloomfilter:4:true'} in
//       GetBlockBasedTableOptionsFromMap to use a BloomFilter with 4-bits
//       per key and use_block_based_builder enabled.
//
// * block_cache / block_cache_compressed:
//   We currently only support LRU cache in the GetOptions API.  The LRU
//   cache can be set by directly specifying its size.
//   [Example]:
//   - Passing {'block_cache', '1M'} in GetBlockBasedTableOptionsFromMap is
//     equivalent to setting block_cache using NewLRUCache(1024 * 1024).
//
// @param table_options the default options of the output 'new_table_options'.
// @param opts_map an option name to value map for specifying how
//     'new_table_options' should be set.
// @param new_table_options the resulting options based on 'table_options'
//     with the change specified in 'opts_map'.
// @param input_strings_escaped when set to true, each escaped characters
//     prefixed by '\' in the values of the opts_map will be further converted
//     back to the raw string before assigning to the associated options.
// @param ignore_unknown_options when set to true, unknown options are ignored
//     instead of resulting in an unknown-option error.
// @return Status::OK() on success.  Otherwise, a non-ok status indicating
//     error will be returned, and 'new_table_options' will be set to
//     'table_options'.
Status GetBlockBasedTableOptionsFromMap(
    const BlockBasedTableOptions& table_options,
    const std::unordered_map<std::string, std::string>& opts_map,
    BlockBasedTableOptions* new_table_options,
    bool input_strings_escaped = false, bool ignore_unknown_options = false);
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
    
    {  virtual ~FlushBlockPolicy() { }
};
    
    #include <stdint.h>
#include <memory>
#include <string>
    
      x <<= 4;
  x |= t;
    
    BaseMapMatrix::BaseMapMatrix(const BaseMapMatrix& cells) {}
    
    
    {
    {        sub_node = sub_node->NextSiblingElement('objectReference');
      }
    }
    
    TEST_F(PncMapTest, GetRouteSegments_ChangeLane) {
  auto lane = hdmap_.GetLaneById(hdmap::MakeMapId('9_1_-2'));
  ASSERT_TRUE(lane);
  common::VehicleState state;
  auto point = lane->GetSmoothPoint(35);  // larger than kMinLaneKeepingDistance
  state.set_x(point.x());
  state.set_y(point.y());
  state.set_z(point.y());
  state.set_heading(M_PI);
  std::list<RouteSegments> segments;
  bool result = pnc_map_->GetRouteSegments(state, 10, 30, &segments);
  ASSERT_TRUE(result);
  ASSERT_EQ(2, segments.size());
  const auto& first = segments.front();
  const auto& second = segments.back();
  EXPECT_NEAR(40, RouteLength(first), 1e-4);
  EXPECT_EQ(routing::LEFT, first.NextAction());
  EXPECT_TRUE(first.IsOnSegment());
  EXPECT_NEAR(40, RouteLength(second), 1e-4);
  EXPECT_EQ(routing::RIGHT, second.NextAction());
  EXPECT_FALSE(second.IsOnSegment());
}
    
    DiscretizedTrajectory BackupTrajectoryGenerator::GenerateTrajectory(
    const std::vector<PathPoint>& discretized_ref_points) {
  while (trajectory_pair_pqueue_.size() > 1) {
    auto top_pair = trajectory_pair_pqueue_.top();
    trajectory_pair_pqueue_.pop();
    DiscretizedTrajectory trajectory = TrajectoryCombiner::Combine(
        discretized_ref_points, *top_pair.first, *top_pair.second,
        init_relative_time_);
    if (!ptr_collision_checker_->InCollision(trajectory)) {
      return trajectory;
    }
  }
  auto top_pair = trajectory_pair_pqueue_.top();
  return TrajectoryCombiner::Combine(
      discretized_ref_points, *top_pair.first, *top_pair.second,
      init_relative_time_);
}
    
        double s_param = s - s0;
    // linear extrapolation is handled internally in LatticeTrajectory1d;
    // no worry about s_param > lat_trajectory.ParamLength() situation
    double d = lat_trajectory.Evaluate(0, s_param);
    double d_prime = lat_trajectory.Evaluate(1, s_param);
    double d_pprime = lat_trajectory.Evaluate(2, s_param);
    
    namespace apollo {
namespace planning {
    }
    }
    
    #endif // defined(BOOST_ATOMIC_DETAIL_X86_HAS_CMPXCHG16B)