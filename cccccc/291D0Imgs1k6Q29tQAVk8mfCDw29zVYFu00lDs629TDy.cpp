
        
        class OpenURIDialog : public QDialog
{
    Q_OBJECT
    }
    
    double UniValue::get_real() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not a number as expected');
    double retval;
    if (!ParseDouble(getValStr(), &retval))
        throw std::runtime_error('JSON double out of range');
    return retval;
}
    
        UniValue v2(UniValue::VSTR);
    BOOST_CHECK(v2.isStr());
    
    #include <stdint.h>
#include <stdlib.h>
    
    
    {  // (e) Do a non-sync write; should fail
  w.sync = false;
  ASSERT_TRUE(!db_->Put(w, 'k3', 'v3').ok());
  ASSERT_EQ('v1', Get('k1'));
  ASSERT_EQ('NOT_FOUND', Get('k2'));
  ASSERT_EQ('NOT_FOUND', Get('k3'));
}
    
    // A comparator for internal keys that uses a specified comparator for
// the user key portion and breaks ties by decreasing sequence number.
class InternalKeyComparator : public Comparator {
 private:
  const Comparator* user_comparator_;
 public:
  explicit InternalKeyComparator(const Comparator* c) : user_comparator_(c) { }
  virtual const char* Name() const;
  virtual int Compare(const Slice& a, const Slice& b) const;
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const;
  virtual void FindShortSuccessor(std::string* key) const;
    }
    
      Status Verify(int start_idx, int num_vals,
                ExpectedVerifResult expected) const {
    std::string val;
    std::string value_space;
    Status s;
    for (int i = start_idx; i < start_idx + num_vals && s.ok(); i++) {
      Value(i, &value_space);
      s = ReadValue(i, &val);
      if (expected == VAL_EXPECT_NO_ERROR) {
        if (s.ok()) {
          ASSERT_EQ(value_space, val);
        }
      } else if (s.ok()) {
        fprintf(stderr, 'Expected an error at %d, but was OK\n', i);
        s = Status::IOError(dbname_, 'Expected value error:');
      } else {
        s = Status::OK();  // An expected error
      }
    }
    return s;
  }
    
    // Return the name of a temporary file owned by the db named 'dbname'.
// The result will be prefixed with 'dbname'.
extern std::string TempFileName(const std::string& dbname, uint64_t number);
    
    void SimpleCSRSource::LoadBinary(dmlc::Stream* fi) {
  int tmagic;
  CHECK(fi->Read(&tmagic, sizeof(tmagic)) == sizeof(tmagic)) << 'invalid input file format';
  CHECK_EQ(tmagic, kMagic) << 'invalid format, magic number mismatch';
  info.LoadBinary(fi);
  fi->Read(&page_.offset.HostVector());
  fi->Read(&page_.data.HostVector());
}
    
    #endif
    
        // see if we have already split on this feature,
    // if so we undo that split so we can redo it for this node
    unsigned path_index = 0;
    for (; path_index <= unique_depth; ++path_index) {
      if (static_cast<unsigned>(unique_path[path_index].feature_index) == split_index) break;
    }
    if (path_index != unique_depth + 1) {
      incoming_zero_fraction = unique_path[path_index].zero_fraction;
      incoming_one_fraction = unique_path[path_index].one_fraction;
      UnwindPath(unique_path, unique_depth, path_index);
      unique_depth -= 1;
    }
    
    #include <folly/GLog.h>
    
    namespace folly {
    }
    
    using UriTuple = std::tuple<
    const std::string&,
    const std::string&,
    const std::string&,
    const std::string&,
    uint16_t,
    const std::string&,
    const std::string&,
    const std::string&>;
    
      VirtualExecutor(const VirtualExecutor&) = delete;
  VirtualExecutor& operator=(const VirtualExecutor&) = delete;
    
        // Check if we need to push a batch from local -> global
    auto batchcount = EXTERNAL_OFFSET / 2;
    if (get_local_count(newlocal) > batchcount) {
      CountedDetail::inc_shared_count(newlocal.get(), batchcount);
      putOwnedBase(newlocal.get(), batchcount, order);
    }
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
  }
    
    size_t qfind_first_byte_of_bitset(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  std::bitset<256> s;
  for (auto needle : needles) {
    s[(uint8_t)needle] = true;
  }
  for (size_t index = 0; index < haystack.size(); ++index) {
    if (s[(uint8_t)haystack[index]]) {
      return index;
    }
  }
  return std::string::npos;
}