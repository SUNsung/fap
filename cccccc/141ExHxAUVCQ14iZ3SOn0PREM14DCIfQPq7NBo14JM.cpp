
        
        // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    namespace base {
class ListValue;
}
    
    namespace nw {
    }
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
    #endif  // CONTENT_NW_SRC_API_BINDINGS_COMMON_H_

    
    #include 'base/logging.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
    namespace ui {
    }
    
        if (!found) {
      KeyMap::iterator it = keymap.find(upperText);
      if (it != keymap.end()) {
        keyName = it->second;
        found = true;
      }
    }
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
     protected:
  ~NwObjCallObjectMethodSyncFunction() override;
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
    
    TEST(c_api, XGDMatrixCreateFromMat_omp) {
  std::vector<int> num_rows = {100, 11374, 15000};
  for (auto row : num_rows) {
    int num_cols = 50;
    int num_missing = 5;
    DMatrixHandle handle;
    std::vector<float> data(num_cols * row, 1.5);
    for (int i = 0; i < num_missing; i++) {
      data[i] = std::numeric_limits<float>::quiet_NaN();
    }
    }
    }
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');
    
      bool writable() const { return !is_marked_read_only_; }
    
    class StressMarkingObserver : public AllocationObserver {
 public:
  explicit StressMarkingObserver(Heap& heap);
    }
    
      if (FLAG_fuzzer_gc_analysis) {
    max_new_space_size_reached_ =
        std::max(max_new_space_size_reached_, current_percent);
    return;
  }
    
      void SweepOrWaitUntilSweepingCompleted(Page* page);
    
    void Assembler::vsd(byte op, XMMRegister dst, XMMRegister src1, Operand src2) {
  vinstr(op, dst, src1, src2, kF2, k0F, kWIG);
}
    
    namespace v8 {
namespace internal {
    }
    }
    
      const int kDoubleRegsSize = kDoubleSize * XMMRegister::kNumRegisters;
  __ sub(esp, Immediate(kDoubleRegsSize));
  const RegisterConfiguration* config = RegisterConfiguration::Default();
  for (int i = 0; i < config->num_allocatable_double_registers(); ++i) {
    int code = config->GetAllocatableDoubleCode(i);
    XMMRegister xmm_reg = XMMRegister::from_code(code);
    int offset = code * kDoubleSize;
    __ movsd(Operand(esp, offset), xmm_reg);
  }
    
    
    {  // FP-relative.
  static constexpr int kWasmInstanceOffset = TYPED_FRAME_PUSHED_VALUE_OFFSET(0);
  static constexpr int kFixedFrameSizeFromFp =
      TypedFrameConstants::kFixedFrameSizeFromFp +
      kNumberOfSavedGpParamRegs * kSystemPointerSize +
      kNumberOfSavedFpParamRegs * kSimd128Size;
};
    
    // The ExtraArg1Register not part of the real JS calling convention and is
// mostly there to simplify consistent interface descriptor definitions across
// platforms. Note that on ia32 it aliases kJavaScriptCallCodeStartRegister.
constexpr Register kJavaScriptCallExtraArg1Register = ecx;
    
    void AccessorAssembler::HandleLoadICSmiHandlerLoadNamedCase(
    const LoadICParameters* p, Node* holder, TNode<IntPtrT> handler_kind,
    TNode<WordT> handler_word, Label* rebox_double, Variable* var_double_value,
    SloppyTNode<Object> handler, Label* miss, ExitPoint* exit_point,
    OnNonExistent on_nonexistent, ElementSupport support_elements) {
  Label constant(this), field(this), normal(this, Label::kDeferred),
      interceptor(this, Label::kDeferred), nonexistent(this),
      accessor(this, Label::kDeferred), global(this, Label::kDeferred),
      module_export(this, Label::kDeferred), proxy(this, Label::kDeferred),
      native_data_property(this), api_getter(this);
  GotoIf(WordEqual(handler_kind, IntPtrConstant(LoadHandler::kField)), &field);
    }
    
    #include 'src/ic/binary-op-assembler.h'
    
    	/** Return complete error message with line/column number info (if present)
	 * @note for your own exceptions override this one. Call getMessage from
	 * here to get the 'clean' error message stored in the text attribute.
	 */
	virtual ANTLR_USE_NAMESPACE(std)string toString() const
	{
		return text;
	}
    
    #endif //INC_ASTPair_hpp__

    
    template<class T>
	class ANTLR_API ASTRefCount
{
private:
	ASTRef* ref;
    }
    
    	/// Return the class name
	virtual const char* typeName( void ) const = 0;
    
    #ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif
    }
    
    /** CharInputBuffer.hpp provides an InputBuffer for plain character arrays (buffers).
 */
class CharInputBuffer : public InputBuffer
{
public:
	/** Construct a CharInputBuffer.hpp object with a char* buffer of 'size'
	 * if 'owner' is true, then the buffer will be delete[]-ed on destruction.
	 * @note it is assumed the buffer was allocated with new[]!
	 */
	CharInputBuffer( unsigned char* buf, size_t size, bool owner = false )
	: buffer(buf)
	, ptr(buf)
	, end(buf + size)
	, delete_buffer(owner)
	{
	}
    }
    
    
    {		if (m_offset >= OFFSET_MAX_RESIZE)
		{
			storage.erase( storage.begin(), storage.begin() + m_offset + nb );
			m_offset = 0;
		}
		else
			m_offset += nb;
	}
	inline void append(const T& t)
	{
		storage.push_back(t);
	}
	inline size_t entries() const
	{
		return storage.size() - m_offset;
	}
    
    #ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif
    }
    
    public:
	/// The token that was encountered
	const RefToken token;
	/// The offending AST node if tree walking
	const RefAST node;
	/// taken from node or token object
	ANTLR_USE_NAMESPACE(std)string tokenText;