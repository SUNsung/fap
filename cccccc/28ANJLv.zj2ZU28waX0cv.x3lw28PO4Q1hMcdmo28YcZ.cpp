
        
        
    {  cached_entries_.Clear();
  for (const auto& iter : entries_)
    cached_entries_.Append(iter.second->CreateDeepCopy());
  cache_needs_update_ = false;
}
    
      // The |predicate| is used to determine whether to set preferences for a
  // render process.
  explicit RenderProcessPreferences(const Predicate& predicate);
  virtual ~RenderProcessPreferences();
    
     private:
  // views::StatusIconLinux::Delegate:
  void OnClick() override;
  bool HasClickAction() override;
    
    MenuModelAdapter::MenuModelAdapter(AtomMenuModel* menu_model)
  : views::MenuModelAdapter(menu_model),
    menu_model_(menu_model) {
}
    
    
    {}  // namespace atom
    
    #include 'test/cpp/qps/report.h'
    
    namespace grpc {
namespace testing {
    }
    }
    
    
    {  bool failed_ = false;
  std::string db_;
  size_t current_ = 0;
  const std::string location_ = '\'location\':';
  const std::string latitude_ = '\'latitude\':';
  const std::string longitude_ = '\'longitude\':';
  const std::string name_ = '\'name\':';
};
    
    #endif  // GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H

    
      bool PrintBetaServicer(const grpc_generator::Service* service,
                         grpc_generator::Printer* out);
  bool PrintBetaServerFactory(
      const grpc::string& package_qualified_service_name,
      const grpc_generator::Service* service, grpc_generator::Printer* out);
  bool PrintBetaStub(const grpc_generator::Service* service,
                     grpc_generator::Printer* out);
  bool PrintBetaStubFactory(const grpc::string& package_qualified_service_name,
                            const grpc_generator::Service* service,
                            grpc_generator::Printer* out);
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    #include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
    
      /// Search the list for the (index)'th item (0-based) in (list:key)
  /// A negative index indicates: 'from end-of-list'
  /// If index is within range: return true, and return the value in *result.
  /// If (index < -length OR index>=length), then index is out of range:
  ///   return false (and *result is left unchanged)
  /// May throw RedisListException
  bool Index(const std::string& key, int32_t index,
             std::string* result);
    
      // Drop reference count.
  // If the refcount goes to zero return this memtable, otherwise return null.
  // REQUIRES: external synchronization to prevent simultaneous
  // operations on the same MemTable.
  MemTable* Unref() {
    --refs_;
    assert(refs_ >= 0);
    if (refs_ <= 0) {
      return this;
    }
    return nullptr;
  }
    
    // This class contains a fixed array of buckets, each
// pointing to a skiplist (null if the bucket is empty).
// bucket_count: number of fixed array buckets
// skiplist_height: the max height of the skiplist
// skiplist_branching_factor: probabilistic size ratio between adjacent
//                            link lists in the skiplist
extern MemTableRepFactory* NewHashSkipListRepFactory(
    size_t bucket_count = 1000000, int32_t skiplist_height = 4,
    int32_t skiplist_branching_factor = 4
);
    
      int recompute_height = 0;
  if (splice->height_ < max_height) {
    // Either splice has never been used or max_height has grown since
    // last use.  We could potentially fix it in the latter case, but
    // that is tricky.
    splice->prev_[max_height] = head_;
    splice->next_[max_height] = nullptr;
    splice->height_ = max_height;
    recompute_height = max_height;
  } else {
    // Splice is a valid proper-height splice that brackets some
    // key, but does it bracket this one?  We need to validate it and
    // recompute a portion of the splice (levels 0..recompute_height-1)
    // that is a superset of all levels that don't bracket the new key.
    // Several choices are reasonable, because we have to balance the work
    // saved against the extra comparisons required to validate the Splice.
    //
    // One strategy is just to recompute all of orig_splice_height if the
    // bottom level isn't bracketing.  This pessimistically assumes that
    // we will either get a perfect Splice hit (increasing sequential
    // inserts) or have no locality.
    //
    // Another strategy is to walk up the Splice's levels until we find
    // a level that brackets the key.  This strategy lets the Splice
    // hint help for other cases: it turns insertion from O(log N) into
    // O(log D), where D is the number of nodes in between the key that
    // produced the Splice and the current insert (insertion is aided
    // whether the new key is before or after the splice).  If you have
    // a way of using a prefix of the key to map directly to the closest
    // Splice out of O(sqrt(N)) Splices and we make it so that splices
    // can also be used as hints during read, then we end up with Oshman's
    // and Shavit's SkipTrie, which has O(log log N) lookup and insertion
    // (compare to O(log N) for skip list).
    //
    // We control the pessimistic strategy with allow_partial_splice_fix.
    // A good strategy is probably to be pessimistic for seq_splice_,
    // optimistic if the caller actually went to the work of providing
    // a Splice.
    while (recompute_height < max_height) {
      if (splice->prev_[recompute_height]->Next(recompute_height) !=
          splice->next_[recompute_height]) {
        // splice isn't tight at this level, there must have been some inserts
        // to this
        // location that didn't update the splice.  We might only be a little
        // stale, but if
        // the splice is very stale it would be O(N) to fix it.  We haven't used
        // up any of
        // our budget of comparisons, so always move up even if we are
        // pessimistic about
        // our chances of success.
        ++recompute_height;
      } else if (splice->prev_[recompute_height] != head_ &&
                 !KeyIsAfterNode(key_decoded,
                                 splice->prev_[recompute_height])) {
        // key is from before splice
        if (allow_partial_splice_fix) {
          // skip all levels with the same node without more comparisons
          Node* bad = splice->prev_[recompute_height];
          while (splice->prev_[recompute_height] == bad) {
            ++recompute_height;
          }
        } else {
          // we're pessimistic, recompute everything
          recompute_height = max_height;
        }
      } else if (KeyIsAfterNode(key_decoded,
                                splice->next_[recompute_height])) {
        // key is from after splice
        if (allow_partial_splice_fix) {
          Node* bad = splice->next_[recompute_height];
          while (splice->next_[recompute_height] == bad) {
            ++recompute_height;
          }
        } else {
          recompute_height = max_height;
        }
      } else {
        // this level brackets the key, we won!
        break;
      }
    }
  }
  assert(recompute_height <= max_height);
  if (recompute_height > 0) {
    RecomputeSpliceLevels(key_decoded, splice, recompute_height);
  }
    
      int operator()(const char* a, const char* b) const {
    if (Decode(a) < Decode(b)) {
      return -1;
    } else if (Decode(a) > Decode(b)) {
      return +1;
    } else {
      return 0;
    }
  }
    
    Status BlockFetcher::ReadBlockContents() {
  block_size_ = static_cast<size_t>(handle_.size());
    }