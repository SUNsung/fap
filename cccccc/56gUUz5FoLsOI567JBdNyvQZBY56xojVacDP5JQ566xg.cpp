
        
        // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    IPC_SYNC_MESSAGE_ROUTED4_1(ShellViewHostMsg_Call_Object_Method_Sync,
                           int /* object id */,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    void Clipboard::SetText(std::string& text) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  ui::Clipboard::ObjectMap map;
  map[ui::Clipboard::CBF_TEXT].push_back(
      std::vector<char>(text.begin(), text.end()));
  clipboard->WriteObjects(ui::CLIPBOARD_TYPE_COPY_PASTE, map);
}
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
      GdkRectangle screen_rect;
  gdk_screen_get_monitor_geometry(screen, monitor, &screen_rect);
    
      if (menu_item->submenu_)
    menu_model_->InsertSubMenuAt(pos, menu_item->id(), menu_item->label_,
                                 menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->InsertItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->InsertCheckItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->InsertSeparatorAt(pos, ui::NORMAL_SEPARATOR);
    
    
    {
} // namespace extensions

    
    class NwObjCallObjectMethodAsyncFunction : public UIThreadExtensionFunction {
 public:
  NwObjCallObjectMethodAsyncFunction();
    }
    
    void bitwiseAnd(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseAnd());
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
    
    void Canny3x3L2(const Size2D &size,
                const u8 * srcBase, ptrdiff_t srcStride,
                u8 * dstBase, ptrdiff_t dstStride,
                f64 low_thresh, f64 high_thresh,
                Margin borderMargin)
{
    internal::assertSupportedConfiguration(isCanny3x3Supported(size));
#ifdef CAROTENE_NEON
    Canny3x3<true, false>(size, 1,
                          srcBase, srcStride,
                          dstBase, dstStride,
                          NULL, 0,
                          NULL, 0,
                          low_thresh, high_thresh,
                          borderMargin);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)low_thresh;
    (void)high_thresh;
    (void)borderMargin;
#endif
}
    
    u8 cornerScore(const u8* ptr, const ptrdiff_t pixel[])
{
    const s32 K = 8, N = 16 + K + 1;
    s32 k, v = ptr[0];
    s16 d[(N + 7) & ~7];
    for( k = 0; k < N; k++ )
        d[k] = (s16)(v - ptr[pixel[k]]);
    }
    
    void fillMinMaxLocs(const Size2D & size,
                    const u8 * srcBase, ptrdiff_t srcStride,
                    u8 minVal, size_t * minLocPtr, s32 & minLocCount, s32 minLocCapacity,
                    u8 maxVal, size_t * maxLocPtr, s32 & maxLocCount, s32 maxLocCapacity)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    namespace testing {
    }
    
    #define EXPECT_FATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ALL_THREADS, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_)};
    return ValuesIn(array);
  }
    
      // Converts a wide C string to a String using the UTF-8 encoding.
  // NULL will be converted to '(null)'.  If an error occurred during
  // the conversion, '(failed to convert from wide string)' is
  // returned.
  static std::string ShowWideCString(const wchar_t* wide_c_str);
    
      GTEST_DECLARE_TUPLE_AS_FRIEND_
    
    
    {}  // namespace
    
    // Tests the default c'tor.
TEST(MyString, DefaultConstructor) {
  const MyString s;
    }
    
      void PopulateCache() {
    Random rnd(1);
    for (int64_t i = 0; i < FLAGS_cache_size; i++) {
      uint64_t rand_key = rnd.Next() % FLAGS_max_key;
      // Cast uint64* to be char*, data would be copied to cache
      Slice key(reinterpret_cast<char*>(&rand_key), 8);
      // do insert
      cache_->Insert(key, new char[10], 1, &deleter);
    }
  }
    
    bool WriteController::IsStopped() const {
  return total_stopped_.load(std::memory_order_relaxed) > 0;
}
// This is inside DB mutex, so we can't sleep and need to minimize
// frequency to get time.
// If it turns out to be a performance issue, we can redesign the thread
// synchronization model here.
// The function trust caller will sleep micros returned.
uint64_t WriteController::GetDelay(Env* env, uint64_t num_bytes) {
  if (total_stopped_.load(std::memory_order_relaxed) > 0) {
    return 0;
  }
  if (total_delayed_.load(std::memory_order_relaxed) == 0) {
    return 0;
  }
    }
    
    #include 'rocksdb/env.h'
    
      // Always pick a compaction which includes all files whenever possible.
  CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) override {
    ColumnFamilyMetaData cf_meta;
    db->GetColumnFamilyMetaData(&cf_meta);
    }
    
      {
    PinnableSlice pinnable_val;
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
  }
    
    class DB;
    
    TEST(SocketCanClientRawTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::SOCKET_CAN_RAW);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    void ObjectExtendedInfo60D::Parse(const std::uint8_t* bytes, int32_t length,
                                  ContiRadar* conti_radar) const {
  int obj_id = object_id(bytes, length);
  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_accel(longitude_accel(bytes, length));
      obs->set_lateral_accel(lateral_accel(bytes, length));
      obs->set_oritation_angle(oritation_angle(bytes, length));
      obs->set_length(object_length(bytes, length));
      obs->set_width(object_width(bytes, length));
      obs->set_obstacle_class(obstacle_class(bytes, length));
      break;
    }
  }
  // auto conti_obs = conti_radar->mutable_contiobs(object_id(bytes, length));
}
    
    BaseMapMatrix::BaseMapMatrix(const BaseMapMatrix& cells) {}
    
      x <<= 0;
  x >>= 0;
    
    // config detail: {'name': 'motor_temperature', 'offset': -40.0,
// 'precision': 1.0, 'len': 16, 'is_signed_var': True, 'physical_range':
// '[-32808|32727]', 'bit': 23, 'type': 'int', 'order': 'motorola',
// 'physical_unit': 'deg C'}
int Brakemotorrpt271::motor_temperature(const std::uint8_t* bytes,
                                        int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {  double ret = x * 0.001000;
  return ret;
}
    
    // config detail: {'name': 'pacmod_status', 'enum': {0:
// 'PACMOD_STATUS_CONTROL_DISABLED', 1: 'PACMOD_STATUS_CONTROL_ENABLED'},
// 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0,
// 'physical_range': '[0|1]', 'bit': 0, 'type': 'enum', 'order': 'motorola',
// 'physical_unit': ''}
Global_rpt_6a::Pacmod_statusType Globalrpt6a::pacmod_status(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 1);
    }
    
    StoreBuffer::StoreBuffer(Heap* heap)
    : heap_(heap), top_(nullptr), current_(0), mode_(NOT_IN_GC) {
  for (int i = 0; i < kStoreBuffers; i++) {
    start_[i] = nullptr;
    limit_[i] = nullptr;
    lazy_top_[i] = nullptr;
  }
  task_running_ = false;
  insertion_callback = &InsertDuringRuntime;
  deletion_callback = &DeleteDuringRuntime;
}
    
    void StressScavengeObserver::Step(int bytes_allocated, Address soon_object,
                                  size_t size) {
  if (has_requested_gc_ || heap_.new_space()->Capacity() == 0) {
    return;
  }
    }
    
      // Get the address of the location in the code object
  // and compute the fp-to-sp delta in register edx.
  __ mov(ecx, Operand(esp, kSavedRegistersAreaSize));
  __ lea(edx, Operand(esp, kSavedRegistersAreaSize + 1 * kSystemPointerSize));
    
    
// The IA32 disassembler implementation.
class DisassemblerIA32 {
 public:
  DisassemblerIA32(
      const NameConverter& converter,
      Disassembler::UnimplementedOpcodeAction unimplemented_opcode_action)
      : converter_(converter),
        vex_byte0_(0),
        vex_byte1_(0),
        vex_byte2_(0),
        instruction_table_(InstructionTable::get_instance()),
        tmp_buffer_pos_(0),
        unimplemented_opcode_action_(unimplemented_opcode_action) {
    tmp_buffer_[0] = '\0';
  }
    }
    
    
    {  // Clobber clobbered registers when running with the debug-code flag
  // turned on to provoke errors.
  if (emit_debug_code()) {
    mov(address, Immediate(bit_cast<int32_t>(kZapValue)));
    mov(value, Immediate(bit_cast<int32_t>(kZapValue)));
  }
}
    
      // Convenience function: Same as above, but takes the fid instead.
  void CallRuntime(Runtime::FunctionId fid, int num_arguments,
                   SaveFPRegsMode save_doubles = kDontSaveFPRegs) {
    CallRuntime(Runtime::FunctionForId(fid), num_arguments, save_doubles);
  }
    
    #define SSE4_RM_INSTRUCTION_LIST(V) \
  V(pmovsxbw, 66, 0F, 38, 20)       \
  V(pmovsxwd, 66, 0F, 38, 23)       \
  V(pmovzxbw, 66, 0F, 38, 30)       \
  V(pmovzxwd, 66, 0F, 38, 33)       \
  V(ptest, 66, 0F, 38, 17)
    
    
    {
    {
    {      Label uint8_elements(this), int8_elements(this), uint16_elements(this),
          int16_elements(this), uint32_elements(this), int32_elements(this),
          float32_elements(this), float64_elements(this),
          bigint64_elements(this), biguint64_elements(this);
      Label* elements_kind_labels[] = {
          &uint8_elements,    &uint8_elements,    &int8_elements,
          &uint16_elements,   &int16_elements,    &uint32_elements,
          &int32_elements,    &float32_elements,  &float64_elements,
          &bigint64_elements, &biguint64_elements};
      int32_t elements_kinds[] = {
          UINT8_ELEMENTS,    UINT8_CLAMPED_ELEMENTS, INT8_ELEMENTS,
          UINT16_ELEMENTS,   INT16_ELEMENTS,         UINT32_ELEMENTS,
          INT32_ELEMENTS,    FLOAT32_ELEMENTS,       FLOAT64_ELEMENTS,
          BIGINT64_ELEMENTS, BIGUINT64_ELEMENTS};
      const size_t kTypedElementsKindCount =
          LAST_FIXED_TYPED_ARRAY_ELEMENTS_KIND -
          FIRST_FIXED_TYPED_ARRAY_ELEMENTS_KIND + 1;
      DCHECK_EQ(kTypedElementsKindCount, arraysize(elements_kinds));
      DCHECK_EQ(kTypedElementsKindCount, arraysize(elements_kind_labels));
      Switch(elements_kind, miss, elements_kinds, elements_kind_labels,
             kTypedElementsKindCount);
      BIND(&uint8_elements);
      {
        Comment('UINT8_ELEMENTS');  // Handles UINT8_CLAMPED_ELEMENTS too.
        Node* element = Load(MachineType::Uint8(), backing_store, intptr_index);
        exit_point->Return(SmiFromInt32(element));
      }
      BIND(&int8_elements);
      {
        Comment('INT8_ELEMENTS');
        Node* element = Load(MachineType::Int8(), backing_store, intptr_index);
        exit_point->Return(SmiFromInt32(element));
      }
      BIND(&uint16_elements);
      {
        Comment('UINT16_ELEMENTS');
        Node* index = WordShl(intptr_index, IntPtrConstant(1));
        Node* element = Load(MachineType::Uint16(), backing_store, index);
        exit_point->Return(SmiFromInt32(element));
      }
      BIND(&int16_elements);
      {
        Comment('INT16_ELEMENTS');
        Node* index = WordShl(intptr_index, IntPtrConstant(1));
        Node* element = Load(MachineType::Int16(), backing_store, index);
        exit_point->Return(SmiFromInt32(element));
      }
      BIND(&uint32_elements);
      {
        Comment('UINT32_ELEMENTS');
        Node* index = WordShl(intptr_index, IntPtrConstant(2));
        Node* element = Load(MachineType::Uint32(), backing_store, index);
        exit_point->Return(ChangeUint32ToTagged(element));
      }
      BIND(&int32_elements);
      {
        Comment('INT32_ELEMENTS');
        Node* index = WordShl(intptr_index, IntPtrConstant(2));
        Node* element = Load(MachineType::Int32(), backing_store, index);
        exit_point->Return(ChangeInt32ToTagged(element));
      }
      BIND(&float32_elements);
      {
        Comment('FLOAT32_ELEMENTS');
        Node* index = WordShl(intptr_index, IntPtrConstant(2));
        Node* element = Load(MachineType::Float32(), backing_store, index);
        var_double_value->Bind(ChangeFloat32ToFloat64(element));
        Goto(rebox_double);
      }
      BIND(&float64_elements);
      {
        Comment('FLOAT64_ELEMENTS');
        Node* index = WordShl(intptr_index, IntPtrConstant(3));
        Node* element = Load(MachineType::Float64(), backing_store, index);
        var_double_value->Bind(element);
        Goto(rebox_double);
      }
      BIND(&bigint64_elements);
      {
        Comment('BIGINT64_ELEMENTS');
        exit_point->Return(LoadFixedTypedArrayElementAsTagged(
            backing_store, intptr_index, BIGINT64_ELEMENTS, INTPTR_PARAMETERS));
      }
      BIND(&biguint64_elements);
      {
        Comment('BIGUINT64_ELEMENTS');
        exit_point->Return(LoadFixedTypedArrayElementAsTagged(
            backing_store, intptr_index, BIGUINT64_ELEMENTS,
            INTPTR_PARAMETERS));
      }
    }
  }
}