
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Calls Close() and logs if an error occurs.
  //
  // TODO(jhseu): Require that callers explicitly call Close() and remove the
  // implicit Close() call in the destructor.
  ~RecordWriter();
    
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
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // See docs in ../ops/io_ops.cc.
    
    /*
 * Deprecated in favor of EncodeAudioOpV2.
 */
class EncodeAudioOp : public OpKernel {
 public:
  explicit EncodeAudioOp(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context, context->GetAttr('file_format', &file_format_));
    file_format_ = str_util::Lowercase(file_format_);
    OP_REQUIRES(context, file_format_ == 'wav',
                errors::InvalidArgument('file_format arg must be \'wav\'.'));
    }
    }
    
    #ifdef TENSORFLOW_USE_MPI
    
      base::DictionaryValue* result = new base::DictionaryValue;
  result->Set('frameId', std::make_unique<base::Value>(frame_id));
  result->Set('id', std::make_unique<base::Value>(app_window->window_key()));
  app_window->GetSerializedState(result);
    
    #include 'base/values.h'
#include 'extensions/common/draggable_region.h'
#include 'content/public/common/common_param_traits.h'
#include 'ipc/ipc_message_macros.h'
#include 'ui/gfx/ipc/gfx_param_traits.h'
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
    
    {}  // namespace nwapi
    
    
    {}
    
    #include 'extensions/browser/extension_function.h'
    
    NwObjCallObjectMethodFunction::NwObjCallObjectMethodFunction() {
}
    
    # define JSON_ASSERT(condition) assert(condition)
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    // Author: kenton@google.com (Kenton Varda)
    
    // Tests that GetEncodingAsString returns the right result for a trivial
// unicharset.
TEST_F(UnicharcompressTest, GetEncodingAsString) {
  LoadUnicharset('trivial.unicharset');
  ExpectCorrect('trivial');
  STRING encoding = compressed_.GetEncodingAsString(unicharset_);
  string encoding_str(&encoding[0], encoding.length());
  std::vector<string> lines =
      strings::Split(encoding_str, '\n', strings::SkipEmpty());
  EXPECT_EQ(5, lines.size());
  // The first line is always space.
  EXPECT_EQ('0\t ', lines[0]);
  // Next we have i.
  EXPECT_EQ('1\ti', lines[1]);
  // Next we have f.
  EXPECT_EQ('2\tf', lines[2]);
  // Next we have the fi ligature: ﬁ. There are no nulls in it, as there are no
  // repeated letter ligatures in this unicharset, unlike por.unicharset above.
  EXPECT_EQ('2,1\tﬁ', lines[3]);
  // Finally the null character.
  EXPECT_EQ('3\t<nul>', lines[4]);
}
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    const int kHistogramSize = 256;  // The size of a histogram of pixel values.
    
    void signal_exit(int signal_code);
    
      // Add the specified file at the specified number.
  // REQUIRES: This version has not been saved (see VersionSet::SaveTo)
  // REQUIRES: 'smallest' and 'largest' are smallest and largest keys in file
  void AddFile(int level, uint64_t file,
               uint64_t file_size,
               const InternalKey& smallest,
               const InternalKey& largest) {
    FileMetaData f;
    f.number = file;
    f.file_size = file_size;
    f.smallest = smallest;
    f.largest = largest;
    new_files_.push_back(std::make_pair(level, f));
  }
    
    class VersionEditTest { };
    
      // Store the specified number as the sequence number for the start of
  // this batch.
  static void SetSequence(WriteBatch* batch, SequenceNumber seq);
    
      // Check first filter
  ASSERT_TRUE(reader.KeyMayMatch(0, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(2000, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'hello'));
    
    Status BlockHandle::DecodeFrom(Slice* input) {
  if (GetVarint64(input, &offset_) &&
      GetVarint64(input, &size_)) {
    return Status::OK();
  } else {
    return Status::Corruption('bad block handle');
  }
}
    
    uint32_t Hash(const char* data, size_t n, uint32_t seed) {
  // Similar to murmur hash
  const uint32_t m = 0xc6a4a793;
  const uint32_t r = 24;
  const char* limit = data + n;
  uint32_t h = seed ^ (n * m);
    }
    
    
    {}  // namespace leveldb

    
      inline void ClearSavedValue() {
    if (saved_value_.capacity() > 1048576) {
      std::string empty;
      swap(empty, saved_value_);
    } else {
      saved_value_.clear();
    }
  }
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
    class Block {
 public:
  // Initialize the block with the specified contents.
  explicit Block(const BlockContents& contents);
    }
    
    bool js_cocos2dx_studio_ScaleFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ScaleFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ScaleFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ScaleFrame_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ScaleFrame_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ScaleFrame_getScaleY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ScaleFrame_getScaleX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ScaleFrame_setScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ScaleFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ScaleFrame_ScaleFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    
        b2Vec2* vertices = new b2Vec2[vertexCount];
    for( int i=0;i<vertexCount;i++) {
        vertices[i] = old_vertices[i];
        vertices[i] *= mRatio;
    }
    
    mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r*0.5f, color.g*0.5f, color.b*0.5f, 0.5f);
    
    void Test::PreSolve(b2Contact* contact, const b2Manifold* oldManifold)
{
	const b2Manifold* manifold = contact->GetManifold();
    }
    
    		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 4.0f);
    }
    
    			x += 80.0f;
			shape.Set(b2Vec2(x, 0.0f), b2Vec2(x + 40.0f, 0.0f));
			ground->CreateFixture(&fd);
    
    // Intentionally NOT constexpr. See note above for assertOutOfBounds
[[noreturn]] inline void assertNotNullTerminated() noexcept {
  assert(!'Non-null terminated string used to initialize a BasicFixedString');
  std::terminate(); // Fail hard, fail fast.
}
    
    TEST_F(OrderingTest, compare_less_equal) {
  compare_less_equal<OddCompare<int>> op;
  EXPECT_FALSE(op(3, 4));
  EXPECT_TRUE(op(3, 3));
  EXPECT_TRUE(op(4, 3));
}
    
     private:
  Node* head() {
    return head_.load(std::memory_order_acquire);
  }
    
    Barrier::~Barrier() {
  auto block = controlBlock_.load(std::memory_order_relaxed);
  auto prev = block->valueAndReaderCount.load(std::memory_order_relaxed);
  DCHECK_EQ(prev >> kReaderShift, 0u);
  auto val = prev & kValueMask;
  auto p = promises(block);
    }
    
    
    {  // Do most of the work in a separate helper function.
  //
  // The main reason for putting this in a helper function is to ensure that
  // the compiler does not warn about missing return statements on XLOG(FATAL)
  // code paths.  Unfortunately it appears like some compilers always suppress
  // this warning for main().
  return runHelper();
}

    
    SerialExecutor::~SerialExecutor() {
  DCHECK(!keepAliveCounter_);
}
    
    #include <folly/executors/GlobalExecutor.h>
#include <folly/executors/SequencedExecutor.h>
    
    namespace aria2 {
    }
    
    private:
  std::string userDefinedUser_;
  std::string userDefinedPassword_;
    
    bool AbstractHttpServerResponseCommand::execute()
{
  if (e_->getRequestGroupMan()->downloadFinished() || e_->isHaltRequested()) {
    return true;
  }
  try {
    ssize_t len = httpServer_->sendResponse();
    if (len > 0) {
      timeoutTimer_ = global::wallclock();
    }
  }
  catch (RecoverableException& e) {
    A2_LOG_INFO_EX(fmt('CUID#%' PRId64
                       ' - Error occurred while transmitting response body.',
                       getCuid()),
                   e);
    return true;
  }
  if (httpServer_->sendBufferIsEmpty()) {
    A2_LOG_INFO(fmt('CUID#%' PRId64 ' - HttpServer: all response transmitted.',
                    getCuid()));
    afterSend(httpServer_, e_);
    return true;
  }
  else {
    if (timeoutTimer_.difference(global::wallclock()) >= 30_s) {
      A2_LOG_INFO(fmt('CUID#%' PRId64
                      ' - HttpServer: Timeout while trasmitting response.',
                      getCuid()));
      return true;
    }
    else {
      updateReadWriteCheck();
      e_->addCommand(std::unique_ptr<Command>(this));
      return false;
    }
  }
}
    
    bool AnnounceList::currentTierAcceptsCompletedEvent() const
{
  if (currentTrackerInitialized_) {
    return FindCompletedAllowedTier()(*currentTier_);
  }
    }