
        
          const Dtype* cpu_data() const;
  void set_cpu_data(Dtype* data);
  const int* gpu_shape() const;
  const Dtype* gpu_data() const;
  void set_gpu_data(Dtype* data);
  const Dtype* cpu_diff() const;
  const Dtype* gpu_diff() const;
  Dtype* mutable_cpu_data();
  Dtype* mutable_gpu_data();
  Dtype* mutable_cpu_diff();
  Dtype* mutable_gpu_diff();
  void Update();
  void FromProto(const BlobProto& proto, bool reshape = true);
  void ToProto(BlobProto* proto, bool write_diff = false) const;
    
    /**
 * Virtual class encapsulate boost::thread for use in base class
 * The child class will acquire the ability to run a single thread,
 * by reimplementing the virtual function InternalThreadEntry.
 */
class InternalThread {
 public:
  InternalThread() : thread_() {}
  virtual ~InternalThread();
    }
    
    
    {}  // namespace caffe
    
    /**
 * @brief Computes a sum of two input Blobs, with the shape of the latter Blob
 *        'broadcast' to match the shape of the former. Equivalent to tiling
 *        the latter Blob, then computing the elementwise sum.
 *
 * The second input may be omitted, in which case it's learned as a parameter
 * of the layer. Note: in case bias and scaling are desired, both operations can
 * be handled by `ScaleLayer` configured with `bias_term: true`.
 */
template <typename Dtype>
class BiasLayer : public Layer<Dtype> {
 public:
  explicit BiasLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
    void ChannelArguments::SetGrpclbFallbackTimeout(int fallback_timeout) {
  SetInt(GRPC_ARG_GRPCLB_FALLBACK_TIMEOUT_MS, fallback_timeout);
}
    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    namespace grpc {
    }
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H */

    
    const ViewDescriptor& ClientCompletedRpcsCumulative() {
  const static ViewDescriptor descriptor =
      ViewDescriptor()
          .set_name('grpc.io/client/completed_rpcs/cumulative')
          .set_measure(kRpcClientRoundtripLatencyMeasureName)
          .set_aggregation(Aggregation::Count())
          .add_column(ClientMethodTagKey())
          .add_column(ClientStatusTagKey());
  return descriptor;
}
    
    
    {}  // namespace grpc
    
    bool ProtoServerReflectionPlugin::has_sync_methods() const {
  if (reflection_service_) {
    return reflection_service_->has_synchronous_methods();
  }
  return false;
}
    
    
    {   const kmp_info<char_type>* info = access::get_kmp(re);
   int len = info->len;
   const char_type* x = info->pstr;
   int j = 0; 
   while (position != last) 
   {
      while((j > -1) && (x[j] != traits_inst.translate(*position, icase))) 
         j = info->kmp_next[j];
      ++position;
      ++j;
      if(j >= len) 
      {
         if(type == regbase::restart_fixed_lit)
         {
            std::advance(position, -j);
            restart = position;
            std::advance(restart, len);
            m_result.set_first(position);
            m_result.set_second(restart);
            position = restart;
            return true;
         }
         else
         {
            restart = position;
            std::advance(position, -j);
            if(match_prefix())
               return true;
            else
            {
               for(int k = 0; (restart != position) && (k < j); ++k, --restart)
                     {} // dwa 10/20/2000 - warning suppression for MWCW
               if(restart != last)
                  ++restart;
               position = restart;
               j = 0;  //we could do better than this...
            }
         }
      }
   }
   if((m_match_flags & match_partial) && (position == last) && j)
   {
      // we need to check for a partial match:
      restart = position;
      std::advance(position, -j);
      return match_prefix();
   }
#endif
   return false;
}
    
    
    {   if(!result)
   {
      next_count = recursion_stack.back().repeater_stack;
      *m_presult = recursion_stack.back().results;
      recursion_stack.pop_back();
      return false;
   }
   return true;
}
    
    
    {} // namespace boost
#ifndef BOOST_REGEX_MATCH_HPP
#include <boost/regex/v4/regex_match.hpp>
#endif
#ifndef BOOST_REGEX_V4_REGEX_SEARCH_HPP
#include <boost/regex/v4/regex_search.hpp>
#endif
#ifndef BOOST_REGEX_ITERATOR_HPP
#include <boost/regex/v4/regex_iterator.hpp>
#endif
#ifndef BOOST_REGEX_TOKEN_ITERATOR_HPP
#include <boost/regex/v4/regex_token_iterator.hpp>
#endif
#ifndef BOOST_REGEX_V4_REGEX_GREP_HPP
#include <boost/regex/v4/regex_grep.hpp>
#endif
#ifndef BOOST_REGEX_V4_REGEX_REPLACE_HPP
#include <boost/regex/v4/regex_replace.hpp>
#endif
#ifndef BOOST_REGEX_V4_REGEX_MERGE_HPP
#include <boost/regex/v4/regex_merge.hpp>
#endif
#ifndef BOOST_REGEX_SPLIT_HPP
#include <boost/regex/v4/regex_split.hpp>
#endif
    
    //
// Forward declaration:
//
   template <class BidiIterator, class Allocator = BOOST_DEDUCED_TYPENAME std::vector<sub_match<BidiIterator> >::allocator_type >
class match_results;
    
       pimpl pdata;