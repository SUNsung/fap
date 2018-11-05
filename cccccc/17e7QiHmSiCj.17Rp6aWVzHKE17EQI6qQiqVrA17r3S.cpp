
        
        #include 'tensorflow/python/framework/cpp_shape_inference.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
#define TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  if (PyBfloat16_Check(arg)) {
    Py_INCREF(arg);
    return arg;
  } else {
    bfloat16 value;
    if (!AsBfloat16(arg, &value)) {
      return nullptr;
    }
    return PyBfloat16_FromBfloat16(value).release();
  }
}
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_
#define TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_
    
    // Converts Python object `obj` representing a rectangular array of
// Python values (a scalar, a sequence of scalars, a sequence of
// sequences, etc.) into a C++ TensorFlow Tensor and stores it in
// *ret.  If dtype is not None it should by a Python integer
// representing the desired dtype of the resulting Tensor.
// This is used only as a hint, *ret may not have that dtype on
// success and may require a cast.
Status PySeqToTensor(PyObject* obj, PyObject* dtype, Tensor* ret);
    
    Safe_PyObjectPtr make_safe(PyObject* object) {
  return Safe_PyObjectPtr(object);
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      static string GetDevNodePath(int dev_node_ordinal);
    
        base::FilePath shortcutPath(path);
    result->AppendBoolean(base::win::CreateOrUpdateShortcutLink(shortcutPath, props, 
      base::PathExists(shortcutPath) ? base::win::SHORTCUT_UPDATE_EXISTING : base::win::SHORTCUT_CREATE_ALWAYS));
#else
    result->AppendBoolean(false);
#endif
    return;
  } else if (method == 'GetPackage') {
    result->AppendString(shell->GetPackage()->package_string());
    return;
  } else if (method == 'SetCrashDumpDir') {
    std::string path;
    arguments.GetString(0, &path);
    //FIXME: result->AppendBoolean(SetCrashDumpPath(path.c_str()));
    return;
  } else if (method == 'RegisterGlobalHotKey') {
    int object_id = -1;
    arguments.GetInteger(0, &object_id);
    Shortcut* shortcut =
        static_cast<Shortcut*>(DispatcherHost::GetApiObject(object_id));
    bool success = GlobalShortcutListener::GetInstance()->RegisterAccelerator(
                       shortcut->GetAccelerator(), shortcut);
    if (!success)
      shortcut->OnFailed('Register global desktop keyboard shortcut failed.');
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Base);
};
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.setListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardSetListSyncFunction);
};
    
    #include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
    
    #include <cstdint>      // for int32_t
    
    class PAGE_RES_IT;
class ROW;
class WERD_RES;
    
      // The tesseract engine used for OCR. This pointer is passed in by the caller,
  // so do NOT destroy it in this class.
  Tesseract* lang_tesseract_;
    
      // go through the list again and this time create the menu structure.
  vc_it.move_to_first();
  for (vc_it.mark_cycle_pt(); !vc_it.cycled_list(); vc_it.forward()) {
    ParamContent* vc = vc_it.data();
    STRING tag;
    STRING tag2;
    STRING tag3;
    GetPrefixes(vc->GetName(), &tag, &tag2, &tag3);
    }
    
    void FilterTrailingMetadata(grpc_metadata_batch* b, uint64_t* elapsed_time) {
  if (b->idx.named.grpc_server_stats_bin != nullptr) {
    ServerStatsDeserialize(
        reinterpret_cast<const char*>(GRPC_SLICE_START_PTR(
            GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md))),
        GRPC_SLICE_LENGTH(GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md)),
        elapsed_time);
    grpc_metadata_batch_remove(b, b->idx.named.grpc_server_stats_bin);
  }
}
    
    
    { private:
  CensusContext context_;
  // Metadata elements for tracing and census stats data.
  grpc_linked_mdelem stats_bin_;
  grpc_linked_mdelem tracing_bin_;
  // Client method.
  absl::string_view method_;
  std::string qualified_method_;
  grpc_slice path_;
  // The recv trailing metadata callbacks.
  grpc_metadata_batch* recv_trailing_metadata_;
  grpc_closure* initial_on_done_recv_trailing_metadata_;
  grpc_closure on_done_recv_trailing_metadata_;
  // recv message
  grpc_closure* initial_on_done_recv_message_;
  grpc_closure on_done_recv_message_;
  // Start time (for measuring latency).
  absl::Time start_time_;
  // Server elapsed time in nanoseconds.
  uint64_t elapsed_time_;
  // The received message--may be null.
  grpc_core::OrphanablePtr<grpc_core::ByteStream>* recv_message_;
  // Number of messages in this RPC.
  uint64_t recv_message_count_;
  uint64_t sent_message_count_;
  // Buffer needed for grpc_slice to reference when adding trace context
  // metatdata to outgoing message.
  char tracing_buf_[kMaxTraceContextLen];
};
    
    void GenerateServerContext(absl::string_view tracing, absl::string_view stats,
                           absl::string_view primary_role,
                           absl::string_view method, CensusContext* context) {
  GrpcTraceContext trace_ctxt;
  TraceContextEncoding::Decode(tracing, &trace_ctxt);
  SpanContext parent_ctx = trace_ctxt.ToSpanContext();
  new (context) CensusContext(method, parent_ctx);
}
    
    
    {    uint8_t version = buf[kVersionIdOffset];
    uint32_t fieldID = buf[kServerElapsedTimeOffset];
    if (version != kVersionId || fieldID != kServerElapsedTimeField) {
      *time = 0;
      return kEncodeDecodeFailure;
    }
    *time = absl::little_endian::Load64(
        &buf[kServerElapsedTimeOffset + kFieldIdSize]);
    return kRpcServerStatsSize;
  }
    
    void ProtoServerReflectionPlugin::InitServer(grpc::ServerInitializer* si) {
  si->RegisterService(reflection_service_);
}
    
    bool OrbitCamera::initWithDuration(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX)
{
    if ( ActionInterval::initWithDuration(t) )
    {
        _radius = radius;
        _deltaRadius = deltaRadius;
        _angleZ = angleZ;
        _deltaAngleZ = deltaAngleZ;
        _angleX = angleX;
        _deltaAngleX = deltaAngleX;
    }
    }
    
        /** Get the value of a controlPoint at a given index.
     *
     * @js NA
     * @param index Get the point in index.
     * @return A Vec2.
     */
    const Vec2& getControlPointAtIndex(ssize_t index) const;
    
        /** 
    @brief Initializes an action with duration, grid size, waves and amplitude.
    @param duration Specify the duration of the Waves3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param waves Specify the waves count of the Waves3D action.
    @param amplitude Specify the amplitude of the Waves3D action.
    @return If the initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int waves, float amplitude);
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
        unsigned int t = 0;
    for (unsigned int i = 0; i < _tilesCount; i++ )
    {
        t = _tilesOrder[i];
        Vec2 tilePos( (unsigned int)(t / _gridSize.height), t % (unsigned int)_gridSize.height );
    }
    
    bool ActionTween::initWithDuration(float duration, const std::string& key, float from, float to)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _key    = key;
        _to       = to;
        _from     = from;
        return true;
    }
    }
    
        /** Adds a frame with a texture and a rect. Internally it will create a SpriteFrame and it will add it.
     * The frame will be added with one 'delay unit'.
     * Added to facilitate the migration from v0.8 to v0.9.
     * @param pobTexture A frame with a texture.
     * @param rect The Texture of rect.
     */
    void addSpriteFrameWithTexture(Texture2D* pobTexture, const Rect& rect);
    
    

    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
    Benchmark* Benchmark::Ranges(const std::vector<std::pair<int, int>>& ranges) {
  CHECK(ArgsCnt() == -1 || ArgsCnt() == static_cast<int>(ranges.size()));
  std::vector<std::vector<int>> arglists(ranges.size());
  std::size_t total = 1;
  for (std::size_t i = 0; i < ranges.size(); i++) {
    AddRange(&arglists[i], ranges[i].first, ranges[i].second,
             range_multiplier_);
    total *= arglists[i].size();
  }
    }
    
    // The CHECK macro returns a std::ostream object that can have extra information
// written to it.
#ifndef NDEBUG
#define CHECK(b)                                                             \
  (b ? ::benchmark::internal::GetNullLogInstance()                           \
     : ::benchmark::internal::CheckHandler(#b, __FILE__, __func__, __LINE__) \
           .GetLog())
#else
#define CHECK(b) ::benchmark::internal::GetNullLogInstance()
#endif
    
    void ColorPrintf(std::ostream& out, LogColor color, const char* fmt, ...) {
  va_list args;
  va_start(args, fmt);
  ColorPrintf(out, color, fmt, args);
  va_end(args);
}
    
    
    {  // Print user counters
  for (const auto &ucn : user_counter_names_) {
    auto it = run.counters.find(ucn);
    if(it == run.counters.end()) {
      Out << ',';
    } else {
      Out << ',' << it->second;
    }
  }
  Out << '\n';
}
    
    #include 'check.h'
    
    namespace benchmark {
    }