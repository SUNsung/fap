
        
        void convert_dataset(const string& input_folder, const string& output_folder,
    const string& db_type) {
  scoped_ptr<db::DB> train_db(db::GetDB(db_type));
  train_db->Open(output_folder + '/cifar10_train_' + db_type, db::NEW);
  scoped_ptr<db::Transaction> txn(train_db->NewTransaction());
  // Data buffer
  int label;
  char str_buffer[kCIFARImageNBytes];
  Datum datum;
  datum.set_channels(3);
  datum.set_height(kCIFARSize);
  datum.set_width(kCIFARSize);
    }
    
    using namespace caffe;  // NOLINT(build/namespaces)
using boost::scoped_ptr;
using std::string;
    
    #include <utility>
#include <vector>
    
      virtual inline const char* type() const { return 'BNLL'; }
    
    #include <vector>
    
    namespace caffe {
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \left\{
   *        \begin{array}{lr}
   *            x                  & \mathrm{if} \; x > 0 \\
   *            \alpha (\exp(x)-1) & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$.  
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      if (state->stackTrace.size() == state->stackTrace.capacity()) {
    return _URC_END_OF_STACK;
  }
    
    void Config::setPointScaleFactor(float pixelsInPoint)
{
    YGConfigSetPointScaleFactor(m_config, pixelsInPoint);
}
    
    #pragma once
    
    void Node::setFlex(double flex)
{
    YGNodeStyleSetFlex(m_node, flex);
}