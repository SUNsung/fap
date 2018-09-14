
        
        
    {    if (tmp.handle_data().is_set()) {
      input_handle_shapes_and_types[i].reset(
          new std::vector<std::pair<TensorShapeProto, DataType>>);
      auto& v = *input_handle_shapes_and_types[i];
      for (const auto& x : tmp.handle_data().shape_and_type()) {
        v.emplace_back(x.shape(), x.dtype());
      }
    }
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Returns the Python exception type corresponding to `code`. Init() must be
  // called before using this function. `code` should not be TF_OK.
  static PyObject* Lookup(TF_Code code);
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_SAFE_PTR_H_

    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Returns the kernel class name required to execute <node_def> on the device
// type of <node_def.device>, or an empty string if the kernel class is not
// found or the device name is invalid.
string TryFindKernelClass(const string& serialized_node_def);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        QMenu *dockMenu();
    void setIcon(const QIcon &icon);
    void setMainWindow(QMainWindow *window);
    static MacDockIconHandler *instance();
    static void cleanup();
    void handleDockIconClickEvent();
    
        const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    
    {        return std::make_pair(dest, QString::fromStdString(EncodeDestination(dest)));
    };
    
            secp256k1_ecmult_const(&res, &pt, &s);
        secp256k1_ge_set_gej(&pt, &res);
        /* Compute a hash of the point in compressed form
         * Note we cannot use secp256k1_eckey_pubkey_serialize here since it does not
         * expect its output to be secret and has a timing sidechannel. */
        secp256k1_fe_normalize(&pt.x);
        secp256k1_fe_normalize(&pt.y);
        secp256k1_fe_get_b32(x, &pt.x);
        y[0] = 0x02 | secp256k1_fe_is_odd(&pt.y);
    
    BOOST_AUTO_TEST_CASE(get_difficulty_for_low_target)
{
    TestDifficulty(0x1ef88f6f, 0.000016);
}
    
        BOOST_CHECK(arr.push_backV(vec));
    
    
    {} // namespace nwapi

    
    #include 'base/logging.h'
#include 'base/strings/string_util.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_jump()
{
   pstate = static_cast<const re_jump*>(pstate)->alt.p;
   return true;
}
    
    
    {   int pos = 0;
   while((pos <= static_cast<int>(sa.size())) && (pos <= static_cast<int>(sA.size())) && (sa[pos] == sA[pos])) ++pos;
   --pos;
   if(pos < 0)
   {
      *delim = 0;
      return sort_unknown;
   }
   //
   // at this point sa[pos] is either the end of a fixed width field
   // or the character that acts as a delimiter:
   //
   charT maybe_delim = sa[pos];
   if((pos != 0) && (count_chars(sa, maybe_delim) == count_chars(sA, maybe_delim)) && (count_chars(sa, maybe_delim) == count_chars(sc, maybe_delim)))
   {
      *delim = maybe_delim;
      return sort_delim;
   }
   //
   // OK doen't look like a delimiter, try for fixed width field:
   //
   if((sa.size() == sA.size()) && (sa.size() == sc.size()))
   {
      // note assumes that the fixed width field is less than
      // (numeric_limits<charT>::max)(), should be true for all types
      // I can't imagine 127 character fields...
      *delim = static_cast<charT>(++pos);
      return sort_fixed;
   }
   //
   // don't know what it is:
   //
   *delim = 0;
   return sort_unknown;
}
    
    template <class OutputIterator, class Results, class traits, class ForwardIter>
void basic_regex_formatter<OutputIterator, Results, traits, ForwardIter>::format_escape()
{
   // skip the escape and check for trailing escape:
   if(++m_position == m_end)
   {
      put(static_cast<char_type>('\\'));
      return;
   }
   // now switch on the escape type:
   switch(*m_position)
   {
   case 'a':
      put(static_cast<char_type>('\a'));
      ++m_position;
      break;
   case 'f':
      put(static_cast<char_type>('\f'));
      ++m_position;
      break;
   case 'n':
      put(static_cast<char_type>('\n'));
      ++m_position;
      break;
   case 'r':
      put(static_cast<char_type>('\r'));
      ++m_position;
      break;
   case 't':
      put(static_cast<char_type>('\t'));
      ++m_position;
      break;
   case 'v':
      put(static_cast<char_type>('\v'));
      ++m_position;
      break;
   case 'x':
      if(++m_position == m_end)
      {
         put(static_cast<char_type>('x'));
         return;
      }
      // maybe have \x{ddd}
      if(*m_position == static_cast<char_type>('{'))
      {
         ++m_position;
         int val = this->toi(m_position, m_end, 16);
         if(val < 0)
         {
            // invalid value treat everything as literals:
            put(static_cast<char_type>('x'));
            put(static_cast<char_type>('{'));
            return;
         }
         if((m_position == m_end) || (*m_position != static_cast<char_type>('}')))
         {
            --m_position;
            while(*m_position != static_cast<char_type>('\\'))
               --m_position;
            ++m_position;
            put(*m_position++);
            return;
         }
         ++m_position;
         put(static_cast<char_type>(val));
         return;
      }
      else
      {
         std::ptrdiff_t len = ::boost::BOOST_REGEX_DETAIL_NS::distance(m_position, m_end);
         len = (std::min)(static_cast<std::ptrdiff_t>(2), len);
         int val = this->toi(m_position, m_position + len, 16);
         if(val < 0)
         {
            --m_position;
            put(*m_position++);
            return;
         }
         put(static_cast<char_type>(val));
      }
      break;
   case 'c':
      if(++m_position == m_end)
      {
         --m_position;
         put(*m_position++);
         return;
      }
      put(static_cast<char_type>(*m_position++ % 32));
      break;
   case 'e':
      put(static_cast<char_type>(27));
      ++m_position;
      break;
   default:
      // see if we have a perl specific escape:
      if((m_flags & boost::regex_constants::format_sed) == 0)
      {
         bool breakout = false;
         switch(*m_position)
         {
         case 'l':
            ++m_position;
            m_restore_state = m_state;
            m_state = output_next_lower;
            breakout = true;
            break;
         case 'L':
            ++m_position;
            m_state = output_lower;
            breakout = true;
            break;
         case 'u':
            ++m_position;
            m_restore_state = m_state;
            m_state = output_next_upper;
            breakout = true;
            break;
         case 'U':
            ++m_position;
            m_state = output_upper;
            breakout = true;
            break;
         case 'E':
            ++m_position;
            m_state = output_copy;
            breakout = true;
            break;
         }
         if(breakout)
            break;
      }
      // see if we have a \n sed style backreference:
      std::ptrdiff_t len = ::boost::BOOST_REGEX_DETAIL_NS::distance(m_position, m_end);
      len = (std::min)(static_cast<std::ptrdiff_t>(1), len);
      int v = this->toi(m_position, m_position+len, 10);
      if((v > 0) || ((v == 0) && (m_flags & ::boost::regex_constants::format_sed)))
      {
         put(m_results[v]);
         break;
      }
      else if(v == 0)
      {
         // octal ecape sequence:
         --m_position;
         len = ::boost::BOOST_REGEX_DETAIL_NS::distance(m_position, m_end);
         len = (std::min)(static_cast<std::ptrdiff_t>(4), len);
         v = this->toi(m_position, m_position + len, 8);
         BOOST_ASSERT(v >= 0);
         put(static_cast<char_type>(v));
         break;
      }
      // Otherwise output the character 'as is':
      put(*m_position++);
      break;
   }
}
    }
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_match.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Regular expression matching algorithms.
  *                Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    

    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1, class Traits2>
inline std::size_t regex_split(OutputIterator out,
                   std::basic_string<charT, Traits1, Alloc1>& s, 
                   const basic_regex<charT, Traits2>& e,
                   match_flag_type flags = match_default)
{
   return regex_split(out, s, e, flags, UINT_MAX);
}
    
    template <class BidirectionalIterator,
          class charT,
          class traits>
class regex_token_iterator_implementation 
{
   typedef basic_regex<charT, traits> regex_type;
   typedef sub_match<BidirectionalIterator>      value_type;
    }
    
    //
// class regex_traits_wrapper.
// this is what our implementation will actually store;
// it provides default implementations of the 'optional'
// interfaces that we support, in addition to the
// required 'standard' ones:
//
namespace BOOST_REGEX_DETAIL_NS{
#if !BOOST_WORKAROUND(__HP_aCC, < 60000)
BOOST_MPL_HAS_XXX_TRAIT_DEF(boost_extensions_tag)
#else
template<class T>
struct has_boost_extensions_tag
{
   BOOST_STATIC_CONSTANT(bool, value = false);
};
#endif
    }
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    
    {  return Status();
}
    
      // serialize the QueryLogItem and make sure decorations go top level
  auto doc = JSON::newObject();
  auto status = serializeQueryLogItem(item, doc);
  std::string expected = 'test';
  std::string result = doc.doc()['load_test'].GetString();
  EXPECT_EQ(result, expected);
    
    #include <osquery/config.h>
#include <osquery/database.h>
#include <osquery/registry.h>
    
    #include 'osquery/core/json.h'
#include 'osquery/tests/test_util.h'
    
    TEST_F(QueryTests, test_add_and_get_current_results) {
  // Test adding a 'current' set of results to a scheduled query instance.
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('foobar', query);
  uint64_t counter = 128;
  auto status = cf.addNewResults(getTestDBExpectedResults(), 0, counter);
  EXPECT_TRUE(status.ok());
  EXPECT_EQ(status.toString(), 'OK');
  EXPECT_EQ(counter, 0UL);
    }
    
    
    {
    {
    {
    {        if (queries_to_run.empty() || queries_to_run.count(name)) {
          setDatabaseValue(kQueries, kDistributedQueryPrefix + name, query);
        }
      }
    }
  }
  if (doc.doc().HasMember('accelerate')) {
    const auto& accelerate = doc.doc()['accelerate'];
    if (accelerate.IsInt()) {
      auto duration = accelerate.GetInt();
      LOG(INFO) << 'Accelerating distributed query checkins for ' << duration
                << ' seconds';
      setDatabaseValue(kPersistentSettings,
                       'distributed_accelerate_checkins_expire',
                       std::to_string(getUnixTime() + duration));
    } else {
      VLOG(1) << 'Falied to Accelerate: Timeframe is not an integer';
    }
  }
  return Status();
}
    
      free((char*)reply.message);
    
    #include <boost/atomic/detail/config.hpp>
    
    
    {
    {
    {} // namespace detail
} // namespace atomics
} // namespace mars_boost