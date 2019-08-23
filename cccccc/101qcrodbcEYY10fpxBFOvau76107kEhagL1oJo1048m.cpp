
        
        
    {  bool rword_indicates_list_item;
  bool rword_likely_starts_idea;
  bool rword_likely_ends_idea;
};
    
    namespace tesseract {
    }
    
    // A useful base struct to facilitate the common operation of sorting a vector
// of simple or smart-pointer data using a separate key. Similar to STL pair.
template <typename Key, typename Data>
struct KDPair {
  KDPair() = default;
  KDPair(Key k, Data d) : data(d), key(k) {}
    }
    
    // Enum describing the target to which a debugger command needs to
// be dispatched for exection.
enum CommandTarget {
  // A command targeting 'Request' needs to be handed off to a particular
  // request thread that is the target of the command.
  Request,
    }
    
    
    {
    {      auto keyVariant = iter.first();
      if (keyVariant.isString()) {
        HPHP::String key = keyVariant.toString();
        arr->setInPlace(key, tvToInitCell(*arrayValue));
      } else if (keyVariant.isInteger()) {
        int64_t key = keyVariant.toInt64();
        arr->setInPlace(key, tvToInitCell(*arrayValue));
      } else {
        throw DebuggerCommandException('Unsupported array key type.');
      }
      return true;
    }
  }
    
        if (i > 0) {
      if ((cur_type != prev_type) ||
          (cur_stype && prev_stype &&
           strcmp(cur_stype,prev_stype) != 0) ||
          (!cur_stype && cur_stype != prev_stype) ||
          (cur_ns && prev_ns && strcmp(cur_ns,prev_ns)) ||
          (!cur_ns && cur_ns != prev_ns)) {
        different = true;
        break;
      }
    }
    
      static void InitFromSpec(folly::StringPiece spec, int* levels) {
    std::vector<folly::StringPiece> pieces;
    folly::split(',', spec, pieces);
    for (auto piece : pieces) {
      folly::StringPiece moduleName;
      int level;
      try {
        if (!folly::split(':', piece, moduleName, level)) {
          moduleName = piece;
          level = 1;
        }
      } catch (const std::exception& re) {
        std::cerr <<
          folly::format('Ignoring invalid TRACE component: {}\n', piece);
        continue;
      }
    }
    }
    
    #define X(vasm_src, vasm_dst_reg, vasm_dst_imm, vasm_load, vasm_exts)   \
void lowerForPPC64(const VLS& e, Vout& v, vasm_src& inst) {             \
  Vptr p = inst.s1;                                                     \
  Vreg tmp;                                                             \
  Vreg tmp2 = v.makeReg();                                              \
  Vreg tmp3 = v.makeReg();                                              \
  v << vasm_load{p, tmp2};                                              \
  v << vasm_exts{tmp2, tmp3};                                           \
  if (patchImm(inst.s0, v, tmp)) v << vasm_dst_reg{tmp, tmp3, inst.sf}; \
  else v << vasm_dst_imm{inst.s0, tmp3, inst.sf};                       \
}
    
      static tv_rval NvGetStr(const ArrayData*, const StringData*) {
    return nullptr;
  }
  static constexpr auto NvTryGetStr = &NvGetStr;
    
    #include <limits>
#include <folly/Bits.h>
    
    
    {  private:
    const NameValueTable* m_tab;
    ssize_t m_idx;
  };
    
    #define ARRAY_ISSET_HELPER_TABLE(m) \
  /* name           keyType */      \
  m(arrayIssetS,    KeyType::Str)   \
  m(arrayIssetI,    KeyType::Int)   \