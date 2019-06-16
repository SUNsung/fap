
        
          static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    namespace api {
    }
    
    #if defined(OS_LINUX)
#include 'atom/browser/lib/power_observer_linux.h'
#else
#include 'base/power_monitor/power_observer.h'
#endif  // defined(OS_LINUX)
    
    #ifndef ATOM_BROWSER_NET_ASAR_ASAR_PROTOCOL_HANDLER_H_
#define ATOM_BROWSER_NET_ASAR_ASAR_PROTOCOL_HANDLER_H_
    
    URLRequestAboutJob::~URLRequestAboutJob() {}
    
    namespace atom {
    }
    
      // Up until now, the parent process was blocked in a read waiting for the
  // write above to complete. The parent process is now free to exit. Wait for
  // that to happen.
  struct kevent event;
  int events = kevent(kq.get(), nullptr, 0, &event, 1, nullptr);
  if (events != 1) {
    if (events < 0) {
      PLOG(ERROR) << 'kevent (monitor)';
    } else {
      LOG(ERROR) << 'kevent (monitor): unexpected result ' << events;
    }
    return;
  }
    
    // Bech32 is a string encoding format used in newer address types.
// The output consists of a human-readable part (alphanumeric), a
// separator character (1), and a base32 data section, the last
// 6 characters of which are a checksum.
//
// For more information, see BIP 173.
    
        addm	[4*0 + CTX],a
    addm	[4*1 + CTX],b
    addm	[4*2 + CTX],c
    addm	[4*3 + CTX],d
    addm	[4*4 + CTX],e
    addm	[4*5 + CTX],f
    addm	[4*6 + CTX],g
    addm	[4*7 + CTX],h
    
      iter->SeekToLast();
  ASSERT_EQ(IterStatus(iter), 'c->vc');
  iter->Prev();
  ASSERT_EQ(IterStatus(iter), 'b->vb');
  iter->Prev();
  ASSERT_EQ(IterStatus(iter), 'a->va');
  iter->Prev();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
  iter->SeekToLast();
  ASSERT_EQ(IterStatus(iter), 'c->vc');
  iter->Next();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
    
      auto* message1_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena1);
  TestUtil::SetAllFields(message1_on_arena);
  const auto* nested = &message1_on_arena->optional_nested_message();
    
    #include <stdio.h>
#include <string.h>
#include <algorithm>
    
    #include <google/protobuf/stubs/template_util.h>
    
    class DataStripper {
 public:
  void StripMessage(Message *message) {
    std::vector<const FieldDescriptor*> set_fields;
    const Reflection* reflection = message->GetReflection();
    reflection->ListFields(*message, &set_fields);
    }
    }
    
    std::string ReadFile(const std::string& name) {
  std::ifstream file(name.c_str());
  GOOGLE_CHECK(file.is_open()) << 'Couldn't find file ''
      << name
      << '', please make sure you are running this command from the benchmarks'
      << ' directory.\n';
  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace objectivec {
    }
    }
    }
    }
    
    
    {}  // namespace tesseract

    
    #ifndef TESSERACT_CCMAIN_PARAGRAPHS_H_
#define TESSERACT_CCMAIN_PARAGRAPHS_H_
    
      // Constrained fit with a supplied direction vector. Finds the best line_pt,
  // that is one of the supplied points having the median cross product with
  // direction, ignoring points that have a cross product outside of the range
  // [min_dist, max_dist]. Returns the resulting error metric using the same
  // reduced set of points.
  // *Makes use of floating point arithmetic*
  double ConstrainedFit(const FCOORD& direction,
                        double min_dist, double max_dist,
                        bool debug, ICOORD* line_pt);
    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    // Computes the Otsu threshold(s) for the given image rectangle, making one
// for each channel. Each channel is always one byte per pixel.
// Returns an array of threshold values and an array of hi_values, such
// that a pixel value >threshold[channel] is considered foreground if
// hi_values[channel] is 0 or background if 1. A hi_value of -1 indicates
// that there is no apparent foreground. At least one hi_value will not be -1.
// Delete thresholds and hi_values with delete [] after use.
// The return value is the number of channels in the input image, being
// the size of the output thresholds and hi_values arrays.
int OtsuThreshold(Pix* src_pix, int left, int top, int width, int height,
                  int** thresholds, int** hi_values);
    
    
    {    void full_print(FILE *fp);
};
    
    class AutoCompactTest {
 public:
  AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    }
    
      void Build(int n) {
    std::string key_space, value_space;
    WriteBatch batch;
    for (int i = 0; i < n; i++) {
      // if ((i % 100) == 0) fprintf(stderr, '@ %d of %d\n', i, n);
      Slice key = Key(i, &key_space);
      batch.Clear();
      batch.Put(key, Value(i, &value_space));
      WriteOptions options;
      // Corrupt() doesn't work without this sync on windows; stat reports 0 for
      // the file size.
      if (i == n - 1) {
        options.sync = true;
      }
      ASSERT_OK(db_->Write(options, &batch));
    }
  }
    
    template <typename Key, class Comparator>
inline void SkipList<Key, Comparator>::Iterator::Next() {
  assert(Valid());
  node_ = node_->Next(0);
}
    
    // A Table is a sorted map from strings to strings.  Tables are
// immutable and persistent.  A Table may be safely accessed from
// multiple threads without external synchronization.
class LEVELDB_EXPORT Table {
 public:
  // Attempt to open the table that is stored in bytes [0..file_size)
  // of 'file', and read the metadata entries necessary to allow
  // retrieving data from the table.
  //
  // If successful, returns ok and sets '*table' to the newly opened
  // table.  The client should delete '*table' when no longer needed.
  // If there was an error while initializing the table, sets '*table'
  // to nullptr and returns a non-ok status.  Does not take ownership of
  // '*source', but the client must ensure that 'source' remains live
  // for the duration of the returned table's lifetime.
  //
  // *file must remain live while this Table is in use.
  static Status Open(const Options& options, RandomAccessFile* file,
                     uint64_t file_size, Table** table);
    }
    
      BlockBuilder(const BlockBuilder&) = delete;
  BlockBuilder& operator=(const BlockBuilder&) = delete;
    
    uint64_t TableBuilder::NumEntries() const { return rep_->num_entries; }
    
    /*!
 * \brief Thread pool.
 */
class ThreadPool {
 public:
  /*! \brief Signal event upon destruction, even for exceptions (RAII) */
  struct SetReadyOnDestroy {
    explicit inline SetReadyOnDestroy(const std::shared_ptr<dmlc::ManualEvent>& event)
      : event_(event) {
    }
    inline ~SetReadyOnDestroy() {
      if (event_) {
        event_->signal();
      }
    }
    std::shared_ptr<dmlc::ManualEvent>  event_;
  };
    }
    
    #include <algorithm>
#include <vector>
#include './bilinear_sampler-inl.h'
namespace mxnet {
namespace op {
#if defined(__CUDACC__) && MXNET_USE_CUDNN == 1 && CUDNN_MAJOR >= 5
template<typename DType>
class CuDNNBilinearSamplerOp : public Operator {
 public:
  explicit CuDNNBilinearSamplerOp(BilinearSamplerParam param) {
    this->param_ = param;
    init_cudnn_ = false;
    dtype_ = mshadow::DataType<DType>::kCudnnFlag;
    sampler_ = CUDNN_SAMPLER_BILINEAR;
  }
    }
    }
    }
    
    
    {    for (int i = 0; i < size_; ++i) {
      Shape<3> dshape = Shape3(leading, in_grad[i].shape_[axis], trailing);
      grad_in[i] = in_grad[i].get_with_shape<xpu, 3, DType>(dshape, s);
    }
    Split(grad, &grad_in, 1, req);
  }
    
    namespace CNTK
{
    class ProgressWriter::Impl
    {
    public:
        Impl(size_t updateWriteFrequency, size_t firstUpdatesToWrite)
            : m_frequency(updateWriteFrequency), m_firstN(firstUpdatesToWrite),
            m_totalUpdates(0), m_totalSummaries(0)
        {
            Reset();
        }
    }
    }
    
                if ((numSequences > 1) && (currentSequenceData->Device() != DeviceDescriptor::CPUDevice()))
                InvalidArgument('Value::Create: All NDArrayView objects must be located on the CPU');
    
    using namespace std;
    
    class Clock
{
public:
    static long long GetTimeStamp();
    static long long GetTicksPerSecond();
};
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            // rather than search for all matches, only try 4 candidate locations,
        // chosen based on 4 different hash functions of different lengths.
        // this strategy is inspired by LZO; hashing is unrolled here using the
        // 'hc' macro
        h = stb__hc3(q,0, 1, 2); h1 = STB__SCRAMBLE(h);
        t = chash[h1]; if (t) STB__TRY(t,0);
        h = stb__hc2(q,h, 3, 4); h2 = STB__SCRAMBLE(h);
        h = stb__hc2(q,h, 5, 6);        t = chash[h2]; if (t) STB__TRY(t,1);
        h = stb__hc2(q,h, 7, 8); h3 = STB__SCRAMBLE(h);
        h = stb__hc2(q,h, 9,10);        t = chash[h3]; if (t) STB__TRY(t,1);
        h = stb__hc2(q,h,11,12); h4 = STB__SCRAMBLE(h);
        t = chash[h4]; if (t) STB__TRY(t,1);
    
    // About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually.
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad.
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/gl3w.h>    // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>    // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#else
#include IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#endif
    
            // Start the Dear ImGui frame
        ImGui_ImplDX10_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    using namespace rocksdb;
    
    namespace {
// A dummy compaction filter
class DummyCompactionFilter : public CompactionFilter {
 public:
  virtual ~DummyCompactionFilter() {}
  virtual bool Filter(int level, const Slice& key, const Slice& existing_value,
                      std::string* new_value, bool* value_changed) const {
    return false;
  }
  virtual const char* Name() const { return 'DummyCompactionFilter'; }
};
    }
    
    #include <cstdio>
#include <string>
    
    
    {
    {}  // namespace experimental
}  // namespace rocksdb

    
    namespace rocksdb {
    }
    
      OptimisticTransactionDB(const OptimisticTransactionDB&) = delete;
  void operator=(const OptimisticTransactionDB&) = delete;