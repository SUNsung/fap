
        
        void PartialRunMgr::PartialRunDone(int step_id, StatusCallback done,
                                   const Status& status) {
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    run_it->second->final_status.Update(status);
    if (!run_it->second->executor_done) {
      // If we found the partial_run, we set the final callback to call only
      // when the executor is completely done.
      run_it->second->final_callback = std::move(done);
      return;
    }
    callback_status = run_it->second->final_status;
  }
  // Otherwise we call the callback immediately.
  done(callback_status);
  mutex_lock l(mu_);
  step_id_to_partial_run_.erase(step_id);
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    { private:
  Cluster* cluster_;  // Not owned.
  int measurement_steps_;
  int measurement_threads_;
  std::vector<std::pair<string, Tensor>> feed_;
  std::vector<string> fetch_;
  std::unique_ptr<thread::ThreadPool> thread_pool_;
};
    
    #ifndef TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_
#define TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    /** scalar_tanh_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a tanh
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::tanh_fast_derivative()
  */
template <typename T>
struct scalar_tanh_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_tanh_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return one - (y * y);
  }
    }
    
      void Compute(OpKernelContext* context) override {
    OP_REQUIRES(
        context, context->num_inputs() == 4,
        errors::InvalidArgument('EncodeAudio requires exactly four inputs.'));
    }
    
    template <class T>
class DynamicStitchOpImplBase : public OpKernel {
 public:
  explicit DynamicStitchOpImplBase(OpKernelConstruction* c,
                                   const string& op_name)
      : OpKernel(c) {
    // Compute expected input signature
    const DataType dt = DataTypeToEnum<T>::v();
    const int n = c->num_inputs() / 2;
    DataTypeVector expected;
    for (int i = 0; i < n; i++) {
      expected.push_back(DT_INT32);
    }
    for (int i = 0; i < n; i++) {
      expected.push_back(dt);
    }
    OP_REQUIRES_OK(c, c->MatchSignature(expected, {dt}));
    OP_REQUIRES(c, c->num_inputs() > 0,
                errors::InvalidArgument(op_name + ': Must have some inputs'));
    OP_REQUIRES(c, c->num_inputs() % 2 == 0,
                errors::InvalidArgument(
                    op_name + ': Must have even number of arguments'));
  }
    }
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    class Env;
    
    class VersionEdit {
 public:
  VersionEdit() { Clear(); }
  ~VersionEdit() { }
    }
    
    class Slice;
    
    
// //////////////////////////////////////////////////////////////////////
// Beginning of content of file: include/json/config.h
// //////////////////////////////////////////////////////////////////////
    
    namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    void MapFieldGenerator::GenerateParsingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.AddEntriesFrom(input, _map_$name$_codec);\n');
}
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void RepeatedEnumFieldGenerator::GenerateCloningCode(io::Printer* printer) {
  printer->Print(variables_,
    '$name$_ = other.$name$_.Clone();\n');
}
    
    #include <string>
    
      mpz_init(gmpReturn);
  mpz_add(gmpReturn, gmpDataA, gmpDataB);
    
    #endif

    
    void PageletServer::AddToPipeline(const std::string &s) {
  assert(!s.empty());
  PageletTransport *job =
    dynamic_cast<PageletTransport *>(g_context->getTransport());
  assert(job);
  job->addToPipeline(s);
}
    
      /**
   * Called before and after request-handling work.
   */
  virtual void setupRequest(Transport* /*transport*/) {}
  virtual void teardownRequest(Transport* /*transport*/) noexcept {}
    
    #include 'hphp/runtime/base/thrift-buffer.h'
    
    bool HHVM_FUNCTION(posix_isatty,
                   const Variant& fd) {
  return isatty(php_posix_get_fd(fd));
}
    
      LdSSwitchData data;
  data.numCases   = numCases;
  data.cases      = &cases[0];
  data.defaultSk  = SrcKey{curSrcKey(env),
                           bcOff(env) + iv.strvec()[iv.size() - 1].dest};
  data.bcSPOff    = spOffBCFromFP(env);
    
    using namespace std;
    
    #define _CRT_NONSTDC_NO_DEPRECATE // make VS accept POSIX functions without _
    
        // construction
    TextLocation()
        : lineNo(SIZE_MAX), charPos(SIZE_MAX), sourceFileAsIndex(SIZE_MAX)
    {
    } // default constructor constructs an unmissably invalid object
    bool IsValid() const;
    
            // take off the prefix
        std::string search;
        if (firstStart == symbolIn.length())
        {
            // this case is just the model label with nothing else, in that case we want the all nodes
            search = '*';
            inWildcard = true;
        }
        else
        {
            search = symbolIn.substr(firstStart);
        }
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
        bool haslattice(std::wstring key) const
    {
#ifdef NONUMLATTICEMMI
        return denlattices.haslattice(key);
#else
        return numlattices.haslattice(key) && denlattices.haslattice(key);
#endif
    }
    
    #if 0
    // save a float4 to RAM bypassing the cache ('without polluting the cache')
    void storewithoutcache (float4 * p4) const
    {
        // _mm_stream_ps ((float*) p4, v);
        *p4 = v;
    }
    
    #include <boost/asio/detail/push_options.hpp>
    
        // Make a copy of the handler so that the memory can be deallocated before
    // the upcall is made. Even if we're not about to make an upcall, a
    // sub-object of the handler may be the true owner of the memory associated
    // with the handler. Consequently, a local copy of the handler is required
    // to ensure that any owning sub-object remains valid until after we have
    // deallocated the memory here.
    detail::binder2<Handler, boost::system::error_code, std::size_t>
      handler(o->handler_, o->ec_, o->bytes_transferred_);
    p.h = boost::asio::detail::addressof(handler.handler_);
    p.reset();
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #endif // BOOST_ASIO_DETAIL_HANDLER_ALLOC_HELPERS_HPP

    
        // Retry operation if interrupted by signal.
    if (ec == boost::asio::error::interrupted)
      continue;
    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
      bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    if (!fi->Read(&(page->offset))) return false;
    CHECK_NE(page->offset.size(), 0) << 'Invalid SparsePage file';
    this->LoadIndexValue(fi);
    }
    
      inline void ParseStr(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        case '\r':
        case '\n': LOG(FATAL)<< 'ConfigReader: unterminated string';
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'ConfigReader: unterminated string';
  }
  inline void ParseStrML(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'unterminated string';
  }
  // return newline
  inline bool GetNextToken(std::string *tok) {
    tok->clear();
    bool new_line = false;
    while (ch_buf != EOF) {
      switch (ch_buf) {
        case '#' : SkipLine(); new_line = true; break;
        case '\'':
          if (tok->length() == 0) {
            ParseStr(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '\'':
          if (tok->length() == 0) {
            ParseStrML(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '=':
          if (tok->length() == 0) {
            ch_buf = this->GetChar();
            *tok = '=';
          }
          return new_line;
        case '\r':
        case '\n':
          if (tok->length() == 0) new_line = true;
        case '\t':
        case ' ' :
          ch_buf = this->GetChar();
          if (tok->length() != 0) return new_line;
          break;
        default:
          *tok += ch_buf;
          ch_buf = this->GetChar();
          break;
      }
    }
    if (tok->length() == 0) {
      return true;
    } else {
      return false;
    }
  }
};
/*!
 * \brief an iterator use stream base, allows use all types of istream
 */
class ConfigStreamReader: public ConfigReaderBase {
 public:
  /*!
   * \brief constructor
   * \param fin istream input stream
   */
  explicit ConfigStreamReader(std::istream &fin) : fin(fin) {}
    
      /* Fetch an individual column. This code should be used with XGBOOST_TYPE_SWITCH
     to determine type of bin id's */
  template<typename T>
  inline Column<T> GetColumn(unsigned fid) const {
    const bool valid_type = std::is_same<T, uint32_t>::value
                          || std::is_same<T, uint16_t>::value
                          || std::is_same<T, uint8_t>::value;
    CHECK(valid_type);
    }
    
    TEST(MetaInfo, SaveLoadBinary) {
  xgboost::MetaInfo info;
  double vals[2] = {1.0, 2.0};
  info.SetInfo('label', vals, xgboost::kDouble, 2);
  info.num_row = 2;
  info.num_col = 1;
    }
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '1a';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
    
Test_Spy_Sample::Test_Spy_Sample()
{
    SPY_ATTACH_CLASS(NULL);
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include 'comm/debugger/spy_impl_helper.inl'
#include 'comm/debugger/test_spy_sample.h'
    
      void setUserDefinedCred(std::string user, std::string password);
    
    bool AbstractOptionHandler::getChangeOption() const
{
  return flags_ & FLAG_CHANGE_OPTION;
}
    
    
    {} // namespace aria2
    
      virtual int64_t getCurrentLength() CXX11_OVERRIDE;