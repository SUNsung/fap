
        
           static char_class_type BOOST_REGEX_CALL lookup_classname(const unsigned short* p1, const unsigned short* p2);
   static string_type BOOST_REGEX_CALL lookup_collatename(const unsigned short* p1, const unsigned short* p2);
    
    template <class Container, class Match, class Traits>
struct format_functor_container
{
   format_functor_container(const Container& c) : func(c) {}
    }
    
    // make_regex_iterator:
template <class charT, class traits>
inline regex_iterator<const charT*, charT, traits> make_regex_iterator(const charT* p, const basic_regex<charT, traits>& e, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_iterator<const charT*, charT, traits>(p, p+traits::length(p), e, m);
}
template <class charT, class traits, class ST, class SA>
inline regex_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits> make_regex_iterator(const std::basic_string<charT, ST, SA>& p, const basic_regex<charT, traits>& e, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits>(p.begin(), p.end(), e, m);
}
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_raw_buffer.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Raw character buffer for regex code.
  *                Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    
