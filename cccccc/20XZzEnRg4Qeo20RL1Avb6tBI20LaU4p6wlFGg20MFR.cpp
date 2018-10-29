
        
        /* Convenience macros for creating a Handler object that is wrapped with a
 * type-safe wrapper function that converts the 'void*' parameters/returns
 * of the underlying C API into nice C++ function.
 *
 * Sample usage:
 *   void OnValue1(MyClosure* c, const MyHandlerData* d, int32_t val) {
 *     // do stuff ...
 *   }
 *
 *   // Handler that doesn't need any data bound to it.
 *   void OnValue2(MyClosure* c, int32_t val) {
 *     // do stuff ...
 *   }
 *
 *   // Handler that returns bool so it can return failure if necessary.
 *   bool OnValue3(MyClosure* c, int32_t val) {
 *     // do stuff ...
 *     return ok;
 *   }
 *
 *   // Member function handler.
 *   class MyClosure {
 *    public:
 *     void OnValue(int32_t val) {
 *       // do stuff ...
 *     }
 *   };
 *
 *   // Takes ownership of the MyHandlerData.
 *   handlers->SetInt32Handler(f1, UpbBind(OnValue1, new MyHandlerData(...)));
 *   handlers->SetInt32Handler(f2, UpbMakeHandler(OnValue2));
 *   handlers->SetInt32Handler(f1, UpbMakeHandler(OnValue3));
 *   handlers->SetInt32Handler(f2, UpbMakeHandler(&MyClosure::OnValue));
 */
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
    #include <google/protobuf/compiler/java/java_context.h>
    
      for (string::size_type i = 0; i < input.size(); i++) {
    char c = input[i];
    switch (c) {
      case '*':
        // Avoid '/*'.
        if (prev == '/') {
          result.append('&#42;');
        } else {
          result.push_back(c);
        }
        break;
      case '/':
        // Avoid '*/'.
        if (prev == '*') {
          result.append('&#47;');
        } else {
          result.push_back(c);
        }
        break;
      case '@':
        // '@' starts javadoc tags including the @deprecated tag, which will
        // cause a compile-time error if inserted before a declaration that
        // does not have a corresponding @Deprecated annotation.
        result.append('&#64;');
        break;
      case '<':
        // Avoid interpretation as HTML.
        result.append('&lt;');
        break;
      case '>':
        // Avoid interpretation as HTML.
        result.append('&gt;');
        break;
      case '&':
        // Avoid interpretation as HTML.
        result.append('&amp;');
        break;
      case '\\':
        // Java interprets Unicode escape sequences anywhere!
        result.append('&#92;');
        break;
      default:
        result.push_back(c);
        break;
    }
    }
    
      // For repeated fields, one bit is used for whether the array is immutable
  // in the parsing constructor.
  (*variables)['get_mutable_bit_parser'] =
      GenerateGetBitMutableLocal(builderBitIndex);
  (*variables)['set_mutable_bit_parser'] =
      GenerateSetBitMutableLocal(builderBitIndex);
    
    #include <string>
#include <set>
#include <vector>
#include <google/protobuf/descriptor.h>
    
    
    {  printer->Print(vars,
                 '{\n'
                 '  .defaultValue.$default_name$ = $default$,\n'
                 '  .singletonName = GPBStringifySymbol($root_class_and_method_name$),\n'
                 '  .extendedClass = GPBStringifySymbol($extended_type$),\n'
                 '  .messageOrGroupClassName = $type$,\n'
                 '  .enumDescriptorFunc = $enum_desc_func_name$,\n'
                 '  .fieldNumber = $number$,\n'
                 '  .dataType = $extension_type$,\n'
                 '  .options = $options$,\n'
                 '},\n');
}
    
    // IsAProtocolMessage<T>::value is a compile-time bool constant that's
// true iff T is type ProtocolMessage, proto2::Message, or a subclass
// of those.
template <typename T>
struct IsAProtocolMessage
    : public bool_constant<
  ImplicitlyConvertible<const T*, const ::ProtocolMessage*>::value ||
  ImplicitlyConvertible<const T*, const ::proto2::Message*>::value> {
};
    
      // Smart pointer members.
  void reset(T* ptr = NULL) {
    depart();
    capture(ptr);
  }
  T* get() const { return value_; }
  T* operator->() const { return value_; }
  T& operator*() const { return *value_; }
    
    // Gets the content of the stringstream's buffer as an std::string.  Each '\0'
// character in the buffer is replaced with '\\0'.
GTEST_API_ std::string StringStreamToString(::std::stringstream* stream);
    
    template <GTEST_7_TYPENAMES_(T)>
struct tuple_size<GTEST_7_TUPLE_(T) > {
  static const int value = 7;
};
    
    // #ifdef __GNUC__ is too general here.  It is possible to use gcc without using
// libstdc++ (which is where cxxabi.h comes from).
# if GTEST_HAS_CXXABI_H_
#  include <cxxabi.h>
# elif defined(__HP_aCC)
#  include <acxx_demangle.h>
# endif  // GTEST_HASH_CXXABI_H_
    
    
    { private:
  static int allocated_;
};
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
     public:
  // Clones a 0-terminated C string, allocating memory using new.
  static const char* CloneCString(const char* a_c_string);
    
    
    {}  // namespace leveldb
    
    #endif  // STORAGE_LEVELDB_DB_DB_IMPL_H_

    
    inline int InternalKeyComparator::Compare(
    const InternalKey& a, const InternalKey& b) const {
  return Compare(a.Encode(), b.Encode());
}
    
    static const int kBlockSize = 32768;
    
    
    {
    {
    {      if (rnd->Next() % 2) {
        iter.Next();
        pos = MakeKey(key(pos), gen(pos) + 1);
      } else {
        Key new_target = RandomTarget(rnd);
        if (new_target > pos) {
          pos = new_target;
          iter.Seek(new_target);
        }
      }
    }
  }
};
const uint32_t ConcurrentTest::K;
    
        // stop short of the end so we don't scan off the end doing
    // the hashing; this means we won't compress the last few bytes
    // unless they were part of something longer
    while (q < start+length && q+12 < end) {
        int m;
        stb_uint h1,h2,h3,h4, h;
        stb_uchar *t;
        int best = 2, dist=0;
    }
    
    void glut_display_func()
{
    // Start the Dear ImGui frame
    ImGui_ImplOpenGL2_NewFrame();
    ImGui_ImplFreeGLUT_NewFrame();
    }
    
    
    {        ImGui::Render();
    }
    
    
    {        // Rendering
        ImGui::Render();
        SDL_GL_MakeCurrent(window, gl_context);
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
        if (!g_PipelineLayout)
    {
        // Constants: we are using 'vec2 offset' and 'vec2 scale' instead of a full 3d projection matrix
        VkPushConstantRange push_constants[1] = {};
        push_constants[0].stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
        push_constants[0].offset = sizeof(float) * 0;
        push_constants[0].size = sizeof(float) * 4;
        VkDescriptorSetLayout set_layout[1] = { g_DescriptorSetLayout };
        VkPipelineLayoutCreateInfo layout_info = {};
        layout_info.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
        layout_info.setLayoutCount = 1;
        layout_info.pSetLayouts = set_layout;
        layout_info.pushConstantRangeCount = 1;
        layout_info.pPushConstantRanges = push_constants;
        err = vkCreatePipelineLayout(g_Device, &layout_info, g_Allocator, &g_PipelineLayout);
        check_vk_result(err);
    }
    
    void ImGui_ImplGlfw_NewFrame()
{
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.Fonts->IsBuilt());     // Font atlas needs to be built, call renderer _NewFrame() function e.g. ImGui_ImplOpenGL3_NewFrame() 
    }
    
    
    { protected:
  /// The CAN client is started.
  bool is_started_ = false;
};
    
    #include <string>
#include <vector>
#include 'esd_can/include/ntcan.h'
#include 'gflags/gflags.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
      /**
   * @brief Stop the ESD CAN client.
   */
    
      int ret = setsockopt(dev_handler_, SOL_CAN_RAW, CAN_RAW_FILTER, &filter,
                       sizeof(filter));
  if (ret < 0) {
    AERROR << 'add receive msg id filter error code: ' << ret;
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    #include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
    
    #include <cmath>
#include <iostream>
#include <memory>
#include <sstream>
#include <thread>
#include <vector>
    
    
    {  receiver.Init(&can_client, &pm, false);
  EXPECT_EQ(receiver.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(receiver.IsRunning());
  receiver.Stop();
  EXPECT_FALSE(receiver.IsRunning());
}
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
      /**
   * @brief Check if the bit on a specified position is one.
   * @param pos The position of the bit to check.
   * @return If the bit on a specified position is one.
   */
  bool is_bit_1(const int32_t pos) const;
    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');