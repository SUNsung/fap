
        
          // Computes all the cross product distances of the points from the line,
  // storing the actual (signed) cross products in distances_.
  // Ignores distances of points that are further away than the previous point,
  // and overlaps the previous point by at least half.
  void ComputeDistances(const ICOORD& start, const ICOORD& end);
    
      /* Reject modes generated after MM_ACCEPT but before QUALITY_ACCEPT */
  R_BAD_QUALITY,  // TEMP Quality metrics bad for WERD
    
      // Simple accessors.
  bool empty() const {
    return heap_.empty();
  }
  int size() const {
    return heap_.size();
  }
  int size_reserved() const {
    return heap_.size_reserved();
  }
  void clear() {
    // Clear truncates to 0 to keep the number reserved in tact.
    heap_.truncate(0);
  }
  // Provides access to the underlying vector.
  // Caution! any changes that modify the keys will invalidate the heap!
  GenericVector<Pair>* heap() {
    return &heap_;
  }
  // Provides read-only access to an element of the underlying vector.
  const Pair& get(int index) const {
    return heap_[index];
  }
    
    // Displays classification as the given shape_id. Creates as many windows
// as it feels fit, using index as a guide for placement. Adds any created
// windows to the windows output and returns a new index that may be used
// by any subsequent classifiers. Caller waits for the user to view and
// then destroys the windows by clearing the vector.
int TessClassifier::DisplayClassifyAs(
    const TrainingSample& sample, Pix* page_pix, int unichar_id, int index,
    PointerVector<ScrollView>* windows) {
  int shape_id = unichar_id;
  // TODO(rays) Fix this so it works with both flat and real shapetables.
  //  if (GetShapeTable() != nullptr)
  //  shape_id = BestShapeForUnichar(sample, page_pix, unichar_id, nullptr);
  if (shape_id < 0) return index;
  if (UnusedClassIdIn(classify_->PreTrainedTemplates, shape_id)) {
    tprintf('No built-in templates for class/shape %d\n', shape_id);
    return index;
  }
  classify_->ShowBestMatchFor(shape_id, sample.features(),
                              sample.num_features());
  return index;
}
    
    
    {}  // namespace grpc_core

    
    #include <stdio.h>
#include <string.h>
    
    #ifndef GRPCPP_SUPPORT_CHANNEL_ARGUMENTS_H
#define GRPCPP_SUPPORT_CHANNEL_ARGUMENTS_H
    
    
    {
    { private:
  std::shared_ptr<grpc::Channel> CreateChannelWithInterceptors(
      const string& target, const grpc::ChannelArguments& args,
      std::vector<
          std::unique_ptr<experimental::ClientInterceptorFactoryInterface>>
          interceptor_creators) override {
    grpc_channel_args channel_args;
    args.SetChannelArgs(&channel_args);
    return CreateChannelInternal(
        '',
        grpc_cronet_secure_channel_create(engine_, target.c_str(),
                                          &channel_args, nullptr),
        std::move(interceptor_creators));
  }
  void* engine_;
};
}  // namespace grpc
namespace grpc_impl {
std::shared_ptr<ChannelCredentials> CronetChannelCredentials(void* engine) {
  return std::shared_ptr<ChannelCredentials>(
      new grpc::CronetChannelCredentialsImpl(engine));
}
}  // namespace grpc_impl

    
    
    {  std::unique_ptr<grpc::testing::EchoTestService::Stub> stub_;
  std::unique_ptr<Server> server_;
  std::ostringstream server_address_;
  TestServiceImpl service_;
};
    
    
    {
    {}  // namespace common
}  // namespace xgboost
    
    /*!
 * \brief Find the maximum iterator within the iterators
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
XGBOOST_DEVICE inline Iterator FindMaxIndex(Iterator begin, Iterator end) {
  Iterator maxit = begin;
  for (Iterator it = begin; it != end; ++it) {
    if (*it > *maxit) maxit = it;
  }
  return maxit;
}
    
    
    {    this->Stat(nid).loss_chg = loss_change;
    this->Stat(nid).base_weight = base_weight;
    this->Stat(nid).sum_hess = sum_hess;
  }
    
      /**
  * \brief Column sampler constructor.
  * \note This constructor synchronizes the RNG seed across processes.
  */
  ColumnSampler() {
    uint32_t seed = common::GlobalRandom()();
    rabit::Broadcast(&seed, sizeof(seed), 0);
    rng_.seed(seed);
  }
    
    /*!
 * \brief template for all quantile sketch algorithm
 *        that uses merge/prune scheme
 * \tparam DType type of data content
 * \tparam RType type of rank
 * \tparam TSummary actual summary data structure it uses
 */
template<typename DType, typename RType, class TSummary>
class QuantileSketchTemplate {
 public:
  /*! \brief type of summary type */
  using Summary = TSummary;
  /*! \brief the entry type */
  using Entry = typename Summary::Entry;
  /*! \brief same as summary, but use STL to backup the space */
  struct SummaryContainer : public Summary {
    std::vector<Entry> space;
    SummaryContainer(const SummaryContainer &src) : Summary(nullptr, src.size) {
      this->space = src.space;
      this->data = dmlc::BeginPtr(this->space);
    }
    SummaryContainer() : Summary(nullptr, 0) {
    }
    /*! \brief reserve space for summary */
    inline void Reserve(size_t size) {
      if (size > space.size()) {
        space.resize(size);
        this->data = dmlc::BeginPtr(space);
      }
    }
    /*!
     * \brief set the space to be merge of all Summary arrays
     * \param begin beginning position in the summary array
     * \param end ending position in the Summary array
     */
    inline void SetMerge(const Summary *begin,
                         const Summary *end) {
      CHECK(begin < end) << 'can not set combine to empty instance';
      size_t len = end - begin;
      if (len == 1) {
        this->Reserve(begin[0].size);
        this->CopyFrom(begin[0]);
      } else if (len == 2) {
        this->Reserve(begin[0].size + begin[1].size);
        this->SetMerge(begin[0], begin[1]);
      } else {
        // recursive merge
        SummaryContainer lhs, rhs;
        lhs.SetCombine(begin, begin + len / 2);
        rhs.SetCombine(begin + len / 2, end);
        this->Reserve(lhs.size + rhs.size);
        this->SetCombine(lhs, rhs);
      }
    }
    /*!
     * \brief do elementwise combination of summary array
     *        this[i] = combine(this[i], src[i]) for each i
     * \param src the source summary
     * \param max_nbyte maximum number of byte allowed in here
     */
    inline void Reduce(const Summary &src, size_t max_nbyte) {
      this->Reserve((max_nbyte - sizeof(this->size)) / sizeof(Entry));
      SummaryContainer temp;
      temp.Reserve(this->size + src.size);
      temp.SetCombine(*this, src);
      this->SetPrune(temp, space.size());
    }
    /*! \brief return the number of bytes this data structure cost in serialization */
    inline static size_t CalcMemCost(size_t nentry) {
      return sizeof(size_t) + sizeof(Entry) * nentry;
    }
    /*! \brief save the data structure into stream */
    template<typename TStream>
    inline void Save(TStream &fo) const {  // NOLINT(*)
      fo.Write(&(this->size), sizeof(this->size));
      if (this->size != 0) {
        fo.Write(this->data, this->size * sizeof(Entry));
      }
    }
    /*! \brief load data structure from input stream */
    template<typename TStream>
    inline void Load(TStream &fi) {  // NOLINT(*)
      CHECK_EQ(fi.Read(&this->size, sizeof(this->size)), sizeof(this->size));
      this->Reserve(this->size);
      if (this->size != 0) {
        CHECK_EQ(fi.Read(this->data, this->size * sizeof(Entry)),
                 this->size * sizeof(Entry));
      }
    }
  };
  /*!
   * \brief initialize the quantile sketch, given the performance specification
   * \param maxn maximum number of data points can be feed into sketch
   * \param eps accuracy level of summary
   */
  inline void Init(size_t maxn, double eps) {
    LimitSizeLevel(maxn, eps, &nlevel, &limit_size);
    // lazy reserve the space, if there is only one value, no need to allocate space
    inqueue.queue.resize(1);
    inqueue.qtail = 0;
    data.clear();
    level.clear();
  }
    }
    
    /**
 * Default implementations of the accessor hooks. A property handler
 * class is supposed to implement `getProp`, `setProp`, `issetProp`,
 * `unsetProp`, and  `isPropSupported`. If a method cannot handle property,
 * it should return sigil `Native::prop_not_handled` value.
 *
 * Example:
 *
 * struct ElementPropHandler {
 *   static Variant getProp(const Object& this_, const String& name) {
 *     // get `name` prop
 *   }
 *   ...
 * }
 */
    
    bool fill_bfd_cache(folly::StringPiece filename, BfdCache& p) {
  // Hard to avoid heap here!
  auto abfd = bfd_openr(filename.begin(), nullptr);
  if (abfd == nullptr) return true;
    }
    
    #include 'hphp/util/assertions.h'
#include <atomic>
#include <folly/portability/SysMman.h>
    
      // Parent pointers should point to the node that has a given node as
  // a child.
  assert(node->parent == expectedParent);
    
    TRACE_SET_MOD(irlower);
    
    struct InlineState {
  /*
   * The current depth of inlining.  0 means we're not inlining.
   */
  uint16_t depth{0};
    }