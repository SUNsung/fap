
        
        bool NwCurrentWindowInternalReloadIgnoringCacheFunction::RunAsync() {
  content::WebContents* web_contents = GetSenderWebContents();
  web_contents->GetController().Reload(content::ReloadType::BYPASSING_CACHE, false);
  SendResponse(true);
  return true;
}
    
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
    
    
    {} // namespace nwapi

    
    namespace nw {
    }
    
     protected:
  ~NwAppGetArgvSyncFunction() override;
    
    
    {
} // namespace extensions
#endif

    
            // TODO: encapsulate it into a destructor? Note: Cannot throw exceptions in destructor.
        void DoneWithCurrentSubMinibatch(size_t iSubminibatch)
        {
            // accumulate gradient here
            for (auto x : m_cachedGradient)
            {
                wstring nodename = x.first;
                if (m_LearnableNodePtr.find(nodename) == m_LearnableNodePtr.end())
                {
                    RuntimeError('ERROR: in DoneWithCurrentSubMinibatch: node %ls not found in LeanrableNode', nodename.c_str());
                }
                shared_ptr<ComputationNode<ElemType>> pNode = m_LearnableNodePtr[nodename];
                m_cachedGradient.GetInputMatrix<ElemType>(nodename) += pNode->Gradient();
                pNode->Gradient().SetValue(0);
            }
            // accumulate criterion value
            if (!m_netCriterionNodes.empty())
            {
                Matrix<ElemType>::AddElementToElement(m_netCriterionNodes[0]->Value(), 0, 0,
                                                      *m_netCriterionAccumulator, 0, 0);
                m_netCriterionNodes[0]->Value().SetValue(0);
            }
            // accumulate evaluation value
            for (size_t i = 0; i < m_netEvaluationNodes.size(); i++)
            {
                Matrix<ElemType>::AddElementToElement(m_netEvaluationNodes[i]->Value(), 0, 0,
                                                      *m_netEvaluationAccumulator, 0, i);
                m_netEvaluationNodes[i]->Value().SetValue(0);
            }
    }
    
    struct GradientUpdateInfo
{
    GradientsUpdateType type = GradientsUpdateType::AdaGrad;
    float gaussianNoiseInjectStd = 0.0075f;
    }
    
    void GranularGPUDataTransferer::RecordGPUToCPUCopy()
{
    cudaEventRecord(m_fetchCompleteEvent, GetFetchStream()) || 'cudaEventRecord failed';
}
    
            // Sync during or after all iters of a BN node are equivalent
        if (useParallelTrain)
        {
            if (m_gradHeader == nullptr)
            {
                m_gradHeader.reset(DistGradHeader::Create(evalNodes.size()), [](DistGradHeader* ptr)
                {
                    DistGradHeader::Destroy(ptr);
                });
            }
    }
    
    // -----------------------------------------------------------------------
// functions exposed by this module
// -----------------------------------------------------------------------
    
    // TrimQuotes - trim surrounding quotation marks
// str - string to trim
void TrimQuotes(std::string& str)
{
    if (str.empty())
        return;
    if (str.front() == ''' && str.back() == ''')
        str = str.substr(1, str.size() - 2);
}
    
    /*static*/ class ProgressTracing
{
    bool m_enabled;
    bool m_tracingFlag;
    bool m_timestampFlag;        // TODO: What does this do? TODO: camelCase
    size_t m_totalNumberOfSteps; // total number of epochs in entire training run
    size_t m_currentStepOffset;  // current offset
    Timer m_progressTracingTimer;
    }
    
    #if 0
    // save a float4 to RAM bypassing the cache ('without polluting the cache')
    void storewithoutcache (float4 * p4) const
    {
        // _mm_stream_ps ((float*) p4, v);
        *p4 = v;
    }
    
      /// Construct an acceptor without opening it.
  /**
   * This constructor creates an acceptor without opening it to listen for new
   * connections. The open() function must be called before the acceptor can
   * accept new socket connections.
   *
   * @param io_service The io_service object that the acceptor will use to
   * dispatch handlers for any asynchronous operations performed on the
   * acceptor.
   */
  explicit basic_socket_acceptor(boost::asio::io_service& io_service)
    : basic_io_object<SocketAcceptorService>(io_service)
  {
  }
    
    namespace boost {
namespace asio {
    }
    }
    
      std::size_t check_for_completion(
      const boost::system::error_code& ec,
      std::size_t total_transferred)
  {
    return detail::adapt_completion_condition_result(
        completion_condition_(ec, total_transferred));
  }
    
      // Obtain the value at the top of the stack.
  static Value* top()
  {
    context* elem = top_;
    return elem ? elem->value_ : 0;
  }
    
    } // namespace date_time
namespace posix_time {
    
    #ifndef BOOST_ASIO_DETAIL_DESCRIPTOR_WRITE_OP_HPP
#define BOOST_ASIO_DETAIL_DESCRIPTOR_WRITE_OP_HPP
    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      bool ContainsWord(const Word &W) const {
    return std::any_of(begin(), end(), [&](const DictionaryEntry &DE) {
      return DE.GetW() == W;
    });
  }
  const DictionaryEntry *begin() const { return &DE[0]; }
  const DictionaryEntry *end() const { return begin() + Size; }
  DictionaryEntry & operator[] (size_t Idx) {
    assert(Idx < Size);
    return DE[Idx];
  }
  void push_back(DictionaryEntry DE) {
    if (Size < kMaxDictSize)
      this->DE[Size++] = DE;
  }
  void clear() { Size = 0; }
  bool empty() const { return Size == 0; }
  size_t size() const { return Size; }
    
    char GetSeparator() {
  return '/';
}
    
      if ((Res = ParseDrive(FileName, Pos)))
    return Pos + Res;
    
    
    {    size_t BlockCoverage;
    size_t CallerCalleeCoverage;
    // Precalculated number of bits in CounterBitmap.
    size_t CounterBitmapBits;
    std::vector<uint8_t> CounterBitmap;
    ValueBitMap VPMap;
  };
    
    
    {  bool Parse(std::istream &IS, bool ParseCoverage);
  bool Parse(const std::string &Str, bool ParseCoverage);
  void ParseOrExit(std::istream &IS, bool ParseCoverage);
  size_t Merge(std::vector<std::string> *NewFiles);
};
    
    // The rest is added for LibFuzzer
void ComputeSHA1(const uint8_t *Data, size_t Len, uint8_t *Out) {
  sha1nfo s;
  sha1_init(&s);
  sha1_write(&s, (const char*)Data, Len);
  memcpy(Out, sha1_result(&s), HASH_LENGTH);
}