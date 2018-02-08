
        
        
    {    if (s.ok()) {
      // Verify that the table is usable
      Iterator* it = table_cache->NewIterator(ReadOptions(),
                                              meta->number,
                                              meta->file_size);
      s = it->status();
      delete it;
    }
  }
    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
    void DBIter::Prev() {
  assert(valid_);
    }
    
    // Return the name of the descriptor file for the db named by
// 'dbname' and the specified incarnation number.  The result will be
// prefixed with 'dbname'.
extern std::string DescriptorFileName(const std::string& dbname,
                                      uint64_t number);
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
      // If *start < limit, changes *start to a short string in [start,limit).
  // Simple comparator implementations may return with *start unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const = 0;
    
    protected:
    std::wstring m_modelPath;
    bool m_keepCheckPointFiles;
    bool m_saveBestModelPerCriterion;
    // Mapping from criterion to the best epoch on validation data set.
    std::map<std::wstring, BestEpoch> m_criteriaBestEpoch;
    
    #pragma warning(disable : 4267) // conversion from 'size_t' to 'unsigned int'; happens in CUDA <<<a,b>>> syntax if a and b are size_t
#pragma warning(disable : 4127) // conditional expression is constant; 'if (sizeof(ElemType)==sizeof(float))' triggers this
#pragma warning(disable : 4702) // unreachable code; triggered for unknown reasons
    
        // allocate memory for all bnNodes evalOrder
    m_net->AllocateAllMatrices(bnNodes, std::vector<ComputationNodeBasePtr>(), nullptr);
    
    #include 'Basics.h'
#include 'ScriptableObjects.h'
#include 'BrainScriptParser.h'
    
    struct TextLocation // position in the text. Lightweight value struct that we can copy around, even into dictionaries etc., for error messages
{
    // source-code locations are given by line number, character position, and the source file
    size_t lineNo, charPos; // line number and character index (0-based)
    const SourceFile& GetSourceFile() const
    {
        return sourceFileMap[sourceFileAsIndex];
    } // get the corresponding source-code line
    }
    
    #ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
    
    // TODO: make this proper C++ functions with variadic templates and a name that reflects their difference to fprintf(stderr) which already implies printing to log
// Print out a log message.  If the Tracing flag is set, prepend with a timestamp
#define LOGPRINTF(stream, ...) \
    do \
    { \
        PREPENDTS(stream); \
        fprintf(stream, __VA_ARGS__); \
    } while(0)
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
    
    
    
    
    static const static_bookblock _resbook_44p_n1={
  {
    {0},
    {0,&_44pn1_p1_0},
    }
    }
    
    # undef n2l
# define n2l(c,l)        (l =((unsigned long)(*((c)++)))<<24L, \
                         l|=((unsigned long)(*((c)++)))<<16L, \
                         l|=((unsigned long)(*((c)++)))<< 8L, \
                         l|=((unsigned long)(*((c)++))))
    
    #if defined(__WATCOMC__)
void GetTSC(unsigned long&);
#pragma aux GetTSC = 0x0f 0x31 'mov [edi], eax' parm [edi] modify [edx eax];
#elif defined(__GNUC__)
inline
void GetTSC(unsigned long& tsc)
{
  asm volatile('.byte 15, 49\n\t'
	       : '=eax' (tsc)
	       :
	       : '%edx', '%eax');
}
#elif defined(_MSC_VER)
inline
void GetTSC(unsigned long& tsc)
{
  unsigned long a;
  __asm _emit 0fh
  __asm _emit 31h
  __asm mov a, eax;
  tsc=a;
}
#endif      
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    
    {
    {}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_COLUMN_MATRIX_H_

    
      ASSERT_EQ(GetFileSize(tmp_file), 76)
    << 'Expected saved binary file size to be same as object size';
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }