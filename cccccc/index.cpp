
        
        #include <iomanip>
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/tensor_shape.pb.h'
#include 'tensorflow/core/grappler/costs/graph_properties.h'
#include 'tensorflow/core/grappler/grappler_item.h'
    
    PyTypeObject TensorReleaserType = {
    PyVarObject_HEAD_INIT(nullptr, 0) /* head init */
    'tensorflow_wrapper',             /* tp_name */
    sizeof(TensorReleaser),           /* tp_basicsize */
    0,                                /* tp_itemsize */
    /* methods */
    TensorReleaser_dealloc,      /* tp_dealloc */
    nullptr,                     /* tp_print */
    nullptr,                     /* tp_getattr */
    nullptr,                     /* tp_setattr */
    nullptr,                     /* tp_compare */
    nullptr,                     /* tp_repr */
    nullptr,                     /* tp_as_number */
    nullptr,                     /* tp_as_sequence */
    nullptr,                     /* tp_as_mapping */
    nullptr,                     /* tp_hash */
    nullptr,                     /* tp_call */
    nullptr,                     /* tp_str */
    nullptr,                     /* tp_getattro */
    nullptr,                     /* tp_setattro */
    nullptr,                     /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,          /* tp_flags */
    'Wrapped TensorFlow Tensor', /* tp_doc */
    nullptr,                     /* tp_traverse */
    nullptr,                     /* tp_clear */
    nullptr,                     /* tp_richcompare */
};
    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/framework/types.pb.h'
#include 'tensorflow/core/lib/core/status.h'
    
    
    {}  // namespace tensorflow

    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_

    
     private:
  // Gets the up to the first 3 prefixes from s (split by _).
  // For example, tesseract_foo_bar will be split into tesseract,foo and bar.
  void GetPrefixes(const char* s, STRING* level_one,
                   STRING* level_two, STRING* level_three);
    
    
/**********************************************************************
 * split_and_recog_word
 *
 * Split the word into 2 smaller pieces at the largest gap.
 * Recognize the pieces and stick the results back together.
 **********************************************************************/
void Tesseract::split_and_recog_word(WERD_RES *word) {
  // Find the biggest blob gap in the chopped_word.
  int bestgap = -INT32_MAX;
  int split_index = 0;
  for (int b = 1; b < word->chopped_word->NumBlobs(); ++b) {
    TBOX prev_box = word->chopped_word->blobs[b - 1]->bounding_box();
    TBOX blob_box = word->chopped_word->blobs[b]->bounding_box();
    int gap = blob_box.left() - prev_box.right();
    if (gap > bestgap) {
      bestgap = gap;
      split_index = b;
    }
  }
  ASSERT_HOST(split_index > 0);
    }
    
      // Get a clone/copy of the source image rectangle, reduced to greyscale,
  // and at the same resolution as the output binary.
  // The returned Pix must be pixDestroyed.
  // Provided to the classifier to extract features from the greyscale image.
  virtual Pix* GetPixRectGrey();
    
    bool AuthPropertyIterator::operator!=(const AuthPropertyIterator& rhs) const {
  return !operator==(rhs);
}
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
      // Serializes a GrpcTraceContext into the provided buffer. Returns the number
  // of bytes serialized into the buffer. If the buffer is not of sufficient
  // size (it must be at least kGrpcTraceContextSize bytes) it will drop
  // everything and return 0 bytes serialized. Inlined for performance reasons.
  static size_t Encode(const GrpcTraceContext& tc, char* buf, size_t buf_size) {
    if (buf_size < kGrpcTraceContextSize) {
      return kEncodeDecodeFailure;
    }
    buf[kVersionIdOffset] = kVersionId;
    buf[kTraceIdOffset] = kTraceIdField;
    memcpy(&buf[kTraceIdOffset + 1], tc.trace_id,
           opencensus::trace::TraceId::kSize);
    buf[kSpanIdOffset] = kSpanIdField;
    memcpy(&buf[kSpanIdOffset + 1], tc.span_id,
           opencensus::trace::SpanId::kSize);
    buf[kTraceOptionsOffset] = kTraceOptionsField;
    memcpy(&buf[kTraceOptionsOffset + 1], tc.trace_options,
           opencensus::trace::TraceOptions::kSize);
    return kGrpcTraceContextSize;
  }
    
    // server cumulative
const ViewDescriptor& ServerSentBytesPerRpcCumulative() {
  const static ViewDescriptor descriptor =
      ViewDescriptor()
          .set_name('grpc.io/server/received_bytes_per_rpc/cumulative')
          .set_measure(kRpcServerSentBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
      Status GetFileContainingSymbol(
      ServerContext* context, const grpc::string& symbol,
      reflection::v1alpha::ServerReflectionResponse* response);
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    	HKEY cmderKey;
	FAIL_ON_ERROR(RegCreateKeyEx(root, keyBaseName, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &cmderKey, NULL));
    
      // Get initial measurement of the space we will be reading.
  const int64_t initial_size = Size(Key(0), Key(n));
  const int64_t initial_other_size = Size(Key(n), Key(kCount));
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
      void Open() {
    assert(db_ == nullptr);
    Options options;
    options.env = g_env;
    options.create_if_missing = !FLAGS_use_existing_db;
    options.block_cache = cache_;
    options.write_buffer_size = FLAGS_write_buffer_size;
    options.max_file_size = FLAGS_max_file_size;
    options.block_size = FLAGS_block_size;
    options.max_open_files = FLAGS_open_files;
    options.filter_policy = filter_policy_;
    options.reuse_logs = FLAGS_reuse_logs;
    Status s = DB::Open(options, FLAGS_db, &db_);
    if (!s.ok()) {
      fprintf(stderr, 'open error: %s\n', s.ToString().c_str());
      exit(1);
    }
  }
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    TEST(FormatTest, InternalKeyShortSeparator) {
  // When user keys are same
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 99, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 101, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeDeletion)));
    }
    
    static std::string MakeFileName(const std::string& dbname, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return dbname + buf;
}
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
      // Returns the physical offset of the last record returned by ReadRecord.
  //
  // Undefined before the first call to ReadRecord.
  uint64_t LastRecordOffset();
    
    #include <stdint.h>
#include 'db/log_format.h'
#include 'leveldb/slice.h'
#include 'leveldb/status.h'
    
      // Test that previous recovery produced recoverable state.
  Open();
  ASSERT_LE(1, NumTables());
  ASSERT_EQ(1, NumLogs());
  if (CanAppend()) {
    ASSERT_EQ(new_log, FirstLogFile());
  }
  ASSERT_EQ('bar2', Get('foo'));
  ASSERT_EQ('world', Get('hello'));
  ASSERT_EQ('there', Get('hi'));
    
    template<>
struct BOOST_REGEX_DECL c_regex_traits<char>
{
   c_regex_traits(){}
   typedef char char_type;
   typedef std::size_t size_type;
   typedef std::string string_type;
   struct locale_type{};
   typedef boost::uint32_t char_class_type;
    }
    
    namespace boost{
namespace detail{
    }
    }
    
    namespace boost{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable : 4251 4231)
#  if BOOST_MSVC < 1600
#     pragma warning(disable : 4660)
#  endif
#endif
    }
    
       enum flag_type_
   {
    }
    
    template <class ST, class SA, class charT, class traits>
inline bool regex_match(const std::basic_string<charT, ST, SA>& s, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   typedef typename std::basic_string<charT, ST, SA>::const_iterator iterator;
   match_results<iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#else  // partial ordering
inline bool regex_match(const char* str, 
                        cmatch& m, 
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const char* str, 
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   match_results<const char*> m;
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#ifndef BOOST_NO_STD_LOCALE
inline bool regex_match(const char* str, 
                        cmatch& m, 
                        const basic_regex<char, cpp_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const char* str, 
                        const basic_regex<char, cpp_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const char*> m;
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_match(const char* str, 
                        cmatch& m, 
                        const basic_regex<char, c_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const char* str, 
                        const basic_regex<char, c_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const char*> m;
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
inline bool regex_match(const char* str, 
                        cmatch& m, 
                        const basic_regex<char, w32_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const char* str, 
                        const basic_regex<char, w32_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const char*> m;
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#endif
#ifndef BOOST_NO_WREGEX
inline bool regex_match(const wchar_t* str, 
                        wcmatch& m, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const wchar_t* str, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   match_results<const wchar_t*> m;
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#ifndef BOOST_NO_STD_LOCALE
inline bool regex_match(const wchar_t* str, 
                        wcmatch& m, 
                        const basic_regex<wchar_t, cpp_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const wchar_t* str, 
                        const basic_regex<wchar_t, cpp_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const wchar_t*> m;
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_match(const wchar_t* str, 
                        wcmatch& m, 
                        const basic_regex<wchar_t, c_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const wchar_t* str, 
                        const basic_regex<wchar_t, c_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const wchar_t*> m;
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
inline bool regex_match(const wchar_t* str, 
                        wcmatch& m, 
                        const basic_regex<wchar_t, w32_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const wchar_t* str, 
                        const basic_regex<wchar_t, w32_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const wchar_t*> m;
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#endif
#endif
inline bool regex_match(const std::string& s, 
                        smatch& m,
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::string& s, 
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::string::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#ifndef BOOST_NO_STD_LOCALE
inline bool regex_match(const std::string& s, 
                        smatch& m,
                        const basic_regex<char, cpp_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::string& s, 
                        const basic_regex<char, cpp_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::string::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_match(const std::string& s, 
                        smatch& m,
                        const basic_regex<char, c_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::string& s, 
                        const basic_regex<char, c_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::string::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
inline bool regex_match(const std::string& s, 
                        smatch& m,
                        const basic_regex<char, w32_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::string& s, 
                        const basic_regex<char, w32_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::string::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#endif
#if !defined(BOOST_NO_WREGEX)
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        match_results<std::basic_string<wchar_t>::const_iterator>& m,
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::basic_string<wchar_t>::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#ifndef BOOST_NO_STD_LOCALE
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        match_results<std::basic_string<wchar_t>::const_iterator>& m,
                        const basic_regex<wchar_t, cpp_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        const basic_regex<wchar_t, cpp_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::basic_string<wchar_t>::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        match_results<std::basic_string<wchar_t>::const_iterator>& m,
                        const basic_regex<wchar_t, c_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        const basic_regex<wchar_t, c_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::basic_string<wchar_t>::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        match_results<std::basic_string<wchar_t>::const_iterator>& m,
                        const basic_regex<wchar_t, w32_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        const basic_regex<wchar_t, w32_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::basic_string<wchar_t>::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#endif
#endif
    
    template <class OutputIterator, class BidirectionalIterator, class traits, class charT, class Formatter>
OutputIterator regex_replace(OutputIterator out,
                         BidirectionalIterator first,
                         BidirectionalIterator last,
                         const basic_regex<charT, traits>& e, 
                         Formatter fmt, 
                         match_flag_type flags = match_default)
{
   regex_iterator<BidirectionalIterator, charT, traits> i(first, last, e, flags);
   regex_iterator<BidirectionalIterator, charT, traits> j;
   if(i == j)
   {
      if(!(flags & regex_constants::format_no_copy))
         out = BOOST_REGEX_DETAIL_NS::copy(first, last, out);
   }
   else
   {
      BidirectionalIterator last_m(first);
      while(i != j)
      {
         if(!(flags & regex_constants::format_no_copy))
            out = BOOST_REGEX_DETAIL_NS::copy(i->prefix().first, i->prefix().second, out); 
         out = i->format(out, fmt, flags, e);
         last_m = (*i)[0].second;
         if(flags & regex_constants::format_first_only)
            break;
         ++i;
      }
      if(!(flags & regex_constants::format_no_copy))
         out = BOOST_REGEX_DETAIL_NS::copy(last_m, last, out);
   }
   return out;
}
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_search.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_search implementation.
  */
    
    template <class charT>
const basic_regex<charT>& get_default_expression(charT)
{
   static const charT expression_text[4] = { '\\', 's', '+', '\00', };
   static const basic_regex<charT> e(expression_text);
   return e;
}
    
       pimpl pdata;
    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
    
    {  virtual bool finished() = 0;
};
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
      bool validateToken(const std::string& token, const unsigned char* infoHash,
                     const std::string& ipaddr, uint16_t port) const;
    
    DNSCache::CacheEntry::~CacheEntry() = default;
    
      void markBad(const std::string& hostname, const std::string& ipaddr,
               uint16_t port);
    
    #define COLUMN_DCT8(in) do { \
  LOAD(m0, (in)[0 * 8]);     \
  LOAD(m2, (in)[2 * 8]);     \
  LOAD(m7, (in)[7 * 8]);     \
  LOAD(m5, (in)[5 * 8]);     \
                             \
  BUTTERFLY(m0, m7);         \
  BUTTERFLY(m2, m5);         \
                             \
  LOAD(m3, (in)[3 * 8]);     \
  LOAD(m4, (in)[4 * 8]);     \
  BUTTERFLY(m3, m4);         \
                             \
  LOAD(m6, (in)[6 * 8]);     \
  LOAD(m1, (in)[1 * 8]);     \
  BUTTERFLY(m1, m6);         \
  BUTTERFLY(m7, m4);         \
  BUTTERFLY(m6, m5);         \
                             \
  /* RowIdct() needs 15bits fixed-point input, when the output from   */ \
  /* ColumnIdct() would be 12bits. We are better doing the shift by 3 */ \
  /* now instead of in RowIdct(), because we have some multiplies to  */ \
  /* perform, that can take advantage of the extra 3bits precision.   */ \
  LSHIFT(m4, 3);             \
  LSHIFT(m5, 3);             \
  BUTTERFLY(m4, m5);         \
  STORE16((in)[0 * 8], m5);  \
  STORE16((in)[4 * 8], m4);  \
                             \
  LSHIFT(m7, 3);             \
  LSHIFT(m6, 3);             \
  LSHIFT(m3, 3);             \
  LSHIFT(m0, 3);             \
                             \
  LOAD_CST(m4, kTan2);       \
  m5 = m4;                   \
  MULT(m4, m7);              \
  MULT(m5, m6);              \
  SUB(m4, m6);               \
  ADD(m5, m7);               \
  STORE16((in)[2 * 8], m5);  \
  STORE16((in)[6 * 8], m4);  \
                             \
  /* We should be multiplying m6 by C4 = 1/sqrt(2) here, but we only have */ \
  /* the k2Sqrt2 = 1/(2.sqrt(2)) constant that fits into 15bits. So we    */ \
  /* shift by 4 instead of 3 to compensate for the additional 1/2 factor. */ \
  LOAD_CST(m6, k2Sqrt2);     \
  LSHIFT(m2, 3 + 1);         \
  LSHIFT(m1, 3 + 1);         \
  BUTTERFLY(m1, m2);         \
  MULT(m2, m6);              \
  MULT(m1, m6);              \
  BUTTERFLY(m3, m1);         \
  BUTTERFLY(m0, m2);         \
                             \
  LOAD_CST(m4, kTan3m1);     \
  LOAD_CST(m5, kTan1);       \
  m7 = m3;                   \
  m6 = m1;                   \
  MULT(m3, m4);              \
  MULT(m1, m5);              \
                             \
  ADD(m3, m7);               \
  ADD(m1, m2);               \
  CORRECT_LSB(m1);           \
  CORRECT_LSB(m3);           \
  MULT(m4, m0);              \
  MULT(m5, m2);              \
  ADD(m4, m0);               \
  SUB(m0, m3);               \
  ADD(m7, m4);               \
  SUB(m5, m6);               \
                             \
  STORE16((in)[1 * 8], m1);  \
  STORE16((in)[3 * 8], m0);  \
  STORE16((in)[5 * 8], m7);  \
  STORE16((in)[7 * 8], m5);  \
} while (0)
    
    bool ReadPNG(const std::string& data, int* xsize, int* ysize,
             std::vector<uint8_t>* rgb) {
  png_structp png_ptr =
      png_create_read_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
  if (!png_ptr) {
    return false;
  }
    }
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    #include <string>