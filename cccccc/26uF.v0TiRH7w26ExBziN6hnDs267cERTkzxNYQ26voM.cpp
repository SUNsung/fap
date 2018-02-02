bool IsWebContents(v8::Isolate* isolate, content::RenderProcessHost* process) {
  content::WebContents* web_contents =
      static_cast<AtomBrowserClient*>(AtomBrowserClient::Get())->
          GetWebContentsFromProcessID(process->GetID());
  if (!web_contents)
    return false;
    }
    
    
    {  Observe(sender);
}
    
    
    {}  // namespace mate
    
    SavePageHandler::SavePageHandler(content::WebContents* web_contents,
                                 const SavePageCallback& callback)
    : web_contents_(web_contents),
      callback_(callback) {
}
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    
    {  DISALLOW_COPY_AND_ASSIGN(LoginHandler);
};
    
    #if defined(OS_POSIX)
// The 'magic' file descriptor that the relauncher process' write side of the
// pipe shows up on. Chosen to avoid conflicting with stdin, stdout, and
// stderr.
extern const int kRelauncherSyncFD;
#endif
    
      // PID 1 identifies init. launchd, that is. launchd never starts the
  // relauncher process directly, having this parent_pid means that the parent
  // already exited and launchd 'inherited' the relauncher as its child.
  // There's no reason to synchronize with launchd.
  if (parent_pid == 1) {
    LOG(ERROR) << 'unexpected parent_pid';
    return;
  }
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
      v8::Handle<v8::Value> val = GetWindowId(web_view->mainFrame());
  if (val.IsEmpty())
    return;
  if (val->IsNull() || val->IsUndefined())
    return;
    
      // Remote objects.
  static void AllocateId(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void AllocateObject(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void DeallocateObject(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallObjectMethod(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallObjectMethodSync(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallStaticMethod(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallStaticMethodSync(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CrashRenderer(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetCrashDumpDir(const v8::FunctionCallbackInfo<v8::Value>& args);
#if defined(OS_MACOSX)
  static void InitMsgIDMap();
  static void GetNSStringWithFixup(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetNSStringFWithFixup(const v8::FunctionCallbackInfo<v8::Value>& args);
#endif
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    namespace {
    }
    
    void NwAppClearCacheFunction::OnBrowsingDataRemoverDone() {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
  run_loop_.Quit();
}
    
      // These two overloads allow streaming a wide C string to a Message
  // using the UTF-8 encoding.
  Message& operator <<(const wchar_t* wide_c_str);
  Message& operator <<(wchar_t* wide_c_str);
    
    // Base cases.
template <>
struct TuplePrefixPrinter<0> {
  template <typename Tuple>
  static void PrintPrefixTo(const Tuple&, ::std::ostream*) {}
    }
    
      // Fired after environment tear-down for each iteration of tests ends.
  virtual void OnEnvironmentsTearDownEnd(const UnitTest& unit_test) = 0;
    
    // Factory interface for death tests.  May be mocked out for testing.
class DeathTestFactory {
 public:
  virtual ~DeathTestFactory() { }
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test) = 0;
};
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_)};
    return ValuesIn(array);
  }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// TestMetaFactoryBase is a base class for meta-factories that create
// test factories for passing into MakeAndRegisterTestInfo function.
template <class ParamType>
class TestMetaFactoryBase {
 public:
  virtual ~TestMetaFactoryBase() {}
    }
    
    // On some platforms, <regex.h> needs someone to define size_t, and
// won't compile otherwise.  We can #include it here as we already
// included <stdlib.h>, which is guaranteed to define size_t through
// <stddef.h>.
# include <regex.h>  // NOLINT
    
    // Copyright 2008 Google Inc.
// All Rights Reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Author: wan@google.com (Zhanyong Wan)
    
      virtual bool IsPrime(int n) const {
    return 0 <= n && n < is_prime_size_ && is_prime_[n];
  }
    
    // -----------------------------------------------------------------------
// network editing
// -----------------------------------------------------------------------
    
    
    {    // TODO: as soon as beta != 0.0 the 'MultiplyAndWeightedAdd' fails with stack overflow (also in the first test 5 lines above)
    // alpha = 2.4f;
    // beta = 3.4f;
    // mCsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    // Matrix<float>::MultiplyAndWeightedAdd(alpha, mAdense, transposeA, mBdense, transposeB, beta, mCdense);
    // Matrix<float>::MultiplyAndWeightedAdd(alpha, mAsparse, transposeA, mBsparse, transposeB, beta, mCsparse);
    // mCsparse.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, true);
    // BOOST_CHECK(mCsparse.IsEqualTo(mCdense, c_epsilonFloatE4));
}
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
    template <class _T, int _N>
class hardcoded_array
{
    _T data[_N];
    inline void check_index(size_t i) const
    {
        i;
        assert(i < _N);
    }
    inline void check_size(size_t n) const
    {
        n;
        assert(n == _N);
    }
    }
    
    void FilterBlockBuilder::AddKey(const Slice& key) {
  Slice k = key;
  start_.push_back(keys_.size());
  keys_.append(k.data(), k.size());
}
    
    // If input[0,input_length-1] looks like a valid snappy compressed
// buffer, store the size of the uncompressed data in *result and
// return true.  Else return false.
extern bool Snappy_GetUncompressedLength(const char* input, size_t length,
                                         size_t* result);
    
      // SnapshotImpl is kept in a doubly-linked circular list
  SnapshotImpl* prev_;
  SnapshotImpl* next_;
    
    
    {  ASSERT_TRUE(! Overlaps(NULL, 'j'));
  ASSERT_TRUE(! Overlaps('r', NULL));
  ASSERT_TRUE(Overlaps(NULL, 'p'));
  ASSERT_TRUE(Overlaps(NULL, 'p1'));
  ASSERT_TRUE(Overlaps('q', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
}
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
    // If true, we allow batch writes to occur
static bool FLAGS_transaction = true;
    
    // Number of key/values to place in database
static int FLAGS_num = 1000000;
    
    
    { private:
  const FilterPolicy* policy_;
  const char* data_;    // Pointer to filter data (at block-start)
  const char* offset_;  // Pointer to beginning of offset array (at block-end)
  size_t num_;          // Number of entries in offset array
  size_t base_lg_;      // Encoding parameter (see kFilterBaseLg in .cc file)
};
    
    struct BlockContents {
  Slice data;           // Actual contents of data
  bool cachable;        // True iff data can be cached
  bool heap_allocated;  // True iff caller should delete[] data.data()
};