
        
          // Convert output shapes.
  output_tensor_shape_protos->resize(c.num_outputs());
  CppShapeInferenceResult out;
  for (int i = 0; i < c.num_outputs(); ++i) {
    out.Clear();
    ProtoFromShapeHandle(c.output(i), &c, out.mutable_shape());
    }
    
    class TestRandomAccessFile : public RandomAccessFile {
  // The file contents is 10 bytes of all A's
  Status Read(uint64 offset, size_t n, StringPiece* result,
              char* scratch) const override {
    Status s;
    for (int i = 0; i < n; ++i) {
      if (offset + i >= 10) {
        n = i;
        s = errors::OutOfRange('EOF');
        break;
      }
      scratch[i] = 'A';
    }
    *result = StringPiece(scratch, n);
    return s;
  }
};
    
    
    {  if (debug) {
    const OpRegistrationData* op_reg_data;
    Status status = OpRegistry::Global()->LookUp(node->op(), &op_reg_data);
    if (!status.ok()) {
      os << '\tCouldn't find op registration for ' << node->op() << std::endl;
    } else if (!op_reg_data->shape_inference_fn) {
      os << '\tCouldn't find shape function for op ' << node->op() << std::endl;
    } else if (properties.HasInputProperties(node->name())) {
      const std::vector<OpInfo::TensorProperties>& props =
          properties.GetInputProperties(node->name());
      for (int i = 0; i < props.size(); ++i) {
        const OpInfo::TensorProperties& prop = props[i];
        if (prop.has_value()) {
          os << '\t'
             << 'input ' << i << ' (' << DataTypeString(prop.dtype())
             << ') has known value' << std::endl;
        }
      }
    }
  }
}
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_

    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_
    
    PyObject* PyExceptionRegistry::Lookup(TF_Code code) {
  DCHECK(singleton_ != nullptr) << 'Must call PyExceptionRegistry::Init() '
                                   'before PyExceptionRegistry::Lookup()';
  DCHECK_NE(code, TF_OK);
  DCHECK(singleton_->exc_types_.find(code) != singleton_->exc_types_.end())
      << 'Unknown error code passed to PyExceptionRegistry::Lookup: ' << code;
  return singleton_->exc_types_[code];
}
    
    // Global registry mapping C API error codes to the corresponding custom Python
// exception type. This is used to expose the exception types to C extension
// code (i.e. so we can raise custom exceptions via SWIG).
//
// Init() must be called exactly once at the beginning of the process before
// Lookup() can be used.
//
// Example usage:
//   TF_Status* status = TF_NewStatus();
//   TF_Foo(..., status);
//
//   if (TF_GetCode(status) != TF_OK) {
//     PyObject* exc_type = PyExceptionRegistry::Lookup(TF_GetCode(status));
//     // Arguments to OpError base class. Set `node_def` and `op` to None.
//     PyObject* args =
//       Py_BuildValue('sss', nullptr, nullptr, TF_Message(status));
//     PyErr_SetObject(exc_type, args);
//     Py_DECREF(args);
//     TF_DeleteStatus(status);
//     return NULL;
//   }
class PyExceptionRegistry {
 public:
  // Initializes the process-wide registry. Should be called exactly once near
  // the beginning of the process. The arguments are the various Python
  // exception types (e.g. `cancelled_exc` corresponds to
  // errors.CancelledError).
  static void Init(PyObject* code_to_exc_type_map);
    }
    
    struct PyDecrefDeleter {
  void operator()(PyObject* p) const { Py_DECREF(p); }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/format.hpp'
#include 'caffe/util/math_functions.hpp'
    
    /*!
@brief Fills a Blob with coefficients for bilinear interpolation.
    
      virtual inline const char* type() const { return 'AbsVal'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    namespace caffe {
    }
    
    #include <vector>
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
      virtual inline const char* type() const { return 'Concat'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    
    {  int size_;
  Dtype alpha_, beta_, k_;
};
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {
    {}}
    
    
    {
    {
    {
    {          std::transform(
            begin(inputs) + start, begin(inputs) + stop,
            retMem + start,
            func
          );
        }
      } catch (const std::runtime_error& e) {
        std::fprintf(stderr,
          'worker thread exited with exception: %s\n', e.what());
        failed = true;
      }
    }));
  }
    
    
    {
    {}}
    
      if (HPHP::jit::deltaFits(imm64, HPHP::sz::word)) {
    // immediate has only low 16 bits set, use simple load immediate
    li(rt, static_cast<int16_t>(imm64));
    if (imm64 & (1ULL << 15) && !(imm64 & (1ULL << 16))) {
      // clear extended sign that should not be set
      // (32bits number. Sets the 16th bit but not the 17th, it's not negative!)
      clrldi(rt, rt, 48);
      missing = kLi64Len - 2 * instr_size_in_bytes;
    } else {
      missing = kLi64Len - 1 * instr_size_in_bytes;
    }
  } else if (HPHP::jit::deltaFits(imm64, HPHP::sz::dword)) {
    // immediate has only low 32 bits set
    lis(rt, static_cast<int16_t>(imm64 >> 16));
    ori(rt, rt, static_cast<int16_t>(imm64 & UINT16_MAX));
    if (imm64 & (1ULL << 31) && !(imm64 & (1ULL << 32))) {
      // clear extended sign
      // (64bits number. Sets the 32th bit but not the 33th, it's not negative!)
      clrldi(rt, rt, 32);
      missing = kLi64Len - 3 * instr_size_in_bytes;
    } else {
      missing = kLi64Len - 2 * instr_size_in_bytes;
    }
  } else if (imm64 >> 48 == 0) {
    // immediate has only low 48 bits set
    lis(rt, static_cast<int16_t>(imm64 >> 32));
    ori(rt, rt, static_cast<int16_t>((imm64 >> 16) & UINT16_MAX));
    sldi(rt,rt,16);
    ori(rt, rt, static_cast<int16_t>(imm64 & UINT16_MAX));
    if (imm64 & (1ULL << 47)) {
      // clear extended sign
      clrldi(rt, rt, 16);
    } else {
      missing = kLi64Len - 4 * instr_size_in_bytes;
    }
  } else {
    // load all 64 bits
    lis(rt, static_cast<int16_t>(imm64 >> 48));
    ori(rt, rt, static_cast<int16_t>((imm64 >> 32) & UINT16_MAX));
    sldi(rt,rt,32);
    oris(rt, rt, static_cast<int16_t>((imm64 >> 16) & UINT16_MAX));
    ori(rt, rt, static_cast<int16_t>(imm64 & UINT16_MAX));
  }
    
    template <class Action>
bool runRelative(std::string suffix, String cmd,
                 const char* currentDir, Action action) {
  suffix = '/' + suffix;
  auto cwd = resolve_include(
    cmd,
    currentDir,
    [] (const String& f, void*) { return access(f.data(), R_OK) == 0; },
    nullptr
  );
  if (cwd.isNull()) return false;
  do {
    cwd = f_dirname(cwd);
    auto const f = String::attach(
      StringData::Make(cwd.data(), suffix.data())
    );
    if (action(f)) return true;
  } while (!cwd.empty() && !cwd.equal(s_slash));
  return false;
}
    
    
    
    
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    {   ~mem_block_cache()
   {
      while(next)
      {
         mem_block_node* old = next;
         next = next->next;
         ::operator delete(old);
      }
   }
   void* get()
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
     if(next)
      {
         mem_block_node* result = next;
         next = next->next;
         --cached_blocks;
         return result;
      }
      return ::operator new(BOOST_REGEX_BLOCKSIZE);
   }
   void put(void* p)
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
      if(cached_blocks >= BOOST_REGEX_MAX_CACHE_BLOCKS)
      {
         ::operator delete(p);
      }
      else
      {
         mem_block_node* old = static_cast<mem_block_node*>(p);
         old->next = next;
         next = old;
         ++cached_blocks;
      }
   }
};
    
    template <class traits, class charT, class Formatter>
std::basic_string<charT> regex_replace(const std::basic_string<charT>& s,
                         const basic_regex<charT, traits>& e, 
                         Formatter fmt,
                         match_flag_type flags = match_default)
{
   std::basic_string<charT> result;
   BOOST_REGEX_DETAIL_NS::string_out_iterator<std::basic_string<charT> > i(result);
   regex_replace(i, s.begin(), s.end(), e, fmt, flags);
   return result;
}
    
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
    
      Status update(const std::string& source, const ParserConfig& config) override;
    
    #include 'osquery/tests/test_util.h'
    
    #include 'osquery/tests/test_util.h'
    
    
    { private:
  const std::string kConfigViews = 'config_views.';
};
    
    class CompactedDBImpl : public DBImpl {
 public:
  CompactedDBImpl(const DBOptions& options, const std::string& dbname);
  virtual ~CompactedDBImpl();
    }
    
      int64_t num_record_drop_hidden = 0;
  int64_t num_record_drop_obsolete = 0;
  int64_t num_record_drop_range_del = 0;
  int64_t num_range_del_drop_obsolete = 0;
  // Deletions obsoleted before bottom level due to file gap optimization.
  int64_t num_optimized_del_drop_obsolete = 0;
  uint64_t total_filter_time = 0;
    
      // Write 100K keys, these are written to a few files in L0.
  const std::string value(10, 'x');
  for (int i = 0; i < 100000; i++) {
    char key[100];
    snprintf(key, sizeof(key), 'B%010d', i);
    Put(1, key, value);
  }
  ASSERT_OK(Flush(1));
    
      rocksdb::SyncPoint::GetInstance()->LoadDependency({
      {'CompactionJob::Run():Start', 'DynamicLevelMaxBytesBase2:0'},
      {'DynamicLevelMaxBytesBase2:1', 'CompactionJob::Run():End'},
      {'DynamicLevelMaxBytesBase2:compact_range_finish',
       'FlushJob::WriteLevel0Table'},
  });
  rocksdb::SyncPoint::GetInstance()->EnableProcessing();
    
      using DBImpl::Flush;
  virtual Status Flush(const FlushOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
    
    class WriteControllerToken {
 public:
  explicit WriteControllerToken(WriteController* controller)
      : controller_(controller) {}
  virtual ~WriteControllerToken() {}
    }
    
    class TimeSetEnv : public EnvWrapper {
 public:
  explicit TimeSetEnv() : EnvWrapper(nullptr) {}
  uint64_t now_micros_ = 6666;
  virtual uint64_t NowNanos() override { return now_micros_ * std::milli::den; }
};
    
    // Used for reading a file from HDFS. It implements both sequential-read
// access methods as well as random read access methods.
class HdfsReadableFile : virtual public SequentialFile,
                         virtual public RandomAccessFile {
 private:
  hdfsFS fileSys_;
  std::string filename_;
  hdfsFile hfile_;
    }
    
    bool IsSectorAligned(const size_t off, size_t sector_size) {
  return off % sector_size == 0;
}
    
    class DHTMessageCallback;
    
      Time getSerializedTime() const { return serializedTime_; }
    
      // localnode
  // 8bytes reserved
  WRITE_CHECK(fp, zero, 8);
  // 20bytes localnode ID
  WRITE_CHECK(fp, localNode_->getID(), DHT_ID_LENGTH);
  // 4bytes reserved
  WRITE_CHECK(fp, zero, 4);
    
    
    {} // namespace aria2
    
        factory->setRoutingTable(routingTable.get());
    factory->setConnection(connection.get());
    factory->setMessageDispatcher(dispatcher.get());
    factory->setPeerAnnounceStorage(peerAnnounceStorage.get());
    factory->setTokenTracker(tokenTracker.get());
    factory->setLocalNode(localNode);
    factory->setBtRegistry(e->getBtRegistry().get());
    
    #endif // D_DHT_SETUP_H

    
    public:
  DHTTokenTracker();
    
    namespace aria2 {
    }