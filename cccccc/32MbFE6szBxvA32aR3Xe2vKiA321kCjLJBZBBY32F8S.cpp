
        
          bool visitSILFunctionType(SILFunctionType *ty) {
    for (auto param : ty->getParameters())
      if (doIt(param.getType()))
        return true;
    for (auto result : ty->getResults())
      if (doIt(result.getType()))
        return true;
    if (ty->hasErrorResult())
      if (doIt(ty->getErrorResult().getType()))
        return true;
    return false;
  }
    
    bool swift::parseASTSection(SerializedModuleLoader *SML, StringRef buf,
                            SmallVectorImpl<std::string> &foundModules) {
  if (!serialization::isSerializedAST(buf))
    return false;
    }
    
    void ClusteredBitVector::reallocate(size_t newCapacityInChunks) {
  // If we already have out-of-line storage, the padding invariants
  // will still apply, and we just need to copy the old data into
  // the new allocation.
  if (hasOutOfLineData()) {
    auto oldData = getOutOfLineChunksPtr();
    allocateAndCopyFrom(oldData, newCapacityInChunks, getLengthInChunks());
    delete[] (oldData - 1);
    return;
  }
    }
    
        StringRef Line = RawText.substr(0, Pos);
    Lines.push_back(Line);
    if (!IsFirstLine) {
      size_t NonWhitespacePos = RawText.find_first_not_of(' ');
      if (NonWhitespacePos != StringRef::npos)
        WhitespaceToTrim =
            std::min(WhitespaceToTrim,
                     static_cast<unsigned>(NonWhitespacePos));
    }
    IsFirstLine = false;
    
    namespace clang {
  class RecordDecl;
  class TypedefNameDecl;
}
    
    /* The maximum that any submessages can be nested.  Matches proto2's limit.
 * This specifies the size of the decoder's statically-sized array and therefore
 * setting it high will cause the upb::pb::Decoder object to be larger.
 *
 * If necessary we can add a runtime-settable property to Decoder that allow
 * this to be larger than the compile-time setting, but this would add
 * complexity, particularly since we would have to decide how/if to give users
 * the ability to set a custom memory allocation function. */
#define UPB_DECODER_MAX_NESTING 64
    
    bool DecodeMetadata(const string& path, GeneratedCodeInfo* info) {
  string data;
  GOOGLE_CHECK_OK(File::GetContents(path, &data, true));
  io::ArrayInputStream input(data.data(), data.size());
  return info->ParseFromZeroCopyStream(&input);
}
    
    // Parses a set of comma-delimited name/value pairs.
void ParseGeneratorParameter(const string& text,
                             std::vector<std::pair<string, string> >* output) {
  std::vector<string> parts = Split(text, ',', true);
    }
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_FIELD_H__
    
    CSharpType GetCSharpType(FieldDescriptor::Type type) {
  switch (type) {
    case FieldDescriptor::TYPE_INT32:
      return CSHARPTYPE_INT32;
    case FieldDescriptor::TYPE_INT64:
      return CSHARPTYPE_INT64;
    case FieldDescriptor::TYPE_UINT32:
      return CSHARPTYPE_UINT32;
    case FieldDescriptor::TYPE_UINT64:
      return CSHARPTYPE_UINT32;
    case FieldDescriptor::TYPE_SINT32:
      return CSHARPTYPE_INT32;
    case FieldDescriptor::TYPE_SINT64:
      return CSHARPTYPE_INT64;
    case FieldDescriptor::TYPE_FIXED32:
      return CSHARPTYPE_UINT32;
    case FieldDescriptor::TYPE_FIXED64:
      return CSHARPTYPE_UINT64;
    case FieldDescriptor::TYPE_SFIXED32:
      return CSHARPTYPE_INT32;
    case FieldDescriptor::TYPE_SFIXED64:
      return CSHARPTYPE_INT64;
    case FieldDescriptor::TYPE_FLOAT:
      return CSHARPTYPE_FLOAT;
    case FieldDescriptor::TYPE_DOUBLE:
      return CSHARPTYPE_DOUBLE;
    case FieldDescriptor::TYPE_BOOL:
      return CSHARPTYPE_BOOL;
    case FieldDescriptor::TYPE_ENUM:
      return CSHARPTYPE_ENUM;
    case FieldDescriptor::TYPE_STRING:
      return CSHARPTYPE_STRING;
    case FieldDescriptor::TYPE_BYTES:
      return CSHARPTYPE_BYTESTRING;
    case FieldDescriptor::TYPE_GROUP:
      return CSHARPTYPE_MESSAGE;
    case FieldDescriptor::TYPE_MESSAGE:
      return CSHARPTYPE_MESSAGE;
    }
    }
    
    void PrimitiveFieldGenerator::WriteHash(io::Printer* printer) {
  const char *text = 'if ($has_property_check$) hash ^= $property_name$.GetHashCode();\n';
  if (descriptor_->type() == FieldDescriptor::TYPE_FLOAT) {
    text = 'if ($has_property_check$) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode($property_name$);\n';
  } else if (descriptor_->type() == FieldDescriptor::TYPE_DOUBLE) {
    text = 'if ($has_property_check$) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode($property_name$);\n';
  }
	printer->Print(variables_, text);
}
void PrimitiveFieldGenerator::WriteEquals(io::Printer* printer) {
  const char *text = 'if ($property_name$ != other.$property_name$) return false;\n';
  if (descriptor_->type() == FieldDescriptor::TYPE_FLOAT) {
    text = 'if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals($property_name$, other.$property_name$)) return false;\n';
  } else if (descriptor_->type() == FieldDescriptor::TYPE_DOUBLE) {
    text = 'if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals($property_name$, other.$property_name$)) return false;\n';
  }
  printer->Print(variables_, text);
}
void PrimitiveFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(
    variables_,
    'PrintField(\'$descriptor_name$\', $has_property_check$, $property_name$, writer);\n');
}
    
    class PrimitiveOneofFieldGenerator : public PrimitiveFieldGenerator {
 public:
  PrimitiveOneofFieldGenerator(const FieldDescriptor* descriptor,
                               int fieldOrdinal,
                               const Options *options);
  ~PrimitiveOneofFieldGenerator();
    }
    
      // Oneofs
  if (descriptor->oneof_decl_count() > 0) {
      std::vector<std::string> oneofs;
      for (int i = 0; i < descriptor->oneof_decl_count(); i++) {
          oneofs.push_back(UnderscoresToCamelCase(descriptor->oneof_decl(i)->name(), true));
      }
      printer->Print('new[]{ \'$oneofs$\' }, ', 'oneofs', JoinStrings(oneofs, '\', \''));
  }
  else {
      printer->Print('null, ');
  }
    
    namespace tesseract {
    }
    
    
    {}  // namespace tesseract.

    
      bool has_leaders;   // does the line contain leader dots (.....)?
  bool has_drop_cap;  // does the line have a drop cap?
  int pix_ldistance;  // distance to the left pblock boundary in pixels
  int pix_rdistance;  // distance to the right pblock boundary in pixels
  float pix_xheight;  // guessed xheight for the line
  int average_interword_space; // average space between words in pixels.
    
    
    {  while ((n > 0) && reqd_len < full_length) {
    reqd_len += strcspn(next_word, '_') + 1;
    next_word += reqd_len;
    n--;
  }
  strncpy(t, s, reqd_len);
  t[reqd_len] = '\0';            // ensure null terminal
}
    
    
    {  // Restore the pointer to original blamer bundle and combine blamer
  // information recorded in the splits.
  if (orig_bb != nullptr) {
    orig_bb->JoinBlames(*word->blamer_bundle, *word2->blamer_bundle,
                        wordrec_debug_blamer);
    delete word->blamer_bundle;
    word->blamer_bundle = orig_bb;
  }
  word->SetupBoxWord();
  word->reject_map.initialise(word->box_word->length());
  delete word2;
}
    
    
    {  vector<int> y_shape(in[0].dims().begin(), in[0].dims().end());
  CAFFE_ENFORCE_LE(canonical_axis + 1, y_shape.size());
  y_shape.resize(canonical_axis + 1);
  y_shape[canonical_axis] = N;
  out[0] = CreateTensorShape(y_shape, in[0].data_type());
  return out;
}
    
        const auto dupSize = dupIndices.size();
    auto* output = Output(0);
    output->Resize(dupSize);
    auto* out_ptr = output->template mutable_data<int64_t>();
    for (int64_t i = 0; i < dupSize; ++i) {
      out_ptr[i] = dupIndices[i];
    }
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
       friend inline bool operator == (const file_iterator& f1, const file_iterator& f2)
   {
      return ((f1.ref->hf == _fi_invalid_handle) && (f2.ref->hf == _fi_invalid_handle));
   }
    
    template <class T>
struct regex_iterator_traits 
{
  typedef typename T::iterator_category iterator_category;
  typedef typename T::value_type        value_type;
#if !defined(BOOST_NO_STD_ITERATOR)
  typedef typename T::difference_type   difference_type;
  typedef typename T::pointer           pointer;
  typedef typename T::reference         reference;
#else
  typedef std::ptrdiff_t                difference_type;
  typedef value_type*                   pointer;
  typedef value_type&                   reference;
#endif
};
    
    
    {} match_flags;
    
    enum saved_state_type
{
   saved_type_end = 0,
   saved_type_paren = 1,
   saved_type_recurse = 2,
   saved_type_assertion = 3,
   saved_state_alt = 4,
   saved_state_repeater_count = 5,
   saved_state_extra_block = 6,
   saved_state_greedy_single_repeat = 7,
   saved_state_rep_slow_dot = 8,
   saved_state_rep_fast_dot = 9,
   saved_state_rep_char = 10,
   saved_state_rep_short_set = 11,
   saved_state_rep_long_set = 12,
   saved_state_non_greedy_long_repeat = 13, 
   saved_state_count = 14
};
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_commit()
{
   // Ideally we would just junk all the states that are on the stack,
   // however we might not unwind correctly in that case, so for now,
   // just mark that we don't backtrack into whatever is left (or rather
   // we'll unwind it unconditionally without pausing to try other matches).
    }
    
    
    {   if(take_first)
   {
      // we can take the first alternative,
      // see if we need to push next alternative:
      if(take_second)
      {
         BidiIterator oldposition(position);
         const re_syntax_base* old_pstate = jmp->alt.p;
         pstate = pstate->next.p;
         m_have_then = false;
         if(!match_all_states())
         {
            pstate = old_pstate;
            position = oldposition;
            if(m_have_then)
            {
               m_can_backtrack = true;
               m_have_then = false;
               return false;
            }
         }
         m_have_then = false;
         return m_can_backtrack;
      }
      pstate = pstate->next.p;
      return true;
   }
   if(take_second)
   {
      pstate = jmp->alt.p;
      return true;
   }
   return false;  // neither option is possible
}
    
    
    
    template <class ST, class SA, class Allocator, class charT, class traits>
inline bool regex_match(const std::basic_string<charT, ST, SA>& s, 
                 match_results<typename std::basic_string<charT, ST, SA>::const_iterator, Allocator>& m, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
template <class charT, class traits>
inline bool regex_match(const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   match_results<const charT*> m;
   return regex_match(str, str + traits::length(str), m, e, flags | regex_constants::match_any);
}
    
    template <class traits, class charT, class Formatter>
std::basic_string<charT> regex_replace(const std::basic_string<charT>& s,
                         const basic_regex<charT, traits>& e, 
                         Formatter fmt,
                         match_flag_type flags = match_default)
{
   std::basic_string<charT> result;
   BOOST_REGEX_DETAIL_NS::string_out_iterator<std::basic_string<charT> > i(result);
   regex_replace(i, s.begin(), s.end(), e, fmt, flags);
   return result;
}
    
    template <class BidirectionalIterator, 
          class charT = BOOST_DEDUCED_TYPENAME BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::value_type,
          class traits = regex_traits<charT> >
class regex_token_iterator 
#ifndef BOOST_NO_STD_ITERATOR
   : public std::iterator<
         std::forward_iterator_tag, 
         sub_match<BidirectionalIterator>,
         typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::difference_type,
         const sub_match<BidirectionalIterator>*,
         const sub_match<BidirectionalIterator>& >         
#endif
{
private:
   typedef regex_token_iterator_implementation<BidirectionalIterator, charT, traits> impl;
   typedef shared_ptr<impl> pimpl;
public:
   typedef          basic_regex<charT, traits>                   regex_type;
   typedef          sub_match<BidirectionalIterator>                        value_type;
   typedef typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::difference_type 
                                                                            difference_type;
   typedef          const value_type*                                       pointer;
   typedef          const value_type&                                       reference; 
   typedef          std::forward_iterator_tag                               iterator_category;
   
   regex_token_iterator(){}
   regex_token_iterator(BidirectionalIterator a, BidirectionalIterator b, const regex_type& re, 
                        int submatch = 0, match_flag_type m = match_default)
                        : pdata(new impl(&re, b, submatch, m))
   {
      if(!pdata->init(a))
         pdata.reset();
   }
   regex_token_iterator(BidirectionalIterator a, BidirectionalIterator b, const regex_type& re, 
                        const std::vector<int>& submatches, match_flag_type m = match_default)
                        : pdata(new impl(&re, b, submatches, m))
   {
      if(!pdata->init(a))
         pdata.reset();
   }
#if !BOOST_WORKAROUND(__HP_aCC, < 60700)
#if (BOOST_WORKAROUND(__BORLANDC__, >= 0x560) && BOOST_WORKAROUND(__BORLANDC__, BOOST_TESTED_AT(0x570)))\
      || BOOST_WORKAROUND(__MWERKS__, BOOST_TESTED_AT(0x3003)) \
      || BOOST_WORKAROUND(__HP_aCC, < 60700)
   template <class T>
   regex_token_iterator(BidirectionalIterator a, BidirectionalIterator b, const regex_type& re,
                        const T& submatches, match_flag_type m = match_default)
                        : pdata(new impl(&re, b, submatches, m))
   {
      if(!pdata->init(a))
         pdata.reset();
   }
#else
   template <std::size_t N>
   regex_token_iterator(BidirectionalIterator a, BidirectionalIterator b, const regex_type& re,
                        const int (&submatches)[N], match_flag_type m = match_default)
                        : pdata(new impl(&re, b, submatches, m))
   {
      if(!pdata->init(a))
         pdata.reset();
   }
#endif
#endif
   regex_token_iterator(const regex_token_iterator& that)
      : pdata(that.pdata) {}
   regex_token_iterator& operator=(const regex_token_iterator& that)
   {
      pdata = that.pdata;
      return *this;
   }
   bool operator==(const regex_token_iterator& that)const
   { 
      if((pdata.get() == 0) || (that.pdata.get() == 0))
         return pdata.get() == that.pdata.get();
      return pdata->compare(*(that.pdata.get())); 
   }
   bool operator!=(const regex_token_iterator& that)const
   { return !(*this == that); }
   const value_type& operator*()const
   { return pdata->get(); }
   const value_type* operator->()const
   { return &(pdata->get()); }
   regex_token_iterator& operator++()
   {
      cow();
      if(0 == pdata->next())
      {
         pdata.reset();
      }
      return *this;
   }
   regex_token_iterator operator++(int)
   {
      regex_token_iterator result(*this);
      ++(*this);
      return result;
   }
private:
    }
    
    
    {template<typename IndexType, typename DType = real_t>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    
    {inline Float8 round(const Float8& x) {
  return Float8(_mm256_round_ps(x.x, _MM_FROUND_TO_NEAREST_INT));
}
}  // namespace avx
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
  }
    
    
    { private:
  std::istream &fin_;
};
    
    /*! \brief collection of rowset */
class RowSetCollection {
 public:
  /*! \brief data structure to store an instance set, a subset of
   *  rows (instances) associated with a particular node in a decision
   *  tree. */
  struct Elem {
    const size_t* begin{nullptr};
    const size_t* end{nullptr};
    int node_id{-1};
      // id of node associated with this instance set; -1 means uninitialized
    Elem()
         = default;
    Elem(const size_t* begin,
         const size_t* end,
         int node_id)
        : begin(begin), end(end), node_id(node_id) {}
    }
    }
    
      std::vector<std::string> DumpModel(const FeatureMap& fmap, bool with_stats,
                                     std::string format) const {
    std::vector<std::string> dump;
    for (const auto & tree : trees) {
      dump.push_back(tree->DumpModel(fmap, with_stats, format));
    }
    return dump;
  }
  void CommitModel(std::vector<std::unique_ptr<RegTree> >&& new_trees,
                   int bst_group) {
    for (auto & new_tree : new_trees) {
      trees.push_back(std::move(new_tree));
      tree_info.push_back(bst_group);
    }
    param.num_trees += static_cast<int>(new_trees.size());
  }
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    namespace xgboost {
    }
    
    BENCHMARK_PARAM(BENCHFUN(insertFront), 16)
BENCHMARK_PARAM(BENCHFUN(insertFront), 128)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024)
BENCHMARK_PARAM(BENCHFUN(insertFront), 10240)
BENCHMARK_PARAM(BENCHFUN(insertFront), 102400)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024000)
    
    #define FOLLY_SDT_DECLARE_SEMAPHORE(provider, name)                            \
  extern 'C' volatile unsigned short FOLLY_SDT_SEMAPHORE(provider, name)
    
    // Check a Posix return code (0 on success, error number on error), throw
// on error.
template <class... Args>
void checkPosixError(int err, Args&&... args) {
  if (UNLIKELY(err != 0)) {
    throwSystemErrorExplicit(err, std::forward<Args>(args)...);
  }
}
    
    namespace folly {
    }
    
    exception_wrapper::VTable const exception_wrapper::SharedPtr::ops_{
    copy_,
    move_,
    delete_,
    throw_,
    type_,
    get_exception_,
    get_exception_ptr_};
    
    #include <folly/Executor.h>
    
    #pragma once
    
      // We don't use std::chrono_literals suffixes here since older
  // gcc versions silently truncate the literals to 32-bits.
  ts = to<struct timespec>(nanoseconds(987654321012LL));
  EXPECT_EQ(987, ts.tv_sec);
  EXPECT_EQ(654321012, ts.tv_nsec);
    
    struct Options {
  /**
   * ZLIB: default option -- write a zlib wrapper as documented in RFC 1950.
   *
   * GZIP: write a simple gzip header and trailer around the compressed data
   * instead of a zlib wrapper.
   *
   * RAW: deflate will generate raw deflate data with no zlib header or
   * trailer, and will not compute a check value.
   *
   * AUTO: enable automatic header detection for decoding gzip or zlib data.
   * For deflation, ZLIB will be used.
   */
  enum class Format { ZLIB, GZIP, RAW, AUTO };
    }
    
    
    {  return func;
#endif
}
    
      static void clear(Data& data);
    
    DHTReplaceNodeTask::~DHTReplaceNodeTask() = default;
    
    DHTResponseMessage::~DHTResponseMessage() = default;
    
    
    {} // namespace aria2
    
    DHTRoutingTableSerializer::~DHTRoutingTableSerializer() = default;
    
    DHTSetup::DHTSetup() = default;
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    
    {} // namespace aria2
    
    namespace aria2 {
    }
    
    DHTUnknownMessage::DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                                     const unsigned char* data, size_t length,
                                     const std::string& ipaddr, uint16_t port)
    : DHTMessage(localNode, std::shared_ptr<DHTNode>()),
      length_(length),
      ipaddr_(ipaddr),
      port_(port)
{
  if (length_ == 0) {
    data_ = nullptr;
  }
  else {
    data_ = new unsigned char[length];
    memcpy(data_, data, length);
  }
}