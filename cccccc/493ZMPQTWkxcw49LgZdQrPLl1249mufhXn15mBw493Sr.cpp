
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
    }
    
    struct StatusTestParam {
  Status executor_status;
  Status partial_run_status;
  Status expected_status;
};
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  TF_DISALLOW_COPY_AND_ASSIGN(RecordWriter);
};
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
    
      int64 end(int d) const {
    DCHECK_GE(d, 0);
    DCHECK_LT(d, dims());
    return start(d) + length(d);
  }
    
    // Adds resource events for a single device.
void AddResourceMetadata(uint32 device_id,
                         const std::map<uint32, const Resource *> &resources,
                         string *json) {
  for (const auto &pair : resources) {
    uint32 resource_id = pair.first;
    const Resource &resource = *pair.second;
    if (!resource.name().empty()) {
      Appendf(json,
              R'({'ph':'M','pid':%u,'tid':%u,)'
              R'('name':'thread_name','args':{)',
              device_id, resource_id);
      AppendEscapedName(json, resource.name());
      Appendf(json, '}},');
    }
    Appendf(json,
            R'({'ph':'M','pid':%u,'tid':%u,)'
            R'('name':'thread_sort_index','args':{'sort_index':%u}},)',
            device_id, resource_id, resource_id);
  }
}
    
    /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
      bool isEmpty() const {
    return Parts.isEmpty();
  }
    
    #include 'swift/Runtime/HeapObject.h'
#include <mutex>
    
    #ifndef SWIFT_INDEX_INDEX_H
#define SWIFT_INDEX_INDEX_H
    
      /// The name of the buffer, which should be the absolute path of the input
  /// filename.
  const StringRef BufferName;
    
        UINT createDeviceFlags = 0;
    
    
    {
    {
    {
    {                        const float eps = 1e-4f;
                        //TODO: perhaps it is better to normalize the cross product by norms of the tangent vectors
                        if (fabs(tangentVector_1.cross(tangentVector_2)) < eps)
                        {
                            isGeneralPosition = false;
                        }
                    }
                }
            }
        }
        while(!isGeneralPosition);
    }
    else
    {
        //create points in a degenerate position (there are at least 3 points belonging to the same line)
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    #if defined(__linux__)
    #include <dlfcn.h>
    #include <stdio.h>
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdFft.Runtime.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
     private:
  std::vector<TestPartResult> array_;
    
      // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // This does NOT check that a directory (or file) actually exists.
  bool IsDirectory() const;
    
    $for j [[
    
        virtual const ParamGeneratorInterface<T>* BaseGenerator() const {
      return base_;
    }
    virtual void Advance() {
      ++iterator_;
      value_.reset();
    }
    virtual ParamIteratorInterface<T>* Clone() const {
      return new Iterator(*this);
    }
    // We need to use cached value referenced by iterator_ because *iterator_
    // can return a temporary object (and of type other then T), so just
    // having 'return &*iterator_;' doesn't work.
    // value_ is updated here and not in Advance() because Advance()
    // can advance iterator_ beyond the end of the range, and we cannot
    // detect that fact. The client code, on the other hand, is
    // responsible for not calling Current() on an out-of-range iterator.
    virtual const T* Current() const {
      if (value_.get() == NULL)
        value_.reset(new T(*iterator_));
      return value_.get();
    }
    virtual bool Equals(const ParamIteratorInterface<T>& other) const {
      // Having the same base generator guarantees that the other
      // iterator is of the same type and we can downcast.
      GTEST_CHECK_(BaseGenerator() == other.BaseGenerator())
          << 'The program attempted to compare iterators '
          << 'from different generators.' << std::endl;
      return iterator_ ==
          CheckedDowncastToActualType<const Iterator>(&other)->iterator_;
    }
    
    
    { private:
  String();  // Not meant to be instantiated.
};  // class String
    
    
    {  // Bring back to range 0-255
  for (size_t i = 0; i < yuv[0].size(); i++) {
    yuv[0][i] *= 255.0;
    yuv[1][i] = (yuv[1][i] + 0.5f) * 255.0f;
    yuv[2][i] = (yuv[2][i] + 0.5f) * 255.0f;
  }
  return yuv;
}
    
    // kDCTMatrix[8*u+x] = 0.5*alpha(u)*cos((2*x+1)*u*M_PI/16),
// where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
static const double kDCTMatrix[64] = {
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.3535533906,  0.3535533906,  0.3535533906,  0.3535533906,
  0.4903926402,  0.4157348062,  0.2777851165,  0.0975451610,
 -0.0975451610, -0.2777851165, -0.4157348062, -0.4903926402,
  0.4619397663,  0.1913417162, -0.1913417162, -0.4619397663,
 -0.4619397663, -0.1913417162,  0.1913417162,  0.4619397663,
  0.4157348062, -0.0975451610, -0.4903926402, -0.2777851165,
  0.2777851165,  0.4903926402,  0.0975451610, -0.4157348062,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.3535533906, -0.3535533906, -0.3535533906,  0.3535533906,
  0.2777851165, -0.4903926402,  0.0975451610,  0.4157348062,
 -0.4157348062, -0.0975451610,  0.4903926402, -0.2777851165,
  0.1913417162, -0.4619397663,  0.4619397663, -0.1913417162,
 -0.1913417162,  0.4619397663, -0.4619397663,  0.1913417162,
  0.0975451610, -0.2777851165,  0.4157348062, -0.4903926402,
  0.4903926402, -0.4157348062,  0.2777851165, -0.0975451610,
};
    
        // The nodes are:
    // [0, n): the sorted leaf nodes that we start with.
    // [n]: we add a sentinel here.
    // [n + 1, 2n): new parent nodes are added here, starting from
    //              (n+1). These are naturally in ascending order.
    // [2n]: we add a sentinel at the end as well.
    // There will be (2n+1) elements at the end.
    const HuffmanTree sentinel(~static_cast<uint32_t>(0), -1, -1);
    tree[n] = sentinel;
    tree[n + 1] = sentinel;
    
    namespace guetzli {
    }
    
    #endif  // GUETZLI_FAST_LOG_H_

    
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
    
    namespace guetzli {
    }
    
    #include 'guetzli/fdct.h'
    
    #ifndef GUETZLI_JPEG_DATA_ENCODER_H_
#define GUETZLI_JPEG_DATA_ENCODER_H_
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
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
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli

    
      virtual const char* Name() const override;
    
    /**
 * @brief get match IoCtx from _prefix_pool_map
 * @details [long description]
 *
 * @param prefix [description]
 * @return [description]
 *
 */
librados::IoCtx* EnvLibrados::_GetIoctx(const std::string& fpath) {
  auto is_prefix = [](const std::string & s1, const std::string & s2) {
    auto it1 = s1.begin(), it2 = s2.begin();
    while (it1 != s1.end() && it2 != s2.end() && *it1 == *it2) ++it1, ++it2;
    return it1 == s1.end();
  };
    }
    
    SyncPoint:: ~SyncPoint() {
  delete impl_;
}
    
      m_jSliceB = env->NewGlobalRef(DirectSliceJni::construct0(env));
  if(m_jSliceB == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
    
    class ComparatorJniCallback : public BaseComparatorJniCallback {
 public:
      ComparatorJniCallback(
        JNIEnv* env, jobject jComparator,
        const ComparatorJniCallbackOptions* copt);
      ~ComparatorJniCallback();
};
    
      void LoadDependency(const std::vector<SyncPointPair>& dependencies);
  void LoadDependencyAndMarkers(const std::vector<SyncPointPair>& dependencies,
    const std::vector<SyncPointPair>& markers);
  bool PredecessorsAllCleared(const std::string& point);
  void SetCallBack(const std::string& point,
    const std::function<void(void*)>& callback) {
  std::lock_guard<std::mutex> lock(mutex_);
  callbacks_[point] = callback;
}
    
    namespace folly {
namespace exception_tracer {
    }
    }
    
    /** Set implemented as an ordered singly-linked list.
 *
 *  A single writer thread may add or remove elements. Multiple reader
 *  threads may search the set concurrently with each other and with
 *  the writer's operations.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrSWMRSet {
  template <typename Node>
  struct Reclaimer {
    void operator()(Node* p) {
      delete p;
    }
  };
    }
    
    namespace folly {
    }
    
    FOLLY_ALWAYS_INLINE int __builtin_clzll(unsigned long long x) {
  unsigned long index;
  return int(_BitScanReverse64(&index, x) ? 63 - index : 64);
}
    
     private:
  typedef folly::Promise<bool> BoolPromise;
    
        void Lock(int64_t _timelock);  // ms
    void Lock();
    void Unlock();
    bool IsLocking();
    
    //
//  comm_frequency_limit.h
//  comm
//
//  Created by liucan on 13-11-23.
//
    
      protected:
    ServiceBase(const char* _servicename) : m_servicename(_servicename) {}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT