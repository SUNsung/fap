
        
        void SILLayout::Profile(llvm::FoldingSetNodeID &id,
                        CanGenericSignature Generics,
                        ArrayRef<SILField> Fields) {
  id.AddPointer(Generics.getPointer());
  for (auto &field : Fields) {
    id.AddPointer(field.getLoweredType().getPointer());
    id.AddBoolean(field.isMutable());
  }
}

    
    using namespace swift::sys;
using llvm::StringRef;
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
      bool isStaticMember() const {
    return isImportAsMember() && !selfIndex.hasValue();
  }
    
    
bool Mangle::isNonAscii(StringRef str) {
  for (unsigned char c : str) {
    if (c >= 0x80)
      return true;
  }
  return false;
}
    
    bool ArgsToFrontendInputsConverter::readInputFilesFromCommandLine() {
  bool hadDuplicates = false;
  for (const Arg *A :
       Args.filtered(options::OPT_INPUT, options::OPT_primary_file)) {
    hadDuplicates = addFile(A->getValue()) || hadDuplicates;
  }
  return false; // FIXME: Don't bail out for duplicates, too many tests depend
  // on it.
}
    
    class ArgsToFrontendInputsConverter {
  DiagnosticEngine &Diags;
  const llvm::opt::ArgList &Args;
    }
    
    class DHTNode;
class DHTBucket;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTBucketTreeNode;
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
    
    {} // namespace aria2

    
      size_t getExecutingTaskSize() const { return execTasks_.size(); }
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    #include <memory>
    
    bool AccelAmplitude::initWithAction(Action *action, float duration)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _rate = 1.0f;
        _other = (ActionInterval*)(action);
        action->retain();
    }
    }
    
    /** @class Show
* @brief Show the node.
**/
class CC_DLL Show : public ActionInstant
{
public:
    /** Allocates and initializes the action.
     *
     * @return  An autoreleased Show object.
     */
    static Show * create();
    }
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.