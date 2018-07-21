
        
          // GlobalShortcutListener::Observer implementation.
  void OnKeyPressed(const ui::Accelerator& accelerator) override;
    
    // relauncher implements main browser application relaunches across platforms.
// When a browser wants to relaunch itself, it can't simply fork off a new
// process and exec a new browser from within. That leaves open a window
// during which two browser applications might be running concurrently. If
// that happens, each will wind up with a distinct Dock icon, which is
// especially bad if the user expected the Dock icon to be persistent by
// choosing Keep in Dock from the icon's contextual menu.
//
// relauncher approaches this problem by introducing an intermediate
// process (the 'relauncher') in between the original browser ('parent') and
// replacement browser ('relaunched'). The helper executable is used for the
// relauncher process; because it's an LSUIElement, it doesn't get a Dock
// icon and isn't visible as a running application at all. The parent will
// start a relauncher process, giving it the 'writer' side of a pipe that it
// retains the 'reader' end of. When the relauncher starts up, it will
// establish a kqueue to wait for the parent to exit, and will then write to
// the pipe. The parent, upon reading from the pipe, is free to exit. When the
// relauncher is notified via its kqueue that the parent has exited, it
// proceeds, launching the relaunched process. The handshake to synchronize
// the parent with the relauncher is necessary to avoid races: the relauncher
// needs to be sure that it's monitoring the parent and not some other process
// in light of PID reuse, so the parent must remain alive long enough for the
// relauncher to set up its kqueue.
    
    #endif  // ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_

    
    namespace mate {
    }
    
    
    {  DraggableRegion();
};
    
      // Sets ID of the hosting desktop picker dialog. The window with this ID will
  // be filtered out from the list of sources.
  virtual void SetViewDialogWindowId(content::DesktopMediaID::Id dialog_id) = 0;
    
      // This returns true if all components are specified, and min and max are
  // equal.
  bool HasFixedSize() const;
    
    #endif  // ATOM_BROWSER_API_ATOM_API_NET_H_

    
    // Convert a Python object to a FileDescriptorProto pointer.
// Handles all kinds of Python errors, which are simply logged.
static bool GetFileDescriptorProto(PyObject* py_descriptor,
                                   FileDescriptorProto* output) {
  if (py_descriptor == NULL) {
    if (PyErr_ExceptionMatches(PyExc_KeyError)) {
      // Expected error: item was simply not found.
      PyErr_Clear();
    } else {
      GOOGLE_LOG(ERROR) << 'DescriptorDatabase method raised an error';
      PyErr_Print();
    }
    return false;
  }
  if (py_descriptor == Py_None) {
    return false;
  }
  const Descriptor* filedescriptor_descriptor =
      FileDescriptorProto::default_instance().GetDescriptor();
  CMessage* message = reinterpret_cast<CMessage*>(py_descriptor);
  if (PyObject_TypeCheck(py_descriptor, &CMessage_Type) &&
      message->message->GetDescriptor() == filedescriptor_descriptor) {
    // Fast path: Just use the pointer.
    FileDescriptorProto* file_proto =
        static_cast<FileDescriptorProto*>(message->message);
    *output = *file_proto;
    return true;
  } else {
    // Slow path: serialize the message. This allows to use databases which
    // use a different implementation of FileDescriptorProto.
    ScopedPyObjectPtr serialized_pb(
        PyObject_CallMethod(py_descriptor, 'SerializeToString', NULL));
    if (serialized_pb == NULL) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    char* str;
    Py_ssize_t len;
    if (PyBytes_AsStringAndSize(serialized_pb.get(), &str, &len) < 0) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    FileDescriptorProto file_proto;
    if (!file_proto.ParseFromArray(str, len)) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      return false;
    }
    *output = file_proto;
    return true;
  }
}
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
    
    
    #include <string>
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      // All static variables have to be declared at the top-level of the file
  // so that we can control initialization order, which is important for
  // DescriptorProto bootstrapping to work.
  virtual void GenerateStaticVariables(
      io::Printer* printer, int* bytecode_estimate) = 0;
    
    static void PrintScriptDirs(const GenericVector<StrongScriptDirection> &dirs) {
  for (int i = 0; i < dirs.size(); i++) {
    switch (dirs[i]) {
      case DIR_NEUTRAL: tprintf ('N '); break;
      case DIR_LEFT_TO_RIGHT: tprintf('L '); break;
      case DIR_RIGHT_TO_LEFT: tprintf('R '); break;
      case DIR_MIX: tprintf('Z '); break;
      default: tprintf('? '); break;
    }
  }
  tprintf('\n');
}
    
    
    {  virtual R Run() {
    if (!del) {
      R result = (*function_)(p1_,p2_,p3_,p4_,p5_);
      return result;
    } else {
      R result = (*function_)(p1_,p2_,p3_,p4_,p5_);
      //  zero out the pointer to ensure segfault if used again
      function_ = nullptr;
      delete this;
      return result;
    }
  }
};
    
      void Clear();
    
      // Creates and returns a Pix with the same resolution as the original
  // in which 1 (black) pixels represent likely non text (photo, line drawing)
  // areas of the page, deleting from the blob_block the blobs that were
  // determined to be non-text.
  // The photo_map (binary image mask) is used to bias the decision towards
  // non-text, rather than supplying a definite decision.
  // The blob_block is the usual result of connected component analysis,
  // holding the detected blobs.
  // The returned Pix should be PixDestroyed after use.
  Pix* ComputeNonTextMask(bool debug, Pix* photo_map, TO_BLOCK* blob_block);
    
                // second, get data from reader, stored it in cache
            // 1. for each key, allocate the specific matrix on device
            for (auto& pa : inputMatrices)
            {
                const wstring& name = pa.first;
                const auto& input = pa.second;
                auto& M = input.GetMatrix<ElemType>();
                if (m_inputMatricesCache.find(name) == m_inputMatricesCache.end())
                    m_inputMatricesCache.AddInput(name, make_shared<Matrix<ElemType>>(M, M.GetDeviceId()), input.pMBLayout, input.sampleLayout); // deep copy from M
                else
                    m_inputMatricesCache.GetInputMatrix<ElemType>(name).SetValue(M);
            }
            // 2. MBlayout
            m_MBLayoutCache->CopyFrom(net.GetMBLayoutPtrOfNetwork());
            size_t nParallelSequences = m_MBLayoutCache->GetNumParallelSequences();
    
    #include 'Basics.h'
#include 'ComputationNetwork.h'
#include 'SimpleEvaluator.h'
#include 'DataReader.h'
#include 'ScriptableObjects.h'
#include 'Criterion.h'
#include <vector>
#include <string>
#include <stdexcept>
#include 'fileutil.h'
#include 'Config.h'
#include <chrono>
#include <random>
#include 'Profiler.h'
#include 'MASGD.h'
#include 'ASGDHelper.h'
#include <map>
using namespace std; // ugh! TODO: get rid of this from .h files!!!
    
    template<> inline
dnnError_t dnnConversionCreate<double>(dnnPrimitive_t* pConversion, const dnnLayout_t from, const dnnLayout_t to)
{
    return dnnConversionCreate_F64(pConversion, from, to);
}
    
    // understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental CNTK integration
    
    
    {  // Check that deleting works.
  ASSERT_TRUE(!env_->DeleteFile('/dir/non_existent').ok());
  ASSERT_OK(env_->DeleteFile('/dir/g'));
  ASSERT_TRUE(!env_->FileExists('/dir/g'));
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(0, children.size());
  ASSERT_OK(env_->DeleteDir('/dir'));
}
    
      // create first key range
  leveldb::WriteBatch batch;
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Put(Key1(i), 'value for range 1 key');
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options),
      restarts_(),
      counter_(0),
      finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);       // First restart point is at offset 0
}
    
    class FilterPolicy;
    
    class Histogram {
 public:
  Histogram() { }
  ~Histogram() { }
    }
    
    // Helper class that locks a mutex on construction and unlocks the mutex when
// the destructor of the MutexLock object is invoked.
//
// Typical usage:
//
//   void MyClass::MyMethod() {
//     MutexLock l(&mu_);       // mu_ is an instance variable
//     ... some complex code, possibly with multiple return paths ...
//   }
    
    #include <stdint.h>
    
      ~Writer();