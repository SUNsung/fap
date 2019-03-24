
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Status ArrayFromMemory(int dim_size, npy_intp* dims, void* data, DataType dtype,
                       std::function<void()> destructor, PyObject** result) {
  int size = 1;
  for (int i = 0; i < dim_size; ++i) {
    size *= dims[i];
  }
  if (dtype == DT_STRING || dtype == DT_RESOURCE || size == 0) {
    return errors::FailedPrecondition(
        'Cannot convert strings, resources, or empty Tensors.');
  }
    }
    
    // Creates a numpy array with shapes specified by dim_size and dims and content
// in data. The array does not own the memory, and destructor will be called to
// release it. If the status is not ok the caller is responsible for releasing
// the memory.
Status ArrayFromMemory(int dim_size, npy_intp* dims, void* data, DataType dtype,
                       std::function<void()> destructor, PyObject** result);
    
    void ImportNumpy() {
  import_array1();
}
    
    
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
    
    PLATFORM_DEFINE_ID(kCudaPlatformId);
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_PLATFORM_ID_H_

    
    namespace atom {
    }
    
    AtomQuotaPermissionContext::~AtomQuotaPermissionContext() {}
    
    AboutProtocolHandler::~AboutProtocolHandler() {}
    
    namespace atom {
    }
    
    void CacheImpl::removeAll() {
  cache_remove_all(static_cast<cache_t*>(Impl));
}
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
      // Satisfy the default implementation (bookkeeping).
  if (DumpToStderr)
    TextDiagnosticPrinter::HandleDiagnostic(clangDiagLevel, clangDiag);
  else
    DiagnosticConsumer::HandleDiagnostic(clangDiagLevel, clangDiag);
    
    #include 'swift/Demangling/StandardTypesMangling.def'
    
    void Demangler::dump() {
  for (unsigned Idx = 0; Idx < NodeStack.size(); ++Idx) {
    fprintf(stderr, 'NodeStack[%u]:\n', Idx);
    NodeStack[Idx]->dump();
    fprintf(stderr, '\n');
  }
  fprintf(stderr, 'Position = %zd:\n%.*s\n%*s\n', Pos,
          (int)Text.size(), Text.data(), (int)Pos + 1, '^');
}
    
    
    {  if (failed) throw std::runtime_error('parallel::for_each failed');
}
    
    namespace php {
struct Program;
}
struct Index;
    
      /*
   * Create an uncounted array if we can.
   *
   * If this collection is an OuterHandle, then we need to do a full check on
   * this array for things like circularity.  If we're an InnerHandle, someone
   * already checked that, but we want to check for whether it's uncounted to
   * use a better representation.  For the OuterHandle case, we just delegate
   * to APCArray below (which will do the full DataWalker pass).
   */
  if (level == APCHandleLevel::Inner && apcExtension::UseUncounted &&
      !array->empty()) {
    DataWalker walker(DataWalker::LookupFeature::HasObjectOrResource);
    auto const features = walker.traverseData(const_cast<ArrayData*>(array));
    assertx(!features.isCircular);
    if (!features.hasObjectOrResource) {
      auto const makeUncounted = [&] () {
        if (isVectorCollection(obj->collectionType())) {
          return APCArray::MakeUncountedVec(const_cast<ArrayData*>(array));
        }
        return APCArray::MakeUncountedDict(const_cast<ArrayData*>(array));
      };
      return WrapArray(
        { makeUncounted(), getMemSize(array) + sizeof(APCTypedValue) },
        obj->collectionType()
      );
    }
  }
    
    void Config::ParseConfigFile(const std::string &filename, IniSettingMap &ini,
                             Hdf &hdf, const bool is_system /* = true */) {
  // We don't allow a filename of just '.ini'
  if (boost::ends_with(filename, '.ini') && filename.length() > 4) {
    Config::ParseIniFile(filename, ini, false, is_system);
  } else {
    // For now, assume anything else is an hdf file
    // TODO(#5151773): Have a non-invasive warning if HDF file does not end
    // .hdf
    Config::ParseHdfFile(filename, hdf);
  }
}
    
      /**
   * Use the Iterate method for iterating over options that are stored as
   * objects in runtime options (e.g. FilesMatch). This function iterates over
   * the settings passed as ini/hdf, calls back to, generally, the constructor
   * of the object in question.
   *
   * Note: For now, we are not `ini_get()` enabling these type of options as
   * it is not trivial to come up with a non-hacky and workable way to store
   * the data correctly. Also, as usual, Hdf takes priority.
   */
  static void Iterate(std::function<void (const IniSettingMap&,
                                          const Hdf&,
                                          const std::string&)> cb,
                      const IniSettingMap &ini, const Hdf& config,
                      const std::string &name, const bool prepend_hhvm = true);
    
    #endif // HPHP_FILE_STREAM_WRAPPER_H

    
    
    {  // if the function was called via FCallBuiltin, we'll get a bogus name as
  // the stack frame will be wrong
  ActRec* ar = g_context->getStackFrame();
  const char* fn = (ar != nullptr)
    ? ar->func()->name()->data()
    : 'OPTIMIZED_BUILTIN';
  raise_warning('%s(%s): failed to open stream: '
                'wrapper does not support stream open',
                fn, filename.data());
  return nullptr;
}