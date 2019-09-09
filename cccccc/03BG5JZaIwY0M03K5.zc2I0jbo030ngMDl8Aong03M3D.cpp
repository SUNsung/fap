
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_COPY_THUNK_H_

    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/sequential_thunk.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    #include 'tensorflow/compiler/xla/service/gpu/infeed_thunk.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/infeed_manager.h'
#include 'tensorflow/compiler/xla/util.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
      // The thread and block dimension used to launch the kernel.
  // Will be set by IrEmitterUnnested.
  LaunchDimensions launch_dimensions_;
    
    Status Memset32BitValueThunk::ExecuteOnStream(const ExecuteParams& params) {
  se::DeviceMemoryBase dest_data =
      params.buffer_allocations->GetDeviceAddress(dest_);
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  params.stream->ThenMemset32(&dest_data, value_, dest_data.size());
  return Status::OK();
}
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    TEST_F(JsonObjectWriterTest, TestWebsafeByteEncoding) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->set_use_websafe_base64_for_bytes(true);
  ow_->StartObject('')
      ->RenderBytes('bytes', '\x03\xef\xc0\x10')
      ->EndObject();
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    
    {  static void ScrubMessage(DescriptorProto *message_type) {
    message_type->mutable_extension()->Clear();
    for (int i = 0; i < message_type->mutable_extension()->size(); i++) {
      message_type->mutable_extension(i)->clear_default_value();
      if (ShouldClearLabel(message_type->mutable_extension(i))) {
        message_type->mutable_extension(i)->clear_label();
      }
    }
    for (int i = 0; i < message_type->mutable_field()->size(); i++) {
      message_type->mutable_field(i)->clear_default_value();
      if (ShouldClearLabel(message_type->mutable_field(i))) {
        message_type->mutable_field(i)->clear_label();
      }
    }
    for (int i = 0; i < message_type->mutable_nested_type()->size(); i++) {
      ScrubMessage(message_type->mutable_nested_type(i));
    }
  }
};
    
      // Increments the reference count fo the current object.
  // Should not be called when no object is held.
  void inc() const { Py_INCREF(ptr_); }
    
    // KSI: This function is possibly stupid: it's nonsensical to talk about the entire
// cache being snapshotted -- we want some subtree to be snapshotted, at least.
// However, if you quickly release the superblock, you'll release any snapshotting of
// secondary index nodes that you could not possibly access.
void get_btree_superblock_and_txn_for_reading(
        cache_conn_t *cache_conn,
        cache_snapshotted_t snapshotted,
        scoped_ptr_t<real_superblock_t> *got_superblock_out,
        scoped_ptr_t<txn_t> *txn_out) {
    txn_t *txn = new txn_t(cache_conn, read_access_t::read);
    txn_out->init(txn);
    }
    
    
void store_t::acquire_all_sindex_superblocks_for_write(
        block_id_t sindex_block_id,
        buf_parent_t parent,
        sindex_access_vector_t *sindex_sbs_out)
    THROWS_ONLY(sindex_not_ready_exc_t) {
    assert_thread();
    }
    
        void register_sindex_queue(
            disk_backed_queue_wrapper_t<rdb_modification_report_t> *disk_backed_queue,
            const key_range_t &construction_range,
            const new_mutex_in_line_t *acq);
    
            {
            //Read that data
            read_token_t token;
            store.new_read_token(&token);
    }
    
        cond_t dummy_interruptor;
    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
      // Gets the number of all test cases that contain at least one test
  // that should run.
  int test_case_to_run_count() const;
    
      // # of exponent bits in a number.
  static const size_t kExponentBitCount = kBitCount - 1 - kFractionBitCount;
    
      template <GTEST_8_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_8_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    f6_ = t.f6_;
    f7_ = t.f7_;
    return *this;
  }
    
    // A unique struct template used as the default value for the
// arguments of class template Templates.  This allows us to simulate
// variadic templates (e.g. Templates<int>, Templates<int, double>,
// and etc), which C++ doesn't support directly.
template <typename T>
struct NoneT {};
    
    void Top::_appendStatsEntry(BSONObjBuilder& b, const char* statsName, const UsageData& map) const {
    BSONObjBuilder bb(b.subobjStart(statsName));
    bb.appendNumber('time', map.time);
    bb.appendNumber('count', map.count);
    bb.done();
}
    
    
    {}  // namespace

    
    U_NAMESPACE_BEGIN
    
    #define DOT               ((UChar)0x002E)
#define SINGLE_QUOTE      ((UChar)0x0027)
#define SLASH             ((UChar)0x002F)
#define BACKSLASH         ((UChar)0x005C)
#define SPACE             ((UChar)0x0020)
#define TAB               ((UChar)0x0009)
#define QUOTATION_MARK    ((UChar)0x0022)
#define ASTERISK          ((UChar)0x002A)
#define COMMA             ((UChar)0x002C)
#define HYPHEN            ((UChar)0x002D)
#define U_ZERO            ((UChar)0x0030)
#define U_ONE             ((UChar)0x0031)
#define U_TWO             ((UChar)0x0032)
#define U_THREE           ((UChar)0x0033)
#define U_FOUR            ((UChar)0x0034)
#define U_FIVE            ((UChar)0x0035)
#define U_SIX             ((UChar)0x0036)
#define U_SEVEN           ((UChar)0x0037)
#define U_EIGHT           ((UChar)0x0038)
#define U_NINE            ((UChar)0x0039)
#define COLON             ((UChar)0x003A)
#define SEMI_COLON        ((UChar)0x003B)
#define CAP_A             ((UChar)0x0041)
#define CAP_B             ((UChar)0x0042)
#define CAP_R             ((UChar)0x0052)
#define CAP_Z             ((UChar)0x005A)
#define LOWLINE           ((UChar)0x005F)
#define LEFTBRACE         ((UChar)0x007B)
#define RIGHTBRACE        ((UChar)0x007D)
    
                // Let's check the status.
            double statusValue = 0;
            auto status = ::CNTK::MakeSharedObject<::CNTK::NDArrayView>(::CNTK::DataType::Double, ::CNTK::NDShape{ 1 }, &statusValue, sizeof(double), ::CNTK::DeviceDescriptor::CPUDevice());
            std::vector<::CNTK::NDArrayViewPtr> aggregatedStatus { status };
            m_communicator->AggregateInPlace(aggregatedStatus, m_communicator->Workers());
    
    template <typename ElemType>
NDLScript<ElemType> NDLScript<ElemType>::s_global('global');
    
        virtual void UpdateFunctionMBSize() = 0; // recalculate our column dimensions from MBLayout. Override to update temps.
    
    
// ----------------------------------------------------------------------------
// Basic interface
// ----------------------------------------------------------------------------
    
             virtual void OnEpochEnd(const std::list<ComputationNodeBasePtr>&    LearnableNodes,
                                    std::list<MatrixBasePtr>&                   smoothedGradients,
                                    size_t                                      samplesSinceLastSync 
                                    )
         {
             m_MAworkerStatus[m_myRank] = MAWorkerStatus::DataEnd;
             Timer syncPointTimer; syncPointTimer.Start(); 
             bool read2sync = UpdateWorkerStatus(MAWorkerStatus::DataEnd);
             syncPointTimer.Stop();
             m_perfReporter.OnArriveAtSyncPoint(syncPointTimer.ElapsedSeconds(), true);
             // assert(read2sync); 
             size_t totalSamplesProcessed = 0;
             float secondsOnCommunication = 0.0f; 
             if (read2sync)
             {
                 m_numSyncPerformed++;
                 ModelAggregationProcessing(samplesSinceLastSync, LearnableNodes, smoothedGradients, totalSamplesProcessed, secondsOnCommunication);
                 m_perfReporter.OnMAPerformed(samplesSinceLastSync, totalSamplesProcessed, secondsOnCommunication);
             }
             
             m_pMPI->WaitAll();             
             m_perfReporter.OnEpochEnd();
         }
    
        template<class ElemType2 = ElemType>
    void TypedUpdateWeights(Matrix<ElemType2>& functionValues, Matrix<ElemType2>& gradientValues,
                       Matrix<ElemType2>& smoothedGradient, double& smoothedCount,
                       const double learnRatePerSample, const double momentumPerSample,
                       size_t actualMBSize,
                       const double L2RegWeight, const double L1RegWeight,
                       const bool needAveMultiplier,
                       const bool useNesterovMomentum) const;
public:
    // return -1 if nothing exists
    int DetermineStartEpoch(const bool makeMode);
    
            size_t beta = (nodeContainsAccumulatedResult || reset) ? 0 : 1;
        size_t numSamples = GetNumSamples(m_criterionNodes[i], numSamplesInMinibatch, nodeContainsAccumulatedResult);
        // Note: numSamples == 0 if numSamplesInMinibatch == 0 meaning empty minibatch.
    
    static bool protect_stack(void *top, size_t stack_size, uint32_t page)
{
    if (stack_size <= SwooleG.pagesize * (page + 1))
    {
        swoole_error_log(SW_LOG_ERROR, SW_ERROR_CO_PROTECT_STACK_FAILED, 'getpagesize() failed');
        return false;
    }
#ifdef PROT_NONE
    void *protect_page_addr = ((size_t) top & 0xfff) ? (void*) (((size_t) top & ~(size_t) 0xfff) + 0x1000) : top;
    if (-1 == mprotect(protect_page_addr, SwooleG.pagesize * page, PROT_NONE))
    {
        swSysWarn(
            'mprotect() failed: origin_addr:%p, align_addr:%p, page_size:%d, protect_page:%u',
            top, protect_page_addr, SwooleG.pagesize, page
        );
        return false;
    }
    else
    {
        swDebug('origin_addr:%p, align_addr:%p, page_size:%d, protect_page:%u', top, protect_page_addr, page, SwooleG.pagesize);
        return true;
    }
#endif
}
static bool unprotect_stack(void *top, uint32_t page)
{
    void *protect_page_addr = ((size_t) top & 0xfff) ? (void*) (((size_t) top & ~(size_t) 0xfff) + 0x1000) : top;
#ifdef PROT_READ
    if (-1 == mprotect(protect_page_addr, SwooleG.pagesize * page, PROT_READ | PROT_WRITE))
    {
        swSysWarn(
            'mprotect() failed: origin_addr:%p, align_addr:%p, page_size:%d, protect_page:%u',
            top, protect_page_addr, SwooleG.pagesize, page
        );
        return false;
    }
    else
    {
        swDebug('origin_addr:%p, align_addr:%p, page_size:%d, protect_page:%u', top, protect_page_addr, page, SwooleG.pagesize);
        return true;
    }
#endif
}
#endif
    
    Context::~Context()
{
    if (stack_)
    {
        swTraceLog(SW_TRACE_COROUTINE, 'free stack: ptr=%p', stack_);
#ifdef SW_CONTEXT_PROTECT_STACK_PAGE
        if (protect_page_)
        {
            unprotect_stack(stack_, protect_page_);
        }
#endif
    }
    }
    
        zval retval;
    zend_op_array *new_op_array;
    ZVAL_NULL(&dummy);
    if (zend_hash_add(&EG(included_files), opened_path, &dummy))
    {
        new_op_array = zend_compile_file(&file_handle, ZEND_REQUIRE);
        zend_destroy_file_handle(&file_handle);
    }
    else
    {
        new_op_array = NULL;
        zend_file_handle_dtor(&file_handle);
    }
    zend_string_release(opened_path);
    if (!new_op_array)
    {
        return false;
    }
    
    #include 'swoole.h'
#include <string>
    
    
    {    ASSERT_GT(cid, 0);
    Coroutine::get_by_cid(cid)->resume();
    ASSERT_EQ(cid, _cid);
}

    
    
    {
    {        ASSERT_EQ(WEXITSTATUS(status), 0);
    });
}

    
            void addWrite() {
            if (m_write) return;
            m_write = new QSocketNotifier(m_ctx->c.fd, QSocketNotifier::Write, 0);
            connect(m_write, SIGNAL(activated(int)), this, SLOT(write()));
        }
    
        shared_ptr<string> val_str = make_shared<string>('hello');
    cache.set('test1', val_str); // update test1 and will del test2
    ASSERT_EQ(cache.get('test1').get(), val_str.get());
    ASSERT_EQ(dtor_num, 2);