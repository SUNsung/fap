// Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    bool AnyMetadata::InternalIs(const Descriptor* descriptor) const {
  const string type_url = type_url_->GetNoArena();
  string full_name;
  if (!ParseAnyTypeUrl(type_url, &full_name)) {
    return false;
  }
  return full_name == descriptor->full_name();
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    TEST_P(DynamicMessageTest, PackedFields) {
  // Check that packed fields work properly.
  Arena arena;
  Message* message = packed_prototype_->New(GetParam()? &arena : NULL);
  TestUtil::ReflectionTester reflection_tester(packed_descriptor_);
    }
    
    static inline int internalInflateInit2(
    z_stream* zcontext, GzipInputStream::Format format) {
  int windowBitsFormat = 0;
  switch (format) {
    case GzipInputStream::GZIP: windowBitsFormat = 16; break;
    case GzipInputStream::AUTO: windowBitsFormat = 32; break;
    case GzipInputStream::ZLIB: windowBitsFormat = 0; break;
  }
  return inflateInit2(zcontext, /* windowBits */15 | windowBitsFormat);
}
    
    
    {}  // namespace
    
    
    
    
    {
    {}}
    
          X_form_t x_formater {{
                            rc,
                            xop,
                            static_cast<uint32_t>(rb),
                            static_cast<uint32_t>(ra),
                            static_cast<uint32_t>(rt),
                            op
                          }};
    
    
    {  auto const makeShared = [&] () {
    if (isVectorCollection(obj->collectionType())) {
      return APCArray::MakeSharedVec(const_cast<ArrayData*>(array),
                                     level,
                                     unserializeObj);
    }
    return APCArray::MakeSharedDict(const_cast<ArrayData*>(array),
                                    level,
                                    unserializeObj);
  };
  return WrapArray(makeShared(), obj->collectionType());
}
    
    
    {private:
  APCHandle m_handle;
  APCHandle* m_arrayHandle;
  CollectionType m_colType;
};
    
    public:
  virtual ~IDebuggable() {}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    #define ERROR_RAISE_WARNING(exp)        \
  int ret = (exp);                      \
  if (ret != 0) {                       \
    raise_warning(                      \
      '%s(): %s',                       \
      __FUNCTION__,                     \
      folly::errnoStr(errno).c_str()    \
    );                                  \
  }                                     \
    
    
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
    
    #ifndef HPHP_GLOB_STREAM_WRAPPER_H
#define HPHP_GLOB_STREAM_WRAPPER_H
    
      bool valid() const { return !isClosed(); }
    
    #include 'hphp/util/perf-event.h'
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    req::ptr<File> PhpStreamWrapper::openFD(const char *sFD) {
  if (is_cli_mode()) {
    raise_warning('Direct access to file descriptors is not '
                  'available via remote unix server execution');
    return nullptr;
  }
  if (RuntimeOption::ServerExecutionMode()) {
    raise_warning('Direct access to file descriptors '
                  'is only available from command-line');
    return nullptr;
  }
    }
    
      /**
   * \brief Generate batch predictions for a given feature matrix. May use
   * cached predictions if available instead of calculating from scratch.
   *
   * \param [in,out]  dmat        Feature matrix.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       The model to predict from.
   * \param           tree_begin  The tree begin index.
   * \param           ntree_limit (Optional) The ntree limit. 0 means do not
   * limit trees.
   */
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    
    {
    {}  // namespace common
}  // namespace xgboost
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
      std::vector<size_t> feature_counts_;
  std::vector<ColumnType> type_;
  std::vector<uint32_t> index_;  // index_: may store smaller integers; needs padding
  std::vector<size_t> row_ind_;
  std::vector<ColumnBoundary> boundary_;
    
    int main()
{
    // create JSON array
    json array = {'first', '2nd', 'third', 'fourth'};
    }
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create a JSON number from number_integer_t
    json::number_integer_t value_integer_t = -42;
    json j_integer_t(value_integer_t);