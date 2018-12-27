
        
          virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    #include 'base/strings/string_piece.h'
#include 'v8/include/v8.h'
    
    class MenuDelegate : public ui::SimpleMenuModel::Delegate {
 public:
  MenuDelegate(ObjectManager* object_manager);
  ~MenuDelegate() override;
    }
    
      // Map point from document to screen.
  gfx::Point screen_point(x, y);
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    
    {}  // namespace nwapi
    
    class NwAppGetDataPathFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetDataPathFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwAppGetDataPathFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.App.getDataPath', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetDataPathFunction);
};
    
        bool Write(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return WriteText(data);
        break;
        case TYPE_HTML:
        return WriteHTML(data);
        break;
        case TYPE_RTF:
        return WriteRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return WriteImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;
    }
    
        if (screens) {
      std::unique_ptr<DesktopMediaList> screen_media_list =
        std::make_unique<NativeDesktopMediaList>(
          content::DesktopMediaID::TYPE_SCREEN,
          webrtc::DesktopCapturer::CreateScreenCapturer(options));
      media_list_.push_back(std::move(screen_media_list));
    }
    
    
    {  int ret = x;
  return ret;
}
    
      Byte t1(bytes + 2);
  int32_t t = t1.get_byte(6, 2);
    
    
    {  double ret = x * OBJECT_AREL_RES + OBJECT_AREL_LONG_MIN;
  return ret;
}
    
      // coordinate frame
  std::string from_coordinate = geo_text->Value();
  int eastZone = GetLongZone(east);
  int westZone = GetLongZone(west);
  if (eastZone != westZone) {
    std::string err_msg = 'unsupport data in more than one zones';
    return Status(apollo::common::ErrorCode::HDMAP_DATA_ERROR, err_msg);
  }
  int zone = westZone;
  std::string to_coordinate = '+proj=utm +zone=' + std::to_string(zone) +
                              ' +ellps=WGS84 +datum=WGS84 +units=m +no_defs';
  CoordinateConvertTool::GetInstance()->SetConvertParam(from_coordinate,
                                                        to_coordinate);
    
    #include 'modules/common/util/file.h'
#include 'modules/map/hdmap/hdmap_util.h'
    
    STPoint::STPoint(const double s, const double t) : Vec2d(t, s) {}
    
      double s0 = lon_trajectory.Evaluate(0, 0.0);
  double s_ref_max = reference_line.back().s();
  double accumulated_trajectory_s = 0.0;
  PathPoint prev_trajectory_point;
    
      const auto mat = kernel.kernel_matrix();
  const auto offset = kernel.offset_matrix();