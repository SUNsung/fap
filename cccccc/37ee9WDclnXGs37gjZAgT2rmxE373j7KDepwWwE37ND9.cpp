
        
          // Save a copy of the blamer bundle so we can try to reconstruct it below.
  BlamerBundle *orig_bb =
      word->blamer_bundle ? new BlamerBundle(*word->blamer_bundle) : nullptr;
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
        DIR128 & operator= (         //assign of int16_t
    int16_t value) {               //value to assign
      value %= MODULUS;          //modulo arithmetic
      if (value < 0)
        value += MODULUS;        //done properly
      dir = (int8_t) value;
      return *this;
    }
    int8_t operator- (             //subtraction
      const DIR128 & minus) const//for signed result
    {
                                 //result
      int16_t result = dir - minus.dir;
    }
    
    
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    namespace leveldb {
    }
    
    
    {    // The previous incarnation may not have written any MANIFEST
    // records after allocating this log number.  So we manually
    // update the file number allocation counter in VersionSet.
    versions_->MarkFileNumberUsed(logs[i]);
  }
    
      // Constant after construction
  Env* const env_;
  const InternalKeyComparator internal_comparator_;
  const InternalFilterPolicy internal_filter_policy_;
  const Options options_;  // options_.comparator == &internal_comparator_
  const bool owns_info_log_;
  const bool owns_cache_;
  const std::string dbname_;
    
      // When start user key is prefix of limit user key
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foobar', 200, kTypeValue)));
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
          case kEof:
        if (in_fragmented_record) {
          // This can be caused by the writer dying immediately after
          // writing a physical record but before completing the next; don't
          // treat it as a corruption, just ignore the entire logical record.
          scratch->clear();
        }
        return false;
    
    namespace log {
    }
    
    class MemTable {
 public:
  // MemTables are reference counted.  The initial reference count
  // is zero and the caller must call Ref() at least once.
  explicit MemTable(const InternalKeyComparator& comparator);
    }
    
    
    {}  // namespace leveldb

    
        // master data structure
    std::list<QueryUrls> m_queryUrls;
    // buffer for sorting
    std::vector<Url> m_urlSorter;
    // lookup table for position based weights
    std::vector<ElemType> m_logWeights;
    
    
    {                    if (!memAllocInfoVec.empty())
                    {
                        // the memory allocation vector is sorted by size. We find the largest available buffer that doesn't have time overlap
                        auto workingAlloc = memAllocInfoVec.end();
                        for (auto iter = memAllocInfoVec.begin(); iter != memAllocInfoVec.end(); iter++)
                        {
                            if (!CheckOverlap(make_pair(memInfo.allocStep, memInfo.releaseStep), iter->occupancy))
                                workingAlloc = iter;
                        }
                        if (workingAlloc == memAllocInfoVec.end())  // nothing works 
                        {
                            vector<pair<int, int>> occ;
                            occ.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                            MemAllocInfo ma(memoryCounter, memInfo.matrixSize, occ);
                            memAllocInfoVec.push_back(ma);  // add as the last one 
                            memInfo.SetMemoryId(memoryCounter);
                            memoryCounter++;
                        }
                        else
                        {
                            workingAlloc->occupancy.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                            memInfo.SetMemoryId(workingAlloc->memoryId);
                        }
                    }
                    else
                    {
                        vector<pair<int, int>> occ;
                        occ.push_back(make_pair(memInfo.allocStep, memInfo.releaseStep));
                        MemAllocInfo ma(memoryCounter, memInfo.matrixSize, occ);
                        memAllocInfoVec.push_back(ma);
                        memInfo.SetMemoryId(memoryCounter);
                        memoryCounter++;
                    }
                }
    
    #include <unordered_set>
#include <map>
#include <string>
#include <vector>
#include <stdexcept>
#include <list>
#include <memory>
#include <algorithm>
#include <utility>
#include <assert.h>
    
        if (r['free_space'].empty()) {
      r['free_space'] = '-1';
    }
    
    /**
 * @brief Serialize a QueryDataTyped object into a JSON array.
 *
 * @param q the QueryDataTyped to serialize.
 * @param cols the TableColumn vector indicating column order.
 * @param doc the managed JSON document.
 * @param arr [output] the output JSON array.
 * @param asNumeric true iff numeric values are serialized as such
 *
 * @return Status indicating the success or failure of the operation.
 */
Status serializeQueryData(const QueryDataTyped& q,
                          JSON& doc,
                          rapidjson::Document& arr,
                          bool asNumeric);
    
      bool needs_replacement = false;
  for (size_t i = 0; i < data.length(); i++) {
    if (((unsigned char)data[i]) < 0x20 || ((unsigned char)data[i]) >= 0x80) {
      needs_replacement = true;
      escaped += '\\x';
      escaped += hex_chars[(((unsigned char)data[i])) >> 4];
      escaped += hex_chars[((unsigned char)data[i] & 0x0F) >> 0];
    } else {
      escaped += data[i];
    }
  }
    
    /**
 * @brief Register osquery operation 'custom' functions.
 */
void registerOperationExtensions(sqlite3* db);
    
    QueryDataTyped getTestDBExpectedResults() {
  QueryDataTyped d;
  RowTyped row1;
  row1['username'] = 'mike';
  row1['age'] = 23LL;
  d.push_back(row1);
  RowTyped row2;
  row2['username'] = 'matt';
  row2['age'] = 24LL;
  d.push_back(row2);
  return d;
}
    
    
    {  // Expect the decorators to be disabled by default.
  QueryLogItem item;
  getDecorations(item.decorations);
  EXPECT_EQ(item.decorations.size(), 0U);
}
    
    #include <boost/algorithm/string.hpp>
#include <boost/asio.hpp>
#include <boost/filesystem.hpp>
#include <boost/io/detail/quoted_manip.hpp>
#include <boost/regex.hpp>
#include <boost/uuid/string_generator.hpp>
    
    #include <string>
    
        /**
     *  unicode to utf8 convertor with zero dependency inspired by java sdk character source
     * */
    void utf16_convert_to_utf8_string(uint16_t *utf16, int length, char* decodingBuffer, std::string& utf8);
    void utf16_convert_to_utf8_quote_string(uint16_t *utf16, int length, char* decodingBuffer, std::string& utf8);
    
    
// TRACED_FOREACH(type, var, container) expands to a loop that assigns |var|
// every item in the |container| and adds a SCOPED_TRACE() message for the
// |var| while inside the loop body.
#define TRACED_FOREACH(_type, _var, _container)                          \
  for (_type const _var : _container)                                    \
    for (bool _done = false; !_done;)                                    \
      for (SCOPED_TRACE(::testing::Message() << #_var << ' = ' << _var); \
           !_done; _done = true)
    
      // Check if the code entry is a Smi. If yes, we interpret it as an
  // optimisation marker. Otherwise, interpret it as a weak reference to a code
  // object.
  Label optimized_code_slot_is_smi(this), optimized_code_slot_is_weak_ref(this);
  Branch(TaggedIsSmi(maybe_optimized_code_entry), &optimized_code_slot_is_smi,
         &optimized_code_slot_is_weak_ref);
    
    
    { protected:
  void MathRoundingOperation(
      Node* context, Node* x,
      TNode<Float64T> (CodeStubAssembler::*float64op)(SloppyTNode<Float64T>));
  void MathUnaryOperation(
      Node* context, Node* x,
      TNode<Float64T> (CodeStubAssembler::*float64op)(SloppyTNode<Float64T>));
  void MathMaxMin(Node* context, Node* argc,
                  TNode<Float64T> (CodeStubAssembler::*float64op)(
                      SloppyTNode<Float64T>, SloppyTNode<Float64T>),
                  double default_val);
};
    
    #include 'android_native_app_glue.h'
#include 'animal_generated.h' // Includes 'flatbuffers/flatbuffers.h'.
    
    static std::string GenType(const Type &type, bool underlying = false) {
  switch (type.base_type) {
    case BASE_TYPE_STRUCT:
      return type.struct_def->defined_namespace->GetFullyQualifiedName(
          type.struct_def->name);
    case BASE_TYPE_VECTOR: return '[' + GenType(type.VectorType()) + ']';
    default:
      if (type.enum_def && !underlying) {
        return type.enum_def->defined_namespace->GetFullyQualifiedName(
            type.enum_def->name);
      } else {
        return kTypeNames[type.base_type];
      }
  }
}
    
    template<typename T, typename U>
void TestEq(T expval, U val, const char *exp, const char *file, int line,
            const char *func = 0) {
  if (U(expval) != val) {
    TestFail(flatbuffers::NumToString(expval).c_str(),
             flatbuffers::NumToString(val).c_str(), exp, file, line, func);
  }
}
    
    #include <cstdlib>
#include <iostream>
#include 'flatbuffers/util.h'
    
    // SliceAllocator is a gRPC-specific allocator that uses the `grpc_slice`
// refcounted slices to manage memory ownership. This makes it easy and
// efficient to transfer buffers to gRPC.
class SliceAllocator : public Allocator {
 public:
  SliceAllocator() : slice_(grpc_empty_slice()) {}
    }
    
    
#ifndef FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_
#define FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_
    
    #include 'flatbuffers/idl.h'
#include 'test_init.h'
    
    
    {      if (false == not_fit) {
        TEST_OUTPUT_LINE('Stage 1 failed: Parser(%d) != Regex(%d)', orig_done,
                         recheck.res);
        TEST_EQ_STR(orig_back.c_str(),
                    input.substr(recheck.pos, recheck.len).c_str());
        TEST_EQ_FUNC(orig_done, recheck.res);
      }
    }
    
    #include <istream>
#include <utility>
    
    
    {	CharStreamIOException(ANTLR_USE_NAMESPACE(std)exception& e)
		: CharStreamException(e.what()), io(e) {}
	~CharStreamIOException() throw() {}
};
    
    	// Borland C++ builder seems to need the decl's of the first two...
	virtual void initialize(int t,const ANTLR_USE_NAMESPACE(std)string& txt);
	virtual void initialize(RefAST t);
	virtual void initialize(RefToken t);
    
    	ANTLR_USE_NAMESPACE(std)string getMarkedChars() const;
    
    	// Expected BitSet / not BitSet
	MismatchedCharException(
		int c,
		BitSet set_,
		bool matchNot,
		CharScanner* scanner_
	);
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/MismatchedTokenException.hpp#2 $
 */
    
    	NoViableAltException(RefAST t);
	NoViableAltException(RefToken t,const ANTLR_USE_NAMESPACE(std)string& fileName_);
    
    #include 'phonenumbers/alternate_format.h'
    
    
    {  const char* last = ptr_ + std::min(length_ - s.length_, pos) + s.length_;
  const char* result = std::find_end(ptr_, last, s.ptr_, s.ptr_ + s.length_);
  return result != last ? static_cast<size_t>(result - ptr_) : npos;
}
    
      template <typename To>
  static NoType Test(...);
    
    #include <pthread.h>
    
      const PhoneNumberUtil& phone_util_;
  scoped_ptr<const DefaultMapStorage> storage_;
    
    
    {
    {}  // namespace phonenumbers
}  // namespace i18n

    
    namespace i18n {
namespace phonenumbers {
    }
    }
    
    
    {  // Returns whether the given national number (a string containing only decimal
  // digits) matches the national number pattern defined in the given
  // PhoneNumberDesc message.
  virtual bool MatchNationalNumber(const string& number,
                                   const PhoneNumberDesc& number_desc,
                                   bool allow_prefix_match) const = 0;
};