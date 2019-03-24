
        
        typedef ScopedPythonPtr<PyObject> ScopedPyObjectPtr;
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
      // Different data, can't transform.
  decode_data.AddString(1, 'abcdefghIJ', 'zbcdefghIJ');
  decode_data.AddString(3, 'abcdefghIJ', 'abcdezghIJ');
  // Shortened data, can't transform.
  decode_data.AddString(2, 'abcdefghIJ', 'abcdefghI');
  // Extra data, can't transform.
  decode_data.AddString(4, 'abcdefghIJ', 'abcdefghIJz');
    
    OneofGenerator::OneofGenerator(const OneofDescriptor* descriptor)
    : descriptor_(descriptor) {
  variables_['enum_name'] = OneofEnumName(descriptor_);
  variables_['name'] = OneofName(descriptor_);
  variables_['capitalized_name'] = OneofNameCapitalized(descriptor_);
  variables_['raw_index'] = SimpleItoa(descriptor_->index());
  const Descriptor* msg_descriptor = descriptor_->containing_type();
  variables_['owning_message_class'] = ClassName(msg_descriptor);
    }
    
    void MapLiteTestUtil::ExpectArenaMapFieldsSet(
    const unittest::TestArenaMapLite& message) {
  MapTestUtilImpl::ExpectArenaMapFieldsSet<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_BAZ_LITE>(
      message);
}
    
    TEST(StatusOr, TestPointerAssignmentStatusOKConverting) {
  Derived derived;
  StatusOr<Derived*> source(&derived);
  StatusOr<Base2*>   target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(static_cast<const Base2*>(source.ValueOrDie()),
            target.ValueOrDie());
}
    
    
// type_equals_ is a template type comparator, similar to Loki IsSameType.
// type_equals_<A, B>::value is true iff 'A' is the same type as 'B'.
//
// New code should prefer base::is_same, defined in base/type_traits.h.
// It is functionally identical, but is_same is the standard spelling.
template<typename A, typename B>
struct type_equals_ : public false_ {
};
    
      // Parsing accepts an fractional digits as long as they fit into nano
  // precision.
  EXPECT_TRUE(TimeUtil::FromString('1970-01-01T00:00:00.1Z', &time));
  EXPECT_EQ(100000000, TimeUtil::TimestampToNanoseconds(time));
  EXPECT_TRUE(TimeUtil::FromString('1970-01-01T00:00:00.0001Z', &time));
  EXPECT_EQ(100000, TimeUtil::TimestampToNanoseconds(time));
  EXPECT_TRUE(TimeUtil::FromString('1970-01-01T00:00:00.0000001Z', &time));
  EXPECT_EQ(100, TimeUtil::TimestampToNanoseconds(time));
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    namespace grpc_go_generator {
    }
    
        // Get the value of a union from an object.
    void GetUnionField(const StructDef &struct_def, const FieldDef &field,
      std::string *code_ptr) {
      std::string &code = *code_ptr;
      GenReceiver(struct_def, code_ptr);
      code += MakeCamel(NormalizedName(field)) + '()\n';
      code += OffsetPrefix(field);
    }
    
    struct Type FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BASE_TYPE = 4,
    VT_ELEMENT = 6,
    VT_INDEX = 8
  };
  BaseType base_type() const {
    return static_cast<BaseType>(GetField<int8_t>(VT_BASE_TYPE, 0));
  }
  BaseType element() const {
    return static_cast<BaseType>(GetField<int8_t>(VT_ELEMENT, 0));
  }
  int32_t index() const {
    return GetField<int32_t>(VT_INDEX, -1);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_BASE_TYPE) &&
           VerifyField<int8_t>(verifier, VT_ELEMENT) &&
           VerifyField<int32_t>(verifier, VT_INDEX) &&
           verifier.EndTable();
  }
};
    
    MonsterStorage::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(
          std::mem_fn(&MonsterStorage::Service::Store), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Stat>, flatbuffers::grpc::Message<Monster>>(
          std::mem_fn(&MonsterStorage::Service::Retrieve), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[2],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(
          std::mem_fn(&MonsterStorage::Service::GetMaxHitPoint), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[3],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(
          std::mem_fn(&MonsterStorage::Service::GetMinMaxHitPoints), this)));
}
    
    class CharScanner;
    
    #include <catch2/catch.hpp>
    
    // Expected compact output (all assertions):
//
// prompt> 100-Fix-Section.exe --reporter compact --success
// 100-Fix-Section.cpp:17: passed: v.size() == 5 for: 5 == 5
// 100-Fix-Section.cpp:18: passed: v.capacity() >= 5 for: 5 >= 5
// 100-Fix-Section.cpp:23: passed: v.size() == 10 for: 10 == 10
// 100-Fix-Section.cpp:24: passed: v.capacity() >= 10 for: 10 >= 10
// 100-Fix-Section.cpp:17: passed: v.size() == 5 for: 5 == 5
// 100-Fix-Section.cpp:18: passed: v.capacity() >= 5 for: 5 >= 5
// 100-Fix-Section.cpp:29: passed: v.size() == 0 for: 0 == 0
// 100-Fix-Section.cpp:30: passed: v.capacity() >= 5 for: 5 >= 5
// 100-Fix-Section.cpp:17: passed: v.size() == 5 for: 5 == 5
// 100-Fix-Section.cpp:18: passed: v.capacity() >= 5 for: 5 >= 5
// 100-Fix-Section.cpp:35: passed: v.size() == 5 for: 5 == 5
// 100-Fix-Section.cpp:36: passed: v.capacity() >= 10 for: 10 >= 10
// 100-Fix-Section.cpp:17: passed: v.size() == 5 for: 5 == 5
// 100-Fix-Section.cpp:18: passed: v.capacity() >= 5 for: 5 >= 5
// 100-Fix-Section.cpp:41: passed: v.size() == 5 for: 5 == 5
// 100-Fix-Section.cpp:42: passed: v.capacity() >= 5 for: 5 >= 5
// Passed 1 test case with 16 assertions.

    
    
    {
    {
    {            THEN( 'neither size nor capacity are changed' ) {
                REQUIRE( v.size() == 5 );
                REQUIRE( v.capacity() >= 5 );
            }
        }
    }
}
    
    void PlusNumberWrap::NewInstance(const v8::FunctionCallbackInfo<v8::Value>& args) {
    auto isolate = args.GetIsolate();
    HandleScope scope(isolate);
    }
    
        inline ITracker& TrackerContext::startRun() {
        m_rootTracker = new SectionTracker( '{root}', *this, CATCH_NULL );
        m_currentTracker = CATCH_NULL;
        m_runState = Executing;
        return *m_rootTracker;
    }
    
        /// <summary> Interface for allocator. </summary>
    class Allocator {
    public:
        /// <summary> Allocate memory of given size. </summary>
        /// <param name='size'> Requested size. </summary>
        /// <returns> Allocated memory. May throw if error happens. </returns>
        virtual void* Allocate(size_t size) = 0;
    }
    
        /// <summary> std::make_unique using Napa default allocator. </summary>
    template <typename T, typename... Args>
    UniquePtr<T> MakeUnique(Args&&... args) {
        void* memory = ::napa_allocate(sizeof(T));
        T* t = new (memory) T(std::forward<Args>(args)...);
        return UniquePtr<T>(t, DefaultDeleter<T>);
    }
    
    #include <napa/exports.h>
    
                auto thisObject = NAPA_OBJECTWRAP::Unwrap<ShareableWrap>(args.Holder());
            payload->CreateDataProperty(
                context,
                v8_helpers::MakeV8String(isolate, 'handle'),
                v8_helpers::PtrToV8Uint32Array(isolate, thisObject->_object.get()));
    
        template <typename T>
    bool Allocator<T>::operator==(const Allocator& other) const {
        return *_allocator == *(other._allocator);
    }