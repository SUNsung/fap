
        
        #include 'modules/common/proto/pnc_point.pb.h'
#include 'modules/planning/proto/planning.pb.h'
    
    #define AINFO_IF(cond) ALOG_IF(INFO, cond, MODULE_NAME)
#define AWARN_IF(cond) ALOG_IF(WARN, cond, MODULE_NAME)
#define AERROR_IF(cond) ALOG_IF(ERROR, cond, MODULE_NAME)
#define AFATAL_IF(cond) ALOG_IF(FATAL, cond, MODULE_NAME)
#define ALOG_IF(severity, cond, module) \
  !(cond) ? (void)0                     \
          : google::LogMessageVoidify() & ALOG_MODULE(module, severity)
    
    
    {
    {
    {}  // namespace camera
}  // namespace perception
}  // namespace apollo

    
     private:
  Stage::StageStatus Process(const common::TrajectoryPoint& planning_init_point,
                             Frame* frame) override;
    
    namespace apollo {
namespace planning {
namespace scenario {
namespace valet_parking {
    }
    }
    }
    }
    
    ErrorCode GemController::Init(
    const VehicleParameter& params,
    CanSender<::apollo::canbus::ChassisDetail>* const can_sender,
    MessageManager<::apollo::canbus::ChassisDetail>* const message_manager) {
  if (is_initialized_) {
    AINFO << 'GemController has already been initialized.';
    return ErrorCode::CANBUS_ERROR;
  }
  vehicle_params_.CopyFrom(
      common::VehicleConfigHelper::Instance()->GetConfig().vehicle_param());
  params_.CopyFrom(params);
  if (!params_.has_driving_mode()) {
    AERROR << 'Vehicle conf pb not set driving_mode.';
    return ErrorCode::CANBUS_ERROR;
  }
    }
    
    using apollo::common::Status;
using apollo::common::time::Clock;
    
    
    {  return true;
}
    
    #include <string>
    
    /**
 * @brief Wrap angle to [0, 2 * PI).
 * @param angle the original value of the angle.
 * @return The wrapped value of the angle.
 */
double WrapAngle(const double angle);
    
    
    {
    {    frame->detected_objects.push_back(obj);
  }
  fclose(fp);
  return true;
}