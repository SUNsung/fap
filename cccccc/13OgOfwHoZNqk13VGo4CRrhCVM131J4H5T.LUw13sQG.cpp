
        
        
    {
/**
 * @name tess_add_doc_word
 *
 * Add the given word to the document dictionary
 */
void Tesseract::tess_add_doc_word(WERD_CHOICE *word_choice) {
  getDict().add_document_word(*word_choice);
}
}  // namespace tesseract

    
    #include 'errcode.h'
    
    // A useful base struct to facilitate the common operation of sorting a vector
// of simple or smart-pointer data using a separate key. Similar to STL pair.
template <typename Key, typename Data>
struct KDPair {
  KDPair() {}
  KDPair(Key k, Data d) : data(d), key(k) {}
    }
    
    class AT_API Scalar {
public:
  Scalar() : Scalar(int64_t(0)) {}
    }
    
    #include 'ATen/Config.h'
namespace at {
namespace native {
    }
    }
    
    #if ${isCUDA}
static cudaError_t call_deleter(void * ctx, void * data) {
  auto fnptr = (std::function<void(void*)>*) ctx;
  (*fnptr)(data);
  delete fnptr;
  return cudaSuccess;
}
static THCDeviceAllocator storage_deleter = {
  nullptr,
  nullptr,
  call_deleter,
  nullptr,
  nullptr,
};
static cudaError_t wrapped_alloc(void * ctx, void** result, size_t size, cudaStream_t stream) {
  auto ac = static_cast<detail::AllocatorRetainable*>(ctx);
  ac->retain();
  *result = ac->allocate(size);
  return cudaSuccess;
}
static cudaError_t wrapped_free(void * ctx, void * data) {
  auto ac = static_cast<detail::AllocatorRetainable*>(ctx);
  ac->deallocate(data);
  ac->release();
  return cudaSuccess;
}
static THCDeviceAllocator wrapped_allocator = {
  wrapped_alloc,
  nullptr,
  wrapped_free,
  nullptr,
  nullptr,
};
#else
static void call_deleter(void * ctx, void * data) {
  auto fnptr = (std::function<void(void*)>*) ctx;
  (*fnptr)(data);
  delete fnptr;
}
static THAllocator storage_deleter = {
  nullptr,
  nullptr,
  call_deleter,
};
static void* wrapped_alloc(void * ctx, ptrdiff_t size) {
  auto ac = static_cast<detail::AllocatorRetainable*>(ctx);
  ac->retain();
  return ac->allocate(size);
}
static void wrapped_free(void * ctx, void * data) {
  auto ac = static_cast<detail::AllocatorRetainable*>(ctx);
  ac->deallocate(data);
  ac->release();
}
static THAllocator wrapped_allocator = {
  wrapped_alloc,
  nullptr,
  wrapped_free,
};
#endif
    
      auto ilen = input_size[0];
  auto batchSize = input_size[1];
  auto inputPlanes = input_size[2];
  auto outputPlanes = weight_size[2];
  auto kw = weight_size[0];
  auto olen = input_size[0] - kw + 1 + pad * 2;
  auto real_pad = (olen - ilen + kw - 1) / 2;
    
    #ifndef BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP
    
    #include <boost/asio/detail/config.hpp>
    
      std::size_t check_for_completion(
      const boost::system::error_code& ec,
      std::size_t total_transferred)
  {
    return detail::adapt_completion_condition_result(
        completion_condition_(ec, total_transferred));
  }
    
      static void init_native_buffer(iovec& iov,
      const boost::asio::mutable_buffer& buffer)
  {
    init_iov_base(iov.iov_base, boost::asio::buffer_cast<void*>(buffer));
    iov.iov_len = boost::asio::buffer_size(buffer);
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // !defined(BOOST_ASIO_WINDOWS) && !defined(__CYGWIN__)
    
    
    {private:
  static void barrier()
  {
#if defined(__ARM_ARCH_4__) \
    || defined(__ARM_ARCH_4T__) \
    || defined(__ARM_ARCH_5__) \
    || defined(__ARM_ARCH_5E__) \
    || defined(__ARM_ARCH_5T__) \
    || defined(__ARM_ARCH_5TE__) \
    || defined(__ARM_ARCH_5TEJ__) \
    || defined(__ARM_ARCH_6__) \
    || defined(__ARM_ARCH_6J__) \
    || defined(__ARM_ARCH_6K__) \
    || defined(__ARM_ARCH_6Z__) \
    || defined(__ARM_ARCH_6ZK__) \
    || defined(__ARM_ARCH_6T2__)
# if defined(__thumb__)
    // This is just a placeholder and almost certainly not sufficient.
    __asm__ __volatile__ ('' : : : 'memory');
# else // defined(__thumb__)
    int a = 0, b = 0;
    __asm__ __volatile__ ('swp %0, %1, [%2]'
        : '=&r'(a) : 'r'(1), 'r'(&b) : 'memory', 'cc');
# endif // defined(__thumb__)
#else
    // ARMv7 and later.
    __asm__ __volatile__ ('dmb' : : : 'memory');
#endif
  }
};
    
    
    {    // Put all values back into the hash.
    iterator iter = values_.begin();
    while (iter != end_iter)
    {
      std::size_t bucket = calculate_hash_value(iter->first) % num_buckets_;
      if (buckets_[bucket].last == end_iter)
      {
        buckets_[bucket].first = buckets_[bucket].last = iter++;
      }
      else if (++buckets_[bucket].last == iter)
      {
        ++iter;
      }
      else
      {
        values_.splice(buckets_[bucket].last, values_, iter++);
        --buckets_[bucket].last;
      }
    }
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      for (auto file_it = filenames.begin(); file_it != filenames.end();
       ++file_it) {
    auto &filename = *file_it;
    std::string contents;
    if (!flatbuffers::LoadFile(filename.c_str(), true, &contents))
      Error('unable to load file: ' + filename);
    }
    
        for (int i = 0; i < num_greetings; i++) {
      auto msg_offset = mb_.CreateString('Many hellos, ' + name);
      auto hello_offset = CreateHelloReply(mb_, msg_offset);
      mb_.Finish(hello_offset);
      writer->Write(mb_.ReleaseMessage<HelloReply>());
    }
    
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request, false);
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
    
    #include <thread>
    
    struct ToStringVisitor : public IterationVisitor {
  std::string s;
  void StartSequence() { s += '{ '; }
  void EndSequence() { s += ' }'; }
  void Field(size_t /*field_idx*/, size_t set_idx, ElementaryType /*type*/,
             bool /*is_vector*/, const TypeTable * /*type_table*/,
             const char *name, const uint8_t *val) {
    if (!val) return;
    if (set_idx) s += ', ';
    if (name) {
      s += name;
      s += ': ';
    }
  }
  template<typename T> void Named(T x, const char *name) {
    if (name)
      s += name;
    else
      s += NumToString(x);
  }
  void UType(uint8_t x, const char *name) { Named(x, name); }
  void Bool(bool x) { s += x ? 'true' : 'false'; }
  void Char(int8_t x, const char *name) { Named(x, name); }
  void UChar(uint8_t x, const char *name) { Named(x, name); }
  void Short(int16_t x, const char *name) { Named(x, name); }
  void UShort(uint16_t x, const char *name) { Named(x, name); }
  void Int(int32_t x, const char *name) { Named(x, name); }
  void UInt(uint32_t x, const char *name) { Named(x, name); }
  void Long(int64_t x) { s += NumToString(x); }
  void ULong(uint64_t x) { s += NumToString(x); }
  void Float(float x) { s += NumToString(x); }
  void Double(double x) { s += NumToString(x); }
  void String(const struct String *str) {
    EscapeString(str->c_str(), str->size(), &s, true);
  }
  void Unknown(const uint8_t *) { s += '(?)'; }
  void StartVector() { s += '[ '; }
  void EndVector() { s += ' ]'; }
  void Element(size_t i, ElementaryType /*type*/,
               const TypeTable * /*type_table*/, const uint8_t * /*val*/) {
    if (i) s += ', ';
  }
};
    
      // ** file/network code goes here :) **
  // access builder.GetBufferPointer() for builder.GetSize() bytes
    
    static const char *g_program_name = nullptr;