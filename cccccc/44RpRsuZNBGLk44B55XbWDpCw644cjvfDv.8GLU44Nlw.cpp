
        
          assert(peekType(msg) == thpp::Type::LONG_LONG);
  int64_t arg4 = unpackInteger(msg);
  assert(arg4 == LLONG_MAX);
    
    #include 'ATen/Tensor.h'
#include 'ATen/Context.h'
    
    bool cudnn_is_acceptable(const Tensor& self) {
  if (!globalContext().userEnabledCuDNN()) return false;
  if (!self.is_cuda()) return false;
  auto st = self.type().scalarType();
  if (!(st == kDouble || st == kFloat || st == kHalf)) return false;
  if (!AT_CUDNN_ENABLED()) return false;
  // NB: In the old Python code, there was also a test to see if the
  // cuDNN library was actually dynamically linked or not.  I'm not
  // sure if we can actually test this.
  return true;
}
    
    inline PyObject* load_scalar(void* data, at::ScalarType scalarType) {
  switch (scalarType) {
    case at::kByte: return THPUtils_packInt64(*(uint8_t*)data);
    case at::kChar: return THPUtils_packInt64(*(char*)data);
    case at::kShort: return THPUtils_packInt64(*(int16_t*)data);
    case at::kInt: return THPUtils_packInt64(*(int32_t*)data);
    case at::kLong: return THPUtils_packInt64(*(int64_t*)data);
    case at::kHalf: return PyFloat_FromDouble(at::convert<double, at::Half>(*(at::Half*)data));
    case at::kFloat: return PyFloat_FromDouble(*(float*)data);
    case at::kDouble: return PyFloat_FromDouble(*(double*)data);
    default: throw std::runtime_error('invalid type');
  }
}
    
    template <typename T>
struct constexpr_abs_helper<
    T,
    typename std::enable_if<
        std::is_integral<T>::value && !std::is_same<T, bool>::value &&
        std::is_unsigned<T>::value>::type> {
  static constexpr T go(T t) {
    return t;
  }
};
    
      /*
   * Returns a new TDigest constructed with values merged from the current
   * digest and the given sortedValues.
   */
  TDigest merge(Range<const double*> sortedValues) const;
    
    enum : uint16_t {
  kHeapMagic = 0xa5a5,
  // This memory segment contains an IOBuf that is still in use
  kIOBufInUse = 0x01,
  // This memory segment contains buffer data that is still in use
  kDataInUse = 0x02,
};
    
    using namespace folly;
    
     private:
  void onCompleted(AsyncIOOp* op);
  void maybeDequeue();
    
    
    {}  // namespace fuzzer
    
    // Parse a location, like:
// \\?\UNC\Server\Share\  \\?\C:\  \\Server\Share\  \  C:\  C:
// Returns number of characters considered if successful.
static size_t ParseLocation(const std::string &FileName) {
  size_t Pos = 0, Res;
    }
    
      void HandleMalloc(size_t Size);
    
      /// Mutates data by adding a word from the temporary automatic dictionary.
  size_t Mutate_AddWordFromTemporaryAutoDictionary(uint8_t *Data, size_t Size,
                                                   size_t MaxSize);
    
    using fuzzer::TS;
using fuzzer::RecordingMemcmp;
    
    bool ExecuteCommandAndReadOutput(const std::string &Command, std::string *Out) {
  FILE *Pipe = OpenProcessPipe(Command.c_str(), 'r');
  if (!Pipe) return false;
  char Buff[1024];
  size_t N;
  while ((N = fread(Buff, 1, sizeof(Buff), Pipe)) > 0)
    Out->append(Buff, N);
  return true;
}
    
    int ExecuteCommand(const std::string &Command);