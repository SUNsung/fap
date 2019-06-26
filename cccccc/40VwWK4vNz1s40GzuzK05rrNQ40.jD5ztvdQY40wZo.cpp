
        
        
    {}  // namespace internal
    
    v8::MaybeLocal<v8::Object> WrappableBase::GetWrapper(
    v8::Isolate* isolate) const {
  if (!wrapper_.IsEmpty())
    return v8::MaybeLocal<v8::Object>(
        v8::Local<v8::Object>::New(isolate, wrapper_));
  else
    return v8::MaybeLocal<v8::Object>();
}
    
    template <typename P1, typename P2, typename P3, typename P4, typename P5>
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*(P1, P2, P3, P4, P5)>& callback) {
  typename CallbackParamTraits<P1>::LocalType a1;
  typename CallbackParamTraits<P2>::LocalType a2;
  typename CallbackParamTraits<P3>::LocalType a3;
  typename CallbackParamTraits<P4>::LocalType a4;
  typename CallbackParamTraits<P5>::LocalType a5;
  if (!GetNextArgument(args, 0, true, &a1) ||
      !GetNextArgument(args, 0, false, &a2) ||
      !GetNextArgument(args, 0, false, &a3) ||
      !GetNextArgument(args, 0, false, &a4) ||
      !GetNextArgument(args, 0, false, &a5))
    return nullptr;
  return callback.Run(a1, a2, a3, a4, a5);
}
    
      template <typename T>
  bool SetMethod(const base::StringPiece& key, const T& callback) {
    return GetHandle()
        ->Set(isolate_->GetCurrentContext(), StringToV8(isolate_, key),
              CallbackTraits<T>::CreateTemplate(isolate_, callback)
                  ->GetFunction(isolate_->GetCurrentContext())
                  .ToLocalChecked())
        .ToChecked();
  }
    
    // Base template - used only for non-member function pointers. Other types
// either go to one of the below specializations, or go here and fail to compile
// because of base::Bind().
template <typename T, typename Enable = void>
struct CallbackTraits {
  static v8::Local<v8::FunctionTemplate> CreateTemplate(v8::Isolate* isolate,
                                                        T callback) {
    return CreateFunctionTemplate(isolate, base::Bind(callback));
  }
};
    
    #ifndef NATIVE_MATE_NATIVE_MATE_PERSISTENT_DICTIONARY_H_
#define NATIVE_MATE_NATIVE_MATE_PERSISTENT_DICTIONARY_H_
    
     protected:
  // Notify another process, if available.
  // Returns true if another process was found and notified, false if we should
  // continue with the current process.
  // On Windows, Create() has to be called before this.
  NotifyResult NotifyOtherProcess();
    
    base::FilePath DownloadItem::GetSavePath() const {
  return save_path_;
}
    
    void ProcessSingleton::StartListeningOnSocket() {
  watcher_ = new LinuxWatcher(this);
  base::PostTaskWithTraits(
      FROM_HERE, {BrowserThread::IO},
      base::BindOnce(&ProcessSingleton::LinuxWatcher::StartListening, watcher_,
                     sock_));
}
    
    GlobalMenuBarRegistrarX11::~GlobalMenuBarRegistrarX11() {
  if (registrar_proxy_) {
    g_signal_handlers_disconnect_by_func(
        registrar_proxy_, reinterpret_cast<void*>(OnNameOwnerChangedThunk),
        this);
    g_object_unref(registrar_proxy_);
  }
}
    
      std::vector<std::string> flash_version_numbers = base::SplitString(
      version, '.', base::TRIM_WHITESPACE, base::SPLIT_WANT_NONEMPTY);
  if (flash_version_numbers.empty())
    flash_version_numbers.push_back('11');
  // |SplitString()| puts in an empty string given an empty string. :(
  else if (flash_version_numbers[0].empty())
    flash_version_numbers[0] = '11';
  if (flash_version_numbers.size() < 2)
    flash_version_numbers.push_back('2');
  if (flash_version_numbers.size() < 3)
    flash_version_numbers.push_back('999');
  if (flash_version_numbers.size() < 4)
    flash_version_numbers.push_back('999');
  // E.g., 'Shockwave Flash 10.2 r154':
  plugin.description = plugin.name + ' ' + flash_version_numbers[0] + '.' +
                       flash_version_numbers[1] + ' r' +
                       flash_version_numbers[2];
  plugin.version = base::JoinString(flash_version_numbers, '.');
  content::WebPluginMimeType swf_mime_type(content::kFlashPluginSwfMimeType,
                                           content::kFlashPluginSwfExtension,
                                           content::kFlashPluginSwfDescription);
  plugin.mime_types.push_back(swf_mime_type);
  content::WebPluginMimeType spl_mime_type(content::kFlashPluginSplMimeType,
                                           content::kFlashPluginSplExtension,
                                           content::kFlashPluginSplDescription);
  plugin.mime_types.push_back(spl_mime_type);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33>
internal::ValueArray33<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6,
    T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15,
    T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23,
    T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31,
    T32 v32, T33 v33) {
  return internal::ValueArray33<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33>(v1, v2, v3, v4, v5, v6, v7, v8,
      v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23,
      v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
}
    
    
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
    // Implementation #1 calculates the primes on-the-fly.
class OnTheFlyPrimeTable : public PrimeTable {
 public:
  virtual bool IsPrime(int n) const {
    if (n <= 1) return false;
    }
    }
    
      s.Set(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
    
     private:
  // Creates a node with a given element value.  The next pointer is
  // set to NULL.
  explicit QueueNode(const E& an_element) : element_(an_element), next_(NULL) {}
    
    
#ifdef __cplusplus
class GLUnurbs;
class GLUquadric;
class GLUtesselator;
#else
typedef struct GLUnurbs GLUnurbs;
typedef struct GLUquadric GLUquadric;
typedef struct GLUtesselator GLUtesselator;
#endif
    
      // Does this device use functionShadedFill(), axialShadedFill(), and
  // radialShadedFill()?  If this returns false, these shaded fills
  // will be reduced to a series of other drawing operations.
  virtual GBool useShadedFills(int type)
    { return type < 4 && level >= psLevel2; }
    
      Gfx *createGfx(OutputDev *out, double hDPI, double vDPI,
		 int rotate, GBool useMediaBox, GBool crop,
		 int sliceX, int sliceY, int sliceW, int sliceH,
		 GBool printing, Catalog *catalog,
		 GBool (*abortCheckCbk)(void *data),
		 void *abortCheckCbkData,
		 GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
		 void *annotDisplayDecideCbkData);
    
      divisor = 1000;
  for (k = 3; k >= 0; k--) {
    i = number / divisor;
    number = number % divisor;
    }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006, 2010 Albert Astals Cid <aacid@kde.org>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    class PopplerCacheItem
{
  public:
   virtual ~PopplerCacheItem();
};
    
      // repeat count, can be real values, 0 means forever
  double repeatCount;                      // 1.0
    
      virtual void *makeAuthData(GooString *ownerPassword,
			     GooString *userPassword);
  virtual void *getAuthData();
  virtual void freeAuthData(void *authData);
  virtual GBool authorize(void *authData);
  virtual int getPermissionFlags() { return permFlags; }
  virtual GBool getOwnerPasswordOk() { return ownerPasswordOk; }
  virtual Guchar *getFileKey() { return fileKey; }
  virtual int getFileKeyLength() { return fileKeyLength; }
  virtual int getEncVersion() { return encVersion; }
  virtual int getEncRevision() { return encRevision; }
  virtual CryptAlgorithm getEncAlgorithm() { return encAlgorithm; }
    
      softMask = new SplashBitmap(bitmap->getWidth(), bitmap->getHeight(),
			      1, splashModeMono8, gFalse);
  unsigned char fill = 0;
  if (transpGroupStack->blendingColorSpace) {
	transpGroupStack->blendingColorSpace->getGray(backdropColor, &gray);
	fill = colToByte(gray);
  }
  memset(softMask->getDataPtr(), fill,
	 softMask->getRowSize() * softMask->getHeight());
  p = softMask->getDataPtr() + ty * softMask->getRowSize() + tx;
  int xMax = tBitmap->getWidth();
  int yMax = tBitmap->getHeight();
  if (xMax + tx > bitmap->getWidth()) xMax = bitmap->getWidth() - tx;
  if (yMax + ty > bitmap->getHeight()) yMax = bitmap->getHeight() - ty;
  for (y = 0; y < yMax; ++y) {
    for (x = 0; x < xMax; ++x) {
      if (alpha) {
	p[x] = tBitmap->getAlpha(x, y);
      } else {
	tBitmap->getPixel(x, y, color);
	// convert to luminosity
	switch (colorMode) {
	case splashModeMono1:
	case splashModeMono8:
	  lum = color[0] / 255.0;
	  break;
	case splashModeXBGR8:
	case splashModeRGB8:
	case splashModeBGR8:
	  lum = (0.3 / 255.0) * color[0] +
	        (0.59 / 255.0) * color[1] +
	        (0.11 / 255.0) * color[2];
	  break;
#if SPLASH_CMYK
	case splashModeCMYK8:
	  lum = (1 - color[3] / 255.0)
	        - (0.3 / 255.0) * color[0]
	        - (0.59 / 255.0) * color[1]
	        - (0.11 / 255.0) * color[2];
	  if (lum < 0) {
	    lum = 0;
	  }
	  break;
#endif
	}
	if (transferFunc) {
	  transferFunc->transform(&lum, &lum2);
	} else {
	  lum2 = lum;
	}
	p[x] = (int)(lum2 * 255.0 + 0.5);
      }
    }
    p += softMask->getRowSize();
  }
  splash->setSoftMask(softMask);
    
    struct dequantize_2bit {
  MSHADOW_XINLINE static void Map(int i,
                                  float *out,
                                  float *in,
                                  const float neg_threshold,
                                  const float pos_threshold) {
    // get position of dequantized value to fill
    float *outval = out + i;
    // gets byte which holds quantized value for this position
    char *ch_ptr = reinterpret_cast<char *>(in + (i >> 4));
    ch_ptr += ((i & 15) >> 2);
    // masks used to quantize data
    const uint8_t posbits[] = {0xc0, 0x30, 0x0c, 0x03};
    const uint8_t negbits[] = {0x80, 0x20, 0x08, 0x02};
    // col denotes which two bits of a byte are set for this value
    // col=0 implies first two bits, col=3 implies last two bits,...
    const int col = i & 3;
    const uint8_t mask = posbits[col];
    const uint8_t negmask = negbits[col];
    const uint8_t masked = *ch_ptr & mask;
    if (masked == mask) {
      *outval = pos_threshold;
    } else if (masked == negmask) {
      // use posbits for mask as posbits are both 1s
      // then compare masked with negbits to see if only negbits were set
      *outval = neg_threshold;
    } else {
      *outval = 0;
    }
  }
};
    
    template<>
void EvalRandom<DEVICE, PoissonDistribution>(
    const real_t &lambda,
    const real_t &dummy,  // this is to satisfy the SampleOp lambda signature
    const Resource &resource,
    TBlob *ret,
    RunContext ctx) {
  typedef cpu xpu;  // No support for gpu for this distribution.
  mshadow::Stream<xpu> *s = ctx.get_stream<xpu>();
  switch (ret->type_flag_) {
  case mshadow::kFloat32:
    {
      mshadow::Random<xpu, float> *prnd = resource.get_random<xpu, float>(s);
      mshadow::Tensor<xpu, 2, float> tmp = ret->FlatTo2D<xpu, float>(s);
      prnd->SamplePoisson(&tmp, float(lambda));  // NOLINT(*)
      break;
    }
  case mshadow::kFloat64:
    {
      mshadow::Random<xpu, double> *prnd = resource.get_random<xpu, double>(s);
      mshadow::Tensor<xpu, 2, double> tmp = ret->FlatTo2D<xpu, double>(s);
      prnd->SamplePoisson(&tmp, double(lambda));  // NOLINT(*)
      break;
    }
  default:
    LOG(FATAL) << 'Random only support float32 and float64';
  }
}
    
    /*!
 * \file tvm_bridge.cc
 * \brief Bridge to run TVM's PackedFunc in MXNet's async engine.
 *
 *  This bridge is mainly used to expose MXNet's async engine push to
 *  TVM. It only uses TVM runtime in aheader only mode, which means
 *  there is no link dependencies.
 *
 *  Support for TVM is optional even when this code
 *  is always compiled and built with the project.
 *  We choose this strategy because we do not yet want
 *  llvm as dependency(which TVM uses). So instead we expose hook
 *  to TVM and let user use this feature when they have TVM installed.
 *
 *  We do require TVM and MXNet to be built with same C++ ABI of std::function
 */
#define TVM_RUNTIME_HEADER_ONLY 1
#include <tvm/runtime/packed_func.h>
#include <mxnet/c_api.h>
#include <mxnet/ndarray.h>
#include <mxnet/engine.h>
    
      ~CuDNNSpatialTransformerOp() {
    if (init_cudnn_) {
      CUDNN_CALL(cudnnDestroySpatialTransformerDescriptor(st_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(in_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(out_desc_));
    }
  }
    
    DMLC_REGISTER_PARAMETER(NativeOpParam);
    
    //////////////////////////////////////////////////////////////////////
    
    #include <vector>
#include <memory>
    
    VMTOC::~VMTOC() {
  FTRACE(1, 'Number of values if 64bits stored in TOC: {}\n',
    std::to_string(m_last_elem_pos));
}
    
    Object APCCollection::createObject() const {
  if (m_arrayHandle->isTypedValue()) {
    Variant local(m_arrayHandle->toLocal());
    assertx(local.isArray());
    return Object::attach(
      collections::alloc(m_colType, local.getArrayData())
    );
  }
    }
    
      if (comma != data) {
    // we have meta
    ssize_t meta_len = comma - data;
    data_len -= meta_len;
    char* semi = (char*)memchr(data, ';', meta_len);
    char* slash = (char*)memchr(data, '/', meta_len);
    }
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    /**
 * Implement this interface to report information to debugger or execute
 * debugger commands.
 */
struct IDebuggable {
  enum Support {
    SupportInfo = 1,
    SupportDump = 2,
    SupportVerb = 4,
  };
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    
    {    // By default ImGuiFreeType will use IM_ALLOC()/IM_FREE().
    // However, as FreeType does lots of allocations we provide a way for the user to redirect it to a separate memory heap if desired:
    IMGUI_API void SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = NULL);
}

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextMultiline(label, (char*)str->c_str(), str->capacity() + 1, size, flags, InputTextCallback, &cb_user_data);
}
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.
    
    // Issues:
//  [ ] Platform: GLUT is unable to distinguish e.g. Backspace from CTRL+H or TAB from CTRL+I
//  [ ] Platform: Missing mouse cursor shape/visibility support.
//  [ ] Platform: Missing clipboard support (not supported by Glut).
//  [ ] Platform: Missing gamepad support.
    
        // Start the Dear ImGui frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplSDL2_NewFrame(g_Window);
    ImGui::NewFrame();
    
        // Upload texture to graphics system
    {
        D3D12_HEAP_PROPERTIES props;
        memset(&props, 0, sizeof(D3D12_HEAP_PROPERTIES));
        props.Type = D3D12_HEAP_TYPE_DEFAULT;
        props.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
        props.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
    }
    
    // OpenGL2 Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
// Note that this implementation is little overcomplicated because we are saving/setting up/restoring every OpenGL state explicitly, in order to be able to run within any OpenGL engine that doesn't do so.
void ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data)
{
    // Avoid rendering when minimized, scale coordinates for retina displays (screen coordinates != framebuffer coordinates)
    int fb_width = (int)(draw_data->DisplaySize.x * draw_data->FramebufferScale.x);
    int fb_height = (int)(draw_data->DisplaySize.y * draw_data->FramebufferScale.y);
    if (fb_width == 0 || fb_height == 0)
        return;
    }
    
    //-------------------------------------------------------------------------
// [SECTION] Widgets: BeginTabItem, EndTabItem, etc.
//-------------------------------------------------------------------------
// [BETA API] API may evolve! This code has been extracted out of the Docking branch,
// and some of the construct which are not used in Master may be left here to facilitate merging.
//-------------------------------------------------------------------------
// - BeginTabItem()
// - EndTabItem()
// - TabItemEx() [Internal]
// - SetTabItemClosed()
// - TabItemCalcSize() [Internal]
// - TabItemBackground() [Internal]
// - TabItemLabelAndCloseButton() [Internal]
//-------------------------------------------------------------------------
    
    
    {    Data() : initialized(false) {}
  };
    
    DHTReplaceNodeTask::~DHTReplaceNodeTask() = default;
    
    std::string DHTResponseMessage::toString() const
{
  return fmt('dht response %s TransactionID=%s Remote:%s(%u), id=%s, v=%s, %s',
             getMessageType().c_str(), util::toHex(getTransactionID()).c_str(),
             getRemoteNode()->getIPAddress().c_str(),
             getRemoteNode()->getPort(),
             util::toHex(getRemoteNode()->getID(), DHT_ID_LENGTH).c_str(),
             util::torrentPercentEncode(getVersion()).c_str(),
             toStringOptional().c_str());
}
    
    namespace {
void readBytes(BufferedFile& fp, unsigned char* buf, size_t buflen,
               size_t readlen)
{
  assert(readlen <= buflen);
  READ_CHECK(fp, buf, readlen);
}
} // namespace
    
    
    {} // namespace aria2

    
      ~DHTSetup();
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
    #endif // D_DHT_TASK_QUEUE_H

    
    void DHTTokenUpdateCommand::process()
{
  try {
    tokenTracker_->updateTokenSecret();
  }
  catch (RecoverableException& e) {
    A2_LOG_ERROR_EX(EX_EXCEPTION_CAUGHT, e);
  }
}
    
      virtual ~DHTTokenUpdateCommand();
    
    DNSCache& DNSCache::operator=(const DNSCache& c)
{
  if (this != &c) {
    entries_ = c.entries_;
  }
  return *this;
}
    
     public:
  ~Config();
    
      // This function designed to write batch of data as one operation and get
  // as much performance as possbile. Because of this, db may not guarantee
  // data consistency or atomic nature of operation
  // Please see actual function implementation for details and limitations
  virtual ExpectedSuccess<DatabaseError> putStringsUnsafe(
      const std::string& domain,
      const std::vector<std::pair<std::string, std::string>>& data) = 0;
    
    Expected<std::vector<std::string>, DatabaseError> InMemoryDatabase::getKeys(
    const std::string& domain, const std::string& prefix) {
  debug_only::verifyTrue(is_open_, 'database is not open');
  auto storage_iter = storage_.find(domain);
  if (storage_iter == storage_.end()) {
    return domainNotFoundError(domain);
  }
  return storage_iter->second->getKeys(prefix);
}
    
    #include <gtest/gtest.h>