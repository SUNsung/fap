
        
        void SavePageHandler::OnDownloadCreated(content::DownloadManager* manager,
                                        download::DownloadItem* item) {
  // OnDownloadCreated is invoked during WebContents::SavePage, so the |item|
  // here is the one stated by WebContents::SavePage.
  item->AddObserver(this);
}
    
      // Get the weak_map_id from SupportsUserData.
  static int32_t GetIDFromWrappedClass(base::SupportsUserData* wrapped);
    
      // content::JavaScriptDialogManager implementations.
  void RunJavaScriptDialog(content::WebContents* web_contents,
                           content::RenderFrameHost* rfh,
                           content::JavaScriptDialogType dialog_type,
                           const base::string16& message_text,
                           const base::string16& default_prompt_text,
                           DialogClosedCallback callback,
                           bool* did_suppress_message) override;
  void RunBeforeUnloadDialog(content::WebContents* web_contents,
                             content::RenderFrameHost* rfh,
                             bool is_reload,
                             DialogClosedCallback callback) override;
  void CancelDialogs(content::WebContents* web_contents,
                     bool reset_state) override;
    
    #include 'content/public/browser/quota_permission_context.h'
#include 'content/public/common/storage_quota_params.h'
    
    void AutoUpdater::SetDelegate(Delegate* delegate) {
  delegate_ = delegate;
}
    
    // --------------------------- Structures ---------------------------
    
    class AboutProtocolHandler : public net::URLRequestJobFactory::ProtocolHandler {
 public:
  AboutProtocolHandler();
  ~AboutProtocolHandler() override;
    }
    
    void DumpAxTree(std::string* dump_output, content::RenderFrameHost* frame) {
  content::RenderFrameHostImpl* f = static_cast<content::RenderFrameHostImpl*>(frame);
  content::BrowserAccessibilityManager* manager = f->GetOrCreateBrowserAccessibilityManager();
  ui::AXTreeUpdate ax_tree = manager->SnapshotAXTreeForTesting();
  std::string ax_tree_dump = DumpPdfAccessibilityTree(ax_tree);
  *dump_output += ax_tree_dump;
}
    
    using base::MessageLoop;
using base::CommandLine;
using content::BrowserThread;
using content::Shell;
using content::ShellBrowserContext;
using content::RenderProcessHost;
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    // Tell browser to delete a object.
// function DeallocateObject(id);
v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id);
    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
       bool GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const override;
    
    
    {}
    
    #include 'extensions/browser/extension_function.h'
    
    #include <cstdint>  // for int16_t
    
    // This class fits a line to a set of ICOORD points.
// There is no restriction on the direction of the line, as it
// uses a vector method, ie no concern over infinite gradients.
// The fitted line has the least upper quartile of squares of perpendicular
// distances of all source points from the line, subject to the constraint
// that the line is made from one of the pairs of [{p1,p2,p3},{pn-2, pn-1, pn}]
// i.e. the 9 combinations of one of the first 3 and last 3 points.
// A fundamental assumption of this algorithm is that one of the first 3 and
// one of the last 3 points are near the best line fit.
// The points must be Added in line order for the algorithm to work properly.
// No floating point calculations are needed* to make an accurate fit,
// and no random numbers are needed** so the algorithm is deterministic,
// architecture-stable, and compiler-stable as well as stable to minor
// changes in the input.
// *A single floating point division is used to compute each line's distance.
// This is unlikely to result in choice of a different line, but if it does,
// it would be easy to replace with a 64 bit integer calculation.
// **Random numbers are used in the nth_item function, but the worst
// non-determinism that can result is picking a different result among equals,
// and that wouldn't make any difference to the end-result distance, so the
// randomness does not affect the determinism of the algorithm. The random
// numbers are only there to guarantee average linear time.
// Fitting time is linear, but with a high constant, as it tries 9 different
// lines and computes the distance of all points each time.
// This class is aimed at replacing the LLSQ (linear least squares) and
// LMS (least median of squares) classes that are currently used for most
// of the line fitting in Tesseract.
class DetLineFit {
 public:
  DetLineFit();
  ~DetLineFit() = default;
    }
    
      // Solve the dynamic programming problem for the given array of points, with
  // the given size and cost function.
  // Steps backwards are limited to being between min_step and max_step
  // inclusive.
  // The return value is the tail of the best path.
  static DPPoint* Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points);
    
    class CensusChannelData : public ChannelData {
 public:
  grpc_error* Init(grpc_channel_element* elem,
                   grpc_channel_element_args* args) override;
};
    
    grpc_error* CensusClientCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  path_ = grpc_slice_ref_internal(args->path);
  start_time_ = absl::Now();
  method_ = GetMethod(&path_);
  qualified_method_ = absl::StrCat('Sent.', method_);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_trailing_metadata_,
                    OnDoneRecvTrailingMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  return GRPC_ERROR_NONE;
}
    
    namespace grpc {
    }
    
    namespace grpc {
    }
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
    static uint64_t PackSequenceAndType(uint64_t seq, ValueType t) {
  assert(seq <= kMaxSequenceNumber);
  assert(t <= kValueTypeForSeek);
  return (seq << 8) | t;
}
    
    #include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
    
// Owned filenames have the form:
//    dbname/CURRENT
//    dbname/LOCK
//    dbname/LOG
//    dbname/LOG.old
//    dbname/MANIFEST-[0-9]+
//    dbname/[0-9]+.(log|sst|ldb)
bool ParseFileName(const std::string& filename,
                   uint64_t* number,
                   FileType* type) {
  Slice rest(filename);
  if (rest == 'CURRENT') {
    *number = 0;
    *type = kCurrentFile;
  } else if (rest == 'LOCK') {
    *number = 0;
    *type = kDBLockFile;
  } else if (rest == 'LOG' || rest == 'LOG.old') {
    *number = 0;
    *type = kInfoLogFile;
  } else if (rest.starts_with('MANIFEST-')) {
    rest.remove_prefix(strlen('MANIFEST-'));
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    if (!rest.empty()) {
      return false;
    }
    *type = kDescriptorFile;
    *number = num;
  } else {
    // Avoid strtoull() to keep filename format independent of the
    // current locale
    uint64_t num;
    if (!ConsumeDecimalNumber(&rest, &num)) {
      return false;
    }
    Slice suffix = rest;
    if (suffix == Slice('.log')) {
      *type = kLogFile;
    } else if (suffix == Slice('.sst') || suffix == Slice('.ldb')) {
      *type = kTableFile;
    } else if (suffix == Slice('.dbtmp')) {
      *type = kTempFile;
    } else {
      return false;
    }
    *number = num;
  }
  return true;
}
    
    
    {  // Errors
  static const char* errors[] = {
    '',
    'foo',
    'foo-dx-100.log',
    '.log',
    '',
    'manifest',
    'CURREN',
    'CURRENTX',
    'MANIFES',
    'MANIFEST',
    'MANIFEST-',
    'XMANIFEST-3',
    'MANIFEST-3x',
    'LOC',
    'LOCKx',
    'LO',
    'LOGx',
    '18446744073709551616.log',
    '184467440737095516150.log',
    '100',
    '100.',
    '100.lop'
  };
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
    
    {
    {}  // namespace log
}  // namespace leveldb

    
    TEST(LogTest, Empty) {
  ASSERT_EQ('EOF', Read());
}
    
      // Fragment the record if necessary and emit it.  Note that if slice
  // is empty, we still want to iterate once to emit a single
  // zero-length record
  Status s;
  bool begin = true;
  do {
    const int leftover = kBlockSize - block_offset_;
    assert(leftover >= 0);
    if (leftover < kHeaderSize) {
      // Switch to a new block
      if (leftover > 0) {
        // Fill the trailer (literal below relies on kHeaderSize being 7)
        assert(kHeaderSize == 7);
        dest_->Append(Slice('\x00\x00\x00\x00\x00\x00', leftover));
      }
      block_offset_ = 0;
    }
    }
    
      Status ConvertLogToTable(uint64_t log) {
    struct LogReporter : public log::Reader::Reporter {
      Env* env;
      Logger* info_log;
      uint64_t lognum;
      virtual void Corruption(size_t bytes, const Status& s) {
        // We print error messages for corruption, but continue repairing.
        Log(info_log, 'Log #%llu: dropping %d bytes; %s',
            (unsigned long long) lognum,
            static_cast<int>(bytes),
            s.ToString().c_str());
      }
    };
    }
    
    // Implementation details follow
template<typename Key, class Comparator>
struct SkipList<Key,Comparator>::Node {
  explicit Node(const Key& k) : key(k) { }
    }
    
        SnapshotImpl* snapshot = new SnapshotImpl(sequence_number);
    
            auto currentWorkerNumSamples = m_prevMinibatchNumSamples;
        auto prevTotalNumSamples = TotalNumberOfSamplesSeen();
    
            void Erase() override
        {
            if (IsPacked())
            {
                m_packedData = nullptr;
                m_packedDataLayout = nullptr;
                m_isPacked = false;
            }
            else
                Value::Erase();
        }
    
        ParameterInitializer GlorotUniformInitializer(double scale, int outputRank, int filterRank, unsigned long seed)
    {
        return CreateInitializer(Microsoft::MSR::CNTK::GlorotUniformInitializerTypeName, scale, outputRank, filterRank, seed);
    }
    
            // add it to the respective node groups based on the tags
        for (auto tag : node->GetTags())
        {
#if 1       // we keep this for a while (we already verified that our samples no longer use this)
            // map legacy names
            if      (tag == L'criteria') tag = L'criterion';
            else if (tag == L'eval'    ) tag = L'evaluation';
#endif
            AddToNodeGroup(tag, node); // tag may be empty, or may have been set by array parameters
        }
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    
    {    return 0;
}
    
        const int nums[] = {0,4,3,0};
    vector<int> nums_vec( nums, nums + sizeof(nums)/sizeof(int) );
    int target = 0;
    printVec(Solution().twoSum(nums_vec, target));
    
        deleteLinkedList(head);
    
    
    {    return;
}
    
        vector<int> nums1 = {1, 1, 2};
    cout << Solution().removeDuplicates(nums1) << endl;
    
    
    {    return 0;
}

    
    /// BFS
/// No need to store level information in the queue :-)
///
/// Time Complexity: O(n), where n is the number of nodes in the tree
/// Space Complexity: O(n)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    }
    }
    
    int main() {
    }