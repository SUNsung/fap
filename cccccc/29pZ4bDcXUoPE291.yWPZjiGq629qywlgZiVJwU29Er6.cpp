
        
        using namespace swift;
    
    
    {  /// Profile the substitution map storage, for use with LLVM's FoldingSet.
  static void Profile(llvm::FoldingSetNodeID &id,
                      GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
};
    
    #include 'swift/Basic/PrefixMap.h'
#include 'swift/Basic/QuotedString.h'
#include 'llvm/ADT/SmallString.h'
#include 'llvm/Support/Compiler.h'
    
      static CFPointeeInfo forTypedef(const clang::TypedefNameDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = decl;
    return info;
  }
    
      using SourceManagerRef = llvm::IntrusiveRefCntPtr<const clang::SourceManager>;
  auto iter = std::lower_bound(sourceManagersWithDiagnostics.begin(),
                               sourceManagersWithDiagnostics.end(),
                               &clangSrcMgr,
                               [](const SourceManagerRef &inArray,
                                  const clang::SourceManager *toInsert) {
    return std::less<const clang::SourceManager *>()(inArray.get(), toInsert);
  });
  if (iter == sourceManagersWithDiagnostics.end() ||
      iter->get() != &clangSrcMgr) {
    sourceManagersWithDiagnostics.insert(iter, &clangSrcMgr);
  }
    
    bool Mangle::needsPunycodeEncoding(StringRef str) {
  for (unsigned char c : str) {
    if (!isValidSymbolChar(c))
      return true;
  }
  return false;
}
    
    
    
    Base::~Base() {
}
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
          // strip off data uri header if raw is set
      if (!(data.raw.get() && *(data.raw))) {
        if (data.type == TYPE_PNG && base::StartsWith(content, kPNGDataUriPrefix, base::CompareCase::INSENSITIVE_ASCII)) {
          content = content.substr(strlen(kPNGDataUriPrefix));
        } else if (data.type == TYPE_JPEG && base::StartsWith(content, kJPEGDataUriPrefix, base::CompareCase::INSENSITIVE_ASCII)) {
          content = content.substr(strlen(kJPEGDataUriPrefix));
        } else {
          error_ = base::StringPrintf('Invalid data URI. Only \'%s\' or \'%s\' is accepted.', kPNGDataUriPrefix, kJPEGDataUriPrefix);
          return false;
        }
      }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
    class NwObjCallObjectMethodFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
      // This random number generator facade hides boost and CUDA rng
  // implementation from one another (for cross-platform compatibility).
  class RNG {
   public:
    RNG();
    explicit RNG(unsigned int seed);
    explicit RNG(const RNG&);
    RNG& operator=(const RNG&);
    void* generator();
   private:
    class Generator;
    shared_ptr<Generator> generator_;
  };
    
    #include 'caffe/common.hpp'
    
    
    {}  // namespace caffe
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      Blob<int> offsets;
  Blob<int> src_strides_;
  Blob<int> dest_strides_;
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
    
    {
    {} // namespace test
} // namespace c10d

    
    )DOC')
    .Arg(
        'values',
        '*(type depends on dtype, Required=True)* The value of the elements to go in the *output* tensor.',
        true /* required */)
    .Arg(
        'dtype',
        'The data type for the elements of the output tensor. Strictly must be one of the types from DataType enum in TensorProto.')
    .Arg(
        'shape',
        '*(type: [int])* Desired shape of the *output* tensor.')
    .Arg(
        'extra_shape',
        '*(type: [int])* The additional dimensions appended at the end of the *shape* indicated by the input blob. Cannot set the *extra_shape* argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '*(type: bool; default: False)* set to *True* to use the *input* as shape. First, input must be in CPU context.')
    .Input(
        0,
        'input',
        '(Optional) 1D tensor specifying the shape of the output. Must be used with *input_as_shape=True*')
    .Output(
        0,
        'output',
        'Output tensor with desired dimension filled with specified data. If the shape argument is set, this is the shape specified, and if the *input* exists and *input_as_shape=True*, it is the shape specified by the *input* tensor.')
    .TensorInferenceFunction(FillerTensorInference<>);
    
    #ifndef incl_HPHP_CONFIG_H_
#define incl_HPHP_CONFIG_H_
    
    struct DataStreamWrapper final : Stream::Wrapper {
  DataStreamWrapper() {
    m_isLocal = true;
  }
    }
    
      static std::string FormatNumber(const char* fmt, int64_t n);
  static std::string FormatSize(int64_t size);
  static std::string FormatTime(int64_t milliSeconds);
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    #endif // incl_HPHP_OUTPUT_FILE_H_

    
    #include <atomic>
    
    /**
 * A request-local wrapper for the three standard files:
 * STDIN, STDOUT, and STDERR.
 */
struct BuiltinFiles final : RequestEventHandler {
  static const Variant& GetSTDIN();
  static const Variant& GetSTDOUT();
  static const Variant& GetSTDERR();
    }
    
    
    {
    {      auto serial = resp.content.find('serial_number');
      if (serial != resp.content.end()) {
        hw_info[serial->second] = resp.content;
      };
    }
  });
    
    #pragma once
    
    TEST_F(PerfOutputTests,
       impl_consumeWrappedMessagesFromCircularBuffer_splited_record_wrapping) {
  using WrappedMessage = ebpf::PerfOutput<TestMessage>::WrappedMessage;
  auto const test_size = std::size_t{3};
  auto buf = std::vector<ebpf::impl::ByteType>(
      sizeof(WrappedMessage) * test_size + 154, 0);
  auto const first_part_size = 8;
  auto const tail = buf.size() - sizeof(WrappedMessage) - first_part_size;
  auto const head = tail + sizeof(WrappedMessage) * test_size;
    }
    
    /** @class Follow
 * @brief Follow is an action that 'follows' a node.
 * Eg:
 * @code
 * layer->runAction(Follow::create(hero));
 * @endcode
 * Instead of using Camera as a 'follower', use this action instead.
 * @since v0.99.2
 */
class CC_DLL Follow : public Action
{
public:
    /**
     * Creates the action with a set boundary or with no boundary.
     *
     * @param followedNode  The node to be followed.
     * @param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work
     *              with no boundary.
    */
    
    static Follow* create(Node *followedNode, const Rect& rect = Rect::ZERO);
    
    /**
     * Creates the action with a set boundary or with no boundary with offsets.
     *
     * @param followedNode  The node to be followed.
     * @param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work
     *              with no boundary.
     * @param xOffset The horizontal offset from the center of the screen from which the
     *               node  is to be followed.It can be positive,negative or zero.If
     *               set to zero the node will be horizontally centered followed.
     *  @param yOffset The vertical offset from the center of the screen from which the
     *                 node is to be followed.It can be positive,negative or zero.
     *                 If set to zero the node will be vertically centered followed.
     *   If both xOffset and yOffset are set to zero,then the node will be horizontally and vertically centered followed.
     */
    }
    
    
    {
    {        auto newgrid = this->getGrid();
        _gridNodeTarget->setGrid(newgrid);
        _gridNodeTarget->getGrid()->setActive(true);
    }
}
    
        if ( x0 > x1 )
    {
        // Normal Grid
        a.setZero();
        b.set(0.0f, 1.0f);
        c.set(1.0f, 0.0f);
        d.set(1.0f, 1.0f);
        x = x0;
    }
    else
    {
        // Reversed Grid
        c.setZero();
        d.set(0.0f, 1.0f);
        a.set(1.0f, 0.0f);
        b.set(1.0f, 1.0f);
        x = x1;
    }
    
    diff.x = ( x - x * mx );
    diff.z = fabsf( floorf( (x * mz) / 4.0f ) );
    
    /**
@brief Progress to percentage.
@details This action show the target node from current percentage to the specified percentage.
        You should specify the destination percentage when creating the action.
@since v0.99.1
*/
class CC_DLL ProgressTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes with a duration and a destination percentage.
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressTo action; otherwise, return nil.
     */
    static ProgressTo* create(float duration, float percent);
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        /**
     * set the data to be a pointer to a number of Quads
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param quad  a pointer to the V3F_C4B_T2F_Quad quads
     */
    void setQuads(V3F_C4B_T2F_Quad *quads, int numberOfQuads);