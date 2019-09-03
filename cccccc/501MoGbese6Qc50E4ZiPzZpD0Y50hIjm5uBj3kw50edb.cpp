
        
        const char kAppMenuRegistrarName[] = 'com.canonical.AppMenu.Registrar';
const char kAppMenuRegistrarPath[] = '/com/canonical/AppMenu/Registrar';
    
      // Schedule a notification unresponsive event.
  void ScheduleUnresponsiveEvent(int ms);
    
    namespace electron {
    }
    
    // static
mate::WrappableBase* Notification::New(mate::Arguments* args) {
  if (!Browser::Get()->is_ready()) {
    args->ThrowError('Cannot create Notification before app is ready');
    return nullptr;
  }
  return new Notification(args->isolate(), args->GetThis(), args);
}
    
    
    {}  // namespace electron
    
    namespace electron {
    }
    
      // display::DisplayObserver:
  void OnDisplayAdded(const display::Display& new_display) override;
  void OnDisplayRemoved(const display::Display& old_display) override;
  void OnDisplayMetricsChanged(const display::Display& display,
                               uint32_t changed_metrics) override;
    
      bool delete_view_ = true;
  views::View* view_ = nullptr;
    
    void WebContents::DetachFromOuterFrame() {
  // See detach_webview_frame.patch on how to detach.
  DCHECK(content::GuestMode::IsCrossProcessFrameGuest(web_contents()));
  int frame_tree_node_id =
      static_cast<content::WebContentsImpl*>(web_contents())
          ->GetOuterDelegateFrameTreeNodeId();
  if (frame_tree_node_id != content::FrameTreeNode::kFrameTreeNodeInvalidId) {
    auto* node = content::FrameTreeNode::GloballyFindByID(frame_tree_node_id);
    DCHECK(node->parent());
    node->frame_tree()->RemoveFrame(node);
  }
}
    
        int32_t KeyChord::Vkey()
    {
        return _vkey;
    }
    
    
#if defined(__clang__)
    #if !__has_extension(cxx_override_control)
        #define override
        #define final
    #endif
#elif defined(__GNUC__) && GNUC_VERSION < 40700
    #define override
    #define final
#endif
    
    // Asserts that a given statement causes the program to exit, with an
// integer exit status that satisfies predicate, and emitting error output
// that matches regex.
# define ASSERT_EXIT(statement, predicate, regex) \
    GTEST_DEATH_TEST_(statement, predicate, regex, GTEST_FATAL_FAILURE_)
    
    
    {}  // namespace internal
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
    
    {  template <class Tuple>
  static GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(6, Tuple))
  ConstField(const Tuple& t) { return t.f6_; }
};
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33>
struct Templates33 {
  typedef TemplateSel<T1> Head;
  typedef Templates32<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33> Tail;
};
    
    PlanningBase::~PlanningBase() {}
    
    
    {
    {
    {}  // namespace common
}  // namespace perception
}  // namespace apollo

    
        bool Get(K key, V **value) {
      Entry *prev = nullptr;
      Entry *target = nullptr;
      if (Find(key, &prev, &target)) {
        *value = target->value_ptr.load(std::memory_order_acquire);
        return true;
      }
      return false;
    }
    
    
    {
    {}  // namespace control
}  // namespace apollo

    
      AINFO << 'Init Detector ...';
  BaseObstacleDetector *detector =
      BaseObstacleDetectorRegisterer::GetInstanceByName(FLAGS_detector);
  if (FLAGS_pre_detected_dir == '') {
    CHECK_EQ(detector->Name(), FLAGS_detector);
    CHECK(detector->Init(init_options));
  }
  AINFO << 'Done!';