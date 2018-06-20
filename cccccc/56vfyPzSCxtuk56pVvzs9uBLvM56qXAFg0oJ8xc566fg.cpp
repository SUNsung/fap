
        
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
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__

    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedPrimitiveFieldGenerator);
};
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
        D3D_FEATURE_LEVEL featureLevels[] =
    {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
    };
    UINT numFeatureLevels = ARRAYSIZE(featureLevels);
    
    void cvReleaseStereoBMState( CvStereoBMState** state )
{
    if( !state )
        CV_Error( CV_StsNullPtr, '' );
    }
    
    
    {    IntrinsicParams();
    IntrinsicParams(Vec2d f, Vec2d c, Vec4d k, double alpha = 0);
    IntrinsicParams operator+(const Mat& a);
    IntrinsicParams& operator =(const Mat& a);
    void Init(const cv::Vec2d& f, const cv::Vec2d& c, const cv::Vec4d& k = Vec4d(0,0,0,0), const double& alpha = 0);
};
    
    #if 0
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
      // Randomly returns true ~'1/n' of the time, and false otherwise.
  // REQUIRES: n > 0
  bool OneIn(int n) { return (Next() % n) == 0; }
    
      AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
      const char* data_;
  size_t size_;
  uint32_t restart_offset_;     // Offset in data_ of restart array
  bool owned_;                  // Block owns data_[]
    
      // There must be a goodMallocSize between 100 and 1024...
  EXPECT_LT(1u, queue.front()->countChainElements());
  const IOBuf* buf = queue.front();
  do {
    EXPECT_LE(100u, buf->capacity());
    buf = buf->next();
  } while (buf != queue.front());
    
    TEST(IOBuf, IOBufCompare) {
  folly::IOBufCompare op;
  auto n = std::unique_ptr<IOBuf>{};
  auto e = IOBuf::create(0);
  auto hello1 = seq({'hello'});
  auto hello2 = seq({'hel', 'lo'});
  auto hello3 = seq({'he', 'll', 'o'});
  auto hellow = seq({'hellow'});
  auto hellox = seq({'hellox'});
    }
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.readIfNotEmpty(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    
    {  ExampleObject('foo');
  XLOG(INFO) << 'main returning';
  return 0;
}

    
    #endif
    
    #ifdef ANDROID
#include 'comm/android/callstack.h'
#endif
    
    void CommFrequencyLimit::__DelOlderTouchTime(uint64_t _time) {
    for (std::list<uint64_t>::iterator iter = touch_times_.begin(); iter != touch_times_.end();) {
        if ((_time - (*iter)) > time_span_) {
            iter = touch_times_.erase(iter);
            continue;
        }
    }
    }
    
    
/*
 * CoreServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
      /**
   * If pred == true, calls setReadCheckSocket(socket). Otherwise, calls
   * disableReadCheckSocket().
   */
  void setReadCheckSocketIf(const std::shared_ptr<SocketCore>& socket,
                            bool pred);
  /**
   * If pred == true, calls setWriteCheckSocket(socket). Otherwise, calls
   * disableWriteCheckSocket().
   */
  void setWriteCheckSocketIf(const std::shared_ptr<SocketCore>& socket,
                             bool pred);
    
      // File must be opened before calling this function.
  virtual void allocate(int64_t offset, int64_t length,
                        bool sparse) CXX11_OVERRIDE;
    
      virtual PrefPtr getPref() const CXX11_OVERRIDE { return pref_; }
    
    
    {} // namespace aria2
