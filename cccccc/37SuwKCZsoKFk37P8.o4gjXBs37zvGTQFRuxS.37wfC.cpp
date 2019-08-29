
        
          // Copy the file out into a temporary file and returns the new path.
  v8::Local<v8::Value> CopyFileOut(v8::Isolate* isolate,
                                   const base::FilePath& path) {
    base::FilePath new_path;
    if (!archive_ || !archive_->CopyFileOut(path, &new_path))
      return v8::False(isolate);
    return mate::ConvertToV8(isolate, new_path);
  }
    
    #include 'base/callback.h'
#include 'base/values.h'
#include 'native_mate/handle.h'
#include 'shell/browser/api/event_emitter.h'
#include 'shell/common/error_util.h'
#include 'shell/common/promise_util.h'
    
    #endif  // SHELL_COMMON_ERROR_UTIL_H_

    
    #endif  // NATIVE_MATE_NATIVE_MATE_PERSISTENT_DICTIONARY_H_

    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary dict(isolate, exports);
  dict.Set('autoUpdater', AutoUpdater::Create(isolate));
  dict.Set('AutoUpdater', AutoUpdater::GetConstructor(isolate)
                              ->GetFunction(context)
                              .ToLocalChecked());
}
    
    
    {}  // namespace
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
      // Fills in the x-height range accepted by the given unichar_id in blob
  // coordinates, given its bounding box in the usual baseline-normalized
  // coordinates, with some initial crude x-height estimate (such as word
  // size) and this denoting the transformation that was used.
  // Also returns the amount the character must have shifted up or down.
  void XHeightRange(int unichar_id, const UNICHARSET& unicharset,
                    const TBOX& bbox,
                    float* min_xht,
                    float* max_xht,
                    float* yshift) const;
    
    #endif  // TESSERACT_CCSTRUCT_OCRPARA_H_

    
    
    {  /* Accept modes which occur between the above rejection groups */
  R_NN_ACCEPT,          // NN acceptance
  R_HYPHEN_ACCEPT,      // Hyphen acceptance
  R_MM_ACCEPT,          // Matrix match acceptance
  R_QUALITY_ACCEPT,     // Accept word in good quality doc
  R_MINIMAL_REJ_ACCEPT  // Accept EVERYTHING except tess failures
};
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
      // A hole in the heap exists at hole_index, and we want to fill it with the
  // given pair. SiftDown sifts the hole downward to the correct position and
  // returns the destination index without actually putting pair there.
  int SiftDown(int hole_index, const Pair& pair) {
    int heap_size = heap_.size();
    int child;
    while ((child = LeftChild(hole_index)) < heap_size) {
      if (child + 1 < heap_size && heap_[child + 1] < heap_[child])
        ++child;
      if (heap_[child] < pair) {
        heap_[hole_index] = heap_[child];
        hole_index = child;
      } else {
        break;
      }
    }
    return hole_index;
  }
    
    /**----------------------------------------------------------------------------
          Public Function Prototypes
----------------------------------------------------------------------------**/
void InitIntegerFX();
    
    namespace tesseract {
    }
    
        /**
     * Allocates optimes for new entries in the oplog. Returns the new optimes in a vector along
     * with their terms.
     */
    std::vector<OplogSlot> getNextOpTimes(OperationContext* opCtx, std::size_t count);
    
    #include 'mongo/base/status.h'
#include 'mongo/util/functional.h'
    
    /**
 * tracks usage by collection
 */
class Top {
public:
    static Top& get(ServiceContext* service);
    }
    
    
ScriptSet &ScriptSet::set(UScriptCode script, UErrorCode &status) {
    if (U_FAILURE(status)) {
        return *this;
    }
    if (script < 0 || script >= (int32_t)sizeof(bits) * 8) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return *this;
    }
    uint32_t index = script / 32;
    uint32_t bit   = 1 << (script & 31);
    bits[index] |= bit;
    return *this;
}
    
    #define LOW_A             ((UChar)0x0061)
#define LOW_B             ((UChar)0x0062)
#define LOW_C             ((UChar)0x0063)
#define LOW_D             ((UChar)0x0064)
#define LOW_E             ((UChar)0x0065)
#define LOW_F             ((UChar)0x0066)
#define LOW_G             ((UChar)0x0067)
#define LOW_H             ((UChar)0x0068)
#define LOW_I             ((UChar)0x0069)
#define LOW_J             ((UChar)0x006a)
#define LOW_K             ((UChar)0x006B)
#define LOW_L             ((UChar)0x006C)
#define LOW_M             ((UChar)0x006D)
#define LOW_N             ((UChar)0x006E)
#define LOW_O             ((UChar)0x006F)
#define LOW_P             ((UChar)0x0070)
#define LOW_Q             ((UChar)0x0071)
#define LOW_R             ((UChar)0x0072)
#define LOW_S             ((UChar)0x0073)
#define LOW_T             ((UChar)0x0074)
#define LOW_U             ((UChar)0x0075)
#define LOW_V             ((UChar)0x0076)
#define LOW_W             ((UChar)0x0077)
#define LOW_X             ((UChar)0x0078)
#define LOW_Y             ((UChar)0x0079)
#define LOW_Z             ((UChar)0x007A)
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
                    fstream.PutMarker(FileMarker::fileMarkerBeginSection, L'BSyncPeriodInSamples'); 
                fstream << m_syncPeriodPerWorker; 
                fstream.PutMarker(FileMarker::fileMarkerEndSection, L'ESyncPeriodInSamples');
    
                    std::size_t firstDotPos = name.find_first_of('.');
                if (firstDotPos == std::string::npos)
                {
                    LogicError('nodeParam of type \'ndlTypeDotParameter\' doesn't have a dot in its name: %s', name.c_str());
                }
    
        // SetMacroDefinitionsAllowed - allow macro definitions
    // macroAllowed - can macros be defined in this script?
    void SetMacroDefinitionsAllowed(bool macroAllowed)
    {
        m_noDefinitions = !macroAllowed;
    }
    
        // ReplaceAppend - replace an existing value with another value, or append if it appears to be a 'set' type
    ConfigValue& ReplaceAppend(const std::string& configValue)
    {
        static const std::string openBraces = '[';
    }
    
        // dump all nodes in the network to file
    void DumpAllNodesToFile(const bool printValues,
                            const bool printMetadata,
                            const std::wstring outputFile)
    {
        File fstream(outputFile,
                     FileOptions::fileOptionsText | FileOptions::fileOptionsWrite);
    }
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    
    {  void setTimeout(std::chrono::seconds timeout)
  {
    timeout_ = std::move(timeout);
  }
};
    
    DHTResponseMessage::~DHTResponseMessage() = default;
    
    void DHTRoutingTable::getClosestKNodes(
    std::vector<std::shared_ptr<DHTNode>>& nodes,
    const unsigned char* key) const
{
  dht::findClosestKNodes(nodes, root_.get(), key);
}
    
      Time serializedTime_;
    
    namespace aria2 {
    }
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createPeerLookupTask(
    const std::shared_ptr<DownloadContext>& ctx, uint16_t tcpPort,
    const std::shared_ptr<PeerStorage>& peerStorage)
{
  auto task = std::make_shared<DHTPeerLookupTask>(ctx, tcpPort);
  // TODO this may be not freed by RequestGroup::releaseRuntimeResource()
  task->setPeerStorage(peerStorage);
  setCommonProperty(task);
  return task;
}
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
    DHTTokenTracker::DHTTokenTracker(const unsigned char* initialSecret)
{
  memcpy(secret_[0], initialSecret, SECRET_SIZE);
  memcpy(secret_[1], initialSecret, SECRET_SIZE);
}
    
    
    {} // namespace aria2

    
    class DHTTokenUpdateCommand : public TimeBasedCommand {
private:
  DHTTokenTracker* tokenTracker_;
    }
    
      template <typename OutputIterator>
  void findAll(OutputIterator out, const std::string& hostname,
               uint16_t port) const
  {
    auto target = std::make_shared<CacheEntry>(hostname, port);
    auto i = entries_.find(target);
    if (i != entries_.end()) {
      (*i)->getAllGoodAddrs(out);
    }
  }
    
    
    {
    {
    {            p.z = (r * ( 1 - cosBeta ) * cosTheta);// '100' didn't work for
            p.x = p.z * sinf(rotateByYAxis) + p.x * cosf(rotateByYAxis);
            p.z = p.z * cosf(rotateByYAxis) - p.x * sinf(rotateByYAxis);
            p.z/=7;
            //    Stop z coord from dropping beneath underlying page in a transition
            // issue #751
            if( p.z < 0.5f )
            {
                p.z = 0.5f;
            }
            
            // Set new coords
            p.x += getGridRect().origin.x;
            setVertex(Vec2(i, j), p);
            
        }
    }
}
    
    /**
@brief The delegate class for ActionTween.
@details If you want to use ActionTween on a node.
        You should implement the node follow these steps:
        1. The node should be inherit from ActionTweenDelegate.
        2. Override the virtual method updateTweenAction in the node.
    
        /**
     * get vertex count
     * @return number of vertices
     */
    unsigned int getVertCount() const;
    
    /**
     * get triangles count
     * @return number of triangles
     */
    unsigned int getTrianglesCount() const;
    
    /// @cond DO_NOT_SHOW