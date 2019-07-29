
        
        
    {  for (auto &rel : sym.Relations) {
    if (!rel.group.empty())
      return rel.group;
    if (rel.decl)
      return findGroupNameForDecl(rel.decl);
  }
  llvm_unreachable('did not find group name for reference');
}
    
      /// This class provides a non-trivial .cxx_construct or .cxx_destruct
  /// implementation.
  HasCXXStructors      = 0x00004,
    
    class DiagnosticConsumer;
class DiagnosticEngine;
    
    // Author: kenton@google.com (Kenton Varda)
    
    
    {  // Compare
  util::MessageDifferencer differencer;
  differencer.set_message_field_comparison(
      util::MessageDifferencer::EQUIVALENT);
  differencer.set_scope(util::MessageDifferencer::PARTIAL);
  EXPECT_FALSE(differencer.Compare(msg1, msg2));
}
    
    TEST(ByteSourceTest, CopyToStringByteSink) {
  StringPiece data('Hello world!');
  MockByteSource source(data, 3);
  string str;
  StringByteSink sink(&str);
  source.CopyTo(&sink, data.size());
  EXPECT_EQ(data, str);
}
    
    Status::Status() : error_code_(error::OK) {
}
    
    #include <errno.h>
#include <memory>
    
    #include <google/protobuf/stubs/common.h>
#include <gtest/gtest.h>
    
    namespace google {
namespace protobuf {
namespace internal {
namespace {
    }
    }
    }
    }
    
    
    {
    {    reflection->MutableUnknownFields(message)->Clear();
  }
 private:
  virtual bool ShouldBeClear(const FieldDescriptor *field) = 0;
};
    
      // Sets up the DENORM to execute a non-linear transformation based on
  // preserving an even distribution of stroke edges. The transformation
  // operates only within the given box, scaling input coords within the box
  // non-linearly to a box of target_width by target_height, with all other
  // coords being clipped to the box edge. As with SetupNormalization above,
  // final_xshift and final_yshift are applied after scaling, and the bottom-
  // left of box is used as a pre-scaling origin.
  // x_coords is a collection of the x-coords of vertical edges for each
  // y-coord starting at box.bottom().
  // y_coords is a collection of the y-coords of horizontal edges for each
  // x-coord starting at box.left().
  // Eg x_coords[0] is a collection of the x-coords of edges at y=bottom.
  // Eg x_coords[1] is a collection of the x-coords of edges at y=bottom + 1.
  // The second-level vectors must all be sorted in ascending order.
  void SetupNonLinear(const DENORM* predecessor, const TBOX& box,
                      float target_width, float target_height,
                      float final_xshift, float final_yshift,
                      const GenericVector<GenericVector<int> >& x_coords,
                      const GenericVector<GenericVector<int> >& y_coords);
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    // AMBIG_TABLE[i] stores a set of ambiguities whose
// wrong ngram starts with unichar id i.
using UnicharAmbigsVector = GenericVector<AmbigSpec_LIST *>;
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
    	return 'Image';
}
void ResourceImporterImage::get_recognized_extensions(List<String> *p_extensions) const {
    
    	switch (p_idx) {
		case MENU_GENERATE_VISIBILITY_RECT: {
			float gen_time = particles->get_lifetime();
			if (gen_time < 1.0)
				generate_seconds->set_value(1.0);
			else
				generate_seconds->set_value(trunc(gen_time) + 1.0);
			generate_visibility_rect->popup_centered_minsize();
		} break;
		case MENU_LOAD_EMISSION_MASK: {
    }
    }
    
    	void _process_packet(int p_from, const uint8_t *p_packet, int p_packet_len);
	void _process_simplify_path(int p_from, const uint8_t *p_packet, int p_packet_len);
	void _process_confirm_path(int p_from, const uint8_t *p_packet, int p_packet_len);
	Node *_process_get_node(int p_from, const uint8_t *p_packet, int p_packet_len);
	void _process_rpc(Node *p_node, const StringName &p_name, int p_from, const uint8_t *p_packet, int p_packet_len, int p_offset);
	void _process_rset(Node *p_node, const StringName &p_name, int p_from, const uint8_t *p_packet, int p_packet_len, int p_offset);
	void _process_raw(int p_from, const uint8_t *p_packet, int p_packet_len);
    
    
    {	void create(const PoolVector<Vector3> &p_faces);
	TriangleMesh();
};
    
    	// some core type enums to convert to
	operator Margin() const;
	operator Orientation() const;
    
        DUPNUM(n2, num_one);
    
    //-----------------------------------------------------------------------------
//
//  FUNCTION: rootrat
//
//  PARAMETERS: y prat representation of number to take the root of
//              n prat representation of the root to take.
//
//  RETURN: bth root of a in rat form.
//
//  EXPLANATION: This is now a stub function to powrat().
//
//-----------------------------------------------------------------------------
    
    void _readconstants(void);
    
    INarratorAnnouncementHost ^ NarratorAnnouncementHostFactory::GetHostProducer()
{
    for (INarratorAnnouncementHost ^ host : NarratorAnnouncementHostFactory::s_hosts)
    {
        if (host->IsHostAvailable())
        {
            return host;
        }
    }
    }
    
    // Declaration of the NotificationHost class.
// This class announces NarratorAnnouncements using the RaiseNotification API
// available in RS3.
    
    // Skip x if floor(x/10) is even, use range skips. Requires that keys are
// zero-padded to length 10.
class SkipEvenFilter : public CompactionFilter {
 public:
  Decision FilterV2(int /*level*/, const Slice& key, ValueType /*value_type*/,
                    const Slice& /*existing_value*/, std::string* /*new_value*/,
                    std::string* skip_until) const override {
    cfilter_count++;
    int i = std::stoi(key.ToString());
    if (i / 10 % 2 == 0) {
      char key_str[100];
      snprintf(key_str, sizeof(key_str), '%010d', i / 10 * 10 + 10);
      *skip_until = key_str;
      ++cfilter_skips;
      return Decision::kRemoveAndSkipUntil;
    }
    return Decision::kKeep;
  }
    }
    
    
    {  {
    SetPerfLevel(kEnableCount);
    get_perf_context()->Reset();
    int c = 0;
    std::unique_ptr<Iterator> iter(db_->NewIterator(ReadOptions()));
    iter->Seek(Key(kMaxKey - 100));
    while (iter->Valid() && iter->key().compare(Key(kMaxKey + 100)) < 0) {
      iter->Next();
    }
    ASSERT_EQ(c, 0);
    ASSERT_LT(get_perf_context()->internal_delete_skipped_count, 30u);
    ASSERT_LT(get_perf_context()->internal_key_skipped_count, 30u);
    SetPerfLevel(kDisable);
  }
}
    
    #include 'rocksdb/status.h'
    
    int main() {
  Options options;
  options.create_if_missing = true;
  // Disable RocksDB background compaction.
  options.compaction_style = kCompactionStyleNone;
  // Small slowdown and stop trigger for experimental purpose.
  options.level0_slowdown_writes_trigger = 3;
  options.level0_stop_writes_trigger = 5;
  options.IncreaseParallelism(5);
  options.listeners.emplace_back(new FullCompactor(options));
    }
    
      ////////////////////////////////////////////////////////
  //
  // Simple OptimisticTransaction Example ('Read Committed')
  //
  ////////////////////////////////////////////////////////
    
      // Initialize pointer options for each column family
  for (size_t i = 0; i < loaded_cf_descs.size(); ++i) {
    auto* loaded_bbt_opt = reinterpret_cast<BlockBasedTableOptions*>(
        loaded_cf_descs[0].options.table_factory->GetOptions());
    // Expect the same as BlockBasedTableOptions will be loaded form file.
    assert(loaded_bbt_opt->block_size == bbt_opts.block_size);
    // However, block_cache needs to be manually initialized as documented
    // in rocksdb/utilities/options_util.h.
    loaded_bbt_opt->block_cache = cache;
  }
  // In addition, as pointer options are initialized with default value,
  // we need to properly initialized all the pointer options if non-defalut
  // values are used before calling DB::Open().
  assert(loaded_cf_descs[0].options.compaction_filter == nullptr);
  loaded_cf_descs[0].options.compaction_filter = compaction_filter.get();
    
      // Insert to page cache
  //
  // page_key   Identifier to identify a page uniquely across restarts
  // data       Page data
  // size       Size of the page
  virtual Status Insert(const Slice& key, const char* data,
                        const size_t size) = 0;
    
      // If true, the database will be created if it is missing.
  // Default: false
  bool create_if_missing;