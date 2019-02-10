
        
        // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    
    {}  // namespace nw

    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
    // Get string from resource_id.
base::StringPiece GetStringResource(int resource_id);
    
    namespace nw {
    }
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.readAvailableTypes', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardReadAvailableTypesFunction);
};
    
      char headerCompat[8];
  memset(headerCompat, 0, sizeof(headerCompat));
  // magic
  headerCompat[0] = 0xa1u;
  headerCompat[1] = 0xa2u;
  // format ID
  headerCompat[2] = 0x02u;
  // version
  headerCompat[6] = 0;
  headerCompat[7] = 0x02u;
    
    
    {  void serialize(const std::string& filename);
};
    
    namespace aria2 {
    }
    
      void update();
    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) = 0;
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
    void DHTUnknownMessage::doReceivedAction() {}
    
    void DNSCache::remove(const std::string& hostname, uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  entries_.erase(target);
}
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
     public:
  PosixSequentialFile(const std::string& fname, FILE* file, int fd,
                      const EnvOptions& options);
  virtual ~PosixSequentialFile();
    
      static void CompactFiles(void* arg) {
    std::unique_ptr<CompactionTask> task(
        reinterpret_cast<CompactionTask*>(arg));
    assert(task);
    assert(task->db);
    Status s = task->db->CompactFiles(
        task->compact_options,
        task->input_file_names,
        task->output_level);
    printf('CompactFiles() finished with status %s\n', s.ToString().c_str());
    if (!s.ok() && !s.IsIOError() && task->retry_on_fail) {
      // If a compaction task with its retry_on_fail=true failed,
      // try to schedule another compaction in case the reason
      // is not an IO error.
      CompactionTask* new_task = task->compactor->PickCompaction(
          task->db, task->column_family_name);
      task->compactor->ScheduleCompaction(new_task);
    }
  }
    
    class MyMerge : public rocksdb::MergeOperator {
 public:
  virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override {
    merge_out->new_value.clear();
    if (merge_in.existing_value != nullptr) {
      merge_out->new_value.assign(merge_in.existing_value->data(),
                                  merge_in.existing_value->size());
    }
    for (const rocksdb::Slice& m : merge_in.operand_list) {
      fprintf(stderr, 'Merge(%s)\n', m.ToString().c_str());
      // the compaction filter filters out bad values
      assert(m.ToString() != 'bad');
      merge_out->new_value.assign(m.data(), m.size());
    }
    return true;
  }
    }
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = db->Put(write_options, 'xyz', 'zzz');
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
      // Set the number of background threads that will be executing the
  // scheduled jobs.
  virtual void SetBackgroundThreads(int num) = 0;
  virtual int GetBackgroundThreads() = 0;
    
    
    {}  // namespace rocksdb
#endif  // !ROCKSDB_LITE

    
        vector<int> nums1 = {1, 1, 2};
    cout << Solution().removeDuplicates(nums1) << endl;
    
    
int main() {
    }
    
            vector<int> res;
        if( root == NULL )
            return res;
    
    
    {
    {
    {            if(cur != NULL){
                stack.push(cur);
                cur = cur->left;
            }
            else {
                cur = stack.top();
                stack.pop();
                res.push_back(cur->val);
                cur = cur->right;
            }
        }
        return res;
    }
};
    
            while(!q.empty()){
    }
    
    
    {        vector<int> res;
        preorderTraversal(root, res);
        return res;
    }
    
    private:
    struct TagNode{
        TreeNode* node;
        bool isFirst;
        TagNode(TreeNode* node): node(node), isFirst(false){}
    };