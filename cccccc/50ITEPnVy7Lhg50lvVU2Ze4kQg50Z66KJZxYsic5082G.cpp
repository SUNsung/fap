
        
        
    {
    {}}
    
      bool operator!=(SrcLoc o) const { return !(*this == o); }
    
    struct APCCollection {
  static APCHandle::Pair Make(const ObjectData*,
                              APCHandleLevel level,
                              bool unserializeObj);
  static void Delete(APCHandle*);
    }
    
    #include 'hphp/runtime/base/apc-local-array.h'
#include 'hphp/runtime/base/mixed-array-defs.h'
#include 'hphp/runtime/base/memory-manager.h'
    
        if (!slash && !semi) {
      raise_warning('rfc2397: invalid meta data');
      return nullptr;
    }
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
      int dstFd = open(dstfile, O_WRONLY | O_CREAT | O_TRUNC, 0666);
  if (dstFd == -1) return -1;
    
    /**
 * Thread-safe dirname().
 */
String dirname(const String& path);
    
        NDArrayViewPtr NDArrayView::SliceView(const std::vector<size_t>& startOffset, const std::vector<size_t>& extent, bool readOnly) const
    {
        auto rank = Shape().Rank();
        if (startOffset.size() != rank)
            InvalidArgument('NDArrayView::SliceView: Rank (%d) of the NDArrayView does not match the dimensionality (%d) of the specified slice offset.', (int)rank, (int)startOffset.size());
    }
    
            void Reset()
        {
            m_loss = { 0.0, 0.0 };
            m_metric = { 0.0, 0.0 };
            m_samples = { 0, 0 };
            m_updates = { 0, 0 };
            m_lastResetTime = std::chrono::high_resolution_clock::now();
        }
    
        auto& pMBLayout = minibatch.begin()->second.pMBLayout;
    // This is only allowed for old readers, which support a single layout for all inputs.
    for (const auto& iter : minibatch)
    {
        assert(iter.second.pMBLayout == pMBLayout);
        // TODO: This should be a runtime check, not an assert() that only runs in Debug.
        UNUSED(iter);
    }
    
        // compute forward backward algorithm
    static void ForwardCompute(Matrix<ElemType>& alpha,
                               Matrix<ElemType>& backtrace,
                               const Matrix<ElemType>& pos_scores, const Matrix<ElemType>& pair_scores,
                               const size_t stt)
    {
        // to-do, shift more than 1 to support muliple sentences per minibatch
        int iNumPos = pos_scores.GetNumCols();
        int iNumLab = pos_scores.GetNumRows();
        size_t iTmp = 0;
    }
    
    class DHTMessageCallback;
    
    
    {} // namespace aria2
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
    DNSCache::CacheEntry::~CacheEntry() = default;