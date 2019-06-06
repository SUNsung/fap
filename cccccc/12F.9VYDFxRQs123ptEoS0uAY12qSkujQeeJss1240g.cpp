
        
        #include 'base/basictypes.h'
#include '../dispatcher_host.h'
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
      for(auto* item: menu_items_) {
    item->RemoveKeys();
  }
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
     protected:
  ~NwClipboardSetListSyncFunction() override;
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodSyncFunction);
};
    
    
    {    DISALLOW_COPY_AND_ASSIGN(NwScreenDisplayObserver);
  };
    
    #endif //NW_SRC_API_NW_SCREEN_API_H_

    
    			image.m_bVerboseOutput = a_bVerboseOutput;
			image.Encode(a_format, a_eErrMetric, a_fEffort, a_uiJobs, a_uiMaxJobs);
    
    namespace Etc
{
	class Block4x4EncodingBits;
    }
    
    		case Image::Format::RGB8A1:
		case Image::Format::SRGB8A1:
			switch (m_sourcealphamix)
			{
			case SourceAlphaMix::OPAQUE:
				m_pencoding = new Block4x4Encoding_RGB8A1_Opaque;
				break;
    }
    
    #define C_SUBFROM( res , a)\
    do {(res).r = ADD32((res).r,(a).r);  (res).i = SUB32((res).i,(a).i); \
    }while(0)
    
    #define MULT16_16_P13(a,b) (SHR(ADD32(4096,MULT16_16((a),(b))),13))
#define MULT16_16_P14(a,b) (SHR(ADD32(8192,MULT16_16((a),(b))),14))
#define MULT16_16_P15(a,b) (SHR(ADD32(16384,MULT16_16((a),(b))),15))
    
    /* a32 + (opus_int32)((opus_int16)(b32)) * (c32 >> 16) */
#undef silk_SMLABT
static OPUS_INLINE opus_int32 silk_SMLABT_armv5e(opus_int32 a, opus_int32 b,
 opus_int32 c)
{
  int res;
  __asm__(
      '#silk_SMLABT\n\t'
      'smlabt %0, %1, %2, %3\n\t'
      : '=r'(res)
      : 'r'(b), 'r'(c), 'r'(a)
  );
  return res;
}
#define silk_SMLABT(a, b, c) (silk_SMLABT_armv5e(a, b, c))
    
    void RemoveTransliterator::handleTransliterate(Replaceable& text, UTransPosition& index,
                                               UBool /*isIncremental*/) const {
    // Our caller (filteredTransliterate) has already narrowed us
    // to an unfiltered run.  Delete it.
    UnicodeString empty;
    text.handleReplaceBetween(index.start, index.limit, empty);
    int32_t len = index.limit - index.start;
    index.contextLimit -= len;
    index.limit -= len;
}
U_NAMESPACE_END
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or a negative value
     */
    static int32_t indexOrNegativeFromString(const UnicodeString &keyword);
    
    
void FreeListCategory::RepairFreeList(Heap* heap) {
  FreeSpace n = top();
  while (!n.is_null()) {
    MapWordSlot map_location = n.map_slot();
    // We can't use .is_null() here because *map_location returns an
    // Object (for which 'is null' is not defined, as it would be
    // indistinguishable from 'is Smi(0)'). Only HeapObject has 'is_null()'.
    if (map_location.contains_value(kNullAddress)) {
      map_location.store(ReadOnlyRoots(heap).free_space_map());
    } else {
      DCHECK(map_location.contains_value(
          ReadOnlyRoots(heap).free_space_map().ptr()));
    }
    n = n->next();
  }
}
    
      inline Address UnmarkDeletionAddress(Address address) {
    return address & ~kDeletionTag;
  }
    
    bool Sweeper::SweepSpaceIncrementallyFromTask(AllocationSpace identity) {
  if (Page* page = GetSweepingPageSafe(identity)) {
    ParallelSweepPage(page, identity);
  }
  return sweeping_list_[GetSweepSpaceIndex(identity)].empty();
}
    
    void Assembler::fild_d(Operand adr) {
  EnsureSpace ensure_space(this);
  EMIT(0xDF);
  emit_operand(ebp, adr);
}
    
    static const ByteMnemonic zero_operands_instr[] = {
  {0xC3, 'ret', UNSET_OP_ORDER},
  {0xC9, 'leave', UNSET_OP_ORDER},
  {0x90, 'nop', UNSET_OP_ORDER},
  {0xF4, 'hlt', UNSET_OP_ORDER},
  {0xCC, 'int3', UNSET_OP_ORDER},
  {0x60, 'pushad', UNSET_OP_ORDER},
  {0x61, 'popad', UNSET_OP_ORDER},
  {0x9C, 'pushfd', UNSET_OP_ORDER},
  {0x9D, 'popfd', UNSET_OP_ORDER},
  {0x9E, 'sahf', UNSET_OP_ORDER},
  {0x99, 'cdq', UNSET_OP_ORDER},
  {0x9B, 'fwait', UNSET_OP_ORDER},
  {0xFC, 'cld', UNSET_OP_ORDER},
  {0xAB, 'stos', UNSET_OP_ORDER},
  {-1, '', UNSET_OP_ORDER}
};
    
    // The ExtraArg1Register not part of the real JS calling convention and is
// mostly there to simplify consistent interface descriptor definitions across
// platforms. Note that on ia32 it aliases kJavaScriptCallCodeStartRegister.
constexpr Register kJavaScriptCallExtraArg1Register = ecx;
    
    #define SSSE3_INSTRUCTION_LIST(V) \
  V(phaddd, 66, 0F, 38, 02)       \
  V(phaddw, 66, 0F, 38, 01)       \
  V(pshufb, 66, 0F, 38, 00)       \
  V(psignb, 66, 0F, 38, 08)       \
  V(psignw, 66, 0F, 38, 09)       \
  V(psignd, 66, 0F, 38, 0A)
    
    
    {
    {    BIND(&end);
    return var_result.value();
  };
  auto floatFunction = [=](Node* lhs, Node* rhs) {
    return Float64Sub(lhs, rhs);
  };
  return Generate_BinaryOperationWithFeedback(
      context, lhs, rhs, slot_id, feedback_vector, smiFunction, floatFunction,
      Operation::kSubtract, rhs_is_smi);
}
    
    class RenderActionAddEvent : public RenderAction {
 public:
  explicit RenderActionAddEvent(const std::string &page_id,
                                const std::string &ref,
                                const std::string &event);
    }
    
    class RenderActionCreateFinish : public RenderAction {
 public:
  explicit RenderActionCreateFinish(const std::string &page_id);
    }
    
        /**
     *  unicode to utf8 convertor with zero dependency inspired by java sdk character source
     * */
    void utf16_convert_to_utf8_string(uint16_t *utf16, int length, std::string& utf8);
    void utf16_convert_to_utf8_quote_string(uint16_t *utf16, int length, std::string& utf8);
    /**
     * return byte count in utf8, buffer size should can contains convert values
     * */
    int utf16_convert_to_utf8_cstr(uint16_t *utf16, int length, char* buffer);
    int utf16_convert_to_utf8_quote_cstr(uint16_t *utf16, int length, char* buffer);