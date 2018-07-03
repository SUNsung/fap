
        
        
    { private:
  DebugOptions debug_options_;
};
    
    namespace tensorflow {
    }
    
    class RecordWriter {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  RecordWriter(WritableFile* dest,
               const RecordWriterOptions& options = RecordWriterOptions());
    }
    
    void SYCLDeviceContext::CopyCPUTensorToDevice(const Tensor *cpu_tensor,
                                              Device *device,
                                              Tensor *device_tensor,
                                              StatusCallback done) const {
  const int64 total_bytes = cpu_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(cpu_tensor);
    void *dst_ptr = DMAHelper::base(device_tensor);
    switch (cpu_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    #include 'tensorflow/core/kernels/cwise_ops_common.h'
    
    
    {  // From the zlib manual (http://www.zlib.net/manual.html):
  // The strategy parameter is used to tune the compression algorithm. Use the
  // value Z_DEFAULT_STRATEGY for normal data, Z_FILTERED for data produced by
  // a filter (or predictor), Z_HUFFMAN_ONLY to force Huffman encoding only
  // (no string match), or Z_RLE to limit match distances to one
  // (run-length encoding). Filtered data consists mostly of small values with
  // a somewhat random distribution. In this case, the compression algorithm is
  // tuned to compress them better. The effect of Z_FILTERED is to force more
  // Huffman coding and less string matching; it is somewhat intermediate
  // between Z_DEFAULT_STRATEGY and Z_HUFFMAN_ONLY. Z_RLE is designed to be
  // almost as fast as Z_HUFFMAN_ONLY, but give better compression for
  // PNG image data. The strategy parameter only affects the compression ratio
  // but not the correctness of the compressed output even if it is not set
  // appropriately. Z_FIXED prevents the use of dynamic Huffman codes, allowing
  // for a simpler decoder for special applications.
  int8 compression_strategy = Z_DEFAULT_STRATEGY;
};
    
      // If there are too few results, assume the result will be unreliable and
  // bail.
  const int64 how_many_results = previous_results_.size();
  const int64 earliest_time = previous_results_.front().first;
  const int64 samples_duration = current_time_ms - earliest_time;
  if ((how_many_results < minimum_count_) ||
      (samples_duration < (average_window_duration_ms_ / 4))) {
    *found_command = previous_top_label_;
    *score = 0.0f;
    *is_new_command = false;
    return Status::OK();
  }
    
    namespace {
    }
    
    #include <math.h>
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    enum JpegReadMode {
  JPEG_READ_HEADER,   // only basic headers
  JPEG_READ_TABLES,   // headers and tables (quant, Huffman, ...)
  JPEG_READ_ALL,      // everything
};
    
    int BuildJpegHuffmanTable(const int* count_in, const int* symbols,
                          HuffmanTableEntry* lut) {
  HuffmanTableEntry code;    // current table entry
  HuffmanTableEntry* table;  // next available space in table
  int len;         // current code length
  int idx;         // symbol index
  int key;         // prefix code
  int reps;        // number of replicate key values in current table
  int low;         // low bits for current root entry
  int table_bits;  // key length of current table
  int table_size;  // size of current table
  int total_size;  // sum of root table size and 2nd level table sizes
    }
    
      OutputImageComponent& component(int c) { return components_[c]; }
  const OutputImageComponent& component(int c) const { return components_[c]; }
    
    	if (!xlogger_IsEnabledFor((TLogLevel)_level)) {
		return;
	}
    
    bool WakeUpLock::IsLocking() {
    return ::wakeupLock_IsLocking(object_);
}
    
    
    {  private:
    size_t count_;
    uint64_t time_span_;
    std::list<uint64_t> touch_times_;
};
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // CheckHandler is the class constructed by failing CHECK macros. CheckHandler
// will log information about the failures and abort when it is destructed.
class CheckHandler {
 public:
  CheckHandler(const char* check, const char* file, const char* func, int line)
      : log_(GetErrorLogInstance()) {
    log_ << file << ':' << line << ': ' << func << ': Check `' << check
         << '' failed. ';
  }
    }
    
    // Macros for declaring flags.
#define DECLARE_bool(name) extern bool FLAG(name)
#define DECLARE_int32(name) extern int32_t FLAG(name)
#define DECLARE_int64(name) extern int64_t FLAG(name)
#define DECLARE_double(name) extern double FLAG(name)
#define DECLARE_string(name) extern std::string FLAG(name)
    
    
    {  // Print user counters
  for (const auto &ucn : user_counter_names_) {
    auto it = run.counters.find(ucn);
    if(it == run.counters.end()) {
      Out << ',';
    } else {
      Out << ',' << it->second;
    }
  }
  Out << '\n';
}
    
    #ifdef BENCHMARK_OS_EMSCRIPTEN
#include <emscripten.h>
#endif
    
    #include <cstdlib>
    
    
    {void SleepForSeconds(double seconds) {
  SleepForMicroseconds(static_cast<int>(seconds * kNumMicrosPerSecond));
}
#endif  // BENCHMARK_OS_WINDOWS
}  // end namespace benchmark
