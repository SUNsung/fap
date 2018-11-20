
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
#define TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
    
    
    {}  // end namespace tensorflow

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
    // Must be included first.
#include 'tensorflow/python/lib/core/numpy.h'
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/python/lib/core/numpy.h'
    
    
    {}  // end namespace tensorflow
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/python/lib/core/safe_ptr.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Activates a CUDA context within an enclosing scope.
class ScopedActivateExecutorContext {
 public:
  // Form that takes a CUDA executor implementation.
  explicit ScopedActivateExecutorContext(CUDAExecutor* cuda_exec);
    }
    
      // Creates a new event associated with the given context.
  // result is an outparam owned by the caller and must not be null.
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__EVENT.html#group__CUDA__EVENT_1g450687e75f3ff992fe01662a43d9d3db
  static port::Status CreateEvent(CudaContext* context, CUevent *result,
                                  EventFlags flags);
    
    CUDAEvent::CUDAEvent(CUDAExecutor* parent)
    : parent_(parent), cuda_event_(nullptr) {}
    
    /**
	@author AndreaCatania
*/
    
    #ifndef HINGE_JOINT_BULLET_H
#define HINGE_JOINT_BULLET_H
    
    #ifndef JOINT_BULLET_H
#define JOINT_BULLET_H
    
    public:
	PinJointBullet(RigidBodyBullet *p_body_a, const Vector3 &p_pos_a, RigidBodyBullet *p_body_b, const Vector3 &p_pos_b);
	~PinJointBullet();
    
    inline APCLocalArray::APCLocalArray(const APCArray* source)
  : ArrayData(kApcKind)
  , m_arr(source)
{
  m_size = m_arr->size();
  source->reference();
  tl_heap->addApcArray(this);
  memset(localCache(), static_cast<data_type_t>(KindOfUninit),
         m_size * sizeof(TypedValue));
  assertx(hasExactlyOneRef());
}
    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
      if (cnt < argc && strcmp(argv[cnt], '--') == 0) cnt++;
  if (cnt < argc) {
    // There are arguments following the filename, so copy them.
    newargv.push_back('--');
    for (int i = cnt; i < argc; i++) {
      newargv.push_back(argv[i]);
    }
  }
    
    inline ActRec* ExecutionContext::getOuterVMFrame(const ActRec* ar) {
  ActRec* sfp = ar->sfp();
  if (LIKELY(sfp != nullptr)) return sfp;
  return LIKELY(!m_nestedVMs.empty()) ? m_nestedVMs.back().fp : nullptr;
}
    
    #include 'hphp/util/perf-event.h'
    
    #include <mxnet/op_attr_types.h>
#include <mxnet/graph_attr_types.h>
#include <mxnet/c_api.h>
#include <nnvm/symbolic.h>
#include <nnvm/op.h>
#include <nnvm/graph.h>
#include <vector>
#include <atomic>
#include <utility>
#include <string>
#include <unordered_map>
    
    template<>
void SetDataGradToBlob<mshadow::gpu, float>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<float>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  float *data_ptr = reinterpret_cast<float*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, float)->set_gpu_diff(data_ptr);
}
    
    #endif  // PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_

    
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
    
      virtual void BeforeFirst(void) {
    if (param_.round_batch == 0 || num_overflow_ == 0) {
      // otherise, we already called before first
      base_->BeforeFirst();
    } else {
      num_overflow_ = 0;
    }
    head_ = 1;
  }