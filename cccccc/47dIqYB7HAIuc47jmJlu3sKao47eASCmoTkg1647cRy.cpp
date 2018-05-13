
        
          base::win::ScopedHICON icon;
  HWND hWnd = getHWND(getAppWindow(this));
  if (hWnd == NULL) {
    error_ = kNoAssociatedAppWindow;
    LOG(ERROR) << error_;
    return false;
  }
  const float scale = display::win::GetDPIScale();
  if (badge.size())
    icon = createBadgeIcon(hWnd, base::UTF8ToUTF16(badge).c_str(), 16 * scale, 16 * scale);
    
    
    {}  // namespace
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return !item->icon_.IsEmpty();
}
    
       bool GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const override;
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
      if (type == 'separator') {
    menu_item_ = gtk_separator_menu_item_new();
  } else {
    if (type == 'checkbox') {
      menu_item_ = gtk_check_menu_item_new();
      bool checked;
      if (option.GetBoolean('checked', &checked))
        SetChecked(checked);
    } else {
      menu_item_ = gtk_image_menu_item_new();
      std::string icon;
      if (option.GetString('icon', &icon))
        SetIcon(icon);
    }
    }
    
    
    {  if (menu_)
    menu_->UpdateStates();
}
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    /** Consume entire stream and use its begin/end.
  * Someday we might have a real StreamReader, but for now this
  * is convenient.
  */
bool JSON_API parseFromStream(
    CharReader::Factory const&,
    std::istream&,
    Value* root, std::string* errs);
    
    
    {  if (!indented_) writeIndent();
  const std::string& comment = root.getComment(commentBefore);
  std::string::const_iterator iter = comment.begin();
  while (iter != comment.end()) {
    *sout_ << *iter;
    if (*iter == '\n' &&
       (iter != comment.end() && *(iter + 1) == '/'))
      // writeIndent();  // would write extra newline
      *sout_ << indentString_;
    ++iter;
  }
  indented_ = false;
}
    
    TEST(AnyTest, TestPackAndUnpackAny) {
  // We can pack a Any message inside another Any message.
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
    }
    
      std::string namespace_;
  std::string reflectionClassname_;
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(JavaGenerator);
};
    
    
    {
    {}}
    
    #ifndef OPENCV_CUDA_EMULATION_HPP_
#define OPENCV_CUDA_EMULATION_HPP_
    
    CV_EXPORTS_W void multiply(InputArray src1, Scalar src2, OutputArray dst, double scale=1, int dtype=-1);
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    
    {}  // namespace caffe
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_TANH_LAYER_HPP_

    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include <vector>
    
    bool js_cocos2dx_navmesh_NavMeshObstacle_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_navmesh_NavMeshObstacle_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_navmesh_NavMeshObstacle(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_navmesh(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_navmesh_NavMeshObstacle_getSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_initWith(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_syncToObstacle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_syncToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getRadius(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_getNavMeshObstacleComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_navmesh_NavMeshObstacle_NavMeshObstacle(JSContext *cx, uint32_t argc, jsval *vp);
    
    bool js_cocos2dx_studio_ZOrderFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ZOrderFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ZOrderFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ZOrderFrame_getZOrder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ZOrderFrame_setZOrder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ZOrderFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ZOrderFrame_ZOrderFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    #endif // __cocos2dx_experimental_video_h__
#endif //#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS) && !defined(CC_TARGET_OS_TVOS)

    
    			bd.position.Set(1.0f, 0.4f);
			m_wheel2 = m_world->CreateBody(&bd);
			m_wheel2->CreateFixture(&fd);
    
    #define ASSERT_BUF_SIZE 4096
static char sAssertBuf[ASSERT_BUF_SIZE];
static AssertHandler gAssertHandler;
    
      template <typename ...Args>
  void initialize(Args&&... arguments) {
    FBASSERT(!m_instance);
    m_instance = new T(std::forward<Args>(arguments)...);
  }