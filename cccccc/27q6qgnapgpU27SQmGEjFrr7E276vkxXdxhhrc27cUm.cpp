
        
        
    {
    {}  // namespace
}  // namespace tensorflow

    
     protected:
  // Variables accessible from subclasses.
  mutex mu_;
  ContainerInfo cinfo_ GUARDED_BY(mu_);
  T* resource_ GUARDED_BY(mu_) = nullptr;
    
    
    { private:
  // Smoothness constant of smooth hinge loss
  // TODO(sibyl-Aix6ihai): expose this parameter
  const double gamma = 1;
};
    
    // ---------------------------------------------------------------------------
// Inline implementation
// ---------------------------------------------------------------------------
template <PrefetchHint hint>
inline void prefetch(const void* x) {
// Check of COMPILER_GCC macro below is kept only for backward-compatibility
// reasons. COMPILER_GCC3 is the macro that actually enables prefetch.
#if defined(__llvm__) || defined(COMPILER_GCC) || defined(COMPILER_GCC3)
  __builtin_prefetch(x, 0, hint);
#else
// You get no effect.  Feel free to add more sections above.
#endif
}
    
    namespace xla {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
    
    // Comparison ops.
REGISTER_OP_NO_GRADIENT('Less');
REGISTER_OP_NO_GRADIENT('LessEqual');
REGISTER_OP_NO_GRADIENT('Greater');
REGISTER_OP_NO_GRADIENT('GreaterEqual');
REGISTER_OP_NO_GRADIENT('Equal');
REGISTER_OP_NO_GRADIENT('NotEqual');
    
    
    {
    {    // Check dumped files according to the expected gating results.
    if (i < 2) {
      ASSERT_EQ(1, server_data_.server->node_names.size());
      ASSERT_EQ(1, server_data_.server->output_slots.size());
      ASSERT_EQ(1, server_data_.server->debug_ops.size());
      EXPECT_EQ(kDebugNodeKey.device_name,
                server_data_.server->device_names[0]);
      EXPECT_EQ(kDebugNodeKey.node_name, server_data_.server->node_names[0]);
      EXPECT_EQ(kDebugNodeKey.output_slot,
                server_data_.server->output_slots[0]);
      EXPECT_EQ(kDebugNodeKey.debug_op, server_data_.server->debug_ops[0]);
    } else {
      ASSERT_EQ(0, server_data_.server->node_names.size());
    }
  }
}
    
      std::vector<DebugNodeKey> debug_node_keys_ GUARDED_BY(states_mu_);
  std::vector<EventReply::DebugOpStateChange::State> new_states_
      GUARDED_BY(states_mu_);
    
    namespace atom {
    }
    
    namespace {
    }
    
     protected:
  RemoteCallbackFreer(v8::Isolate* isolate,
                      v8::Local<v8::Object> target,
                      int object_id,
                      content::WebContents* web_conents);
  ~RemoteCallbackFreer() override;
    
    #endif  // CHROME_BROWSER_CHROME_NOTIFICATION_TYPES_H_

    
    #include 'chrome/browser/speech/tts_platform.h'
    
    namespace views {
class ColorChooserListener;
}
    
    namespace swift {
    }
    
    namespace swift {
    }
    
      /// Returns true if range \c R contains the location \c Loc.  The location
  /// \c Loc should point at the beginning of the token.
  bool rangeContainsTokenLoc(SourceRange R, SourceLoc Loc) const {
    return Loc == R.Start || Loc == R.End ||
           (isBeforeInBuffer(R.Start, Loc) && isBeforeInBuffer(Loc, R.End));
  }
    
    #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
    v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id) {
  RenderThread::Get()->Send(new ShellViewHostMsg_Deallocate_Object(
      routing_id, object_id));
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  return v8::Undefined(isolate);
}
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    class ObjectManager;
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethod', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodFunction);
};
    
      DBIter(DBImpl* db, const Comparator* cmp, Iterator* iter, SequenceNumber s,
         uint32_t seed)
      : db_(db),
        user_comparator_(cmp),
        iter_(iter),
        sequence_(s),
        direction_(kForward),
        valid_(false),
        rnd_(seed),
        bytes_counter_(RandomPeriod()) {
  }
  virtual ~DBIter() {
    delete iter_;
  }
  virtual bool Valid() const { return valid_; }
  virtual Slice key() const {
    assert(valid_);
    return (direction_ == kForward) ? ExtractUserKey(iter_->key()) : saved_key_;
  }
  virtual Slice value() const {
    assert(valid_);
    return (direction_ == kForward) ? iter_->value() : saved_value_;
  }
  virtual Status status() const {
    if (status_.ok()) {
      return iter_->status();
    } else {
      return status_;
    }
  }
    
    namespace leveldb {
    }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    void WriteBatchInternal::Append(WriteBatch* dst, const WriteBatch* src) {
  SetCount(dst, Count(dst) + Count(src));
  assert(src->rep_.size() >= kHeader);
  dst->rep_.append(src->rep_.data() + kHeader, src->rep_.size() - kHeader);
}
    
      // The name of the comparator.  Used to check for comparator
  // mismatches (i.e., a DB created with one comparator is
  // accessed using a different comparator.
  //
  // The client of this package should switch to a new name whenever
  // the comparator implementation changes in a way that will cause
  // the relative ordering of any two keys to change.
  //
  // Names starting with 'leveldb.' are reserved and should not be used
  // by any clients of this package.
  virtual const char* Name() const = 0;
    
      // Return true iff the length of the referenced data is zero
  bool empty() const { return size_ == 0; }
    
    #ifndef GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_DATABASE_H__
#define GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_DATABASE_H__
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
                    cv::Mat Cbar = cayley2rotbar(stmp_mat);
                cv::Mat Cbarvec = Cbar.reshape(1,1).t();
    
    
    {        // Legacy
        VERTEX_ARRAY = 0x8074,
        NORMAL_ARRAY = 0x8075,
        COLOR_ARRAY = 0x8076,
        TEXTURE_COORD_ARRAY = 0x8078,
        TEXTURE_ENV = 0x2300,
        TEXTURE_ENV_MODE = 0x2200,
        MODELVIEW = 0x1700,
        PROJECTION = 0x1701,
        LIGHTING = 0x0B50
    };
    
    static void* openclamdfft_check_fn(int ID)
{
    assert(ID >= 0 && ID < (int)(sizeof(openclamdfft_fn)/sizeof(openclamdfft_fn[0])));
    const struct DynamicFnEntry* e = openclamdfft_fn[ID];
    void* func = CV_CL_GET_PROC_ADDRESS(e->fnName);
    if (!func)
    {
        throw cv::Exception(cv::Error::OpenCLApiCallError,
                cv::format('OpenCL AMD FFT function is not available: [%s]', e->fnName),
                CV_Func, __FILE__, __LINE__);
    }
    *(e->ppFn) = func;
    return func;
}
    
    #endif // __OPENCV_CORE_OCL_RUNTIME_COMMON_HPP__

    
        HHVM_FE(fb_setprofile);
    HHVM_FE(xhprof_frame_begin);
    HHVM_FE(xhprof_frame_end);
    HHVM_FE(xhprof_enable);
    HHVM_FE(xhprof_disable);
    HHVM_FE(xhprof_network_enable);
    HHVM_FE(xhprof_network_disable);
    HHVM_FE(xhprof_sample_enable);
    HHVM_FE(xhprof_sample_disable);
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
      mpz_t gmpData;
  if (!variantToGMPData('gmp_scan1', gmpData, data)) {
    return false;
  }
    
    namespace HPHP {
    }
    
    #define const_generator_cast(generator) \
  dynamic_cast<const CUDAGenerator&>(generator)
    
    namespace thd { namespace rpc {
    }
    }
    
    
    {
    {} // namespace asio
} // namespace boost
    
    template <typename ConstBufferSequence>
class descriptor_write_op_base : public reactor_op
{
public:
  descriptor_write_op_base(int descriptor,
      const ConstBufferSequence& buffers, func_type complete_func)
    : reactor_op(&descriptor_write_op_base::do_perform, complete_func),
      descriptor_(descriptor),
      buffers_(buffers)
  {
  }
    }
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef null_event event;
#elif defined(BOOST_ASIO_WINDOWS)
typedef win_event event;
#elif defined(BOOST_ASIO_HAS_PTHREADS)
typedef posix_event event;
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
typedef std_event event;
#endif
    
    #define BOOST_ASIO_DEFINE_HANDLER_PTR(op) \
  struct ptr \
  { \
    Handler* h; \
    void* v; \
    op* p; \
    ~ptr() \
    { \
      reset(); \
    } \
    void reset() \
    { \
      if (p) \
      { \
        p->~op(); \
        p = 0; \
      } \
      if (v) \
      { \
        boost_asio_handler_alloc_helpers::deallocate(v, sizeof(op), *h); \
        v = 0; \
      } \
    } \
  } \
  /**/
    
    #define BOOST_ASIO_COMPOSED_CONNECT_HANDLER_CHECK( \
    handler_type, handler, iter_type) \
  typedef int BOOST_ASIO_UNUSED_TYPEDEF
    
    #endif // defined(BOOST_ASIO_HAS_EPOLL)