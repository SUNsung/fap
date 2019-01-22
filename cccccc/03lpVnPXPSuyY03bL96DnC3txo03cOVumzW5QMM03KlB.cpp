
        
        // Get the python wrappers for a list of ops in a OpList.
// `op_list_buf` should be a pointer to a buffer containing
// the binary encoded OpList proto, and `op_list_len` should be the
// length of that buffer.
string GetPythonWrappers(const char* op_list_buf, size_t op_list_len);
    
    namespace tensorflow {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Creates a numpy array with shapes specified by dim_size and dims and content
// in data. The array does not own the memory, and destructor will be called to
// release it. If the status is not ok the caller is responsible for releasing
// the memory.
Status ArrayFromMemory(int dim_size, npy_intp* dims, void* data, DataType dtype,
                       std::function<void()> destructor, PyObject** result);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // Inserts the event at the current position into the specified stream.
  port::Status Record(CUDAStream* stream);
    
      // This is for complex to real or real to complex FFT, when the direction
  // is implied.
  template <typename FuncT, typename InputT, typename OutputT>
  bool DoFftInternal(Stream *stream, fft::Plan *plan, FuncT cufft_exec,
                     const DeviceMemory<InputT> &input,
                     DeviceMemory<OutputT> *output);
    
    void CacheImpl::setAndRetain(void *Key, void *Value, size_t Cost) {
  cache_set_and_retain(static_cast<cache_t*>(Impl), Key, Value, Cost);
}
    
    void PrefixMapKeyPrinter<char>::print(raw_ostream &out, ArrayRef<char> key) {
  out << QuotedString(StringRef(key.data(), key.size()));
};
    
    swift::unicode::GraphemeClusterBreakProperty
swift::unicode::getGraphemeClusterBreakProperty(uint32_t C) {
  // FIXME: replace linear search with a trie lookup.
    }
    
    
    {    return name;
  }
    
      static CFPointeeInfo forTypedef(const clang::TypedefNameDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = decl;
    return info;
  }
    
    namespace {
  class ClangDiagRenderer final : public clang::DiagnosticNoteRenderer {
    const llvm::function_ref<void(clang::FullSourceLoc,
                                  clang::DiagnosticsEngine::Level,
                                  StringRef)> callback;
    }
    }
    
    bool ParseAnyTypeUrl(const string& type_url, string* url_prefix,
                     string* full_type_name) {
  size_t pos = type_url.find_last_of('/');
  if (pos == string::npos || pos + 1 == type_url.size()) {
    return false;
  }
  if (url_prefix) {
    *url_prefix = type_url.substr(0, pos + 1);
  }
  *full_type_name = type_url.substr(pos + 1);
  return true;
}
    
    const GeneratedCodeInfo::Annotation* FindAnnotationOnPath(
    const GeneratedCodeInfo& info, const string& source_file,
    const std::vector<int>& path) {
  std::vector<const GeneratedCodeInfo::Annotation*> annotations;
  FindAnnotationsOnPath(info, source_file, path, &annotations);
  if (annotations.empty()) {
    return NULL;
  }
  return annotations[0];
}
    
    #include <sstream>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      char prev = '*';
    
    // Get the Java Class style full name of a message.
string ClassNameResolver::GetJavaClassFullName(
    const string& name_without_package,
    const FileDescriptor* file,
    bool immutable) {
  string result;
  if (MultipleJavaFiles(file, immutable)) {
    result = FileJavaPackage(file, immutable);
    if (!result.empty()) result += '.';
  } else {
    result = GetClassName(file, immutable);
    if (!result.empty()) result += '$';
  }
  result += StringReplace(name_without_package, '.', '$', true);
  return result;
}
    
      // Add some verification that the generated code matches the source the
  // code is being compiled with.
  // NOTE: This captures the raw numeric values at the time the generator was
  // compiled, since that will be the versions for the ObjC runtime at that
  // time.  The constants in the generated code will then get their values at
  // at compile time (so checking against the headers being used to compile).
  printer->Print(
      '#if GOOGLE_PROTOBUF_OBJC_VERSION < $google_protobuf_objc_version$\n'
      '#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.\n'
      '#endif\n'
      '#if $google_protobuf_objc_version$ < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION\n'
      '#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.\n'
      '#endif\n'
      '\n',
      'google_protobuf_objc_version', SimpleItoa(GOOGLE_PROTOBUF_OBJC_VERSION));
    
    // implements ZeroCopyInputStream ----------------------------------
bool GzipInputStream::Next(const void** data, int* size) {
  bool ok = (zerror_ == Z_OK) || (zerror_ == Z_STREAM_END)
      || (zerror_ == Z_BUF_ERROR);
  if ((!ok) || (zcontext_.next_out == NULL)) {
    return false;
  }
  if (zcontext_.next_out != output_position_) {
    DoNextOutput(data, size);
    return true;
  }
  if (zerror_ == Z_STREAM_END) {
    if (zcontext_.next_out != NULL) {
      // sub_stream_ may have concatenated streams to follow
      zerror_ = inflateEnd(&zcontext_);
      byte_count_ += zcontext_.total_out;
      if (zerror_ != Z_OK) {
        return false;
      }
      zerror_ = internalInflateInit2(&zcontext_, format_);
      if (zerror_ != Z_OK) {
        return false;
      }
    } else {
      *data = NULL;
      *size = 0;
      return false;
    }
  }
  zerror_ = Inflate(Z_NO_FLUSH);
  if ((zerror_ == Z_STREAM_END) && (zcontext_.next_out == NULL)) {
    // The underlying stream's Next returned false inside Inflate.
    return false;
  }
  ok = (zerror_ == Z_OK) || (zerror_ == Z_STREAM_END)
      || (zerror_ == Z_BUF_ERROR);
  if (!ok) {
    return false;
  }
  DoNextOutput(data, size);
  return true;
}
void GzipInputStream::BackUp(int count) {
  output_position_ = reinterpret_cast<void*>(
      reinterpret_cast<uintptr_t>(output_position_) - count);
}
bool GzipInputStream::Skip(int count) {
  const void* data;
  int size = 0;
  bool ok = Next(&data, &size);
  while (ok && (size < count)) {
    count -= size;
    ok = Next(&data, &size);
  }
  if (size > count) {
    BackUp(size - count);
  }
  return ok;
}
int64 GzipInputStream::ByteCount() const {
  int64 ret = byte_count_ + zcontext_.total_out;
  if (zcontext_.next_out != NULL && output_position_ != NULL) {
    ret += reinterpret_cast<uintptr_t>(zcontext_.next_out) -
           reinterpret_cast<uintptr_t>(output_position_);
  }
  return ret;
}
    
    // Returns a string identical to *input except that the character pointed to
// by radix_pos (which should be '.') is replaced with the locale-specific
// radix character.
string LocalizeRadix(const char* input, const char* radix_pos) {
  // Determine the locale-specific radix character by calling sprintf() to
  // print the number 1.5, then stripping off the digits.  As far as I can
  // tell, this is the only portable, thread-safe way to get the C library
  // to divuldge the locale's radix character.  No, localeconv() is NOT
  // thread-safe.
  char temp[16];
  int size = sprintf(temp, '%.1f', 1.5);
  GOOGLE_CHECK_EQ(temp[0], '1');
  GOOGLE_CHECK_EQ(temp[size-1], '5');
  GOOGLE_CHECK_LE(size, 6);
    }
    
    // This test causes gcc 3.3.5 (and earlier?) to give the cryptic error:
//   'sorry, unimplemented: `method_call_expr' not supported by dump_expr'
#if !defined(__GNUC__) || __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3)
    
    Contrast Example 2 with Example 1. For each data point per feature, the values
are sorted by the corresponding KEY.
)DOC')
    .Input(0, 'DATA', 'Tensor of rank 1.')
    .Input(
        1,
        'RANGES',
        'Tensor of int32/int64 ranges, of dims (N, M, 2). '
        'Where N is number of examples and M is a size of each example. '
        'Last dimention represents a range in the format (start, lengths)')
    .Input(2, 'KEY', 'Tensor of rank 1 and type int64.')
    .Output(0, 'OUTPUT', '1-D tensor of size sum of range lengths')
    .Arg('lengths', 'Expected lengths for ranges')
    .TensorInferenceFunction([](const OperatorDef& def,
                                const vector<TensorShape>& in) {
      ArgumentHelper helper(def);
      auto lengths = helper.GetRepeatedArgument<int>('lengths');
      CAFFE_ENFORCE_EQ(in[0].dims_size(), 1, 'DATA should be 1-D tensor.');
      CAFFE_ENFORCE_EQ(in[1].dims_size(), 3, 'RANGES should be 3-D tensor.');
      if (in.size() > 2) {
        CAFFE_ENFORCE_EQ(in[2].dims_size(), 1, 'KEY should be 1-D tensor.');
      }
      CAFFE_ENFORCE_GT(lengths.size(), 0, 'lengths should be non-empty.');
      std::vector<TensorShape> out(lengths.size());
      for (int i = 0; i < lengths.size(); ++i) {
        out[i].set_data_type(in[0].data_type());
        out[i].add_dims(in[1].dims(0));
        out[i].add_dims(lengths[i]);
      }
      return out;
    });
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    struct Options;
struct FileMetaData;
    
    #include 'leveldb/db.h'
    
      // Implementations of the DB interface
  virtual Status Put(const WriteOptions&, const Slice& key, const Slice& value);
  virtual Status Delete(const WriteOptions&, const Slice& key);
  virtual Status Write(const WriteOptions& options, WriteBatch* updates);
  virtual Status Get(const ReadOptions& options,
                     const Slice& key,
                     std::string* value);
  virtual Iterator* NewIterator(const ReadOptions&);
  virtual const Snapshot* GetSnapshot();
  virtual void ReleaseSnapshot(const Snapshot* snapshot);
  virtual bool GetProperty(const Slice& property, std::string* value);
  virtual void GetApproximateSizes(const Range* range, int n, uint64_t* sizes);
  virtual void CompactRange(const Slice* begin, const Slice* end);
    
    // Return the name of a temporary file owned by the db named 'dbname'.
// The result will be prefixed with 'dbname'.
std::string TempFileName(const std::string& dbname, uint64_t number);
    
    namespace leveldb {
    }
    
      KeyComparator comparator_;
  int refs_;
  Arena arena_;
  Table table_;
    
    static void RunConcurrent(int run) {
  const int seed = test::RandomSeed() + (run * 100);
  Random rnd(seed);
  const int N = 1000;
  const int kSize = 1000;
  for (int i = 0; i < N; i++) {
    if ((i % 100) == 0) {
      fprintf(stderr, 'Run %d of %d\n', i, N);
    }
    TestState state(seed + 1);
    Env::Default()->Schedule(ConcurrentReader, &state);
    state.Wait(TestState::RUNNING);
    for (int i = 0; i < kSize; i++) {
      state.t_.WriteStep(&rnd);
    }
    state.quit_flag_.Release_Store(&state);  // Any non-null arg will do
    state.Wait(TestState::DONE);
  }
}
    
        private:
        static Microsoft::MSR::CNTK::InputStreamDescription GetInputStreamDescription(const StreamInformation& s, const DeviceDescriptor& device)
        {
            assert(s.m_storageFormat == StorageFormat::Dense || s.m_storageFormat == StorageFormat::SparseCSC);
            auto CNTKdeviceId = AsCNTKImplDeviceId(device);
            auto CNTKMatrixType = s.m_storageFormat == StorageFormat::Dense ? Microsoft::MSR::CNTK::MatrixType::DENSE : Microsoft::MSR::CNTK::MatrixType::SPARSE;
            auto CNTKMatrixFormat = AsCNTKImplMatrixFormat(s.m_storageFormat);
            return Microsoft::MSR::CNTK::InputStreamDescription(s.m_name, CNTKdeviceId, CNTKMatrixType, CNTKMatrixFormat);
        }
    
    // Destroy - cleanup and remove this class
// NOTE: this destroys the object, and it can't be used past this point
void DataReader::Destroy()
{
    // newer code that explicitly place multiple streams for inputs
    foreach_index (i, m_ioNames) // inputNames should map to node names
    {
        m_dataReaders[m_ioNames[i]]->Destroy();
    }
}
    
    template <typename TVector>
inline void RandomShuffleMT(TVector& v, std::mt19937_64& rng)
{
    foreach_index(currentLocation, v)
    {
        // Pick a random location and swap with current one
        const size_t randomLocation = RandMT(0, v.size(), rng);
        std::swap(v[currentLocation], v[randomLocation]);
    }
}
    
    #if 0
        for (let& node : dependentSet)
            fprintf(stderr, 'CloneFunction: cloning %ls\n', node->NodeDescription().c_str());
#endif
    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }