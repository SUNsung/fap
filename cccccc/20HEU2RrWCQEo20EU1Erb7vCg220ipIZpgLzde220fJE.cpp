
        
          blink::LocalFrame* core_frame = blink::toWebLocalFrameImpl(frame)->frame();
  if (core_frame->deprecatedLocalOwner()) {
    element = blink::toV8((blink::HTMLElement*)core_frame->deprecatedLocalOwner(),
                            frame->mainWorldScriptContext()->Global(),
                            frame->mainWorldScriptContext()->GetIsolate());
  }
  args->Set(0, element);
  args->Set(1, v8_str(request.url().string().utf8().c_str()));
  args->Set(2, policy_obj);
    
      // Get C++ object from its id.
  static Base* GetApiObject(int id);
    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    // Find a file by file name.
bool PyDescriptorDatabase::FindFileByName(const string& filename,
                                          FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(PyObject_CallMethod(
      py_database_, 'FindFileByName', 's#', filename.c_str(), filename.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <sstream>
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
      // Return the amount of unread data the is in the buffer.
  size_type size() const
  {
    return end_offset_ - begin_offset_;
  }
    
    template <typename Handler>
inline void* allocate(std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  return ::operator new(s);
#else
  using boost::asio::asio_handler_allocate;
  return asio_handler_allocate(s, boost::asio::detail::addressof(h));
#endif
}
    
    // With C++0x we can use a combination of enhanced SFINAE and static_assert to
// generate better template error messages. As this technique is not yet widely
// portable, we'll only enable it for tested compilers.
#if !defined(BOOST_ASIO_DISABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT)
# if defined(__GNUC__)
#  if ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 5)) || (__GNUC__ > 4)
#   if defined(__GXX_EXPERIMENTAL_CXX0X__)
#    define BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT 1
#   endif // defined(__GXX_EXPERIMENTAL_CXX0X__)
#  endif // ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 5)) || (__GNUC__ > 4)
# endif // defined(__GNUC__)
# if defined(BOOST_ASIO_MSVC)
#  if (_MSC_VER >= 1600)
#   define BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT 1
#  endif // (_MSC_VER >= 1600)
# endif // defined(BOOST_ASIO_MSVC)
# if defined(__clang__)
#  if __has_feature(__cxx_static_assert__)
#   define BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT 1
#  endif // __has_feature(cxx_static_assert)
# endif // defined(__clang__)
#endif // !defined(BOOST_ASIO_DISABLE_HANDLER_TYPE_REQUIREMENTS)
    
    void buffer_sequence_adapter_base::init_native_buffer(
    buffer_sequence_adapter_base::native_buffer_type& buf,
    const boost::asio::const_buffer& buffer)
{
  std::memset(&buf, 0, sizeof(native_buffer_type));
  Microsoft::WRL::ComPtr<IInspectable> insp
    = Microsoft::WRL::Make<winrt_buffer_impl>(buffer);
  Platform::Object^ buf_obj = reinterpret_cast<Platform::Object^>(insp.Get());
  buf = reinterpret_cast<Windows::Storage::Streams::IBuffer^>(insp.Get());
}
    
        // Check if we need to run the operation again.
    if (ec == boost::asio::error::would_block
        || ec == boost::asio::error::try_again)
      return false;
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    extern JSClass  *jsb_cocosbuilder_CCBAnimationManager_class;
extern JSObject *jsb_cocosbuilder_CCBAnimationManager_prototype;
    
    
    
    
    {        ok &= luaval_to_vec2(tolua_S, 2, &arg0, 'cc.PhysicsJointSpring:setAnchr1');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsJointSpring_setAnchr1'', nullptr);
            return 0;
        }
        cobj->setAnchr1(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.PhysicsJointSpring:setAnchr1',argc, 1);
    return 0;
    
    
    
    	void Keyboard(unsigned char key)
	{
		switch (key)
		{
		case 'w':
			{
				b2Vec2 f = m_body->GetWorldVector(b2Vec2(0.0f, -200.0f));
				b2Vec2 p = m_body->GetWorldPoint(b2Vec2(0.0f, 2.0f));
				m_body->ApplyForce(f, p, true);
			}
			break;
    }
    }
    
    
    {			if ((p.x < -10.0f && v.x < 0.0f) ||
				(p.x > 10.0f && v.x > 0.0f))
			{
				v.x = -v.x;
				m_platform->SetLinearVelocity(v);
			}
		}
    
    void Node::setPosition(int edge, double position)
{
    YGNodeStyleSetPosition(m_node, static_cast<YGEdge>(edge), position);
}
    
        void setPositionType(int positionType);
    void setPosition(int edge, double position);
    void setPositionPercent(int edge, double position);
    
        double width;
    double height;
    
      YGNodeCalculateLayout(root, 100, 100, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root));
    
      ASSERT_FLOAT_EQ(10, YGNodeLayoutGetLeft(root_child1));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child1));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetWidth(root_child1));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child1));
    
      const YGNodeRef root = YGNodeNewWithConfig(config);
  YGNodeStyleSetPadding(root, YGEdgeLeft, 10);
  YGNodeStyleSetPadding(root, YGEdgeTop, 10);
  YGNodeStyleSetPadding(root, YGEdgeRight, 10);
  YGNodeStyleSetPadding(root, YGEdgeBottom, 10);
  YGNodeStyleSetWidth(root, 100);
  YGNodeStyleSetHeight(root, 100);
    
    TEST(YogaTest, recalculate_resolvedDimonsion_onchange) {
  const YGNodeRef root = YGNodeNew();
    }
    
    template<typename... ARGS>
inline void logi(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_INFO, tag, msg, args...);
}
    
      bool hasOnlyOneRef() const {
    return m_refcount == 1;
  }