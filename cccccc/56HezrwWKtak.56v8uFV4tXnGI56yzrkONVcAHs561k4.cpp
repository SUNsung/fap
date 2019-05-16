
        
        
    {
    {    output() = 'A(m, 0) == A(m-1, 1)';
  }
};
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_

    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
    // We define the PY_ARRAY_UNIQUE_SYMBOL in this .cc file and provide an
// ImportNumpy function to populate it.
#define TF_IMPORT_NUMPY
    
    class RandomAccessFile;
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    #include <stddef.h>
#include <stdint.h>
    
    Writer::Writer(WritableFile* dest, uint64_t dest_length)
    : dest_(dest), block_offset_(dest_length % kBlockSize) {
  InitTypeCrc(type_crc_);
}
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size / 5 - 1048576);
}
    
    
    {  // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
};
    
    
    {  Env* const env_;
  const std::string dbname_;
  const Options& options_;
  Cache* cache_;
};
    
      // Given a key, return an approximate byte offset in the file where
  // the data for that key begins (or would begin if the key were
  // present in the file).  The returned value is in terms of file
  // bytes, and so includes effects like compression of the underlying data.
  // E.g., the approximate offset of the last key in the table will
  // be close to the file length.
  uint64_t ApproximateOffsetOf(const Slice& key) const;
    
      // Add key,value to the table being constructed.
  // REQUIRES: key is after any previously added key according to comparator.
  // REQUIRES: Finish(), Abandon() have not been called
  void Add(const Slice& key, const Slice& value);
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
      for (auto& e : idx.outputs()) {
    ++ref_count[idx.entry_id(e)];
  }
  for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    for (auto &e : idx[nid].inputs) {
      ++ref_count[idx.entry_id(e)];
    }
  }
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    
    {  // creat mean image.
  inline void CreateMeanImg(void) {
    if (param_.verbose) {
      LOG(INFO) << 'Cannot find ' << param_.mean_img
                << ': create mean image, this will take some time...';
    }
    double start = dmlc::GetTime();
    size_t imcnt = 1;  // NOLINT(*)
    CHECK(this->Next_()) << 'input iterator failed.';
    meanimg_.Resize(outimg_.shape_);
    mshadow::Copy(meanimg_, outimg_);
    while (this->Next_()) {
      meanimg_ += outimg_;
      imcnt += 1;
      double elapsed = dmlc::GetTime() - start;
      if (imcnt % 10000L == 0 && param_.verbose) {
        LOG(INFO) << imcnt << ' images processed, ' << elapsed << ' sec elapsed';
      }
    }
    meanimg_ *= (1.0f / imcnt);
    // save as mxnet python compatible format.
    TBlob tmp = meanimg_;
    {
      std::unique_ptr<dmlc::Stream> fo(dmlc::Stream::Create(param_.mean_img.c_str(), 'w'));
      NDArray::Save(fo.get(),
                    {NDArray(tmp, 0)},
                    {'mean_img'});
    }
    if (param_.verbose) {
      LOG(INFO) << 'Save mean image to ' << param_.mean_img << '..';
    }
    meanfile_ready_ = true;
    this->BeforeFirst();
  }
};
    
    #ifndef MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#define MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#include <dmlc/parameter.h>
#include <string>
#include <utility>
#include <vector>
#include 'mxnet/ndarray.h'
    
    // C callback that can be used by TVM to extract
// the WrapAsyncCall function.
extern 'C' MXNET_DLL int MXTVMBridge(TVMFunctionHandle pregister) {
  using tvm::runtime::PackedFunc;
  const PackedFunc& fregister =
      *static_cast<PackedFunc*>(pregister);
  fregister('WrapAsyncCall', PackedFunc(mxnet::WrapAsyncCall));
  return 0;
}

    
      ~DHTRoutingTable();
    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
    class DHTTaskExecutor {
private:
  int numConcurrent_;
  std::vector<std::shared_ptr<DHTTask>> execTasks_;
  std::deque<std::shared_ptr<DHTTask>> queue_;
    }
    
    #include 'common.h'
    
      _InternalExtensionInfo__isset __isset;
    
      std::string content;
  auto status = readFile('/etc/exports', content);
  if (!status.ok()) {
    VLOG(1) << 'Error reading /etc/exports: ' << status.toString();
    return {};
  }
    
    // A global char* and an SQL function to access its current value
// from within an SQL statement. This program used to use the
// sqlite_exec_printf() API to substitute a string into an SQL statement.
// The correct way to do this with sqlite3 is to use the bind API, but
// since the shell is built around the callback paradigm it would be a lot
// of work. Instead just use this hack, which is quite harmless.
static const char* zShellStatic = nullptr;
void shellstaticFunc(sqlite3_context* context,
                     int argc,
                     sqlite3_value** /* argv */) {
  (void)argc;
  assert(0 == argc);
  assert(zShellStatic);
  sqlite3_result_text(context, zShellStatic, -1, SQLITE_STATIC);
}
    
    #include <osquery/utils/expected/expected.h>
#include <osquery/utils/system/posix/errno.h>