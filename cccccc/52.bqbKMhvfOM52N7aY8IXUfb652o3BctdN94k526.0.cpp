
        
        
    {    CHECK(out.AppendToString(&(*output_tensor_shape_protos)[i]));
  }
    
    #include 'tensorflow/core/platform/env.h'
#include 'tensorflow/core/platform/null_file_system.h'
    
    #include <iomanip>
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/tensor_shape.pb.h'
#include 'tensorflow/core/grappler/costs/graph_properties.h'
#include 'tensorflow/core/grappler/grappler_item.h'
    
    Safe_PyObjectPtr make_safe(PyObject* object) {
  return Safe_PyObjectPtr(object);
}
    
    // Activates a CUDA context within an enclosing scope.
class ScopedActivateExecutorContext {
 public:
  // Form that takes a CUDA executor implementation.
  explicit ScopedActivateExecutorContext(CUDAExecutor* cuda_exec);
    }
    
    //for variant
template <>
struct GetTypeInfo<Variant> {
	static const Variant::Type VARIANT_TYPE = Variant::NIL;
	static inline PropertyInfo get_class_info() {
		return PropertyInfo(Variant::NIL, String(), PROPERTY_HINT_NONE, String(), PROPERTY_USAGE_DEFAULT | PROPERTY_USAGE_NIL_IS_VARIANT);
	}
};
    
    public:
	virtual ~ConstraintBullet() {
		bulletdelete(constraint);
		constraint = NULL;
	}
    
    	virtual PhysicsServer::JointType get_type() const { return PhysicsServer::JOINT_HINGE; }
    
    class BulletPhysicsServer;
    
    FuncRef::FuncRef() {
    }
    
    FileAccess *ZipArchive::get_file(const String &p_path, PackedData::PackedFile *p_file) {
    }
    
    
    {	PCKPacker();
	~PCKPacker();
};
    
    #include <vector>
#include <memory>
    
    
    {  SrcPos start;
  SrcPos past;
};
    
    void fillMap(BaseMap* map, const APCArray* ar) {
  for (auto i = uint32_t{0}; i < ar->size(); ++i) {
    map->set(*ar->getKey(i).asTypedValue(),
             *ar->getValue(i)->toLocal().asTypedValue());
  }
}
    
    #endif

    
    void Config::SetParsedIni(IniSettingMap &ini, const std::string confStr,
                          const std::string &filename, bool constants_only,
                          bool is_system) {
  // if we are setting constants, we must be setting system settings
  if (constants_only) {
    assertx(is_system);
  }
  auto parsed_ini = IniSetting::FromStringAsMap(confStr, filename);
  for (ArrayIter iter(parsed_ini.toArray()); iter; ++iter) {
    // most likely a string, but just make sure that we are dealing
    // with something that can be converted to a string
    assertx(iter.first().isScalar());
    ini.set(iter.first().toString(), iter.second());
    if (constants_only) {
      IniSetting::FillInConstant(iter.first().toString().toCppString(),
                                 iter.second());
    } else if (is_system) {
      IniSetting::SetSystem(iter.first().toString().toCppString(),
                            iter.second());
    }
  }
}
    
    struct DataStreamWrapper final : Stream::Wrapper {
  DataStreamWrapper() {
    m_isLocal = true;
  }
    }
    
    struct RequestCPUTimeoutException : ResourceExceededException {
  RequestCPUTimeoutException(const std::string& msg, const Array& backtrace)
    : ResourceExceededException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(RequestCPUTimeoutException);
};
    
        if (seglen == 0) {
      /* / */
      if (!collapse_slashes) {
        path[pathlen++] = getDirSeparator();
      }
    } else if (seglen == 1 && addpath[0] == '.'
               && (pathlen > 0 || (*next && *(next+1)))) {
      /* ./ (safe to drop iff there is something before or after it) */
    } else if (seglen == 2 && addpath[0] == '.' && addpath[1] == '.') {
      /* backpath (../) */
      if (pathlen == 1 && isDirSeparator(path[0])) {
      } else if (pathlen == 0
                 || (pathlen == 3
                     && !memcmp(path + pathlen - 3, '..', 2)
                     && isDirSeparator(path[pathlen - 1]))
                 || (pathlen  > 3
                     && isDirSeparator(path[pathlen - 4])
                     && !memcmp(path + pathlen - 3, '..', 2)
                     && isDirSeparator(path[pathlen - 1]))) {
        /* Append another backpath, including
         * trailing slash if present.
         */
        memcpy(path + pathlen, '..', 2);
        if (*next) {
          path[pathlen + 2] = getDirSeparator();
        }
        pathlen += *next ? 3 : 2;
      } else {
        /* otherwise crop the prior segment */
        do {
          --pathlen;
        } while (pathlen && !isDirSeparator(path[pathlen - 1]));
      }
    } else {
      /* An actual segment, append it to the destination path */
      if (*next) {
        seglen++;
      }
      memcpy(path + pathlen, addpath, seglen);
      pathlen += seglen;
    }
    
      char *temp, *tptr, *line_end, *limit;
  const char *bptr;
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::parse_open_paren()
{
   //
   // skip the '(' and error check:
   //
   if(++m_position == m_end)
   {
      fail(regex_constants::error_paren, m_position - m_base);
      return false;
   }
   //
   // begin by checking for a perl-style (?...) extension:
   //
   if(
         ((this->flags() & (regbase::main_option_type | regbase::no_perl_ex)) == 0)
         || ((this->flags() & (regbase::main_option_type | regbase::emacs_ex)) == (regbase::basic_syntax_group|regbase::emacs_ex))
     )
   {
      if(this->m_traits.syntax_type(*m_position) == regex_constants::syntax_question)
         return parse_perl_extension();
      if(this->m_traits.syntax_type(*m_position) == regex_constants::syntax_star)
         return parse_perl_verb();
   }
   //
   // update our mark count, and append the required state:
   //
   unsigned markid = 0;
   if(0 == (this->flags() & regbase::nosubs))
   {
      markid = ++m_mark_count;
#ifndef BOOST_NO_STD_DISTANCE
      if(this->flags() & regbase::save_subexpression_location)
         this->m_pdata->m_subs.push_back(std::pair<std::size_t, std::size_t>(std::distance(m_base, m_position) - 1, 0));
#else
      if(this->flags() & regbase::save_subexpression_location)
         this->m_pdata->m_subs.push_back(std::pair<std::size_t, std::size_t>((m_position - m_base) - 1, 0));
#endif
   }
   re_brace* pb = static_cast<re_brace*>(this->append_state(syntax_element_startmark, sizeof(re_brace)));
   pb->index = markid;
   pb->icase = this->flags() & regbase::icase;
   std::ptrdiff_t last_paren_start = this->getoffset(pb);
   // back up insertion point for alternations, and set new point:
   std::ptrdiff_t last_alt_point = m_alt_insert_point;
   this->m_pdata->m_data.align();
   m_alt_insert_point = this->m_pdata->m_data.size();
   //
   // back up the current flags in case we have a nested (?imsx) group:
   //
   regex_constants::syntax_option_type opts = this->flags();
   bool old_case_change = m_has_case_change;
   m_has_case_change = false; // no changes to this scope as yet...
   //
   // Back up branch reset data in case we have a nested (?|...)
   //
   int mark_reset = m_mark_reset;
   m_mark_reset = -1;
   //
   // now recursively add more states, this will terminate when we get to a
   // matching ')' :
   //
   parse_all();
   //
   // Unwind pushed alternatives:
   //
   if(0 == unwind_alts(last_paren_start))
      return false;
   //
   // restore flags:
   //
   if(m_has_case_change)
   {
      // the case has changed in one or more of the alternatives
      // within the scoped (...) block: we have to add a state
      // to reset the case sensitivity:
      static_cast<re_case*>(
         this->append_state(syntax_element_toggle_case, sizeof(re_case))
         )->icase = opts & regbase::icase;
   }
   this->flags(opts);
   m_has_case_change = old_case_change;
   //
   // restore branch reset:
   //
   m_mark_reset = mark_reset;
   //
   // we either have a ')' or we have run out of characters prematurely:
   //
   if(m_position == m_end)
   {
      this->fail(regex_constants::error_paren, ::boost::BOOST_REGEX_DETAIL_NS::distance(m_base, m_end));
      return false;
   }
   BOOST_ASSERT(this->m_traits.syntax_type(*m_position) == regex_constants::syntax_close_mark);
#ifndef BOOST_NO_STD_DISTANCE
   if(markid && (this->flags() & regbase::save_subexpression_location))
      this->m_pdata->m_subs.at(markid - 1).second = std::distance(m_base, m_position);
#else
   if(markid && (this->flags() & regbase::save_subexpression_location))
      this->m_pdata->m_subs.at(markid - 1).second = (m_position - m_base);
#endif
   ++m_position;
   //
   // append closing parenthesis state:
   //
   pb = static_cast<re_brace*>(this->append_state(syntax_element_endmark, sizeof(re_brace)));
   pb->index = markid;
   pb->icase = this->flags() & regbase::icase;
   this->m_paren_start = last_paren_start;
   //
   // restore the alternate insertion point:
   //
   this->m_alt_insert_point = last_alt_point;
   //
   // allow backrefs to this mark:
   //
   if((markid > 0) && (markid < sizeof(unsigned) * CHAR_BIT))
      this->m_backrefs |= 1u << (markid - 1);
    }
    
    #endif
    
    template <class BidiIterator, class Allocator>
void BOOST_REGEX_CALL match_results<BidiIterator, Allocator>::maybe_assign(const match_results<BidiIterator, Allocator>& m)
{
   if(m_is_singular)
   {
      *this = m;
      return;
   }
   const_iterator p1, p2;
   p1 = begin();
   p2 = m.begin();
   //
   // Distances are measured from the start of *this* match, unless this isn't
   // a valid match in which case we use the start of the whole sequence.  Note that
   // no subsequent match-candidate can ever be to the left of the first match found.
   // This ensures that when we are using bidirectional iterators, that distances 
   // measured are as short as possible, and therefore as efficient as possible
   // to compute.  Finally note that we don't use the 'matched' data member to test
   // whether a sub-expression is a valid match, because partial matches set this
   // to false for sub-expression 0.
   //
   BidiIterator l_end = this->suffix().second;
   BidiIterator l_base = (p1->first == l_end) ? this->prefix().first : (*this)[0].first;
   difference_type len1 = 0;
   difference_type len2 = 0;
   difference_type base1 = 0;
   difference_type base2 = 0;
   std::size_t i;
   for(i = 0; i < size(); ++i, ++p1, ++p2)
   {
      //
      // Leftmost takes priority over longest; handle special cases
      // where distances need not be computed first (an optimisation
      // for bidirectional iterators: ensure that we don't accidently
      // compute the length of the whole sequence, as this can be really
      // expensive).
      //
      if(p1->first == l_end)
      {
         if(p2->first != l_end)
         {
            // p2 must be better than p1, and no need to calculate
            // actual distances:
            base1 = 1;
            base2 = 0;
            break;
         }
         else
         {
            // *p1 and *p2 are either unmatched or match end-of sequence,
            // either way no need to calculate distances:
            if((p1->matched == false) && (p2->matched == true))
               break;
            if((p1->matched == true) && (p2->matched == false))
               return;
            continue;
         }
      }
      else if(p2->first == l_end)
      {
         // p1 better than p2, and no need to calculate distances:
         return;
      }
      base1 = ::boost::BOOST_REGEX_DETAIL_NS::distance(l_base, p1->first);
      base2 = ::boost::BOOST_REGEX_DETAIL_NS::distance(l_base, p2->first);
      BOOST_ASSERT(base1 >= 0);
      BOOST_ASSERT(base2 >= 0);
      if(base1 < base2) return;
      if(base2 < base1) break;
    }
    }
    
    namespace boost{
namespace BOOST_REGEX_DETAIL_NS{
    }
    }
    
    
//
// Unfortunately Rogue Waves standard library appears to have a bug
// in std::basic_string::compare that results in eroneous answers
// in some cases (tested with Borland C++ 5.1, Rogue Wave lib version
// 0x020101) the test case was:
// {39135,0} < {0xff,0}
// which succeeds when it should not.
//
#ifndef _RWSTD_VER
template <class C, class T, class A>
inline int string_compare(const std::basic_string<C,T,A>& s, const C* p)
{ 
   if(0 == *p)
   {
      if(s.empty() || ((s.size() == 1) && (s[0] == 0)))
         return 0;
   }
   return s.compare(p); 
}
#else
template <class C, class T, class A>
inline int string_compare(const std::basic_string<C,T,A>& s, const C* p)
{ 
   if(0 == *p)
   {
      if(s.empty() || ((s.size() == 1) && (s[0] == 0)))
         return 0;
   }
   return s.compare(p); 
}
inline int string_compare(const std::string& s, const char* p)
{ return std::strcmp(s.c_str(), p); }
# ifndef BOOST_NO_WREGEX
inline int string_compare(const std::wstring& s, const wchar_t* p)
{ return std::wcscmp(s.c_str(), p); }
#endif
#endif
template <class Seq, class C>
inline int string_compare(const Seq& s, const C* p)
{
   std::size_t i = 0;
   while((i < s.size()) && (p[i] == s[i]))
   {
      ++i;
   }
   return (i == s.size()) ? -p[i] : s[i] - p[i];
}
# define STR_COMP(s,p) string_compare(s,p)
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::find_imp()
{
   static matcher_proc_type const s_find_vtable[7] = 
   {
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_any,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_word,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_line,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_buf,
      &perl_matcher<BidiIterator, Allocator, traits>::match_prefix,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_lit,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_lit,
   };
    }
    
       char_type a[2] = {'a', '\0', };
   string_type sa(pt->transform(a, a+1));
   if(sa == a)
   {
      *delim = 0;
      return sort_C;
   }
   char_type A[2] = { 'A', '\0', };
   string_type sA(pt->transform(A, A+1));
   char_type c[2] = { ';', '\0', };
   string_type sc(pt->transform(c, c+1));
    
    template <class traits, class charT>
inline std::basic_string<charT> regex_merge(const std::basic_string<charT>& s,
                         const basic_regex<charT, traits>& e, 
                         const charT* fmt,
                         match_flag_type flags = match_default)
{
   return regex_replace(s, e, fmt, flags);
}
    
    
    {} // namespace boost
    
    /** @class Hide
* @brief Hide the node.
*/
class CC_DLL Hide : public ActionInstant
{
public:
    /** Allocates and initializes the action.
     *
     * @return An autoreleased Hide object.
     */
    static Hide * create();
    }
    
    void RotateBy::update(float time)
{
    // FIXME: shall I add % 360
    if (_target)
    {
        if(_is3D)
        {
            Vec3 v;
            v.x = _startAngle.x + _deltaAngle.x * time;
            v.y = _startAngle.y + _deltaAngle.y * time;
            v.z = _startAngle.z + _deltaAngle.z * time;
            _target->setRotation3D(v);
        }
        else
        {
#if CC_USE_PHYSICS
            if (_startAngle.x == _startAngle.y && _deltaAngle.x == _deltaAngle.y)
            {
                _target->setRotation(_startAngle.x + _deltaAngle.x * time);
            }
            else
            {
                _target->setRotationSkewX(_startAngle.x + _deltaAngle.x * time);
                _target->setRotationSkewY(_startAngle.y + _deltaAngle.y * time);
            }
#else
            _target->setRotationSkewX(_startAngle.x + _deltaAngle.x * time);
            _target->setRotationSkewY(_startAngle.y + _deltaAngle.y * time);
#endif // CC_USE_PHYSICS
        }
    }
}
    
    @code
auto action = MoveBy::create(1.0f, Vec2::ONE);
auto pingPongAction = Sequence::create(action, action->reverse(), nullptr);
@endcode
*/
class CC_DLL ActionInterval : public FiniteTimeAction
{
public:
    /** How many seconds had elapsed since the actions started to run.
     *
     * @return The seconds had elapsed since the actions started to run.
     */
    float getElapsed() { return _elapsed; }
    }
    
        if (action && action->initWithDuration(duration, gridSize))
    {
        action->autorelease();
        return action;
    }
    
        //
    // Overrides
    //
    virtual ProgressFromTo* clone() const override;
    virtual ProgressFromTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressFromTo() {}
    virtual ~ProgressFromTo() {}
    
    AnimationFrame* AnimationFrame::clone() const
{
    // no copy constructor
    auto frame = new (std::nothrow) AnimationFrame();
    frame->initWithSpriteFrame(_spriteFrame->clone(),
                               _delayUnits,
                               _userInfo);
    }
    
        /** whether or not it shall restore the original frame when the animation finishes. */
    bool _restoreOriginalFrame;
    
        auto propsItr = dictionary.find('properties');
    if(propsItr != dictionary.end() )
    {
        const ValueMap& properties = propsItr->second.asValueMap();
        version = properties.at('format').asInt();
        const ValueVector& spritesheets = properties.at('spritesheets').asValueVector();
    }
    
    #ifndef __CCATLAS_NODE_H__
#define __CCATLAS_NODE_H__
    
        // Create Window Surface
    VkSurfaceKHR surface;
    VkResult err;
    if (SDL_Vulkan_CreateSurface(window, g_Instance, &surface) == 0)
    {
        printf('Failed to create Vulkan surface.\n');
        return 1;
    }
    
        stb__running_adler = 1;
    
    #include 'imgui_freetype.h'
#include 'imgui_internal.h'   // ImMin,ImMax,ImFontAtlasBuild*,
#include <stdint.h>
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_GLYPH_H
#include FT_SYNTHESIS_H
    
        // Cleanup
    ImGui_ImplOpenGL2_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();
    
        if (g_pd3dDevice) g_pd3dDevice->Release();
    if (pD3D) pD3D->Release();
    DestroyWindow(hwnd);
    UnregisterClass(_T('ImGui Example'), wc.hInstance);
    
        // By using D3DCompile() from <d3dcompiler.h> / d3dcompiler.lib, we introduce a dependency to a given version of d3dcompiler_XX.dll (see D3DCOMPILER_DLL_A)
    // If you would like to use this DX12 sample code but remove this dependency you can: 
    //  1) compile once, save the compiled shader blobs into a file or source code and pass them to CreateVertexShader()/CreatePixelShader() [preferred solution]
    //  2) use code to detect any version of the DLL and grab a pointer to D3DCompile from the DLL. 
    // See https://github.com/ocornut/imgui/pull/638 for sources and details.
    
    // CHANGELOG 
// (minor and older changes stripped away, please see git history for details)
//  2018-06-08: Misc: Extracted imgui_impl_dx9.cpp/.h away from the old combined DX9+Win32 example.
//  2018-06-08: DirectX9: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-05-07: Render: Saving/restoring Transform because they don't seem to be included in the StateBlock. Setting shading mode to Gouraud.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplDX9_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
    
        // Upload texture to graphics system
    g_FontTexture = new CIwTexture();
    g_FontTexture->SetModifiable(true);
    CIwImage& image = g_FontTexture->GetImage();
    image.SetFormat(CIwImage::ARGB_8888);
    image.SetWidth(width);
    image.SetHeight(height);
    image.SetBuffers();                                    // allocates and own buffers
    image.ReadTexels(pixels);
    g_FontTexture->SetMipMapping(false);
    g_FontTexture->SetFiltering(false);
    g_FontTexture->Upload();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    template< bool Signed >
struct operations< 4u, Signed > :
    public msvc_x86_operations< typename make_storage_type< 4u, Signed >::type, operations< 4u, Signed > >
{
    typedef msvc_x86_operations< typename make_storage_type< 4u, Signed >::type, operations< 4u, Signed > > base_type;
    typedef typename base_type::storage_type storage_type;
    typedef typename make_storage_type< 4u, Signed >::aligned aligned_storage_type;
    }