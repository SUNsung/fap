
        
          /** Will not return until the internal thread has exited. */
  void StopInternalThread();
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
    #endif  // CAFFE_CROP_LAYER_HPP_

    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
      int64_t num_record_drop_hidden = 0;
  int64_t num_record_drop_obsolete = 0;
  int64_t num_record_drop_range_del = 0;
  int64_t num_range_del_drop_obsolete = 0;
  // Deletions obsoleted before bottom level due to file gap optimization.
  int64_t num_optimized_del_drop_obsolete = 0;
  uint64_t total_filter_time = 0;
    
    Status WriteBatchBase::Merge(const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
      TEST_KILL_RANDOM('PosixMmapFile::Append:1', rocksdb_kill_odds);
  void* ptr = mmap(nullptr, map_size_, PROT_READ | PROT_WRITE, MAP_SHARED, fd_,
                   file_offset_);
  if (ptr == MAP_FAILED) {
    return Status::IOError('MMap failed on ' + filename_);
  }
  TEST_KILL_RANDOM('PosixMmapFile::Append:2', rocksdb_kill_odds);
    
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
    
      db->Get(ReadOptions(), 'key2', &value);
  assert(value == 'value');
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
      // A list of properties that describe some details about the current
  // operation.  Same field in op_properties[] might have different
  // meanings for different operations.
  uint64_t op_properties[kNumOperationProperties];
    
    
    {}  // namespace rocksdb
