
        
        #ifndef PREPOSITION
#  define PREPOSITION(Word)
#endif
    
        {
      Out << Indent;
      if (childKind == ChildKind::Root) {
        Out << '+- ';
      } else if (childKind == ChildKind::Left) {
        Out << '/- ';
      } else if (childKind == ChildKind::Right) {
        Out << '\\- ';
      } else if (childKind == ChildKind::Further) {
        Out << '\\-> ';
      }
      PrintNodeData(Out, node);
      Out << '\n';
    }
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    // Create a Shell and returns its routing id.
IPC_SYNC_MESSAGE_ROUTED2_1(ShellViewHostMsg_CreateShell,
                           std::string /* url */,
                           base::DictionaryValue /* manifest */,
                           int /* result */)
    
    #endif  // CONTENT_NW_SRC_API_APP_APP_H_
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    namespace nw {
    }
    
    void MenuItem::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    if (enable_shortcut_){
      focus_manager->RegisterAccelerator(
        accelerator_,
        ui::AcceleratorManager::kHighPriority,
        this);
    }
    if (submenu_ != NULL){
      submenu_->UpdateKeys(focus_manager);
    }
  }
}
    
    namespace extensions {
    }
    
      NwScreenDisplayObserver::NwScreenDisplayObserver() {
    display::Screen* screen = display::Screen::GetScreen();
    if (screen) {
      screen->AddObserver(this);
    }
  }
    
      // implement nw.Screen.isMonitorStarted()
  class NwScreenIsMonitorStartedFunction : public NWSyncExtensionFunction {
  public:
    NwScreenIsMonitorStartedFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    // Range() returns generators providing sequences of values in a range.
//
// Synopsis:
// Range(start, end)
//   - returns a generator producing a sequence of values {start, start+1,
//     start+2, ..., }.
// Range(start, end, step)
//   - returns a generator producing a sequence of values {start, start+step,
//     start+step+step, ..., }.
// Notes:
//   * The generated sequences never include end. For example, Range(1, 5)
//     returns a generator producing a sequence {1, 2, 3, 4}. Range(1, 9, 2)
//     returns a generator producing {1, 3, 5, 7}.
//   * start and end must have the same type. That type may be any integral or
//     floating-point type or a user defined type satisfying these conditions:
//     * It must be assignable (have operator=() defined).
//     * It must have operator+() (operator+(int-compatible type) for
//       two-operand version).
//     * It must have operator<() defined.
//     Elements in the resulting sequences will also have that type.
//   * Condition start < end must be satisfied in order for resulting sequences
//     to contain any elements.
//
template <typename T, typename IncrementT>
internal::ParamGenerator<T> Range(T start, T end, IncrementT step) {
  return internal::ParamGenerator<T>(
      new internal::RangeGenerator<T, IncrementT>(start, end, step));
}
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(SingleFailureChecker);
};
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
    
    #else  // GTEST_HAS_DEATH_TEST
    
    #include 'gtest/internal/gtest-port.h'
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18>
struct Types18 {
  typedef T1 Head;
  typedef Types17<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18> Tail;
};
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
    // Filter policy wrapper that converts from internal keys to user keys
class InternalFilterPolicy : public FilterPolicy {
 private:
  const FilterPolicy* const user_policy_;
 public:
  explicit InternalFilterPolicy(const FilterPolicy* p) : user_policy_(p) { }
  virtual const char* Name() const;
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const;
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const;
};
    
    // Return the name of the lock file for the db named by
// 'dbname'.  The result will be prefixed with 'dbname'.
std::string LockFileName(const std::string& dbname);
    
    class WritableFile;
    
    
    {    if (counter > 0 && s.ok()) {
      std::string orig = TableFileName(dbname_, t.meta.number);
      s = env_->RenameFile(copy, orig);
      if (s.ok()) {
        Log(options_.info_log, 'Table #%llu: %d entries repaired',
            (unsigned long long) t.meta.number, counter);
        tables_.push_back(t);
      }
    }
    if (!s.ok()) {
      env_->DeleteFile(copy);
    }
  }
    
    static void DeleteEntry(const Slice& key, void* value) {
  TableAndFile* tf = reinterpret_cast<TableAndFile*>(value);
  delete tf->table;
  delete tf->file;
  delete tf;
}
    
    std::string VersionEdit::DebugString() const {
  std::string r;
  r.append('VersionEdit {');
  if (has_comparator_) {
    r.append('\n  Comparator: ');
    r.append(comparator_);
  }
  if (has_log_number_) {
    r.append('\n  LogNumber: ');
    AppendNumberTo(&r, log_number_);
  }
  if (has_prev_log_number_) {
    r.append('\n  PrevLogNumber: ');
    AppendNumberTo(&r, prev_log_number_);
  }
  if (has_next_file_number_) {
    r.append('\n  NextFile: ');
    AppendNumberTo(&r, next_file_number_);
  }
  if (has_last_sequence_) {
    r.append('\n  LastSeq: ');
    AppendNumberTo(&r, last_sequence_);
  }
  for (size_t i = 0; i < compact_pointers_.size(); i++) {
    r.append('\n  CompactPointer: ');
    AppendNumberTo(&r, compact_pointers_[i].first);
    r.append(' ');
    r.append(compact_pointers_[i].second.DebugString());
  }
  for (DeletedFileSet::const_iterator iter = deleted_files_.begin();
       iter != deleted_files_.end();
       ++iter) {
    r.append('\n  DeleteFile: ');
    AppendNumberTo(&r, iter->first);
    r.append(' ');
    AppendNumberTo(&r, iter->second);
  }
  for (size_t i = 0; i < new_files_.size(); i++) {
    const FileMetaData& f = new_files_[i].second;
    r.append('\n  AddFile: ');
    AppendNumberTo(&r, new_files_[i].first);
    r.append(' ');
    AppendNumberTo(&r, f.number);
    r.append(' ');
    AppendNumberTo(&r, f.file_size);
    r.append(' ');
    r.append(f.smallest.DebugString());
    r.append(' .. ');
    r.append(f.largest.DebugString());
  }
  r.append('\n}\n');
  return r;
}
    
      void Add(const char* smallest, const char* largest,
           SequenceNumber smallest_seq = 100,
           SequenceNumber largest_seq = 100) {
    FileMetaData* f = new FileMetaData;
    f->number = files_.size() + 1;
    f->smallest = InternalKey(smallest, smallest_seq, kTypeValue);
    f->largest = InternalKey(largest, largest_seq, kTypeValue);
    files_.push_back(f);
  }
    
    
    {        auto maskMatrix = GetMatrix();
        size_t rowOffset = offset[0];
        size_t colOffset = offset[1];
        size_t sliceRowLength = (shape[0] != NDShape::InferredDimension) ? shape[0] : (maskMatrix->GetNumRows() - rowOffset);
        size_t sliceColLength = (shape[1] != NDShape::InferredDimension) ? shape[1] : (maskMatrix->GetNumCols() - colOffset);
        if ((rowOffset == 0) && (sliceRowLength == maskMatrix->GetNumRows()))
            maskMatrix->ColumnSlice(colOffset, sliceColLength).SetValue((char)maskKind);
        else
        {
            // Since Matrix does not support strides in the row dimension, we will need to create separate slices for each column
            for (size_t i = colOffset; i < (colOffset + sliceColLength); ++i)
            {
                auto column = maskMatrix->ColumnSlice(i, 1);
                column.Reshape(1, maskMatrix->GetNumRows());
                column.ColumnSlice(rowOffset, sliceRowLength).SetValue((char)maskKind);
            }
        }
    }
    
    
    {
    {            assert(index != sampleSize);
            dest[destIndex++] = static_cast<DestType>(index);
        }
        assert(currentp == lastp);
    }
    
        static ParameterInitializer CreateInitializer(const std::wstring& initializerTypeName, double scale, unsigned long seed) 
    {
        if (scale <= 0) 
            InvalidArgument('CreateInitializer: scale value for initializer '%S' cannot be 0.', 
                initializerTypeName.c_str());
    }
    
    // Rand based on Mersenne Twister.
// We use our own distribution in order to match baselines between different operating systems,
// because uniform_distribution is not guaranteed to provide the same numbers on different platforms.
// TODO: Switching to Boost would eliminate this problem.
static inline size_t RandMT(const size_t begin, const size_t end, std::mt19937_64& rng)
{
    const size_t randomNumber = rng();
    return begin + randomNumber % (end - begin);
}
    
    template class DiagTimesNode<float>;
template class DiagTimesNode<double>;
    
    #endif

    
    void
SelectFormat::parseObject(const UnicodeString& /*source*/,
                        Formattable& /*result*/,
                        ParsePosition& pos) const
{
    // Parsing not supported.
    pos.setErrorIndex(pos.getIndex());
}
    
        /**
     * Returns TRUE if this instance represents no constraints on significant
     * digits.
     */
    UBool isNoConstraints() const {
        return fMin == 0 && fMax == INT32_MAX;
    }
    
    U_NAMESPACE_END
    
        // are we comparing different lengths?
    int32_t minLength = getLength();
    int32_t targetLength = target.getLength();
    if (minLength < targetLength) {
        result = UCOL_LESS;
    } else if (minLength == targetLength) {
        result = UCOL_EQUAL;
    } else {
        minLength = targetLength;
        result = UCOL_GREATER;
    }
    
                int complement = target - nums[i];
            if(record.find(complement) != record.end()){
                int res[] = {i, record[complement]};
                return vector<int>(res, res + 2);
            }
    
                    char match;
                if( s[i] == ')' )
                    match = '(';
                else if( s[i] == ']' )
                    match = '[';
                else{
                    assert( s[i] == '}' );
                    match = '{';
                }
    
    using namespace std;
    
    int main() {
    }
    
    // Classic Non-Recursive algorithm for preorder traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
            stack<Command> stack;
        stack.push(Command('go', root) );
        while(!stack.empty()){
            Command command = stack.top();
            stack.pop();
    }
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    #include <iostream>
#include <vector>
#include <stack>
    
    int main() {
    }