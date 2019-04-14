
        
          scoped_ptr<base::Value> value_option(
      converter->FromV8Value(options, isolate->GetCurrentContext()));
  if (!value_option.get() ||
      !value_option->IsType(base::Value::TYPE_DICTIONARY))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'option' passed to AllocateObject')));
    
       void Call(const std::string& method,
                    const base::ListValue& arguments) override;
   void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) override;
    
    bool MenuDelegate::IsCommandIdChecked(int command_id) const {
  if (command_id < 0)
    return false;
    }
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    void MenuItem::Create(const base::DictionaryValue& option) {
  std::string type;
  option.GetString('type', &type);
  submenu_ = NULL;
  gtk_accel_group = NULL;
    }
    
    
    {} // namespace extensions
#endif

    
    
       case URX_CARET:                    //  ^, test for start of line
            if (fp->fInputIdx != fAnchorStart) {
                fp = (REStackFrame *)fStack->popFrame(fFrameSize);
            }
            break;
    
    
ScriptSet &ScriptSet::set(UScriptCode script, UErrorCode &status) {
    if (U_FAILURE(status)) {
        return *this;
    }
    if (script < 0 || script >= (int32_t)sizeof(bits) * 8) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return *this;
    }
    uint32_t index = script / 32;
    uint32_t bit   = 1 << (script & 31);
    bits[index] |= bit;
    return *this;
}
    
    
    {
    {        if (matchlength > 0) {
            // if matchlength is 0 we are at the start of the iteration
            if (m_search_->isOverlap) {
                offset ++;
            }
            else {
                offset += matchlength;
            }
        }
        return handleNext(offset, status);
    }
    return USEARCH_DONE;
}
    
    #include 'unicode/format.h'
#include 'unicode/locid.h'
#include 'unicode/parseerr.h'
#include 'unicode/utypes.h'
#include 'uvector.h'
#include 'hash.h'
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    void StoreBuffer::MoveEntriesToRememberedSet(int index) {
  if (!lazy_top_[index]) return;
  DCHECK_GE(index, 0);
  DCHECK_LT(index, kStoreBuffers);
  Address last_inserted_addr = kNullAddress;
  MemoryChunk* chunk = nullptr;
    }
    
    
    {
    {}  // namespace internal
}  // namespace v8

    
      void FlushToGlobal(int task_id) {
    PublishPushSegmentToGlobal(task_id);
    PublishPopSegmentToGlobal(task_id);
  }
    
     private:
  // Set the ModRM byte without an encoded 'reg' register. The
  // register is encoded later as part of the emit_operand operation.
  inline void set_modrm(int mod, Register rm) {
    DCHECK_EQ(mod & -4, 0);
    buf_[0] = mod << 6 | rm.code();
    len_ = 1;
  }
    
      // Replace the current (input) frame with the output frames.
  Label outer_push_loop, inner_push_loop,
      outer_loop_header, inner_loop_header;
  // Outer loop state: eax = current FrameDescription**, edx = one
  // past the last FrameDescription**.
  __ mov(edx, Operand(eax, Deoptimizer::output_count_offset()));
  __ mov(eax, Operand(eax, Deoptimizer::output_offset()));
  __ lea(edx, Operand(eax, edx, times_system_pointer_size, 0));
  __ jmp(&outer_loop_header);
  __ bind(&outer_push_loop);
  // Inner loop state: esi = current FrameDescription*, ecx = loop
  // index.
  __ mov(esi, Operand(eax, 0));
  __ mov(ecx, Operand(esi, FrameDescription::frame_size_offset()));
  __ jmp(&inner_loop_header);
  __ bind(&inner_push_loop);
  __ sub(ecx, Immediate(sizeof(uint32_t)));
  __ push(Operand(esi, ecx, times_1, FrameDescription::frame_content_offset()));
  __ bind(&inner_loop_header);
  __ test(ecx, ecx);
  __ j(not_zero, &inner_push_loop);
  __ add(eax, Immediate(kSystemPointerSize));
  __ bind(&outer_loop_header);
  __ cmp(eax, edx);
  __ j(below, &outer_push_loop);
    
      // Rest of parameters passed to JSEntry and JSConstructEntry.
  static constexpr int kNewTargetArgOffset = +3 * kSystemPointerSize;
  static constexpr int kFunctionArgOffset = +4 * kSystemPointerSize;
  static constexpr int kReceiverArgOffset = +5 * kSystemPointerSize;
  static constexpr int kArgcOffset = +6 * kSystemPointerSize;
  static constexpr int kArgvOffset = +7 * kSystemPointerSize;
    
      // ---------------------------------------------------------------------------
  // Runtime calls
    
      // StoreIC implementation.