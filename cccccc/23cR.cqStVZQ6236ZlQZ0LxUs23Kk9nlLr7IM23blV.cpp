
        
            struct Margin {
        Margin() : left(0), right(0), top(0), bottom(0) {}
        Margin(size_t left_, size_t right_, size_t top_, size_t bottom_)
            : left(left_), right(right_), top(top_), bottom(bottom_) {}
    }
    
    #define SPLIT_ASM2(sgn, bits) __asm__ ( \
                                          'vld2.' #bits ' {d0, d2}, [%[in0]]            \n\t' \
                                          'vld2.' #bits ' {d1, d3}, [%[in1]]            \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL2(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3' \
                                      );
#define SPLIT_ASM3(sgn, bits) __asm__ ( \
                                          'vld3.' #bits ' {d0, d2, d4}, [%[in0]]        \n\t' \
                                          'vld3.' #bits ' {d1, d3, d5}, [%[in1]]        \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          'vst1.' #bits ' {d4-d5}, [%[out2]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), [out2] 'r' (dst2 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL3(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5' \
                                      );
#define SPLIT_ASM4(sgn, bits) __asm__ ( \
                                          'vld4.' #bits ' {d0, d2, d4, d6}, [%[in0]]    \n\t' \
                                          'vld4.' #bits ' {d1, d3, d5, d7}, [%[in1]]    \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          'vst1.' #bits ' {d4-d5}, [%[out2]]            \n\t' \
                                          'vst1.' #bits ' {d6-d7}, [%[out3]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), [out2] 'r' (dst2 + dj), [out3] 'r' (dst3 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL4(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                      );
    
    namespace {
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s32, s16, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d0-d1}, [%[src1]]                              \n\t'
             'vld1.32 {d2-d3}, [%[src2]]                              \n\t'
             'vqmovn.s32 d4, q0                                       \n\t'
             'vqmovn.s32 d5, q1                                       \n\t'
             'vst1.8 {d4-d5}, [%[dst]]                                \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i + 0),
               [src2] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i)
             : 'd0','d1','d2','d3','d4','d5'
         );
     }
})
#else
CVT_FUNC(s32, s16, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int32x4_t vline1_s32 = vld1q_s32(_src + i);
         int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s16 q3, d4                                       \n\t'
            'vmovl.s16 q4, d5                                       \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vcvt.f32.s32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                     \n\t'
            'vadd.f32 q10, q8, q1                                     \n\t'
            'vst1.32 {d18-d19}, [%[dst1]]                             \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                             \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(s16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
    REGISTER_CPU_OPERATOR(
    MergeSingleScalarFeatureTensors,
    MergeSingleScalarFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleScalarFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with scalar features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 2 && n % 2 == 0; })
    .NumOutputs(3)
    .Input(0, 'in1', '')
    .Input(1, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values', '.values')
    .Arg('feature_ids', 'feature ids');
    
    </details>
    
    X before running op:
[[ 3.813361   -1.319647    5.2089314  -4.931328    0.6218652 ]
 [ 7.2757645   5.5552588   5.785643   -2.4790506  -0.41400087]
 [ 1.1541046  -6.933266    3.3754056   1.6569928  -1.7670316 ]
 [-3.4932013   4.891472    1.5530115  -3.2443287  -4.605099  ]
 [-4.574543   -7.360948    5.91305    -8.196495   -5.357458  ]]
X after running op:
[[ 3. -2.  5. -5.  0.]
 [ 7.  5.  5. -3. -1.]
 [ 1. -7.  3.  1. -2.]
 [-4.  4.  1. -4. -5.]
 [-5. -8.  5. -9. -6.]]
    
    #endif  // GRPC_INTERNAL_CPP_CLIENT_CREATE_CHANNEL_INTERNAL_H

    
    grpc_slice CoreCodegen::grpc_slice_split_head(grpc_slice* s, size_t split) {
  return ::grpc_slice_split_head(s, split);
}
    
    grpc::string SecureAuthContext::GetPeerIdentityPropertyName() const {
  if (!ctx_) {
    return '';
  }
  const char* name = grpc_auth_context_peer_identity_property_name(ctx_);
  return name == nullptr ? '' : name;
}
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    MeasureInt64 RpcServerReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcServerReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
    
    {    uint8_t version = buf[kVersionIdOffset];
    uint32_t fieldID = buf[kServerElapsedTimeOffset];
    if (version != kVersionId || fieldID != kServerElapsedTimeField) {
      *time = 0;
      return kEncodeDecodeFailure;
    }
    *time = absl::little_endian::Load64(
        &buf[kServerElapsedTimeOffset + kFieldIdSize]);
    return kRpcServerStatsSize;
  }
    
        GenerateServerContext(absl::string_view(tracing_str, tracing_str_len),
                          absl::string_view(census_str, census_str_len),
                          /*primary_role*/ '', calld->qualified_method_,
                          &calld->context_);
    
    	void _dump_function_deps(ShaderLanguage::ShaderNode *p_node, const StringName &p_for_func, const Map<StringName, String> &p_func_code, StringBuilder &r_to_add, Set<StringName> &r_added);
	String _dump_node_code(ShaderLanguage::Node *p_node, int p_level, GeneratedCode &r_gen_code, IdentifierActions &p_actions, const DefaultIdentifierActions &p_default_actions, bool p_assigning);
    
    
    {	create_func = create_semaphore_posix;
}
    
    #include <errno.h>
#include <netdb.h>
#include <poll.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <unistd.h>
#ifndef NO_FCNTL
#ifdef __HAIKU__
#include <fcntl.h>
#else
#include <sys/fcntl.h>
#endif
#else
#include <sys/ioctl.h>
#endif
#include <netinet/in.h>
    
    	const char *err_details;
	if (p_rationale && *p_rationale)
		err_details = p_rationale;
	else
		err_details = p_code;
    
    #ifdef UNIX_ENABLED
#include 'core/io/tcp_server.h'
    
    #if (defined(UNIX_ENABLED) || defined(PTHREAD_ENABLED)) && !defined(NO_THREADS)
    
    
    {	//this is either 0 or a value in bytes.
	return (size_t)bytes;
}
    
    public:
	virtual int get_available_packet_count() const;
	virtual Error get_packet(const uint8_t **r_buffer, int &r_buffer_size);
	virtual Error put_packet(const uint8_t *p_buffer, int p_buffer_size);
    
    
    {	AcquireSRWLockShared(&lock);
}
    
    #include 'stream_peer_tcp_winsock.h'
    
    
    {  if (s.ok() && meta->file_size > 0) {
    // Keep it
  } else {
    env->DeleteFile(fname);
  }
  return s;
}
    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    #include 'leveldb/db.h'
    
    namespace leveldb {
    }
    
    
    {  ParsedInternalKey() { }  // Intentionally left uninitialized (for speed)
  ParsedInternalKey(const Slice& u, const SequenceNumber& seq, ValueType t)
      : user_key(u), sequence(seq), type(t) { }
  std::string DebugString() const;
};
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string LogFileName(const std::string& dbname, uint64_t number);
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
          case kMiddleType:
        if (!in_fragmented_record) {
          ReportCorruption(fragment.size(),
                           'missing start of fragmented record(1)');
        } else {
          scratch->append(fragment.data(), fragment.size());
        }
        break;
    
      Status AddRecord(const Slice& slice);
    
      Open();
  std::string new_manifest = ManifestFileName();
  ASSERT_NE(old_manifest, new_manifest);
  ASSERT_GT(10000, FileSize(new_manifest));
  ASSERT_EQ('bar', Get('foo'));
    
    #ifndef STORAGE_LEVELDB_DB_SKIPLIST_H_
#define STORAGE_LEVELDB_DB_SKIPLIST_H_
    
    namespace leveldb {
    }
    
      // Removes a SnapshotImpl from this list.
  //
  // The snapshot must have been created by calling New() on this list.
  //
  // The snapshot pointer should not be const, because its memory is
  // deallocated. However, that would force us to change DB::ReleaseSnapshot(),
  // which is in the API, and currently takes a const Snapshot.
  void Delete(const SnapshotImpl* snapshot) {
#if !defined(NDEBUG)
    assert(snapshot->list_ == this);
#endif  // !defined(NDEBUG)
    snapshot->prev_->next_ = snapshot->next_;
    snapshot->next_->prev_ = snapshot->prev_;
    delete snapshot;
  }
    
      void showBuckets() const;
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
      virtual void executeTask() CXX11_OVERRIDE;
    
    void DHTTokenTracker::updateTokenSecret()
{
  memcpy(secret_[1], secret_[0], SECRET_SIZE);
  util::generateRandomData(secret_[0], SECRET_SIZE);
}
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);