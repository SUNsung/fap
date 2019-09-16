
        
        
#ifndef VPX_PORTS_X86_H_
#define VPX_PORTS_X86_H_
#include <stdlib.h>
    
    #define CHECK_ACCESSOR(accesor, opstr, classname, propname)                    \
  if (!accesor) {                                                              \
    raise_error('Cannot directly %s the property %s::$%s',                     \
                 opstr, classname->data(), propname.data());                   \
  }
    
    char *string_html_encode_extra(const char *input, int &len,
                               StringHtmlEncoding flags,
                               const AsciiMap *asciiMap) {
  assert(input);
  /**
   * Though seems to be wasting memory a lot, we have to realize most of the
   * time this function is called with small strings, or fragments of HTMLs.
   * Allocating/deallocating anything less than 1K is trivial these days, and
   * we want avoid string copying as much as possible. Of course, the return
   * char * is really sent back at large, occupying unnessary space for
   * potentially longer time than we need, we have to realize the two closest
   * solutions are not that much better, either:
   *
   * 1. pre-calculate size by iterating through the string once: too time
   *    consuming;
   * 2. take a guess and double buffer size when over: still wasting, and
   *    it may not save that much.
   */
  char *ret = (char *)malloc(len * 8uL + 1);
  if (!ret) {
    return nullptr;
  }
  char *q = ret;
  const char *rep = u8'\ufffd';
  int32_t srcPosBytes;
  for (srcPosBytes = 0; srcPosBytes < len; /* incremented in-loop */) {
    unsigned char c = input[srcPosBytes];
    if (c && c < 128) {
      srcPosBytes++; // Optimize US-ASCII case
      if ((asciiMap->map[c & 64 ? 1 : 0] >> (c & 63)) & 1) {
        switch (c) {
          case ''':
            *q++ = '&'; *q++ = 'q'; *q++ = 'u';
            *q++ = 'o'; *q++ = 't'; *q++ = ';';
            break;
          case '\'':
            *q++ = '&'; *q++ = '#'; *q++ = '0';
            *q++ = '3'; *q++ = '9'; *q++ = ';';
            break;
          case '<':
            *q++ = '&'; *q++ = 'l'; *q++ = 't'; *q++ = ';';
            break;
          case '>':
            *q++ = '&'; *q++ = 'g'; *q++ = 't'; *q++ = ';';
            break;
          case '&':
            *q++ = '&'; *q++ = 'a'; *q++ = 'm'; *q++ = 'p'; *q++ = ';';
            break;
          default:
            *q++ = '&'; *q++ = '#';
            *q++ = c >= 100 ? '1' : '0';
            *q++ = ((c / 10) % 10) + '0';
            *q++ = (c % 10) + '0';
            *q++ = ';';
            break;
        }
      } else {
        *q++ = c;
      }
    } else if (flags & STRING_HTML_ENCODE_UTF8) {
      UChar32 curCodePoint;
      U8_NEXT(input, srcPosBytes, len, curCodePoint);
      if ((flags & STRING_HTML_ENCODE_NBSP) && curCodePoint == 0xC2A0) {
        *q++ = '&'; *q++ = 'n'; *q++ = 'b'; *q++ = 's'; *q++ = 'p'; *q++ = ';';
      } else if (curCodePoint <= 0) {
        if (flags & STRING_HTML_ENCODE_UTF8IZE_REPLACE) {
          if (flags & STRING_HTML_ENCODE_HIGH) {
            *q++ = '&'; *q++ = '#'; *q++ = 'x';
            *q++ = 'f'; *q++ = 'f'; *q++ = 'f'; *q++ = 'd';
            *q++ = ';';
          } else {
            const char *r = rep;
            while (*r) *q++ = *r++;
          }
        }
      } else if (flags & STRING_HTML_ENCODE_HIGH) {
        q += sprintf(q, '&#x%x;', curCodePoint);
      } else {
        int32_t pos = 0;
        U8_APPEND_UNSAFE(q, pos, curCodePoint);
        q += pos;
      }
    } else {
      srcPosBytes++; // Optimize US-ASCII case
      if (c == 0xa0) {
        *q++ = '&'; *q++ = 'n'; *q++ = 'b'; *q++ = 's'; *q++ = 'p'; *q++ = ';';
      } else if (flags & STRING_HTML_ENCODE_HIGH) {
        *q++ = '&'; *q++ = '#';
        *q++ = c >= 200 ? '2' : '1';
        *q++ = ((c / 10) % 10) + '0';
        *q++ = (c % 10) + '0';
        *q++ = ';';
      } else {
        *q++ = c;
      }
    }
  }
  if (q - ret > INT_MAX) {
    free(ret);
    return nullptr;
  }
  *q = 0;
  len = q - ret;
  return ret;
}
    
    // Get number of huge pages that has been mapped in this process.
unsigned num_1g_pages();
unsigned num_2m_pages();
    
    #endif // incl_HPHP_SYNCHRONIZABLE_H_

    
    void cgShl(IRLS& env, const IRInstruction* inst) {
  implShift<shl,shlqi>(vmain(env), env, inst);
}
void cgShr(IRLS& env, const IRInstruction* inst) {
  implShift<sar,sarqi>(vmain(env), env, inst);
}
void cgLshr(IRLS& env, const IRInstruction* inst) {
  implShift<shr,shrqi>(vmain(env), env, inst);
}
    
    LookupResult lookupObjMethod(const Func*& f,
                             const Class* cls,
                             const StringData* methodName,
                             const Class* ctx,
                             bool raise = false);
    
      /*
   * Clear the extra data pointer in a IRInstruction.
   *
   * Used during IRUnit::gen to avoid having dangling IRExtraData*'s into stack
   * memory.
   */
  void clearExtra();
    
      /**
   * @brief Checks to see if there are any pending IO operations.
   *
   * This is mostly used after a read()/write() error in non-blocking mode to
   * determine the intention of the error. If read()/write() returns an error
   * and hasPendingIo() is true, this indicates that the read()/write()
   * operation didn't complete on time.
   */
  bool hasPendingIo() const {
    return has_pending_io_;
  }
    
    #ifdef OSQUERY_WINDOWS
/// Legacy thread ID to ensure that the windows service waits before exiting
DWORD kLegacyThreadId;
#endif
    
    #ifdef WIN32
  /*
   * @brief Constructor that accepts a pid_t
   *
   * Allow for the creation of a PlatformProcess object from a pid_t. On
   * Windows, PlatformPidType is not a pid_t because it cannot be assumed that
   * the PID will point to the expected process. After a process dies, the PID
   * can be immediately reused. Using HANDLEs (as what is done now) mitigates
   * this issue.
   */
  explicit PlatformProcess(pid_t pid);
#endif
    
    /**
 * @brief Windows helper function to lookup a SID from a username
 *
 * @returns a unique_ptr to a PSID
 */
std::unique_ptr<BYTE[]> getSidFromUsername(std::wstring accountName);
    
        // For each key requested by the parser, add a property tree reference.
    std::map<std::string, JSON> parser_config;
    for (const auto& key : parser->keys()) {
      if (obj.HasMember(key) && !obj[key].IsNull()) {
        if (!obj[key].IsArray() && !obj[key].IsObject()) {
          LOG(WARNING) << 'Error config ' << key
                       << ' should be an array or object';
          continue;
        }
    }
    }
    
    
    {
    {  // If we modify the input interval the splay will change.
  auto splay3 = restoreSplayedValue('pack_test_query_name', 3600 * 10);
  EXPECT_GE(splay3, 3600U * 10 - (360 * 10));
  EXPECT_LE(splay3, 3600U * 10 + (360 * 10));
  EXPECT_NE(splay, splay3);
}
}

    
      m_progress = 0;
  m_errors.clear();
    
      VirtualMemory virtual_memory_;
    
    
    {
    {}  // namespace internal
}  // namespace v8
    
      STATIC_ASSERT(kFloatSize == kSystemPointerSize);
  const int kFloatRegsSize = kFloatSize * XMMRegister::kNumRegisters;
  __ sub(esp, Immediate(kFloatRegsSize));
  for (int i = 0; i < config->num_allocatable_float_registers(); ++i) {
    int code = config->GetAllocatableFloatCode(i);
    XMMRegister xmm_reg = XMMRegister::from_code(code);
    int offset = code * kFloatSize;
    __ movss(Operand(esp, offset), xmm_reg);
  }
    
    
// Returns number of bytes used, including *data.
int DisassemblerIA32::JumpConditionalShort(byte* data, const char* comment) {
  byte cond = *data & 0x0F;
  byte b = *(data+1);
  byte* dest = data + static_cast<int8_t>(b) + 2;
  const char* mnem = jump_conditional_mnem[cond];
  AppendToBuffer('%s %s', mnem, NameOfAddress(dest));
  if (comment != nullptr) {
    AppendToBuffer(', %s', comment);
  }
  return 2;
}
    
    
    {  void TryProbeStubCacheTable(StubCache* stub_cache, StubCacheTable table_id,
                              Node* entry_offset, Node* name, Node* map,
                              Label* if_handler,
                              TVariable<MaybeObject>* var_handler,
                              Label* if_miss);
};