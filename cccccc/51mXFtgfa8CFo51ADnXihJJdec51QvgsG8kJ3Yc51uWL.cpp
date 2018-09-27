
        
        #include <cstdint>      // for int32_t
    
     protected:
  // Function to compute part of a matrix.vector multiplication. The weights
  // are in a very specific order (see above) in w, which is multiplied by
  // u of length num_in, to produce output v after scaling the integer results
  // by the corresponding member of scales.
  // The amount of w and scales consumed is fixed and not available to the
  // caller. The number of outputs written to v will be at most num_out.
  typedef void (*PartialFunc)(const int8_t* w, const double* scales,
                              const int8_t* u, int num_in, int num_out,
                              double* v);
    
    #undef X86_BUILD
#if defined(__x86_64__) || defined(__i386__) || defined(_WIN32)
#if !defined(ANDROID_BUILD)
#define X86_BUILD 1
#endif  // !ANDROID_BUILD
#endif  // x86 target
    
    template <typename T> class GenericVector;
    
    namespace tesseract {
  class Tesseract;
}
    
      // blow away the copied chopped_word, as we want to work with
  // the blobs from the input chopped_word so seam_arrays can be merged.
  TWERD *chopped = word->chopped_word;
  TWERD *chopped2 = new TWERD;
  chopped2->blobs.reserve(chopped->NumBlobs() - split_pt);
  for (int i = split_pt; i < chopped->NumBlobs(); ++i) {
    chopped2->blobs.push_back(chopped->blobs[i]);
  }
  chopped->blobs.truncate(split_pt);
  word->chopped_word = nullptr;
  delete word2->chopped_word;
  word2->chopped_word = nullptr;
    
        template <typename T> 
    inline std::string GetVersionsString(size_t currentVersion, size_t dictVersion)
    {
        std::stringstream info;
        info << 'Current ' << Typename<T>() << ' version = ' << currentVersion 
             << ', Dictionary version = ' << dictVersion;
        return info.str();
    }
    
            static Dictionary Serialize(const FunctionPtr& f);
    
            ValuePtr DeepClone(bool readOnly) const override
        {
            if (m_isPacked)
            {
                std::shared_ptr<Microsoft::MSR::CNTK::MBLayout> packedLayoutCopy;
                if (m_packedDataLayout)
                {
                    packedLayoutCopy = std::make_shared<Microsoft::MSR::CNTK::MBLayout>();
                    packedLayoutCopy->CopyFrom(m_packedDataLayout);
                }
                return MakeSharedObject<PackedValue>(m_sampleShape, m_sampleDynamicAxes, m_packedData->DeepClone(readOnly), packedLayoutCopy, readOnly);
            }
            else
                return Value::DeepClone(readOnly);
        }
    
        typedef unsigned int INDEXTYPE; // don't use size_t, as this saves HUGE amounts of RAM
    std::vector<INDEXTYPE> map;     // [t] -> t' indices in randomized order
    size_t currentseed;             // seed for current sequence
    size_t randomizationrange;      // t - randomizationrange/2 <= t' < t + randomizationrange/2 (we support this to enable swapping)
                                    // special values (randomizeDisable)
    void Invalidate()
    {
        currentseed = (size_t) -1;
    }
    
    
    {            // Get the last QueryUrls and add the Url.
            QueryUrls& qub = m_queryUrls.back();
            Url u(i, qub.m_urls.size(), preds(0, i), gains(0, i));
            qub.m_urls.push_back(u);
        }
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::match_verb(const char* verb)
{
   while(*verb)
   {
      if(static_cast<charT>(*verb) != *m_position)
      {
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(++m_position == m_end)
      {
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      ++verb;
   }
   return true;
}
    
    template <class T>
struct pointer_iterator_traits
{
   typedef std::ptrdiff_t difference_type;
   typedef T value_type;
   typedef T* pointer;
   typedef T& reference;
   typedef std::random_access_iterator_tag iterator_category;
};
template <class T>
struct const_pointer_iterator_traits
{
   typedef std::ptrdiff_t difference_type;
   typedef T value_type;
   typedef const T* pointer;
   typedef const T& reference;
   typedef std::random_access_iterator_tag iterator_category;
};
    
       void BOOST_REGEX_CALL set_second(BidiIterator i, size_type pos, bool m = true, bool escape_k = false)
   {
      if(pos)
         m_last_closed_paren = static_cast<int>(pos);
      pos += 2;
      BOOST_ASSERT(m_subs.size() > pos);
      m_subs[pos].second = i;
      m_subs[pos].matched = m;
      if((pos == 2) && !escape_k)
      {
         m_subs[0].first = i;
         m_subs[0].matched = (m_subs[0].first != m_subs[0].second);
         m_null.first = i;
         m_null.second = i;
         m_null.matched = false;
         m_is_singular = false;
      }
   }
   void BOOST_REGEX_CALL set_size(size_type n, BidiIterator i, BidiIterator j)
   {
      value_type v(j);
      size_type len = m_subs.size();
      if(len > n + 2)
      {
         m_subs.erase(m_subs.begin()+n+2, m_subs.end());
         std::fill(m_subs.begin(), m_subs.end(), v);
      }
      else
      {
         std::fill(m_subs.begin(), m_subs.end(), v);
         if(n+2 != len)
            m_subs.insert(m_subs.end(), n+2-len, v);
      }
      m_subs[1].first = i;
      m_last_closed_paren = 0;
   }
   void BOOST_REGEX_CALL set_base(BidiIterator pos)
   {
      m_base = pos;
   }
   BidiIterator base()const
   {
      return m_base;
   }
   void BOOST_REGEX_CALL set_first(BidiIterator i)
   {
      BOOST_ASSERT(m_subs.size() > 2);
      // set up prefix:
      m_subs[1].second = i;
      m_subs[1].matched = (m_subs[1].first != i);
      // set up $0:
      m_subs[2].first = i;
      // zero out everything else:
      for(size_type n = 3; n < m_subs.size(); ++n)
      {
         m_subs[n].first = m_subs[n].second = m_subs[0].second;
         m_subs[n].matched = false;
      }
   }
   void BOOST_REGEX_CALL set_first(BidiIterator i, size_type pos, bool escape_k = false)
   {
      BOOST_ASSERT(pos+2 < m_subs.size());
      if(pos || escape_k)
      {
         m_subs[pos+2].first = i;
         if(escape_k)
         {
            m_subs[1].second = i;
            m_subs[1].matched = (m_subs[1].first != m_subs[1].second);
         }
      }
      else
         set_first(i);
   }
   void BOOST_REGEX_CALL maybe_assign(const match_results<BidiIterator, Allocator>& m);
    
    
    
       const re_repeat* rep = pmp->rep;
   std::size_t count = pmp->count;
   pstate = rep->next.p;
   const re_set_long<m_type>* set = static_cast<const re_set_long<m_type>*>(pstate);
   position = pmp->last_position;
    
    #endif
    
    
    {   // output varies depending upon whether sub-expression v matched or not:
   if(m_results[v].matched)
   {
      m_have_conditional = true;
      format_all();
      m_have_conditional = false;
      if((m_position != m_end) && (*m_position == static_cast<char_type>(':')))
      {
         // skip the ':':
         ++m_position;
         // save output state, then turn it off:
         output_state saved_state = m_state;
         m_state = output_none;
         // format the rest of this scope:
         format_until_scope_end();
         // restore output state:
         m_state = saved_state;
      }
   }
   else
   {
      // save output state, then turn it off:
      output_state saved_state = m_state;
      m_state = output_none;
      // format until ':' or ')':
      m_have_conditional = true;
      format_all();
      m_have_conditional = false;
      // restore state:
      m_state = saved_state;
      if((m_position != m_end) && (*m_position == static_cast<char_type>(':')))
      {
         // skip the ':':
         ++m_position;
         // format the rest of this scope:
         format_until_scope_end();
      }
   }
}
    
    #ifdef BOOST_REGEX_USE_WIN32_LOCALE
template <class charT, class implementationT = w32_regex_traits<charT> >
struct regex_traits;
#elif defined(BOOST_REGEX_USE_CPP_LOCALE)
template <class charT, class implementationT = cpp_regex_traits<charT> >
struct regex_traits;
#else
template <class charT, class implementationT = c_regex_traits<charT> >
struct regex_traits;
#endif
    
    
    
    template<>
struct padding3<4>
{
   enum{
      padding_size = 4,
      padding_mask = 3
   };
};
    
    
namespace boost{
    }
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    #include <gtest/gtest.h>
    
    #include <gtest/gtest.h>
    
    namespace rj = rapidjson;
    
    ProcessState PlatformProcess::checkStatus(int& status) const {
  int process_status = 0;
  if (!isValid()) {
    return PROCESS_ERROR;
  }
    }
    
    
    {  if (handle) {
    ::CloseHandle(handle);
  }
}
#else
TEST_F(ProcessTests, test_constructorPosix) {
  auto p = PlatformProcess(getpid());
  EXPECT_TRUE(p.isValid());
  EXPECT_EQ(p.nativeHandle(), getpid());
}
#endif
    
    TEST_F(QueryTests, test_get_query_results) {
  // Grab an expected set of query data and add it as the previous result.
  auto encoded_qd = getSerializedQueryDataJSON();
  auto query = getOsqueryScheduledQuery();
  auto status = setDatabaseValue(kQueries, 'foobar', encoded_qd.first);
  EXPECT_TRUE(status.ok());
    }