
        
        using extensions::GlobalShortcutListener;
    
     protected:
  WebRequest(v8::Isolate* isolate, AtomBrowserContext* browser_context);
  ~WebRequest() override;
    
    
    {  AtomViewHostMsg_Message_Sync::WriteReplyParams(message_, json);
  bool success = sender_->Send(message_);
  message_ = nullptr;
  sender_ = nullptr;
  return success;
}
    
    
    {}  // namespace
    
    #include 'net/url_request/url_request_http_job.h'
    
      // JsAsker:
  void StartAsync(std::unique_ptr<base::Value> options) override;
    
    namespace atom {
    }
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'ui/gfx/point.h'
#include 'vector'
#include 'gtk/gtk.h'
    
    void Menu::Append(MenuItem* menu_item) {
  if (menu_item->submenu_)
    menu_model_->AddSubMenu(menu_item->id(), menu_item->label_,
                            menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->AddItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->AddCheckItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->AddSeparator(ui::NORMAL_SEPARATOR);
    }
    
    
    {  gfx::Image originImage;
  nw::Package* package = nw::InitNWPackage();
  if (nw::GetImage(package, base::FilePath::FromUTF8Unsafe(icon), &originImage)) {
    const gfx::ImageSkia* originImageSkia = originImage.ToImageSkia();
    gfx::ImageSkia resizedImageSkia = gfx::ImageSkiaOperations::CreateResizedImage(*originImageSkia,
                                                                                   skia::ImageOperations::RESIZE_GOOD,
                                                                                   gfx::Size(kIconWidth, kIconHeight));
    icon_ = gfx::Image(resizedImageSkia);
  }
}
    
    bool NwClipboardClearSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
  return true;
}
    
    #include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/format.hpp'
#include 'caffe/util/math_functions.hpp'
    
    namespace caffe {
    }
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    #endif  // CAFFE_BNLL_LAYER_HPP_

    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \gamma ^ {\alpha x + \beta}
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #endif // __cocos2dx_builder_h__

    
    #endif // __cocos2dx_physics3d_h__
#endif //#if CC_USE_3D_PHYSICS && CC_ENABLE_BULLET_INTEGRATION

    
    bool js_cocos2dx_studio_ContourData_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ContourData_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ContourData(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ContourData_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ContourData_addVertex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ContourData_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ContourData_ContourData(JSContext *cx, uint32_t argc, jsval *vp);
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    
    
    
    
        virtual void DrawTransform(const b2Transform& xf);
    
    namespace xgboost {
namespace common {
typedef rabit::utils::MemoryFixSizeBuffer MemoryFixSizeBuffer;
typedef rabit::utils::MemoryBufferStream MemoryBufferStream;
    }
    }
    
    
    { private:
  // synchronizer
  std::unique_ptr<TreeUpdater> syncher;
  // training parameter
  TrainParam param;
};
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3.0,2,1)';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
    
    {
    {XGBOOST_REGISTER_TREE_UPDATER(TreeRefresher, 'refresh')
.describe('Refresher that refreshes the weight and statistics according to data.')
.set_body([]() {
    return new TreeRefresher<GradStats>();
  });
}  // namespace tree
}  // namespace xgboost

    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}
    
      ASSERT_FLOAT_EQ(50, YGNodeLayoutGetLeft(root_child2));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child2));
  ASSERT_FLOAT_EQ(50, YGNodeLayoutGetWidth(root_child2));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child2));
    
      YGNodeStyleSetMinHeight(root_child0, YGUndefined);
  YGNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);
    
    #include <fb/visibility.h>
    
    class ProgramLocation {
public:
  ProgramLocation() : m_functionName('Unspecified'), m_fileName('Unspecified'), m_lineNumber(0) {}
    }