
        
        REGISTER_OP('ShapelessOp');
    
    
    {}  // namespace tensorflow

    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {}  // namespace tensorflow

    
    PyExceptionRegistry* PyExceptionRegistry::singleton_ = nullptr;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Safe containers for an owned TF_Tensor. On destruction, the tensor will be
// deleted by TF_DeleteTensor.
using Safe_TF_TensorPtr = std::unique_ptr<TF_Tensor, detail::TFTensorDeleter>;
Safe_TF_TensorPtr make_safe(TF_Tensor* tensor);
    
    // ValuesIn() function allows generation of tests with parameters coming from
// a container.
//
// Synopsis:
// ValuesIn(const T (&array)[N])
//   - returns a generator producing sequences with elements from
//     a C-style array.
// ValuesIn(const Container& container)
//   - returns a generator producing sequences with elements from
//     an STL-style container.
// ValuesIn(Iterator begin, Iterator end)
//   - returns a generator producing sequences with elements from
//     a range [begin, end) defined by a pair of STL-style iterators. These
//     iterators can also be plain C pointers.
//
// Please note that ValuesIn copies the values from the containers
// passed in and keeps them to generate tests in RUN_ALL_TESTS().
//
// Examples:
//
// This instantiates tests from test case StringTest
// each with C-string values of 'foo', 'bar', and 'baz':
//
// const char* strings[] = {'foo', 'bar', 'baz'};
// INSTANTIATE_TEST_CASE_P(StringSequence, SrtingTest, ValuesIn(strings));
//
// This instantiates tests from test case StlStringTest
// each with STL strings with values 'a' and 'b':
//
// ::std::vector< ::std::string> GetParameterStrings() {
//   ::std::vector< ::std::string> v;
//   v.push_back('a');
//   v.push_back('b');
//   return v;
// }
//
// INSTANTIATE_TEST_CASE_P(CharSequence,
//                         StlStringTest,
//                         ValuesIn(GetParameterStrings()));
//
//
// This will also instantiate tests from CharTest
// each with parameter values 'a' and 'b':
//
// ::std::list<char> GetParameterChars() {
//   ::std::list<char> list;
//   list.push_back('a');
//   list.push_back('b');
//   return list;
// }
// ::std::list<char> l = GetParameterChars();
// INSTANTIATE_TEST_CASE_P(CharSequence2,
//                         CharTest,
//                         ValuesIn(l.begin(), l.end()));
//
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end) {
  typedef typename ::testing::internal::IteratorTraits<ForwardIterator>
      ::value_type ParamType;
  return internal::ParamGenerator<ParamType>(
      new internal::ValuesInIteratorRangeGenerator<ParamType>(begin, end));
}
    
    #include <stdio.h>
#include <stdlib.h>
    
      ////////////////////////////////////////////////////////////
  //
  // D'tor.  MyString is intended to be a final class, so the d'tor
  // doesn't need to be virtual.
  ~MyString() { delete[] c_string_; }
    
    **Result**
    
      [[0.87226421 0.49045439]
   [0.92470531 0.30935077]]]]
Y: [[0.53432311 0.23734561 0.56481598 0.52152617 0.33662627 0.32472711
  0.17939016 0.97175851 0.87226421 0.49045439 0.92470531 0.30935077]]
```
    
            virtual Dictionary GetCheckpointState() const override;
        virtual void RestoreFromCheckpoint(const Dictionary& checkpoint) override;
    
            for (const auto& key : requiredKeys)
        {
            if (!dict.Contains(key))
            {
                 LogicError('Required key '%ls' is not found in the dictionary (%s).',
                            key.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
            }
        }
    
        public:
        template <typename ElementType>
        PackedValue(const NDShape& sampleShape, const std::vector<Axis>& sampleDynamicAxes, const std::shared_ptr<Microsoft::MSR::CNTK::Matrix<ElementType>>& packedDataMatrix, const std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>& packedDataLayout, bool isReadOnly)
            : Value(nullptr), m_isPacked(true), m_sampleShape(sampleShape), m_sampleDynamicAxes(sampleDynamicAxes), m_packedData(nullptr), m_packedDataLayout(packedDataLayout), m_isReadOnly(isReadOnly)
        {
            NDShape packedMatrixShape({ packedDataMatrix->GetNumRows(), packedDataMatrix->GetNumCols() });
            auto tensorView = new Microsoft::MSR::CNTK::TensorView<ElementType>(packedDataMatrix, AsTensorViewShape(packedMatrixShape));
            m_packedData = MakeSharedObject<NDArrayView>(AsDataType<ElementType>(), AsDeviceDescriptor(packedDataMatrix->GetDeviceId()), AsStorageFormat(packedDataMatrix->GetFormat()), packedMatrixShape, m_isReadOnly, tensorView);
    }
    
        void VariableFields::SetValueInitialization(const ParameterInitializer& initializationConfig, const DeviceDescriptor& device)
    {
        if (m_value != nullptr)
            LogicError('Variable '%S': Value initialization config cannot be set if a value already exists', AsString().c_str());
    }
    
    public:
    ScopeTimer(size_t verbosity, const std::string& message)
        : m_verbosity(verbosity), m_message(message)
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Start();
        }
    }
    
            // all cloned nodes' inputs must be redirected if they reference a node that has been cloned as well
        size_t numRelinks = 0; // (statistics: how many inputs have we relinked?)
        for (let& clonedNodesKV : clonedNodes)
        {
            let& node = clonedNodesKV.second;
            let& inputs2 = node->GetInputs();
            for (size_t i = 0; i < inputs2.size(); i++)
            {
                fprintf(stderr, '%ls.inputs[%d] = %ls (%d)', node->NodeName().c_str(), (int)i, inputs2[i]->NodeName().c_str(), (int)inputs2[i]->m_uniqueNumericId);
                let iter = clonedNodes.find(inputs2[i]);
                if (iter == clonedNodes.end())
                    continue;
                // input is also a cloned node: relink
                node->SetInput(i, iter->second);
                fprintf(stderr, ' ==>  %ls (%d)\n', inputs2[i]->NodeName().c_str(), (int)inputs2[i]->m_uniqueNumericId);
                numRelinks++;
            }
        }
    
    
    {        SetDims(sampleLayout, HasMBLayout()); // also called when reloading a file. Then we have an MBLayout, otherwise not yet
        UpdateFunctionValuesSize();           // we must allocate the matrix so that the readers get objects with valid row dimensions (some readers expect that)
        SetLearningRateMultiplier(learningRateMultiplier);
        m_dynamicAxisNodeName = axisName;
    }
    
       file_iterator();
   file_iterator(const char* wild);
   ~file_iterator();
   file_iterator(const file_iterator&);
   file_iterator& operator=(const file_iterator&);
   const char* root()const { return _root; }
   const char* path()const { return _path; }
   const char* name()const { return ptr; }
   _fi_find_data* data() { return &(ref->_data); }
   void next();
   file_iterator& operator++() { next(); return *this; }
   file_iterator operator++(int);
   const char* operator*() { return path(); }
    
    #  ifndef BOOST_REGEX_INSTANTIATE
#     ifdef __GNUC__
#        define template __extension__ extern template
#     else
#        if BOOST_MSVC > 1310
#           define BOOST_REGEX_TEMPLATE_DECL
#        endif
#        define template extern template
#     endif
#  endif
    
    template <class I>
struct is_random_imp
{
#ifndef BOOST_NO_STD_ITERATOR_TRAITS
private:
   typedef typename std::iterator_traits<I>::iterator_category cat;
public:
   BOOST_STATIC_CONSTANT(bool, value = (::boost::is_convertible<cat*, std::random_access_iterator_tag*>::value));
#else
   BOOST_STATIC_CONSTANT(bool, value = false);
#endif
};
    
    struct mem_block_cache
{
   // this member has to be statically initialsed:
   mem_block_node* next;
   unsigned cached_blocks;
#ifdef BOOST_HAS_THREADS
   boost::static_mutex mut;
#endif
    }
    
    template <class BidiIterator, class Allocator, class traits>
inline void perl_matcher<BidiIterator, Allocator, traits>::push_assertion(const re_syntax_base* ps, bool positive)
{
   saved_assertion<BidiIterator>* pmp = static_cast<saved_assertion<BidiIterator>*>(m_backup_state);
   --pmp;
   if(pmp < m_stack_base)
   {
      extend_stack();
      pmp = static_cast<saved_assertion<BidiIterator>*>(m_backup_state);
      --pmp;
   }
   (void) new (pmp)saved_assertion<BidiIterator>(positive, ps, position);
   m_backup_state = pmp;
}
    
    #ifdef BOOST_REGEX_USE_WIN32_LOCALE
template <class charT, class implementationT = w32_regex_traits<charT> >
struct regex_traits;
#elif defined(BOOST_REGEX_USE_CPP_LOCALE)
template <class charT, class implementationT = cpp_regex_traits<charT> >
struct regex_traits;
#else
template <class charT, class implementationT = c_regex_traits<charT> >
struct regex_traits;
#endif
    
    template <class ST, class SA, class charT, class traits>
inline bool regex_match(const std::basic_string<charT, ST, SA>& s, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   typedef typename std::basic_string<charT, ST, SA>::const_iterator iterator;
   match_results<iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#else  // partial ordering
inline bool regex_match(const char* str, 
                        cmatch& m, 
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const char* str, 
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   match_results<const char*> m;
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#ifndef BOOST_NO_STD_LOCALE
inline bool regex_match(const char* str, 
                        cmatch& m, 
                        const basic_regex<char, cpp_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const char* str, 
                        const basic_regex<char, cpp_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const char*> m;
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_match(const char* str, 
                        cmatch& m, 
                        const basic_regex<char, c_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const char* str, 
                        const basic_regex<char, c_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const char*> m;
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
inline bool regex_match(const char* str, 
                        cmatch& m, 
                        const basic_regex<char, w32_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const char* str, 
                        const basic_regex<char, w32_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const char*> m;
   return regex_match(str, str + regex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#endif
#ifndef BOOST_NO_WREGEX
inline bool regex_match(const wchar_t* str, 
                        wcmatch& m, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const wchar_t* str, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   match_results<const wchar_t*> m;
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#ifndef BOOST_NO_STD_LOCALE
inline bool regex_match(const wchar_t* str, 
                        wcmatch& m, 
                        const basic_regex<wchar_t, cpp_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const wchar_t* str, 
                        const basic_regex<wchar_t, cpp_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const wchar_t*> m;
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_match(const wchar_t* str, 
                        wcmatch& m, 
                        const basic_regex<wchar_t, c_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const wchar_t* str, 
                        const basic_regex<wchar_t, c_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const wchar_t*> m;
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
inline bool regex_match(const wchar_t* str, 
                        wcmatch& m, 
                        const basic_regex<wchar_t, w32_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags);
}
inline bool regex_match(const wchar_t* str, 
                        const basic_regex<wchar_t, w32_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<const wchar_t*> m;
   return regex_match(str, str + wregex::traits_type::length(str), m, e, flags | regex_constants::match_any);
}
#endif
#endif
inline bool regex_match(const std::string& s, 
                        smatch& m,
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::string& s, 
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::string::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#ifndef BOOST_NO_STD_LOCALE
inline bool regex_match(const std::string& s, 
                        smatch& m,
                        const basic_regex<char, cpp_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::string& s, 
                        const basic_regex<char, cpp_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::string::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_match(const std::string& s, 
                        smatch& m,
                        const basic_regex<char, c_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::string& s, 
                        const basic_regex<char, c_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::string::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
inline bool regex_match(const std::string& s, 
                        smatch& m,
                        const basic_regex<char, w32_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::string& s, 
                        const basic_regex<char, w32_regex_traits<char> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::string::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#endif
#if !defined(BOOST_NO_WREGEX)
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        match_results<std::basic_string<wchar_t>::const_iterator>& m,
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::basic_string<wchar_t>::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#ifndef BOOST_NO_STD_LOCALE
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        match_results<std::basic_string<wchar_t>::const_iterator>& m,
                        const basic_regex<wchar_t, cpp_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        const basic_regex<wchar_t, cpp_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::basic_string<wchar_t>::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#endif
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        match_results<std::basic_string<wchar_t>::const_iterator>& m,
                        const basic_regex<wchar_t, c_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        const basic_regex<wchar_t, c_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::basic_string<wchar_t>::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        match_results<std::basic_string<wchar_t>::const_iterator>& m,
                        const basic_regex<wchar_t, w32_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
inline bool regex_match(const std::basic_string<wchar_t>& s, 
                        const basic_regex<wchar_t, w32_regex_traits<wchar_t> >& e, 
                        match_flag_type flags = match_default)
{
   match_results<std::basic_string<wchar_t>::const_iterator> m;
   return regex_match(s.begin(), s.end(), m, e, flags | regex_constants::match_any);
}
#endif
#endif
    
      TestCanParam() = default;
    
    
    {  thread_.reset(new std::thread([this] { RecvThreadFunc(); }));
  if (thread_ == nullptr) {
    AERROR << 'Unable to create can client receiver thread.';
    return ::apollo::common::ErrorCode::CANBUS_ERROR;
  }
  return ::apollo::common::ErrorCode::OK;
}
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    class MockMessageManager
    : public MessageManager<::apollo::canbus::ChassisDetail> {
 public:
  MockMessageManager() {
    AddRecvProtocolData<MockProtocolData, true>();
    AddSendProtocolData<MockProtocolData, true>();
  }
};
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}
    
    // data file
DEFINE_string(sensor_conf_file, '', 'Sensor conf file');