
        
        #ifndef ATOM_BROWSER_NET_URL_REQUEST_ASYNC_ASAR_JOB_H_
#define ATOM_BROWSER_NET_URL_REQUEST_ASYNC_ASAR_JOB_H_
    
    
    {}  // namespace atom

    
    namespace atom {
    }
    
    // Only lock when lockers are used in current thread.
class Locker {
 public:
  explicit Locker(v8::Isolate* isolate);
  ~Locker();
    }
    
    #include 'ui/gfx/geometry/rect.h'
    
      // Sets time interval between updates. By default list of sources and their
  // thumbnail are updated once per second. If called after StartUpdating() then
  // it will take effect only after the next update.
  virtual void SetUpdatePeriod(base::TimeDelta period) = 0;
    
    // Wrapper used to keep track of the lifetime of a WebContents.
// Lives on the UI thread.
class PrintingUIWebContentsObserver : public content::WebContentsObserver {
 public:
  explicit PrintingUIWebContentsObserver(content::WebContents* web_contents);
    }
    
     private:
  friend class base::RefCountedThreadSafe<MonitorFinder>;
  ~MonitorFinder();
    
    #include <string>
    
        // A sub-minibatch is a part of a minibatch which helps computing large minibatches that cannot load into GPU memory in one forward-backward computation
    // The usage would be :
    //        SubminibatchHelpers sbhelper;
    //        for (;;)
    //        {
    //            size_t nsb=sb.GetMinibatchIntoCache(...);
    //            for (size_t i=0; i<nsb; i++)
    //            {
    //                sbhelper.GetSubMinibatchToNet(i);
    //                net.Evaluate(criterionNodes[0]);
    //                sbhelper.DoneWithCurrentSubMinibatch();
    //            }
    //            UpdateWeights(...);
    //        }
    
            // Graph outputs.
        std::vector<const NodeArg*> m_graphOutputs;
    
                static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/std::string* p_data, int64_t p_expected_size);
            static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/bool* p_data, int64_t p_expected_size);
    
            std::string OpUtils::ToDataTypeString(const TensorProto::DataType& p_type)
        {
            TypesWrapper& t = TypesWrapper::GetTypesWrapper();
            switch (p_type)
            {
            case TensorProto::DataType::TensorProto_DataType_BOOL:
                return t.c_bool;
            case TensorProto::DataType::TensorProto_DataType_STRING:
                return t.c_string;
            case TensorProto::DataType::TensorProto_DataType_FLOAT16:
                return t.c_float16;
            case TensorProto::DataType::TensorProto_DataType_FLOAT:
                return t.c_float;
            case TensorProto::DataType::TensorProto_DataType_DOUBLE:
                return t.c_double;
            case TensorProto::DataType::TensorProto_DataType_INT8:
                return t.c_int8;
            case TensorProto::DataType::TensorProto_DataType_INT16:
                return t.c_int16;
            case TensorProto::DataType::TensorProto_DataType_INT32:
                return t.c_int32;
            case TensorProto::DataType::TensorProto_DataType_INT64:
                return t.c_int64;
            case TensorProto::DataType::TensorProto_DataType_UINT8:
                return t.c_uint8;
            case TensorProto::DataType::TensorProto_DataType_UINT16:
                return t.c_uint16;
            case TensorProto::DataType::TensorProto_DataType_UINT32:
                return t.c_uint32;
            case TensorProto::DataType::TensorProto_DataType_UINT64:
                return t.c_uint64;
            case TensorProto::DataType::TensorProto_DataType_COMPLEX64:
                return t.c_complex64;
            case TensorProto::DataType::TensorProto_DataType_COMPLEX128:
                return t.c_complex128;
             case TensorProto::DataType::TensorProto_DataType_UNDEFINED:
                return t.c_undefined;
            }
    }
    
        // Taken from Caffe2
    REGISTER_OPERATOR_SCHEMA(MaxRoiPool)
        .Description('ROI max pool consumes an input tensor X and region of interests (RoIs) to '
            'apply max pooling across each RoI, to produce output 4-D tensor of shape '
            '(num_rois, channels, pooled_shape[0], pooled_shape[1]).')
        .Input('X', 'The input 4-D tensor of data. Only NCHW order is currently supported.', 'T')
        .Input('rois', 'RoIs (Regions of Interest) to pool over. Should be a 2-D tensor of '
            'shape (num_rois, 5) given as [[batch_id, x1, y1, x2, y2], ...].', 'T')
        .Output('Y', 'RoI pooled output 4-D tensor of shape '
            '(num_rois, channels, pooled_h, pooled_w).', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('pooled_shape', 'ROI pool output shape (height, width).',
            AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('spatial_scale', 'Multiplicative spatial scale factor to translate ROI '
            'coordinates from their input scale to the scale used when pooling (Default: 1.0).',
            AttrType::AttributeProto_AttributeType_FLOAT, float(1.0));
    
        REGISTER_OPERATOR_SCHEMA(TreeEnsembleClassifier)
        .SetDomain(c_mlDomain)
        .Input('X', 'Data to be classified', 'T1')
        .Output('Y', 'Classification outputs (one class per example', 'T2')
        .Output('Z', 'Classification outputs (All classes scores per example,N,E', 'tensor(float)')
        .Description(R'DOC(
            Tree Ensemble classifier.  Returns the top class for each input in N.
            All args with nodes_ are fields of a tuple of tree nodes, and
            it is assumed they are the same length, and an index i will decode the
            tuple across these inputs.  Each node id can appear only once
            for each tree id.'
            All fields prefixed with class_ are tuples of votes at the leaves.
            A leaf may have multiple votes, where each vote is weighted by
            the associated class_weights index.
            It is expected that either classlabels_strings or classlabels_INTS
            will be passed and the class_ids are an index into this list.
            Mode enum is BRANCH_LEQ, BRANCH_LT, BRANCH_GTE, BRANCH_GT, BRANCH_EQ, BRANCH_NEQ, LEAF.
            )DOC')
        .TypeConstraint('T1', { 'tensor(float)', 'tensor(double)', 'tensor(int64)', 'tensor(int32)' }, ' allowed types.')
        .TypeConstraint('T2', { 'tensor(string)', 'tensor(int64)' }, ' allowed types.')
        .Attr('nodes_treeids', 'tree id for this node', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_nodeids', 'node id for this node, node ids may restart at zero for each tree (but not required).', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_featureids', 'feature id for this node', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_values', 'thresholds to do the splitting on for this node.', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('nodes_hitrates', '', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('nodes_modes', 'enum of behavior for this node 'BRANCH_LEQ', 'BRANCH_LT', 'BRANCH_GTE', 'BRANCH_GT', 'BRANCH_EQ', 'BRANCH_NEQ', 'LEAF'', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('nodes_truenodeids', 'child node if expression is true', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_falsenodeids', 'child node if expression is false', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('nodes_missing_value_tracks_true', 'for each node, decide if the value is missing (nan) then use true branch, this field can be left unset and will assume false for all nodes', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('base_values', 'starting values for each class, can be omitted and will be assumed as 0', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('class_treeids', 'tree that this node is in', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('class_nodeids', 'node id that this weight is for', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('class_ids', 'index of the class list that this weight is for', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('class_weights', 'the weight for the class in class_id', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('post_transform', 'post eval transform for score, enum 'NONE', 'SOFTMAX', 'LOGISTIC', 'SOFTMAX_ZERO', 'PROBIT'', AttrType::AttributeProto_AttributeType_STRING)
        .Attr('classlabels_strings', 'class labels if using string labels, size E', AttrType::AttributeProto_AttributeType_STRINGS)
        .Attr('classlabels_int64s', 'class labels if using int labels, size E, one of the two class label fields must be used', AttrType::AttributeProto_AttributeType_INTS);
    
    template <class ElemType>
void ReaderShim<ElemType>::StartAsyncPrefetching()
{
    auto localCurrentDataTransferIndex = m_currentDataTransferIndex;
    // Starting the prefetch task. There is always a single async read in flight.
    // When the network requests a new minibatch, we wait for the current async to finish, swap the buffers
    // and kick off the new prefetch.
    m_prefetchTask = std::async(m_launchType, [this, localCurrentDataTransferIndex]()
    {
        return PrefetchMinibatch(localCurrentDataTransferIndex);
    });
}
    
    enum
{
    GRUInputIndexX = 0,
    GRUInputIndexW = 1,
    GRUInputIndexR = 2,
    GRUInputIndexB = 3,
    GRUInputIndexSequenceLens = 4,
    GRUInitialH = 5,
};
    
    
    {        foreach_column (k, us)
        {
            size_t jj = 0;
            foreach_row (j, m2)
            {
                foreach_row (i, m1)
                {
                    us(jj++, k) = m1(i, k) * m2(j, k);
                }
            }
        }
    }
    
    
    {    // also update node groups
    for (auto groupIter : GetAllNodeGroups())
    {
        auto& group = *groupIter;
        for (int i = 0; i < group.size(); i++)
            if (group[i] == oldNode)
                group[i] = newNode;
    }
}
    
      void FixChecksum(int header_offset, int len) {
    // Compute crc of type/len/data
    uint32_t crc = crc32c::Value(&dest_.contents_[header_offset+6], 1 + len);
    crc = crc32c::Mask(crc);
    EncodeFixed32(&dest_.contents_[header_offset], crc);
  }
    
    namespace leveldb {
    }
    
      ReadOptions read_options;
  Iterator *iter = db->NewIterator(read_options);
    
    void BlockBuilder::Add(const Slice& key, const Slice& value) {
  Slice last_key_piece(last_key_);
  assert(!finished_);
  assert(counter_ <= options_->block_restart_interval);
  assert(buffer_.empty() // No values yet?
         || options_->comparator->Compare(key, last_key_piece) > 0);
  size_t shared = 0;
  if (counter_ < options_->block_restart_interval) {
    // See how much sharing to do with previous string
    const size_t min_length = std::min(last_key_piece.size(), key.size());
    while ((shared < min_length) && (last_key_piece[shared] == key[shared])) {
      shared++;
    }
  } else {
    // Restart compression
    restarts_.push_back(buffer_.size());
    counter_ = 0;
  }
  const size_t non_shared = key.size() - shared;
    }
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
      // Read sampling factors and quant table index for each component.
  std::vector<bool> ids_seen(256, false);
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    const int id = ReadUint8(data, pos);
    if (ids_seen[id]) {   // (cf. section B.2.2, syntax of Ci)
      fprintf(stderr, 'Duplicate ID %d in SOF.\n', id);
      jpg->error = JPEG_DUPLICATE_COMPONENT_ID;
      return false;
    }
    ids_seen[id] = true;
    jpg->components[i].id = id;
    int factor = ReadUint8(data, pos);
    int h_samp_factor = factor >> 4;
    int v_samp_factor = factor & 0xf;
    VERIFY_INPUT(h_samp_factor, 1, 15, SAMP_FACTOR);
    VERIFY_INPUT(v_samp_factor, 1, 15, SAMP_FACTOR);
    jpg->components[i].h_samp_factor = h_samp_factor;
    jpg->components[i].v_samp_factor = v_samp_factor;
    jpg->components[i].quant_idx = ReadUint8(data, pos);
    jpg->max_h_samp_factor = std::max(jpg->max_h_samp_factor, h_samp_factor);
    jpg->max_v_samp_factor = std::max(jpg->max_v_samp_factor, v_samp_factor);
  }
    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    #include 'guetzli/jpeg_data.h'
    
    #include <algorithm>
#include <string.h>
    
      bool enableMmap_;
  unsigned char* mapaddr_;
  int64_t maplen_;
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
    std::unique_ptr<AuthConfig> AuthConfig::create(std::string user,
                                               std::string password)
{
  if (user.empty()) {
    return nullptr;
  }
  else {
    return make_unique<AuthConfig>(std::move(user), std::move(password));
  }
}