
        
         private:
  ~UvTaskRunner() override;
  static void OnTimeout(uv_timer_t* timer);
  static void OnClose(uv_handle_t* handle);
    
    #include 'atom/browser/api/atom_api_web_contents.h'
#include 'atom/browser/browser.h'
#include 'atom/browser/native_browser_view.h'
#include 'atom/common/color_util.h'
#include 'atom/common/native_mate_converters/gfx_converter.h'
#include 'atom/common/native_mate_converters/value_converter.h'
#include 'atom/common/node_includes.h'
#include 'atom/common/options_switches.h'
#include 'native_mate/constructor.h'
#include 'native_mate/dictionary.h'
#include 'ui/gfx/geometry/rect.h'
    
    namespace atom {
    }
    
    
    {  delegate.Get('isCommandIdChecked', &is_checked_);
  delegate.Get('isCommandIdEnabled', &is_enabled_);
  delegate.Get('isCommandIdVisible', &is_visible_);
  delegate.Get('getAcceleratorForCommandId', &get_accelerator_);
  delegate.Get('executeCommand', &execute_command_);
  delegate.Get('menuWillShow', &menu_will_show_);
}
    
    namespace api {
    }
    
     private:
  atom::RenderProcessPreferences preferences_;
    
    namespace gfx {
class Image;
}
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
      // True when a ScopedPyObjectPtr and a raw pointer refer to the same object.
  // Comparison operators are non reflexive.
  bool operator==(const PyObjectStruct* p) const { return ptr_ == p; }
  bool operator!=(const PyObjectStruct* p) const { return ptr_ != p; }
    
    
namespace google {
namespace protobuf {
namespace internal {
    }
    }
    }
    
    bool CodeGenerator::GenerateAll(
    const std::vector<const FileDescriptor*>& files,
    const string& parameter,
    GeneratorContext* generator_context,
    string* error) const {
  // Default implemenation is just to call the per file method, and prefix any
  // error string with the file to provide context.
  bool succeeded = true;
  for (int i = 0; i < files.size(); i++) {
    const FileDescriptor* file = files[i];
    succeeded = Generate(file, parameter, generator_context, error);
    if (!succeeded && error && error->empty()) {
      *error = 'Code generator returned false but provided no error '
               'description.';
    }
    if (error && !error->empty()) {
      *error = file->name() + ': ' + *error;
      break;
    }
    if (!succeeded) {
      break;
    }
  }
  return succeeded;
}
    
    IntSimdMatrixAVX2::IntSimdMatrixAVX2() {
#ifdef __AVX2__
  num_outputs_per_register_ = kNumOutputsPerRegister;
  max_output_registers_ = kMaxOutputRegisters;
  num_inputs_per_register_ = kNumInputsPerRegister;
  num_inputs_per_group_ = kNumInputsPerGroup;
  num_input_groups_ = kNumInputGroups;
  partial_funcs_ = {PartialMatrixDotVector64, PartialMatrixDotVector32,
                    PartialMatrixDotVector16, PartialMatrixDotVector8};
#endif  // __AVX2__
}
    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
      /// Destroy the Pix if there is one, freeing memory.
  virtual void Clear();
    
      virtual bool SetPeerIdentityPropertyName(const grpc::string& name) override;
    
    
    {  SrcPos start;
  SrcPos past;
};
    
      /*
   * Patch a branch to the correct target.
   *
   * It decodes the branch @jmp to decide whether it's an absolute branch or an
   * offset branch and patches it properly.
   */
  static void patchBranch(CodeAddress jmp, CodeAddress dest);
  static void patchAbsolute(CodeAddress jmp, CodeAddress dest);
    
        if (!semi) {
      // only media type (type/subtype,data)
      ssize_t media_len = comma - data;
      meta_len -= media_len;
      data += media_len;
    } else if (slash && slash < semi) {
      // media type + param (type/subtype;param,data)
      ssize_t media_len = semi - data;
      meta_len -= media_len;
      data += media_len;
    } else {
      // no media type (;base64,data)
      if (semi != data // ex. foo;base64,data
          || meta_len != sizeof(';base64') - 1 // ex. ;something,data
          || memcmp(data, ';base64',
                    sizeof(';base64') - 1)) { // ex. ;base65,data
          raise_warning('rfc2397: invalid meta data');
          return nullptr;
        }
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
      // a silent exception does not have its exception message logged
  bool isSilent() const { return m_silent; }
  void setSilent(bool s = true) { m_silent = s; }
  void recomputeBacktraceFromWH(c_WaitableWaitHandle* wh);
    
    inline const VirtualHost* ExecutionContext::getVirtualHost() const {
  return m_vhost;
}
    
    #if (defined(__GLIBCPP__) || defined(__GLIBCXX__)) \
   && !defined(BOOST_REGEX_ICU_INSTANCES)\
   && !defined(__SGI_STL_PORT)\
   && !defined(_STLPORT_VERSION)
// std:basic_string<>::const_iterator instances as well:
template BOOST_REGEX_DECL void BOOST_REGEX_CALL 
   match_results<std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator>::maybe_assign(
      const match_results<std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator>& m);
    
    
#ifndef BOOST_REGEX_ITERATOR_CATEGORY_HPP
#define BOOST_REGEX_ITERATOR_CATEGORY_HPP
    
    
    {} /* namespace boost */
#endif /* __cplusplus */
#endif /* include guard */
    
       //
   // private access functions:
   void BOOST_REGEX_CALL set_second(BidiIterator i)
   {
      BOOST_ASSERT(m_subs.size() > 2);
      m_subs[2].second = i;
      m_subs[2].matched = true;
      m_subs[0].first = i;
      m_subs[0].matched = (m_subs[0].first != m_subs[0].second);
      m_null.first = i;
      m_null.second = i;
      m_null.matched = false;
      m_is_singular = false;
   }
    
    #endif
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_word_end()
{
   if((position == backstop) && ((m_match_flags & match_prev_avail) == 0))
      return false;  // start of buffer can't be end of word
   BidiIterator t(position);
   --t;
   if(traits_inst.isctype(*t, m_word_mask) == false)
      return false;  // previous character wasn't a word character
    }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_non_greedy_repeat(bool r)
{
   saved_position<BidiIterator>* pmp = static_cast<saved_position<BidiIterator>*>(m_backup_state);
   if(!r)
   {
      position = pmp->position;
      pstate = pmp->pstate;
      ++(*next_count);
   }
   boost::BOOST_REGEX_DETAIL_NS::inplace_destroy(pmp++);
   m_backup_state = pmp;
   return r;
}
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_recursion()
{
   BOOST_ASSERT(pstate->type == syntax_element_recurse);
   //
   // Set new call stack:
   //
   if(recursion_stack.capacity() == 0)
   {
      recursion_stack.reserve(50);
   }
   recursion_stack.push_back(recursion_info<results_type>());
   recursion_stack.back().preturn_address = pstate->next.p;
   recursion_stack.back().results = *m_presult;
   recursion_stack.back().repeater_stack = next_count;
   pstate = static_cast<const re_jump*>(pstate)->alt.p;
   recursion_stack.back().idx = static_cast<const re_brace*>(pstate)->index;
    }
    
    template <class S, class charT>
unsigned count_chars(const S& s, charT c)
{
   //
   // Count how many occurances of character c occur
   // in string s: if c is a delimeter between collation
   // fields, then this should be the same value for all
   // sort keys:
   //
   unsigned int count = 0;
   for(unsigned pos = 0; pos < s.size(); ++pos)
   {
      if(s[pos] == c) ++count;
   }
   return count;
}
    
    template <class T>
class concrete_protected_call
   : public abstract_protected_call
{
public:
   typedef bool (T::*proc_type)();
   concrete_protected_call(T* o, proc_type p)
      : obj(o), proc(p) {}
private:
   virtual bool call()const;
   T* obj;
   proc_type proc;
};
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex.cpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Declares boost::basic_regex<> and associated
  *                functions and classes. This header is the main
  *                entry point for the template regex code.
  */
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    template <class charT>
const basic_regex<charT>& get_default_expression(charT)
{
   static const charT expression_text[4] = { '\\', 's', '+', '\00', };
   static const basic_regex<charT> e(expression_text);
   return e;
}
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    
    {REGISTER_INTERNAL(ViewsConfigParserPlugin, 'config_parser', 'views');
}

    
    TEST_F(PacksTests, test_sharding) {
  auto shard1 = getMachineShard('localhost.localdomain');
  auto shard2 = getMachineShard('not.localhost.localdomain');
  // Expect some static caching.
  EXPECT_EQ(shard1, shard2);
    }
    
      /**
   * @brief Update the internal context buffer with additional content
   *
   * This method allows you to chunk up large content so that it doesn't all
   * have to be loaded into memory at the same time
   *
   * @param buffer The buffer to be hashed
   * @param size The size of the buffer to be hashed
   */
  void update(const void* buffer, size_t size);
    
    namespace osquery {
    }
    
    TEST_F(TablesTests, test_constraint) {
  auto constraint = Constraint(EQUALS);
  constraint.expr = 'none';
    }
    
    
    { private:
  FRIEND_TEST(WatcherTests, test_watcherrunner_watch);
  FRIEND_TEST(WatcherTests, test_watcherrunner_stop);
  FRIEND_TEST(WatcherTests, test_watcherrunner_loop);
  FRIEND_TEST(WatcherTests, test_watcherrunner_loop_failure);
  FRIEND_TEST(WatcherTests, test_watcherrunner_loop_disabled);
  FRIEND_TEST(WatcherTests, test_watcherrunner_watcherhealth);
  FRIEND_TEST(WatcherTests, test_watcherrunner_unhealthy_delay);
};
    
    #include <gtest/gtest.h>
    
    TEST_F(EventsTests, test_duplicate_event_publisher) {
  auto pub = std::make_shared<BasicEventPublisher>();
  pub->setName('BasicPublisher');
  auto status = EventFactory::registerEventPublisher(pub);
  EXPECT_TRUE(status.ok());
    }