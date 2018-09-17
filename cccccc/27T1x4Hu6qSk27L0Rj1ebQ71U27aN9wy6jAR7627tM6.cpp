
        
        
    {// TODO(nareshmodi): Move EagerCast and ReadVariableOp (which use the C API to
// execute TFE Ops) to a separate common library.
TFE_TensorHandle* EagerCast(TFE_Context* ctx, TFE_TensorHandle* handle,
                            TF_DataType src_type_enum,
                            TF_DataType dst_type_enum, TF_Status* out_status);
}
    
    
    {  return Status::OK();
}
    
    #include 'tensorflow/core/platform/env.h'
#include 'tensorflow/core/platform/null_file_system.h'
    
    REGISTER_OP('AttrBool')
    .Attr('a: bool')
    .SetShapeFn(shape_inference::UnknownShape);
    
    namespace tensorflow {
    }
    
    #include <Python.h>
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
namespace detail {
    }
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    template <class I>
struct is_random_access_iterator
{
private:
   typedef detail::is_random_imp_selector< ::boost::is_pointer<I>::value> selector;
   typedef typename selector::template rebind<I> bound_type;
   typedef typename bound_type::type answer;
public:
   BOOST_STATIC_CONSTANT(bool, value = answer::value);
};
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         mem_block_cache.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: memory block cache used by the non-recursive matcher.
  */
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_jump()
{
   pstate = static_cast<const re_jump*>(pstate)->alt.p;
   return true;
}
    
    namespace boost{
//
// class regbase
// handles error codes and flags
//
class BOOST_REGEX_DECL regbase
{
public:
   enum flag_type_
   {
      //
      // Divide the flags up into logical groups:
      // bits 0-7 indicate main synatx type.
      // bits 8-15 indicate syntax subtype.
      // bits 16-31 indicate options that are common to all
      // regex syntaxes.
      // In all cases the default is 0.
      //
      // Main synatx group:
      //
      perl_syntax_group = 0,                      // default
      basic_syntax_group = 1,                     // POSIX basic
      literal = 2,                                // all characters are literals
      main_option_type = literal | basic_syntax_group | perl_syntax_group, // everything!
      //
      // options specific to perl group:
      //
      no_bk_refs = 1 << 8,                        // \d not allowed
      no_perl_ex = 1 << 9,                        // disable perl extensions
      no_mod_m = 1 << 10,                         // disable Perl m modifier
      mod_x = 1 << 11,                            // Perl x modifier
      mod_s = 1 << 12,                            // force s modifier on (overrides match_not_dot_newline)
      no_mod_s = 1 << 13,                         // force s modifier off (overrides match_not_dot_newline)
    }
    }
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
  *   FILE         regex_grep.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_grep implementation.
  */
    
       match_results<BidirectionalIterator> what;  // current match
   BidirectionalIterator                base;  // start of sequence
   BidirectionalIterator                end;   // end of sequence
   const regex_type                     re;   // the expression
   match_flag_type                      flags; // flags for matching
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_search.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_search implementation.
  */
    
    #endif // include
    
    #pragma once
#ifndef ROCKSDB_LITE
#include 'db/db_impl.h'
#include <vector>
#include <string>
    
      // Put about 28K to L0
  for (int i = 0; i < 70; i++) {
    ASSERT_OK(Put(Key(static_cast<int>(rnd.Uniform(kMaxKey))),
                  RandomString(&rnd, 380)));
  }
  ASSERT_OK(dbfull()->SetOptions({
      {'disable_auto_compactions', 'false'},
  }));
  Flush();
  dbfull()->TEST_WaitForCompact();
  ASSERT_TRUE(db_->GetIntProperty('rocksdb.base-level', &int_prop));
  ASSERT_EQ(4U, int_prop);
    
    
    {}  // namespace rocksdb
    
    // Allocate scratch space which is passed to EncryptBlock/DecryptBlock.
void CTRCipherStream::AllocateScratch(std::string& scratch) {
  auto blockSize = cipher_.BlockSize();
  scratch.reserve(blockSize);
}
    
      // Write a key in this transaction
  txn->Put('abc', 'def');