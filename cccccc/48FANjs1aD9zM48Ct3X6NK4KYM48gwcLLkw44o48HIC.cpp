
        
        /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    struct ObjectData;
struct Object;
    
    
    {    assertx(data == comma || data == semi);
    // eat parameters, and figure out if we have ';base64'
    while (semi && (data == semi)) {
      data++;
      meta_len--;
      char* equals = (char*)memchr(data, '=', meta_len);
      semi = (char*)memchr(data, ';', meta_len);
      if (!equals || (semi && semi < data)) {
        // no equals, so either 'base64' or its bad
        if (meta_len != sizeof('base64') - 1 ||
            memcmp(data, 'base64', sizeof('base64')-1)) {
          raise_warning('rfc2396: invalid parameter');
          return nullptr;
        }
        // it's 'base64', we're done
        base64 = true;
        meta_len -= sizeof('base64') - 1;
        data += sizeof('base64') - 1;
        break;
      }
      // there's a parameter
      if (semi) {
        meta_len -= semi - data + 1;
        data = semi;
      } /* else, we're done with meta */
    }
  }
  data = comma + 1;
  data_len -= 1;
  String decoded;
    
    
    {  /**
   * Execute a debugger action.
   */
  virtual String debuggerVerb(const std::string& /*verb*/,
                              const std::vector<std::string>& /*args*/) {
    return String();
  }
};
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    namespace HPHP {
    }
    
    template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, F fillCols);
template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, int64_t rate, F fillCols);
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    #if DMLC_ENABLE_STD_THREAD
namespace xgboost {
namespace data {
    }
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
    
    // Finally register the objective function.
// After it succeeds you can try use xgboost with objective=mylogistic
XGBOOST_REGISTER_OBJECTIVE(MyLogistic, 'mylogistic')
.describe('User defined logistic regression plugin')
.set_body([]() { return new MyLogistic(); });
    
    template<typename DType>
inline void CompressArray<DType>::Write(dmlc::Stream* fo) {
  encoded_chunks_.clear();
  encoded_chunks_.push_back(0);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    encoded_chunks_.push_back(encoded_chunks_.back() + out_buffer_[i].length());
  }
  fo->Write(raw_chunks_);
  fo->Write(encoded_chunks_);
  for (const std::string& buf : out_buffer_) {
    fo->Write(dmlc::BeginPtr(buf), buf.length());
  }
}
    
    namespace xgboost {
namespace data {
    }
    }
    
      bool operator == (const Extension_call_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Extension_call_result &rhs) const {
    return !(*this == rhs);
  }
    
    ExtensionStatus::ExtensionStatus(const ExtensionStatus& other4) {
  code = other4.code;
  message = other4.message;
  uuid = other4.uuid;
  __isset = other4.__isset;
}
ExtensionStatus& ExtensionStatus::operator=(const ExtensionStatus& other5) {
  code = other5.code;
  message = other5.message;
  uuid = other5.uuid;
  __isset = other5.__isset;
  return *this;
}
void ExtensionStatus::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << 'ExtensionStatus(';
  out << 'code=' << to_string(code);
  out << ', ' << 'message=' << to_string(message);
  out << ', ' << 'uuid=' << to_string(uuid);
  out << ')';
}
    
    #include <osquery/core.h>
#include <osquery/filesystem/filesystem.h>
#include <osquery/logger.h>
#include <osquery/tables.h>
#include <osquery/utils/conversions/split.h>
    
    /*
** This routine reads a line of text from FILE in, stores
** the text in memory obtained from malloc() and returns a pointer
** to the text.  NULL is returned at end of file, or if malloc()
** fails.
**
** If zLine is not NULL then it is a malloced buffer returned from
** a previous call to this routine that may be reused.
*/
static char* local_getline(char* zLine, FILE* in) {
  int nLine = ((zLine == nullptr) ? 0 : 100);
  int n = 0;
    }
    
      static Killswitch& get() {
    static Killswitch killswitch;
    return killswitch;
  }
    
    #include <osquery/tests/integration/tables/helper.h>
    
    
    {  ValidatatioMap row_map = {{'filter_name', NonEmptyString},
                            {'chain', NormalType},
                            {'policy', NormalType},
                            {'target', NormalType},
                            {'protocol', IntType},
                            {'src_port', IntMinMaxCheck(0, 65535)},
                            {'dst_port', IntMinMaxCheck(0, 65535)},
                            {'src_ip', verifyEmptyStringOrIpAddress},
                            {'src_mask', verifyEmptyStringOrIpAddress},
                            {'iniface', NormalType},
                            {'iniface_mask', verifyEmptyStringOrIpAddress},
                            {'dst_ip', verifyEmptyStringOrIpAddress},
                            {'dst_mask', verifyEmptyStringOrIpAddress},
                            {'outiface', NormalType},
                            {'outiface_mask', verifyEmptyStringOrIpAddress},
                            {'match', SpecificValuesCheck{'yes', 'no'}},
                            {'packets', NonNegativeInt},
                            {'bytes', NonNegativeInt}};
  validate_rows(data, row_map);
}
    
    #include <osquery/tests/integration/tables/helper.h>
    
    TEST_F(KernelInfo, test_sanity) {
  QueryData data = execute_query('select * from kernel_info');
  ValidatatioMap row_map = {{'version', NonEmptyString},
                            {'arguments', NormalType},
                            {'path', NormalType},
                            {'device', NonEmptyString}};
  validate_rows(data, row_map);
}
    
    TEST_F(kernelIntegrity, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from kernel_integrity');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'sycall_addr_modified', IntType}
  //      {'text_segment_hash', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    // Sanity check integration test for kernel_modules
// Spec file: specs/linux/kernel_modules.table