
        
        bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv) {
  const base::CommandLine::StringType dashdash(2, '-');
  bool block_args = false;
  for (int i = 0; i < argc; ++i) {
    if (argv[i] == dashdash)
      break;
    if (block_args) {
      return false;
    } else if (IsUrlArg(argv[i])) {
      block_args = true;
    }
  }
  return true;
}
    
     protected:
  explicit BoxLayout(views::BoxLayout::Orientation orientation);
  ~BoxLayout() override;
    
    #endif  // ATOM_BROWSER_API_ATOM_API_GLOBAL_SHORTCUT_H_

    
    
    {  DISALLOW_COPY_AND_ASSIGN(LayoutManager);
};
    
        QMenu *dockMenu();
    void setIcon(const QIcon &icon);
    void setMainWindow(QMainWindow *window);
    static MacDockIconHandler *instance();
    static void cleanup();
    void handleDockIconClickEvent();
    
    /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
    #endif // BITCOIN_REVERSELOCK_H

    
    static void secp256k1_gej_rescale(secp256k1_gej *r, const secp256k1_fe *s) {
    /* Operations: 4 mul, 1 sqr */
    secp256k1_fe zz;
    VERIFY_CHECK(!secp256k1_fe_is_zero(s));
    secp256k1_fe_sqr(&zz, s);
    secp256k1_fe_mul(&r->x, &r->x, &zz);                /* r->x *= s^2 */
    secp256k1_fe_mul(&r->y, &r->y, &zz);
    secp256k1_fe_mul(&r->y, &r->y, s);                  /* r->y *= s^3 */
    secp256k1_fe_mul(&r->z, &r->z, s);                  /* r->z *= s   */
}
    
    /** Perform one SHA-256 transformation, processing 16 big endian 32-bit words. */
static void secp256k1_sha256_transform(uint32_t* s, const uint32_t* chunk) {
    uint32_t a = s[0], b = s[1], c = s[2], d = s[3], e = s[4], f = s[5], g = s[6], h = s[7];
    uint32_t w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15;
    }
    
    void test_bad_scalar(void) {
    unsigned char s_zero[32] = { 0 };
    unsigned char s_overflow[32] = {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
        0xba, 0xae, 0xdc, 0xe6, 0xaf, 0x48, 0xa0, 0x3b,
        0xbf, 0xd2, 0x5e, 0x8c, 0xd0, 0x36, 0x41, 0x41
    };
    unsigned char s_rand[32] = { 0 };
    unsigned char output[32];
    secp256k1_scalar rand;
    secp256k1_pubkey point;
    }
    
    BOOST_FIXTURE_TEST_SUITE(bech32_tests, BasicTestingSetup)
    
    BOOST_AUTO_TEST_CASE(util_ParseTorReplyMapping)
{
    // Data we should receive during normal usage
    CheckParseTorReplyMapping(
        'METHODS=COOKIE,SAFECOOKIE COOKIEFILE=\'/home/x/.tor/control_auth_cookie\'', {
            {'METHODS', 'COOKIE,SAFECOOKIE'},
            {'COOKIEFILE', '/home/x/.tor/control_auth_cookie'},
        });
    CheckParseTorReplyMapping(
        'METHODS=NULL', {
            {'METHODS', 'NULL'},
        });
    CheckParseTorReplyMapping(
        'METHODS=HASHEDPASSWORD', {
            {'METHODS', 'HASHEDPASSWORD'},
        });
    CheckParseTorReplyMapping(
        'Tor=\'0.2.9.8 (git-a0df013ea241b026)\'', {
            {'Tor', '0.2.9.8 (git-a0df013ea241b026)'},
        });
    CheckParseTorReplyMapping(
        'SERVERHASH=aaaa SERVERNONCE=bbbb', {
            {'SERVERHASH', 'aaaa'},
            {'SERVERNONCE', 'bbbb'},
        });
    CheckParseTorReplyMapping(
        'ServiceID=exampleonion1234', {
            {'ServiceID', 'exampleonion1234'},
        });
    CheckParseTorReplyMapping(
        'PrivateKey=RSA1024:BLOB', {
            {'PrivateKey', 'RSA1024:BLOB'},
        });
    CheckParseTorReplyMapping(
        'ClientAuth=bob:BLOB', {
            {'ClientAuth', 'bob:BLOB'},
        });
    }
    
    bool ParseInt64(const std::string& str, int64_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtoll will not set errno if valid
    long long int n = strtoll(str.c_str(), &endp, 10);
    if(out) *out = (int64_t)n;
    // Note that strtoll returns a *long long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int64_t*.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int64_t>::min() &&
        n <= std::numeric_limits<int64_t>::max();
}
    
        UniValue numTest;
    BOOST_CHECK(numTest.setNumStr('82'));
    BOOST_CHECK(numTest.isNum());
    BOOST_CHECK_EQUAL(numTest.getValStr(), '82');
    
    #define IPC_MESSAGE_START ShellMsgStart
    
    
    {
    {
    {      rph->Send(new ViewMsg_WillQuit(&no_use));
    }
    CloseAllWindows(true);
  }
  // Then quit.
  MessageLoop::current()->PostTask(FROM_HERE, MessageLoop::QuitClosure());
}
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
    void Clipboard::CallSync(const std::string& method,
                         const base::ListValue& arguments,
                         base::ListValue* result) {
  if (method == 'Get') {
    result->AppendString(GetText());
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    base::string16 MenuDelegate::GetLabelForCommandId(int command_id) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  return item->label_;
}
    
          if (data.type == TYPE_PNG &&
         !gfx::PNGCodec::EncodeBGRASkBitmap(bitmap, false, &encoded_image)) {
        LOG(INFO) << 'NwClipboardGetSyncFunction::RunSync(' << nwapi::nw__clipboard::ToString(data.type) << ') failed when converting to PNG';
        error_ = 'Failed to encode as PNG';
        return false;
      } else if (data.type == TYPE_JPEG &&
                 !gfx::JPEGCodec::Encode(bitmap, kQuality, &encoded_image)) {
        LOG(INFO) << 'NwClipboardGetSyncFunction::RunSync(' << nwapi::nw__clipboard::ToString(data.type) << ') failed when converting to JPEG';
        error_ = 'Failed to encode as JPEG';
        return false;
      }
    
    #include 'extensions/browser/extension_function.h'
    
    #include <vector>
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
    
    { private:
  grpc_channel_credentials* const c_creds_;
};
    
    
    {}  // namespace grpc

    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H */

    
    absl::string_view StatusCodeToString(grpc_status_code code) {
  switch (code) {
    case GRPC_STATUS_OK:
      return 'OK';
    case GRPC_STATUS_CANCELLED:
      return 'CANCELLED';
    case GRPC_STATUS_UNKNOWN:
      return 'UNKNOWN';
    case GRPC_STATUS_INVALID_ARGUMENT:
      return 'INVALID_ARGUMENT';
    case GRPC_STATUS_DEADLINE_EXCEEDED:
      return 'DEADLINE_EXCEEDED';
    case GRPC_STATUS_NOT_FOUND:
      return 'NOT_FOUND';
    case GRPC_STATUS_ALREADY_EXISTS:
      return 'ALREADY_EXISTS';
    case GRPC_STATUS_PERMISSION_DENIED:
      return 'PERMISSION_DENIED';
    case GRPC_STATUS_UNAUTHENTICATED:
      return 'UNAUTHENTICATED';
    case GRPC_STATUS_RESOURCE_EXHAUSTED:
      return 'RESOURCE_EXHAUSTED';
    case GRPC_STATUS_FAILED_PRECONDITION:
      return 'FAILED_PRECONDITION';
    case GRPC_STATUS_ABORTED:
      return 'ABORTED';
    case GRPC_STATUS_OUT_OF_RANGE:
      return 'OUT_OF_RANGE';
    case GRPC_STATUS_UNIMPLEMENTED:
      return 'UNIMPLEMENTED';
    case GRPC_STATUS_INTERNAL:
      return 'INTERNAL';
    case GRPC_STATUS_UNAVAILABLE:
      return 'UNAVAILABLE';
    case GRPC_STATUS_DATA_LOSS:
      return 'DATA_LOSS';
    default:
      // gRPC wants users of this enum to include a default branch so that
      // adding values is not a breaking change.
      return 'UNKNOWN_STATUS';
  }
}
    
    // Client
MeasureDouble RpcClientSentBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientSentBytesPerRpcMeasureName,
      'Total bytes sent across all request messages per RPC', kUnitBytes);
  return measure;
}
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
      static void ParseIniFile(const std::string &filename,
                           const bool is_system = true);
  static void ParseIniFile(const std::string &filename, IniSettingMap &ini,
                           const bool constants_only = false,
                           const bool is_system = true);
    
    #include <memory>
    
    public:
  virtual ~IDebuggable() {}
    
    static int get_tempfile_if_not_exists(int ini_fd, char ini_path[]) {
  if (ini_fd == -1) {
#ifdef _MSC_VER
    // MSVC doesn't require the characters to be the last
    // 6 in the string.
    ini_fd = open(mktemp(ini_path), O_RDWR | O_EXCL);
#else
    ini_fd = mkstemps(ini_path, 4); // keep the .ini suffix
#endif
    if (ini_fd == -1) {
      fprintf(stderr, 'Error: unable to open temporary file');
      exit(EXIT_FAILURE);
    }
  }
  return ini_fd;
}
    
    //////////////////////////////////////////////////////////////////////
    
      dirent *e;
  while ((e = readdir(dir))) {
    char *ename = e->d_name;
    }
    
    
    
    
    
    #endif
    
    private:
   // final result structure to be filled in:
   match_results<BidiIterator, Allocator>& m_result;
   // temporary result for POSIX matches:
   scoped_ptr<match_results<BidiIterator, Allocator> > m_temp_match;
   // pointer to actual result structure to fill in:
   match_results<BidiIterator, Allocator>* m_presult;
   // start of sequence being searched:
   BidiIterator base;
   // end of sequence being searched:
   BidiIterator last; 
   // current character being examined:
   BidiIterator position;
   // where to restart next search after failed match attempt:
   BidiIterator restart;
   // where the current search started from, acts as base for $` during grep:
   BidiIterator search_base;
   // how far we can go back when matching lookbehind:
   BidiIterator backstop;
   // the expression being examined:
   const basic_regex<char_type, traits>& re;
   // the expression's traits class:
   const ::boost::regex_traits_wrapper<traits>& traits_inst;
   // the next state in the machine being matched:
   const re_syntax_base* pstate;
   // matching flags in use:
   match_flag_type m_match_flags;
   // how many states we have examined so far:
   std::ptrdiff_t state_count;
   // max number of states to examine before giving up:
   std::ptrdiff_t max_state_count;
   // whether we should ignore case or not:
   bool icase;
   // set to true when (position == last), indicates that we may have a partial match:
   bool m_has_partial_match;
   // set to true whenever we get a match:
   bool m_has_found_match;
   // set to true whenever we're inside an independent sub-expression:
   bool m_independent;
   // the current repeat being examined:
   repeater_count<BidiIterator>* next_count;
   // the first repeat being examined (top of linked list):
   repeater_count<BidiIterator> rep_obj;
   // the mask to pass when matching word boundaries:
   typename traits::char_class_type m_word_mask;
   // the bitmask to use when determining whether a match_any matches a newline or not:
   unsigned char match_any_mask;
   // recursion information:
   std::vector<recursion_info<results_type> > recursion_stack;
#ifdef BOOST_REGEX_RECURSIVE
   // Set to false by a (*COMMIT):
   bool m_can_backtrack;
   bool m_have_accept;
   bool m_have_then;
#endif
#ifdef BOOST_REGEX_NON_RECURSIVE
   //
   // additional members for non-recursive version:
   //
   typedef bool (self_type::*unwind_proc_type)(bool);
    
    
    {   if(greedy)
   {
      if((rep->leading) && (count < rep->max))
         restart = position;
      // push backtrack info if available:
      if(count - rep->min)
         push_single_repeat(count, rep, position, saved_state_greedy_single_repeat);
      // jump to next state:
      pstate = rep->alt.p;
      return true;
   }
   else
   {
      // non-greedy, push state and return true if we can skip:
      if(count < rep->max)
         push_single_repeat(count, rep, position, saved_state_rep_short_set);
      pstate = rep->alt.p;
      return (position == last) ? (rep->can_be_null & mask_skip) : can_start(*position, rep->_map, mask_skip);
   }
#ifdef __BORLANDC__
#pragma option pop
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    template <class BidiIterator>
class backup_subex
{
   int index;
   sub_match<BidiIterator> sub;
public:
   template <class A>
   backup_subex(const match_results<BidiIterator, A>& w, int i)
      : index(i), sub(w[i], false) {}
   template <class A>
   void restore(match_results<BidiIterator, A>& w)
   {
      w.set_first(sub.first, index, index == 0);
      w.set_second(sub.second, index, sub.matched, index == 0);
   }
   const sub_match<BidiIterator>& get() { return sub; }
};
    
       inline typename Results::value_type const& get_named_sub(ForwardIter i, ForwardIter j, const mpl::false_&)
   {
      std::vector<char_type> v(i, j);
      return (i != j) ? this->m_results.named_subexpression(&v[0], &v[0] + v.size())
         : this->m_results.named_subexpression(static_cast<const char_type*>(0), static_cast<const char_type*>(0));
   }
   inline typename Results::value_type const& get_named_sub(ForwardIter i, ForwardIter j, const mpl::true_&)
   {
      return this->m_results.named_subexpression(i, j);
   }
   inline typename Results::value_type const& get_named_sub(ForwardIter i, ForwardIter j)
   {
      typedef typename boost::is_convertible<ForwardIter, const char_type*>::type tag_type;
      return get_named_sub(i, j, tag_type());
   }
   inline int get_named_sub_index(ForwardIter i, ForwardIter j, const mpl::false_&)
   {
      std::vector<char_type> v(i, j);
      return (i != j) ? this->m_results.named_subexpression_index(&v[0], &v[0] + v.size())
         : this->m_results.named_subexpression_index(static_cast<const char_type*>(0), static_cast<const char_type*>(0));
   }
   inline int get_named_sub_index(ForwardIter i, ForwardIter j, const mpl::true_&)
   {
      return this->m_results.named_subexpression_index(i, j);
   }
   inline int get_named_sub_index(ForwardIter i, ForwardIter j)
   {
      typedef typename boost::is_convertible<ForwardIter, const char_type*>::type tag_type;
      return get_named_sub_index(i, j, tag_type());
   }
#ifdef BOOST_MSVC
   // msvc-8.0 issues a spurious warning on the call to std::advance here:
#pragma warning(push)
#pragma warning(disable:4244)
#endif
   inline int toi(ForwardIter& i, ForwardIter j, int base, const boost::mpl::false_&)
   {
      if(i != j)
      {
         std::vector<char_type> v(i, j);
         const char_type* start = &v[0];
         const char_type* pos = start;
         int r = m_traits.toi(pos, &v[0] + v.size(), base);
         std::advance(i, pos - start);
         return r;
      }
      return -1;
   }
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
   inline int toi(ForwardIter& i, ForwardIter j, int base, const boost::mpl::true_&)
   {
      return m_traits.toi(i, j, base);
   }
   inline int toi(ForwardIter& i, ForwardIter j, int base)
   {
#if defined(_MSC_VER) && defined(__INTEL_COMPILER) && ((__INTEL_COMPILER == 9999) || (__INTEL_COMPILER == 1210))
      // Workaround for Intel support issue #656654.
      // See also https://svn.boost.org/trac/boost/ticket/6359
      return toi(i, j, base, mpl::false_());
#else
      typedef typename boost::is_convertible<ForwardIter, const char_type*&>::type tag_type;
      return toi(i, j, base, tag_type());
#endif
   }
    
    //
// regex_grep convenience interfaces:
#ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING
//
// this isn't really a partial specialisation, but template function
// overloading - if the compiler doesn't support partial specialisation
// then it really won't support this either:
template <class Predicate, class charT, class traits>
inline unsigned int regex_grep(Predicate foo, const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, str, str + traits::length(str), e, flags);
}
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_raw_buffer.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Raw character buffer for regex code.
  *                Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    #endif // BOOST_NO_WREGEX
    
    namespace boost{
    }
    
    #include <boost/shared_ptr.hpp>
#include <boost/detail/workaround.hpp>
#if (BOOST_WORKAROUND(__BORLANDC__, >= 0x560) && BOOST_WORKAROUND(__BORLANDC__, BOOST_TESTED_AT(0x570)))\
      || BOOST_WORKAROUND(__MWERKS__, BOOST_TESTED_AT(0x3003))
//
// Borland C++ Builder 6, and Visual C++ 6,
// can't cope with the array template constructor
// so we have a template member that will accept any type as 
// argument, and then assert that is really is an array:
//
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_array.hpp>
#endif
    
      virtual void PredictContribution(DMatrix* dmat,
                                   std::vector<bst_float>* out_contribs,
                                   const gbm::GBTreeModel& model,
                                   unsigned ntree_limit = 0,
                                   bool approximate = false,
                                   int condition = 0,
                                   unsigned condition_feature = 0) = 0;
    
     private:
  char ch_buf_;
  std::string s_name_, s_val_, s_buf_;
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    #if DMLC_ENABLE_STD_THREAD
#include <dmlc/concurrency.h>
#include <thread>
#endif
    
        // convert to 'diffs' to 'reverse absolute'
    
    
    {    return action;
}
    
    CallFunc * CallFunc::reverse() const
{
    // no reverse here, just return a clone
    return this->clone();
}
    
    void ActionManager::addAction(Action *action, Node *target, bool paused)
{
    CCASSERT(action != nullptr, 'action can't be nullptr!');
    CCASSERT(target != nullptr, 'target can't be nullptr!');
    if(action == nullptr || target == nullptr)
        return;
    }
    
        /** Removes all actions matching at least one bit in flags and the target.
     *
     * @param flags     The flag field to match the actions' flags based on bitwise AND.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeActionsByFlags(unsigned int flags, Node *target);
    
        /**
    @brief Get the amplitude of the effect.
    @return Return the amplitude of the effect.
    */
    float getAmplitude() const { return _amplitude; }
    /**
    @brief Set the amplitude to the effect.
    @param amplitude The value of amplitude will be set.
    */
    void setAmplitude(float amplitude) { _amplitude = amplitude; }
    
    AnimationFrame* AnimationFrame::clone() const
{
    // no copy constructor
    auto frame = new (std::nothrow) AnimationFrame();
    frame->initWithSpriteFrame(_spriteFrame->clone(),
                               _delayUnits,
                               _userInfo);
    }
    
        /** Adds a SpriteFrame to a Animation.
     *
     * @param frame The frame will be added with one 'delay unit'.
     */
    void addSpriteFrame(SpriteFrame *frame);
    
    using namespace std;
    
    void AtlasNode::updateOpacityModifyRGB()
{
    _isOpacityModifyRGB = _textureAtlas->getTexture()->hasPremultipliedAlpha();
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.