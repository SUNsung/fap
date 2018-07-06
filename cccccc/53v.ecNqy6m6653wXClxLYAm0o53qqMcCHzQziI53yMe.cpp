
        
          // Abort and close all existing sessions, disconnecting their resources from
  // future sessions.
  //
  // Reset() allows misbehaving or slow sessions to be aborted and closed, and
  // causes their resources eventually to be released.  Reset() does not wait
  // for the computations in old sessions to cease; it merely starts the
  // process of tearing them down.  However, if a new session is started after
  // a Reset(), the new session is isolated from changes that old sessions
  // (started prior to the Reset()) may continue to make to resources, provided
  // all those resources are in containers listed in 'containers'.
  //
  // Old sessions may continue to have side-effects on resources not in
  // containers listed in 'containers', and thus may affect future
  // sessions' results in ways that are hard to predict.  Thus, if well-defined
  // behavior is desired, is it recommended that all containers be listed in
  // 'containers'.
  //
  // If the 'containers' vector is empty, the default container is assumed.
  // If the 'containers' vector is non-empty, the default container should be
  // listed explicitly.
  //
  // Sessions that support resource containers should override this function.
  virtual Status Reset(const SessionOptions& options,
                       const std::vector<string>& containers) {
    return errors::Unimplemented('Reset()');
  }
    
    
    {}  // namespace tensorflow
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    *key = strings::StrCat(current_work(), ':', offset_);
    Status status = reader_->ReadRecord(&offset_, value);
    if (errors::IsOutOfRange(status)) {
      *at_end = true;
      return Status::OK();
    }
    if (!status.ok()) return status;
    *produced = true;
    return Status::OK();
  }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    void AddDeviceMetadata(const std::map<uint32, const Device *> &devices,
                       string *json) {
  for (const auto &pair : devices) {
    uint32 device_id = pair.first;
    const Device &device = *pair.second;
    if (!device.name().empty()) {
      Appendf(json,
              R'({'ph':'M','pid':%u,'name':'process_name',)'
              R'('args':{)',
              device_id);
      AppendEscapedName(json, device.name());
      StrAppend(json, '}},');
    }
    Appendf(json,
            R'({'ph':'M','pid':%u,'name':'process_sort_index',)'
            R'('args':{'sort_index':%u}},)',
            device_id, device_id);
    // Convert to a std::map so that devices are sorted by the device id.
    std::map<uint32, const Resource *> sorted_resources;
    for (const auto &pair : device.resources()) {
      sorted_resources[pair.first] = &pair.second;
    }
    AddResourceMetadata(device_id, sorted_resources, json);
  }
}
    
    TEST_F(GrpcDebugTest, SendDebugTensorsThroughMultipleRoundsUnderReadWriteMode) {
  // Prepare the tensor to send.
  const DebugNodeKey kDebugNodeKey('/job:localhost/replica:0/task:0/cpu:0',
                                   'test_namescope/test_node', 0,
                                   'DebugIdentity');
  Tensor tensor(DT_INT32, TensorShape({1, 1}));
  tensor.flat<int>()(0) = 42;
    }
    
    
    {  /// Returns true if \p BB is a dead-end block.
  bool isDeadEnd(SILBasicBlock *BB) {
    if (!isComputed) {
      // Lazily compute the dataflow.
      compute();
      isComputed = true;
    }
    return ReachableBlocks.count(BB) == 0;
  }
};
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
    namespace index {
    }
    
    namespace swift {
    }
    
      /// Returns true if this LSValue is a covering value.
  bool isCoveringValue() const { return CoveringValue; }
    
    #include 'swift/AST/DiagnosticConsumer.h'
#include 'swift/Migrator/FixitFilter.h'
#include 'swift/Migrator/Migrator.h'
#include 'swift/Migrator/Replacement.h'
#include 'clang/Rewrite/Core/RewriteBuffer.h'
#include 'llvm/ADT/DenseSet.h'
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
    
      std::string namespace_;
  std::string reflectionClassname_;
    
    #include <string>
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_LAZY_MESSAGE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_LAZY_MESSAGE_FIELD_H__
    
      if (args[1]->IsUndefined()) {
    db_wrapper->status_ = db_wrapper->db_->Get(
        rocksdb::ReadOptions(), key, &value);
  } else if (db_wrapper->HasFamilyNamed(cf, db_wrapper)) {
    db_wrapper->status_ = db_wrapper->db_->Get(
        rocksdb::ReadOptions(), db_wrapper->columnFamilies_[cf], key, &value);
  } else {
    return scope.Close(Null());
  }
    
      private:
    explicit DBWrapper();
    ~DBWrapper();
    
    Name            Speed       Q.Score   Author
xxHash          5.4 GB/s     10
CrapWow         3.2 GB/s      2       Andrew
MumurHash 3a    2.7 GB/s     10       Austin Appleby
SpookyHash      2.0 GB/s     10       Bob Jenkins
SBox            1.4 GB/s      9       Bret Mulvey
Lookup3         1.2 GB/s      9       Bob Jenkins
SuperFastHash   1.2 GB/s      1       Paul Hsieh
CityHash64      1.05 GB/s    10       Pike & Alakuijala
FNV             0.55 GB/s     5       Fowler, Noll, Vo
CRC32           0.43 GB/s     9
MD5-32          0.33 GB/s    10       Ronald L. Rivest
SHA1-32         0.28 GB/s    10
    
    #pragma once
#include <deque>
#include <string>
    
    // A builder class to build a merging iterator by adding iterators one by one.
class MergeIteratorBuilder {
 public:
  // comparator: the comparator used in merging comparator
  // arena: where the merging iterator needs to be allocated from.
  explicit MergeIteratorBuilder(const InternalKeyComparator* comparator,
                                Arena* arena, bool prefix_seek_mode = false);
  ~MergeIteratorBuilder();
    }
    
    namespace rocksdb {
CompactionFilterFactoryJniCallback::CompactionFilterFactoryJniCallback(
    JNIEnv* env, jobject jcompaction_filter_factory)
    : JniCallback(env, jcompaction_filter_factory) {
  
  // Note: The name of a CompactionFilterFactory will not change during
  // it's lifetime, so we cache it in a global var
  jmethodID jname_method_id =
      AbstractCompactionFilterFactoryJni::getNameMethodId(env);
  if(jname_method_id == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }
    
    
    {
    {   private:
     jmethodID m_jLogMethodId;
     jobject m_jdebug_level;
     jobject m_jinfo_level;
     jobject m_jwarn_level;
     jobject m_jerror_level;
     jobject m_jfatal_level;
     jobject m_jheader_level;
     std::unique_ptr<char[]> format_str(const char* format, va_list ap) const;
  };
}  // namespace rocksdb
    
    
    {  assert(odds > 0);
  if (odds % 7 == 0) {
    // class Random uses multiplier 16807, which is 7^5. If odds are
    // multiplier of 7, there might be limited values generated.
    odds++;
  }
  auto* r = Random::GetTLSInstance();
  bool crash = r->OneIn(odds);
  if (crash) {
    port::Crash(srcfile, srcline);
  }
}
    
    // That gcc wants both of these prototypes seems mysterious. VC, for
// its part, can't decide which to use (another mystery). Matching of
// template overloads: the final frontier.
#ifndef COMPILER_MSVC
template <typename T, size_t N>
char (&ArraySizeHelper(const T (&array)[N]))[N];
#endif
    
    void State::PauseTiming() {
  // Add in time accumulated so far
  CHECK(started_ && !finished_ && !error_occurred_);
  timer_->StopTimer();
}
    
      // Get the data from the accumulator to BenchmarkReporter::Run's.
  Run big_o;
  big_o.benchmark_name = benchmark_name + '_BigO';
  big_o.iterations = 0;
  big_o.real_accumulated_time = result_real.coef;
  big_o.cpu_accumulated_time = result_cpu.coef;
  big_o.report_big_o = true;
  big_o.complexity = result_cpu.complexity;
    
    
    {      delete[] errbuf;
    }