
        
        class SILDebuggerClient;
    
      size_t NumChildren;
    
    SILFunction *SILDebugScope::getParentFunction() const {
  if (InlinedCallSite)
    return InlinedCallSite->getParentFunction();
  if (auto *ParentScope = Parent.dyn_cast<const SILDebugScope *>())
    return ParentScope->getParentFunction();
  return Parent.get<SILFunction *>();
}

    
    #ifndef SWIFT_BASIC_DIAGNOSTICOPTIONS_H
#define SWIFT_BASIC_DIAGNOSTICOPTIONS_H
    
      void forceColors() {
    ForceColors = true;
  }
    
    // On macOS and iOS, swift_once is implemented using GCD.
// The compiler emits an inline check matching the barrier-free inline fast
// path of dispatch_once(). See SwiftTargetInfo.OnceDonePredicateValue.
    
      virtual bool recordHash(StringRef hash, bool isKnown) = 0;
  virtual bool startDependency(StringRef name, StringRef path, bool isClangModule,
                               bool isSystem, StringRef hash) = 0;
  virtual bool finishDependency(bool isClangModule) = 0;
  virtual Action startSourceEntity(const IndexSymbol &symbol) = 0;
  virtual bool finishSourceEntity(SymbolInfo symInfo, SymbolRoleSet roles) = 0;
    
    #define THCPDoubleStorage_CData(obj)  (obj)->cdata
#define THCPFloatStorage_CData(obj)   (obj)->cdata
#define THCPLongStorage_CData(obj)    (obj)->cdata
#define THCPIntStorage_CData(obj)     (obj)->cdata
#define THCPShortStorage_CData(obj)   (obj)->cdata
#define THCPCharStorage_CData(obj)    (obj)->cdata
#define THCPByteStorage_CData(obj)    (obj)->cdata
    
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
    
    
    {  THDTensor_(free)(THDTensor_(cloneColumnMajor)(ra, a));
}
    
    static inline uint64_t decodeUInt64LE(const uint8_t *data) {
  return (((uint64_t)data[0])<< 0) | (((uint64_t)data[1])<< 8) |
         (((uint64_t)data[2])<<16) | (((uint64_t)data[3])<<24) |
         (((uint64_t)data[4])<<32) | (((uint64_t)data[5])<<40) |
         (((uint64_t)data[6])<<48) | (((uint64_t)data[7])<<56);
}
    
    extern THDTensorDescriptor* THDPModule_makeDescriptor(PyObject *obj);
template <typename TensorSrc>
void THDPInsertCopyFunctionFromWorker(
  THPCopyList& copyList,
  void (*copyFunc)(THDTensorDescriptor* x, TensorSrc *z))
{
  auto wrapper = [copyFunc](PyObject* dst_, PyObject* src_) {
    TensorSrc* src = THPTypeInfo<TensorSrc>::cdata(src_);
    }
    }
    
    
    
      // Append string val onto the list defined by key; return true on success
  bool Append(const std::string& key, const std::string& val){
    Slice valSlice(val.data(), val.size());
    auto s = db_->Merge(merge_option_, key, valSlice);
    }
    
    /// The Redis functionality (see http://redis.io/commands#list)
/// All functions may THROW a RedisListException
class RedisLists {
 public: // Constructors / Destructors
  /// Construct a new RedisLists database, with name/path of db.
  /// Will clear the database on open iff destructive is true (default false).
  /// Otherwise, it will restore saved changes.
  /// May throw RedisListException
  RedisLists(const std::string& db_path,
             Options options, bool destructive = false);
    }
    
      // Notify this table rep that it will no longer be added to. By default,
  // does nothing.  After MarkReadOnly() is called, this table rep will
  // not be written to (ie No more calls to Allocate(), Insert(),
  // or any writes done directly to entries accessed through the iterator.)
  virtual void MarkReadOnly() { }
    
    inline LookupKey::~LookupKey() {
  if (start_ != space_) delete[] start_;
}
    
    #endif  // JAVA_ROCKSJNI_COMPACTION_FILTER_FACTORY_JNICALLBACK_H_

    
      // Add more L0 files and force automatic compaction
  for (int i = 0; i < one.level0_file_num_compaction_trigger; ++i) {
    PutRandomData(1, 10, 12000, true);
    PutRandomData(1, 1, 10, true);
    WaitForFlush(1);
    AssertFilesPerLevel(ToString(one.level0_file_num_compaction_trigger + i),
                        1);
  }