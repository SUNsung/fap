
        
        
    { private:
  std::unordered_set<string> debug_urls_;
};
    
    #include <string>
    
    // Estimate the cost of running a Grappler item by actually running the
// corresponding TensorFlow graph on the specified cluster and measuring the
// runtimes.
class MeasuringCostEstimator : public CostEstimator {
 public:
  // Run the model for measurement_steps to measure its average cost.
  // When measurement_threads is greater than 0, use a threadpool of as many
  // threads to run the measurements; otherwise, run them serially. Does not
  // take ownership of cluster.
  explicit MeasuringCostEstimator(Cluster* cluster, int measurement_steps,
                                  int measurement_threads);
  ~MeasuringCostEstimator() override {}
    }
    
    // e.g. DriverVersion{346, 3, 4}
using DriverVersion = std::tuple<int, int, int>;
    
      // Calls Close() and logs if an error occurs.
  //
  // TODO(jhseu): Require that callers explicitly call Close() and remove the
  // implicit Close() call in the destructor.
  ~RecordWriter();
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
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
    
        const Tensor& contents = context->input(0);
    const Tensor& file_format_tensor = context->input(1);
    const Tensor& samples_per_second_tensor = context->input(2);
    const Tensor& bits_per_second_tensor = context->input(3);
    
        // TODO(jeff): Currently we leave uninitialized any portions of
    // merged that aren't covered by an index in indices.  What should we do?
    if (first_dim_size > 0) {
      // because the collision requirements, we have to deal with
      // collion first before send data to gpu kernel.
      // TODO(ekelsen): Instead of doing a serial scan on the CPU to pick the
      // last of duplicated indices, it could instead be done of the GPU
      // implicitly using atomics to make sure the last index is the final
      // write.
      const int slice_size = merged->flat_outer_dims<T>().dimension(1);
      CudaDeviceArrayOnHost<int32> indices_flat(c, first_dim_size);
      CudaDeviceArrayOnHost<const T*> data_flat(c, data_elements_size);
      OP_REQUIRES_OK(c, indices_flat.Init());
      OP_REQUIRES_OK(c, data_flat.Init());
      // initialize the indices_flat (-1 represents missing indices)
      for (int i = 0; i < first_dim_size; ++i) {
        indices_flat.Set(i, -1);
      }
    }
    
        GraphDef result;
    TransformFuncContext context;
    context.input_names = {};
    context.output_names = {'mul_node1'};
    TF_ASSERT_OK(RemoveDevice(graph_def, context, &result));
    
      /// Autorelease a return value.
  llvm::Value *emitObjCAutoreleaseReturnValue(IRGenFunction &IGF,
                                              llvm::Value *value);
    
    
    {
    {    C[0] = C[1];
    TargetStart = C + 1;
    GCBForC0 = GCBForC1;
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
    
    
    {  static bool classof(const MarkupASTNode *N) {
    return N->getKind() == ASTNodeKind::Text;
  }
};
    
    void dump(SubstitutionList subs);
    
    struct IndexSymbol : IndexRelation {
  SmallVector<IndexRelation, 3> Relations;
  unsigned line = 0;
  unsigned column = 0;
    }
    
      /// Creates and adds a memory buffer to the \c SourceManager, taking
  /// ownership of the newly created copy.
  ///
  /// \p InputData and \p BufIdentifier are copied, so that this memory can go
  /// away as soon as this function returns.
  unsigned addMemBufferCopy(StringRef InputData, StringRef BufIdentifier = '');
    
    
    {  return predictions;
}
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    #endif  // CAFFE_BASE_CONVOLUTION_LAYER_HPP_

    
    #endif  // CAFFE_CUDNN_POOLING_LAYER_HPP_

    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/tanh_layer.hpp'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      // Instead of 1/0, we want to see true/false for bool values.
  Message& operator <<(bool b) {
    return *this << (b ? 'true' : 'false');
  }
    
    // Copyright 2008, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Authors: vladl@google.com (Vlad Losev)
//
// Macros and functions for implementing parameterized tests
// in Google C++ Testing Framework (Google Test)
//
// This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
#ifndef GTEST_INCLUDE_GTEST_GTEST_PARAM_TEST_H_
#define GTEST_INCLUDE_GTEST_GTEST_PARAM_TEST_H_
    
     private:
  std::string file_;
  int line_;
  int index_;
  int write_fd_;
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
    // scripts/fuse_gtest.py depends on gtest's own header being #included
// *unconditionally*.  Therefore these #includes cannot be moved
// inside #if GTEST_HAS_PARAM_TEST.
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-linked_ptr.h'
#include 'gtest/internal/gtest-port.h'
#include 'gtest/gtest-printers.h'
    
      // Formats an int value as '%X'.
  static std::string FormatHexInt(int value);
    
    
    {}  // namespace gtest_internal
    
    #include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/datetime.h'
#include 'hphp/runtime/base/resource-data.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/util/timer.h'
    
      int64_t getTime() const;
    
    VcallArgsId Vunit::makeVcallArgs(VcallArgs&& args) {
  VcallArgsId i(vcallArgs.size());
  vcallArgs.emplace_back(std::move(args));
  return i;
}
    
    /*
 * Vasm constant.
 *
 * Either a 1, 4, or 8 byte unsigned value, 8 byte double, or the disp32 part
 * of a thread-local address of an immutable constant that varies by thread.
 * Constants may also represent an undefined value, indicated by the isUndef
 * member.
 *
 * Also contains convenience constructors for various pointer and enum types.
 */
struct Vconst {
  enum Kind { Quad, Long, Byte, Double };
    }
    
      Object gmpObject = data.toObject();
  if (!gmpObject.instanceof(s_GMP_GMP)) {
    raise_warning(cs_GMP_INVALID_OBJECT, 'gmp_setbit');
    return;
  }
    
    
    
    #ifdef _MSC_VER
  HMODULE moduleHandle = GetModuleHandleA(fname.data());
  HGLOBAL loadedResource;
  HRSRC   resourceInfo;
  DWORD   resourceSize;
    
    namespace tc {
    }
    
    		unsigned int left_frames = ad->buffer_frames;
		unsigned int buffer_idx = 0;
		while (left_frames > 0 && ad->audio_client) {
			WaitForSingleObject(ad->event, 1000);
    }
    
    #include 'io/stream_peer.h'
    
    
    {	return CONNECTION_CONNECTING;
}
    
    			if (op->arguments[0]->type == GDScriptParser::Node::TYPE_TYPE) {
    }
    
    	pos.y += h * p_slot;
    
    
    {		if (E->get() == edited_scene) {
			entire_scene = true;
		}
	}
    
    
    {
    {} // namespace asio
} // namespace boost
    
    template <>
class base_from_completion_cond<transfer_all_t>
{
protected:
  explicit base_from_completion_cond(transfer_all_t)
  {
  }
    }
    
      // Resize the buffer to the specified length.
  void resize(size_type length)
  {
    BOOST_ASIO_ASSERT(length <= capacity());
    if (begin_offset_ + length <= capacity())
    {
      end_offset_ = begin_offset_ + length;
    }
    else
    {
      using namespace std; // For memmove.
      memmove(&buffer_[0], &buffer_[0] + begin_offset_, size());
      end_offset_ = length;
      begin_offset_ = 0;
    }
  }
    
        // Find the next context with the same key.
    Value* next_by_key() const
    {
      context* elem = next_;
      while (elem)
      {
        if (elem->key_ == key_)
          return elem->value_;
        elem = elem->next_;
      }
      return 0;
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #include <boost/asio/detail/push_options.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
        // Helper methods
    static bool HasFamilyNamed(std::string& name, DBWrapper* db);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array, DBWrapper* db_wrapper, std::string cf);
    static Handle<Value> CompactRangeDefault(const v8::Arguments& args);
    static Handle<Value> CompactColumnFamily(const Arguments& args);
    static Handle<Value> CompactOptions(const Arguments& args);
    static Handle<Value> CompactAll(const Arguments& args);
    
    This pointer must be provided as 'void* state' parameter for XXH32_update().
XXH32_update() can be called as many times as necessary.
The user must provide a valid (allocated) input.
The function returns an error code, with 0 meaning OK, and any other value meaning there is an error.
Note that 'len' is type 'int', which means it is limited to 2^31-1.
If your data is larger, it is recommended to chunk your data into blocks
of size for example 2^30 (1GB) to avoid any 'int' overflow issue.
    
      virtual const char* Name() const override;
    
      std::string a, b, c;
  bool sa, sb, sc;
  sa = slists.Get('a', &a);
  sb = slists.Get('b', &b);
  sc = slists.Get('c', &c);
    
    
    {  /// The backend rocksdb database.
  /// Map : key --> list
  ///       where a list is a sequence of elements
  ///       and an element is a 4-byte integer (n), followed by n bytes of data
  std::unique_ptr<DB> db_;
};
    
      uint32_t ValueOffset() const {
    return static_cast<uint32_t>(value_.data() - data_);
  }
    
    namespace rocksdb {
JniCallback::JniCallback(JNIEnv* env, jobject jcallback_obj) {
  // Note: jcallback_obj may be accessed by multiple threads,
  // so we ref the jvm not the env
  const jint rs = env->GetJavaVM(&m_jvm);
  if(rs != JNI_OK) {
    // exception thrown
    return;
  }
    }
    }
    
      virtual void reset_counter() override {
    miss_times_.store(0, std::memory_order_relaxed);
    hit_times_.store(0, std::memory_order_relaxed);
    SetTickerCount(stats_, SIM_BLOCK_CACHE_HIT, 0);
    SetTickerCount(stats_, SIM_BLOCK_CACHE_MISS, 0);
  }
    
      // Adds a file to the backup work queue to be copied or created if it doesn't
  // already exist.
  //
  // Exactly one of src_dir and contents must be non-empty.
  //
  // @param src_dir If non-empty, the file in this directory named fname will be
  //    copied.
  // @param fname Name of destination file and, in case of copy, source file.
  // @param contents If non-empty, the file will be created with these contents.
  Status AddBackupFileWorkItem(
      std::unordered_set<std::string>& live_dst_paths,
      std::vector<BackupAfterCopyOrCreateWorkItem>& backup_items_to_finish,
      BackupID backup_id, bool shared, const std::string& src_dir,
      const std::string& fname,  // starts with '/'
      RateLimiter* rate_limiter, uint64_t size_bytes, uint64_t size_limit = 0,
      bool shared_checksum = false,
      std::function<void()> progress_callback = []() {},
      const std::string& contents = std::string());
    
      // Returns the sequence number that is guaranteed to be smaller than or equal
  // to the sequence number of any key that could be inserted into this
  // memtable. It can then be assumed that any write with a larger(or equal)
  // sequence number will be present in this memtable or a later memtable.
  //
  // If the earliest sequence number could not be determined,
  // kMaxSequenceNumber will be returned.
  SequenceNumber GetEarliestSequenceNumber() {
    return earliest_seqno_.load(std::memory_order_relaxed);
  }