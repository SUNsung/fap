
        
            void KeyChord::Modifiers(Settings::KeyModifiers const& value)
    {
        _modifiers = value;
    }
    
    int UniValue::get_int() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int32_t retval;
    if (!ParseInt32(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    // Return the name of the old info log file for 'dbname'.
extern std::string OldInfoLogFileName(const std::string& dbname);
    
    namespace google {
namespace protobuf {
    }
    }
    
    #define GOOGLE_CHECK_GET_FLOAT(arg, value, err)                        \
    float value;                                            \
    if (!CheckAndGetFloat(arg, &value)) {                   \
      return err;                                          \
    }                                                       \
    
    
    {  void* mem = options_.block_alloc(size);
  Block* b = new (mem) Block(size, last_block);
  space_allocated_.fetch_add(size, std::memory_order_relaxed);
  return b;
}
    
    
    { private:
  class NewDeleteCapture {
   public:
    // TOOD(xiaofeng): Implement this for opensource protobuf.
    void Hook() {}
    void Unhook() {}
    int alloc_count() { return 0; }
    int free_count() { return 0; }
  } capture_alloc;
};
    
    
    {
    {
    {}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {  format(
      'static const int $constant_name$ = $number$;\n'
      '$1$ ::$proto_ns$::internal::ExtensionIdentifier< $extendee$,\n'
      '    ::$proto_ns$::internal::$type_traits$, $field_type$, $packed$ >\n'
      '  ${2$$name$$}$;\n',
      qualifier, descriptor_);
}
    
    namespace atu = annotation_test_util;
    
      // Verify that we can open the file.  Note that this also has the side-effect
  // of verifying that we are not canonicalizing away any non-existent
  // directories.
  std::unique_ptr<io::ZeroCopyInputStream> stream(OpenDiskFile(disk_file));
  if (stream == NULL) {
    return CANNOT_OPEN;
  }
    
    
    {	locked = false;
}
    
    			for (int i = 0; i < mesh_merge.faces.size(); i++) {
				if (mesh_merge.faces[i].inside)
					continue;
				for (int j = 0; j < 3; j++) {
					result.faces.write[outside_count].vertices[j] = mesh_merge.points[mesh_merge.faces[i].points[j]];
					result.faces.write[outside_count].uvs[j] = mesh_merge.faces[i].uvs[j];
				}
    }
    
    		} else if (p_event->is_action('ui_home')) {
    
    				Basis shape_inertia_tensor = shape->get_moment_of_inertia(mass).to_diagonal_matrix();
				Transform shape_transform = get_shape_transform(i);
				Basis shape_basis = shape_transform.basis.orthonormalized();
    
    	for (List<PropertyInfo>::Element *E = pinfo.front(); E; E = E->next()) {
		const PropertyInfo &pi = E->get();
    }
    
    
    {	return p_length;
}
    
    String InputEventJoypadButton::as_text() const {
    }
    
    
    {	ERR_FAIL_COND(p_align < 1);
	mem_ptr = Memory::alloc_static(p_size + p_align, 'PoolAllocator()');
	uint8_t *mem8 = (uint8_t *)mem_ptr;
	uint64_t ofs = (uint64_t)mem8;
	if (ofs % p_align)
		mem8 += p_align - (ofs % p_align);
	create_pool(mem8, p_size, p_max_entries);
	needs_locking = p_needs_locking;
	align = p_align;
}
    
    
    { private:
  std::mutex mutex_;
  std::list<std::weak_ptr<TimerTask>> task_list_;
};
    
    #include 'modules/common/proto/pnc_point.pb.h'
#include 'modules/planning/proto/planning.pb.h'
    
    
    {  bool is_parked = is_on_parking_lane || is_at_road_edge;
  return is_parked && obstacle->IsStatic();
}
    
      // set scenario_type in PlanningContext
  auto* scenario = PlanningContext::Instance()
                       ->mutable_planning_status()
                       ->mutable_scenario();
  scenario->Clear();
  scenario->set_scenario_type(scenario_type());
    
    
    {  ScenarioConfig config;
  EXPECT_TRUE(apollo::cyber::common::GetProtoFromFile(
      FLAGS_scenario_valet_parking_config_file, &config));
  ScenarioContext context;
  scenario_.reset(new ValetParkingScenario(config, &context));
  EXPECT_EQ(scenario_->scenario_type(), ScenarioConfig::VALET_PARKING);
}
    
    std::unique_ptr<Stage> BareIntersectionUnprotectedScenario::CreateStage(
    const ScenarioConfig::StageConfig& stage_config) {
  if (s_stage_factory_.Empty()) {
    RegisterStages();
  }
  auto ptr = s_stage_factory_.CreateObjectOrNull(stage_config.stage_type(),
                                                 stage_config);
  if (ptr) {
    ptr->SetContext(&context_);
  }
  return ptr;
}
    
    #include <string>
#include <openpose/core/macros.hpp>
#include <openpose/core/point.hpp>
    
    
    {        if (err != NULL) {
            *err = error;
        }
    }
    
    namespace op
{
    const auto HAND_MAX_HANDS = 2*POSE_MAX_PEOPLE;
    }
    
            Array<long long> extractIdsLockThread(const Array<float>& poseKeypoints, const cv::Mat& cvMatInput,
                                              const unsigned long long imageViewIndex,
                                              const long long frameId);
    
        template<typename T>
    std::string Rectangle<T>::toString() const
    {
        try
        {
            return '[' + std::to_string(x) + ', ' + std::to_string(y) + ', ' + std::to_string(width) + ', ' + std::to_string(height) + ']';
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return '';
        }
    }