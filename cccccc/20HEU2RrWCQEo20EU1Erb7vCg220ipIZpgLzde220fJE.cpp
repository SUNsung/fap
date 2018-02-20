
        
          /// DebuggerClient is asked to emit SIL references to locals,
  /// permitting SILGen to access them like any other variables.
  /// This avoids generation of properties.
  virtual SILValue emitLValueForVariable(VarDecl *var,
                                         SILBuilder &builder) = 0;
    
      /// Get the type encoding for an ObjC property.
  void getObjCEncodingForPropertyType(IRGenModule &IGM, VarDecl *property,
                                      std::string &s);
  
  /// Produces extended encoding of ObjC block signature.
  /// \returns the encoded type.
  llvm::Constant *getBlockTypeExtendedEncoding(IRGenModule &IGM,
                                               CanSILFunctionType invokeTy);
  
  /// Produces extended encoding of method type.
  /// \returns the encoded type.
  llvm::Constant *getMethodTypeExtendedEncoding(IRGenModule &IGM,
                                                AbstractFunctionDecl *method);
  
  /// Build an Objective-C method descriptor for the given getter method.
  void emitObjCGetterDescriptor(IRGenModule &IGM,
                                ConstantArrayBuilder &descriptors,
                                AbstractStorageDecl *storage);
    
        // Temporarily copy the first result to temporary storage.
    SmallVector<Item *, 16> firstResults;
    for (unsigned i = 0; i < endNewIndex; ++i) {
      firstResults.push_back(contents[i].release());
    }
    
    namespace swift {
class Decl;
class DocComment;
struct RawComment;
    }
    
    public:
  static BlockQuote *create(MarkupContext &MC, ArrayRef<MarkupASTNode *> Children);
    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
    #ifndef SWIFT_SYNTAX_FORMAT_H
#define SWIFT_SYNTAX_FORMAT_H
    
    #include 'swift/Basic/LLVM.h'
#include 'swift/AST/DiagnosticConsumer.h'
    
    
    {    result->AppendBoolean(success);
    return;
  } else if (method == 'UnregisterGlobalHotKey') {
    int object_id = -1;
    arguments.GetInteger(0, &object_id);
    Shortcut* shortcut =
        static_cast<Shortcut*>(DispatcherHost::GetApiObject(object_id));
    GlobalShortcutListener::GetInstance()->UnregisterAccelerator(
        shortcut->GetAccelerator(), shortcut);
    return;
  } else if (method == 'SetProxyConfig') {
    std::string proxy_config;
    arguments.GetString(0, &proxy_config);
    SetProxyConfig(GetRenderProcessHost(), proxy_config);
    return;
  } else if (method == 'DoneMenuShow') {
    dispatcher_host->quit_run_loop();
    return;
  }
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
      v8::Local<v8::Array> args = v8::Array::New(isolate);
  v8::Handle<v8::Value> element = v8::Null(isolate);
  blink::LocalFrame* core_frame = blink::toWebLocalFrameImpl(frame)->frame();
  if (core_frame->deprecatedLocalOwner()) {
    element = blink::toV8((blink::HTMLElement*)core_frame->deprecatedLocalOwner(),
                            frame->mainWorldScriptContext()->Global(),
                            frame->mainWorldScriptContext()->GetIsolate());
  }
  args->Set(0, element);
  v8::Handle<v8::Value> argv[] = {val, v8_str(ev), args };
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    
    {}  // namespace nwapi

    
        std::string tooltip;
    if (option.GetString('tooltip', &tooltip))
      SetTooltip(tooltip);
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.readAvailableTypes', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardReadAvailableTypesFunction);
};
    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
    
    {
    {
    { private:
  /*! \brief input stream */
  dmlc::Stream *strm_;
  /*! \brief current buffer pointer */
  size_t buffer_ptr_;
  /*! \brief internal buffer */
  std::string buffer_;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_IO_H_

    
      /* Fetch an individual column. This code should be used with XGBOOST_TYPE_SWITCH
     to determine type of bin id's */
  template<typename T>
  inline Column<T> GetColumn(unsigned fid) const {
    const bool valid_type = std::is_same<T, uint32_t>::value
                          || std::is_same<T, uint16_t>::value
                          || std::is_same<T, uint8_t>::value;
    CHECK(valid_type);
    }
    
    #include '../helpers.h'
    
    
    {  vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3,2,1';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
}
    
      XGBOOST_DEVICE bst_gpair_internal<T> operator+(
      const bst_gpair_internal<T> &rhs) const {
    bst_gpair_internal<T> g;
    g.grad_ = grad_ + rhs.grad_;
    g.hess_ = hess_ + rhs.hess_;
    return g;
  }
    
    std::ostream& operator<<(std::ostream& os, AsyncIOOp::State state) {
  return os << asyncIoOpStateToString(state);
}
    
    
    {  if (error) {
    throw std::runtime_error('Can't find default huge page size');
  }
  return pageSize;
}
    
    void ImmediateFileWriter::writeMessage(
    StringPiece buffer,
    uint32_t /* flags */) {
  // Write the data.
  // We are doing direct file descriptor writes here, so there is no buffering
  // of log message data.  Each message is immediately written to the output.
  auto ret = folly::writeFull(file_.fd(), buffer.data(), buffer.size());
  if (ret < 0) {
    int errnum = errno;
    LoggerDB::internalWarning(
        __FILE__,
        __LINE__,
        'error writing to log file ',
        file_.fd(),
        ': ',
        errnoStr(errnum));
  }
}
    
    void LogCategory::processMessage(const LogMessage& message) const {
  // Make a copy of any attached LogHandlers, so we can release the handlers_
  // lock before holding them.
  //
  // In the common case there will only be a small number of handlers.  Use a
  // std::array in this case to avoid a heap allocation for the vector.
  const std::shared_ptr<LogHandler>* handlers = nullptr;
  size_t numHandlers = 0;
  constexpr uint32_t kSmallOptimizationSize = 5;
  std::array<std::shared_ptr<LogHandler>, kSmallOptimizationSize> handlersArray;
  std::vector<std::shared_ptr<LogHandler>> handlersVector;
  {
    auto lockedHandlers = handlers_.rlock();
    numHandlers = lockedHandlers->size();
    if (numHandlers <= kSmallOptimizationSize) {
      for (size_t n = 0; n < numHandlers; ++n) {
        handlersArray[n] = (*lockedHandlers)[n];
      }
      handlers = handlersArray.data();
    } else {
      handlersVector = *lockedHandlers;
      handlers = handlersVector.data();
    }
  }
    }
    
    
    {  // Update categoryConfigs_ with all of the entries from the other LogConfig.
  //
  // Any entries already present in our categoryConfigs_ are merged: if the new
  // configuration does not include handler settings our entry's settings are
  // maintained.
  for (const auto& entry : other.categoryConfigs_) {
    auto result = categoryConfigs_.insert(entry);
    if (!result.second) {
      auto* existingEntry = &result.first->second;
      auto oldHandlers = std::move(existingEntry->handlers);
      *existingEntry = entry.second;
      if (!existingEntry->handlers.hasValue()) {
        existingEntry->handlers = std::move(oldHandlers);
      }
    }
  }
}
    
    dynamic logConfigToDynamic(const LogConfig& config) {
  dynamic categories = dynamic::object;
  for (const auto& entry : config.getCategoryConfigs()) {
    categories.insert(entry.first, logConfigToDynamic(entry.second));
  }
    }