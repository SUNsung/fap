
        
        
    {// TODO(nareshmodi): Move EagerCast and ReadVariableOp (which use the C API to
// execute TFE Ops) to a separate common library.
TFE_TensorHandle* EagerCast(TFE_Context* ctx, TFE_TensorHandle* handle,
                            TF_DataType src_type_enum,
                            TF_DataType dst_type_enum, TF_Status* out_status);
}
    
      // Convert input tensor-as-shape values;
  std::vector<TensorShapeProto> input_tensor_as_shapes_protos(
      input_constant_tensor_as_shape_values.size());
  for (int i = 0; i < input_constant_tensor_as_shape_values.size(); ++i) {
    if (!input_tensor_as_shapes_protos[i].ParseFromString(
            input_constant_tensor_as_shape_values[i])) {
      return errors::InvalidArgument(
          'Error parsing shape proto during cpp shape inference');
    }
  }
    
    namespace {
enum KernelLabel { DEFAULT_LABEL, OVERLOAD_1_LABEL, OVERLOAD_2_LABEL };
}  // namespace
    
    
    {}  // namespace
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Creates a tensor in 'ret' from the input Ndarray.
Status NdarrayToTensor(PyObject* obj, Tensor* ret);
    
    namespace tensorflow {
    }
    
    PyObject* PyExceptionRegistry::Lookup(TF_Code code) {
  DCHECK(singleton_ != nullptr) << 'Must call PyExceptionRegistry::Init() '
                                   'before PyExceptionRegistry::Lookup()';
  DCHECK_NE(code, TF_OK);
  DCHECK(singleton_->exc_types_.find(code) != singleton_->exc_types_.end())
      << 'Unknown error code passed to PyExceptionRegistry::Lookup: ' << code;
  return singleton_->exc_types_[code];
}
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Returns the kernel class name required to execute <node_def> on the device
// type of <node_def.device>, or an empty string if the kernel class is not
// found or the device name is invalid.
string TryFindKernelClass(const string& serialized_node_def);
    
    // clear cache on the renderer side
IPC_MESSAGE_CONTROL0(ShellViewMsg_ClearCache)
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
      // Ignore first non-switch arg if it's not a standalone package.
  bool ignore_arg = !package->self_extract();
  for (unsigned i = 1; i < argv.size(); ++i) {
    if (ignore_arg && args.size() && argv[i] == args[0]) {
      ignore_arg = false;
      continue;
    }
    }
    
    inline OneofDef::iterator::iterator(OneofDef* o) {
  upb_oneof_begin(&iter_, o);
}
inline OneofDef::iterator OneofDef::iterator::end(OneofDef* o) {
  OneofDef::iterator iter(o);
  upb_oneof_iter_setdone(&iter.iter_);
  return iter;
}
inline FieldDef* OneofDef::iterator::operator*() const {
  return upb_oneof_iter_field(&iter_);
}
inline void OneofDef::iterator::operator++() { return upb_oneof_next(&iter_); }
inline bool OneofDef::iterator::operator==(const iterator &other) const {
  return upb_inttable_iter_isequal(&iter_, &other.iter_);
}
inline bool OneofDef::iterator::operator!=(const iterator &other) const {
  return !(*this == other);
}
    
    void FindAnnotationsOnPath(
    const GeneratedCodeInfo& info, const string& source_file,
    const std::vector<int>& path,
    std::vector<const GeneratedCodeInfo::Annotation*>* annotations) {
  for (int i = 0; i < info.annotation_size(); ++i) {
    const GeneratedCodeInfo::Annotation* annotation = &info.annotation(i);
    if (annotation->source_file() != source_file ||
        annotation->path_size() != path.size()) {
      continue;
    }
    int node = 0;
    for (; node < path.size(); ++node) {
      if (annotation->path(node) != path[node]) {
        break;
      }
    }
    if (node == path.size()) {
      annotations->push_back(annotation);
    }
  }
}
    
    
    {  // Moving from a message on the arena should lead to a copy.
  message2 = std::move(*message1_on_arena);
  EXPECT_NE(nested, &message2.optional_nested_message());
  TestUtil::ExpectAllFieldsSet(*message1_on_arena);
  TestUtil::ExpectAllFieldsSet(message2);
}
    
    void WriteDocCommentBodyImpl(io::Printer* printer, SourceLocation location) {
    string comments = location.leading_comments.empty() ?
        location.trailing_comments : location.leading_comments;
    if (comments.empty()) {
        return;
    }
    // XML escaping... no need for apostrophes etc as the whole text is going to be a child
    // node of a summary element, not part of an attribute.
    comments = StringReplace(comments, '&', '&amp;', true);
    comments = StringReplace(comments, '<', '&lt;', true);
    std::vector<string> lines = Split(comments, '\n', false /* skip_empty */);
    // TODO: We really should work out which part to put in the summary and which to put in the remarks...
    // but that needs to be part of a bigger effort to understand the markdown better anyway.
    printer->Print('/// <summary>\n');
    bool last_was_empty = false;
    // We squash multiple blank lines down to one, and remove any trailing blank lines. We need
    // to preserve the blank lines themselves, as this is relevant in the markdown.
    // Note that we can't remove leading or trailing whitespace as *that's* relevant in markdown too.
    // (We don't skip 'just whitespace' lines, either.)
    for (std::vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it;
        if (line.empty()) {
            last_was_empty = true;
        } else {
            if (last_was_empty) {
                printer->Print('///\n');
            }
            last_was_empty = false;
            printer->Print('///$line$\n', 'line', *it);
        }
    }
    printer->Print('/// </summary>\n');
}
    
      if (filename.empty()) {
    *error = filename_error;
    return false;
  }
  std::unique_ptr<io::ZeroCopyOutputStream> output(
      generator_context->Open(filename));
  io::Printer printer(output.get(), '$');
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    void MapFieldGenerator::GenerateFreezingCode(io::Printer* printer) {
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_MESSAGE_FIELD_H__
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    void ReflectionClassGenerator::WriteDescriptor(io::Printer* printer) {
  printer->Print(
    '#region Descriptor\n'
    '/// <summary>File descriptor for $file_name$</summary>\n'
    'public static pbr::FileDescriptor Descriptor {\n'
    '  get { return descriptor; }\n'
    '}\n'
    'private static pbr::FileDescriptor descriptor;\n'
    '\n'
    'static $reflection_class_name$() {\n',
    'file_name', file_->name(),
    'reflection_class_name', reflectionClassname_);
  printer->Indent();
  printer->Print(
    'byte[] descriptorData = global::System.Convert.FromBase64String(\n');
  printer->Indent();
  printer->Indent();
  printer->Print('string.Concat(\n');
  printer->Indent();
    }
    }
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    
    { protected:
  shared_ptr<SyncedMemory> rand_vec_;
};
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int MinTopBlobs() const { return 1; }
  virtual inline bool EqualNumBottomTopBlobs() const { return true; }
    
    
    {}  // namespace caffe
    
      /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {
    {  // Recursive copy function: this is similar to crop_copy() but loops over all
  // but the last two dimensions to allow for ND cropping while still relying on
  // a CUDA kernel for the innermost two dimensions for performance reasons.  An
  // alterantive implementation could rely on the kernel more by passing
  // offsets, but this is problematic because of its variable length.
  // Since in the standard (N,C,W,H) case N,C are usually not cropped a speedup
  // could be achieved by not looping the application of the copy_kernel around
  // these dimensions.
  void crop_copy_gpu(const vector<Blob<Dtype>*>& bottom,
                const vector<Blob<Dtype>*>& top,
                const vector<int>& offsets,
                vector<int> indices,
                int cur_dim,
                const Dtype* src_data,
                Dtype* dest_data,
                bool is_forward);
};
}  // namespace caffe
    
    #include 'caffe/layers/pooling_layer.hpp'
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    template <typename Generator1, typename Generator2, typename Generator3>
internal::CartesianProductHolder3<Generator1, Generator2, Generator3> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3) {
  return internal::CartesianProductHolder3<Generator1, Generator2, Generator3>(
      g1, g2, g3);
}
    
    class BaseTest : public ::testing::Test {
  // You can inherit all the usual members for a non-parameterized test
  // fixture here.
};
    
      // Gets the message associated with the test part.
  const char* message() const { return message_.c_str(); }
    
      void Normalize();
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_

    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42,
    GTEST_TEMPLATE_ T43, GTEST_TEMPLATE_ T44, GTEST_TEMPLATE_ T45,
    GTEST_TEMPLATE_ T46, GTEST_TEMPLATE_ T47>
struct Templates47 {
  typedef TemplateSel<T1> Head;
  typedef Templates46<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43, T44, T45, T46, T47> Tail;
};
    
      virtual int GetNextPrime(int p) const {
    for (int n = p + 1; n > 0; n++) {
      if (IsPrime(n)) return n;
    }
    }
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    // Clones a 0-terminated C string, allocating memory using new.
const char* MyString::CloneCString(const char* a_c_string) {
  if (a_c_string == NULL) return NULL;
    }
    
      // Applies a function/functor on each element of the queue, and
  // returns the result in a new queue.  The original queue is not
  // affected.
  template <typename F>
  Queue* Map(F function) const {
    Queue* new_queue = new Queue();
    for (const QueueNode<E>* node = head_; node != NULL; node = node->next_) {
      new_queue->Enqueue(function(node->element()));
    }
    }
    
       mapfile_iterator& operator += (long off)
   {
      position(position() + off);
      return *this;
   }
   mapfile_iterator& operator -= (long off)
   {
      position(position() - off);
      return *this;
   }
    
    template <class T>
struct regex_iterator_traits 
{
  typedef typename T::iterator_category iterator_category;
  typedef typename T::value_type        value_type;
#if !defined(BOOST_NO_STD_ITERATOR)
  typedef typename T::difference_type   difference_type;
  typedef typename T::pointer           pointer;
  typedef typename T::reference         reference;
#else
  typedef std::ptrdiff_t                difference_type;
  typedef value_type*                   pointer;
  typedef value_type&                   reference;
#endif
};
    
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
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_commit()
{
   // Ideally we would just junk all the states that are on the stack,
   // however we might not unwind correctly in that case, so for now,
   // just mark that we don't backtrack into whatever is left (or rather
   // we'll unwind it unconditionally without pausing to try other matches).
    }
    
    
    {   // non-greedy, keep trying till we get a match:
   BidiIterator save_pos;
   do
   {
      while((position != last) && (count < rep->max) && !can_start(*position, rep->_map, mask_skip))
      {
         if(position != re_is_set_member(position, last, set, re.get_data(), icase))
         {
            ++position;
            ++count;
         }
         else
            return false;  // counldn't repeat even though it was the only option
      }
      if((rep->leading) && (rep->max == UINT_MAX))
         restart = position;
      pstate = rep->alt.p;
      save_pos = position;
      ++state_count;
      if(match_all_states())
         return true;
      if((count >= rep->max) || !m_can_backtrack)
         return false;
      position = save_pos;
      if(position == last)
         return false;
      if(position != re_is_set_member(position, last, set, re.get_data(), icase))
      {
         ++position;
         ++count;
      }
      else
      {
         return false;
      }
   }while(true);
#ifdef __BORLANDC__
#pragma option pop
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    
    {public:
   regex_token_iterator_implementation(const regex_type* p, BidirectionalIterator last, int sub, match_flag_type f)
      : end(last), re(*p), flags(f){ subs.push_back(sub); }
   regex_token_iterator_implementation(const regex_type* p, BidirectionalIterator last, const std::vector<int>& v, match_flag_type f)
      : end(last), re(*p), flags(f), subs(v){}
#if !BOOST_WORKAROUND(__HP_aCC, < 60700)
#if (BOOST_WORKAROUND(__BORLANDC__, >= 0x560) && BOOST_WORKAROUND(__BORLANDC__, BOOST_TESTED_AT(0x570)))\
      || BOOST_WORKAROUND(__MWERKS__, BOOST_TESTED_AT(0x3003)) \
      || BOOST_WORKAROUND(__HP_aCC, < 60700)
   template <class T>
   regex_token_iterator_implementation(const regex_type* p, BidirectionalIterator last, const T& submatches, match_flag_type f)
      : end(last), re(*p), flags(f)
   {
      // assert that T really is an array:
      BOOST_STATIC_ASSERT(::boost::is_array<T>::value);
      const std::size_t array_size = sizeof(T) / sizeof(submatches[0]);
      for(std::size_t i = 0; i < array_size; ++i)
      {
         subs.push_back(submatches[i]);
      }
   }
#else
   template <std::size_t CN>
   regex_token_iterator_implementation(const regex_type* p, BidirectionalIterator last, const int (&submatches)[CN], match_flag_type f)
      : end(last), re(*p), flags(f)
   {
      for(std::size_t i = 0; i < CN; ++i)
      {
         subs.push_back(submatches[i]);
      }
   }
#endif
#endif
   bool init(BidirectionalIterator first)
   {
      N = 0;
      base = first;
      if(regex_search(first, end, what, re, flags, base) == true)
      {
         N = 0;
         result = ((subs[N] == -1) ? what.prefix() : what[(int)subs[N]]);
         return true;
      }
      else if((subs[N] == -1) && (first != end))
      {
         result.first = first;
         result.second = end;
         result.matched = (first != end);
         N = -1;
         return true;
      }
      return false;
   }
   bool compare(const regex_token_iterator_implementation& that)
   {
      if(this == &that) return true;
      return (&re.get_data() == &that.re.get_data()) 
         && (end == that.end) 
         && (flags == that.flags) 
         && (N == that.N) 
         && (what[0].first == that.what[0].first) 
         && (what[0].second == that.what[0].second);
   }
   const value_type& get()
   { return result; }
   bool next()
   {
      if(N == -1)
         return false;
      if(N+1 < (int)subs.size())
      {
         ++N;
         result =((subs[N] == -1) ? what.prefix() : what[subs[N]]);
         return true;
      }
      //if(what.prefix().first != what[0].second)
      //   flags |= /*match_prev_avail |*/ regex_constants::match_not_bob;
      BidirectionalIterator last_end(what[0].second);
      if(regex_search(last_end, end, what, re, ((what[0].first == what[0].second) ? flags | regex_constants::match_not_initial_null : flags), base))
      {
         N =0;
         result =((subs[N] == -1) ? what.prefix() : what[subs[N]]);
         return true;
      }
      else if((last_end != end) && (subs[0] == -1))
      {
         N =-1;
         result.first = last_end;
         result.second = end;
         result.matched = (last_end != end);
         return true;
      }
      return false;
   }
private:
   regex_token_iterator_implementation& operator=(const regex_token_iterator_implementation&);
};
    
    template <class BaseT>
struct default_wrapper : public BaseT
{
   typedef typename BaseT::char_type char_type;
   std::string error_string(::boost::regex_constants::error_type e)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::get_default_error_string(e);
   }
   ::boost::regex_constants::syntax_type syntax_type(char_type c)const
   {
      return ((c & 0x7f) == c) ? get_default_syntax_type(static_cast<char>(c)) : ::boost::regex_constants::syntax_char;
   }
   ::boost::regex_constants::escape_syntax_type escape_syntax_type(char_type c)const
   {
      return ((c & 0x7f) == c) ? get_default_escape_syntax_type(static_cast<char>(c)) : ::boost::regex_constants::escape_type_identity;
   }
   int toi(const char_type*& p1, const char_type* p2, int radix)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_toi(p1, p2, radix, *this);
   }
   char_type translate(char_type c, bool icase)const
   {
      return (icase ? this->translate_nocase(c) : this->translate(c));
   }
   char_type translate(char_type c)const
   {
      return BaseT::translate(c);
   }
   char_type tolower(char_type c)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_lower(c);
   }
   char_type toupper(char_type c)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_upper(c);
   }
};
    
    ColumnFamilyData* ColumnFamilySet::GetColumnFamily(const std::string& name)
    const {
  auto cfd_iter = column_families_.find(name);
  if (cfd_iter != column_families_.end()) {
    auto cfd = GetColumnFamily(cfd_iter->second);
    assert(cfd != nullptr);
    return cfd;
  } else {
    return nullptr;
  }
}
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
    #ifndef ROCKSDB_VALGRIND_RUN
INSTANTIATE_TEST_CASE_P(
    DBTestCompactionFilterWithCompactOption,
    DBTestCompactionFilterWithCompactParam,
    ::testing::Values(DBTestBase::OptionConfig::kDefault,
                      DBTestBase::OptionConfig::kUniversalCompaction,
                      DBTestBase::OptionConfig::kUniversalCompactionMultiLevel,
                      DBTestBase::OptionConfig::kLevelSubcompactions,
                      DBTestBase::OptionConfig::kUniversalSubcompactions));
#else
// Run fewer cases in valgrind
INSTANTIATE_TEST_CASE_P(DBTestCompactionFilterWithCompactOption,
                        DBTestCompactionFilterWithCompactParam,
                        ::testing::Values(DBTestBase::OptionConfig::kDefault));
#endif  // ROCKSDB_VALGRIND_RUN
    
      TEST_SYNC_POINT('DynamicLevelMaxBytesBase2:0');
  for (int i = 0; i < 2; i++) {
    ASSERT_OK(Put(Key(static_cast<int>(rnd.Uniform(kMaxKey))),
                  RandomString(&rnd, 380)));
  }
  TEST_SYNC_POINT('DynamicLevelMaxBytesBase2:1');
    
      using DBImpl::NewIterator;
  virtual Iterator* NewIterator(const ReadOptions&,
                                ColumnFamilyHandle* column_family) override;
    
    #include 'db/db_info_dumper.h'
    
    
    { private:
  // no copying allowed
  WriteControllerToken(const WriteControllerToken&) = delete;
  void operator=(const WriteControllerToken&) = delete;
};
    
    
    {  virtual Status Close() override {
    return file_->Close();
  }
};
    
    namespace {
size_t GetLogicalBufferSize(int __attribute__((__unused__)) fd) {
#ifdef OS_LINUX
  struct stat buf;
  int result = fstat(fd, &buf);
  if (result == -1) {
    return kDefaultPageSize;
  }
  if (major(buf.st_dev) == 0) {
    // Unnamed devices (e.g. non-device mounts), reserved as null device number.
    // These don't have an entry in /sys/dev/block/. Return a sensible default.
    return kDefaultPageSize;
  }
    }
    }
    
    void ButteraugliComparator::ComputeBlockErrorAdjustmentWeights(
      int direction,
      int max_block_dist,
      double target_mul,
      int factor_x, int factor_y,
      const std::vector<float>& distmap,
      std::vector<float>* block_weight) {
  const double target_distance = target_distance_ * target_mul;
  const int sizex = 8 * factor_x;
  const int sizey = 8 * factor_y;
  const int block_width = (width_ + sizex - 1) / sizex;
  const int block_height = (height_ + sizey - 1) / sizey;
  std::vector<float> max_dist_per_block(block_width * block_height);
  for (int block_y = 0; block_y < block_height; ++block_y) {
    for (int block_x = 0; block_x < block_width; ++block_x) {
      int block_ix = block_y * block_width + block_x;
      int x_max = std::min(width_, sizex * (block_x + 1));
      int y_max = std::min(height_, sizey * (block_y + 1));
      float max_dist = 0.0;
      for (int y = sizey * block_y; y < y_max; ++y) {
        for (int x = sizex * block_x; x < x_max; ++x) {
          max_dist = std::max(max_dist, distmap[y * width_ + x]);
        }
      }
      max_dist_per_block[block_ix] = max_dist;
    }
  }
  for (int block_y = 0; block_y < block_height; ++block_y) {
    for (int block_x = 0; block_x < block_width; ++block_x) {
      int block_ix = block_y * block_width + block_x;
      float max_local_dist = static_cast<float>(target_distance);
      int x_min = std::max(0, block_x - max_block_dist);
      int y_min = std::max(0, block_y - max_block_dist);
      int x_max = std::min(block_width, block_x + 1 + max_block_dist);
      int y_max = std::min(block_height, block_y + 1 + max_block_dist);
      for (int y = y_min; y < y_max; ++y) {
        for (int x = x_min; x < x_max; ++x) {
          max_local_dist =
              std::max(max_local_dist, max_dist_per_block[y * block_width + x]);
        }
      }
      if (direction > 0) {
        if (max_dist_per_block[block_ix] <= target_distance &&
            max_local_dist <= 1.1 * target_distance) {
          (*block_weight)[block_ix] = 1.0;
        }
      } else {
        constexpr double kLocalMaxWeight = 0.5;
        if (max_dist_per_block[block_ix] <=
            (1 - kLocalMaxWeight) * target_distance +
            kLocalMaxWeight * max_local_dist) {
          continue;
        }
        for (int y = y_min; y < y_max; ++y) {
          for (int x = x_min; x < x_max; ++x) {
            int d = std::max(std::abs(y - block_y), std::abs(x - block_x));
            int ix = y * block_width + x;
            (*block_weight)[ix] = std::max<float>(
                (*block_weight)[ix], 1.0f / (d + 1.0f));
          }
        }
      }
    }
  }
}
    
      // Returns the distance map between the baseline image and the image in the
  // last Compare() call (or the baseline image, if Compare() was not called
  // yet).
  // The dimensions of the distance map are the same as the baseline image.
  // The interpretation of the distance values depend on the comparator used.
  virtual const std::vector<float> distmap() const = 0;
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    ///////////////////////////////////////////////////////////////////////////////
// Constants (15bit precision) and C macros for IDCT vertical pass
    
      tmp0 = in[2 * stride];
  tmp1 = kIDCTMatrix[ 2] * tmp0;
  tmp2 = kIDCTMatrix[10] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    namespace guetzli {
    }
    
    // Handles the packing of bits into output bytes.
struct BitWriter {
  explicit BitWriter(size_t length) : len(length),
                                      data(new uint8_t[len]),
                                      pos(0),
                                      put_buffer(0),
                                      put_bits(64),
                                      overflow(false) {}
    }
    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
    void AddApp0Data(JPEGData* jpg) {
  const unsigned char kApp0Data[] = {
      0xe0, 0x00, 0x10,              // APP0
      0x4a, 0x46, 0x49, 0x46, 0x00,  // 'JFIF'
      0x01, 0x01,                    // v1.01
      0x00, 0x00, 0x01, 0x00, 0x01,  // aspect ratio = 1:1
      0x00, 0x00                     // thumbnail width/height
  };
  jpg->app_data.push_back(
      std::string(reinterpret_cast<const char*>(kApp0Data),
                                 sizeof(kApp0Data)));
}
    
    bool EsdCanClient::Init(const CANCardParameter &parameter) {
  if (!parameter.has_channel_id()) {
    AERROR << 'Init CAN failed: parameter does not have channel id. The '
              'parameter is '
           << parameter.DebugString();
    return false;
  }
  port_ = parameter.channel_id();
  return true;
}
    
    
    {  if (static_cast<size_t>(*frame_num) != frames.size()) {
    AERROR << 'frame num is incorrect.';
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
  for (size_t i = 0; i < frames.size(); ++i) {
    ADEBUG << 'send frame i:' << i;
    ADEBUG << frames[i].CanFrameString();
    frame_info_ << frames[i].CanFrameString();
  }
  ++send_counter_;
  return ErrorCode::OK;
}
    
      CanFrame frame;
  frame.id = 0x60;
  frame.len = 8;
  frame.data[0] = 0;
  EXPECT_EQ(hermes_can.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
    
    std::string SocketCanClientRaw::GetErrorString(const int32_t /*status*/) {
  return '';
}
    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    /**
 * @namespace apollo::drivers::canbus
 * @brief apollo::drivers::canbus
 */
namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    void Byte::set_value(const uint8_t value, const int32_t start_pos,
                     const int32_t length) {
  if (start_pos > BYTE_LENGTH - 1 || start_pos < 0 || length < 1) {
    return;
  }
  int32_t end_pos = std::min(start_pos + length - 1, BYTE_LENGTH - 1);
  int32_t real_len = end_pos + 1 - start_pos;
  uint8_t current_value_low = 0x00;
  if (start_pos > 0) {
    current_value_low = *value_ & RANG_MASK_1_L[start_pos - 1];
  }
  uint8_t current_value_high = *value_ & RANG_MASK_0_L[end_pos];
  uint8_t middle_value = value & RANG_MASK_1_L[real_len - 1];
  middle_value = middle_value << start_pos;
  *value_ = current_value_high + middle_value + current_value_low;
}
    
      /**
   * @brief Get a one-byte unsigned integer representing the consecutive bits
   *        from a specified position (from lowest) by a certain length.
   * @param start_pos The starting position (from lowest) of bits.
   * @param length The length of the selected consecutive bits.
   * @return The one-byte unsigned integer representing the selected bits.
   */
  uint8_t get_byte(const int32_t start_pos, const int32_t length) const;
    
    template <typename SensorType>
void SensorCanbus<SensorType>::Stop() {
  timer_.stop();
    }
    
    // System gflags
DEFINE_string(node_name, 'chassis', 'The chassis module name in proto');
DEFINE_string(canbus_driver_name, 'canbus', 'Driver name.');
    
    #ifndef MODULES_DRIVERS_CANBUS_SENSOR_GFLAGS_H_
#define MODULES_DRIVERS_CANBUS_SENSOR_GFLAGS_H_