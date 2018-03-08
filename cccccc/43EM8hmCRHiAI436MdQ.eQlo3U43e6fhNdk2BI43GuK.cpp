
        
        
    {  std::unique_ptr<PartialRunState> partial_run = MakeUnique<PartialRunState>();
  partial_run->cancellation_manager = MakeUnique<CancellationManager>();
  *cancellation_manager = partial_run->cancellation_manager.get();
  step_id_to_partial_run_[step_id] = std::move(partial_run);
  return true;
}
    
    #include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/gtl/array_slice.h'
#include 'tensorflow/core/platform/types.h'
    
    #endif  // TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // A PluginConfig describes the set of plugins to be used by a StreamExecutor
// instance. Each plugin is defined by an arbitrary identifier, usually best set
// to the address static member in the implementation (to avoid conflicts).
//
// A PluginConfig may be passed to the StreamExecutor constructor - the plugins
// described therein will be used to provide BLAS, DNN, FFT, and RNG
// functionality. Platform-appropriate defaults will be used for any un-set
// libraries. If a platform does not support a specified plugin (ex. cuBLAS on
// an OpenCL executor), then an error will be logged and no plugin operations
// will succeed.
//
// The StreamExecutor BUILD target does not link ANY plugin libraries - even
// common host fallbacks! Any plugins must be explicitly linked by dependent
// targets. See the cuda, opencl and host BUILD files for implemented plugin
// support (search for 'plugin').
class PluginConfig {
 public:
  // Value specifying the platform's default option for that plugin.
  static const PluginId kDefault;
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #endif  // TENSORFLOW_PLATFORM_PREFETCH_H_

    
    namespace tensorflow {
    }
    
    
    {    input_buffer_.reset(new io::InputBuffer(file_.get(), kBufferSize));
    for (; line_number_ < skip_header_lines_; ++line_number_) {
      string line_contents;
      Status status = input_buffer_->ReadLine(&line_contents);
      if (errors::IsOutOfRange(status)) {
        // We ignore an end of file error when skipping header lines.
        // We will end up skipping this file.
        return Status::OK();
      }
      TF_RETURN_IF_ERROR(status);
    }
    return Status::OK();
  }
    
      // If instruction is part of inputs, don't reset the bit_vector.
  if (std::find(inputs.begin(), inputs.end(), instruction) == inputs.end()) {
    bit_vector.SetToZero();
  }
  bit_vector.Set(GetIndex(instruction));
  for (const HloInstruction* input : inputs) {
    bit_vector.OrWith(GetBitVector(input));
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {    bool checkSubsetPublic( const CvMat* ms1, int count, bool checkPartialSubset );
};
    
    /** @file
 * @deprecated Use @ref cudev instead.
 */
    
    #endif //HAVE_LAPACK
#endif //OPENCV_CORE_HAL_INTERNAL_HPP

    
    
    {        return dlsym(h, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) GetProcAddress(name)
#endif
    
    /**
 * @brief A backing storage domain name, used for key/value based storage.
 *
 * There are certain 'cached' variables such as a node-unique UUID or negotiated
 * 'node_key' following enrollment. If a value or setting must persist between
 * osqueryi or osqueryd runs it should be stored using the kPersistentSetting%s
 * domain.
 */
extern const std::string kPersistentSettings;
    
     private:
  /**
   * @brief Default constructor.
   *
   * Since instances of Dispatcher should only be created via instance(),
   * Dispatcher's constructor is private.
   */
  Dispatcher() = default;
  virtual ~Dispatcher() = default;
    
      /**
   * @brief Halt the EventPublisher run loop.
   *
   * Any EventSubscriber%s with Subscription%s for this EventPublisher will
   * become useless. osquery callers MUST deregister events.
   * EventPublisher%s assume they can hook/trampoline, which requires cleanup.
   * This will tear down and remove the publisher if the run loop did not start.
   * Otherwise it will call end on the publisher and assume the run loop will
   * tear down and remove.
   *
   * @param pub The string label for the EventPublisher.
   *
   * @return Did the EventPublisher deregister cleanly.
   */
  static Status deregisterEventPublisher(const EventPublisherRef& pub);
    
    #pragma once
    
      /**
   * @brief implicit conversion to bool
   *
   * Allows easy use of Status in an if statement, as below:
   *
   * @code{.cpp}
   *   if (doSomethingThatReturnsStatus()) {
   *     LOG(INFO) << 'Success!';
   *   }
   * @endcode
   */
  /* explicit */ explicit operator bool() const {
    return ok();
  }
    
    KMOD_EXPLICIT_DECL(com.facebook.security.osquery,
                   STR(OSQUERY_KERNEL_COMMUNICATION_VERSION),
                   _start,
                   _stop)
DECLHIDDEN(kmod_start_func_t *) _realmain = OsqueryStart;
DECLHIDDEN(kmod_stop_func_t *) _antimain = OsqueryStop;
DECLHIDDEN(int) _kext_apple_cc = __APPLE_CC__;

    
    class CarverTests : public testing::Test {
 public:
  CarverTests() {
    fs::create_directories(kFakeDirectory + '/files_to_carve/');
    writeTextFile(kFakeDirectory + '/files_to_carve/secrets.txt',
                  'This is a message I'd rather no one saw.');
    writeTextFile(kFakeDirectory + '/files_to_carve/evil.exe',
                  'MZP\x00\x02\x00\x00\x00\x04\x00\x0f\x00\xff\xff');
    }
    }
    
    namespace errc = boost::system::errc;
namespace fs = boost::filesystem;
namespace pt = boost::property_tree;
    
    Status platformStrncpy(char* dst, size_t nelms, const char* src, size_t count) {
  if (dst == nullptr || src == nullptr || nelms == 0) {
    return Status(1, 'Failed to strncpy: invalid arguments');
  }
    }
    
    
    {
    {      if (sharpenmap[index]) {
        if (sharpen) yuv[channel][index] = sharpened[index];
      } else if (blurmap[index]) {
        if (blur) yuv[channel][index] = blurred[index];
      }
    }
  }
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    // Definition of error codes for parsing jpeg files.
    
      // Fill in 2nd level tables and add pointers to root table.
  table += table_size;
  table_size = 0;
  low = 0;
  for (len = kJpegHuffmanRootTableBits + 1;
       len <= kJpegHuffmanMaxBitLength; ++len) {
    for (; count[len] > 0; --count[len]) {
      // Start a new sub-table if the previous one is full.
      if (low >= table_size) {
        table += table_size;
        table_bits = NextTableBitSize(count, len);
        table_size = 1 << table_bits;
        total_size += table_size;
        low = 0;
        lut[key].bits = table_bits + kJpegHuffmanRootTableBits;
        lut[key].value = (table - lut) - key;
        ++key;
      }
      code.bits = len - kJpegHuffmanRootTableBits;
      code.value = symbols[idx++];
      reps = 1 << (table_bits - code.bits);
      while (reps--) {
        table[low++] = code;
      }
    }
  }
    
    namespace fuzzer {
    }
    
      void ExecuteCallback(const uint8_t *Data, size_t Size);
  size_t RunOne(const uint8_t *Data, size_t Size);
    
    // The control file example:
//
// 3 # The number of inputs
// 1 # The number of inputs in the first corpus, <= the previous number
// file0
// file1
// file2  # One file name per line.
// STARTED 0 123  # FileID, file size
// DONE 0 1 4 6 8  # FileID COV1 COV2 ...
// STARTED 1 456  # If DONE is missing, the input crashed while processing.
// STARTED 2 567
// DONE 2 8 9
bool Merger::Parse(std::istream &IS, bool ParseCoverage) {
  LastFailure.clear();
  std::string Line;
    }
    
    struct MergeFileInfo {
  std::string Name;
  size_t Size = 0;
  std::vector<uint32_t> Features;
};
    
      /// Creates a cross-over of two pieces of Data, returns its size.
  size_t CrossOver(const uint8_t *Data1, size_t Size1, const uint8_t *Data2,
                   size_t Size2, uint8_t *Out, size_t MaxOutSize);
    
    #endif  // LLVM_FUZZER_OPTIONS_H

    
    // TableOfRecentCompares (TORC) remembers the most recently performed
// comparisons of type T.
// We record the arguments of CMP instructions in this table unconditionally
// because it seems cheaper this way than to compute some expensive
// conditions inside __sanitizer_cov_trace_cmp*.
// After the unit has been executed we may decide to use the contents of
// this table to populate a Dictionary.
template<class T, size_t kSizeT>
struct TableOfRecentCompares {
  static const size_t kSize = kSizeT;
  struct Pair {
    T A, B;
  };
  void Insert(size_t Idx, T Arg1, T Arg2) {
    Idx = Idx % kSize;
    Table[Idx].A = Arg1;
    Table[Idx].B = Arg2;
  }
    }