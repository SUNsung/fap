
        
        void SyntaxASTMap::clearSyntaxMap() {
  SyntaxMap.shrink_and_clear();
}
    
      public:
    ObjCMethod(SILDeclRef method, SILType searchType, bool startAtSuper)
      : method(method), searchTypeAndSuper(searchType, startAtSuper)
    {}
    
    SILDeclRef getMethod() const { return method; }
    SILType getSearchType() const { return searchTypeAndSuper.getPointer(); }
    bool shouldStartAtSuper() const { return searchTypeAndSuper.getInt(); }
    
    /// FIXME: Thunk down to a Swift function value?
    llvm::Value *getExplosionValue(IRGenFunction &IGF) const {
      llvm_unreachable('thunking unapplied objc method to swift function '
                       'not yet implemented');
    }
    
    /// Determine the kind of message that should be sent to this
    /// method.
    ObjCMessageKind getMessageKind() const {
      // Determine the kind of message send to perform.
      if (!getSearchType()) return ObjCMessageKind::Normal;
    }
    
    /// A utility for finding dead-end blocks.
///
/// Dead-end blocks are blocks from which there is no path to the function exit
/// (either return or throw). These are blocks which end with an unreachable
/// instruction and blocks from which all paths end in 'unreachable' blocks.
/// This utility is needed to determine if the a value definition can have a
/// lack of users ignored along a specific path.
class DeadEndBlocks {
  llvm::SetVector<const SILBasicBlock *> ReachableBlocks;
  const SILFunction *F;
  bool isComputed = false;
    }
    
      bool isEmpty() const {
    return !Brief.hasValue() &&
           !ReturnsField.hasValue() &&
           !ThrowsField.hasValue() &&
           BodyNodes.empty() &&
           ParamFields.empty();
  }
    
    #include 'swift/Syntax/Rewriter.h'
    
    #endif

    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
      void documentCallback(const char* ev, blink::WebLocalFrame* frame);
    
    #ifndef CONTENT_NW_SRC_API_DISPATCHER_HOST_H_
#define CONTENT_NW_SRC_API_DISPATCHER_HOST_H_
    
    
    {} // namespace nwapi

    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    MenuDelegate::~MenuDelegate() {
}
    
    #endif  // CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_

    
          p[g_ZAG[k]] = static_cast<jpgd_block_t>(s << pD->m_successive_low);
    }
    else
    {
      if (r == 15)
      {
        if ((k += 15) > 63)
          pD->stop_decoding(JPGD_DECODE_ERROR);
      }
      else
      {
        pD->m_eob_run = 1 << r;
    }
    
    struct oc_mode_rd{
  ogg_int16_t rate;
  ogg_int16_t rmse;
};
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
      {1,2,6,  &_residue_44p_lfe,
   &_huff_book__44p4_lfe,&_huff_book__44p4_lfe,
   &_resbook_44p_l4,&_resbook_44p_l4}
};
static const vorbis_residue_template _res_44p51_5[]={
  {2,0,15,  &_residue_44p_hi,
   &_huff_book__44p5_short,&_huff_book__44p5_short,
   &_resbook_44p_5,&_resbook_44p_5},
    
    static int vorbis_ftoi(double f){
        /* Note: MSVC and GCC (at least on some systems) round towards zero, thus,
           the floor() call is required to ensure correct roudning of
           negative numbers */
        return (int)floor(f+.5);
}
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    #undef silk_ADD_POS_SAT8
static OPUS_INLINE opus_int8 silk_ADD_POS_SAT8(opus_int64 a, opus_int64 b){
    opus_int8 tmp;
    ops_count += 1;
    tmp = (opus_int8)((((a)+(b)) & 0x80) ? silk_int8_MAX  : ((a)+(b)));
    return(tmp);
}
#undef silk_ADD_POS_SAT16
static OPUS_INLINE opus_int16 silk_ADD_POS_SAT16(opus_int64 a, opus_int64 b){
    opus_int16 tmp;
    ops_count += 1;
    tmp = (opus_int16)((((a)+(b)) & 0x8000) ? silk_int16_MAX : ((a)+(b)));
    return(tmp);
}
    
    
    { private:
  FRIEND_TEST(DispatcherTests, test_run);
  FRIEND_TEST(DispatcherTests, test_independent_run);
  FRIEND_TEST(DispatcherTests, test_interruption);
  FRIEND_TEST(BufferedLogForwarderTests, test_async);
};
    
      // Enables use of gtest (ASSERT|EXPECT)_EQ
  bool operator==(const Status& rhs) const {
    return (code_ == rhs.getCode()) && (message_ == rhs.getMessage());
  }
    
      /**
   * @brief Sets up the process as an osquery shell.
   *
   * The shell is lighter than a daemon and disables (by default) features.
   */
  void initShell() const;
    
        // We should have a property tree of pack content mimicking embedded
    // configuration packs, ready to parse as a string.
    std::ostringstream output;
    pt::write_json(output, multi_pack, false);
    pack = output.str();
    if (pack.empty()) {
      return Status(1, 'Multi-pack content empty');
    }
    
    #include 'osquery/core/utils.h'
    
    
    {  ASSERT_FALSE(YGNodeLayoutGetHadOverflow(root));
}
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);