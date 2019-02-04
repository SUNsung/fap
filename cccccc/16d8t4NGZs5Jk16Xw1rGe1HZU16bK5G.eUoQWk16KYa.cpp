
        
        #if defined(COMPONENT_BUILD) && defined(WIN32)
#define NW_HOOK_MAP(type, sym, fn) BASE_EXPORT type fn;
#else
#define NW_HOOK_MAP(type, sym, fn) extern type fn;
#endif
#include 'content/nw/src/common/node_hooks.h'
#undef NW_HOOK_MAP
    
      // Post 'reopen' event.
  // (This event is received when the user clicked the icon in the Dock).
  static void EmitReopenEvent();
    
    
    {}  // namespace nw

    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  return item->is_checked_;
}
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
    
    {  // Convert from content coordinates to window coordinates.
  // This code copied from chrome_web_contents_view_delegate_views.cc
  aura::Window* target_window = GetActiveNativeView(rfh);
  aura::Window* root_window = target_window->GetRootWindow();
  views::Widget* top_level_widget =
    views::Widget::GetTopLevelWidgetForNativeView(target_window);
  aura::client::ScreenPositionClient* screen_position_client =
        aura::client::GetScreenPositionClient(root_window);
  if (screen_position_client) {
    screen_position_client->ConvertPointToScreen(target_window,
             &screen_point);
  }
  set_delay_destruction(true);
  menu_runner_.reset(new views::MenuRunner(menu_model_.get(), views::MenuRunner::CONTEXT_MENU,
                                           base::Bind(&Menu::OnMenuClosed, base::Unretained(this))));
  menu_runner_->RunMenuAt(top_level_widget,
                       nullptr,
                       gfx::Rect(screen_point, gfx::Size()),
                       views::MENU_ANCHOR_TOPRIGHT,
                       ui::MENU_SOURCE_NONE);
  // It is possible for the same MenuMessageLoopAura to start a nested
  // message-loop while it is already running a nested loop. So make
  // sure the quit-closure gets reset to the outer loop's quit-closure
  // once the innermost loop terminates.
  {
    base::AutoReset<base::Closure> reset_quit_closure(&message_loop_quit_,
                                                      base::Closure());
  
    //base::MessageLoop* loop = base::MessageLoop::current();
    base::MessageLoopCurrent::ScopedNestableTaskAllower allow;
    base::RunLoop run_loop;
    message_loop_quit_ = run_loop.QuitClosure();
  
    run_loop.Run();
  }
  set_delay_destruction(false);
  if (pending_destruction())
    object_manager_->OnDeallocateObject(id_);
}
    
    
void MenuItem::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (enable_shortcut && GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    gtk_widget_add_accelerator(
      menu_item_,
      'activate',
      gtk_accel_group,
      keyval,
      modifiers_mask,
      GTK_ACCEL_VISIBLE);
  }
  if (submenu_ != NULL){
    submenu_->UpdateKeys(gtk_accel_group);
  }
  return;
}
    
      static void DoJob(AppWindowRegistry* registry, std::string id);
 protected:
  ~NwAppCloseAllWindowsFunction() override {}
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
     protected:
  ~NwObjCallObjectMethodFunction() override;
    
    TegraUnaryOp_Invoker(bitwiseNot, bitwiseNot)
#define TEGRA_UNARYOP(type, op, src1, sz1, dst, sz, w, h) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    parallel_for_(Range(0, h), \
    TegraGenOp_##op##_Invoker<const type, type>(src1, sz1, dst, sz, w, h), \
    (w * h) / static_cast<double>(1<<16)), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        /*
        Reduce matrix to a vector by calculatin given operation for each column
    */
    void reduceColSum(const Size2D &size,
                      const u8 * srcBase, ptrdiff_t srcStride,
                      s32 * dstBase);
    
    #ifdef CAROTENE_NEON
    // in this case we can use the following scheme:
    // dst[p] = (src[p] + dst[p]) >> 1
    // which is faster
    if (alpha == 0.5f)
    {
        internal::vtransform(size,
                             srcBase, srcStride,
                             dstBase, dstStride,
                             dstBase, dstStride,
                             AccumulateWeightedHalf());
    }
    
    void bitwiseOr(const Size2D &size,
               const u8 *src0Base, ptrdiff_t src0Stride,
               const u8 *src1Base, ptrdiff_t src1Stride,
               u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseOr());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        if (borderType == BORDER_MODE_CONSTANT)
        for (s32 k = 0; k < cn; ++k)
        {
            lanea[-cn+k] = borderValue;
            lanea[colsn+k] = borderValue;
            laneA[-cn+k] = borderValue;
            laneA[colsn+k] = borderValue;
            laneb[-cn+k] = borderValue;
            laneb[colsn+k] = borderValue;
            laneB[-cn+k] = borderValue;
            laneB[colsn+k] = borderValue;
        }
    
                int16x8_t tail02 = vreinterpretq_s16_u16(vaddl_u8(tail2, tail0));
            int16x8_t tail1x2 = vreinterpretq_s16_u16(vshll_n_u8(tail1, 1));
            int16x8_t taildx = vreinterpretq_s16_u16(vsubl_u8(tail2, tail0));
            int16x8_t taildy = vqaddq_s16(tail02, tail1x2);
    
            if (s[0] < 0 || s[1] < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
        result += (s[0] += s[1]);
        if (s[0] < 0 || result < 0)
        {
            return 0x7fFFffFF;
        }
    
        int16x8_t q0 = vdupq_n_s16((s16)(-1000));
    int16x8_t q1 = vdupq_n_s16((s16)(1000));
    
                    vSum_0_4 = vmlaq_u16(vSum_0_4, vSum_4_8, vc4u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vSum_5_9, vc4u16);
                vSum_0_4 = vmlaq_u16(vSum_0_4, vLane2.val[0], vc6u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vLane2.val[1], vc6u16);
    
    OPERATOR_SCHEMA(Floor)
    .NumInputs(1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
Element-wise application of the floor function ($y=floor(x)$) to the input
tensor `X`. Output tensor shape is the same as the input tensor. This
operator can be used in an in-place fashion by using the same input blob as the
output blob.
    
    namespace caffe2 {
namespace {
    }
    }
    
    namespace caffe2 {
OPERATOR_SCHEMA(FloatToHalf)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT16);
    }
    }
    
    											ErrorMetric a_errormetric) = 0;
    
    		static const unsigned int BYTES_PER_BLOCK = 8;
		static const unsigned int SELECTOR_BYTES = 6;
    
    #define UNIT_QUANT_SHIFT 2
#define UNIT_QUANT_FACTOR (1 << UNIT_QUANT_SHIFT)
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
    
    {  int ret = x;
  return ret;
}
    
    int ObjectListStatus60A::num_of_objects(const std::uint8_t* bytes,
                                        int32_t length) const {
  Byte t0(bytes);
  int32_t x = t0.get_byte(0, 8);
    }