
        
        void AtomContentClient::AddPepperPlugins(
    std::vector<content::PepperPluginInfo>* plugins) {
  AddPepperFlashFromCommandLine(plugins);
#if defined(WIDEVINE_CDM_AVAILABLE) && BUILDFLAG(ENABLE_LIBRARY_CDMS)
  AddWidevineCdmFromCommandLine(plugins);
#endif  // defined(WIDEVINE_CDM_AVAILABLE) && BUILDFLAG(ENABLE_LIBRARY_CDMS)
#if defined(ENABLE_PDF_VIEWER)
  ComputeBuiltInPlugins(plugins);
#endif  // defined(ENABLE_PDF_VIEWER)
}
    
    // static
void UvTaskRunner::OnClose(uv_handle_t* handle) {
  delete reinterpret_cast<uv_timer_t*>(handle);
}
    
    
    {}  // namespace mate
    
    #endif  // ATOM_BROWSER_API_ATOM_API_BOX_LAYOUT_H_

    
      // views::ButtonListener:
  void ButtonPressed(views::Button* sender, const ui::Event& event) override;
    
    #endif  // ATOM_BROWSER_API_ATOM_API_DOWNLOAD_ITEM_H_

    
      void PurchaseProduct(const std::string& product_id, mate::Arguments* args);
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    private:
    reverse_lock(reverse_lock const&);
    reverse_lock& operator=(reverse_lock const&);
    
        if (len > 0) {
        /* Compute the inverse of the last z coordinate, and use it to compute the last affine output. */
        secp256k1_fe_inv(&zi, &a[i].z);
        secp256k1_ge_set_gej_zinv(&r[i], &a[i], &zi);
    }
    
    #include <boost/test/unit_test.hpp>
    
    #endif  // ANDROID_BUILD

    
    #ifndef TESSERACT_ARCH_DOTPRODUCTSSE_H_
#define TESSERACT_ARCH_DOTPRODUCTSSE_H_
    
    // Number of outputs held in each register. 8 x 32 bit ints.
constexpr int kNumOutputsPerRegister = 8;
// Maximum number of registers that we will use.
constexpr int kMaxOutputRegisters = 8;
// Number of inputs in the inputs register.
constexpr int kNumInputsPerRegister = 32;
// Number of inputs in each weight group.
constexpr int kNumInputsPerGroup = 4;
// Number of groups of inputs to be broadcast.
constexpr int kNumInputGroups = kNumInputsPerRegister / kNumInputsPerGroup;
    
    // Copy the first N words from the source string to the target string.
// Words are delimited by '_'.
void ParamsEditor::GetFirstWords(
                     const char *s,  // source string
                     int n,          // number of words
                     char *t         // target string
                    ) {
  int full_length = strlen(s);
  int reqd_len = 0;              // No. of chars requird
  const char *next_word = s;
    }
    
    
    {    _radZ = (float)CC_DEGREES_TO_RADIANS(_angleZ);
    _radX = (float)CC_DEGREES_TO_RADIANS(_angleX);
}
    
        /** Initializes a Catmull Rom config with a capacity hint.
     *
     * @js NA
     * @param capacity The size of the array.
     * @return True.
     */
    bool initWithCapacity(ssize_t capacity);
    
    void ActionEase::stop(void)
{
    if (_inner)
        _inner->stop();
    
    ActionInterval::stop();
}
    
    //
// CallFunc
//
    
    
    {    return false;
}
    
    #endif // __ACTION_CCPAGETURN3D_ACTION_H__

    
        bool init(void);
    
    ssize_t AtlasNode::getQuadsToDraw() const
{
    return _quadsToDraw;
}
    
    TEST_F(DBTestCompactionFilter, SkipUntilWithBloomFilter) {
  BlockBasedTableOptions table_options;
  table_options.whole_key_filtering = false;
  table_options.filter_policy.reset(NewBloomFilterPolicy(100, false));
    }
    
    // Simple implementation of SlicePart variants of Put().  Child classes
// can override these method with more performant solutions if they choose.
Status WriteBatchBase::Put(ColumnFamilyHandle* column_family,
                           const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
      // When an actor (column family) requests a stop token, all writes will be
  // stopped until the stop token is released (deleted)
  std::unique_ptr<WriteControllerToken> GetStopToken();
  // When an actor (column family) requests a delay token, total delay for all
  // writes to the DB will be controlled under the delayed write rate. Every
  // write needs to call GetDelay() with number of bytes writing to the DB,
  // which returns number of microseconds to sleep.
  std::unique_ptr<WriteControllerToken> GetDelayToken(
      uint64_t delayed_write_rate);
  // When an actor (column family) requests a moderate token, compaction
  // threads will be increased
  std::unique_ptr<WriteControllerToken> GetCompactionPressureToken();
    
    class PosixHelper {
 public:
  static size_t GetUniqueIdFromFile(int fd, char* id, size_t max_size);
};
    
    class DHTNode;
class DHTRoutingTable;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTPeerAnnounceStorage;
class DHTTokenTracker;
class DHTMessageDispatcher;
class DHTMessageReceiver;
class DHTMessageFactory;
    
      void onReceived(const DHTPingReplyMessage* message);
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
    
    {} // namespace aria2

    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
      int getNumConcurrent() const { return numConcurrent_; }
    
    namespace aria2 {
    }
    
    DHTTaskQueueImpl::DHTTaskQueueImpl()
    : periodicTaskQueue1_(NUM_CONCURRENT_TASK),
      periodicTaskQueue2_(NUM_CONCURRENT_TASK),
      immediateTaskQueue_(NUM_CONCURRENT_TASK)
{
}
    
    namespace aria2 {
    }
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H

    
    DNSCache::CacheEntry::CacheEntry(const CacheEntry& c) = default;
    
    
    {  // For Rest parameters and Strict arguments, the copying of parameters from
  // the stack into the arguments object is straight-forward and shares much of
  // the same underlying logic, which is encapsulated by this function. It
  // allocates an arguments-like object of size |base_size| with the map |map|,
  // and then copies |rest_count| arguments from the stack frame pointed to by
  // |frame_ptr| starting from |first_arg|. |arg_count| == |first_arg| +
  // |rest_count|.
  Node* ConstructParametersObjectFromArgs(Node* map, Node* frame_ptr,
                                          Node* arg_count, Node* first_arg,
                                          Node* rest_count,
                                          ParameterMode param_mode,
                                          int base_size);
};
    
    namespace v8 {
namespace internal {
    }
    }
    
    // ES6 #sec-boolean.prototype.tostring
TF_BUILTIN(BooleanPrototypeToString, CodeStubAssembler) {
  Node* context = Parameter(Descriptor::kContext);
  Node* receiver = Parameter(Descriptor::kReceiver);
    }
    
    namespace v8 {
namespace internal {
    }
    }
    
    #if DEBUG
  DebugSanityCheckAtomicIndex(array, index_word32, context);
#endif
    
      TNode<Int32T> LoadSurrogatePairAt(SloppyTNode<String> string,
                                    SloppyTNode<IntPtrT> length,
                                    SloppyTNode<IntPtrT> index,
                                    UnicodeEncoding encoding);