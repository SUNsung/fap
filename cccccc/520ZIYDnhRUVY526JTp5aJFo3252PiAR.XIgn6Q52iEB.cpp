
        
        REGISTER_GRADIENT(Sub, GetSubGradient);
    
              const TensorShape& X = in[0];
          int N = 0, C = 0, H = 0, W = 0;
          switch (order) {
            case StorageOrder::NCHW:
              N = X.dims(0);
              C = X.dims(1);
              H = X.dims(2);
              W = X.dims(3);
              break;
            case StorageOrder::NHWC:
              N = X.dims(0);
              H = X.dims(1);
              W = X.dims(2);
              C = X.dims(3);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    namespace mxnet {
namespace rtc {
    }
    }
    
    // Initialization funciton called by caffeOp & caffeLoss
template<typename Dtype>
void InitCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    v->push_back(new ::caffe::Blob<Dtype>());
}
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file caffe_data_iter.cc
 * \brief register mnist iterator
*/
#include <sys/time.h>
#include <caffe/proto/caffe.pb.h>
#include <dmlc/parameter.h>
#include <atomic>
    
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
    
    namespace mxnet {
    }
    
    
// Wrap a TVM function to a function that invokes MXNet's Engine
// It does two things: call the engine properly
// set up the NDArray to DLTensor during invocation.
void WrapAsyncCall(TVMArgs wrap_args, TVMRetValue* wrap_rv) {
  PackedFunc f = wrap_args[0];
  PackedFunc fset_stream =  wrap_args[1];
  int num_const = wrap_args[2];
    }
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file native_op.cc
 * \brief
 * \author Junyuan Xie
*/
#include './native_op-inl.h'
    
    void DHTRoutingTableSerializer::setLocalNode(
    const std::shared_ptr<DHTNode>& localNode)
{
  localNode_ = localNode;
}
    
    #include 'common.h'
    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) = 0;
    
    #include <cstring>
    
    
    {} // namespace aria2

    
    const std::string& DNSCache::find(const std::string& hostname,
                                  uint16_t port) const
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.find(target);
  if (i == entries_.end()) {
    return A2STR::NIL;
  }
  else {
    return (*i)->getGoodAddr();
  }
}
    
      typedef std::set<std::shared_ptr<CacheEntry>,
                   DerefLess<std::shared_ptr<CacheEntry>>>
      CacheEntrySet;
  CacheEntrySet entries_;