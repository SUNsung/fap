
        
        #include <iomanip>
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/tensor_shape.pb.h'
#include 'tensorflow/core/grappler/costs/graph_properties.h'
#include 'tensorflow/core/grappler/grappler_item.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    AuthPropertyIterator::AuthPropertyIterator()
    : property_(nullptr), ctx_(nullptr), index_(0), name_(nullptr) {}
    
    class CensusChannelData : public ChannelData {
 public:
  grpc_error* Init(grpc_channel_element* elem,
                   grpc_channel_element_args* args) override;
};
    
    MeasureDouble RpcClientReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientReceivedBytesPerRpcMeasureName,
      'Total bytes received across all response messages per RPC', kUnitBytes);
  return measure;
}
    
    #include <grpc/support/port_platform.h>
    
      CensusServerCallData()
      : gc_(nullptr),
        auth_context_(nullptr),
        recv_initial_metadata_(nullptr),
        initial_on_done_recv_initial_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&census_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_initial_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
    Status ProtoServerReflection::GetAllExtensionNumbers(
    ServerContext* context, const grpc::string& type,
    ExtensionNumberResponse* response) {
  if (descriptor_pool_ == nullptr) {
    return Status::CANCELLED;
  }
    }
    
    #include 'src/cpp/server/dynamic_thread_pool.h'
    
      void Add(const std::function<void()>& callback) override;
    
    /*! \brief a single data instance */
struct DataInst {
  /*! \brief unique id for instance */
  unsigned index;
  /*! \brief content of data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
};  // struct DataInst
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_blob.h
 * \brief conversion between tensor and caffeBlob
 * \author Haoran Wang
*/
#ifndef PLUGIN_CAFFE_CAFFE_BLOB_H_
#define PLUGIN_CAFFE_CAFFE_BLOB_H_
    
    
    {
    {      if (top_size > DATA) {
        if (param_.flat) {
          batch_data_ = TBlob(nullptr, mshadow::Shape2(batch_size_,
                                                       channels_ * width_ * height_),
                              cpu::kDevCPU, type_flag_);
        } else {
          batch_data_ = TBlob(nullptr, mxnet::TShape(top_[DATA]->shape().begin(),
                                                     top_[DATA]->shape().end()),
                              cpu::kDevCPU, type_flag_);
        }
      }
      out_.data.clear();
      if (top_size > LABEL) {
          batch_label_ = TBlob(nullptr, mxnet::TShape(top_[LABEL]->shape().begin(),
                                                      top_[LABEL]->shape().end()),
                               cpu::kDevCPU, type_flag_);
      }
      out_.batch_size = batch_size_;
    }
  }
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeLossProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    #include <dmlc/base.h>
#include <dmlc/thread_group.h>
#include <cstddef>
#include <vector>
#include <list>
#include <thread>
#include <utility>
#include 'mxnet/base.h'
    
    
    {  g.attrs['storage_id'] = std::make_shared<nnvm::any>(std::move(storage_id));
  g.attrs['storage_inplace_index'] = std::make_shared<nnvm::any>(
      std::move(storage_inplace_index));
  g.attrs['addto_entry'] = std::make_shared<nnvm::any>(std::move(addto_entry));
  g.attrs['skip_plus_node'] = std::make_shared<nnvm::any>(std::move(skip_plus_node));
  return g;
}
    
    #include <mxnet/io.h>
#include <mxnet/base.h>
#include <dmlc/logging.h>
#include <mshadow/tensor.h>
#include <utility>
#include <vector>
#include <string>
#include './inst_vector.h'
#include './image_iter_common.h'
    
    /*!
 * \file iter_libsvm.cc
 * \brief define a LibSVM Reader to read in arrays
 */
#include <mxnet/io.h>
#include <dmlc/base.h>
#include <dmlc/logging.h>
#include <dmlc/parameter.h>
#include <dmlc/data.h>
#include './iter_sparse_prefetcher.h'
#include './iter_sparse_batchloader.h'
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    namespace leveldb {
    }
    
    static void Usage() {
  fprintf(
      stderr,
      'Usage: leveldbutil command...\n'
      '   dump files...         -- dump contents of specified files\n'
      );
}
    
    namespace log {
    }
    
    template<typename Key, class Comparator>
typename SkipList<Key,Comparator>::Node*
SkipList<Key,Comparator>::NewNode(const Key& key, int height) {
  char* mem = arena_->AllocateAligned(
      sizeof(Node) + sizeof(port::AtomicPointer) * (height - 1));
  return new (mem) Node(key);
}
    
    
    { private:
  // Dummy head of doubly-linked list of snapshots
  SnapshotImpl head_;
};
    
      {
    auto ka = getKeepAliveToken(exec);
    EXPECT_TRUE(ka);
    EXPECT_EQ(&exec, ka.get());
    EXPECT_EQ(1, exec.refCount);
    }
    
    #include <folly/Executor.h>