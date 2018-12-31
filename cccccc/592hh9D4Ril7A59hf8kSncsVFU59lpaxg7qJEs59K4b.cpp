
        
          DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
      // Instance members
  IAMResult(DeclName declName, unsigned selfIdx, EffectiveClangContext dc)
      : name(declName), selfIndex(selfIdx), effectiveDC(dc) {}
    
    
    
      case Demangle::Node::Kind::Class:
  case Demangle::Node::Kind::Enum:
  case Demangle::Node::Kind::Structure:
  case Demangle::Node::Kind::OtherNominalType: {
    if (node->getNumChildren() < 2)
      return node;
    }
    
    // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    // Owns a python object and decrements the reference count on destruction.
// This class is not threadsafe.
template <typename PyObjectStruct>
class ScopedPythonPtr {
 public:
  // Takes the ownership of the specified object to ScopedPythonPtr.
  // The reference count of the specified py_object is not incremented.
  explicit ScopedPythonPtr(PyObjectStruct* py_object = NULL)
      : ptr_(py_object) {}
    }
    
    
bool GetAnyFieldDescriptors(const Message& message,
                            const FieldDescriptor** type_url_field,
                            const FieldDescriptor** value_field) {
    const Descriptor* descriptor = message.GetDescriptor();
    if (descriptor->full_name() != kAnyFullTypeName) {
      return false;
    }
    *type_url_field = descriptor->FindFieldByNumber(1);
    *value_field = descriptor->FindFieldByNumber(2);
    return (*type_url_field != NULL &&
            (*type_url_field)->type() == FieldDescriptor::TYPE_STRING &&
            *value_field != NULL &&
            (*value_field)->type() == FieldDescriptor::TYPE_BYTES);
}
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    const FieldDescriptor* ValueField(const FieldDescriptor* descriptor) {
  GOOGLE_CHECK_EQ(FieldDescriptor::TYPE_MESSAGE, descriptor->type());
  const Descriptor* message = descriptor->message_type();
  GOOGLE_CHECK(message->options().map_entry());
  return message->FindFieldByName('value');
}
    
    
    {  desired_output_for_decode = 'abcdefghIJz';
  expected = string('\0abcdefghIJz\0', 13);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
}
    
      if (GenerateCode(request, *generator, &response, &error_msg)) {
    if (!response.SerializeToFileDescriptor(STDOUT_FILENO)) {
      std::cerr << argv[0] << ': Error writing to stdout.' << std::endl;
      return 1;
    }
  } else {
    if (!error_msg.empty()) {
      std::cerr << argv[0] << ': ' << error_msg << std::endl;
    }
    return 1;
  }
    
            for (const auto& modelParameter : modelParametersSet)
        {
            if (m_learnerParameters.find(modelParameter) == m_learnerParameters.end())
                m_modelParametersNotCoveredByLearners.insert(modelParameter);
        }
    
                if (m_varKind == VariableKind::Input)
            {
                for (auto dim : m_shape.Dimensions())
                {
                    if (dim == 0)
                        InvalidArgument('Variable '%S' has invalid shape '%S'.', AsString().c_str(), m_shape.AsString().c_str());
                }
            }
    
        // Acquires the mutex. If 'wait' is true and mutex is acquired by someone else then
    // function waits until mutex is released
    // Returns false if !wait and lock cannot be acquired, or in case of a system error that prevents us from acquiring the lock.
    bool Acquire(bool wait)
    {
        mode_t mask = umask(0);
    }
    
    class ScopeTimer
{
    Timer m_aggregateTimer;
    size_t m_verbosity;
    std::string m_message;
    }
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        size_t rank = DetermineElementwiseTensorRank();
        auto output    =           ValueTensorFor(rank, fr);
        auto input     = InputRef(0).ValueTensorFor(rank, fr);
        auto mean      = Input(1)->ValueTensorFor(rank, fr.AllowBroadcast());
        auto invStdDev = Input(2)->ValueTensorFor(rank, fr.AllowBroadcast());
    }
    
            //Aggregate at query level.
        const Matrix<ElemType>& urlDiscountedGain0 = *m_urlGain0;
        const Matrix<ElemType>& urlDiscountedGain1 = *m_urlGain1;
        ElemType irMetricValue = 0.0;
        ElemType idealMetric = 0.0, metric = 0.0;
    
        // Zero if not set by benchmark.
    double bytes_per_second;
    double items_per_second;
    
    // Execute one thread of benchmark b for the specified number of iterations.
// Adds the stats collected for the thread into *total.
void RunInThread(const benchmark::internal::Benchmark::Instance* b,
                 size_t iters, int thread_id,
                 internal::ThreadManager* manager) {
  internal::ThreadTimer timer;
  State st(iters, b->arg, thread_id, b->threads, &timer, manager);
  b->benchmark->Run(st);
  CHECK(st.iterations() == st.max_iterations)
      << 'Benchmark returned before State::KeepRunning() returned false!';
  {
    MutexLock l(manager->GetBenchmarkMutex());
    internal::ThreadManager::Result& results = manager->results;
    results.cpu_time_used += timer.cpu_time_used();
    results.real_time_used += timer.real_time_used();
    results.manual_time_used += timer.manual_time_used();
    results.bytes_processed += st.bytes_processed();
    results.items_processed += st.items_processed();
    results.complexity_n += st.complexity_length_n();
    internal::Increment(&results.counters, st.counters);
  }
  manager->NotifyThreadComplete();
}
    
    ConsoleReporter::OutputOptions GetOutputOptions(bool force_no_color = false);
    
    #endif  // CHECK_H_

    
    
    {  // Sets *value to the value of the flag.
  return ParseInt32(std::string('The value of flag --') + flag, value_str,
                    value);
}
    
      if (!rate.empty()) {
    printer(Out, COLOR_DEFAULT, ' %*s', 13, rate.c_str());
  }
    
      if (run.bytes_per_second > 0.0) {
    Out << run.bytes_per_second;
  }
  Out << ',';
  if (run.items_per_second > 0.0) {
    Out << run.items_per_second;
  }
  Out << ',';
  if (!run.report_label.empty()) {
    // Field with embedded double-quote characters must be doubled and the field
    // delimited with double-quotes.
    std::string label = run.report_label;
    ReplaceAll(&label, '\'', '\'\'');
    Out << '\'' << label << '\'';
  }
  Out << ',,';  // for error_occurred and error_message
    
      // Compile a regular expression matcher from spec.  Returns true on success.
  //
  // On failure (and if error is not nullptr), error is populated with a human
  // readable error message if an error occurs.
  bool Init(const std::string& spec, std::string* error);
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        uint64_t const* p_value = (uint64_t const*)&v;
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %[dest], %%rax\n\t'
            'movq 8+%[dest], %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b %[dest]\n\t'
            'jne 1b\n\t'
            : [dest] '=o' (storage)
            : 'b' (p_value[0]), 'c' (p_value[1])
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'rax', 'rdx', 'memory'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq 0(%[dest]), %%rax\n\t'
            'movq 8(%[dest]), %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b 0(%[dest])\n\t'
            'jne 1b\n\t'
            :
            : 'b' (p_value[0]), 'c' (p_value[1]), [dest] 'r' (&storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'rax', 'rdx', 'memory'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
    }