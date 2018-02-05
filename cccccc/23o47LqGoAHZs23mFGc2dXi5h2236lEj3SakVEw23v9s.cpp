
        
        
    {}  // namespace tensorflow

    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/grappler/costs/cost_estimator.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/threadpool.h'
#include 'tensorflow/core/platform/types.h'
    
    // Prune a model to make it more efficient:
// * Remove unnecessary operations.
// * Optimize gradient computations.
class ModelPruner : public GraphOptimizer {
 public:
  ModelPruner() {}
  ~ModelPruner() override {}
    }
    
    namespace tensorflow {
    }
    
    #include <deque>
#include <vector>
    
    #include 'tensorflow/core/lib/core/coding.h'
#include 'tensorflow/core/lib/hash/crc32c.h'
#include 'tensorflow/core/lib/io/compression.h'
#include 'tensorflow/core/platform/env.h'
    
    /** scalar_tanh_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a tanh
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::tanh_fast_derivative()
  */
template <typename T>
struct scalar_tanh_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_tanh_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return one - (y * y);
  }
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {    input_buffer_.reset(new io::InputBuffer(file_.get(), kBufferSize));
    for (; line_number_ < skip_header_lines_; ++line_number_) {
      string line_contents;
      Status status = input_buffer_->ReadLine(&line_contents);
      if (errors::IsOutOfRange(status)) {
        // We ignore an end of file error when skipping header lines.
        // We will end up skipping this file.
        return Status::OK();
      }
      TF_RETURN_IF_ERROR(status);
    }
    return Status::OK();
  }
    
    namespace api {
    }
    
    
    {
    {    // We really should be dead by now.  For whatever reason, we're not. Exit
    // immediately, with the exit status set to the signal number with bit 8
    // set.  On the systems that we care about, this exit status is what is
    // normally used to indicate an exit by this signal's default handler.
    // This mechanism isn't a de jure standard, but even in the worst case, it
    // should at least result in an immediate exit.
    RAW_LOG(WARNING, 'Still here, exiting really ungracefully.');
    _exit(signal | (1 << 7));
  }
  ExitPosted();
}
    
    #endif  // ATOM_BROWSER_RELAUNCHER_H_

    
    #include 'base/files/file_util.h'
#include 'base/files/scoped_file.h'
#include 'base/logging.h'
#include 'base/posix/eintr_wrapper.h'
#include 'base/process/launch.h'
    
      // PID 1 identifies init. launchd, that is. launchd never starts the
  // relauncher process directly, having this parent_pid means that the parent
  // already exited and launchd 'inherited' the relauncher as its child.
  // There's no reason to synchronize with launchd.
  if (parent_pid == 1) {
    LOG(ERROR) << 'unexpected parent_pid';
    return;
  }
    
    
    {  UpdateCache();
  process->Send(new AtomMsg_UpdatePreferences(cached_entries_));
}
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    namespace nwapi {
    }
    
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
    
    // Popup menus may get squished if they open up too close to the bottom of the
// screen. This function takes the size of the screen, the size of the menu,
// an optional widget, the Y position of the mouse click, and adjusts the popup
// menu's Y position to make it fit if it's possible to do so.
// Returns the new Y position of the popup menu.
int CalculateMenuYPosition(const GdkRectangle* screen_rect,
                           const GtkRequisition* menu_req,
                           GtkWidget* widget, const int y) {
  CHECK(screen_rect);
  CHECK(menu_req);
  // If the menu would run off the bottom of the screen, and there is enough
  // screen space upwards to accommodate the menu, then pop upwards. If there
  // is a widget, then also move the anchor point to the top of the widget
  // rather than the bottom.
  const int screen_top = screen_rect->y;
  const int screen_bottom = screen_rect->y + screen_rect->height;
  const int menu_bottom = y + menu_req->height;
  int alternate_y = y - menu_req->height;
  if (widget) {
    GtkAllocation allocation;
    gtk_widget_get_allocation(widget, &allocation);
    alternate_y -= allocation.height;
  }
  if (menu_bottom >= screen_bottom && alternate_y >= screen_top)
    return alternate_y;
  return y;
}
    
    
    {
  DECLARE_EXTENSION_FUNCTION('nw.App.getArgvSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetArgvSyncFunction);
};
    
    class NwClipboardSetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardSetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #include          'ocrblock.h'
#include          'ocrrow.h'
#include          'werd.h'
#include          'rect.h'
#include          'params.h'
#include          'tesseractclass.h'
    
      //  Recognize the pieces in turn.
  int saved_cp_multiplier = classify_class_pruner_multiplier;
  int saved_im_multiplier = classify_integer_matcher_multiplier;
  if (prefix) {
    // Turn off Tesseract's y-position penalties for the leading superscript.
    classify_class_pruner_multiplier.set_value(0);
    classify_integer_matcher_multiplier.set_value(0);
    }
    
    CCStruct::CCStruct() {}
    
    
/**********************************************************************
 * operator*
 *
 * Scalar multiply of an ICOORD.
 **********************************************************************/
    
      // Returns the covariance.
  double covariance() const {
    if (total_weight > 0.0)
      return (sigxy - sigx * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
  double x_variance() const {
    if (total_weight > 0.0)
      return (sigxx - sigx * sigx / total_weight) / total_weight;
    else
      return 0.0;
  }
  double y_variance() const {
    if (total_weight > 0.0)
      return (sigyy - sigy * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
    
    
    { private:
  tesseract::ParagraphJustification justification_;
  int margin_;
  int first_indent_;
  int body_indent_;
  int tolerance_;
};
    
    ELISTIZE (ROW)
/**********************************************************************
 * ROW::ROW
 *
 * Constructor to build a ROW. Only the stats stuff are given here.
 * The words are added directly.
 **********************************************************************/
ROW::ROW (                       //constructor
inT32 spline_size,               //no of segments
inT32 * xstarts,                 //segment boundaries
double *coeffs,                  //coefficients
float x_height,                  //line height
float ascenders,                 //ascender size
float descenders,                //descender drop
inT16 kern,                      //char gap
inT16 space                      //word gap
)
    : baseline(spline_size, xstarts, coeffs),
      para_(NULL) {
  kerning = kern;                //just store stuff
  spacing = space;
  xheight = x_height;
  ascrise = ascenders;
  bodysize = 0.0f;
  descdrop = descenders;
  has_drop_cap_ = false;
  lmargin_ = 0;
  rmargin_ = 0;
}
    
      explicit WorkloadStats(State guardedState);
  ~WorkloadStats();
    
      switch (ar.tag()) {
  case T::Packed:
    for (auto i = uint32_t{0}; i < ar.size(); ++i) {
      ret += show(ar.packedElem(i));
      if (i != ar.size() - 1) ret += ',';
    }
    break;
  case T::PackedN:
    folly::format(&ret, '[{}]', show(ar.elemType()));
    break;
  }
    
      if (!getenv('HHVM_JIT_TIMER_NO_SORT')) {
    auto totalSort = [] (const TimerName& a, const TimerName& b) {
      return s_counters[a.name].total > s_counters[b.name].total;
    };
    std::sort(begin(names_copy), end(names_copy), totalSort);
  }
    
    
static void HHVM_METHOD(GMP, unserialize,
                        const Variant& data) {
  String serialData = data.toString();
  VariableUnserializer unserializer(serialData.data(),
                                    serialData.length(),
                                    VariableUnserializer::Type::Serialize);
    }
    
    #include <boost/dynamic_bitset.hpp>
#include <folly/Range.h>
#include <iosfwd>
    
        case KindOfDict:
      source->m_type = KindOfPersistentDict;
      // Fall-through.
    case KindOfPersistentDict: {
      auto& ad = source->m_data.parr;
      assert(ad->isDict());
      if (ad->isStatic()) break;
      else if (ad->empty()) ad = staticEmptyDictArray();
      else ad = MixedArray::MakeUncounted(ad);
      break;
    }
    
    
    {  return std::shared_ptr<Reporter>(composite_reporter);
}
    
    namespace grpc {
namespace testing {
    }
    }
    
    #include 'src/core/lib/compression/compression_internal.h'
    
    #include <string.h>
    
    
    {
    {                grpc_compression_algorithm_to_message_compression_algorithm(
                    reader->buffer_in->data.raw.compression),
                &reader->buffer_in->data.raw.slice_buffer,
                &decompressed_slices_buffer) == 0) {
          gpr_log(GPR_ERROR,
                  'Unexpected error decompressing data for algorithm with enum '
                  'value '%d'.',
                  reader->buffer_in->data.raw.compression);
          memset(reader, 0, sizeof(*reader));
          return 0;
        } else { /* all fine */
          reader->buffer_out =
              grpc_raw_byte_buffer_create(decompressed_slices_buffer.slices,
                                          decompressed_slices_buffer.count);
        }
        grpc_slice_buffer_destroy_internal(&decompressed_slices_buffer);
      } else { /* not compressed, use the input buffer as output */
        reader->buffer_out = reader->buffer_in;
      }
      reader->current.index = 0;
      break;
  }
    
      rc->path = grpc_mdelem_from_slices(
      GRPC_MDSTR_PATH,
      grpc_slice_intern(grpc_slice_from_static_string(method)));
  rc->authority =
      host ? grpc_mdelem_from_slices(
                 GRPC_MDSTR_AUTHORITY,
                 grpc_slice_intern(grpc_slice_from_static_string(host)))
           : GRPC_MDNULL;
  gpr_mu_lock(&channel->registered_call_mu);
  rc->next = channel->registered_calls;
  channel->registered_calls = rc;
  gpr_mu_unlock(&channel->registered_call_mu);
    
    const uint32_t message_prefix_length = 8;
const uint32_t stream_prefix_length = 7;
static void test_algorithm_mesh(void) {
  int i;
    }
    
    static void test_bad_decompression_data_crc(void) {
  grpc_slice_buffer input;
  grpc_slice_buffer corrupted;
  grpc_slice_buffer output;
  size_t idx;
  const uint32_t bad = 0xdeadbeef;
    }
    
      error =
      grpc_server_request_call(f.server, &s, &call_details,
                               &request_metadata_recv, f.cq, f.cq, tag(101));
  GPR_ASSERT(GRPC_CALL_OK == error);
  CQ_EXPECT_COMPLETION(cqv, tag(101), 1);
  cq_verify(cqv);
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
    
    {  static void SetFileLimits(int read_only_file_limit, int mmap_limit) {
    EnvPosixTestHelper::SetReadOnlyFDLimit(read_only_file_limit);
    EnvPosixTestHelper::SetReadOnlyMMapLimit(mmap_limit);
  }
};
    
    #endif  // STORAGE_LEVELDB_DB_SNAPSHOT_H_

    
      void SetComparatorName(const Slice& name) {
    has_comparator_ = true;
    comparator_ = name.ToString();
  }
  void SetLogNumber(uint64_t num) {
    has_log_number_ = true;
    log_number_ = num;
  }
  void SetPrevLogNumber(uint64_t num) {
    has_prev_log_number_ = true;
    prev_log_number_ = num;
  }
  void SetNextFile(uint64_t num) {
    has_next_file_number_ = true;
    next_file_number_ = num;
  }
  void SetLastSequence(SequenceNumber seq) {
    has_last_sequence_ = true;
    last_sequence_ = seq;
  }
  void SetCompactPointer(int level, const InternalKey& key) {
    compact_pointers_.push_back(std::make_pair(level, key));
  }
    
    TEST(FindFileTest, OverlapSequenceChecks) {
  Add('200', '200', 5000, 3000);
  ASSERT_TRUE(! Overlaps('199', '199'));
  ASSERT_TRUE(! Overlaps('201', '300'));
  ASSERT_TRUE(Overlaps('200', '200'));
  ASSERT_TRUE(Overlaps('190', '200'));
  ASSERT_TRUE(Overlaps('200', '210'));
}
    
    
    {}  // namespace leveldb

    
    #include 'table/block_builder.h'
    
    
    {  // No copying allowed
  FilterBlockBuilder(const FilterBlockBuilder&);
  void operator=(const FilterBlockBuilder&);
};
    
      // We might want to use a heap in case there are lots of children.
  // For now we use a simple array since we expect a very small number
  // of children in leveldb.
  const Comparator* comparator_;
  IteratorWrapper* children_;
  int n_;
  IteratorWrapper* current_;