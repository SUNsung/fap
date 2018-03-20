
        
        void PartialRunMgr::ExecutorDone(int step_id, const Status& executor_status) {
  StatusCallback done;
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    // If we found the partial_run, we call the final callback, if it
    // exists.
    // It is guaranteed that run_it->second->final_callback is left empty
    // after the std::move call.
    done = std::move(run_it->second->final_callback);
    if (!executor_status.ok()) {
      run_it->second->final_status = executor_status;
    }
    callback_status = run_it->second->final_status;
    run_it->second->executor_done = true;
  }
  if (done != nullptr) {
    done(callback_status);
    mutex_lock l(mu_);
    step_id_to_partial_run_.erase(step_id);
  }
}
    
    
    {  // Blocks until status is set.
  Status status() {
    invoked_.WaitForNotification();
    return status_;
  }
};
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#if !defined(IS_SLIM_BUILD)
#include 'tensorflow/core/lib/io/zlib_compression_options.h'
#include 'tensorflow/core/lib/io/zlib_outputbuffer.h'
#endif  // IS_SLIM_BUILD
#include 'tensorflow/core/platform/macros.h'
#include 'tensorflow/core/platform/types.h'
    
    namespace Eigen {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  std::vector<string> workers;
  cc->ListWorkers(&workers);
  EXPECT_EQ(std::vector<string>(
                {'/job:mnist/replica:0/task:0', '/job:mnist/replica:0/task:1',
                 '/job:mnist/replica:0/task:2', '/job:mnist/replica:0/task:3',
                 '/job:mnist/replica:0/task:4', '/job:mnist/replica:0/task:5'}),
            workers);
}
    
     private:
  std::unique_ptr<DesktopMediaList> media_list_;
    
     private:
  scoped_refptr<AtomBrowserContext> browser_context_;
    
    namespace atom {
    }
    
    // A self-destroyed class for handling save page request.
class SavePageHandler : public content::DownloadManager::Observer,
                        public content::DownloadItem::Observer {
 public:
  using SavePageCallback = base::Callback<void(v8::Local<v8::Value>)>;
    }
    
    
    {}  // namespace asar

    
    namespace internal {
    }
    
      // Create a menu from menu model.
  void BuildMenuFromModel(AtomMenuModel* model, DbusmenuMenuitem* parent);
    
    bool MenuModelAdapter::GetAccelerator(int id,
                                      ui::Accelerator* accelerator) const {
  ui::MenuModel* model = menu_model_;
  int index = 0;
  if (ui::MenuModel::GetModelAndIndexForCommandId(id, &model, &index)) {
    return static_cast<AtomMenuModel*>(model)->
      GetAcceleratorAtWithParams(index, true, accelerator);
  }
  return false;
}
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    
    {}  // namespace nw

    
    v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id) {
  RenderThread::Get()->Send(new ShellViewHostMsg_Deallocate_Object(
      routing_id, object_id));
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  return v8::Undefined(isolate);
}
    
    // Sets up the CHILD_PROCESS_EXE path to properly point to the helper app.
void OverrideChildProcessPath();
    
    #ifndef CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
#define CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
    
    void DispatcherHost::OnDeallocateObject(int object_id) {
  DLOG(INFO) << 'OnDeallocateObject: object_id:' << object_id;
  if (objects_registry_.Lookup(object_id))
    objects_registry_.Remove(object_id);
  objects_.erase(object_id);
}
    
    namespace nwapi {
    }
    
    
    {protected:
  BaseEvent(){}
  virtual ~BaseEvent(){}
};
    
    void PointMenuPositionFunc(GtkMenu* menu,
                           int* x,
                           int* y,
                           gboolean* push_in,
                           gpointer userdata) {
  *push_in = TRUE;
    }
    
    
    {    block_active_ = false;
    g_signal_connect(menu_item_, 'activate',
                     G_CALLBACK(OnClickThunk), this);
  }
    
    bool ProcessRestart(const uint8_t* data, const size_t len,
                    int* next_restart_marker, BitReaderState* br,
                    JPEGData* jpg) {
  size_t pos = 0;
  if (!br->FinishStream(&pos)) {
    jpg->error = JPEG_INVALID_SCAN;
    return false;
  }
  int expected_marker = 0xd0 + *next_restart_marker;
  EXPECT_MARKER();
  int marker = data[pos + 1];
  if (marker != expected_marker) {
    fprintf(stderr, 'Did not find expected restart marker %d actual=%d\n',
            expected_marker, marker);
    jpg->error = JPEG_WRONG_RESTART_MARKER;
    return false;
  }
  br->Reset(pos + 2);
  *next_restart_marker += 1;
  *next_restart_marker &= 0x7;
  return true;
}
    
    void OutputImage::Downsample(const DownsampleConfig& cfg) {
  if (components_[1].IsAllZero() && components_[2].IsAllZero()) {
    // If the image is already grayscale, nothing to do.
    return;
  }
  if (cfg.use_silver_screen &&
      cfg.u_factor_x == 2 && cfg.u_factor_y == 2 &&
      cfg.v_factor_x == 2 && cfg.v_factor_y == 2) {
    std::vector<uint8_t> rgb = ToSRGB();
    std::vector<std::vector<float> > yuv = RGBToYUV420(rgb, width_, height_);
    SetDownsampledCoefficients(yuv[0], 1, 1, &components_[0]);
    SetDownsampledCoefficients(yuv[1], 2, 2, &components_[1]);
    SetDownsampledCoefficients(yuv[2], 2, 2, &components_[2]);
    return;
  }
  // Get the floating-point precision YUV array represented by the set of
  // DCT coefficients.
  std::vector<std::vector<float> > yuv(3, std::vector<float>(width_ * height_));
  for (int c = 0; c < 3; ++c) {
    components_[c].ToFloatPixels(&yuv[c][0], 1);
  }
    }
    
    
    {}  // namespace guetzli

    
    #include 'guetzli/jpeg_data.h'
    
        if (IsLocking())
        ::wakeupLock_Unlock(object_);
    
    #include <stdint.h>
    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
    }
    
    
    {  private:
    size_t count_;
    uint64_t time_span_;
    std::list<uint64_t> touch_times_;
};
    
    #include 'boost/any.hpp'
    
        void TestFun0();
    void TestFun2()  {__TestFun1(1);}
    
    class DictionaryEntry {
 public:
  DictionaryEntry() {}
  DictionaryEntry(Word W) : W(W) {}
  DictionaryEntry(Word W, size_t PositionHint) : W(W), PositionHint(PositionHint) {}
  const Word &GetW() const { return W; }
    }
    
    
    {
    {    std::string ArtifactPath = 'minimized-from-' + Hash(U);
    Cmd += ' -minimize_crash_internal_step=1 -exact_artifact_path=' +
        ArtifactPath;
    Printf('CRASH_MIN: executing: %s\n', Cmd.c_str());
    ExitCode = ExecuteCommand(Cmd);
    if (ExitCode == 0) {
      if (Flags.exact_artifact_path) {
        CurrentFilePath = Flags.exact_artifact_path;
        WriteToFile(U, CurrentFilePath);
      }
      Printf('CRASH_MIN: failed to minimize beyond %s (%d bytes), exiting\n',
             CurrentFilePath.c_str(), U.size());
      return 0;
    }
    CurrentFilePath = ArtifactPath;
    Printf('\n\n\n\n\n\n*********************************\n');
  }
  return 0;
}
    
    using namespace fuzzer;
    
      UserCallback CB;
  InputCorpus &Corpus;
  MutationDispatcher &MD;
  FuzzingOptions Options;
    
    #endif  // LLVM_FUZZER_MERGE_H

    
    size_t MutationDispatcher::Mutate_ShuffleBytes(uint8_t *Data, size_t Size,
                                               size_t MaxSize) {
  if (Size > MaxSize) return 0;
  assert(Size);
  size_t ShuffleAmount =
      Rand(std::min(Size, (size_t)8)) + 1; // [1,8] and <= Size.
  size_t ShuffleStart = Rand(Size - ShuffleAmount);
  assert(ShuffleStart + ShuffleAmount <= Size);
  std::random_shuffle(Data + ShuffleStart, Data + ShuffleStart + ShuffleAmount,
                      Rand);
  return Size;
}
    
      const InputCorpus *Corpus = nullptr;
  std::vector<uint8_t> MutateInPlaceHere;
    
    #include 'FuzzerDictionary.h'
#include 'FuzzerInternal.h'
#include 'FuzzerIO.h'
#include 'FuzzerMutate.h'
#include 'FuzzerRandom.h'
#include 'FuzzerTracePC.h'
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <thread>