
        
          string name() const override { return 'model_pruner'; };
    
      // Given the driver version file contents, finds the kernel module version and
  // returns it as a string.
  //
  // This is solely used for more informative log messages when the user is
  // running on a machine that happens to have a libcuda/kernel driver mismatch.
  static port::StatusOr<DriverVersion> FindKernelModuleVersion(
      const string &driver_version_file_contents);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace internal {
template <typename T>
struct functor_traits<scalar_sigmoid_fast_derivative_op<T> > {
  enum {
    Cost = NumTraits<T>::AddCost * 2 + NumTraits<T>::MulCost,
    PacketAccess = packet_traits<T>::HasAdd && packet_traits<T>::HasMul &&
                   packet_traits<T>::HasNegate
  };
};
}  // namespace internal
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/record_reader.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
      {
    // NOTE(mrry): The gRPC channel doesn't expose the target, so we
    // can't compare it for equality.
    auto a_1_1 = cc->FindWorkerChannel('/job:mnist/replica:0/task:0');
    auto a_1_2 = cc->FindWorkerChannel('/job:mnist/replica:0/task:0');
    }
    
    MPIUtils::MPIUtils(const std::string& worker_name) {
  InitMPI();
  // Connect the MPI process IDs to the worker names that are used by TF.
  // Gather the names of all the active processes (name can't be longer than
  // 128 bytes)
  int proc_id = 0, number_of_procs = 1;
  char my_name[max_worker_name_length];
  MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    }
    
    class WebRequest : public mate::TrackableObject<WebRequest> {
 public:
  static mate::Handle<WebRequest> Create(v8::Isolate* isolate,
                                         AtomBrowserContext* browser_context);
    }
    
    namespace atom {
    }
    
    #include 'storage/common/quota/quota_types.h'
    
     private:
  // Must be called on IO thread.
  void DoCancelAuth();
  void DoLogin(const base::string16& username, const base::string16& password);
    
    #include 'atom/browser/net/asar/asar_protocol_handler.h'
    
    #include 'atom/browser/net/js_asker.h'
#include 'base/memory/ref_counted_memory.h'
#include 'net/http/http_status_code.h'
#include 'net/url_request/url_request_simple_job.h'
    
      // URLRequestSimpleJob:
  int GetData(std::string* mime_type,
              std::string* charset,
              std::string* data,
              const net::CompletionCallback& callback) const override;
    
    
    {}  // namespace relauncher
    
    #include 'base/callback.h'
#include 'base/values.h'
#include 'content/public/browser/notification_observer.h'
#include 'content/public/browser/notification_registrar.h'
    
    void DragFileItems(const std::vector<base::FilePath>& files,
                   const gfx::Image& icon,
                   gfx::NativeView view);
    
    MenuModelAdapter::MenuModelAdapter(AtomMenuModel* menu_model)
  : views::MenuModelAdapter(menu_model),
    menu_model_(menu_model) {
}
    
     protected:
  bool GetAccelerator(int id, ui::Accelerator* accelerator) const override;
    
    #include 'ui/views/window/native_frame_view.h'
    
    // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
      // Remote objects.
  static void AllocateId(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void AllocateObject(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void DeallocateObject(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallObjectMethod(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallObjectMethodSync(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallStaticMethod(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallStaticMethodSync(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CrashRenderer(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetCrashDumpDir(const v8::FunctionCallbackInfo<v8::Value>& args);
#if defined(OS_MACOSX)
  static void InitMsgIDMap();
  static void GetNSStringWithFixup(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetNSStringFWithFixup(const v8::FunctionCallbackInfo<v8::Value>& args);
#endif
    
    class DispatcherHost : public content::WebContentsObserver {
 public:
  explicit DispatcherHost(content::RenderViewHost* render_view_host);
  ~DispatcherHost() final;
    }
    
    class EventListener : public Base {
  std::map<int, BaseEvent*> listerners_;
    }
    
    bool NwMenuModel::HasIcons() const {
  // Always return false, see the comment about |NwMenuModel|.
  return false;
}
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {  if (word->word->flag(W_DONT_CHOP)) {
    saved_enable_assoc = wordrec_enable_assoc;
    saved_chop_enable = chop_enable;
    wordrec_enable_assoc.set_value(0);
    chop_enable.set_value(0);
  }
  if (pass_n == 1)
    set_pass1();
  else
    set_pass2();
  recog_word(word);
  if (word->best_choice == NULL)
    word->SetupFake(*word->uch_set);
  if (word->word->flag(W_DONT_CHOP)) {
    wordrec_enable_assoc.set_value(saved_enable_assoc);
    chop_enable.set_value(saved_chop_enable);
  }
}
    
    // Returns the number of sample points that have an error more than threshold.
int DetLineFit::NumberOfMisfittedPoints(double threshold) const {
  int num_misfits = 0;
  int num_dists = distances_.size();
  // Get the absolute values of the errors.
  for (int i = 0; i < num_dists; ++i) {
    if (distances_[i].key > threshold)
      ++num_misfits;
  }
  return num_misfits;
}
    
      // Computes all the cross product distances of the points perpendicular to
  // the given direction, ignoring distances outside of the give distance range,
  // storing the actual (signed) cross products in distances_.
  void ComputeConstrainedDistances(const FCOORD& direction,
                                   double min_dist, double max_dist);
    
    // Setup default values.
void DENORM::Init() {
  inverse_ = false;
  pix_ = NULL;
  block_ = NULL;
  rotation_ = NULL;
  predecessor_ = NULL;
  x_map_ = NULL;
  y_map_ = NULL;
  x_origin_ = 0.0f;
  y_origin_ = 0.0f;
  x_scale_ = 1.0f;
  y_scale_ = 1.0f;
  final_xshift_ = 0.0f;
  final_yshift_ = static_cast<float>(kBlnBaselineOffset);
}

    
    
    {}  // namespace tesseract.
    
    // Computes the error rates and returns in rates which is an array of size
// CT_SIZE. Returns false if there is no data, leaving rates unchanged.
bool ErrorCounter::ComputeRates(const Counts& counts, double rates[CT_SIZE]) {
  int ok_samples = counts.n[CT_UNICHAR_TOP_OK] + counts.n[CT_UNICHAR_TOP1_ERR] +
      counts.n[CT_REJECT];
  int junk_samples = counts.n[CT_REJECTED_JUNK] + counts.n[CT_ACCEPTED_JUNK];
  // Compute rates for normal chars.
  double denominator = static_cast<double>(MAX(ok_samples, 1));
  for (int ct = 0; ct <= CT_RANK; ++ct)
    rates[ct] = counts.n[ct] / denominator;
  // Compute rates for junk.
  denominator = static_cast<double>(MAX(junk_samples, 1));
  for (int ct = CT_REJECTED_JUNK; ct <= CT_ACCEPTED_JUNK; ++ct)
    rates[ct] = counts.n[ct] / denominator;
  return ok_samples != 0 || junk_samples != 0;
}
    
    // Moves on to the next indexable sample. If the end is reached, leaves
// the state such that AtEnd() is true.
void SampleIterator::Next() {
  if (shape_table_ != NULL) {
    // Next sample in this class/font combination.
    ++sample_index_;
    if (sample_index_ < num_samples_)
      return;
    // Next font in this class in this shape.
    sample_index_ = 0;
    do {
      ++shape_font_index_;
      if (shape_font_index_ >= num_shape_fonts_) {
        // Next unichar in this shape.
        shape_font_index_ = 0;
        ++shape_char_index_;
        if (shape_char_index_ >= num_shape_chars_) {
          // Find the next shape that is mapped in the charset_map_.
          shape_char_index_ = 0;
          do {
            ++shape_index_;
          } while (shape_index_ < num_shapes_ &&
                   charset_map_ != NULL &&
                   charset_map_->SparseToCompact(shape_index_) < 0);
          if (shape_index_ >= num_shapes_)
            return;  // The end.
          num_shape_chars_ = shape_table_->GetShape(shape_index_).size();
        }
      }
      const UnicharAndFonts* shape_entry = GetShapeEntry();
      num_shape_fonts_ = shape_entry->font_ids.size();
      int char_id = shape_entry->unichar_id;
      int font_id = shape_entry->font_ids[shape_font_index_];
      num_samples_ = sample_set_->NumClassSamples(font_id, char_id, randomize_);
    } while (num_samples_ == 0);
  } else {
    // We are just iterating over the samples.
    ++shape_index_;
  }
}
    
      std::string ReportMessage() const {
    return report_.message_;
  }
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    
    {}  // namespace leveldb
    
    // Test for issue 178: a manual compaction causes deleted data to reappear.
#include <iostream>
#include <sstream>
#include <cstdlib>
    
    Status ReadBlock(RandomAccessFile* file,
                 const ReadOptions& options,
                 const BlockHandle& handle,
                 BlockContents* result) {
  result->data = Slice();
  result->cachable = false;
  result->heap_allocated = false;
    }
    
    #endif  // STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_

    
    #include 'leveldb/comparator.h'
#include 'leveldb/iterator.h'
#include 'table/iterator_wrapper.h'
    
      for (int i = 0; i < 32; i++) {
    buf[i] = i;
  }
  ASSERT_EQ(0x46dd794e, Value(buf, sizeof(buf)));
    
    namespace {
  void printWithBackSlashes(std::string str) {
    for (std::string::size_type i = 0; i < str.size(); i++) {
      if (str[i] == '\\' || str[i] == ''') {
        std::cout << '\\';
      }
    }
    }
    }
    
    
    {  // Add new data and corrupt it
  ASSERT_OK(writable_file->Append(kCorrupted));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size() + kCorrupted.size());
  result.clear();
  ASSERT_OK(rand_file->Read(kGood.size(), kCorrupted.size(),
            &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kCorrupted), 0);
  // Corrupted
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(kGood.size(), kCorrupted.size(),
            &result, &(scratch[0])));
  ASSERT_NE(result.compare(kCorrupted), 0);
}
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };
    
    /**
 * @brief delete fname
 * @details [long description]
 *
 * @param fname [description]
 * @return [description]
 */
Status EnvLibrados::DeleteFile(const std::string& fname)
{
  LOG_DEBUG('[IN]%s\n', fname.c_str());
  std::string fid, dir, file;
  split(fname, &dir, &file);
  Status s = _GetFid(dir + '/' + file, fid);
    }
    
    // After recovery the commit map is empty while the max is set. The code would
// go through a different path which requires a separate test.
TEST_P(WritePreparedTransactionTest, IsInSnapshotEmptyMapTest) {
  WritePreparedTxnDB* wp_db = dynamic_cast<WritePreparedTxnDB*>(db);
  wp_db->max_evicted_seq_ = 100;
  ASSERT_FALSE(wp_db->IsInSnapshot(50, 40));
  ASSERT_TRUE(wp_db->IsInSnapshot(50, 50));
  ASSERT_TRUE(wp_db->IsInSnapshot(50, 100));
  ASSERT_TRUE(wp_db->IsInSnapshot(50, 150));
  ASSERT_FALSE(wp_db->IsInSnapshot(100, 80));
  ASSERT_TRUE(wp_db->IsInSnapshot(100, 100));
  ASSERT_TRUE(wp_db->IsInSnapshot(100, 150));
}
    
        // Compare a and b. Return a negative value if a is less than b, 0 if they
    // are equal, and a positive value if a is greater than b
    virtual int operator()(const char* prefix_len_key1,
                           const char* prefix_len_key2) const = 0;