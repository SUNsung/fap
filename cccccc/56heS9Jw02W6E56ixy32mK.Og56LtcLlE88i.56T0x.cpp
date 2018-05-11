
        
          /// Build the components of an Objective-C method descriptor for the given
  /// property's method implementations.
  void emitObjCGetterDescriptorParts(IRGenModule &IGM,
                                     VarDecl *property,
                                     llvm::Constant *&selectorRef,
                                     llvm::Constant *&atEncoding,
                                     llvm::Constant *&impl);
    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
    namespace swift {
    }
    
    
    {}
    
    #include 'Private.h'
#include 'swift/Runtime/Once.h'
#include 'swift/Runtime/Debug.h'
#include <type_traits>
    
    
    {}  // namespace leveldb
    
      if (direction_ == kReverse) {  // Switch directions?
    direction_ = kForward;
    // iter_ is pointing just before the entries for this->key(),
    // so advance into the range of entries for this->key() and then
    // use the normal skipping code below.
    if (!iter_->Valid()) {
      iter_->SeekToFirst();
    } else {
      iter_->Next();
    }
    if (!iter_->Valid()) {
      valid_ = false;
      saved_key_.clear();
      return;
    }
    // saved_key_ already contains the key to skip past.
  } else {
    // Store in saved_key_ the current key so we skip it below.
    SaveKey(ExtractUserKey(iter_->key()), &saved_key_);
  }
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
    // Return a builtin comparator that uses lexicographic byte-wise
// ordering.  The result remains the property of this module and
// must not be deleted.
extern const Comparator* BytewiseComparator();
    
    #include <string>
    
    Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the 'Software'), to deal in the Software without
restriction, including without limitation the rights to use, copy,
modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    PyObject* NewFileServicesByName(const FileDescriptor* descriptor);
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
        'return this;\n');
    
    // dims=[5, 4, 3, 2]->[5, 3, 2, 4]
TEST_F(MatrixTest, RotatingTranspose_1_3) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 1, 3, &m);
  m.ResizeNoInit(kInputSize_ / 4, 4);
  // Verify that the result is:
  // output tensor=[[[[0, 6, 12, 18][1, 7, 13, 19]]
  //                 [[2, 8, 14, 20][3, 9, 15, 21]]
  //                 [[4, 10, 16, 22][5, 11, 17, 23]]]
  //                [[[24, 30, 36, 42]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(6, m(0, 1));
  EXPECT_EQ(1, m(1, 0));
  EXPECT_EQ(2, m(2, 0));
  EXPECT_EQ(3, m(3, 0));
  EXPECT_EQ(4, m(4, 0));
  EXPECT_EQ(5, m(5, 0));
  EXPECT_EQ(24, m(6, 0));
  EXPECT_EQ(30, m(6, 1));
}
    
    // A small event handler class to process incoming events to
// this window.
class PGEventHandler : public SVEventHandler {
  public:
   PGEventHandler(tesseract::Tesseract* tess) : tess_(tess) {
   }
   void Notify(const SVEvent* sve);
  private:
    tesseract::Tesseract* tess_;
};
    
    // The number of points to consider at each end.
const int kNumEndPoints = 3;
// The minimum number of points at which to switch to number of points
// for badly fitted lines.
// To ensure a sensible error metric, kMinPointsForErrorCount should be at
// least kMaxRealDistance / (1 - %ile) where %ile is the fractile used in
// ComputeUpperQuartileError.
const int kMinPointsForErrorCount = 16;
// The maximum real distance to use before switching to number of
// mis-fitted points, which will get square-rooted for true distance.
const int kMaxRealDistance = 2.0;
    
    // Computes the Otsu threshold(s) for the given image rectangle, making one
// for each channel. Each channel is always one byte per pixel.
// Returns an array of threshold values and an array of hi_values, such
// that a pixel value >threshold[channel] is considered foreground if
// hi_values[channel] is 0 or background if 1. A hi_value of -1 indicates
// that there is no apparent foreground. At least one hi_value will not be -1.
// Delete thresholds and hi_values with delete [] after use.
// The return value is the number of channels in the input image, being
// the size of the output thresholds and hi_values arrays.
int OtsuThreshold(Pix* src_pix, int left, int top, int width, int height,
                  int** thresholds, int** hi_values);
    
    #include          'host.h'
    
    template<typename T>
typename std::enable_if<std::numeric_limits<T>::is_integer, bool>::type
    check_equal(T x, T y) {
  return x == y;
}
    
    #define THCPStorage TH_CONCAT_3(THCP,Real,Storage)
#define THCPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THCPStorageClass TH_CONCAT_3(THCP,Real,StorageClass)
#define THCPStorage_(NAME) TH_CONCAT_4(THCP,Real,Storage_,NAME)
    
    #define THPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THPDoubleStorageClass)
#define THPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THPLongStorageClass)
#define THPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THPIntStorageClass)
#define THPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THPShortStorageClass)
#define THPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THPCharStorageClass)
#define THPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THPByteStorageClass)
    
      for (auto &obj_name: used_objects) {
    DEBUG('freeing %s', obj_name.c_str());
    shm_unlink(obj_name.c_str());
  }
    
    namespace thd { namespace rpc {
    }
    }
    
      THDTensor_(checkTransposed)(ru);
    
            // Get model's producer name.
        // Return null pointer if not specified.
        const std::string& ProducerName() const;
        // Set model's producer name.
        void SetProducerName(const std::string& p_producerName);
    
    namespace ONNXIR
{
    namespace Common
    {
        Status::Status(StatusCategory p_category, int p_code, const std::string& p_msg)
        {
            m_state.reset(new State());
            m_state->m_category = p_category;
            m_state->m_code = p_code;
            m_state->m_msg = p_msg;
        }
    }
    }
    
    #define REGISTER_ELEMENTWISE_BROADCAST_OPERATOR_SCHEMA(OpName)                                          \
    REGISTER_OPERATOR_SCHEMA(OpName)                                                                        \
        .Description(                                                                                        \
            'Performs element-wise binary '#OpName' (with limited broadcast support).'                        \
                                                                                                            \
            'If necessary, the right-hand-side argument will be broadcasted to match the shape of'            \
            'left-handside argument. When broadcasting is specified, the second tensor can either be of'    \
            'size 1 (a scalar value) or having its shape as a contiguous subset of the first tensor's'        \
            'shape. The starting of the mutually equal shape is specified by the argument \'axis\' and if'    \
            'it is not set, suffix matching is assumed. 1-dim expansion doesn't work yet. '                    \
                                                                                                            \
            'For example, the following tensor shapes are supported (with broadcast=1): '                    \
            'shape(A) = (2, 3, 4, 5), shape(B) = (,), i.e. B is a scalar'                                    \
            'shape(A) = (2, 3, 4, 5), shape(B) = (5,)'                                                        \
            'shape(A) = (2, 3, 4, 5), shape(B) = (4, 5)'                                                    \
            'shape(A) = (2, 3, 4, 5), shape(B) = (3, 4), with axis=1'                                        \
            'shape(A) = (2, 3, 4, 5), shape(B) = (2), with axis=0'                                            \
                                                                                                            \
            'Attribute broadcast=1 needs to be passed to enable broadcasting')                                \
        .Input('A', 'First operand, should share the type with the second operand.', 'T')                   \
        .Input('B', 'Second operand. With broadcasting can be of smaller size than A. '                     \
            'If broadcasting is disabled it should be of the same size..', 'T')                             \
        .Output('C', 'Result, has same dimensions and type as A.', 'T')                                     \
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },                      \
            'Constrain input and output types to float tensors.')                                           \
        .Attr('axis', 'If set, defines the broadcast dimensions.',                                          \
            AttrType::AttributeProto_AttributeType_INT)                                                     \
        .Attr('broadcast', 'Enable broadcasting.',                                                          \
            AttrType::AttributeProto_AttributeType_INT);
    
            if (isFinalValidationPass) 
        {
            if (!(Input(0)->GetSampleMatrixNumRows() == Input(1)->GetSampleMatrixNumRows() && // match vector dimension
                Input(0)->HasMBLayout() &&
                Input(0)->GetMBLayout() == Input(1)->GetMBLayout()))
            {
                LogicError('The Matrix dimension in the ForwardBackwardNode operation does not match.');
            }
    }
    
    
    {public:
    SectionStats(SectionFile* file, Section* parentSection, SectionHeader* sectionHeader, size_t filePosition, MappingType mappingType = mappingParent, size_t size = 0);
    SectionStats(SectionFile* file, Section* parentSection, size_t filePosition, MappingType mappingType = mappingParent, size_t size = 0);
    void InitCompute(const ConfigArray& compute);
    void SetCompute(const std::string& name, double value);
    double GetCompute(const std::string& name);
    void Store();
};
    
      std::vector<std::string> line_exports;
  unsigned int readonly = 0;
  int options_index = -1;
    
      // Get the hash value for the kernel's .text memory segment
  auto f2 = osquery::readFile(kKernelTextHashPath, content);
  if (f2.ok()) {
    boost::trim(content);
    text_segment_hash = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelTextHashPath;
    return results;
  }
    
    namespace osquery {
    }
    
        auto process = PlatformProcess::launchWorker(
        kProcessTestExecPath.c_str(),
        static_cast<int>(kExpectedWorkerArgsCount),
        &argv[0]);
    for (size_t i = 0; i < argv.size(); i++) {
      delete[] argv[i];
    }
    
      EXPECT_TRUE(cl.notExistsOrMatches('some'));
  EXPECT_TRUE(cl.matches('some'));
  EXPECT_FALSE(cl.notExistsOrMatches('not_some'));
    
    #include 'db/log_format.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/status.h'
#include 'rocksdb/options.h'
    
    // A file abstraction for reading sequentially through a file
class LibradosSequentialFile : public SequentialFile {
  librados::IoCtx * _io_ctx;
  std::string _fid;
  std::string _hint;
  int _offset;
public:
  LibradosSequentialFile(librados::IoCtx * io_ctx, std::string fid, std::string hint):
    _io_ctx(io_ctx), _fid(fid), _hint(hint), _offset(0) {}
    }
    
    void SyncPoint::ClearAllCallBacks() {
  impl_->ClearAllCallBacks();
}
    
      void LoadDependency(const std::vector<SyncPointPair>& dependencies);
  void LoadDependencyAndMarkers(const std::vector<SyncPointPair>& dependencies,
    const std::vector<SyncPointPair>& markers);
  bool PredecessorsAllCleared(const std::string& point);
  void SetCallBack(const std::string& point,
    const std::function<void(void*)>& callback) {
  std::lock_guard<std::mutex> lock(mutex_);
  callbacks_[point] = callback;
}
    
    
    {  void Open() { DBTestBase::Reopen(GetOptions()); }
};
    
        int getOverflow(void) const;
    int getDisplay(void) const;
    
    template<typename... ARGS>
inline void logd(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_DEBUG, tag, msg, args...);
}
    
    #pragma once
#include <atomic>
#include <fb/assert.h>
#include <fb/noncopyable.h>
#include <fb/nonmovable.h>
#include <fb/RefPtr.h>