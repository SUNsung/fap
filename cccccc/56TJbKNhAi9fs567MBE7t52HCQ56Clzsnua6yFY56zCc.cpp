
        
          // Instead of 1/0, we want to see true/false for bool values.
  Message& operator <<(bool b) {
    return *this << (b ? 'true' : 'false');
  }
    
    #include 'gtest/internal/gtest-port.h'
    
    #pragma once
    
    namespace CNTK
{
    class PackedValue final : public Value
    {
        template <typename T, typename ...CtorArgTypes>
        friend inline std::shared_ptr<T> MakeSharedObject(CtorArgTypes&& ...ctorArgs);
    }
    }
    
    // DataReader Constructor
// options - [in] string  of options (i.e. '-windowsize:11 -addenergy') data reader specific
#pragma optimize('', off) // TODO work around potential VS2015 code optimization bug, replacing virtual- by non-virtual call in Init() below
template <class ConfigRecordType>
DataReader::DataReader(const ConfigRecordType& config)
{
    typedef void (*GetReaderProc)(IDataReader** preader);
    }
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
    public:
    ScopeTimer(size_t verbosity, const std::string& message)
        : m_verbosity(verbosity), m_message(message)
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Start();
        }
    }
    
    void Speed::startWithTarget(Node* target)
{
    if (target && _innerAction)
    {
        Action::startWithTarget(target);
        _innerAction->startWithTarget(target);
    }
    else
        log('Speed::startWithTarget error: target(%p) or _innerAction(%p) is nullptr!', target, _innerAction);
}
    
    
    {    return ret;
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        /**
    @brief Show part of the tile.
    @param pos The position index of the tile should be shown.
    @param distance The percentage that the tile should be shown.
    */
    virtual void transformTile(const Vec2& pos, float distance);
    
    /**
 * @addtogroup _2d
 * @{
 */
    }
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
    #include <stdexcept>
    
       private:
    static constexpr intptr_t kDummyFlag = 1;
    static constexpr intptr_t kExecutorMask = ~kDummyFlag;
    
    #pragma once
    
    #pragma once
    
    #include <zlib.h>
    
      /* Get a reference to the pointer, either from the local batch or
   * from the global count.
   *
   * return is the base ptr, and the previous local count, if it is
   * needed for compare_and_swap later.
   */
  PackedPtr takeOwnedBase(std::memory_order order) const noexcept {
    PackedPtr local, newlocal;
    local = ptr_.load(std::memory_order_acquire);
    while (true) {
      if (!local.get()) {
        return local;
      }
      newlocal = local;
      if (get_local_count(newlocal) + 1 > EXTERNAL_OFFSET) {
        // spinlock in the rare case we have more than
        // EXTERNAL_OFFSET threads trying to access at once.
        std::this_thread::yield();
        // Force DeterministicSchedule to choose a different thread
        local = ptr_.load(std::memory_order_acquire);
      } else {
        newlocal.setExtra(newlocal.extra() + 1);
        assert(get_local_count(newlocal) > 0);
        if (ptr_.compare_exchange_weak(local, newlocal, order)) {
          break;
        }
      }
    }
    }
    
      std::shared_ptr<T> get() const {
    folly::hazptr_local<1> hazptr;
    auto slots = hazptr[0].get_protected(slots_);
    if (!slots) {
      return nullptr;
    }
    return (slots->slots_)[AccessSpreader<>::current(kNumSlots)];
  }
    
        for (int i = 0; i < num_greetings; i++) {
      auto msg_offset = mb_.CreateString('Many hellos, ' + name);
      auto hello_offset = CreateHelloReply(mb_, msg_offset);
      mb_.Finish(hello_offset);
      writer->Write(mb_.ReleaseMessage<HelloReply>());
    }
    
    // cpp_generator.h/.cc do not directly depend on GRPC/ProtoBuf, such that they
// can be used to generate code for other serialization systems, such as
// FlatBuffers.
    
    
    {  virtual grpc::string get_input_type_name() const = 0;
  virtual grpc::string get_output_type_name() const = 0;
  virtual bool NoStreaming() const = 0;
  virtual bool ClientStreaming() const = 0;
  virtual bool ServerStreaming() const = 0;
  virtual bool BidiStreaming() const = 0;
};
    
    #endif  // FLATBUFFERS_HASH_H_

    
     private:
  bool LoadSchema(const std::string &ident, Parser *parser) {
    // Find the schema, if not, exit.
    auto it = schemas_.find(ident);
    if (it == schemas_.end()) {
      // Don't attach the identifier, since it may not be human readable.
      lasterror_ = 'identifier for this buffer not in the registry';
      return false;
    }
    auto &schema = it->second;
    // Load the schema from disk. If not, exit.
    std::string schematext;
    if (!LoadFile(schema.path_.c_str(), false, &schematext)) {
      lasterror_ = 'could not load schema: ' + schema.path_;
      return false;
    }
    // Parse schema.
    parser->opts = opts_;
    if (!parser->Parse(schematext.c_str(), vector_data(include_paths_),
                       schema.path_.c_str())) {
      lasterror_ = parser->error_;
      return false;
    }
    return true;
  }
    
    // Example how to use FlatBuffers to create and read binary buffers.
    
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::PrepareAsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), cq, rpcmethod_Retrieve_, context, request, false, nullptr);
}
    
    #include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>
    
    struct Parameters {
  //Defines the custom parameter types for methods
  //eg: flatbuffers uses flatbuffers.Builder as input for the client and output for the server
  grpc::string custom_method_io_type;
    }
    
      std::string message_header_ext() const { return '_generated.h'; }
    
    double GetAnyValueF(reflection::BaseType type, const uint8_t *data) {
  switch (type) {
    case reflection::Float: return static_cast<double>(ReadScalar<float>(data));
    case reflection::Double: return ReadScalar<double>(data);
    case reflection::String: {
      auto s =
          reinterpret_cast<const String *>(ReadScalar<uoffset_t>(data) + data);
      return s ? strtod(s->c_str(), nullptr) : 0.0;
    }
    default: return static_cast<double>(GetAnyValueI(type, data));
  }
}