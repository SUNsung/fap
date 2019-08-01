
        
        // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    #include 'content/nw/src/api/api_messages.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'content/nw/src/api/shortcut/global_shortcut_listener.h'
#include 'content/nw/src/api/shortcut/shortcut.h'
#include 'content/nw/src/breakpad_linux.h'
#include 'content/nw/src/browser/native_window.h'
#include 'content/nw/src/browser/net_disk_cache_remover.h'
#include 'content/nw/src/nw_package.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/nw/src/shell_browser_context.h'
#include 'content/common/view_messages.h'
#include 'content/public/browser/browser_thread.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_process_host.h'
#include 'net/proxy/proxy_config.h'
#include 'net/proxy/proxy_config_service_fixed.h'
#include 'net/proxy/proxy_service.h'
#include 'net/url_request/url_request_context.h'
#include 'net/url_request/url_request_context_getter.h'
    
    v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
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
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'ui/gfx/point.h'
#include 'vector'
#include 'gtk/gtk.h'
    
      if (menu_item->submenu_)
    menu_model_->InsertSubMenuAt(pos, menu_item->id(), menu_item->label_,
                                 menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->InsertItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->InsertCheckItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->InsertSeparatorAt(pos, ui::NORMAL_SEPARATOR);
    
    void MenuItem::Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh) {
  if (method == 'SetLabel') {
    std::string label;
    arguments.GetString(0, &label);
    SetLabel(label);
  } else if (method == 'SetIcon') {
    std::string icon;
    arguments.GetString(0, &icon);
    SetIcon(icon);
  } else if (method == 'SetIconIsTemplate') {
    bool isTemplate;
    arguments.GetBoolean(0, &isTemplate);
    SetIconIsTemplate(isTemplate);
  } else if (method == 'SetTooltip') {
    std::string tooltip;
    arguments.GetString(0, &tooltip);
    SetTooltip(tooltip);
  } else if (method == 'SetEnabled') {
    bool enabled = true;
    arguments.GetBoolean(0, &enabled);
    SetEnabled(enabled);
  } else if (method == 'SetChecked') {
    bool checked = false;
    arguments.GetBoolean(0, &checked);
    SetChecked(checked);
  } else if (method == 'SetSubmenu') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    SetSubmenu(object_manager()->GetApiObject<Menu>(object_id));
#if defined(OS_MACOSX)
  } else if (method == 'SetKey') {
    std::string key;
    arguments.GetString(0, &key);
    SetKey(key);
  } else if (method == 'SetModifiers') {
    std::string mod;
    arguments.GetString(0, &mod);
    SetModifiers(mod);
#endif
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    void MenuItem::SetEnabled(bool enabled) {
  is_enabled_ = enabled;
  if (menu_)
    menu_->UpdateStates();
}
    
      // implement nw.Screen.initEventListeners()
  class NwScreenInitEventListenersFunction: public NWSyncExtensionFunction {
    public:
      NwScreenInitEventListenersFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {	updates.clear();
}
    
    Size2 ParallaxLayer::get_motion_offset() const {
    }
    
    			const Face3 &f = E->get();
    
    public:
	bool is_empty() const { return nodes.size() == 0; }
	Vector<Node> get_nodes() const;
	Vector<Plane> get_planes() const;
	AABB get_aabb() const;
    
    void MemoryPool::setup(uint32_t p_max_allocs) {
    }
    
    	static void read(const MIDIPacketList *packet_list, void *read_proc_ref_con, void *src_conn_ref_con);
    
    godot_int GDAPI godot_pool_int_array_get(const godot_pool_int_array *p_self, const godot_int p_idx) {
	const PoolVector<godot_int> *self = (const PoolVector<godot_int> *)p_self;
	return self->get(p_idx);
}
    
    #include 'upnp.h'
#include 'upnp_device.h'
    
    void sindex_superblock_t::set_root_block_id(const block_id_t new_root_block) {
    buf_write_t write(&sb_buf_);
    reql_btree_superblock_t *sb_data = static_cast<reql_btree_superblock_t *>(
        write.get_data_write(REQL_BTREE_SUPERBLOCK_SIZE));
    sb_data->root_block = new_root_block;
}
    
    #include <errno.h>
#include <signal.h>
#include <stdlib.h>
#include <string>
    
    // Copyright 2008, Google Inc.
// All rights reserved.
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
//
// Authors: vladl@google.com (Vlad Losev)
//
// Macros and functions for implementing parameterized tests
// in Google C++ Testing Framework (Google Test)
//
// This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
#ifndef GTEST_INCLUDE_GTEST_GTEST_PARAM_TEST_H_
#define GTEST_INCLUDE_GTEST_GTEST_PARAM_TEST_H_
    
      // Returns true iff the test part non-fatally failed.
  bool nonfatally_failed() const { return type_ == kNonFatalFailure; }
    
    TYPED_TEST(FooTest, HasPropertyA) { ... }
    
      // Stores result of the assertion predicate.
  bool success_;
  // Stores the message describing the condition in case the expectation
  // construct is not satisfied with the predicate's outcome.
  // Referenced via a pointer to avoid taking too much stack frame space
  // with test assertions.
  internal::scoped_ptr< ::std::string> message_;
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
      Status ResponseStream(ServerContext* context, const EchoRequest* request,
                        ServerWriter<EchoResponse>* writer) override;
    
    void ChannelArguments::SetResourceQuota(
    const grpc_impl::ResourceQuota& resource_quota) {
  SetPointerWithVtable(GRPC_ARG_RESOURCE_QUOTA,
                       resource_quota.c_resource_quota(),
                       grpc_resource_quota_arg_vtable());
}
    
    #include <winsock2.h>
    
    
    {}  // namespace grpc
    
      ResetStubs();
    
    const float INNER_TIME_VLP32C[12][32] = {
    {0.000f,  0.000f,  2.304f,  2.304f,  4.608f,  4.608f,  6.912f,  6.912f,
     9.216f,  9.216f,  11.520f, 11.520f, 13.824f, 13.824f, 16.128f, 16.128f,
     18.432f, 18.432f, 20.736f, 20.736f, 23.040f, 23.040f, 25.344f, 25.344f,
     27.648f, 27.648f, 29.952f, 29.952f, 32.256f, 32.256f, 34.560f, 34.560f},
    {0.000f,  0.000f,  2.304f,  2.304f,  4.608f,  4.608f,  6.912f,  6.912f,
     9.216f,  9.216f,  11.520f, 11.520f, 13.824f, 13.824f, 16.128f, 16.128f,
     18.432f, 18.432f, 20.736f, 20.736f, 23.040f, 23.040f, 25.344f, 25.344f,
     27.648f, 27.648f, 29.952f, 29.952f, 32.256f, 32.256f, 34.560f, 34.560f},
    {55.296f, 55.296f, 57.600f, 57.600f, 59.904f, 59.904f, 62.208f, 62.208f,
     64.512f, 64.512f, 66.816f, 66.816f, 69.120f, 69.120f, 71.424f, 71.424f,
     73.728f, 73.728f, 76.032f, 76.032f, 78.336f, 78.336f, 80.640f, 80.640f,
     82.944f, 82.944f, 85.248f, 85.248f, 87.552f, 87.552f, 89.856f, 89.856f},
    {55.296f, 55.296f, 57.600f, 57.600f, 59.904f, 59.904f, 62.208f, 62.208f,
     64.512f, 64.512f, 66.816f, 66.816f, 69.120f, 69.120f, 71.424f, 71.424f,
     73.728f, 73.728f, 76.032f, 76.032f, 78.336f, 78.336f, 80.640f, 80.640f,
     82.944f, 82.944f, 85.248f, 85.248f, 87.552f, 87.552f, 89.856f, 89.856f},
    {110.592f, 110.592f, 112.896f, 112.896f, 115.200f, 115.200f, 117.504f,
     117.504f, 119.808f, 119.808f, 122.112f, 122.112f, 124.416f, 124.416f,
     126.720f, 126.720f, 129.024f, 129.024f, 131.328f, 131.328f, 133.632f,
     133.632f, 135.936f, 135.936f, 138.240f, 138.240f, 140.544f, 140.544f,
     142.848f, 142.848f, 145.152f, 145.152f},
    {110.592f, 110.592f, 112.896f, 112.896f, 115.200f, 115.200f, 117.504f,
     117.504f, 119.808f, 119.808f, 122.112f, 122.112f, 124.416f, 124.416f,
     126.720f, 126.720f, 129.024f, 129.024f, 131.328f, 131.328f, 133.632f,
     133.632f, 135.936f, 135.936f, 138.240f, 138.240f, 140.544f, 140.544f,
     142.848f, 142.848f, 145.152f, 145.152f},
    {165.888f, 165.888f, 168.192f, 168.192f, 170.496f, 170.496f, 172.800f,
     172.800f, 175.104f, 175.104f, 177.408f, 177.408f, 179.712f, 179.712f,
     182.016f, 182.016f, 184.320f, 184.320f, 186.624f, 186.624f, 188.928f,
     188.928f, 191.232f, 191.232f, 193.536f, 193.536f, 195.840f, 195.840f,
     198.144f, 198.144f, 200.448f, 200.448f},
    {165.888f, 165.888f, 168.192f, 168.192f, 170.496f, 170.496f, 172.800f,
     172.800f, 175.104f, 175.104f, 177.408f, 177.408f, 179.712f, 179.712f,
     182.016f, 182.016f, 184.320f, 184.320f, 186.624f, 186.624f, 188.928f,
     188.928f, 191.232f, 191.232f, 193.536f, 193.536f, 195.840f, 195.840f,
     198.144f, 198.144f, 200.448f, 200.448f},
    {221.184f, 221.184f, 223.488f, 223.488f, 225.792f, 225.792f, 228.096f,
     228.096f, 230.400f, 230.400f, 232.704f, 232.704f, 235.008f, 235.008f,
     237.312f, 237.312f, 239.616f, 239.616f, 241.920f, 241.920f, 244.224f,
     244.224f, 246.528f, 246.528f, 248.832f, 248.832f, 251.136f, 251.136f,
     253.440f, 253.440f, 255.744f, 255.744f},
    {221.184f, 221.184f, 223.488f, 223.488f, 225.792f, 225.792f, 228.096f,
     228.096f, 230.400f, 230.400f, 232.704f, 232.704f, 235.008f, 235.008f,
     237.312f, 237.312f, 239.616f, 239.616f, 241.920f, 241.920f, 244.224f,
     244.224f, 246.528f, 246.528f, 248.832f, 248.832f, 251.136f, 251.136f,
     253.440f, 253.440f, 255.744f, 255.744f},
    {276.480f, 276.480f, 278.784f, 278.784f, 281.088f, 281.088f, 283.392f,
     283.392f, 285.696f, 285.696f, 288.000f, 288.000f, 290.304f, 290.304f,
     292.608f, 292.608f, 294.912f, 294.912f, 297.216f, 297.216f, 299.520f,
     299.520f, 301.824f, 301.824f, 304.128f, 304.128f, 306.432f, 306.432f,
     308.736f, 308.736f, 311.040f, 311.040f},
    {276.480f, 276.480f, 278.784f, 278.784f, 281.088f, 281.088f, 283.392f,
     283.392f, 285.696f, 285.696f, 288.000f, 288.000f, 290.304f, 290.304f,
     292.608f, 292.608f, 294.912f, 294.912f, 297.216f, 297.216f, 299.520f,
     299.520f, 301.824f, 301.824f, 304.128f, 304.128f, 306.432f, 306.432f,
     308.736f, 308.736f, 311.040f, 311.040f}};
    
      for (int i = 0; i < BLOCKS_PER_PACKET; i++) {  // 12
    azimuth = static_cast<float>(raw->blocks[i].rotation);
    if (i < (BLOCKS_PER_PACKET - 1)) {
      azimuth_diff = static_cast<float>(
          (36000 + raw->blocks[i + 1].rotation - raw->blocks[i].rotation) %
          36000);
      last_azimuth_diff = azimuth_diff;
    } else {
      azimuth_diff = last_azimuth_diff;
    }
    for (int laser_id = 0, k = 0; laser_id < SCANS_PER_BLOCK;
         ++laser_id, k += RAW_SCAN_SIZE) {  // 32, 3
      LaserCorrection& corrections = calibration_.laser_corrections_[laser_id];
    }
    }
    
        // transform sys to local sys type
    if (!gnss_sys_type(sys, &gnss_type)) {
      return false;
    }
    
    TEST(NaviSpeedTsGraph, ErrorTest) {}
    
     private:
  void MakeDecisions(Frame* const frame,
                     ReferenceLineInfo* const reference_line_info);
  bool FindCrosswalks(ReferenceLineInfo* const reference_line_info);
  bool CheckStopForObstacle(ReferenceLineInfo* const reference_line_info,
                            const hdmap::CrosswalkInfoConstPtr crosswalk_ptr,
                            const Obstacle& obstacle,
                            const double stop_deceleration);
    
    
    {
    {      // TODO(All): Fix the segmentation bug for large vehicles, otherwise
      // the follow line will be problematic.
      ADEBUG << ' - It is blocked by others, too.';
      return false;
    }
  }
    
    namespace apollo {
namespace planning {
namespace scenario {
    }
    }
    }
    
    
    {
    {}  // namespace control
}  // namespace apollo

    
    #include 'modules/planning/scenarios/stage.h'
#include 'modules/planning/scenarios/traffic_light/unprotected_right_turn/traffic_light_unprotected_right_turn_scenario.h'