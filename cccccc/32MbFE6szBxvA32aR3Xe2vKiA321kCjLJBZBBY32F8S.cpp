
        
                try
        {
            mulrat(&lhsRat, rhsRat, RATIONAL_PRECISION);
            destroyrat(rhsRat);
        }
        catch (uint32_t error)
        {
            destroyrat(lhsRat);
            destroyrat(rhsRat);
            throw(error);
        }
    
    #include <fstream>
#include <iostream>
    
      void RecordObstacleDebugInfo(ReferenceLineInfo* reference_line_info);
    
    
    { private:
  ScenarioValetParkingConfig scenario_config_;
};
    
      ValetParkingContext* GetContext() {
    return GetContextAs<ValetParkingContext>();
  }
    
      ChassisDetail chassis_detail;
  message_manager_->GetSensorData(&chassis_detail);
    
    using apollo::common::Status;
using apollo::common::time::Clock;
    
    
    {  boost::filesystem::recursive_directory_iterator itr(path);
  while (itr != boost::filesystem::recursive_directory_iterator()) {
    try {
      if (apollo::common::util::EndWith(itr->path().string(), suffix)) {
        files->push_back(itr->path().string());
      }
      ++itr;
    } catch (const std::exception &ex) {
      AWARN << 'Caught execption: ' << ex.what();
      continue;
    }
  }
  return true;
}
    
    /**
 * @file
 **/
    
    int WriteCalibrationOutput(bool enabled, const std::string &out_path,
                           const CameraFrame *frame) {
  if (!enabled) {
    return -1;
  }
  float pitch_angle = 0.f;
  float camera_ground_height = 0.f;
  if (!frame->calibration_service->QueryCameraToGroundHeightAndPitchAngle(
          &camera_ground_height, &pitch_angle)) {
    AERROR << 'Failed to query camera to ground height and pitch.';
    return -1;
  }
    }