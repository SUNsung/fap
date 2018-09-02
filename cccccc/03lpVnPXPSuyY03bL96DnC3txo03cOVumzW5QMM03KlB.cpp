
        
        /*
 * Call a function that produces a return value for each element of
 * `inputs' in parallel, and collect the results.
 *
 * Requires: the type returned from the function call must be
 * DefaultConstructible, and either MoveAssignable or Assignable.
 *
 * If `func' throws an exception, the results of the output vector
 * will contain some default-constructed values.
 */
template<class Func, class Items>
auto map(Items&& inputs, Func func) -> std::vector<decltype(func(inputs[0]))> {
  std::vector<decltype(func(inputs[0]))> retVec(inputs.size());
  auto const retMem = &retVec[0];
    }
    
      /*
   * Patch a branch to the correct target.
   *
   * It decodes the branch @jmp to decide whether it's an absolute branch or an
   * offset branch and patches it properly.
   */
  static void patchBranch(CodeAddress jmp, CodeAddress dest);
  static void patchAbsolute(CodeAddress jmp, CodeAddress dest);
    
    #include <string>
#include <utility>
#include <vector>
    
    inline void* ExecutionContext::operator new(size_t s) {
  // Can't use req::make_raw here because we want raw memory, not a constructed
  // object. This gets called generically from ThreadLocal, so we can't just
  // change the call-sites.
  return req::malloc(s, type_scan::getIndexForMalloc<ExecutionContext>());
}
    
    struct Options;
struct FileMetaData;
    
    
    {    fprintf(stderr,
            'expected=%d..%d; got=%d; bad_keys=%d; bad_values=%d; missed=%d\n',
            min_expected, max_expected, correct, bad_keys, bad_values, missed);
    ASSERT_LE(min_expected, correct);
    ASSERT_GE(max_expected, correct);
  }
    
        Slice key = input->key();
    if (compact->compaction->ShouldStopBefore(key) &&
        compact->builder != nullptr) {
      status = FinishCompactionOutputFile(compact, input);
      if (!status.ok()) {
        break;
      }
    }
    
    class DBImpl : public DB {
 public:
  DBImpl(const Options& options, const std::string& dbname);
  virtual ~DBImpl();
    }
    
    
    {}  // namespace
    
    
    {}  // namespace leveldb
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
    TEST(LogTest, MissingLastIsIgnored) {
  Write(BigString('bar', kBlockSize));
  // Remove the LAST block, including header.
  ShrinkSize(14);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ('', ReportMessage());
  ASSERT_EQ(0, DroppedBytes());
}
    
    
    {
    {  void ArchiveFile(const std::string& fname) {
    // Move into another directory.  E.g., for
    //    dir/foo
    // rename to
    //    dir/lost/foo
    const char* slash = strrchr(fname.c_str(), '/');
    std::string new_dir;
    if (slash != nullptr) {
      new_dir.assign(fname.data(), slash - fname.data());
    }
    new_dir.append('/lost');
    env_->CreateDir(new_dir);  // Ignore error
    std::string new_file = new_dir;
    new_file.append('/');
    new_file.append((slash == nullptr) ? fname.c_str() : slash + 1);
    Status s = env_->RenameFile(fname, new_file);
    Log(options_.info_log, 'Archiving %s: %s\n',
        fname.c_str(), s.ToString().c_str());
  }
};
}  // namespace
    
    bool Action::isDone() const
{
    return true;
}
    
        p = reverse->getControlPointAtIndex(reverse->count()-1);
    reverse->removeControlPointAtIndex(reverse->count()-1);
    
    // implementation of ReuseGrid
    
    // FIXME: Passing 'const O *' instead of 'const O&' because HASH_FIND_IT requires the address of a pointer
// and, it is not possible to get the address of a reference
size_t ActionManager::getNumberOfRunningActionsInTargetByTag(const Node *target,
                                                             int tag)
{
    CCASSERT(tag != Action::INVALID_TAG, 'Invalid tag value!');
    }
    
        /** 
     * @brief Initializes with a duration and destination percentage. 
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, float percent);
    
        if (_once == false)
    {
        for (i = 0; i < _gridSize.width; ++i)
        {
            for (j = 0; j < _gridSize.height; ++j)
            {
                Quad3 coords = getOriginalTile(Vec2(i ,j));
                
                // X
                coords.bl.x += ( rand() % (_randrange*2) ) - _randrange;
                coords.br.x += ( rand() % (_randrange*2) ) - _randrange;
                coords.tl.x += ( rand() % (_randrange*2) ) - _randrange;
                coords.tr.x += ( rand() % (_randrange*2) ) - _randrange;
                
                // Y
                coords.bl.y += ( rand() % (_randrange*2) ) - _randrange;
                coords.br.y += ( rand() % (_randrange*2) ) - _randrange;
                coords.tl.y += ( rand() % (_randrange*2) ) - _randrange;
                coords.tr.y += ( rand() % (_randrange*2) ) - _randrange;
    }
    }
    }
    
    CC_CONSTRUCTOR_ACCESS:
    FadeOutTRTiles() {}
    virtual ~FadeOutTRTiles() {}
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
     ActionTween is an action that lets you update any property of an object.
 For example, if you want to modify the 'width' property of a target from 200 to 300 in 2 seconds, then:
    
        /** Returns a Animation that was previously added.
     * If the name is not found it will return nil.
     * You should retain the returned copy if you are going to use it.
     *
     * @return A Animation that was previously added. If the name is not found it will return nil.
     */
    Animation* getAnimation(const std::string& name);
    /**
     * @deprecated. Use getAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE Animation* animationByName(const std::string& name){ return getAnimation(name); }