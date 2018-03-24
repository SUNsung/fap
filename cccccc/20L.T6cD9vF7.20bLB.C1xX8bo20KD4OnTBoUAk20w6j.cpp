
        
        
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    struct leveldb_filterpolicy_t : public FilterPolicy {
  void* state_;
  void (*destructor_)(void*);
  const char* (*name_)(void*);
  char* (*create_)(
      void*,
      const char* const* key_array, const size_t* key_length_array,
      int num_keys,
      size_t* filter_length);
  unsigned char (*key_match_)(
      void*,
      const char* key, size_t length,
      const char* filter, size_t filter_length);
    }
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    
    {    fprintf(stdout, '%-12s : %11.3f micros/op;%s%s\n',
            name.ToString().c_str(),
            (finish - start_) * 1e6 / done_,
            (message_.empty() ? '' : ' '),
            message_.c_str());
    if (FLAGS_histogram) {
      fprintf(stdout, 'Microseconds per op:\n%s\n', hist_.ToString().c_str());
    }
    fflush(stdout);
  }
    
      // If *start < limit, changes *start to a short string in [start,limit).
  // Simple comparator implementations may return with *start unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const = 0;
    
      grpc::testing::RunSynchronousUnaryPingPong();
    
    
    {  GetReporter()->ReportQPSPerCore(*result);
  GetReporter()->ReportLatency(*result);
}
    
    std::vector<grpc::testing::Server*>* g_inproc_servers = nullptr;
    
      NSDictionary *flagNames = @{
#define GRPC_XMACRO_ITEM(methodName, FlagName) \
    @(kSCNetworkReachabilityFlags ## FlagName): @#methodName,
#include 'GRXReachabilityFlagNames.xmacro.h'
#undef GRPC_XMACRO_ITEM
  };
    
    #include 'test/cpp/interop/server_helper.h'
#include 'test/cpp/util/test_config.h'
    
      // Create a QpsGauge with name 'name'. is_present is set to true if the Gauge
  // is already present in the map.
  // NOTE: CreateQpsGauge can be called anytime (i.e before or after calling
  // StartServer).
  std::shared_ptr<QpsGauge> CreateQpsGauge(const grpc::string& name,
                                           bool* already_present);
    
    #ifndef GRPC_TEST_CPP_UTIL_SUBPROCESS_H
#define GRPC_TEST_CPP_UTIL_SUBPROCESS_H
    
            // Resolve <*this> graph to ensure it's in a good shape with full
        // functionality.
        // 1. Run through all validation rules.
        //    a. Node name and node output's names should be unique.
        //    b. Attribute match between node and op definition.
        //    c. Input/Output match between node and op definition.
        //    d. Graph is acyclic and sort nodes in topological order.
        // 2. Check & Setup inner nodes' dependency.
        // 3. Cleanup function definition lists.
        // Returns resolving status.
        Status Resolve();
    
    namespace ONNXIR
{
    typedef AttributeProto_AttributeType AttrType;
    }
    
                    if (IsLittleEndianOrder())
                {
                    memcpy((void*)p_data, (void*)buff, raw_data.size() * sizeof(char));
                }
                else
                {
                    for (size_t i = 0; i < raw_data.size(); i += typeSize, buff += typeSize)
                    {
                        T result;
                        const char* tempBytes = reinterpret_cast<char*>(&result);
                        for (size_t j = 0; j < typeSize; ++j)
                        {
                            memcpy((void*)&tempBytes[j], (void*)&buff[typeSize - 1 - i], sizeof(char));
                        }
                        p_data[i] = result;
                    }
                }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Tanh)
        .Description('Calculates the hyperbolic tangent of the given input tensor element-wise. '
            'This operation can be done in an in-place fashion too, by providing the same input '
            'and output blobs.')
        .Input('input', 'input tensor', 'T')
        .Output('output', 'The hyperbolic tangent value of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
                Notations:
            `X` - input tensor
            `z` - update gate
            `r` - reset gate
            `h` - hidden gate
            `t` - time step (t-1 means previous time step)
            `W[zrh]` - W parameter weight matrix for update, reset, and hidden gates
            `R[zrh]` - R recurrence weight matrix for update, reset, and hidden gates
            `Wb[zrh]` - W bias vectors for update, reset, and hidden gates
            `Rb[zrh]` - R bias vectors for update, reset, and hidden gates
            `WB[zrh]` - W parameter weight matrix for backward update, reset, and hidden gates
            `RB[zrh]` - R recurrence weight matrix for backward update, reset, and hidden gates
            `WBb[zrh]` - W bias vectors for backward update, reset, and hidden gates
            `RBb[zrh]` - R bias vectors for backward update, reset, and hidden gates
            `tanh(X)` - hyperbolic tangent of X
            `sigmoid(X)` - 1 / (1 + e^-X)
            `H` - Hidden state
            `num_directions` - 2 if direction == bidirectional else 1
    
    
    // Input: X, output: Y
    REGISTER_OPERATOR_SCHEMA(Scaler)
        .SetDomain(c_mlDomain)
        .Input('X', 'Data to be scaled', 'T')
        .Output('Y', 'Scaled output data', 'tensor(float)')
        .Description(R'DOC(
            Rescale input data, for example to standardize features by removing the mean and scaling to unit variance.
            )DOC')
        .TypeConstraint('T', { 'tensor(float)', 'tensor(double)', 'tensor(int64)', 'tensor(int32)' }, ' allowed types.')
        .Attr('scale', 'second, multiply by this', AttrType::AttributeProto_AttributeType_FLOATS)
        .Attr('offset', 'first, offset by thisfirst, offset by this, can be one value or a separate value for each feature', AttrType::AttributeProto_AttributeType_FLOATS);
    
        // Pages-out data for this chunk.
    void ReleaseData(int verbosity = 0) const
    {
        if (GetNumberOfUtterances() == 0)
        {
            LogicError('Cannot page-out empty block.');
        }
    }
    
    
    {        // all sequences are valid by default.
        m_valid.resize(m_descriptor.NumberOfSequences(), true);
    }
    
    void TraceLSTMPathes(const FunctionPtr& src, string &f_activation, string &g_activation, string &h_activation,
    RNNDirection &direction, Variable &initStateH, Variable &initStateC, Variable &peepholeCi, Variable &peepholeCo, Variable &peepholeCf,
    double &stabilizer_dh, double &stabilizer_dc, double &stabilizer_c);
    
        // regular matrix product
    // Avoid this, not efficient either way.
    void matprod(const ssematrixbase &A, const ssematrixbase &B)
    {
        // ... TODO: put a resize() here and all matmul, so we don't need to set size upfront
        auto &us = *this;
        assert(us.rows() == A.rows() && B.cols() == us.cols());
        size_t K = A.cols();
        assert(K == B.rows());
        foreach_coord (i, j, us)
        {
            float sum = 0.0;
            for (size_t k = 0; k < K; k++)
                sum += A(i, k) * B(k, j);
            us(i, j) = sum;
        }
    }
    
     protected:
  /// Allow the runnable to check interruption.
  bool interrupted();
    
    #include <boost/lexical_cast.hpp>
#include <boost/noncopyable.hpp>
#include <utility>
    
    #pragma once
    
    
    {  c.reset();
}
    
    
    {  return (::getppid() != launcher.nativeHandle());
}
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    namespace guetzli {
    }
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
        Value getMinWidth(void) const;
    Value getMinHeight(void) const;
    
    
    {
    {#undef EXT_FUNC
};
} // namespace fuzzer
    
    size_t MutationDispatcher::Mutate(uint8_t *Data, size_t Size, size_t MaxSize) {
  return MutateImpl(Data, Size, MaxSize, Mutators);
}
    
    
    {  static const size_t kMaxMutations = 1 << 16;
  size_t NumMutations;
  TraceBasedMutation Mutations[kMaxMutations];
  // TODO: std::set is too inefficient, need to have a custom DS here.
  std::set<Word> InterestingWords;
  MutationDispatcher &MD;
  const FuzzingOptions Options;
  const Fuzzer *F;
  std::map<Word, size_t> AutoDictUnitCounts;
  size_t AutoDictAdds = 0;
};
    
    #include 'FuzzerUtil.h'
#include 'FuzzerIO.h'
#include 'FuzzerInternal.h'
#include <cassert>
#include <chrono>
#include <cstring>
#include <errno.h>
#include <signal.h>
#include <sstream>
#include <stdio.h>
#include <sys/types.h>
#include <thread>
    
          if (sigaction(SIGINT, &IgnoreSignalAction, &OldSigIntAction) == -1) {
        Printf('Failed to ignore SIGINT\n');
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
      if (sigaction(SIGQUIT, &IgnoreSignalAction, &OldSigQuitAction) == -1) {
        Printf('Failed to ignore SIGQUIT\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }