
        
        struct Vframe {
  Vframe(const Func* func, int parent, int cost, uint64_t entry_weight)
    : func(func)
    , parent(parent)
    , entry_weight(entry_weight)
    , inclusive_cost(cost)
    , exclusive_cost(cost)
  {}
    }
    
    //////////////////////////////////////////////////////////////////////
    
    const char* OfflineCode::getArchName() { return 'PPC64'; }
    
    
    {  if (n == 1) {
    if (imm_s == 0x3F) {
      return 0;
    }
    uint64_t bits = (1UL << (imm_s + 1)) - 1;
    return RotateRight(bits, imm_r, 64);
  } else {
    if ((imm_s >> 1) == 0x1F) {
      return 0;
    }
    for (int width = 0x20; width >= 0x2; width >>= 1) {
      if ((imm_s & width) == 0) {
        int mask = width - 1;
        if ((imm_s & mask) == mask) {
          return 0;
        }
        uint64_t bits = (1UL << ((imm_s & mask) + 1)) - 1;
        return RepeatBitsAcrossReg(reg_size,
                                   RotateRight(bits, imm_r & mask, width),
                                   width);
      }
    }
  }
  not_reached();
  return 0;
}
    
    #else //__cplusplus
    
    private:
  static void SigChldHandler(int sig, siginfo_t* info, void* ctx);
    
        char fileName[256];
    memcpy(fileName, '/sys/devices/system/node/node', 29);
    assert(strlen('/sys/devices/system/node/node') == 29);
    char* p = fileName + 29;
    // We support at most 32 NUMA node, so at most two bytes.
    if (node >= 10) *p++ = '0' + node / 10;
    *p++ = '0' + node % 10;
    if (pagesize == size2m) {
      memcpy(p, '/hugepages/hugepages-2048kB/', 28);
      assert(strlen('/hugepages/hugepages-2048kB/') == 28);
      p += 28;
    } else {
      memcpy(p, '/hugepages/hugepages-1048576kB/', 31);
      assert(strlen('/hugepages/hugepages-1048576kB/') == 31);
      p += 31;
    }
    
    #include 'db/db_impl.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'util/testharness.h'
#include <string>
#include <vector>
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    class FilterPolicy;
    
      void Clear();
  void Add(double value);
  void Merge(const Histogram& other);
    
    #ifndef STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
#define STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
    
    inline bool DBIter::ParseKey(ParsedInternalKey* ikey) {
  Slice k = iter_->key();
  ssize_t n = k.size() + iter_->value().size();
  bytes_counter_ -= n;
  while (bytes_counter_ < 0) {
    bytes_counter_ += RandomPeriod();
    db_->RecordReadSample(k);
  }
  if (!ParseInternalKey(k, ikey)) {
    status_ = Status::Corruption('corrupted internal key in DBIter');
    return false;
  } else {
    return true;
  }
}
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #include <boost/asio/detail/config.hpp>
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include <boost/asio/detail/config.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #include <boost/asio/detail/push_options.hpp>
    
    extern JSClass  *jsb_cocos2d_NavMeshObstacle_class;
extern JSObject *jsb_cocos2d_NavMeshObstacle_prototype;
    
    
    {        ok &= luaval_to_uint32(tolua_S, 2,&arg0, 'cc.SimpleAudioEngine:pauseEffect');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseEffect'', nullptr);
            return 0;
        }
        cobj->pauseEffect(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:pauseEffect',argc, 1);
    return 0;
    
    
    
    
    {	b2Body* m_body;
};
    
    
    {    // SDL_CaptureMouse() let the OS know e.g. that our imgui drag outside the SDL window boundaries shouldn't e.g. trigger the OS window resize cursor. 
    // The function is only supported from SDL 2.0.4 (released Jan 2016)
    bool any_mouse_button_down = ImGui::IsAnyMouseDown();
    SDL_CaptureMouse(any_mouse_button_down ? SDL_TRUE : SDL_FALSE);
#else
    if (SDL_GetWindowFlags(g_Window) & SDL_WINDOW_INPUT_FOCUS)
        io.MousePos = ImVec2((float)mx, (float)my);
#endif
}
    
    static void CreateOrResizeBuffer(VkBuffer& buffer, VkDeviceMemory& buffer_memory, VkDeviceSize& p_buffer_size, size_t new_size, VkBufferUsageFlagBits usage)
{
    VkResult err;
    if (buffer != NULL)
        vkDestroyBuffer(g_Device, buffer, g_Allocator);
    if (buffer_memory)
        vkFreeMemory(g_Device, buffer_memory, g_Allocator);
    }
    
    
    {
    {
    {            _IdxWritePtr[0] = (ImDrawIdx)(_VtxCurrentIdx); _IdxWritePtr[1] = (ImDrawIdx)(_VtxCurrentIdx+1); _IdxWritePtr[2] = (ImDrawIdx)(_VtxCurrentIdx+2);
            _IdxWritePtr[3] = (ImDrawIdx)(_VtxCurrentIdx); _IdxWritePtr[4] = (ImDrawIdx)(_VtxCurrentIdx+2); _IdxWritePtr[5] = (ImDrawIdx)(_VtxCurrentIdx+3);
            _IdxWritePtr += 6;
            _VtxCurrentIdx += 4;
        }
    }
}
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
    #ifdef IMGUI_VULKAN_DEBUG_REPORT
    // Remove the debug report callback
    auto vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, 'vkDestroyDebugReportCallbackEXT');
    vkDestroyDebugReportCallbackEXT(g_Instance, g_DebugReport, g_Allocator);
#endif // IMGUI_VULKAN_DEBUG_REPORT
    
    
    {        ImGui::Render();
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
        Value(int unit, double value)
    : unit(unit)
    , value(value)
    {
    }
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg) noexcept {
  __android_log_write(level, tag, msg);
}
    
    private:
  void ref() {
    ++m_refcount;
  }