
        
          static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    bool MenuDelegate::HasIcon(int command_id) {
  if (command_id < 0)
    return false;
    }
    
    
    {}  // namespace nwapi

    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    
    {	if (mutex)
		mutex->lock();
}
    
    MAKE_TEMPLATE_TYPE_INFO(Vector, uint8_t, Variant::POOL_BYTE_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, int, Variant::POOL_INT_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, float, Variant::POOL_REAL_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, String, Variant::POOL_STRING_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, Vector2, Variant::POOL_VECTOR2_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, Vector3, Variant::POOL_VECTOR3_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, Color, Variant::POOL_COLOR_ARRAY)
    
    	struct StreamString : public Stream {
    }
    
    SemaphorePosix::~SemaphorePosix() {
    }
    
    #include 'os/semaphore.h'
    
    #endif // TCP_CLIENT_POSIX_H
    
    #ifdef WINDOWS_USE_MUTEX
	CloseHandle(mutex);
#else
    
    	SYSTEM_INFO sysInfo;
	GetNativeSystemInfo(&sysInfo);
	if (sysInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64) {
		PathCombine(conEmuPath, exeDir, L'vendor\\conemu-maximus5\\ConEmu64.exe');
	}
	else {
		PathCombine(conEmuPath, exeDir, L'vendor\\conemu-maximus5\\ConEmu.exe');
	}
    
    #include 'db/builder.h'
    
    static const int kValueSize = 1000;
    
      // Check for iterator errors
  Status s = input->status();
  const uint64_t current_entries = compact->builder->NumEntries();
  if (s.ok()) {
    s = compact->builder->Finish();
  } else {
    compact->builder->Abandon();
  }
  const uint64_t current_bytes = compact->builder->FileSize();
  compact->current_output()->file_size = current_bytes;
  compact->total_bytes += current_bytes;
  delete compact->builder;
  compact->builder = nullptr;
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string TableFileName(const std::string& dbname, uint64_t number);
    
          case kBadRecord:
        if (in_fragmented_record) {
          ReportCorruption(scratch->size(), 'error in middle of record');
          in_fragmented_record = false;
          scratch->clear();
        }
        break;
    
      // Read the next record into *record.  Returns true if read
  // successfully, false if we hit end of the input.  May use
  // '*scratch' as temporary storage.  The contents filled in *record
  // will only be valid until the next mutating operation on this
  // reader or the next mutation to *scratch.
  bool ReadRecord(Slice* record, std::string* scratch);
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
    #ifdef BOOST_REGEX_HAS_OTHER_WCHAR_T
//
// Provide an unsigned short version as well, so the user can link to this
// no matter whether they build with /Zc:wchar_t or not (MSVC specific).
//
template<>
struct BOOST_REGEX_DECL c_regex_traits<unsigned short>
{
   c_regex_traits(){}
   typedef unsigned short char_type;
   typedef std::size_t size_type;
   typedef std::basic_string<unsigned short> string_type;
   struct locale_type{};
   typedef boost::uint32_t char_class_type;
    }
    
    //
// note no include guard, we may include this multiple times:
//
#ifndef BOOST_REGEX_NO_EXTERNAL_TEMPLATES
    
    
    {}
    
    
    {   ~mem_block_cache()
   {
      while(next)
      {
         mem_block_node* old = next;
         next = next->next;
         ::operator delete(old);
      }
   }
   void* get()
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
     if(next)
      {
         mem_block_node* result = next;
         next = next->next;
         --cached_blocks;
         return result;
      }
      return ::operator new(BOOST_REGEX_BLOCKSIZE);
   }
   void put(void* p)
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
      if(cached_blocks >= BOOST_REGEX_MAX_CACHE_BLOCKS)
      {
         ::operator delete(p);
      }
      else
      {
         mem_block_node* old = static_cast<mem_block_node*>(p);
         old->next = next;
         next = old;
         ++cached_blocks;
      }
   }
};
    
    //
// error checking API:
//
BOOST_REGEX_DECL void BOOST_REGEX_CALL verify_options(boost::regex_constants::syntax_option_type ef, match_flag_type mf);
//
// function can_start:
//
template <class charT>
inline bool can_start(charT c, const unsigned char* map, unsigned char mask)
{
   return ((c < static_cast<charT>(0)) ? true : ((c >= static_cast<charT>(1 << CHAR_BIT)) ? true : map[c] & mask));
}
inline bool can_start(char c, const unsigned char* map, unsigned char mask)
{
   return map[(unsigned char)c] & mask;
}
inline bool can_start(signed char c, const unsigned char* map, unsigned char mask)
{
   return map[(unsigned char)c] & mask;
}
inline bool can_start(unsigned char c, const unsigned char* map, unsigned char mask)
{
   return map[c] & mask;
}
inline bool can_start(unsigned short c, const unsigned char* map, unsigned char mask)
{
   return ((c >= (1 << CHAR_BIT)) ? true : map[c] & mask);
}
#if !defined(__hpux) && !defined(__WINSCW__)// WCHAR_MIN not usable in pp-directives.
#if defined(WCHAR_MIN) && (WCHAR_MIN == 0) && !defined(BOOST_NO_INTRINSIC_WCHAR_T)
inline bool can_start(wchar_t c, const unsigned char* map, unsigned char mask)
{
   return ((c >= static_cast<wchar_t>(1u << CHAR_BIT)) ? true : map[c] & mask);
}
#endif
#endif
#if !defined(BOOST_NO_INTRINSIC_WCHAR_T)
inline bool can_start(unsigned int c, const unsigned char* map, unsigned char mask)
{
   return (((c >= static_cast<unsigned int>(1u << CHAR_BIT)) ? true : map[c] & mask));
}
#endif
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_backstep()
{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4127)
#endif
   if( ::boost::is_random_access_iterator<BidiIterator>::value)
   {
      std::ptrdiff_t maxlen = ::boost::BOOST_REGEX_DETAIL_NS::distance(backstop, position);
      if(maxlen < static_cast<const re_brace*>(pstate)->index)
         return false;
      std::advance(position, -static_cast<const re_brace*>(pstate)->index);
   }
   else
   {
      int c = static_cast<const re_brace*>(pstate)->index;
      while(c--)
      {
         if(position == backstop)
            return false;
         --position;
      }
   }
   pstate = pstate->next.p;
   return true;
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    #ifndef BOOST_REGEX_CONFIG_HPP
#include <boost/regex/config.hpp>
#endif
#ifndef BOOST_REGEX_WORKAROUND_HPP
#include <boost/regex/v4/regex_workaround.hpp>
#endif
    
    
    {} // namespace boost
    
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
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
    void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}
    
    struct VERTEX_CONSTANT_BUFFER
{
    float   mvp[4][4];
};
    
    static void ImGui_Marmalade_SetClipboardText(void* /*user_data*/, const char* text)
{
    if (s3eClipboardAvailable())
        s3eClipboardSetText(text);
}