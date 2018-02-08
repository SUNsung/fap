
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  // Run constant folding operations on the given module. Returns whether the
  // module was changed (constant expressions folded).
  StatusOr<bool> Run(HloModule* module) override;
};
    
      // Initializes the estimator for the specified grappler item.
  // This implementation always returns OK.
  Status Initialize(const GrapplerItem& item) override;
    
      double ComputePrimalLoss(const double wx, const double example_label,
                           const double example_weight) const final {
    const double y_wx = example_label * wx;
    if (y_wx >= 1) return 0;
    if (y_wx <= 1 - gamma) return (1 - y_wx - gamma / 2) * example_weight;
    return (1 - y_wx) * (1 - y_wx) * example_weight * 0.5 / gamma;
  }
    
    void SubProcess::ClosePipes() {
  for (int i = 0; i < kNFds; i++) {
    if (parent_pipe_[i] >= 0) {
      close(parent_pipe_[i]);
      parent_pipe_[i] = -1;
    }
    if (child_pipe_[i] >= 0) {
      close(child_pipe_[i]);
      child_pipe_[i] = -1;
    }
  }
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        if (!use_function_convention) {
      TF_RETURN_IF_ERROR(
          NodeBuilder(strings::StrCat('_recv_', id.first, '_', id.second),
                      '_Recv')
              .Attr('tensor_type', BaseType(n->output_type(id.second)))
              .Attr('tensor_name', t)
              .Attr('send_device', device_info.name())
              .Attr('recv_device', device_info.name())
              .Attr('send_device_incarnation',
                    static_cast<int64>(device_info.incarnation()))
              .Attr('client_terminated', true)
              .Finalize(g, &recv_node));
    } else {
      // NOTE(mrry): We must include the index as part of the node
      // name, because _Arg is a 'stateful' kernel and therefore
      // its name must uniquely identify a kernel instance across all
      // graphs in the same session.
      TF_RETURN_IF_ERROR(NodeBuilder(strings::StrCat('_arg_', id.first, '_',
                                                     id.second, '_', i),
                                     '_Arg')
                             .Attr('T', BaseType(n->output_type(id.second)))
                             .Attr('index', static_cast<int32>(i))
                             .Finalize(g, &recv_node));
    }
    recv_node->set_assigned_device_name(device_info.name());
    
    static void BM_Subgraph(int iters, int num_nodes) {
  BM_SubgraphHelper(iters, num_nodes, false /* use_function_convention */);
}
static void BM_SubgraphFunctionConvention(int iters, int num_nodes) {
  BM_SubgraphHelper(iters, num_nodes, true /* use_function_convention */);
}
BENCHMARK(BM_Subgraph)->Arg(100)->Arg(1000)->Arg(10000)->Arg(100000);
BENCHMARK(BM_SubgraphFunctionConvention)
    ->Arg(100)
    ->Arg(1000)
    ->Arg(10000)
    ->Arg(100000);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
    }
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
    TEST(LogTest, RandomRead) {
  const int N = 500;
  Random write_rnd(301);
  for (int i = 0; i < N; i++) {
    Write(RandomSkewedString(i, &write_rnd));
  }
  Random read_rnd(301);
  for (int i = 0; i < N; i++) {
    ASSERT_EQ(RandomSkewedString(i, &read_rnd), Read());
  }
  ASSERT_EQ('EOF', Read());
}
    
    class SnapshotList {
 public:
  SnapshotList() {
    list_.prev_ = &list_;
    list_.next_ = &list_;
  }
    }
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
Env* NewMemEnv(Env* base_env);
    
    Mutex::~Mutex() { PthreadCall('destroy mutex', pthread_mutex_destroy(&mu_)); }
    
      // current_ is offset in data_ of current entry.  >= restarts_ if !Valid
  uint32_t current_;
  uint32_t restart_index_;  // Index of restart block in which current_ falls
  std::string key_;
  Slice value_;
  Status status_;
    
    
  // Iterator interface methods
  bool Valid() const        { return valid_; }
  Slice key() const         { assert(Valid()); return key_; }
  Slice value() const       { assert(Valid()); return iter_->value(); }
  // Methods below require iter() != NULL
  Status status() const     { assert(iter_); return iter_->status(); }
  void Next()               { assert(iter_); iter_->Next();        Update(); }
  void Prev()               { assert(iter_); iter_->Prev();        Update(); }
  void Seek(const Slice& k) { assert(iter_); iter_->Seek(k);       Update(); }
  void SeekToFirst()        { assert(iter_); iter_->SeekToFirst(); Update(); }
  void SeekToLast()         { assert(iter_); iter_->SeekToLast();  Update(); }
    
        // Determine area to update.
    int xmin = std::max(block_x * 16 - 1, 0);
    int xmax = std::min(block_x * 16 + 16, width_ - 1);
    int ymin = std::max(block_y * 16 - 1, 0);
    int ymax = std::min(block_y * 16 + 16, height_ - 1);
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);