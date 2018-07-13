
        
        namespace message_descriptor {
PyObject* NewMessageFieldsByName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByCamelcaseName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByNumber(const Descriptor* descriptor);
PyObject* NewMessageFieldsSeq(const Descriptor* descriptor);
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_H__
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__

    
    // Author: kenton@google.com (Kenton Varda)
    
    
    {
    {
    {
    {
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    using LogCallbackRegistryStore = dmlc::ThreadLocalStore<LogCallbackRegistry>;
    
    #include <dmlc/omp.h>
#include <xgboost/logging.h>
#include <algorithm>
#include '../common/math.h'
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
    #endif  // GUETZLI_ENTROPY_ENCODE_H_

    
    
    {}  // namespace guetzli
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    void ComputeBlockIDCT(const coeff_t* block, uint8_t* out) {
  coeff_t colidcts[kDCTBlockSize];
  const int kColScale = 11;
  const int kColRound = 1 << (kColScale - 1);
  for (int x = 0; x < 8; ++x) {
    int colbuf[8] = { 0 };
    Compute1dIDCT(&block[x], 8, colbuf);
    for (int y = 0; y < 8; ++y) {
      colidcts[8 * y + x] = (colbuf[y] + kColRound) >> kColScale;
    }
  }
  const int kRowScale = 18;
  const int kRowRound = 257 << (kRowScale - 1);  // includes offset by 128
  for (int y = 0; y < 8; ++y) {
    const int rowidx = 8 * y;
    int rowbuf[8] = { 0 };
    Compute1dIDCT(&colidcts[rowidx], 1, rowbuf);
    for (int x = 0; x < 8; ++x) {
      out[rowidx + x] =
          std::max(0, std::min(255, (rowbuf[x] + kRowRound) >> kRowScale));
    }
  }
}
    
    
    {}  // namespace guetzli
    
      /**
   * Construct a new string by replacing the characters denoted by the half-open
   *   range [`first`,`last`) within this string with the `that_count`
   *   characters from string `that` starting at position `that_pos`.
   * \note Equivalent to
   *   <tt>creplace(first - data(), last - first, that, that_pos,
   *   that_count)</tt>
   */
  template <std::size_t M>
  constexpr BasicFixedString<Char, N + M> creplace(
      const Char* first,
      const Char* last,
      const BasicFixedString<Char, M>& that,
      std::size_t that_pos,
      std::size_t that_count) const noexcept(false) {
    return creplace(first - data_, last - first, that, that_pos, that_count);
  }
    
    
    {// Instantiate the most common Future types to save compile time
template class SemiFuture<Unit>;
template class SemiFuture<bool>;
template class SemiFuture<int>;
template class SemiFuture<int64_t>;
template class SemiFuture<std::string>;
template class SemiFuture<double>;
template class Future<Unit>;
template class Future<bool>;
template class Future<int>;
template class Future<int64_t>;
template class Future<std::string>;
template class Future<double>;
} // namespace folly
    
    void IOThreadPoolExecutor::add(
    Func func,
    std::chrono::milliseconds expiration,
    Func expireCallback) {
  ensureActiveThreads();
  SharedMutex::ReadHolder r{&threadListLock_};
  if (threadList_.get().empty()) {
    throw std::runtime_error('No threads available');
  }
  auto ioThread = pickThread();
    }
    
    template <typename DigestT, typename ClockT>
void BufferedStat<DigestT, ClockT>::append(double value, TimePoint now) {
  if (UNLIKELY(now > expiry_.load(std::memory_order_relaxed).tp)) {
    std::unique_lock<SharedMutex> g(mutex_, std::try_to_lock_t());
    if (g.owns_lock()) {
      doUpdate(now, g);
    }
  }
  digestBuilder_.append(value);
}
    
    #pragma once
    
    #include <atomic>
#include <memory>
#include <mutex>
#include <queue>