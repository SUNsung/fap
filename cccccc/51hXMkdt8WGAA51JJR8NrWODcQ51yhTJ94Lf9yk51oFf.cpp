
        
        void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #ifndef CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
#define CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
    
    v8::Handle<v8::Object> Dispatcher::GetObjectRegistry() {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::Local<v8::Context> context =
    v8::Local<v8::Context>::New(isolate, node::g_context);
  // need to enter node context to access the registry in
  // some cases, e.g. normal frame in #1519
  context->Enter();
  v8::Handle<v8::Value> registry =
    context->Global()->Get(v8_str('__nwObjectsRegistry'));
  context->Exit();
  ASSERT(!(registry->IsNull() || registry->IsUndefined()));
  // if (registry->IsNull() || registry->IsUndefined())
  //   return v8::Undefined();
  return registry->ToObject();
}
    
     private:
  // Helper functions for bindings.
  static void RequireNwGui(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetAbsolutePath(const v8::FunctionCallbackInfo<v8::Value>& args);
    
    
    {} // namespace nwapi

    
    
#ifndef CONTENT_NW_SRC_API_EVENT_EVENT_H_
#define CONTENT_NW_SRC_API_EVENT_EVENT_H_
    
    #include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'content/nw/src/api/menu/menu.h'
#include 'gdk/gdkkeysyms.h'//to get keyval from name
    
    namespace extensions {
    }
    
            //if (imag(V(2,k)) == 0)
#ifdef HAVE_EIGEN
        const double epsilon = 1e-4;
        if( eigenval_i.at<double>(k,0) >= -epsilon && eigenval_i.at<double>(k,0) <= epsilon )
#endif
        {
    }
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    class DummyBufferPoolController : public BufferPoolController
{
public:
    DummyBufferPoolController() { }
    virtual ~DummyBufferPoolController() { }
    }
    
    cv::cuda::GpuMat::GpuMat(const GpuMat& m, Rect roi) :
    flags(m.flags), rows(roi.height), cols(roi.width),
    step(m.step), data(m.data + roi.y*step), refcount(m.refcount),
    datastart(m.datastart), dataend(m.dataend),
    allocator(m.allocator)
{
    flags &= roi.width < m.cols ? ~Mat::CONTINUOUS_FLAG : -1;
    data += roi.x * elemSize();
    }
    
        static void CODEGEN_FUNCPTR Switch_VertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
    {
        VertexAttribPointer = (PFNVERTEXATTRIBPOINTERPROC)IntGetProcAddress('glVertexAttribPointer');
        VertexAttribPointer(index, size, type, normalized, stride, pointer);
    }
    
    #include '../../precomp.hpp'
    
    static const vorbis_residue_template _res_16u_0[]={
  {1,0,32,  &_residue_44_low_un,
   &_huff_book__16u0__single,&_huff_book__16u0__single,
   &_resbook_16u_0,&_resbook_16u_0},
};
static const vorbis_residue_template _res_16u_1[]={
  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__16u1__short,&_huff_book__16u1__short,
   &_resbook_16u_1,&_resbook_16u_1},
    }
    
    static const static_bookblock _resbook_44s_1={
  {
    {0},{0,0,&_44c1_s_p1_0},{0,0,&_44c1_s_p2_0},
    {0,0,&_44c1_s_p3_0},{0,0,&_44c1_s_p4_0},{0,0,&_44c1_s_p5_0},
    {&_44c1_s_p6_0,&_44c1_s_p6_1},{&_44c1_s_p7_0,&_44c1_s_p7_1},
    {&_44c1_s_p8_0,&_44c1_s_p8_1,&_44c1_s_p8_2}
   }
};
static const static_bookblock _resbook_44sm_1={
  {
    {0},{0,0,&_44c1_sm_p1_0},{0,0,&_44c1_sm_p2_0},
    {0,0,&_44c1_sm_p3_0},{0,0,&_44c1_sm_p4_0},{0,0,&_44c1_sm_p5_0},
    {&_44c1_sm_p6_0,&_44c1_sm_p6_1},{&_44c1_sm_p7_0,&_44c1_sm_p7_1},
    {&_44c1_sm_p8_0,&_44c1_sm_p8_1,&_44c1_sm_p8_2}
   }
};
    
      {1,0,32,  &_residue_44_low_un,
   &_huff_book__44u1__long,&_huff_book__44u1__long,
   &_resbook_44u_1,&_resbook_44u_1}
};
static const vorbis_residue_template _res_44u_2[]={
  {1,0,16,  &_residue_44_low_un,
   &_huff_book__44u2__short,&_huff_book__44u2__short,
   &_resbook_44u_2,&_resbook_44u_2},
    
    static const vorbis_residue_template _res_8s_0[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__8c0_s_single,&_huff_book__8c0_s_single,
   &_resbook_8s_0,&_resbook_8s_0},
};
static const vorbis_residue_template _res_8s_1[]={
  {2,0,32,  &_residue_44_mid,
   &_huff_book__8c1_s_single,&_huff_book__8c1_s_single,
   &_resbook_8s_1,&_resbook_8s_1},
};
    
    
/* Special i386 GCC implementation */
#if defined(__i386__) && defined(__GNUC__) && !defined(__BEOS__)
#  define VORBIS_FPU_CONTROL
/* both GCC and MSVC are kinda stupid about rounding/casting to int.
   Because of encapsulation constraints (GCC can't see inside the asm
   block and so we end up doing stupid things like a store/load that
   is collectively a noop), we do it this way */
    
    int opus_fft_alloc_arm_neon(kiss_fft_state *st);
void opus_fft_free_arm_neon(kiss_fft_state *st);
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    #ifndef DISABLE_FLOAT_API
static OPUS_INLINE opus_int16 FLOAT2INT16(float x)
{
   x = x*CELT_SIG_SCALE;
   x = MAX32(x, -32768);
   x = MIN32(x, 32767);
   return (opus_int16)float2int(x);
}
#endif /* DISABLE_FLOAT_API */
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    #undef MULT32_32_Q31
static inline int MULT32_32_Q31(int a, int b)
{
    int r;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (r): 'i' (31));
    return r;
}
    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
     private:
  /// For testing only, reset the stopping status for unittests.
  void resetStopping() {
    stopping_ = false;
  }
    
    /**
 * @brief EventSubscriber%s and Publishers may exist in various states.
 *
 * The class will move through states when osquery is initializing the
 * registry, starting event publisher loops, and requesting initialization of
 * each subscriber and the optional set of subscriptions it creates. If this
 * initialization fails the publishers or EventFactory may eject, warn, or
 * otherwise not use the subscriber's subscriptions.
 *
 * The supported states are:
 * - None: The default state, uninitialized.
 * - Setup: The Subscriber is attached and has run setup.
 * - Running: Subscriber is ready for events.
 * - Paused: Subscriber was initialized but is not currently accepting events.
 * - Failed: Subscriber failed to initialize or is otherwise offline.
 */
enum class EventState {
  EVENT_NONE = 0,
  EVENT_SETUP,
  EVENT_RUNNING,
  EVENT_PAUSED,
  EVENT_FAILED,
};
    
    /// Internal callExtension implementation using a UNIX domain socket path.
Status callExtension(const std::string& extension_path,
                     const std::string& registry,
                     const std::string& item,
                     const PluginRequest& request,
                     PluginResponse& response);
    
     private:
  /// Boolean to track if this instance needs to restore privileges.
  bool dropped_{false};
    
      // Tear down device node data.
  if (!(osquery.major_number < 0)) {
    if (cdevsw_remove(osquery.major_number, &osquery_cdevsw) < 0) {
      panic('osquery kext: Cannot remove osquery from cdevsw');
    }
  }
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    bool isLauncherProcessDead(PlatformProcess& launcher) {
  if (!launcher.isValid()) {
    return true;
  }
    }
    
      group_size_ = getgroups(0, nullptr);
  if (group_size_ > 0) {
    original_groups_ = (gid_t*)malloc(group_size_ * sizeof(gid_t));
    group_size_ = getgroups(group_size_, original_groups_);
  }
  setgroups(1, &gid);
    
    // Return the prologue of the generated source file.
grpc::string GetSourcePrologue(grpc_generator::File *file,
                               const Parameters &params);
    
      std::string SayHello(const std::string &name) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset = CreateHelloRequest(mb, name_offset);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<HelloRequest>();
    }
    
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* MonsterStorage::Stub::AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< flatbuffers::grpc::Message<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request, true);
}
    
    #include 'src/compiler/schema_interface.h'
    
      // Associates a key with a value.  All subsequent calls to operator+=, where
  // the specified key is contained in {{ and }} delimiters will be replaced by
  // the given value.
  void SetValue(const std::string &key, const std::string &value) {
    value_map_[key] = value;
  }
    
      // Parameters required to initialize the FlatCompiler.
  struct InitParams {
    InitParams()
        : generators(nullptr),
          num_generators(0),
          warn_fn(nullptr),
          error_fn(nullptr) {}
    }
    
    // Utilities that can be used with the 'mini reflection' tables present
// in generated code with --reflect-types (only types) or --reflect-names
// (also names).
// This allows basic reflection functionality such as pretty-printing
// that does not require the use of the schema parser or loading of binary
// schema files at runtime (reflection.h).
    
    // Convenience class to easily parse or generate text for arbitrary FlatBuffers.
// Simply pre-populate it with all schema filenames that may be in use, and
// This class will look them up using the file_identifier declared in the
// schema.
class Registry {
 public:
  // Call this for all schemas that may be in use. The identifier has
  // a function in the generated code, e.g. MonsterIdentifier().
  void Register(const char *file_identifier, const char *schema_path) {
    Schema schema;
    schema.path_ = schema_path;
    schemas_[file_identifier] = schema;
  }
    }
    
      // Use the `CreateWeapon` shortcut to create Weapons with all fields set.
  auto sword = CreateWeapon(builder, weapon_one_name, weapon_one_damage);
  auto axe = CreateWeapon(builder, weapon_two_name, weapon_two_damage);