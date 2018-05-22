
        
        #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
      // Called by platform specific implementations of this class whenever a key
  // is struck. Only called for keys that have an observer registered.
  void NotifyKeyPressed(const ui::Accelerator& accelerator);
    
    namespace printing {
    }
    
    #endif  // CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_

    
    namespace IPC {
class Message;
}
    
        ATTR_SETTER_BASIC_IMPL(int64_t, i)
    ATTR_SETTER_BASIC_IMPL(float, f)
    ATTR_SETTER_BASIC_IMPL(std::string, s)
    ATTR_SETTER_LIST_IMPL(int64_t, ints)
    ATTR_SETTER_LIST_IMPL(float, floats)
    ATTR_SETTER_LIST_IMPL(std::string, strings)
    
                // Constructor.
            explicit FormalParameter(const std::string& p_name,
                const std::string& p_type,
                const std::string& p_description,
                const TypeConstraintMap& p_constraintMap = TypeConstraintMap());
    
        //‘GREATER’, ‘LESS’, ‘EQUALS,
    REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Greater)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Less)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Equal)
    
        // Unloads the data from memory.
    ~HTKChunk()
    {
        auto& chunkInfo = m_parent->m_chunks[m_chunkId];
        chunkInfo.ReleaseData(m_parent->m_verbosity);
    }
    
        // compute after single pass
    double m_mean; // mean of all values
    double m_rms;  // root mean square
    
    MATCHER_P(BufMatches, expected, '') {
  folly::IOBufEqualTo eq;
  return eq(*arg, *expected);
}
    
      friend constexpr bool operator<(
      const Char* a,
      const BasicFixedString& b) noexcept {
    return ordering::lt ==
        detail::fixedstring::compare_(
               a, 0u, folly::constexpr_strlen(a), b.data_, 0u, b.size_);
  }
    
    IOBuf::IOBuf(CreateOp, uint64_t capacity)
  : next_(this),
    prev_(this),
    data_(nullptr),
    length_(0),
    flagsAndSharedInfo_(0) {
  SharedInfo* info;
  allocExtBuffer(capacity, &buf_, &info, &capacity_);
  setSharedInfo(info);
  data_ = buf_;
}
    
    template <typename T>
constexpr ordering to_ordering(T c) {
  return c < T(0) ? ordering::lt : c > T(0) ? ordering::gt : ordering::eq;
}
    
    namespace folly {
    }
    
    #include <fcntl.h>
    
    class FOLLY_EXPORT QueueFullException : public std::runtime_error {
  using std::runtime_error::runtime_error; // Inherit constructors.
};