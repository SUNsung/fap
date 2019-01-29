
        
        #include 'base/stl_util.h'
    
    bool Event::SendReply(const base::ListValue& result) {
  if (message_ == nullptr || sender_ == nullptr)
    return false;
    }
    
      // Pass the sender and message to be replied.
  void SetSenderAndMessage(content::RenderFrameHost* sender,
                           IPC::Message* message);
    
    namespace auto_updater {
    }
    
    void URLRequestAboutJob::Start() {
  base::ThreadTaskRunnerHandle::Get()->PostTask(
      FROM_HERE, base::BindOnce(&URLRequestAboutJob::StartAsync,
                                weak_ptr_factory_.GetWeakPtr()));
}
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    #include <dmlc/base.h>
#include <dmlc/json.h>
#include <dmlc/logging.h>
#include <dmlc/registry.h>
#include <nnvm/node.h>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include './base.h'
#include './resource.h'
#include './op_attr_types.h'
    
    
    {
    {
    {}  // namespace caffe
}  // namespace op
}  // namespace mxnet
    
        caffe::TBlob2CaffeBlob<xpu, Dtype>(caffe::Grad,
                                      bot_.begin(),
                                      in_grad.begin(),
                                      param_.num_data);
    // Pass grad scale to caffe blob
    MXCAFFEBLOB(top_[0], Dtype)->set_cpu_diff(&grad_scale_);
    
      for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    const auto& inode = idx[nid];
    if (inode.source->op() != ewise_plus_op) continue;
    int sid = storage_id[idx.entry_id(inode.inputs[0])];
    if (sid != storage_id[idx.entry_id(nid, 0)]) continue;
    if (idx[inode.inputs[0].node_id].source->is_variable()) continue;
    if (idx[inode.inputs[1].node_id].source->is_variable()) continue;
    uint32_t eid_rhs  = idx.entry_id(inode.inputs[1]);
    if (ref_count[eid_rhs] != 1) continue;
    if (inode.inputs[0].node_id >= inode.inputs[1].node_id) continue;
    // TODO(haibin) support inplace addto for Dynamic Storage
    if (storage_id[eid_rhs] == kDynamicStorageID) continue;
    CHECK_NE(storage_id[eid_rhs], sid);
    storage_id[eid_rhs] = sid;
    addto_entry[eid_rhs] = 1;
    storage_inplace_index[eid_rhs] = -1;
    skip_plus_node[nid] = 1;
  }
    
    #include '../common/utils.h'
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file inst_vector.h
 * \brief holder of a sequence of DataInst in CPU
 *        that are not necessarily of same shape
 */
    
    The input data is stored in a format similar to LibSVM file format, except that the **indices
are expected to be zero-based instead of one-based, and the column indices for each row are
expected to be sorted in ascending order**. Details of the LibSVM format are available
`here. <https://www.csie.ntu.edu.tw/~cjlin/libsvmtools/datasets/>`_
    
    /*!
 * \brief Iterator that normalize a image.
 *  It also applies a few augmention before normalization.
 */
class ImageNormalizeIter : public IIterator<DataInst> {
 public:
  explicit ImageNormalizeIter(IIterator<DataInst> *base)
      : base_(base), meanfile_ready_(false) {
  }
    }
    
    namespace aria2 {
    }
    
    class DHTMessageCallback;
    
    std::shared_ptr<DHTBucket>
DHTRoutingTable::getBucketFor(const unsigned char* nodeID) const
{
  return dht::findBucketFor(root_.get(), nodeID);
}
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
    class DHTSetup {
public:
  DHTSetup();
    }
    
    #include <algorithm>
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                                   int numRetry)
{
  auto task = std::make_shared<DHTPingTask>(remoteNode, numRetry);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    namespace aria2 {
    }
    
    bool DHTTokenTracker::validateToken(const std::string& token,
                                    const unsigned char* infoHash,
                                    const std::string& ipaddr,
                                    uint16_t port) const
{
  for (auto& elem : secret_) {
    if (generateToken(infoHash, ipaddr, port, elem) == token) {
      return true;
    }
  }
  return false;
}
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
      virtual ~DHTTokenUpdateCommand();
    
    const std::string& DNSCache::CacheEntry::getGoodAddr() const
{
  for (auto& elem : addrEntries_) {
    if (elem.good_) {
      return (elem).addr_;
    }
  }
  return A2STR::NIL;
}