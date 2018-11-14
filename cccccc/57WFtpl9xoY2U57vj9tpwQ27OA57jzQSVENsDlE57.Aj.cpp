
        
            QVariant value() const;
    void setValue(const QVariant &value);
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    namespace Ui {
    class TransactionDescDialog;
}
    
    #ifndef BITCOIN_RPC_MINING_H
#define BITCOIN_RPC_MINING_H
    
        while (outlen > 0) {
        secp256k1_hmac_sha256_t hmac;
        int now = outlen;
        secp256k1_hmac_sha256_initialize(&hmac, rng->k, 32);
        secp256k1_hmac_sha256_write(&hmac, rng->v, 32);
        secp256k1_hmac_sha256_finalize(&hmac, rng->v);
        if (now > 32) {
            now = 32;
        }
        memcpy(out, rng->v, now);
        out += now;
        outlen -= now;
    }
    
    
    {    secp256k1_scalar_clear(&s);
    return ret;
}
    
      printer->Print(
    '/// <summary>Holder for reflection information generated from $file_name$</summary>\n'
    '$access_level$ static partial class $reflection_class_name$ {\n'
    '\n',
    'file_name', file_->name(),
    'access_level', class_access_level(),
    'reflection_class_name', reflectionClassname_);
  printer->Indent();
}
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    void Context::InitializeFieldGeneratorInfo(const FileDescriptor* file) {
  for (int i = 0; i < file->message_type_count(); ++i) {
    InitializeFieldGeneratorInfoForMessage(file->message_type(i));
  }
}
    
    
    {  WriteFieldDocComment(printer, descriptor_);
  if (descriptor_->is_repeated()) {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newRepeatedGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $packed$,\n'
        '      $singular_type$.class);\n');
  } else {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newSingularGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $default$,\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $singular_type$.class);\n');
  }
  printer->Annotate('name', descriptor_);
}
    
    ServiceGenerator* ImmutableGeneratorFactory::NewServiceGenerator(
    const ServiceDescriptor* descriptor) const {
  return new ImmutableServiceGenerator(descriptor, context_);
}
    
     public:
  virtual void GenerateCFunctionDeclarations(io::Printer* printer) const;
  virtual void GenerateCFunctionImplementations(io::Printer* printer) const;
  virtual void DetermineForwardDeclarations(std::set<string>* fwd_decls) const;
    
      vars['default_name'] = GPBGenericValueFieldName(descriptor_);
  if (descriptor_->is_repeated()) {
    vars['default'] = 'nil';
  } else {
    vars['default'] = DefaultValue(descriptor_);
  }
  string type = GetCapitalizedType(descriptor_);
  vars['extension_type'] = string('GPBDataType') + type;
    
    //////////////////////////////////////////////////////////////////////
    
    enum class ImmType {
              // Supports TOC? | Supports li64? | Fixed size?
              // -------------------------------------------
  AnyCompact, // Yes           | Yes            | No
  AnyFixed,   // Yes           | Yes            | Yes (5 instr)
  TocOnly,    // Yes           | No             | Yes (2 instr)
};
    
    #include 'hphp/runtime/base/apc-object.h'
#include 'hphp/runtime/base/apc-array.h'
#include 'hphp/runtime/base/apc-stats.h'
#include 'hphp/runtime/base/object-data.h'
#include 'hphp/runtime/base/type-object.h'
#include 'hphp/runtime/ext/apc/ext_apc.h'
#include 'hphp/runtime/base/collections.h'
#include 'hphp/runtime/ext/collections/ext_collections-map.h'
#include 'hphp/runtime/ext/collections/ext_collections-set.h'
#include 'hphp/runtime/ext/collections/ext_collections-vector.h'
#include 'hphp/runtime/base/data-walker.h'
    
    namespace HPHP {
    }
    
      static void ParseConfigFile(const std::string &filename, IniSettingMap &ini,
                              Hdf &hdf, const bool is_system = true);
    
    inline VarEnv* ExecutionContext::hasVarEnv(int frame) {
  auto const fp = getFrameAtDepth(frame);
  if (fp && (fp->func()->attrs() & AttrMayUseVV)) {
    if (fp->hasVarEnv()) return fp->getVarEnv();
  }
  return nullptr;
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
      path_str += strlen(prefix);
  path_len -= strlen(prefix);
    
    ///////////////////////////////////////////////////////////////////////////////
// virtual functions
    
        /*virtual*/ void LearnerNesterov::Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, 
                                             const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) /*override*/
    {
        switch (gradientValue->GetDataType())
        {
        case DataType::Float:
            Update<float>(parameter, gradientValue, smoothedGradientValue, trainingSampleCount);
            break;
        case DataType::Double:
            Update<double>(parameter, gradientValue, smoothedGradientValue, trainingSampleCount);
            break;
        case DataType::Float16:
            UpdateHalf(parameter, gradientValue, smoothedGradientValue, trainingSampleCount);
            break;
        default:
            NOT_IMPLEMENTED;
        }
    }
    
        protected:
        // If a gradient is sparse, we skip updating columns with zero gradients. This means some 
        // columns will receive their updates when their gradient is non-zero. The only exception
        // is that once every s_SyncInterval updates we will make sure all columns are up to date. 
        static const int s_SyncInterval;
    
        public:
        CompositeMinibatchSource(const MinibatchSourceConfig& configuration);
    
        // Releases the mutex
    void Release()
    {
        assert(m_fd != -1);
        // removing file
        unlink(m_fileName.c_str());
        // Note: file is intentionally removed *before* releasing the lock
        // to ensure that locked file isn't deleted by the non-owner of the lock
        m_lock.l_type = F_UNLCK;
        // Now removing the lock and closing the file descriptor
        // waiting processes will be notified
        int rc = fcntl(m_fd, F_SETLKW, &m_lock);
        if (rc == FCNTL_ERROR)
        {
            RuntimeError('Mutex Release: Failed to release mutex %s', m_fileName.c_str());
        }
        close(m_fd);
        m_fd = -1;
    }
    
    
    {
    {            if (map.size() > RAND_MAX * (size_t) RAND_MAX)
                RuntimeError('RandomOrdering: too large training set: need to change to different random generator!');
            srand((unsigned int) seed);
            size_t retries = 0;
            foreach_index (t, map)
            {
                for (int tries = 0; tries < 5; tries++)
                {
                    // swap current pos with a random position
                    // Random positions are limited to t+randomizationrange.
                    // This ensures some locality suitable for paging with a sliding window.
                    const size_t tbegin = max((size_t) t, randomizationrange / 2) - randomizationrange / 2; // range of window  --TODO: use bounds() function above
                    const size_t tend = min(t + randomizationrange / 2, map.size());
                    assert(tend >= tbegin);                  // (guard against potential numeric-wraparound bug)
                    const size_t trand = rand(tbegin, tend); // random number within windows
                    assert((size_t) t <= trand + randomizationrange / 2 && trand < (size_t) t + randomizationrange / 2);
                    // if range condition is fulfilled then swap
                    if (trand <= map[t] + randomizationrange / 2 && map[t] < trand + randomizationrange / 2 && (size_t) t <= map[trand] + randomizationrange / 2 && map[trand] < (size_t) t + randomizationrange / 2)
                    {
                        std::swap(map[t], map[trand]);
                        break;
                    }
                    // but don't multi-swap stuff out of its range (for swapping positions that have been swapped before)
                    // instead, try again with a different random number
                    retries++;
                }
            }
            fprintf(stderr, 'RandomOrdering: %lu retries for %lu elements (%.1f%%) to ensure window condition\n', (unsigned long) retries, (unsigned long) map.size(), 100.0 * retries / map.size());
            // ensure the window condition
            foreach_index (t, map)
                assert((size_t) t <= map[t] + randomizationrange / 2 && map[t] < (size_t) t + randomizationrange / 2);
#if 0 // and a live check since I don't trust myself here yet
            foreach_index (t, map) if (!((size_t) t <= map[t] + randomizationrange/2 && map[t] < (size_t) t + randomizationrange/2))
            {
                fprintf (stderr, 'RandomOrdering: windowing condition violated %d -> %d\n', t, map[t]);
                LogicError('RandomOrdering: windowing condition violated');
            }
#endif
#if 0 // test whether it is indeed a unique complete sequence
            auto map2 = map;
            ::sort (map2.begin(), map2.end());
            foreach_index (t, map2) assert (map2[t] == (size_t) t);
#endif
            fprintf(stderr, 'RandomOrdering: recached sequence for seed %d: %d, %d, ...\n', (int) seed, (int) map[0], (int) map[1]);
            currentseed = seed;
        }
        return map; // caller can now access it through operator[]
    }
    
    // -----------------------------------------------------------------------
// ConstantNode
// -----------------------------------------------------------------------
    
       file_iterator();
   file_iterator(const char* wild);
   ~file_iterator();
   file_iterator(const file_iterator&);
   file_iterator& operator=(const file_iterator&);
   const char* root()const { return _root; }
   const char* path()const { return _path; }
   const char* name()const { return ptr; }
   _fi_find_data* data() { return &(ref->_data); }
   void next();
   file_iterator& operator++() { next(); return *this; }
   file_iterator operator++(int);
   const char* operator*() { return path(); }
    
    template <bool is_pointer_type>
struct is_random_imp_selector
{
   template <class I>
   struct rebind
   {
      typedef is_random_imp<I> type;
   };
};
    
    
    
    
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_word_boundary()
{
   bool b; // indcates whether next character is a word character
   if(position != last)
   {
      // prev and this character must be opposites:
      b = traits_inst.isctype(*position, m_word_mask);
   }
   else
   {
      b = (m_match_flags & match_not_eow) ? true : false;
   }
   if((position == backstop) && ((m_match_flags & match_prev_avail) == 0))
   {
      if(m_match_flags & match_not_bow)
         b ^= true;
      else
         b ^= false;
   }
   else
   {
      --position;
      b ^= traits_inst.isctype(*position, m_word_mask);
      ++position;
   }
   if(b)
   {
      pstate = pstate->next.p;
      return true;
   }
   return false; // no match if we get to here...
}
    
    
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
         push_single_repeat(count, rep, position, saved_state_rep_char);
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
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_startmark()
{
   int index = static_cast<const re_brace*>(pstate)->index;
   icase = static_cast<const re_brace*>(pstate)->icase;
   bool r = true;
   switch(index)
   {
   case 0:
      pstate = pstate->next.p;
      break;
   case -1:
   case -2:
      {
         // forward lookahead assert:
         BidiIterator old_position(position);
         const re_syntax_base* next_pstate = static_cast<const re_jump*>(pstate->next.p)->alt.p->next.p;
         pstate = pstate->next.p->next.p;
         r = match_all_states();
         pstate = next_pstate;
         position = old_position;
         if((r && (index != -1)) || (!r && (index != -2)))
            r = false;
         else
            r = true;
         if(r && m_have_accept)
            r = skip_until_paren(INT_MAX);
         break;
      }
   case -3:
      {
         // independent sub-expression:
         bool old_independent = m_independent;
         m_independent = true;
         const re_syntax_base* next_pstate = static_cast<const re_jump*>(pstate->next.p)->alt.p->next.p;
         pstate = pstate->next.p->next.p;
         bool can_backtrack = m_can_backtrack;
         r = match_all_states();
         if(r)
            m_can_backtrack = can_backtrack;
         pstate = next_pstate;
         m_independent = old_independent;
#ifdef BOOST_REGEX_MATCH_EXTRA
         if(r && (m_match_flags & match_extra))
         {
            //
            // our captures have been stored in *m_presult
            // we need to unpack them, and insert them
            // back in the right order when we unwind the stack:
            //
            unsigned i;
            match_results<BidiIterator, Allocator> tm(*m_presult);
            for(i = 0; i < tm.size(); ++i)
               (*m_presult)[i].get_captures().clear();
            // match everything else:
            r = match_all_states();
            // now place the stored captures back:
            for(i = 0; i < tm.size(); ++i)
            {
               typedef typename sub_match<BidiIterator>::capture_sequence_type seq;
               seq& s1 = (*m_presult)[i].get_captures();
               const seq& s2 = tm[i].captures();
               s1.insert(
                  s1.end(), 
                  s2.begin(), 
                  s2.end());
            }
         }
#endif
         if(r && m_have_accept)
            r = skip_until_paren(INT_MAX);
         break;
      }
   case -4:
      {
      // conditional expression:
      const re_alt* alt = static_cast<const re_alt*>(pstate->next.p);
      BOOST_ASSERT(alt->type == syntax_element_alt);
      pstate = alt->next.p;
      if(pstate->type == syntax_element_assert_backref)
      {
         if(!match_assert_backref())
            pstate = alt->alt.p;
         break;
      }
      else
      {
         // zero width assertion, have to match this recursively:
         BOOST_ASSERT(pstate->type == syntax_element_startmark);
         bool negated = static_cast<const re_brace*>(pstate)->index == -2;
         BidiIterator saved_position = position;
         const re_syntax_base* next_pstate = static_cast<const re_jump*>(pstate->next.p)->alt.p->next.p;
         pstate = pstate->next.p->next.p;
         bool res = match_all_states();
         position = saved_position;
         if(negated)
            res = !res;
         if(res)
            pstate = next_pstate;
         else
            pstate = alt->alt.p;
         break;
      }
      }
   case -5:
      {
         // Reset start of $0, since we have a \K escape
         backup_subex<BidiIterator> sub(*m_presult, 0);
         m_presult->set_first(position, 0, true);
         pstate = pstate->next.p;
         r = match_all_states();
         if(r == false)
            sub.restore(*m_presult);
         break;
      }
   default:
   {
      BOOST_ASSERT(index > 0);
      if((m_match_flags & match_nosubs) == 0)
      {
         backup_subex<BidiIterator> sub(*m_presult, index);
         m_presult->set_first(position, index);
         pstate = pstate->next.p;
         r = match_all_states();
         if(r == false)
            sub.restore(*m_presult);
#ifdef BOOST_REGEX_MATCH_EXTRA
         //
         // we have a match, push the capture information onto the stack:
         //
         else if(sub.get().matched && (match_extra & m_match_flags))
            ((*m_presult)[index]).get_captures().push_back(sub.get());
#endif
      }
      else
      {
         pstate = pstate->next.p;
      }
      break;
   }
   }
   return r;
}
    
    template <class Base, class Match>
struct format_functor1
{
   format_functor1(Base b) : func(b) {}
    }
    
    #ifndef BOOST_REGEX_V4_REGEX_MERGE_HPP
#define BOOST_REGEX_V4_REGEX_MERGE_HPP
    
    template<>
struct padding3<4>
{
   enum{
      padding_size = 4,
      padding_mask = 3
   };
};
    
      /**
   * \fn  virtual void Predictor::PredictInstance( const SparsePage::Inst&
   * inst, std::vector<bst_float>* out_preds, const gbm::GBTreeModel& model,
   * unsigned ntree_limit = 0, unsigned root_index = 0) = 0;
   *
   * \brief online prediction function, predict score for one instance at a time
   * NOTE: use the batch prediction interface if possible, batch prediction is
   * usually more efficient than online prediction This function is NOT
   * threadsafe, make sure you only call from one thread.
   *
   * \param           inst        The instance to predict.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       The model to predict from
   * \param           ntree_limit (Optional) The ntree limit.
   * \param           root_index  (Optional) Zero-based index of the root.
   */
    
        // By using D3DCompile() from <d3dcompiler.h> / d3dcompiler.lib, we introduce a dependency to a given version of d3dcompiler_XX.dll (see D3DCOMPILER_DLL_A)
    // If you would like to use this DX10 sample code but remove this dependency you can: 
    //  1) compile once, save the compiled shader blobs into a file or source code and pass them to CreateVertexShader()/CreatePixelShader() [preferred solution]
    //  2) use code to detect any version of the DLL and grab a pointer to D3DCompile from the DLL. 
    // See https://github.com/ocornut/imgui/pull/638 for sources and details.
    
        if (install_callbacks)
    {
        s3ePointerRegister(S3E_POINTER_BUTTON_EVENT, ImGui_Marmalade_PointerButtonEventCallback, 0);
        s3eKeyboardRegister(S3E_KEYBOARD_KEY_EVENT, ImGui_Marmalade_KeyCallback, 0);
        s3eKeyboardRegister(S3E_KEYBOARD_CHAR_EVENT, ImGui_Marmalade_CharCallback, 0);
    }
    
        // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array that we will update during the application lifetime.
    io.KeyMap[ImGuiKey_Tab] = VK_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = VK_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = VK_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = VK_UP;
    io.KeyMap[ImGuiKey_DownArrow] = VK_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = VK_PRIOR;
    io.KeyMap[ImGuiKey_PageDown] = VK_NEXT;
    io.KeyMap[ImGuiKey_Home] = VK_HOME;
    io.KeyMap[ImGuiKey_End] = VK_END;
    io.KeyMap[ImGuiKey_Insert] = VK_INSERT;
    io.KeyMap[ImGuiKey_Delete] = VK_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = VK_BACK;
    io.KeyMap[ImGuiKey_Space] = VK_SPACE;
    io.KeyMap[ImGuiKey_Enter] = VK_RETURN;
    io.KeyMap[ImGuiKey_Escape] = VK_ESCAPE;
    io.KeyMap[ImGuiKey_A] = 'A';
    io.KeyMap[ImGuiKey_C] = 'C';
    io.KeyMap[ImGuiKey_V] = 'V';
    io.KeyMap[ImGuiKey_X] = 'X';
    io.KeyMap[ImGuiKey_Y] = 'Y';
    io.KeyMap[ImGuiKey_Z] = 'Z';
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver. 
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.