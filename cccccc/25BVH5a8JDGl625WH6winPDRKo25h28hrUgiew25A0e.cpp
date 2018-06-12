
        
        enum CommentPlacement {
  commentBefore = 0,      ///< a comment placed on the line before a value
  commentAfterOnSameLine, ///< a comment just after a value on the same line
  commentAfter, ///< a comment on the line after a value (only make sense for
  /// root value)
  numberOfCommentPlacement
};
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_field_base.h>
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    #include 'override_macros.h'
    
    #include 'override_macros.h'
    
    static inline uint64_t decodeUInt64BE(const uint8_t *data) {
  return (((uint64_t)data[7])<< 0) | (((uint64_t)data[6])<< 8) |
         (((uint64_t)data[5])<<16) | (((uint64_t)data[4])<<24) |
         (((uint64_t)data[3])<<32) | (((uint64_t)data[2])<<40) |
         (((uint64_t)data[1])<<48) | (((uint64_t)data[0])<<56);
}
    
      explicit WorkloadStats(State guardedState);
  ~WorkloadStats();
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  // We don't know for sure what's live.
  PhysRegSaver(v, abi().gpUnreserved - abi().calleeSaved);
    }
    
      ArrayInit returnArray(3, ArrayInit::Map{});
  returnArray.set(s_GMP_g, mpzToGMPObject(gmpReturnG));
  returnArray.set(s_GMP_s, mpzToGMPObject(gmpReturnS));
  returnArray.set(s_GMP_t, mpzToGMPObject(gmpReturnT));
    
    
    {}
    
    #include <signal.h>
#include <unistd.h>
    
      if (ret) {
    cond.unlink();
  }