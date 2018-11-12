
        
          /**
   * @brief Returns the vector of learnable parameter blobs.
   */
  vector<shared_ptr<Blob<Dtype> > >& blobs() {
    return blobs_;
  }
    
    #include <vector>
    
      /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     private:
  // Recursive copy function.
  void crop_copy(const vector<Blob<Dtype>*>& bottom,
               const vector<Blob<Dtype>*>& top,
               const int* offsets,
               vector<int> indices,
               int cur_dim,
               const Dtype* src_data,
               Dtype* dest_data,
               bool is_forward);
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    
    {}  // namespace caffe
    
        public:
        CompositeMinibatchSource(const MinibatchSourceConfig& configuration);
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
        static void noOpAlarmHandler(int /*signum*/)
    {
        // this handler is intentionally NO-OP
        // the side effect of execution this handler
        // will be a termination of fcntl call below with EINTR
    }
    
    // construct a network from a list of roots (passed in 'workList')
// This will add to m_nameToNodeMap[] all roots and all nodes reachable from those roots.
// If 'replacements' is given, all root pointers as well as all input pointers of reachable nodes will be mapped. This is needed for model editing.
void ComputationNetwork::ConstructFromRoots(DEVICEID_TYPE deviceId, deque<ComputationNodeBasePtr>&& workList, const map<ComputationNodeBasePtr, ComputationNodeBasePtr>& replacements)
{
    SetDeviceId(deviceId);
    assert(this->GetTotalNumberOfNodes() == 0);
    }
    
                    for (size_t j = 0; j < secondSize + 1; j++)
                {
                    grid(0, j) = (float)(j * insPen);
                    insMatrix(0, j) = (float)j;
                }
                for (size_t i = 1; i < firstSize + 1; i++)
                {
                    for (size_t j = 1; j < secondSize + 1; j++)
                    {
                        if (firstSeqVec[i - 1] == secondSeqVec[j - 1])
                        {
                            grid(i, j) = grid(i - 1, j - 1);
                            insMatrix(i, j) = insMatrix(i - 1, j - 1);
                            delMatrix(i, j) = delMatrix(i - 1, j - 1);
                            subMatrix(i, j) = subMatrix(i - 1, j - 1);
                        }
                        else
                        {
                            del = grid(i - 1, j) + delPen; //deletion 
                            ins = grid(i, j - 1) + insPen;  //insertion
                            sub = grid(i - 1, j - 1) + subPen; //substitution 
                            if (sub <= del && sub <= ins)
                            {
                                insMatrix(i, j) = insMatrix(i - 1, j - 1);
                                delMatrix(i, j) = delMatrix(i - 1, j - 1);
                                subMatrix(i, j) = subMatrix(i - 1, j - 1) + 1.0f;
                                grid(i, j) = sub;
                            }
                            else if (del < ins)
                            {
                                insMatrix(i, j) = insMatrix(i - 1, j);
                                subMatrix(i, j) = subMatrix(i - 1, j);
                                delMatrix(i, j) = delMatrix(i - 1, j) + 1.0f;
                                grid(i, j) = del;
                            }
                            else
                            {
                                delMatrix(i, j) = delMatrix(i, j - 1);
                                subMatrix(i, j) = subMatrix(i, j - 1);
                                insMatrix(i, j) = insMatrix(i, j - 1) + 1.0f;
                                grid(i, j) = ins;
                            }
                        }
                    }
                }
    
    /**
 *@brief Base class for Camera actions.
 *@ingroup Actions
 */
class CC_DLL ActionCamera : public ActionInterval
{
public:
    /**
     * @js ctor
     * @lua new
     */
    ActionCamera();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionCamera(){};
    }
    
        // Override
    virtual FlipX3D* clone() const override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    FlipX3D() {}
    virtual ~FlipX3D() {}
    
    
    {        // only delete currentTarget if no actions were scheduled during the cycle (issue #481)
        if (_currentTargetSalvaged && _currentTarget->actions->num == 0)
        {
            deleteHashElement(_currentTarget);
        }
        //if some node reference 'target', it's reference count >= 2 (issues #14050)
        else if (_currentTarget->target->getReferenceCount() == 1)
        {
            deleteHashElement(_currentTarget);
        }
    }
    
    
    {
    {
    {            p.z = (r * ( 1 - cosBeta ) * cosTheta);// '100' didn't work for
            p.x = p.z * sinf(rotateByYAxis) + p.x * cosf(rotateByYAxis);
            p.z = p.z * cosf(rotateByYAxis) - p.x * sinf(rotateByYAxis);
            p.z/=7;
            //    Stop z coord from dropping beneath underlying page in a transition
            // issue #751
            if( p.z < 0.5f )
            {
                p.z = 0.5f;
            }
            
            // Set new coords
            p.x += getGridRect().origin.x;
            setVertex(Vec2(i, j), p);
            
        }
    }
}
    
    
    {// end of actions group
/// @}
    
    ActionTween* ActionTween::reverse() const
{
    return ActionTween::create(_duration, _key, _to, _from);
}
    
    #endif // __CCATLAS_NODE_H__
    
    #pragma once
#ifndef ROCKSDB_LITE
#include 'db/db_impl.h'
#include <vector>
#include <string>
    
      // State
  //
  // Points to a copy of the current compaction iterator output (current_key_)
  // if valid_.
  Slice key_;
  // Points to the value in the underlying iterator that corresponds to the
  // current output.
  Slice value_;
  // The status is OK unless compaction iterator encounters a merge operand
  // while not having a merge operator defined.
  Status status_;
  // Stores the user key, sequence number and type of the current compaction
  // iterator output (or current key in the underlying iterator during
  // NextFromInput()).
  ParsedInternalKey ikey_;
  // Stores whether ikey_.user_key is valid. If set to false, the user key is
  // not compared against the current key in the underlying iterator.
  bool has_current_user_key_ = false;
  bool at_next_ = false;  // If false, the iterator
  // Holds a copy of the current compaction iterator output (or current key in
  // the underlying iterator during NextFromInput()).
  IterKey current_key_;
  Slice current_user_key_;
  SequenceNumber current_user_key_sequence_;
  SequenceNumber current_user_key_snapshot_;
    
    namespace rocksdb {
    }
    
    
    {  if (close(fd_) < 0) {
    s = IOError('While closing file after writing', filename_, errno);
  }
  fd_ = -1;
  return s;
}
    
      // create column family
  ColumnFamilyHandle* cf;
  s = db->CreateColumnFamily(ColumnFamilyOptions(), 'new_cf', &cf);
  assert(s.ok());
    
    using namespace rocksdb;
std::string kDBPath = '/tmp/rocksdb_compact_files_example';
struct CompactionTask;
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
      // Transaction could not commit since the write outside of the txn conflicted
  // with the read!
  assert(s.IsBusy());
    
    #include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/utilities/transaction.h'
#include 'rocksdb/utilities/transaction_db.h'
    
      // number of bytes that has been written.
  uint64_t bytes_written;
  // number of bytes that has been read.
  uint64_t bytes_read;