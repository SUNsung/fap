
        
        // Sent by the renderer when the draggable regions are updated.
IPC_MESSAGE_ROUTED1(ShellViewHostMsg_UpdateDraggableRegions,
                    std::vector<extensions::DraggableRegion> /* regions */)
    
    namespace {
    }
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    
bool MenuDelegate::GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
    }
    
       void ExecuteCommand(int command_id, int event_flags) override;
    
    NwObjCallObjectMethodFunction::~NwObjCallObjectMethodFunction() {
}
    
    
    
    #if !defined(BOOST_NO_WREGEX) && defined(BOOST_REGEX_HAS_OTHER_WCHAR_T)
#define BOOST_REGEX_CHAR_T unsigned short
#ifdef BOOST_REGEX_US_INSTANTIATE
#  define BOOST_REGEX_INSTANTIATE
#endif
#include <boost/regex/v4/instances.hpp>
#undef BOOST_REGEX_CHAR_T
#ifdef BOOST_REGEX_INSTANTIATE
#  undef BOOST_REGEX_INSTANTIATE
#endif
#endif
    
    void ActionCamera::setEye(const Vec3& eye)
{
    _eye = eye;
    updateTransform();
}
    
    
    {    Vec3 _center;
    Vec3 _eye;
    Vec3 _up;
};
    
    //
// EaseBezierAction
//
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPAGETURN3D_ACTION_H__
#define __ACTION_CCPAGETURN3D_ACTION_H__
    
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
    
    void ActionTween::update(float dt)
{
    dynamic_cast<ActionTweenDelegate*>(_target)->updateTweenAction(_to  - _delta * (1 - dt), _key);
}
    
    NS_CC_END

    
        /** Width of each char. */
    int    _itemWidth;
    /** Height of each char. */
    int    _itemHeight;
    
    Color3B    _colorUnmodified;
    
    TextureAtlas* _textureAtlas;
    /** Protocol variables. */
    bool _isOpacityModifyRGB;
    BlendFunc _blendFunc;
    
      std::atomic<FlushReason> flush_reason_;
    
      using DBImpl::Put;
  virtual Status Put(const WriteOptions& /*options*/,
                     ColumnFamilyHandle* /*column_family*/,
                     const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Merge;
  virtual Status Merge(const WriteOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/,
                       const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Delete;
  virtual Status Delete(const WriteOptions& /*options*/,
                        ColumnFamilyHandle* /*column_family*/,
                        const Slice& /*key*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  virtual Status Write(const WriteOptions& /*options*/,
                       WriteBatch* /*updates*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::CompactRange;
  virtual Status CompactRange(const CompactRangeOptions& /*options*/,
                              ColumnFamilyHandle* /*column_family*/,
                              const Slice* /*begin*/,
                              const Slice* /*end*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
    
    // Param variant of DBTestBase::ChangeCompactOptions
class DBTestCompactionFilterWithCompactParam
    : public DBTestCompactionFilter,
      public ::testing::WithParamInterface<DBTestBase::OptionConfig> {
 public:
  DBTestCompactionFilterWithCompactParam() : DBTestCompactionFilter() {
    option_config_ = GetParam();
    Destroy(last_options_);
    auto options = CurrentOptions();
    if (option_config_ == kDefault || option_config_ == kUniversalCompaction ||
        option_config_ == kUniversalCompactionMultiLevel) {
      options.create_if_missing = true;
    }
    if (option_config_ == kLevelSubcompactions ||
        option_config_ == kUniversalSubcompactions) {
      assert(options.max_subcompactions > 1);
    }
    TryReopen(options);
  }
};
    
    
    {
    {    if (data.ToString().find('foo567') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('v1.fetdq') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('bar123') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('v2.dfgkjdfghsd') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('dfgk') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
  }
  if (encrypted_env_) {
    ASSERT_EQ(hits, 0);
  } else {
    ASSERT_GE(hits, 4);
  }
}
    
    class WriteCallback {
 public:
  virtual ~WriteCallback() {}
    }
    
    
    {
    {    // Increase the amount we map the next time, but capped at 1MB
    if (map_size_ < (1 << 20)) {
      map_size_ *= 2;
    }
  }
  return Status::OK();
}
    
      // When flush happens, it determines whether to trigger compaction. If
  // triggered_writes_stop is true, it will also set the retry flag of
  // compaction-task to true.
  void OnFlushCompleted(
      DB* db, const FlushJobInfo& info) override {
    CompactionTask* task = PickCompaction(db, info.cf_name);
    if (task != nullptr) {
      if (info.triggered_writes_stop) {
        task->retry_on_fail = true;
      }
      // Schedule compaction in a different thread.
      ScheduleCompaction(task);
    }
  }
    
      db->Get(ReadOptions(), 'key2', &value);
  assert(value == 'value');
    
    // convert to alias_ref<T> from T
template <typename T>
struct Convert<alias_ref<T>> {
  typedef JniType<T> jniType;
  static alias_ref<jniType> fromJni(jniType t) {
    return wrap_alias(t);
  }
  static jniType toJniRet(alias_ref<jniType> t) {
    return t.get();
  }
  static jniType toCall(alias_ref<jniType> t) {
    return t.get();
  }
};
    
      /**
   * The offset within the current function
   */
  int functionOffset() const noexcept {
    auto absoluteSymbol = static_cast<const char*>(functionAddress_);
    auto absoluteabsoluteProgramCounter =
        static_cast<const char*>(absoluteProgramCounter_);
    return absoluteabsoluteProgramCounter - absoluteSymbol;
  }
    
    class YogaTest_HadOverflowTests : public Test {
protected:
  YogaTest_HadOverflowTests() {
    config = YGConfigNew();
    root = YGNodeNewWithConfig(config);
    YGNodeStyleSetWidth(root, 200);
    YGNodeStyleSetHeight(root, 100);
    YGNodeStyleSetFlexDirection(root, YGFlexDirectionColumn);
    YGNodeStyleSetFlexWrap(root, YGWrapNoWrap);
  }
    }
    
      YGFloatOptional operator+(const YGFloatOptional& op);
  bool operator>(const YGFloatOptional& op) const;
  bool operator<(const YGFloatOptional& op) const;
  bool operator>=(const YGFloatOptional& op) const;
  bool operator<=(const YGFloatOptional& op) const;
  bool operator==(const YGFloatOptional& op) const;
  bool operator!=(const YGFloatOptional& op) const;
    
      areNonFloatValuesEqual = areNonFloatValuesEqual &&
      flexGrow.isUndefined() == style.flexGrow.isUndefined();
  if (areNonFloatValuesEqual && !flexGrow.isUndefined()) {
    areNonFloatValuesEqual = areNonFloatValuesEqual &&
        flexGrow.getValue() == style.flexGrow.getValue();
  }
    
    constexpr YGValue kYGValueUndefined = {0, YGUnitUndefined};
    
    struct Layout
{
    double left;
    double right;
    }
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(width, height);
    }
};

    
    NBIND_CLASS(Value)
{
    construct<>();
    construct<int, double>();
}
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    #include <antlr/config.hpp>
#ifdef __MINGW32__
#include <cstring>
#endif
#include <string>
    
    	/** Walk the tree looking for all exact subtree matches.  Return
	 *  a vector of RefAST that lets the caller walk the list
	 *  of subtree roots found herein.
	 */
	virtual ANTLR_USE_NAMESPACE(std)vector<RefAST> findAll(RefAST t) = 0;
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/ASTNULLType.hpp#2 $
 */
    
    #endif //INC_ASTPair_hpp__

    
    	class AST;
    
    
    {	CircularQueue(const CircularQueue&);
	const CircularQueue& operator=(const CircularQueue&);
};
    
    	/** get the line the token is at (starting at 1)
	 * @see CharScanner::newline()
	 * @see CharScanner::tab()
	 */
	virtual int getLine() const
	{
		return line;
	}
	/** gt the column the token is at (starting at 1)
	 * @see CharScanner::newline()
	 * @see CharScanner::tab()
	 */
	virtual int getColumn() const
	{
		return col;
	}
    
    
    {	IOException( ANTLR_USE_NAMESPACE(std)exception& e )
		: ANTLRException(e.what())
	{
	}
	IOException( const ANTLR_USE_NAMESPACE(std)string& mesg )
		: ANTLRException(mesg)
	{
	}
	virtual ~IOException() throw()
	{
	}
};
    
    	/** Sync up deferred consumption */
	void syncConsume();
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/MismatchedCharException.hpp#2 $
 */
    
    
    {private:
	/// Token names array for formatting
	const char* const* tokenNames;
	/// Max number of tokens in tokenNames
	const int numTokens;
	/// Return token name for tokenType
	ANTLR_USE_NAMESPACE(std)string tokenName(int tokenType) const;
};
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/NoViableAltForCharException.hpp#2 $
 */