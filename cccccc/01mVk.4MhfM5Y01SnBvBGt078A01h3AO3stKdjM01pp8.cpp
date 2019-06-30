
        
        v8::Local<v8::Value> Converter<Dictionary>::ToV8(v8::Isolate* isolate,
                                                 Dictionary val) {
  return val.GetHandle();
}
    
    namespace mate {
    }
    
      WrappableBase* object;
  {
    // Don't continue if the constructor throws an exception.
    v8::TryCatch try_catch(isolate);
    object = internal::InvokeFactory(args, factory);
    if (try_catch.HasCaught()) {
      try_catch.ReThrow();
      return;
    }
  }
    
    // Classes for generating and storing an argument pack of integer indices
// (based on well-known 'indices trick', see: http://goo.gl/bKKojn):
template <size_t... indices>
struct IndicesHolder {};
    
    #ifndef NATIVE_MATE_NATIVE_MATE_OBJECT_TEMPLATE_BUILDER_H_
#define NATIVE_MATE_NATIVE_MATE_OBJECT_TEMPLATE_BUILDER_H_
    
    
    {  *result = notification_callback.Run(parsed_command_line, current_directory)
                ? TRUE
                : FALSE;
  return true;
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
      desired_output_for_decode = 'ABCD__EfghI_j';
  expected = string('\x64\x80\xC5\xA1\x0', 5);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    void MapLiteTestUtil::SetMapFields(unittest::TestMapLite* message) {
  MapTestUtilImpl::SetMapFields<unittest::MapEnumLite,
                                unittest::MAP_ENUM_BAR_LITE,
                                unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
    Status::Status() : error_code_(error::OK) {
}
    
    
    {
    {
    {}  // namespace util
}  // namespace protobuf
}  // namespace google
    
    using namespace std;
    
    
    { private:
  const EnumDescriptor* descriptor_;
  std::vector<const EnumValueDescriptor*> base_values_;
  std::vector<const EnumValueDescriptor*> all_values_;
  std::set<const EnumValueDescriptor*> alias_values_to_skip_;
  const string name_;
};
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
            D3D12_RESOURCE_BARRIER barrier = {};
        barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
        barrier.Transition.pResource   = pTexture;
        barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
        barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_COPY_DEST;
        barrier.Transition.StateAfter  = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    
    
    {        ImGui::Render();
    }