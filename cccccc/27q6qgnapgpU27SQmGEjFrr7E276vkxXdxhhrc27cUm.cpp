
        
        #include 'swift/Demangling/ManglingUtils.h'
    
    # endif  // NDEBUG for EXPECT_DEBUG_DEATH
#endif  // GTEST_HAS_DEATH_TEST
    
    #define GTEST_ASSERT_(expression, on_failure) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (const ::testing::AssertionResult gtest_ar = (expression)) \
    ; \
  else \
    on_failure(gtest_ar.failure_message())
    
      // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // This does NOT check that a directory (or file) actually exists.
  bool IsDirectory() const;
    
    // A handy wrapper around RemoveReference that works when the argument
// T depends on template parameters.
#define GTEST_REMOVE_REFERENCE_(T) \
    typename ::testing::internal::RemoveReference<T>::type
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
};
    
      virtual int GetNextPrime(int p) const {
    for (int n = p + 1; n < is_prime_size_; n++) {
      if (is_prime_[n]) return n;
    }
    }
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    // In this example, we test the MyString class (a simple string).
    
    #endif  // GTEST_SAMPLES_SAMPLE3_INL_H_

    
    namespace leveldb {
    }
    
      void OpenBench(ThreadState* thread) {
    for (int i = 0; i < num_; i++) {
      delete db_;
      Open();
      thread->stats.FinishedSingleOp();
    }
  }
    
    TEST(DBTest, L0_CompactionBug_Issue44_b) {
  Reopen();
  Put('','');
  Reopen();
  Delete('e');
  Put('','');
  Reopen();
  Put('c', 'cv');
  Reopen();
  Put('','');
  Reopen();
  Put('','');
  DelayMilliseconds(1000);  // Wait for compaction to finish
  Reopen();
  Put('d','dv');
  Reopen();
  Put('','');
  Reopen();
  Delete('d');
  Delete('b');
  Reopen();
  ASSERT_EQ('(->)(c->cv)', Contents());
  DelayMilliseconds(1000);  // Wait for compaction to finish
  ASSERT_EQ('(->)(c->cv)', Contents());
}
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
    #include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
    size_t LogTest::initial_offset_record_sizes_[] =
    {10000,  // Two sizable records in first block
     10000,
     2 * log::kBlockSize - 1000,  // Span three blocks
     1,
     13716,  // Consume all but two bytes of block 3.
     log::kBlockSize - kHeaderSize, // Consume the entirety of block 4.
    };
    
    MemTable::~MemTable() {
  assert(refs_ == 0);
}
    
    
    {
    {            if (U_SUCCESS(status)) {
                destLen += appendGroup(groupNum, dest, status);
            }
        }  // End of $ capture group handling
    }  // End of per-character loop through the replacement string.
    
        UBool         retVal  = FALSE;
    RegexPattern *pat     = NULL;
    RegexMatcher *matcher = NULL;
    
    // SharedBreakIterator encapsulates a shared BreakIterator. Because
// BreakIterator has mutable semantics, clients must ensure that all uses
// of a particular shared BreakIterator is protected by the same mutex
// ensuring that only one thread at a time gets access to that shared
// BreakIterator. Clients can accomplish this by creating a mutex for all
// uses of break iterator within a particular class. Then objects of that
// class may then freely share break iterators among themselves. However,
// these shared break iterators must never be exposed outside of that class.
class U_I18N_API SharedBreakIterator : public SharedObject {
public:
    SharedBreakIterator(BreakIterator *biToAdopt);
    virtual ~SharedBreakIterator();
    }
    
        /**
     * Get maximum significant digits. 0 means no minimum.
     */
    int32_t getMin() const {
        return fMin;
    }
    
    #endif /* #if !UCONFIG_NO_FORMATTING */
    
        processOverrideString(locale,override,kOvrStrBoth,status);
    
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
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    SEXP XGDMatrixNumCol_R(SEXP handle) {
  bst_ulong ncol;
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixNumCol(R_ExternalPtrAddr(handle), &ncol));
  R_API_END();
  return ScalarInteger(static_cast<int>(ncol));
}
    
    namespace xgboost {
namespace tree {
    }
    }
    
    /*! \brief a collection of columns, with support for construction from
    GHistIndexMatrix. */
class ColumnMatrix {
 public:
  // get number of features
  inline bst_uint GetNumFeature() const {
    return static_cast<bst_uint>(type_.size());
  }
    }
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
        ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    
    {    return 0;
}

    
        // By using D3DCompile() from <d3dcompiler.h> / d3dcompiler.lib, we introduce a dependency to a given version of d3dcompiler_XX.dll (see D3DCOMPILER_DLL_A)
    // If you would like to use this DX10 sample code but remove this dependency you can:
    //  1) compile once, save the compiled shader blobs into a file or source code and pass them to CreateVertexShader()/CreatePixelShader() [preferred solution]
    //  2) use code to detect any version of the DLL and grab a pointer to D3DCompile from the DLL.
    // See https://github.com/ocornut/imgui/pull/638 for sources and details.
    
        // Glut has 1 function for characters and one for 'special keys'. We map the characters in the 0..255 range and the keys above.
    io.KeyMap[ImGuiKey_Tab]         = '\t'; // == 9 == CTRL+I
    io.KeyMap[ImGuiKey_LeftArrow]   = 256 + GLUT_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow]  = 256 + GLUT_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow]     = 256 + GLUT_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow]   = 256 + GLUT_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp]      = 256 + GLUT_KEY_PAGE_UP;
    io.KeyMap[ImGuiKey_PageDown]    = 256 + GLUT_KEY_PAGE_DOWN;
    io.KeyMap[ImGuiKey_Home]        = 256 + GLUT_KEY_HOME;
    io.KeyMap[ImGuiKey_End]         = 256 + GLUT_KEY_END;
    io.KeyMap[ImGuiKey_Insert]      = 256 + GLUT_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete]      = 127;
    io.KeyMap[ImGuiKey_Backspace]   = 8;  // == CTRL+H
    io.KeyMap[ImGuiKey_Space]       = ' ';
    io.KeyMap[ImGuiKey_Enter]       = 13; // == CTRL+M
    io.KeyMap[ImGuiKey_Escape]      = 27;
    io.KeyMap[ImGuiKey_A]           = 'A';
    io.KeyMap[ImGuiKey_C]           = 'C';
    io.KeyMap[ImGuiKey_V]           = 'V';
    io.KeyMap[ImGuiKey_X]           = 'X';
    io.KeyMap[ImGuiKey_Y]           = 'Y';
    io.KeyMap[ImGuiKey_Z]           = 'Z';
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    Status WriteBatchBase::Delete(ColumnFamilyHandle* column_family,
                              const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return Delete(column_family, key_slice);
}
    
     private:
  uint64_t NowMicrosMonotonic(Env* env);
    
    // A simple compaction algorithm that always compacts everything
// to the highest level whenever possible.
class FullCompactor : public Compactor {
 public:
  explicit FullCompactor(const Options options) : options_(options) {
    compact_options_.compression = options_.compression;
    compact_options_.output_file_size_limit =
        options_.target_file_size_base;
  }
    }
    
    int main() {
  DB* db;
  Options options;
  // Optimize RocksDB. This is the easiest way to get RocksDB to perform well
  options.IncreaseParallelism();
  options.OptimizeLevelStyleCompaction();
  // create the DB if it's not already present
  options.create_if_missing = true;
    }
    
      // Start a transaction
  Transaction* txn = txn_db->BeginTransaction(write_options);
  assert(txn);
    
    namespace rocksdb {
namespace experimental {
    }
    }
    
    struct RestoreOptions {
  // If true, restore won't overwrite the existing log files in wal_dir. It will
  // also move all log files from archive directory to wal_dir. Use this option
  // in combination with BackupableDBOptions::backup_log_files = false for
  // persisting in-memory databases.
  // Default: false
  bool keep_log_files;
    }
    
    Hide* Hide::clone() const
{
    // no copy constructor
    return Hide::create();
}
    
    ssize_t ActionManager::getNumberOfRunningActions() const
{
    ssize_t count = 0;
    struct _hashElement* element = nullptr;
    struct _hashElement* tmp = nullptr;
    HASH_ITER(hh, _targets, element, tmp)
    {
        count += (element->actions ? element->actions->num : 0);
    }
    return count;
}
    
    struct _hashElement;
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
    #include 'platform/CCPlatformConfig.h'
#include 'base/CCRef.h'
#include 'base/CCValue.h'
#include 'base/CCVector.h'
#include '2d/CCSpriteFrame.h'
    
    // AtlasNode - draw
void AtlasNode::draw(Renderer *renderer, const Mat4 &transform, uint32_t flags)
{
    // ETC1 ALPHA supports.
    _quadCommand.init(_globalZOrder, _textureAtlas->getTexture(), getGLProgramState(), _blendFunc, _textureAtlas->getQuads(), _quadsToDraw, transform, flags);
    
    renderer->addCommand(&_quadCommand);
    }
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
    int main() {
    }
    
    
    {        return res;
    }
    
            prev1->next = dummyHead2->next;
        ListNode* ret = dummyHead1->next;
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
            TreeNode* p = root;
        while(p != NULL || !stack.empty()){
            if(p != NULL){
                stack.push(p);
                output.push(p);
                p = p->right;
            }
            else{
                p = stack.top();
                stack.pop();
                p = p->left;
            }
        }