Value const* Value::find(char const* key, char const* cend) const
{
  JSON_ASSERT_MESSAGE(
      type_ == nullValue || type_ == objectValue,
      'in Json::Value::find(key, end, found): requires objectValue or nullValue');
  if (type_ == nullValue) return NULL;
  CZString actualKey(key, static_cast<unsigned>(cend-key), CZString::noDuplication);
  ObjectValues::const_iterator it = value_.map_->find(actualKey);
  if (it == value_.map_->end()) return NULL;
  return &(*it).second;
}
const Value& Value::operator[](const char* key) const
{
  Value const* found = find(key, key + strlen(key));
  if (!found) return nullRef;
  return *found;
}
Value const& Value::operator[](std::string const& key) const
{
  Value const* found = find(key.data(), key.data() + key.length());
  if (!found) return nullRef;
  return *found;
}
    
    namespace oneof_descriptor {
PyObject* NewOneofFieldsSeq(const OneofDescriptor* descriptor);
}  // namespace oneof_descriptor
    
    namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      virtual void Generate(io::Printer* printer);
    
      /// Sets the non-blocking mode of the native acceptor implementation.
  /**
   * This function is used to modify the non-blocking mode of the underlying
   * native acceptor. It has no effect on the behaviour of the acceptor object's
   * synchronous operations.
   *
   * @param mode If @c true, the underlying acceptor is put into non-blocking
   * mode and direct system calls may fail with boost::asio::error::would_block
   * (or the equivalent system error).
   *
   * @throws boost::system::system_error Thrown on failure. If the @c mode is
   * @c false, but the current value of @c non_blocking() is @c true, this
   * function fails with boost::asio::error::invalid_argument, as the
   * combination does not make sense.
   */
  void native_non_blocking(bool mode)
  {
    boost::system::error_code ec;
    this->get_service().native_non_blocking(
        this->get_implementation(), mode, ec);
    boost::asio::detail::throw_error(ec, 'native_non_blocking');
  }
    
      /// Set the timer's expiry time as an absolute time.
  /**
   * This function sets the expiry time. Any pending asynchronous wait
   * operations will be cancelled. The handler for each cancelled operation will
   * be invoked with the boost::asio::error::operation_aborted error code.
   *
   * @param expiry_time The expiry time to be used for the timer.
   *
   * @return The number of asynchronous operations that were cancelled.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @note If the timer has already expired when expires_at() is called, then
   * the handlers for asynchronous wait operations will:
   *
   * @li have already been invoked; or
   *
   * @li have been queued for invocation in the near future.
   *
   * These handlers can no longer be cancelled, and therefore are passed an
   * error code that indicates the successful completion of the wait operation.
   */
  std::size_t expires_at(const time_point& expiry_time)
  {
    boost::system::error_code ec;
    std::size_t s = this->service.expires_at(
        this->implementation, expiry_time, ec);
    boost::asio::detail::throw_error(ec, 'expires_at');
    return s;
  }
    
      /// Construct a non-modifiable buffer from a modifiable one.
  const_buffer(const mutable_buffer& b)
    : data_(boost::asio::detail::buffer_cast_helper(b)),
      size_(boost::asio::detail::buffer_size_helper(b))
#if defined(BOOST_ASIO_ENABLE_BUFFER_DEBUGGING)
      , debug_check_(b.get_debug_check())
#endif // BOOST_ASIO_ENABLE_BUFFER_DEBUGGING
  {
  }
    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #include <boost/asio/detail/addressof.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_sequence_adapter.hpp>
#include <boost/asio/detail/descriptor_ops.hpp>
#include <boost/asio/detail/fenced_block.hpp>
#include <boost/asio/detail/reactor_op.hpp>
    
    // Calls to asio_handler_allocate and asio_handler_deallocate must be made from
// a namespace that does not contain any overloads of these functions. The
// boost_asio_handler_alloc_helpers namespace is defined here for that purpose.
namespace boost_asio_handler_alloc_helpers {
    }
    
    #define BOOST_ASIO_HANDSHAKE_HANDLER_CHECK( \
    handler_type, handler) \
  typedef int BOOST_ASIO_UNUSED_TYPEDEF
    
      // Re-initialise the hash from the values already contained in the list.
  void rehash(std::size_t num_buckets)
  {
    if (num_buckets == num_buckets_)
      return;
    num_buckets_ = num_buckets;
    BOOST_ASIO_ASSERT(num_buckets_ != 0);
    }
    
      errno = 0;
#if defined(__SYMBIAN32__)
  int result = error_wrapper(::fcntl(d, F_GETFL, 0), ec);
  if (result >= 0)
  {
    errno = 0;
    int flag = (value ? (result | O_NONBLOCK) : (result & ~O_NONBLOCK));
    result = error_wrapper(::fcntl(d, F_SETFL, flag), ec);
  }
#else // defined(__SYMBIAN32__)
  ioctl_arg_type arg = (value ? 1 : 0);
  int result = error_wrapper(::ioctl(d, FIONBIO, &arg), ec);
#endif // defined(__SYMBIAN32__)
    
    #endif // defined(BOOST_ASIO_HAS_EPOLL)
    
    #include 'db/filename.h'
#include 'leveldb/env.h'
#include 'leveldb/table.h'
#include 'util/coding.h'
    
      ASSERT_TRUE(! Overlaps('100', '149'));
  ASSERT_TRUE(! Overlaps('251', '299'));
  ASSERT_TRUE(! Overlaps('451', '500'));
  ASSERT_TRUE(! Overlaps('351', '399'));
    
    
    {}  // namespace leveldb
    
      void ReadSequential() {
    int status;
    sqlite3_stmt *pStmt;
    std::string read_str = 'SELECT * FROM test ORDER BY key';
    }
    
    #include 'db/db_impl.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'util/testharness.h'
#include <string>
#include <vector>
    
      // delete second key range
  batch.Clear();
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Delete(Key2(i));
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    Iterator::~Iterator() {
  if (cleanup_.function != NULL) {
    (*cleanup_.function)(cleanup_.arg1, cleanup_.arg2);
    for (Cleanup* c = cleanup_.next; c != NULL; ) {
      (*c->function)(c->arg1, c->arg2);
      Cleanup* next = c->next;
      delete c;
      c = next;
    }
  }
}
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
    
    {        int idx_offset = 0;
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                ALLEGRO_BITMAP* texture = (ALLEGRO_BITMAP*)pcmd->TextureId;
                al_set_clipping_rectangle(pcmd->ClipRect.x, pcmd->ClipRect.y, pcmd->ClipRect.z-pcmd->ClipRect.x, pcmd->ClipRect.w-pcmd->ClipRect.y);
                al_draw_indexed_prim(&vertices[0], g_VertexDecl, texture, &indices[idx_offset], pcmd->ElemCount, ALLEGRO_PRIM_TRIANGLE_LIST);
            }
            idx_offset += pcmd->ElemCount;
        }
    }
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);