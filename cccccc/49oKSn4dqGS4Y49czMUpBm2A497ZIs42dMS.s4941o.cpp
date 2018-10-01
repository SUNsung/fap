
        
        #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
      auto* message1_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena);
  TestUtil::SetAllFields(message1_on_arena);
  const auto* nested = &message1_on_arena->optional_nested_message();
    
    #include <google/protobuf/stubs/common.h>
namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
  SourceLocation location;
  if (descriptor->GetSourceLocation(&location)) {
    WriteDocCommentBodyForLocation(printer, location);
  }
}
    
    // Author: liujisi@google.com (Pherl Liu)
    
        
    
        void ProgressWriter::UpdateDistributedSync(size_t samples, const ValuePtr& accumulatedMetric)
    {
        m_distributedSync->Update(samples, nullptr, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> /*aggregateLoss*/, std::pair<double, double> aggregateMetric)
        {
            OnWriteDistributedSyncUpdate(samples, updates, aggregateMetric);
        });
    }
    
    void ProgressWriter::WriteTrainingSummary(const ValuePtr& accumulatedLoss, const ValuePtr& accumulatedMetric)
    {
        m_training->WriteSummary(
            accumulatedLoss, accumulatedMetric,
            [this](size_t samples, size_t updates, size_t summaries, double aggregateLoss, double aggregateMetric,
                   uint64_t elapsedMs)
            {
                OnWriteTrainingSummary(samples, updates, summaries, aggregateLoss, aggregateMetric, elapsedMs);
            });
    }
    
        template <typename ElementType>
    void Value::CopyVariableValueToVector(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences)
    {
        if (outputVariable.Shape()[0] != outputVariable.Shape().TotalSize())
            InvalidArgument('For sparse data, the outputVariable's leading axis dimensionality (%zu) must equal the total size (%zu) of the Variable '%S'.',
                            outputVariable.Shape()[0], outputVariable.Shape().TotalSize(), outputVariable.AsString().c_str());
    }
    
        void Variable::SetOwner(const std::weak_ptr<Function>& ownerFunction)
    {
        if (Kind() != VariableKind::Output)
            LogicError('Variable '%S' SetOwner: Owner can only be set for Output Variables', AsString().c_str());
    }
    
        auto& pMBLayout = minibatch.begin()->second.pMBLayout;
    // This is only allowed for old readers, which support a single layout for all inputs.
    for (const auto& iter : minibatch)
    {
        assert(iter.second.pMBLayout == pMBLayout);
        // TODO: This should be a runtime check, not an assert() that only runs in Debug.
        UNUSED(iter);
    }
    
    
    {    ~ScopeTimer()
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Stop();
            double time = m_aggregateTimer.ElapsedSeconds();
            fprintf(stderr, m_message.c_str(), time);
        }
    }
};
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        auto sliceInputValue  = InputRef(0).ValueFor(fr);
        auto sliceOutputValue =           ValueFor(fr); // row vector
    }
    
    #include 'Basics.h'
#include 'ComputationNode.h'
#include 'ScriptableObjects.h'
#include 'TensorShape.h'
#include 'Matrix.h'
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    // Number of bytes to use as a cache of uncompressed data.
// Negative means use default settings.
static int FLAGS_cache_size = -1;
    
        // Handle key/value, add to state, etc.
    bool drop = false;
    if (!ParseInternalKey(key, &ikey)) {
      // Do not hide error keys
      current_user_key.clear();
      has_current_user_key = false;
      last_sequence_for_key = kMaxSequenceNumber;
    } else {
      if (!has_current_user_key ||
          user_comparator()->Compare(ikey.user_key,
                                     Slice(current_user_key)) != 0) {
        // First occurrence of this user key
        current_user_key.assign(ikey.user_key.data(), ikey.user_key.size());
        has_current_user_key = true;
        last_sequence_for_key = kMaxSequenceNumber;
      }
    }
    
    
    {  // No copying allowed
  LookupKey(const LookupKey&);
  void operator=(const LookupKey&);
};
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
      scratch->clear();
  record->clear();
  bool in_fragmented_record = false;
  // Record offset of the logical record that we're reading
  // 0 is a dummy value to make compilers happy
  uint64_t prospective_record_offset = 0;
    
    
    { private:
  std::string dbname_;
  Env* env_;
  DB* db_;
};
    
    template<typename Key, class Comparator>
typename SkipList<Key,Comparator>::Node*
SkipList<Key,Comparator>::NewNode(const Key& key, int height) {
  char* mem = arena_->AllocateAligned(
      sizeof(Node) + sizeof(port::AtomicPointer) * (height - 1));
  return new (mem) Node(key);
}
    
    //////////////////////////////////////////////////////////////////////////////
// parse JSON from file
//////////////////////////////////////////////////////////////////////////////
    
    #include <cmath>
#include <iosfwd>
#include <limits>
#include <string>
#include <vector>
    
      BENCHMARK_NORETURN ~CheckHandler() BENCHMARK_NOEXCEPT_OP(false) {
    log_ << std::endl;
    CallAbortHandler();
  }
    
      // Accumulators.
  std::vector<int> n;
  std::vector<double> real_time;
  std::vector<double> cpu_time;
    
    inline int& LogLevel() {
  static int log_level = 0;
  return log_level;
}
    
    
    { private:
  bool init_;
// Underlying regular expression object
#if defined(HAVE_STD_REGEX)
  std::regex re_;
#elif defined(HAVE_POSIX_REGEX) || defined(HAVE_GNU_POSIX_REGEX)
  regex_t re_;
#else
#error No regular expression backend implementation available
#endif
};
    
      const CPUInfo &info = context.cpu_info;
  Out << 'Run on (' << info.num_cpus << ' X '
      << (info.cycles_per_second / 1000000.0) << ' MHz CPU '
      << ((info.num_cpus > 1) ? 's' : '') << ')\n';
  if (info.caches.size() != 0) {
    Out << 'CPU Caches:\n';
    for (auto &CInfo : info.caches) {
      Out << '  L' << CInfo.level << ' ' << CInfo.type << ' '
          << (CInfo.size / 1000) << 'K';
      if (CInfo.num_sharing != 0)
        Out << ' (x' << (info.num_cpus / CInfo.num_sharing) << ')';
      Out << '\n';
    }
  }