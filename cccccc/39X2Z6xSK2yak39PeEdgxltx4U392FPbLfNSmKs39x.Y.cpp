
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_EAGER_PYWRAP_TENSOR_H_
#define TENSORFLOW_PYTHON_EAGER_PYWRAP_TENSOR_H_
    
    REGISTER_FILE_SYSTEM('test', TestFileSystem);
    
    // Negates a PyBfloat16.
PyObject* PyBfloat16_Negative(PyObject* self) {
  bfloat16 x = PyBfloat16_Bfloat16(self);
  return PyBfloat16_FromBfloat16(-x).release();
}
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_

    
    
    {}  // namespace tensorflow
    
    
    {}  // namespace tensorflow
    
    PyRecordReader* PyRecordReader::New(const string& filename, uint64 start_offset,
                                    const string& compression_type_string,
                                    TF_Status* out_status) {
  std::unique_ptr<RandomAccessFile> file;
  Status s = Env::Default()->NewRandomAccessFile(filename, &file);
  if (!s.ok()) {
    Set_TF_Status_from_Status(out_status, s);
    return nullptr;
  }
  PyRecordReader* reader = new PyRecordReader;
  reader->offset_ = start_offset;
  reader->file_ = file.release();
    }
    
    namespace stream_executor {
namespace blas {
    }
    }
    
    // gflags 2.1 issue: namespace google was changed to gflags without warning.
// Luckily we will be able to use GFLAGS_GFLAGS_H_ to detect if it is version
// 2.1. If yes, we will add a temporary solution to redirect the namespace.
// TODO(Yangqing): Once gflags solves the problem in a more elegant way, let's
// remove the following hack.
#ifndef GFLAGS_GFLAGS_H_
namespace gflags = google;
#endif  // GFLAGS_GFLAGS_H_
    
    /// @brief Fills a Blob with Gaussian-distributed values @f$ x = a @f$.
template <typename Dtype>
class GaussianFiller : public Filler<Dtype> {
 public:
  explicit GaussianFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    CHECK(blob->count());
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(this->filler_param_.mean()),
        Dtype(this->filler_param_.std()), blob->mutable_cpu_data());
    int sparse = this->filler_param_.sparse();
    CHECK_GE(sparse, -1);
    if (sparse >= 0) {
      // Sparse initialization is implemented for 'weight' blobs; i.e. matrices.
      // These have num == channels == 1; width is number of inputs; height is
      // number of outputs.  The 'sparse' variable specifies the mean number
      // of non-zero input weights for a given output.
      CHECK_GE(blob->num_axes(), 1);
      const int num_outputs = blob->shape(0);
      Dtype non_zero_probability = Dtype(sparse) / Dtype(num_outputs);
      rand_vec_.reset(new SyncedMemory(blob->count() * sizeof(int)));
      int* mask = reinterpret_cast<int*>(rand_vec_->mutable_cpu_data());
      caffe_rng_bernoulli(blob->count(), non_zero_probability, mask);
      for (int i = 0; i < blob->count(); ++i) {
        data[i] *= mask[i];
      }
    }
  }
    }
    
      static vector<string> LayerTypeList() {
    CreatorRegistry& registry = Registry();
    vector<string> layer_types;
    for (typename CreatorRegistry::iterator iter = registry.begin();
         iter != registry.end(); ++iter) {
      layer_types.push_back(iter->first);
    }
    return layer_types;
  }
    
    /**
 * @brief Provides base for data layers that feed blobs to the Net.
 *
 * TODO(dox): thorough documentation for Forward and proto params.
 */
template <typename Dtype>
class BaseDataLayer : public Layer<Dtype> {
 public:
  explicit BaseDataLayer(const LayerParameter& param);
  // LayerSetUp: implements common data layer setup functionality, and calls
  // DataLayerSetUp to do special data layer setup for individual layer types.
  // This method may not be overridden except by the BasePrefetchingDataLayer.
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void DataLayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
  // Data layers have no bottoms, so reshaping is trivial.
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
    }
    
    namespace caffe {
    }
    
      int size_, pre_pad_;
  Dtype alpha_, beta_, k_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace leveldb
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    
    {  // No copying allowed
  Writer(const Writer&);
  void operator=(const Writer&);
};
    
       static bool BOOST_REGEX_CALL isctype(char, char_class_type);
   static int BOOST_REGEX_CALL value(char, int);
    
       const char* root()const { return _root; }
   const char* path()const { return _path; }
   const char* name()const { return ptr; }
   _fi_find_data* data() { return &(ref->_data); }
   void next();
   directory_iterator& operator++() { next(); return *this; }
   directory_iterator operator++(int);
   const char* operator*() { return path(); }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_end_line()
{
   if(position != last)
   {
      if(m_match_flags & match_single_line)
         return false;
      // we're not yet at the end so *first is always valid:
      if(is_separator(*position))
      {
         if((position != backstop) || (m_match_flags & match_prev_avail))
         {
            // check that we're not in the middle of \r\n sequence
            BidiIterator t(position);
            --t;
            if((*t == static_cast<char_type>('\r')) && (*position == static_cast<char_type>('\n')))
            {
               return false;
            }
         }
         pstate = pstate->next.p;
         return true;
      }
   }
   else if((m_match_flags & match_not_eol) == 0)
   {
      pstate = pstate->next.p;
      return true;
   }
   return false;
}
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_then()
{
   pstate = pstate->next.p;
   if(match_all_states())
      return true;
   m_can_backtrack = false;
   m_have_then = true;
   return false;
}
    
    typedef regex_iterator<const char*> cregex_iterator;
typedef regex_iterator<std::string::const_iterator> sregex_iterator;
#ifndef BOOST_NO_WREGEX
typedef regex_iterator<const wchar_t*> wcregex_iterator;
typedef regex_iterator<std::wstring::const_iterator> wsregex_iterator;
#endif
    
    //
// proc regex_match
// returns true if the specified regular expression matches
// the whole of the input.  Fills in what matched in m.
//
template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_match(BidiIterator first, BidiIterator last, 
                 match_results<BidiIterator, Allocator>& m, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   BOOST_REGEX_DETAIL_NS::perl_matcher<BidiIterator, Allocator, traits> matcher(first, last, m, e, flags, first);
   return matcher.match();
}
template <class iterator, class charT, class traits>
bool regex_match(iterator first, iterator last, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   match_results<iterator> m;
   return regex_match(first, last, m, e, flags | regex_constants::match_any);
}
//
// query_match convenience interfaces:
#ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING
//
// this isn't really a partial specialisation, but template function
// overloading - if the compiler doesn't support partial specialisation
// then it really won't support this either:
template <class charT, class Allocator, class traits>
inline bool regex_match(const charT* str, 
                        match_results<const charT*, Allocator>& m, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + traits::length(str), m, e, flags);
}
    
    template <class OutputIterator, class Iterator, class traits, class charT>
inline OutputIterator regex_merge(OutputIterator out,
                         Iterator first,
                         Iterator last,
                         const basic_regex<charT, traits>& e, 
                         const charT* fmt, 
                         match_flag_type flags = match_default)
{
   return regex_replace(out, first, last, e, fmt, flags);
}
    
    
namespace boost{
    }
    
    std::string Action::description() const
{
    return StringUtils::format('<Action | Tag = %d', _tag);
}
    
    
    {    _radZ = (float)CC_DEGREES_TO_RADIANS(_angleZ);
    _radX = (float)CC_DEGREES_TO_RADIANS(_angleX);
}
    
        /** Initializes the action with a duration and an array of points.
     *
     * @param dt In seconds.
     * @param points An PointArray.
     */
    bool initWithDuration(float dt, PointArray* points);
    
    
    {    delete ret;
    return nullptr;
}
    
    
    {    return ret;
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        void removeActionAtIndex(ssize_t index, struct _hashElement *element);
    void deleteHashElement(struct _hashElement *element);
    void actionAllocWithHashElement(struct _hashElement *element);
    
                p.y = ( R + ay - ( r * (1 - cosBeta) * sinTheta));
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
    Animation* Animation::createWithSpriteFrames(const Vector<SpriteFrame*>& frames, float delay/* = 0.0f*/, unsigned int loops/* = 1*/)
{
    Animation *animation = new (std::nothrow) Animation();
    animation->initWithSpriteFrames(frames, delay, loops);
    animation->autorelease();
    }
    
    
NS_CC_END

    
    void AtlasNode::setQuadsToDraw(ssize_t quadsToDraw)
{
    _quadsToDraw = quadsToDraw;
}
    
    
    {};
    
    
    { private:
  DECLARE_SINGLETON(CanClientFactory);
};
    
    #endif  // MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_ESD_CAN_CLIENT_H_

    
      std::string can_name('can' + std::to_string(port_));
  std::strncpy(ifr.ifr_name, can_name.c_str(), IFNAMSIZ);
  if (ioctl(dev_handler_, SIOCGIFINDEX, &ifr) < 0) {
    AERROR << 'ioctl error';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    #include 'modules/drivers/canbus/can_client/socket/socket_can_client_raw.h'
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/message_manager.h'
    
    Byte::Byte(const Byte &value) : value_(value.value_) {}