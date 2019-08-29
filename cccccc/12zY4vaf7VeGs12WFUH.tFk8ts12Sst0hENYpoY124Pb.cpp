
        
        #ifndef TESSERACT_CCMAIN_OSDETECT_H_
#define TESSERACT_CCMAIN_OSDETECT_H_
    
    
    {  // Stores all the source points in the order they were given and their
  // halfwidths, if any.
  GenericVector<PointWidth> pts_;
  // Stores the computed perpendicular distances of (some of) the pts_ from a
  // given vector (assuming it goes through the origin, making it a line).
  // Since the distances may be a subset of the input points, and get
  // re-ordered by the nth_item function, the original point is stored
  // along side the distance.
  GenericVector<DistPointPair> distances_;  // Distances of points.
  // The squared length of the vector used to compute distances_.
  double square_length_;
};
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
        void setrej_tess_failure();  //Tess generated blank
    void setrej_small_xht();  //Small xht char/wd
    void setrej_edge_char();  //Close to image edge
    void setrej_1Il_conflict();  //Initial reject map
    void setrej_postNN_1Il();  //1Il after NN
    void setrej_rej_cblob();  //Insert duff blob
    void setrej_mm_reject();  //Matrix matcher
                                 //Odd repeated char
    void setrej_bad_repetition();
    void setrej_poor_match();  //Failed Rays heuristic
                                 //TEMP reject_word
    void setrej_not_tess_accepted();
                                 //TEMP reject_word
    void setrej_contains_blanks();
    void setrej_bad_permuter();  //POTENTIAL reject_word
    void setrej_hyphen();  //PostNN dubious hyph or .
    void setrej_dubious();  //PostNN dubious limit
    void setrej_no_alphanums();  //TEMP reject_word
    void setrej_mostly_rej();  //TEMP reject_word
    void setrej_xht_fixup();  //xht fixup
    void setrej_bad_quality();  //TEMP reject_word
    void setrej_doc_rej();  //TEMP reject_word
    void setrej_block_rej();  //TEMP reject_word
    void setrej_row_rej();  //TEMP reject_word
    void setrej_unlv_rej();  //TEMP reject_word
    void setrej_nn_accept();  //NN Flipped a char
    void setrej_hyphen_accept();  //Good aspect ratio
    void setrej_mm_accept();  //Matrix matcher
                                 //Quality flip a char
    void setrej_quality_accept();
                                 //Accept all except blank
    void setrej_minimal_rej_accept();
    
    
    { private:
  // Data members are private to keep deletion of data_ encapsulated.
  Data* data_;
  Key key_;
};
// Specialization of KDPtrPair to provide operator< for sorting in increasing
// order.
template <typename Key, typename Data>
struct KDPtrPairInc : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairInc() : KDPtrPair<Key, Data>() {}
  KDPtrPairInc(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairInc(KDPtrPairInc& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairInc& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in increasing order.
  int operator<(const KDPtrPairInc<Key, Data>& other) const {
    return this->key() < other.key();
  }
};
// Specialization of KDPtrPair to provide operator< for sorting in decreasing
// order.
template <typename Key, typename Data>
struct KDPtrPairDec : public KDPtrPair<Key, Data> {
  // Since we are doing non-standard stuff we have to duplicate *all* the
  // constructors and operator=.
  KDPtrPairDec() : KDPtrPair<Key, Data>() {}
  KDPtrPairDec(Key k, Data* d) : KDPtrPair<Key, Data>(k, d) {}
  KDPtrPairDec(KDPtrPairDec& src) : KDPtrPair<Key, Data>(src) {}
  void operator=(KDPtrPairDec& src) {
    KDPtrPair<Key, Data>::operator=(src);
  }
  // Operator< facilitates sorting in decreasing order by using operator> on
  // the key values.
  int operator<(const KDPtrPairDec<Key, Data>& other) const {
    return this->key() > other.key();
  }
};
    
    
    {  UNICHARMAP_NODE* nodes;
};
    
    namespace tesseract {
    }
    
    
    {}  // namespace tesseract
    
      // shutdown should trigger cancellation causing everything to shutdown
  auto deadline =
      std::chrono::system_clock::now() + std::chrono::microseconds(100);
  server_->Shutdown(deadline);
  EXPECT_GE(std::chrono::system_clock::now(), deadline);
    
    #include <grpc/support/log.h>
#include 'src/core/lib/iomgr/socket_windows.h'
#include 'src/core/lib/iomgr/tcp_windows.h'
    
    #include 'src/core/lib/iomgr/iocp_windows.h'
#include 'src/core/lib/iomgr/iomgr_internal.h'
#include 'src/core/lib/iomgr/pollset.h'
#include 'src/core/lib/iomgr/pollset_windows.h'
#include 'src/core/lib/iomgr/sockaddr_windows.h'
#include 'src/core/lib/iomgr/socket_windows.h'
    
    #include <inttypes.h>
    
    #include <grpc/support/port_platform.h>
    
    class TestServiceImpl : public EchoTestService::Service {
 public:
  Status Echo(ServerContext* context, const EchoRequest* request,
              EchoResponse* response) override {
    response->set_message(request->message());
    return Status::OK;
  }
    }
    
    
    {  EXPECT_EQ(send_response_.message(), recv_response_.message());
  EXPECT_TRUE(recv_status_.ok());
}
    
    
    {    while (power > 0)
    {
        if (power & 1)
        {
            mulnum(&lret, *proot, radix);
        }
        mulnum(proot, *proot, radix);
        TRIMNUM(*proot, precision);
        power >>= 1;
    }
    destroynum(*proot);
    *proot = lret;
}
    
    using namespace std;
using namespace CalcEngine;
    
    using namespace std;
using namespace CalcEngine;
    
      _OutputStream &operator<< (bool v) {
    m_out << (v ? 'true' : 'false');
    return *this;
  }
    
    
    { protected:
  RangeState& m_state;
  uint32_t m_maxHugePages{0};
  uint32_t m_currHugePages{0};
  uint32_t m_interleaveMask;            // 0 indicates no NUMA
  short m_nextNode{0};
  bool m_failed{false};
  RangeMapper* m_fallback{nullptr};
};
    
    HealthLevel HostHealthMonitor::evaluate() {
#ifdef USE_JEMALLOC
  mallctl_epoch();
#endif
  HealthLevel res = HealthLevel::Bold;
  std::lock_guard<std::mutex> g(m_lock);
  for (auto metric : m_metrics) {
    res = std::max(res, metric->evaluate());
  }
  return res;
}
    
    /**
 * Java-like base class for synchronization between object methods within the
 * same class. Check pool.h for a typical example.
 */
struct Synchronizable {
  Synchronizable();
  virtual ~Synchronizable();
  Synchronizable(const Synchronizable&) = delete;
  Synchronizable& operator=(const Synchronizable&) = delete;
    }
    
    bool TestServer::PreBindSocket() {
  struct addrinfo hints, *res, *res0;
  std::memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_UNSPEC;
  hints.ai_socktype = SOCK_STREAM;
  hints.ai_flags = AI_PASSIVE | AI_ADDRCONFIG;
    }
    
      // Some invariants about Closure classes.
  auto const isClo = is_closure(c);
  if (c.closureContextCls) {
    assert(c.closureContextCls->unit == c.unit);
    assert(isClo);
  }
  if (isClo) {
    assert(c.methods.size() == 1 || c.methods.size() == 2);
    assert(c.methods[0]->name->isame(s_invoke.get()));
    assert(c.methods[0]->isClosureBody);
    assert(c.methods.size() == 1 || (c.methods[1]->attrs & AttrIsInOutWrapper));
  } else {
    assert(!c.closureContextCls);
  }
    
        const auto FACE_NUMBER_PARTS = 70u;
    #define FACE_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  4,5,  5,6,  6,7,  7,8,  8,9,  9,10,  10,11,  11,12,  12,13,  13,14,  14,15,  15,16,  17,18,  18,19,  19,20, \
        20,21,  22,23,  23,24,  24,25,  25,26,  27,28,  28,29,  29,30,  31,32,  32,33,  33,34,  34,35,  36,37,  37,38,  38,39,  39,40,  40,41, \
        41,36,  42,43,  43,44,  44,45,  45,46,  46,47,  47,42,  48,49,  49,50,  50,51,  51,52,  52,53,  53,54,  54,55,  55,56,  56,57,  57,58, \
        58,59,  59,48,  60,61,  61,62,  62,63,  63,64,  64,65,  65,66,  66,67,  67,60
    #define FACE_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> FACE_PAIRS_RENDER {FACE_PAIRS_RENDER_GPU};
    #define FACE_COLORS_RENDER_GPU 255.f,    255.f,    255.f
    const std::vector<float> FACE_COLORS_RENDER{FACE_COLORS_RENDER_GPU};
    const std::vector<float> FACE_SCALES_RENDER{FACE_SCALES_RENDER_GPU};
    
        /*! \brief Conversion operator to const size_type *.
     *  
     *  \returns a pointer to the size of the first dimension.
     */
    operator const size_type*() const { 
        return sizes_; 
    }
    
    #ifdef USE_3D_ADAM_MODEL
    #include <adam/totalmodel.h>
#endif
#include <openpose/core/common.hpp>
#include <openpose/gui/enumClasses.hpp>
#include <openpose/gui/gui.hpp>