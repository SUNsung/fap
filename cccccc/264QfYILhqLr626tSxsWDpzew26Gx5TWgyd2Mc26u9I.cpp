
        
            void KeyChord::Modifiers(Settings::KeyModifiers const& value)
    {
        _modifiers = value;
    }
    
    TYPED_TEST(NeuronLayerTest, TestExpGradientBase2Shift1) {
  typedef typename TypeParam::Dtype Dtype;
  const Dtype kBase = 2;
  const Dtype kScale = 1;
  const Dtype kShift = 1;
  this->TestExpGradient(kBase, kScale, kShift);
}
    
    template <typename Dtype>
void Solver<Dtype>::Restore(const char* state_file) {
  string state_filename(state_file);
  if (state_filename.size() >= 3 &&
      state_filename.compare(state_filename.size() - 3, 3, '.h5') == 0) {
    RestoreSolverStateFromHDF5(state_filename);
  } else {
    RestoreSolverStateFromBinaryProto(state_filename);
  }
}
    
    int main(int argc, char** argv) {
#ifndef GFLAGS_GFLAGS_H_
  namespace gflags = google;
#endif
    }
    
     protected:
  shared_ptr<SyncedMemory> data_;
  shared_ptr<SyncedMemory> diff_;
  shared_ptr<SyncedMemory> shape_data_;
  vector<int> shape_;
  int count_;
  int capacity_;
    
    namespace caffe {
    }
    
      // Returns the x,y means as an FCOORD.
  FCOORD mean_point() const;
    
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
    
    
    {  // Does this paragraph begin with a drop cap?
  bool has_drop_cap;
};
    
    // A useful base struct to facilitate the common operation of sorting a vector
// of simple or smart-pointer data using a separate key. Similar to STL pair.
template <typename Key, typename Data>
struct KDPair {
  KDPair() = default;
  KDPair(Key k, Data d) : data(d), key(k) {}
    }
    
    void ConstructRecord(uint64_t msg_num, uint64_t begin_time,
                     uint64_t time_step) {
  RecordWriter writer;
  writer.SetSizeOfFileSegmentation(0);
  writer.SetIntervalOfFileSegmentation(0);
  writer.Open(TEST_FILE);
  writer.WriteChannel(CHANNEL_NAME_1, MESSAGE_TYPE_1, PROTO_DESC);
  for (uint64_t i = 0; i < msg_num; i++) {
    auto msg = std::make_shared<RawMessage>(std::to_string(i));
    writer.WriteMessage(CHANNEL_NAME_1, msg, begin_time + time_step * i);
  }
  ASSERT_EQ(msg_num, writer.GetMessageNumber(CHANNEL_NAME_1));
  writer.Close();
}
    
    #include <cmath>
    
    Chassis::ErrorCode GemController::chassis_error_code() {
  std::lock_guard<std::mutex> lock(chassis_error_code_mutex_);
  return chassis_error_code_;
}
    
    #include 'modules/planning/traffic_rules/rerouting.h'
    
    inline void L2Norm(int feat_dim, float *feat_data) {
  if (feat_dim == 0) {
    return;
  }
  // feature normalization
  float l2norm = 0.0f;
  for (int i = 0; i < feat_dim; ++i) {
    l2norm += feat_data[i] * feat_data[i];
  }
  if (l2norm == 0) {
    float val = 1.f / std::sqrt(static_cast<float>(feat_dim));
    for (int i = 0; i < feat_dim; ++i) {
      feat_data[i] = val;
    }
  } else {
    l2norm = std::sqrt(l2norm);
    for (int i = 0; i < feat_dim; ++i) {
      feat_data[i] /= l2norm;
    }
  }
}
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
    void TrafficLightUnprotectedLeftTurnScenario::RegisterStages() {
  if (!s_stage_factory_.Empty()) {
    s_stage_factory_.Clear();
  }
  s_stage_factory_.Register(
      ScenarioConfig::TRAFFIC_LIGHT_UNPROTECTED_LEFT_TURN_CREEP,
      [](const ScenarioConfig::StageConfig& config) -> Stage* {
        return new TrafficLightUnprotectedLeftTurnStageCreep(config);
      });
  s_stage_factory_.Register(
      ScenarioConfig::TRAFFIC_LIGHT_UNPROTECTED_LEFT_TURN_INTERSECTION_CRUISE,
      [](const ScenarioConfig::StageConfig& config) -> Stage* {
        return new TrafficLightUnprotectedLeftTurnStageIntersectionCruise(
            config);
      });
}