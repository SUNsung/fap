
        
        IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_AllocateId, int)
    
    // Tell browser to delete a object.
// function DeallocateObject(id);
v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id);
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    void MenuItem::SetSubmenu(Menu* sub_menu) {
  submenu_ = sub_menu;
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    sub_menu->UpdateKeys(gtk_accel_group);
  }
  if (sub_menu == NULL)
    gtk_menu_item_remove_submenu(GTK_MENU_ITEM(menu_item_));
  else
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item_), sub_menu->menu_);
}
    
    #undef cv_hal_add8u
#define cv_hal_add8u TEGRA_ADD
#undef cv_hal_add8s
#define cv_hal_add8s TEGRA_ADD
#undef cv_hal_add16u
#define cv_hal_add16u TEGRA_ADD
#undef cv_hal_add16s
#define cv_hal_add16s TEGRA_ADD
#undef cv_hal_add32s
#define cv_hal_add32s TEGRA_ADD
#undef cv_hal_add32f
#define cv_hal_add32f TEGRA_ADDF
//#undef cv_hal_add64f
//#define cv_hal_add64f TEGRA_ADDF
#undef cv_hal_sub8u
#define cv_hal_sub8u TEGRA_SUB
#undef cv_hal_sub8s
#define cv_hal_sub8s TEGRA_SUB
#undef cv_hal_sub16u
#define cv_hal_sub16u TEGRA_SUB
#undef cv_hal_sub16s
#define cv_hal_sub16s TEGRA_SUB
#undef cv_hal_sub32s
#define cv_hal_sub32s TEGRA_SUB
#undef cv_hal_sub32f
#define cv_hal_sub32f TEGRA_SUBF
//#undef cv_hal_sub64f
//#define cv_hal_sub64f TEGRA_SUBF
#undef cv_hal_max8u
#define cv_hal_max8u TEGRA_MAX
#undef cv_hal_max8s
#define cv_hal_max8s TEGRA_MAX
#undef cv_hal_max16u
#define cv_hal_max16u TEGRA_MAX
#undef cv_hal_max16s
#define cv_hal_max16s TEGRA_MAX
#undef cv_hal_max32s
#define cv_hal_max32s TEGRA_MAX
#undef cv_hal_max32f
#define cv_hal_max32f TEGRA_MAX
//#undef cv_hal_max64f
//#define cv_hal_max64f TEGRA_MAX
#undef cv_hal_min8u
#define cv_hal_min8u TEGRA_MIN
#undef cv_hal_min8s
#define cv_hal_min8s TEGRA_MIN
#undef cv_hal_min16u
#define cv_hal_min16u TEGRA_MIN
#undef cv_hal_min16s
#define cv_hal_min16s TEGRA_MIN
#undef cv_hal_min32s
#define cv_hal_min32s TEGRA_MIN
#undef cv_hal_min32f
#define cv_hal_min32f TEGRA_MIN
//#undef cv_hal_min64f
//#define cv_hal_min64f TEGRA_MIN
#undef cv_hal_absdiff8u
#define cv_hal_absdiff8u TEGRA_ABSDIFF
#undef cv_hal_absdiff8s
#define cv_hal_absdiff8s TEGRA_ABSDIFF
#undef cv_hal_absdiff16u
#define cv_hal_absdiff16u TEGRA_ABSDIFF
#undef cv_hal_absdiff16s
#define cv_hal_absdiff16s TEGRA_ABSDIFF
#undef cv_hal_absdiff32s
#define cv_hal_absdiff32s TEGRA_ABSDIFF
#undef cv_hal_absdiff32f
#define cv_hal_absdiff32f TEGRA_ABSDIFF
//#undef cv_hal_absdiff64f
//#define cv_hal_absdiff64f TEGRA_ABSDIFF
#undef cv_hal_and8u
#define cv_hal_and8u TEGRA_AND
#undef cv_hal_or8u
#define cv_hal_or8u TEGRA_OR
#undef cv_hal_xor8u
#define cv_hal_xor8u TEGRA_XOR
#undef cv_hal_not8u
#define cv_hal_not8u TEGRA_NOT
    
    #include <cstring>
    
    void add(const Size2D &size,
         const f32 * src0Base, ptrdiff_t src0Stride,
         const f32 * src1Base, ptrdiff_t src1Stride,
         f32 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride,
                         AddWrap<f32, f32>());
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
    
    struct BitwiseAnd
{
    typedef u8 type;
    }
    
    void blur3x3(const Size2D &size, s32 cn,
             const u8 * srcBase, ptrdiff_t srcStride,
             u8 * dstBase, ptrdiff_t dstStride,
             BORDER_MODE borderType, u8 borderValue)
{
    internal::assertSupportedConfiguration(isBlurU8Supported(size, cn, borderType));
#ifdef CAROTENE_NEON
//#define FLOAT_VARIANT_1_9
#ifdef FLOAT_VARIANT_1_9
    float32x4_t v1_9 = vdupq_n_f32 (1.0/9.0);
    float32x4_t v0_5 = vdupq_n_f32 (.5);
#else
    const int16x8_t vScale = vmovq_n_s16(3640);
#endif
    }
    
            mag_buf[1][0] = mag_buf[1][size.width+1] = 0;
        if (borderyt == 0)
        {
            //sobelH row #-1
            _src = internal::getRowPtr(srcBase, srcStride, -1);
            sobelRow(_src, ((s16*)mag_buf[2]) + shxOffset, ((s16*)mag_buf[2]) + shyOffset, size.width);
    }
    
    
    {                currx[0] = srow0 ? srow0[x3] : borderValue;
                currx[1] =         srow1[x3]              ;
                currx[2] = srow2 ? srow2[x3] : borderValue;
            }
    
      static Data data_;
  static Data data6_;
    
    class DHTMessageCallback;
    
    #include 'common.h'
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createPeerLookupTask(
    const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
    const std::shared_ptr<PeerStorage>& peerStorage)
{
  auto task = std::make_shared<DHTPeerLookupTask>(ctx, tcpPort);
  // TODO this may be not freed by RequestGroup::releaseRuntimeResource()
  task->setPeerStorage(peerStorage);
  setCommonProperty(task);
  return task;
}
    
    class DHTTokenTracker {
private:
  static const size_t SECRET_SIZE = 4;
    }
    
    #include 'DHTNode.h'
#include 'util.h'
#include 'a2functional.h'