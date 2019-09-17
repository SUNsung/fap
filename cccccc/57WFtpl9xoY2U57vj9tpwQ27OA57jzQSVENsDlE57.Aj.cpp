
        
        
    { private:
  BufferAllocation::Slice operand_;
  BufferAllocation::Slice scale_;
  BufferAllocation::Slice mean_;
  BufferAllocation::Slice inv_stddev_;
  BufferAllocation::Slice grad_output_;
  float epsilon_;
  int64 feature_index_;
  BufferAllocation::Slice output_grad_data_;
  BufferAllocation::Slice output_grad_scale_;
  BufferAllocation::Slice output_grad_offset_;
  BufferAllocation::Slice output_tuple_;
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
            BufferAllocation::Slice slice = outfeed_slices_.element(index);
        se::DeviceMemoryBase data_address;
        if (slice.allocation()) {
          // If we have a static allocation, read it from there. This avoids
          // synchronizing the host and device just to read a pointer.
          data_address = buffer_allocations.GetDeviceAddress(slice);
        } else {
          // Otherwise we have to read the tuple pointer first.
          CHECK(!index.empty());
          // Copy the parent buffer to the host.
          BufferAllocation::Slice tuple_slice =
              outfeed_slices_.element(ShapeIndexView(index).ConsumeFront());
          if (!tuple_slice.allocation()) {
            return Unimplemented(
                'Nested dynamic tuples are not supported on GPU');
          }
          se::DeviceMemoryBase tuple_address =
              buffer_allocations.GetDeviceAddress(tuple_slice);
          CHECK(tuple_slice.size() % sizeof(void*) == 0)
              << 'Tuple size must be a multiple of pointer size';
          std::vector<void*> tuple_element_buffer_addresses(tuple_slice.size() /
                                                            sizeof(void*));
          stream.ThenMemcpy(tuple_element_buffer_addresses.data(),
                            tuple_address, tuple_slice.size());
          TF_RETURN_IF_ERROR(stream.BlockHostUntilDone());
          // The data address is specified by the element of the tuple pointer
          // buffer.
          data_address =
              se::DeviceMemoryBase(tuple_element_buffer_addresses[index.back()],
                                   (*buffer)->length());
        }
    
    Status TriangularSolveThunk::ExecuteOnStream(const ExecuteParams& params) {
  auto& stream = *params.stream;
  auto& buffer_allocations = *params.buffer_allocations;
    }
    
    // WhileThunk implements the while instruction on GPU by invoking a thunk
// sequence for the while 'condition' computation, and (conditionally) another
// thunk sequence for the while 'body' computation. WhileThunk assumes that
// buffers for the following set of while-related instructions share the same
// allocation:
//   init, condition.parameter, body.parameter, body.root, while.result
// WhileThunk synchronizes the stream to test the result of the 'condition'
// computation.
class WhileThunk : public Thunk {
 public:
  // Constructs a WhileThunk to compute while instruction 'hlo'.
  WhileThunk(const BufferAllocation::Slice& condition_result_buffer_index,
             std::unique_ptr<ThunkSequence> condition_thunk_sequence,
             std::unique_ptr<ThunkSequence> body_thunk_sequence,
             const HloInstruction* hlo);
  WhileThunk(const WhileThunk&) = delete;
  WhileThunk& operator=(const WhileThunk&) = delete;
    }
    
    
    {  // clang-format off
  std::vector<FDH::Node> nodes = {
   {{'x_shape'}, 'Shape', {'x'}},
   {{'x_rank'}, 'Rank', {'x'}},
   {{'i_shape'}, 'Shape', {'i'}, {{'T', DT_INT32}}},
   FDH::Const('zero', 0),
   FDH::Const('one', 1),
   // stitch_idx0 = Range(0, x_rank, 1)
   {{'stitch_val1'}, 'Fill', {'i_shape:output:0', 'one:output:0'},
    {{'T', DT_INT32}}},
   {{'y_shape'}, 'DynamicStitch',
    {'stitch_idx0:output:0', 'i',
     'x_shape:output:0', 'stitch_val1:output:0'},
    {{'N', 2}, {'T', DT_INT32}}},
   {{'tile_scaling'}, 'Div', {'x_shape:output:0', 'y_shape:merged:0'},
    {{'T', DT_INT32}}},
   {{'di'}, 'ZerosLike', {'i'}, {{'T', DT_INT32}}}
  };
  // clang-format on
  nodes.insert(nodes.end(), body.begin(), body.end());
  for (auto& n : nodes) {
    if (n.attr.empty()) {
      n.attr = {{'T', '$T'}};
    }
  }
  // 'Range' doesn't need any attr.
  nodes.push_back({{'stitch_idx0'},
                   'Range',
                   {'zero:output:0', 'x_rank:output:0', 'one:output:0'},
                   {}});
  *g = FDH::Create('_',
                   // Input defs
                   {'x:T', 'i:int32', 'dy:T'},
                   // Ret val defs
                   {'dx:T', 'di:int32'},
                   // Attr defs
                   {{'T: {half, float, double}'}},
                   // Nodes
                   nodes,
                   // Return values
                   {{'dx', 'dx:output:0'}, {'di', 'di:y:0'}});
  return Status::OK();
}
    
      mapped_type& operator[](const key_type& k) {
    return map()[k];
  }
    
    #ifndef incl_HPHP_MYSQLSTATS_H_
#define incl_HPHP_MYSQLSTATS_H_
    
    using BfdMap = hphp_hash_map<
  std::string,
  std::shared_ptr<BfdCache>,
  string_hash
>;
    
    void RangeState::reserve() {
  auto const base = reinterpret_cast<void*>(low());
  auto const size = capacity();
  auto ret = mmap(base, size, PROT_NONE,
                  MAP_ANONYMOUS | MAP_PRIVATE | MAP_NORESERVE, -1, 0);
  if (ret != base) {
    char msg[128];
    if (ret == MAP_FAILED) {
      std::snprintf(msg, sizeof(msg),
                    'failed to reserve address range 0x%p to 0x%' PRIuPTR
                    ', errno = %d',
                    base, high(), errno);
    } else {
      munmap(ret, capacity());
      std::snprintf(msg, sizeof(msg),
                    'failed to reserve address range 0x%p to 0x%' PRIuPTR
                    ', got 0x%p instead',
                    base, high(), ret);
    }
    throw std::runtime_error{msg};
  }
}
    
    // Try to create a temporary directory and mount a hugetlbfs with 1G page size
// there.  Return whether the operation succeeded.
bool auto_mount_hugetlbfs();
    
      void wait();
  bool wait(long seconds); // false if timed out
  bool wait(long seconds, long long nanosecs); // false if timed out
  void notify();
  void notifyAll();
    
      std::sort(
    obj.members.begin(),
    obj.members.end(),
    [&](const Object::Member& m1, const Object::Member& m2) {
      return std::tie(m1.offset, m1.name) <
        std::tie(m2.offset, m2.name);
    }
  );
    
    const char* kSchemaPlaceholder = '%{schema}';
    
    void cgInstanceOfBitmask(IRLS& env, const IRInstruction* inst) {
  implInstanceOfBitmask(env, inst, CC_NZ);
}
void cgNInstanceOfBitmask(IRLS& env, const IRInstruction* inst) {
  implInstanceOfBitmask(env, inst, CC_Z);
}
    
     public slots:
  void requestBulkOperation(QSharedPointer<RedisClient::Connection> connection,
                            int dbIndex, Operation op, QRegExp keyPattern,
                            AbstractOperation::OperationCallback callback);
    
      if (ret != Z_OK) return QByteArray();
    
    void ValueEditor::EmbeddedFormattersManager::encode(
    const QString &formatterName, const QByteArray &data, QJSValue jsCallback) {
  m_python->call('formatters.encode', QVariantList{formatterName, data},
                 jsCallback);
}

    
      auto result = readJsonFromExternalProcess(cmd, data.toBase64(),
                                            formatter['cwd'].toString());