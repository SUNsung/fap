
        
        #define IPC_MESSAGE_START ShellMsgStart
    
    #ifndef CONTENT_NW_SRC_API_BASE_BASE_H_
#define CONTENT_NW_SRC_API_BASE_BASE_H_
    
    namespace nw {
    }
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
      int NwDesktopCaptureMonitor::GetPrimaryMonitorIndex() {
  #ifdef _WIN32 
    int count=0;
    for (int i = 0;; ++i) {
      DISPLAY_DEVICE device;
      device.cb = sizeof(device);
      BOOL ret = EnumDisplayDevices(NULL, i, &device, 0);
      if(!ret)
        break;
      if (device.StateFlags & DISPLAY_DEVICE_ACTIVE){
        if (device.StateFlags & DISPLAY_DEVICE_PRIMARY_DEVICE){
          return count;
        }
        count++;
      }
    }
  #endif
    return -1;
  }
    
      // Releases ownership of the object without decrementing the reference count.
  // The caller now owns the returned reference.
  PyObjectStruct* release() {
    PyObject* p = ptr_;
    ptr_ = NULL;
    return p;
  }
    
      const char* argv[] = {'protoc', proto_path.c_str(),
                        plugin_specific_args.c_str(), capture_out.c_str(),
                        filename.c_str()};
    
    io::ZeroCopyOutputStream*
GeneratorContext::OpenForAppend(const string& filename) {
  return NULL;
}
    
    // Functions to create C# XML documentation comments.
// Currently this only includes documentation comments containing text specified as comments
// in the .proto file; documentation comments generated just from field/message/enum/proto names
// is inlined in the relevant code. If more control is required, that code can be moved here.
    
    std::string FieldGeneratorBase::name() {
  return UnderscoresToCamelCase(GetFieldName(descriptor_), false);
}
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    struct Options;
    
    OPERATOR_SCHEMA(Exp)
    .NumInputs(1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .IdenticalTypeAndShape()
    .SetDoc(R'DOC(
Calculates the exponential of the given input tensor ($exp(x)$), element-wise. This
operation can be done in an in-place fashion too, by providing the same input
and output blobs.
    
    
    {      vector<TensorShape> out(1);
      std::vector<int> newDims =
          SqueezeOp<CPUContext>::ComputeDims(GetDimsVector(in[0]), dims);
      out[0] = CreateTensorShape(newDims, in[0].data_type());
      return out;
    })
    .InheritOnnxSchema('Squeeze');
    
    
    {    auto extendSize = (TIndex)maxElem - oldSize;
    if (extendSize > 0) {
      new_tensor->Extend(extendSize, growthPct_, &context_);
      if (!new_tensor->meta().ctor()) {
        auto oldSizeBytes = oldSize * new_tensor->meta().itemsize();
        auto* dst = (char*)new_tensor->raw_mutable_data() + oldSizeBytes;
        math::Set<char, Context>(
            new_tensor->nbytes() - oldSizeBytes, 0, dst, &context_);
      }
    }
    return true;
  }
    
    
    {  vector<int> y_shape(in[0].dims().begin(), in[0].dims().end());
  CAFFE_ENFORCE_LE(canonical_axis + 1, y_shape.size());
  y_shape.resize(canonical_axis + 1);
  y_shape[canonical_axis] = N;
  out[0] = CreateTensorShape(y_shape, in[0].data_type());
  return out;
}
    
    // TODO: Write gradient for this when needed
GRADIENT_NOT_IMPLEMENTED_YET(Floor);
    
    template <typename B, typename D>
struct TypeInherits {
    }
    
    				StringBuffer<> color_str;
				color_str += '#';
				while (true) {
					CharType ch = p_stream->get_char();
					if (p_stream->is_eof()) {
						r_token.type = TK_EOF;
						return OK;
					} else if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F')) {
						color_str += ch;
    }
    }
    
    	_FORCE_INLINE_ void _draw_gui_primitive(int p_points, const Vector2 *p_vertices, const Color *p_colors, const Vector2 *p_uvs);
	_FORCE_INLINE_ void _draw_polygon(const int *p_indices, int p_index_count, int p_vertex_count, const Vector2 *p_vertices, const Vector2 *p_uvs, const Color *p_colors, bool p_singlecolor, const int *p_bones, const float *p_weights);
	_FORCE_INLINE_ void _draw_generic(GLuint p_primitive, int p_vertex_count, const Vector2 *p_vertices, const Vector2 *p_uvs, const Color *p_colors, bool p_singlecolor);
    
    #endif

    
    	IP::Type sock_type;
	int sockfd;
    
    	if (bind(sockfd, (struct sockaddr *)&addr, addr_size) != -1) {
    }
    
    	virtual Error listen(int p_port, const IP_Address &p_bind_address = IP_Address('*'), int p_recv_buffer_size = 65536);
	virtual void close();
	virtual Error wait();
	virtual bool is_listening() const;
    
    	if (ret && (FD_ISSET(listen_sockfd, &pfd))) {
    }
    
    	static void make_default();
	static void cleanup();
    
    
    {
    {        // For now reusing the shim to allow prefetch.
        // Please only use a subset of the shim interface that includes
        // Init()/StartEpoch()/GetMinibatch()/IsEndOfEpoch()
        // Shim will be deleted in the future versions.
        std::shared_ptr<ReaderShim<float>> m_shim;
        Microsoft::MSR::CNTK::StreamMinibatchInputs m_matrices;
    };
}

    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
    
    {
    {
    {}}}

    
    public:
    // subPen - substitution penalty
    // delPen - deletion penalty
    // insPen - insertion penalty
    // squashInputs - whether to merge sequences of identical samples.
    // tokensToIgnore - list of indices of samples to ignore during edit distance evaluation
    EditDistanceErrorNode(DEVICEID_TYPE deviceId, const wstring & name, float subPen = 1.0f, float delPen = 1.0f, float insPen = 1.0f, bool squashInputs = false, vector<size_t> tokensToIgnore = {})
        : Base(deviceId, name), m_subPen(subPen), m_delPen(delPen), m_insPen(insPen), m_squashInputs(squashInputs), m_tokensToIgnore(tokensToIgnore)
    {
    }
    
    template <class charT, class traits>
digraph<charT> basic_regex_parser<charT, traits>::get_next_set_literal(basic_char_set<charT, traits>& char_set)
{
   digraph<charT> result;
   switch(this->m_traits.syntax_type(*m_position))
   {
   case regex_constants::syntax_dash:
      if(!char_set.empty())
      {
         // see if we are at the end of the set:
         if((++m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_set))
         {
            fail(regex_constants::error_range, m_position - m_base);
            return result;
         }
         --m_position;
      }
      result.first = *m_position++;
      return result;
   case regex_constants::syntax_escape:
      // check to see if escapes are supported first:
      if(this->flags() & regex_constants::no_escape_in_lists)
      {
         result = *m_position++;
         break;
      }
      ++m_position;
      result = unescape_character();
      break;
   case regex_constants::syntax_open_set:
   {
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_collate, m_position - m_base);
         return result;
      }
      if(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_dot)
      {
         --m_position;
         result.first = *m_position;
         ++m_position;
         return result;
      }
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_collate, m_position - m_base);
         return result;
      }
      const charT* name_first = m_position;
      // skip at least one character, then find the matching ':]'
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return result;
      }
      while((m_position != m_end) 
         && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_dot)) 
         ++m_position;
      const charT* name_last = m_position;
      if(m_end == m_position)
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return result;
      }
      if((m_end == ++m_position) 
         || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_set))
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return result;
      }
      ++m_position;
      string_type s = this->m_traits.lookup_collatename(name_first, name_last);
      if(s.empty() || (s.size() > 2))
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return result;
      }
      result.first = s[0];
      if(s.size() > 1)
         result.second = s[1];
      else
         result.second = 0;
      return result;
   }
   default:
      result = *m_position++;
   }
   return result;
}
    
    #ifndef BOOST_REGEX_V4_MATCH_FLAGS
#define BOOST_REGEX_V4_MATCH_FLAGS
    
    #endif
    
          no_except = ::boost::regbase::no_except,
      failbit = ::boost::regbase::failbit,
      literal = ::boost::regbase::literal,
      icase = ::boost::regbase::icase,
      nocollate = ::boost::regbase::nocollate,
      collate = ::boost::regbase::collate,
      nosubs = ::boost::regbase::nosubs,
      optimize = ::boost::regbase::optimize,
      bk_plus_qm = ::boost::regbase::bk_plus_qm,
      bk_vbar = ::boost::regbase::bk_vbar,
      no_intervals = ::boost::regbase::no_intervals,
      no_char_classes = ::boost::regbase::no_char_classes,
      no_escape_in_lists = ::boost::regbase::no_escape_in_lists,
      no_mod_m = ::boost::regbase::no_mod_m,
      mod_x = ::boost::regbase::mod_x,
      mod_s = ::boost::regbase::mod_s,
      no_mod_s = ::boost::regbase::no_mod_s,
      save_subexpression_location = ::boost::regbase::save_subexpression_location,
      no_empty_expressions = ::boost::regbase::no_empty_expressions,
    
    //
// proc regex_match
// returns true if the specified regular expression matches
// the whole of the input.  Fills in what matched in m.
//
template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_match(BidiIterator first, BidiIterator last, 
                 match_results<BidiIterator, Allocator>& m, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   BOOST_REGEX_DETAIL_NS::perl_matcher<BidiIterator, Allocator, traits> matcher(first, last, m, e, flags, first);
   return matcher.match();
}
template <class iterator, class charT, class traits>
bool regex_match(iterator first, iterator last, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   match_results<iterator> m;
   return regex_match(first, last, m, e, flags | regex_constants::match_any);
}
//
// query_match convenience interfaces:
#ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING
//
// this isn't really a partial specialisation, but template function
// overloading - if the compiler doesn't support partial specialisation
// then it really won't support this either:
template <class charT, class Allocator, class traits>
inline bool regex_match(const charT* str, 
                        match_results<const charT*, Allocator>& m, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + traits::length(str), m, e, flags);
}
    
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