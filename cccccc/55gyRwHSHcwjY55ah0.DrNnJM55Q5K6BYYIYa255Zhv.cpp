
        
        class TestFileSystem : public NullFileSystem {
 public:
  Status NewRandomAccessFile(
      const string& fname, std::unique_ptr<RandomAccessFile>* result) override {
    result->reset(new TestRandomAccessFile);
    return Status::OK();
  }
  // Always return size of 10
  Status GetFileSize(const string& fname, uint64* file_size) override {
    *file_size = 10;
    return Status::OK();
  }
};
    
    REGISTER_OP('Add').Doc(R'doc(
An op to test that duplicate registrations don't override previously
registered ops.
)doc');
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
    // Returns the PyObject for the bfloat16 type.
PyObject* Bfloat16PyType();
    
    // Must be included first.
#include 'tensorflow/python/lib/core/numpy.h'
    
    // Structure which keeps a reference to a Tensor alive while numpy has a pointer
// to it.
struct TensorReleaser {
  // Python macro to include standard members.
  PyObject_HEAD
    }
    
    // Called by python code on initialization.
//
// 'trampoline' must represent a python function which has the
// following signature:
//   (string, list(ndarray)) | (string, list(EagerTensor)) ->
//     ndarray | list(ndarray) | python scalar |
//     EagerTensor | list(EagerTensor) | None
//
// The trampoline takes two arguments, the first is a string token
// used by the python frontend's dispatching logic; the second is a
// list of numpy ndarrays or EagerTensor objects. It can return a
// single numpy ndarray, a list of numpy ndarrays, a python scalar, an
// EagerTensor, a list of EagerTensors, or None.
//
// PyFunc requires inputs and outputs to be ndarrays. EagerPyFunc requires
// inputs to be a list of EagerTensors and outputs to be an EagerTensor, a list
// of EagerTensors, or None.
//
// The C++ runtime converts outputs back to Tensor objects.
//
// This function is called by script_ops.py during its module initialization.
//
// TODO(zhifengc): Support distributed runtime.
void InitializePyTrampoline(PyObject* trampoline);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // A wrapper around io::RecordReader that is more easily SWIG wrapped for
// Python.  An instance of this class is not safe for concurrent access
// by multiple threads.
class PyRecordReader {
 public:
  // TODO(vrv): make this take a shared proto to configure
  // the compression options.
  static PyRecordReader* New(const string& filename, uint64 start_offset,
                             const string& compression_type_string,
                             TF_Status* out_status);
    }
    
    #include 'tensorflow/stream_executor/lib/strcat.h'
    
      ScopedActivateExecutorContext(ScopedActivateExecutorContext&& other);
    
     private:
  std::string file_;
  int line_;
  int index_;
  int write_fd_;
    
      // Returns a copy of the FilePath with the directory part removed.
  // Example: FilePath('path/to/file').RemoveDirectoryName() returns
  // FilePath('file'). If there is no directory part ('just_a_file'), it returns
  // the FilePath unmodified. If there is no file part ('just_a_dir/') it
  // returns an empty FilePath ('').
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveDirectoryName() const;
    
    // Creates a new TestInfo object and registers it with Google Test;
// returns the created object.
//
// Arguments:
//
//   test_case_name:   name of the test case
//   name:             name of the test
//   type_param        the name of the test's type parameter, or NULL if
//                     this is not a typed or a type-parameterized test.
//   value_param       text representation of the test's value parameter,
//                     or NULL if this is not a type-parameterized test.
//   fixture_class_id: ID of the test fixture class
//   set_up_tc:        pointer to the function that sets up the test case
//   tear_down_tc:     pointer to the function that tears down the test case
//   factory:          pointer to the factory that creates a test object.
//                     The newly created TestInfo instance will assume
//                     ownership of the factory object.
GTEST_API_ TestInfo* MakeAndRegisterTestInfo(
    const char* test_case_name,
    const char* name,
    const char* type_param,
    const char* value_param,
    TypeId fixture_class_id,
    SetUpTestCaseFunc set_up_tc,
    TearDownTestCaseFunc tear_down_tc,
    TestFactoryBase* factory);
    
      T* value_;
  linked_ptr_internal link_;
    
    template <GTEST_TEMPLATE_ T1>
struct Templates1 {
  typedef TemplateSel<T1> Head;
  typedef Templates0 Tail;
};
    
    #endif // BOOST_NO_WREGEX
    
    
    
    #ifndef BOOST_REGEX_V4_MATCH_RESULTS_HPP
#define BOOST_REGEX_V4_MATCH_RESULTS_HPP
    
    
    
    template <class OutputIterator, class Results, class traits, class ForwardIter>
OutputIterator basic_regex_formatter<OutputIterator, Results, traits, ForwardIter>::format(ForwardIter p1, ForwardIter p2, match_flag_type f)
{
   m_position = p1;
   m_end = p2;
   m_flags = f;
   format_all();
   return m_out;
}
    
    
    {   void cow()
   {
      // copy-on-write
      if(pdata.get() && !pdata.unique())
      {
         pdata.reset(new impl(*(pdata.get())));
      }
   }
};
    
    template <class ST, class SA, class Allocator, class charT, class traits>
inline bool regex_match(const std::basic_string<charT, ST, SA>& s, 
                 match_results<typename std::basic_string<charT, ST, SA>::const_iterator, Allocator>& m, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
template <class charT, class traits>
inline bool regex_match(const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   match_results<const charT*> m;
   return regex_match(str, str + traits::length(str), m, e, flags | regex_constants::match_any);
}
    
       raw_storage();
   raw_storage(size_type n);
    
    
    {} // namespace boost
    
    template <class BaseT, bool has_extensions>
struct compute_wrapper_base
{
   typedef BaseT type;
};
#if !BOOST_WORKAROUND(__HP_aCC, < 60000)
template <class BaseT>
struct compute_wrapper_base<BaseT, false>
{
   typedef default_wrapper<BaseT> type;
};
#else
template <>
struct compute_wrapper_base<c_regex_traits<char>, false>
{
   typedef default_wrapper<c_regex_traits<char> > type;
};
#ifndef BOOST_NO_WREGEX
template <>
struct compute_wrapper_base<c_regex_traits<wchar_t>, false>
{
   typedef default_wrapper<c_regex_traits<wchar_t> > type;
};
#endif
#endif
    
    namespace osquery {
    }
    
    
    {  QueryLogItem second_item;
  getDecorations(second_item.decorations);
  ASSERT_EQ(second_item.decorations.size(), 2U);
}
    
    
    {
    {  EXPECT_TRUE(doc.HasMember('custom_nested_json'));
  EXPECT_FALSE(Flag::getValue('custom_nested_json').empty());
  EXPECT_EQ(R'raw({'foo':1,'bar':'baz'})raw',
            Flag::getValue('custom_nested_json'));
}
}

    
    #include 'osquery/core/json.h'
#include 'osquery/tests/test_util.h'
    
    #include <osquery/core.h>
    
      /// Reset counters after a worker exits.
  void resetWorkerCounters(size_t respawn_time);
    
    FLAG(string, distributed_plugin, 'tls', 'Distributed plugin name');
    
     private:
  /// A configure-time pattern was expanded to match absolute paths.
  bool recursive_match{false};