
        
        REGISTER_OP('ShapelessOp');
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Status ArrayFromMemory(int dim_size, npy_intp* dims, void* data, DataType dtype,
                       std::function<void()> destructor, PyObject** result) {
  int size = 1;
  for (int i = 0; i < dim_size; ++i) {
    size *= dims[i];
  }
  if (dtype == DT_STRING || dtype == DT_RESOURCE || size == 0) {
    return errors::FailedPrecondition(
        'Cannot convert strings, resources, or empty Tensors.');
  }
    }
    
    #endif  // TENSORFLOW_PYTHON_UTIL_KERNEL_REGISTRY_H_

    
    
    {
    {}  // namespace cuda
}  // namespace stream_executor

    
      // Synchronize with spinlocks.
  static const unsigned kScheduleSpin = 0x02;
  // Synchronize with spinlocks that also call CPU yield instructions.
  static const unsigned kScheduleYield = 0x04;
  // Synchronize with a 'synchronization primitive' (e.g. mutex).
  static const unsigned kScheduleBlockingSync = 0x08;
    
      // Returns a pointer to the described executor (if one with a matching config
  // has been created), or a NOT_FOUND status.
  port::StatusOr<StreamExecutor*> Get(const StreamExecutorConfig& config);
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_HOST_HOST_PLATFORM_H_

    
        internal::assertSupportedConfiguration();
    
    
    {
    {         vst1q_u8(_dst + i, vcombine_u8(vline1_u8, vline2_u8));
     }
})
#endif
    
            if (i < roiw4)
        {
            internal::prefetch(src + i + 2);
            uint64x2_t vln1 = vld1q_u64((const u64*)(src + i));
            uint64x2_t vln2 = vld1q_u64((const u64*)(src + i + 2));
    }
    
            while(i + 16 <= size.width)
        {
            size_t lim = std::min(i + DOT_UINT_BLOCKSIZE, size.width) - 16;
    }
    
                vec128 v_src = vld3q(src + js), v_dst;
            v_src.val[0] = vrev64q(v_src.val[0]);
            v_src.val[1] = vrev64q(v_src.val[1]);
            v_src.val[2] = vrev64q(v_src.val[2]);
    
                    uint8x8x3_t vRes;
                vRes.val[0] = vrshrn_n_u16(vSum_0_4, 8);
                vRes.val[1] = vrshrn_n_u16(vSum_1_5, 8);
                vRes.val[2] = vrshrn_n_u16(vSum_2_6, 8);
    
    // Prints the given value using the << operator if it has one;
// otherwise prints the bytes in it.  This is what
// UniversalPrinter<T>::Print() does when PrintTo() is not specialized
// or overloaded for type T.
//
// A user can override this behavior for a class type Foo by defining
// an overload of PrintTo() in the namespace where Foo is defined.  We
// give the user this option as sometimes defining a << operator for
// Foo is not desirable (e.g. the coding style may prevent doing it,
// or there is already a << operator but it doesn't do what the user
// wants).
template <typename T>
void PrintTo(const T& value, ::std::ostream* os) {
  // DefaultPrintTo() is overloaded.  The type of its first two
  // arguments determine which version will be picked.  If T is an
  // STL-style container, the version for container will be called; if
  // T is a pointer, the pointer version will be called; otherwise the
  // generic version will be called.
  //
  // Note that we check for container types here, prior to we check
  // for protocol message types in our operator<<.  The rationale is:
  //
  // For protocol messages, we want to give people a chance to
  // override Google Mock's format by defining a PrintTo() or
  // operator<<.  For STL containers, other formats can be
  // incompatible with Google Mock's format for the container
  // elements; therefore we check for container types here to ensure
  // that our format is used.
  //
  // The second argument of DefaultPrintTo() is needed to bypass a bug
  // in Symbian's C++ compiler that prevents it from picking the right
  // overload between:
  //
  //   PrintTo(const T& x, ...);
  //   PrintTo(T* x, ...);
  DefaultPrintTo(IsContainerTest<T>(0), is_pointer<T>(), value, os);
}
    
    // Binary predicate assertion macros.
#define EXPECT_PRED_FORMAT2(pred_format, v1, v2) \
  GTEST_PRED_FORMAT2_(pred_format, v1, v2, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED2(pred, v1, v2) \
  GTEST_PRED2_(pred, v1, v2, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT2(pred_format, v1, v2) \
  GTEST_PRED_FORMAT2_(pred_format, v1, v2, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED2(pred, v1, v2) \
  GTEST_PRED2_(pred, v1, v2, GTEST_FATAL_FAILURE_)
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4>
struct Templates4 {
  typedef TemplateSel<T1> Head;
  typedef Templates3<T2, T3, T4> Tail;
};
    
    #ifndef GTEST_SAMPLES_SAMPLE2_H_
#define GTEST_SAMPLES_SAMPLE2_H_
    
    MeasureInt64 RpcClientSentMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientSentMessagesPerRpcMeasureName,
                             'Number of messages sent per RPC', kCount);
  return measure;
}
    
    
    {}  // namespace grpc

    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    
    {}  // namespace leveldb
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    bool GuessType(const std::string& fname, FileType* type) {
  size_t pos = fname.rfind('/');
  std::string basename;
  if (pos == std::string::npos) {
    basename = fname;
  } else {
    basename = std::string(fname.data() + pos + 1, fname.size() - pos - 1);
  }
  uint64_t ignored;
  return ParseFileName(basename, &ignored, type);
}
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
      virtual bool Valid() const { return iter_.Valid(); }
  virtual void Seek(const Slice& k) { iter_.Seek(EncodeKey(&tmp_, k)); }
  virtual void SeekToFirst() { iter_.SeekToFirst(); }
  virtual void SeekToLast() { iter_.SeekToLast(); }
  virtual void Next() { iter_.Next(); }
  virtual void Prev() { iter_.Prev(); }
  virtual Slice key() const { return GetLengthPrefixedSlice(iter_.key()); }
  virtual Slice value() const {
    Slice key_slice = GetLengthPrefixedSlice(iter_.key());
    return GetLengthPrefixedSlice(key_slice.data() + key_slice.size());
  }
    
      // Add the specified file at the specified number.
  // REQUIRES: This version has not been saved (see VersionSet::SaveTo)
  // REQUIRES: 'smallest' and 'largest' are smallest and largest keys in file
  void AddFile(int level, uint64_t file,
               uint64_t file_size,
               const InternalKey& smallest,
               const InternalKey& largest) {
    FileMetaData f;
    f.number = file;
    f.file_size = file_size;
    f.smallest = smallest;
    f.largest = largest;
    new_files_.push_back(std::make_pair(level, f));
  }
    
    
    {    elem_of_each_node_[left_node_id] = Elem(begin, split_pt, left_node_id);
    elem_of_each_node_[right_node_id] = Elem(split_pt, e.end, right_node_id);
    elem_of_each_node_[node_id] = Elem(nullptr, nullptr, -1);
  }
    
    SEXP XGBoosterUpdateOneIter_R(SEXP handle, SEXP iter, SEXP dtrain) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterUpdateOneIter(R_ExternalPtrAddr(handle),
                                  asInteger(iter),
                                  R_ExternalPtrAddr(dtrain)));
  R_API_END();
  return R_NilValue;
}
    
    /*! \brief try to do efficient pruning */
template<typename DType, typename RType>
struct WXQSummary : public WQSummary<DType, RType> {
  // redefine entry type
  using Entry = typename WQSummary<DType, RType>::Entry;
  // constructor
  WXQSummary(Entry *data, size_t size)
      : WQSummary<DType, RType>(data, size) {}
  // check if the block is large chunk
  inline static bool CheckLarge(const Entry &e, RType chunk) {
    return  e.RMinNext() > e.RMaxPrev() + chunk;
  }
  // set prune
  inline void SetPrune(const WQSummary<DType, RType> &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    RType begin = src.data[0].rmax;
    // n is number of points exclude the min/max points
    size_t n = maxsize - 2, nbig = 0;
    // these is the range of data exclude the min/max point
    RType range = src.data[src.size - 1].rmin - begin;
    // prune off zero weights
    if (range == 0.0f || maxsize <= 2) {
      // special case, contain only two effective data pts
      this->data[0] = src.data[0];
      this->data[1] = src.data[src.size - 1];
      this->size = 2;
      return;
    } else {
      range = std::max(range, static_cast<RType>(1e-3f));
    }
    // Get a big enough chunk size, bigger than range / n
    // (multiply by 2 is a safe factor)
    const RType chunk = 2 * range / n;
    // minimized range
    RType mrange = 0;
    {
      // first scan, grab all the big chunk
      // moving block index, exclude the two ends.
      size_t bid = 0;
      for (size_t i = 1; i < src.size - 1; ++i) {
        // detect big chunk data point in the middle
        // always save these data points.
        if (CheckLarge(src.data[i], chunk)) {
          if (bid != i - 1) {
            // accumulate the range of the rest points
            mrange += src.data[i].RMaxPrev() - src.data[bid].RMinNext();
          }
          bid = i; ++nbig;
        }
      }
      if (bid != src.size - 2) {
        mrange += src.data[src.size-1].RMaxPrev() - src.data[bid].RMinNext();
      }
    }
    // assert: there cannot be more than n big data points
    if (nbig >= n) {
      // see what was the case
      LOG(INFO) << ' check quantile stats, nbig=' << nbig << ', n=' << n;
      LOG(INFO) << ' srcsize=' << src.size << ', maxsize=' << maxsize
                << ', range=' << range << ', chunk=' << chunk;
      src.Print();
      CHECK(nbig < n) << 'quantile: too many large chunk';
    }
    this->data[0] = src.data[0];
    this->size = 1;
    // The counter on the rest of points, to be selected equally from small chunks.
    n = n - nbig;
    // find the rest of point
    size_t bid = 0, k = 1, lastidx = 0;
    for (size_t end = 1; end < src.size; ++end) {
      if (end == src.size - 1 || CheckLarge(src.data[end], chunk)) {
        if (bid != end - 1) {
          size_t i = bid;
          RType maxdx2 = src.data[end].RMaxPrev() * 2;
          for (; k < n; ++k) {
            RType dx2 =  2 * ((k * mrange) / n + begin);
            if (dx2 >= maxdx2) break;
            while (i < end &&
                   dx2 >= src.data[i + 1].rmax + src.data[i + 1].rmin) ++i;
            if (i == end) break;
            if (dx2 < src.data[i].RMinNext() + src.data[i + 1].RMaxPrev()) {
              if (i != lastidx) {
                this->data[this->size++] = src.data[i]; lastidx = i;
              }
            } else {
              if (i + 1 != lastidx) {
                this->data[this->size++] = src.data[i + 1]; lastidx = i + 1;
              }
            }
          }
        }
        if (lastidx != end) {
          this->data[this->size++] = src.data[end];
          lastidx = end;
        }
        bid = end;
        // shift base by the gap
        begin += src.data[bid].RMinNext() - src.data[bid].RMaxPrev();
      }
    }
  }
};
/*!
 * \brief traditional GK summary
 */
template<typename DType, typename RType>
struct GKSummary {
  /*! \brief an entry in the sketch summary */
  struct Entry {
    /*! \brief minimum rank */
    RType rmin;
    /*! \brief maximum rank */
    RType rmax;
    /*! \brief the value of data */
    DType value;
    // constructor
    Entry() = default;
    // constructor
    Entry(RType rmin, RType rmax, DType value)
        : rmin(rmin), rmax(rmax), value(value) {}
  };
  /*! \brief input data queue before entering the summary */
  struct Queue {
    // the input queue
    std::vector<DType> queue;
    // end of the queue
    size_t qtail;
    // push data to the queue
    inline void Push(DType x, RType w) {
      queue[qtail++] = x;
    }
    inline void MakeSummary(GKSummary *out) {
      std::sort(queue.begin(), queue.begin() + qtail);
      out->size = qtail;
      for (size_t i = 0; i < qtail; ++i) {
        out->data[i] = Entry(i + 1, i + 1, queue[i]);
      }
    }
  };
  /*! \brief data field */
  Entry *data;
  /*! \brief number of elements in the summary */
  size_t size;
  GKSummary(Entry *data, size_t size)
      : data(data), size(size) {}
  /*! \brief the maximum error of the summary */
  inline RType MaxError() const {
    RType res = 0;
    for (size_t i = 1; i < size; ++i) {
      res = std::max(data[i].rmax - data[i-1].rmin, res);
    }
    return res;
  }
  /*! \return maximum rank in the summary */
  inline RType MaxRank() const {
    return data[size - 1].rmax;
  }
  /*!
   * \brief copy content from src
   * \param src source sketch
   */
  inline void CopyFrom(const GKSummary &src) {
    size = src.size;
    std::memcpy(data, src.data, sizeof(Entry) * size);
  }
  inline void CheckValid(RType eps) const {
    // assume always valid
  }
  /*! \brief used for debug purpose, print the summary */
  inline void Print() const {
    for (size_t i = 0; i < size; ++i) {
      LOG(CONSOLE) << 'x=' << data[i].value << '\t'
                   << '[' << data[i].rmin << ',' << data[i].rmax << ']';
    }
  }
  /*!
   * \brief set current summary to be pruned summary of src
   *        assume data field is already allocated to be at least maxsize
   * \param src source summary
   * \param maxsize size we can afford in the pruned sketch
   */
  inline void SetPrune(const GKSummary &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    const RType max_rank = src.MaxRank();
    this->size = maxsize;
    data[0] = src.data[0];
    size_t n = maxsize - 1;
    RType top = 1;
    for (size_t i = 1; i < n; ++i) {
      RType k = (i * max_rank) / n;
      while (k > src.data[top + 1].rmax) ++top;
      // assert src.data[top].rmin <= k
      // because k > src.data[top].rmax >= src.data[top].rmin
      if ((k - src.data[top].rmin) < (src.data[top+1].rmax - k)) {
        data[i] = src.data[top];
      } else {
        data[i] = src.data[top + 1];
      }
    }
    data[n] = src.data[src.size - 1];
  }
  inline void SetCombine(const GKSummary &sa,
                         const GKSummary &sb) {
    if (sa.size == 0) {
      this->CopyFrom(sb); return;
    }
    if (sb.size == 0) {
      this->CopyFrom(sa); return;
    }
    CHECK(sa.size > 0 && sb.size > 0) << 'invalid input for merge';
    const Entry *a = sa.data, *a_end = sa.data + sa.size;
    const Entry *b = sb.data, *b_end = sb.data + sb.size;
    this->size = sa.size + sb.size;
    RType aprev_rmin = 0, bprev_rmin = 0;
    Entry *dst = this->data;
    while (a != a_end && b != b_end) {
      if (a->value < b->value) {
        *dst = Entry(bprev_rmin + a->rmin,
                     a->rmax + b->rmax - 1, a->value);
        aprev_rmin = a->rmin;
        ++dst; ++a;
      } else {
        *dst = Entry(aprev_rmin + b->rmin,
                     b->rmax + a->rmax - 1, b->value);
        bprev_rmin = b->rmin;
        ++dst; ++b;
      }
    }
    if (a != a_end) {
      RType bprev_rmax = (b_end - 1)->rmax;
      do {
        *dst = Entry(bprev_rmin + a->rmin, bprev_rmax + a->rmax, a->value);
        ++dst; ++a;
      } while (a != a_end);
    }
    if (b != b_end) {
      RType aprev_rmax = (a_end - 1)->rmax;
      do {
        *dst = Entry(aprev_rmin + b->rmin, aprev_rmax + b->rmax, b->value);
        ++dst; ++b;
      } while (b != b_end);
    }
    CHECK(dst == data + size) << 'bug in combine';
  }
};
    
    
    { private:
  MyLogisticParam param_;
};
    
    
    {
    {}  // namespace data
}  // namespace xgboost

    
    BatchSet SimpleDMatrix::GetRowBatches() {
  auto cast = dynamic_cast<SimpleCSRSource*>(source_.get());
  auto begin_iter = BatchIterator(new SimpleBatchIteratorImpl(&(cast->page_)));
  return BatchSet(begin_iter);
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
    {    CC_SAFE_DELETE(ret);
    return nullptr;
}
    
    /** @class ToggleVisibility
* @brief Toggles the visibility of a node.
*/
class CC_DLL ToggleVisibility : public ActionInstant
{
public:
    /** Allocates and initializes the action.
     *
     * @return An autoreleased ToggleVisibility object.
     */
    static ToggleVisibility * create();
    }
    
        /** Removes an action given its tag and the target.
     *
     * @param tag       The action's tag.
     * @param target    A certain target.
     */
    virtual void removeActionByTag(int tag, Node *target);
    
    /** Removes all actions given its tag and the target.
     *
     * @param tag       The actions' tag.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeAllActionsByTag(int tag, Node *target);
    
    
    {// end of actions group
/// @}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
    
    {        return true;
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CCACTIONTWEEN_H__
#define __CCACTIONTWEEN_H__
    
        /** Gets the units of time the frame takes.
     *
     * @return The units of time the frame takes.
     */
    float getDelayUnits() const { return _delayUnits; };
    
    /** Sets the units of time the frame takes.
     *
     * @param delayUnits The units of time the frame takes.
     */
    void setDelayUnits(float delayUnits) { _delayUnits = delayUnits; };
    
    /** @brief Gets user information
     * A AnimationFrameDisplayedNotification notification will be broadcast when the frame is displayed with this dictionary as UserInfo. 
     * If UserInfo is nil, then no notification will be broadcast.
     *
     * @return A dictionary as UserInfo
     */
    const ValueMap& getUserInfo() const { return _userInfo; };
    ValueMap& getUserInfo() { return _userInfo; };
    
    /** Sets user information.
     * @param userInfo A dictionary as UserInfo.
     */
    void setUserInfo(const ValueMap& userInfo)
    {
        _userInfo = userInfo;
    }
    
    // Overrides
    virtual AnimationFrame *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    AnimationFrame();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~AnimationFrame();
    
    /** initializes the animation frame with a spriteframe, number of delay units and a notification user info */
    bool initWithSpriteFrame(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo);
    
        /** Adds an animation from an NSDictionary.
     * Make sure that the frames were previously loaded in the SpriteFrameCache.
     * @param dictionary An NSDictionary.
     * @param plist The path of the relative file,it use to find the plist path for load SpriteFrames.
     * @since v1.1
	 @js NA
     */
    void addAnimationsWithDictionary(const ValueMap& dictionary,const std::string& plist);
    
    void AtlasNode::updateBlendFunc()
{
    if( ! _textureAtlas->getTexture()->hasPremultipliedAlpha() )
    {
        _blendFunc = BlendFunc::ALPHA_NON_PREMULTIPLIED;
        setOpacityModifyRGB(false);
    }
    else
    {
        _blendFunc = BlendFunc::ALPHA_PREMULTIPLIED;
        setOpacityModifyRGB(true);
    }
}