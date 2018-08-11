
        
        namespace swift {
    }
    
      ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart,
                     TargetStart + 1, llvm::lenientConversion);
  if (TargetStart == &C) {
    // The source string contains an ill-formed subsequence at the end.
    return false;
  }
    
      Optional<const swift::markup::ReturnsField * >getReturnsField() const {
    return Parts.ReturnsField;
  }
    
      virtual void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                                DiagnosticKind Kind,
                                StringRef FormatString,
                                ArrayRef<DiagnosticArgument> FormatArgs,
                                const DiagnosticInfo &Info) override;
    
    #endif

    
      virtual bool enableWarnings() { return false; }
  virtual bool indexLocals() { return false; }
    
      /// The name of the buffer, which should be the absolute path of the input
  /// filename.
  const StringRef BufferName;
    
    #endif

    
    // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
    #include 'content/nw/src/api/menu/menu.h'
    
    class NwAppQuitFunction : public UIThreadExtensionFunction {
 public:
  NwAppQuitFunction();
    }
    
    class NwClipboardGetListSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardGetListSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #include 'extensions/browser/extension_function.h'
    
    // exact copy of Reader, renamed to OurReader
class OurReader {
public:
  typedef char Char;
  typedef const Char* Location;
  struct StructuredError {
    size_t offset_start;
    size_t offset_limit;
    std::string message;
  };
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    void RepeatedPrimitiveFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $name$_.GetHashCode();\n');
}
void RepeatedPrimitiveFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
void RepeatedPrimitiveFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    namespace google {
namespace protobuf {
namespace {
TEST(Status, Empty) {
  util::Status status;
  EXPECT_EQ(util::error::OK, util::Status::OK.error_code());
  EXPECT_EQ('OK', util::Status::OK.ToString());
}
    }
    }
    }
    
    // dims=[5, 4, 3, 2]->[4, 3, 5, 2]
TEST_F(MatrixTest, RotatingTranspose_0_2) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 0, 2, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][24, 25][48, 49][72, 73][96, 97]]
  //                 [[2, 3][26, 27][50, 51][74, 75][98, 99]]
  //                 [[4, 5][28, 29][52, 53][76, 77][100, 101]]]
  //                [[[6, 7]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(24, m(1, 0));
  EXPECT_EQ(25, m(1, 1));
  EXPECT_EQ(96, m(4, 0));
  EXPECT_EQ(97, m(4, 1));
  EXPECT_EQ(2, m(5, 0));
  EXPECT_EQ(6, m(15, 0));
}
    
      /**
   * Returns the type of the current block. See apitypes.h for
   * PolyBlockType.
   */
  PolyBlockType BlockType() const;
    
      // Returns the size of the compact charset space.
  int CompactCharsetSize() const;
  // Returns the size of the sparse charset space.
  int SparseCharsetSize() const;
    
      // Converts a float network to an int network. Each set of input weights that
  // corresponds to a single output weight is converted independently:
  // Compute the max absolute value of the weight set.
  // Scale so the max absolute value becomes INT8_MAX.
  // Round to integer.
  // Store a multiplicative scale factor (as a float) that will reproduce
  //   the original value, subject to rounding errors.
  void ConvertToInt();
  // Returns the size rounded up to an internal factor used by the SIMD
  // implementation for its input.
  int RoundInputs(int size) const {
    if (multiplier_ == nullptr) return size;
    return multiplier_->RoundInputs(size);
  }
    
    struct CrackPos {
  CRACKEDGE** free_cracks;   // Freelist for fast allocation.
  int x;                     // Position of new edge.
  int y;
};
    
    // Add the partition to this WorkingPartSet. Unrelated partitions are
// stored in the order in which they are received, but if the partition
// has a SingletonPartner, make sure that it stays with its partner.
void WorkingPartSet::AddPartition(ColPartition* part) {
  ColPartition* partner = part->SingletonPartner(true);
  if (partner != nullptr) {
    ASSERT_HOST(partner->SingletonPartner(false) == part);
  }
  if (latest_part_ == nullptr || partner == nullptr) {
    // This partition goes at the end of the list
    part_it_.move_to_last();
  } else if (latest_part_->SingletonPartner(false) != part) {
    // Reposition the iterator to the correct partner, or at the end.
    for (part_it_.move_to_first(); !part_it_.at_last() &&
         part_it_.data() != partner;
         part_it_.forward());
  }
  part_it_.add_after_then_move(part);
  latest_part_ = part;
}
    
      if (!getenv('HHVM_JIT_TIMER_NO_SORT')) {
    auto totalSort = [] (const TimerName& a, const TimerName& b) {
      return s_counters[a.name].total > s_counters[b.name].total;
    };
    std::sort(begin(names_copy), end(names_copy), totalSort);
  }
    
    SlowTimer::SlowTimer(int64_t msThreshold, const char *location, const char *info)
  : m_timer(Timer::WallTime), m_msThreshold(msThreshold) {
  if (location) m_location = location;
  if (info) m_info = info;
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    /*
 * Determine the next NUMA node according to state maintained in `curr_node`.
 */
int next_numa_node(std::atomic_int& curr_node);
/*
 * The number of numa nodes in the system
 */
inline int num_numa_nodes() {
  return use_numa ? numa_num_nodes : 1;
}
/*
 * Enable numa interleaving for the specified address range
 */
void numa_interleave(void* start, size_t size);
/*
 * Allocate the specified address range on the given node
 */
void numa_bind_to(void* start, size_t size, int node);
/*
 * Return true if node is part of the allowed set of numa nodes
 */
inline bool numa_node_allowed(int node) {
  if (numa_node_set == 0) return true;
  return numa_node_set & (1u << node);
}
    
      bool autoloadFunc(StringData* name);
  bool autoloadConstant(StringData* name);
  bool autoloadType(const String& name);
  bool setMap(const Array& map, const String& root);
  DECLARE_STATIC_REQUEST_LOCAL(AutoloadHandler, s_instance);
    
      bool isLiteral() const;
  bool matches(const StringData* subject, int pos, int* offsets) const;
    
    #ifndef __APPLE__ // XXX: this affects codegen quality but not correctness
static_assert(
  sizeof(unique_ptr<int>) == sizeof(std::unique_ptr<int>),
  'req::unique_ptr pointer should not be larger than std::unique_ptr'
);
#endif
    
    std::string Histogram::ToString() const {
  std::string r;
  char buf[200];
  snprintf(buf, sizeof(buf),
           'Count: %.0f  Average: %.4f  StdDev: %.2f\n',
           num_, Average(), StandardDeviation());
  r.append(buf);
  snprintf(buf, sizeof(buf),
           'Min: %.4f  Median: %.4f  Max: %.4f\n',
           (num_ == 0.0 ? 0.0 : min_), Median(), max_);
  r.append(buf);
  r.append('------------------------------------------------------\n');
  const double mult = 100.0 / num_;
  double sum = 0;
  for (int b = 0; b < kNumBuckets; b++) {
    if (buckets_[b] <= 0.0) continue;
    sum += buckets_[b];
    snprintf(buf, sizeof(buf),
             '[ %7.0f, %7.0f ) %7.0f %7.3f%% %7.3f%% ',
             ((b == 0) ? 0.0 : kBucketLimit[b-1]),      // left
             kBucketLimit[b],                           // right
             buckets_[b],                               // count
             mult * buckets_[b],                        // percentage
             mult * sum);                               // cumulative percentage
    r.append(buf);
    }
    }
    
    // Memtables and sstables that make the DB representation contain
// (userkey,seq,type) => uservalue entries.  DBIter
// combines multiple entries for the same userkey found in the DB
// representation into a single entry while accounting for sequence
// numbers, deletion markers, overwrites, etc.
class DBIter: public Iterator {
 public:
  // Which direction is the iterator currently moving?
  // (1) When moving forward, the internal iterator is positioned at
  //     the exact entry that yields this->key(), this->value()
  // (2) When moving backwards, the internal iterator is positioned
  //     just before all entries whose user key == this->key().
  enum Direction {
    kForward,
    kReverse
  };
    }
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
    namespace leveldb {
namespace {
    }
    }
    
      ~Writer();
    
    
    {}  // namespace leveldb
    
    namespace boost {
namespace asio {
    }
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    template <typename Buffer, typename Elem>
class buffer_sequence_adapter<Buffer, std::array<Elem, 2> >
  : buffer_sequence_adapter_base
{
public:
  explicit buffer_sequence_adapter(
      const std::array<Elem, 2>& buffer_sequence)
  {
    init_native_buffer(buffers_[0], Buffer(buffer_sequence[0]));
    init_native_buffer(buffers_[1], Buffer(buffer_sequence[1]));
    total_buffer_size_ = boost::asio::buffer_size(buffer_sequence[0])
      + boost::asio::buffer_size(buffer_sequence[1]);
  }
    }
    
    class buffered_stream_storage
{
public:
  // The type of the bytes stored in the buffer.
  typedef unsigned char byte_type;
    }
    
    #endif // BOOST_ASIO_DETAIL_EVENT_HPP

    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    #define BOOST_ASIO_HANDSHAKE_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::one_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0))) == 1, \
      'HandshakeHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_BUFFER_SEQUENCE_ADAPTER_IPP
#define BOOST_ASIO_DETAIL_IMPL_BUFFER_SEQUENCE_ADAPTER_IPP
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
#define BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplAllegro5_RenderDrawData(ImDrawData* draw_data)
{
    // Backup Allegro state that will be modified
    ALLEGRO_TRANSFORM last_transform = *al_get_current_transform();
    ALLEGRO_TRANSFORM last_projection_transform = *al_get_current_projection_transform();
    int last_clip_x, last_clip_y, last_clip_w, last_clip_h;
    al_get_clipping_rectangle(&last_clip_x, &last_clip_y, &last_clip_w, &last_clip_h);
    int last_blender_op, last_blender_src, last_blender_dst;
    al_get_blender(&last_blender_op, &last_blender_src, &last_blender_dst);
    }
    
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
    
    
    {    (void)mods; // Modifiers are not reliable across systems
    io.KeyCtrl = io.KeysDown[GLFW_KEY_LEFT_CONTROL] || io.KeysDown[GLFW_KEY_RIGHT_CONTROL];
    io.KeyShift = io.KeysDown[GLFW_KEY_LEFT_SHIFT] || io.KeysDown[GLFW_KEY_RIGHT_SHIFT];
    io.KeyAlt = io.KeysDown[GLFW_KEY_LEFT_ALT] || io.KeysDown[GLFW_KEY_RIGHT_ALT];
    io.KeySuper = io.KeysDown[GLFW_KEY_LEFT_SUPER] || io.KeysDown[GLFW_KEY_RIGHT_SUPER];
}
    
    static const char* ImGui_ImplSDL2_GetClipboardText(void*)
{
    if (g_ClipboardTextData)
        SDL_free(g_ClipboardTextData);
    g_ClipboardTextData = SDL_GetClipboardText();
    return g_ClipboardTextData;
}