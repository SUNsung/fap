
        
        namespace parallel {
    }
    
    
    {  // We had a counted inner array---we need to do an O(N) copy to get the
  // collection into the request local heap.
  auto const apcArr = APCArray::fromHandle(m_arrayHandle);
  auto const col = Object::attach(collections::alloc(m_colType));
  switch (m_colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    fillCollection(static_cast<BaseVector*>(col.get()), apcArr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    fillCollection(static_cast<BaseSet*>(col.get()), apcArr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    fillMap(static_cast<BaseMap*>(col.get()), apcArr);
    break;
  case CollectionType::Pair:
    always_assert(0);
    break;
  }
  return col;
}
    
    public:
  static void Add(InfoVec& out, const char* name, const std::string& value);
  static void AddServerStats(InfoVec& out, const char* name,
                             const char* statsName = nullptr);
    
    #define ERROR_RAISE_WARNING(exp)        \
  int ret = (exp);                      \
  if (ret != 0) {                       \
    raise_warning(                      \
      '%s(): %s',                       \
      __FUNCTION__,                     \
      folly::errnoStr(errno).c_str()    \
    );                                  \
  }                                     \
    
      if (!spath.empty() && !isDirSeparator(spath.back())) {
    spath += getDirSeparator();
  }
  auto fullPath = root + spath;
  if (fullPath.empty()) {
    return;
  }
  if (!callback(spath, true)) {
    return;
  }
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}
}
    
    int64_t File::writeCSV(const Array& fields, char delimiter_char /* = ',' */,
                     char enclosure_char /* = ''' */,
                     char escape_char /* = '\' */) {
  int line = 0;
  int count = fields.size();
  StringBuffer csvline(1024);
    }
    
    template<>
struct regex_iterator_traits<char*> : pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<const char*> : const_pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<wchar_t*> : pointer_iterator_traits<wchar_t>{};
template<>
struct regex_iterator_traits<const wchar_t*> : const_pointer_iterator_traits<wchar_t>{};
//
// the follwoing are needed for ICU support:
//
template<>
struct regex_iterator_traits<unsigned char*> : pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<const unsigned char*> : const_pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<int*> : pointer_iterator_traits<int>{};
template<>
struct regex_iterator_traits<const int*> : const_pointer_iterator_traits<int>{};
    
       format_perl = 0,                                  /* perl style replacement */
   format_default = 0,                               /* ditto. */
   format_sed = match_max << 1,                      /* sed style replacement. */
   format_all = format_sed << 1,                     /* enable all extentions to sytax. */
   format_no_copy = format_all << 1,                 /* don't copy non-matching segments. */
   format_first_only = format_no_copy << 1,          /* Only replace first occurance. */
   format_is_if = format_first_only << 1,            /* internal use only. */
   format_literal = format_is_if << 1                /* treat string as a literal */
    
       const_reference get_last_closed_paren()const
   {
      if(m_is_singular)
         raise_logic_error();
      return m_last_closed_paren == 0 ? m_null : (*this)[m_last_closed_paren];
   }
    
    
    {   ~mem_block_cache()
   {
      while(next)
      {
         mem_block_node* old = next;
         next = next->next;
         ::operator delete(old);
      }
   }
   void* get()
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
     if(next)
      {
         mem_block_node* result = next;
         next = next->next;
         --cached_blocks;
         return result;
      }
      return ::operator new(BOOST_REGEX_BLOCKSIZE);
   }
   void put(void* p)
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
      if(cached_blocks >= BOOST_REGEX_MAX_CACHE_BLOCKS)
      {
         ::operator delete(p);
      }
      else
      {
         mem_block_node* old = static_cast<mem_block_node*>(p);
         old->next = next;
         next = old;
         ++cached_blocks;
      }
   }
};
    
    
    {   BOOST_ASSERT(rep->type == syntax_element_short_set_rep);
   BOOST_ASSERT(rep->next.p != 0);
   BOOST_ASSERT(rep->alt.p != 0);
   BOOST_ASSERT(rep->next.p->type == syntax_element_set);
   BOOST_ASSERT(count < rep->max);
   
   if(position != last)
   {
      // wind forward until we can skip out of the repeat:
      do
      {
         if(!map[static_cast<unsigned char>(traits_inst.translate(*position, icase))])
         {
            // failed repeat match, discard this state and look for another:
            destroy_single_repeat();
            return true;
         }
         ++count;
         ++ position;
         ++state_count;
         pstate = rep->next.p;
      }while((count < rep->max) && (position != last) && !can_start(*position, rep->_map, mask_skip));
   }   
   // remember where we got to if this is a leading repeat:
   if((rep->leading) && (count < rep->max))
      restart = position;
   if(position == last)
   {
      // can't repeat any more, remove the pushed state: 
      destroy_single_repeat();
      if((m_match_flags & match_partial) && (position == last) && (position != search_base))
         m_has_partial_match = true;
      if(0 == (rep->can_be_null & mask_skip))
         return true;
   }
   else if(count == rep->max)
   {
      // can't repeat any more, remove the pushed state: 
      destroy_single_repeat();
      if(!can_start(*position, rep->_map, mask_skip))
         return true;
   }
   else
   {
      pmp->count = count;
      pmp->last_position = position;
   }
   pstate = rep->alt.p;
   return false;
}
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    
    namespace boost{
    }
    
    #ifdef BOOST_MSVC
#  pragma warning(push)
#  pragma warning(disable: 4800)
#endif
    
    Status KafkaTopicsConfigParserPlugin::update(const std::string& source,
                                             const ParserConfig& config) {
  auto topics = config.find(kKafkaTopicParserRootKey);
  if (topics != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(topics->second.doc(), obj);
    data_.add(kKafkaTopicParserRootKey, obj);
  }
  return Status();
}
    
    Status PrometheusMetricsConfigParserPlugin::update(const std::string& source,
                                                   const ParserConfig& config) {
  auto prometheus_targets = config.find(kPrometheusParserRootKey);
  if (prometheus_targets != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(prometheus_targets->second.doc(), obj);
    data_.add(kPrometheusParserRootKey, obj);
  }
    }
    
      // serialize the QueryLogItem and make sure decorations go top level
  auto doc = JSON::newObject();
  auto status = serializeQueryLogItem(item, doc);
  std::string expected = 'test';
  std::string result = doc.doc()['load_test'].GetString();
  EXPECT_EQ(result, expected);
    
    
    {  // This should work.
  ASSERT_TRUE(doc.HasMember('custom_fake'));
  EXPECT_TRUE(doc['custom_fake'].IsNumber());
  EXPECT_EQ(1U, doc['custom_fake'].GetUint());
  EXPECT_FALSE(Flag::getValue('custom_fake').empty());
}
    
    TEST_F(QueryTests, test_query_name_not_found_in_db) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('not_a_real_query', query);
  auto status = cf.getPreviousQueryResults(previous_qd);
  EXPECT_FALSE(status.ok());
  EXPECT_TRUE(previous_qd.empty());
}
    
    TEST_F(AuditTests, test_audit_value_decode) {
  // In the normal case the decoding only removes ''' characters from the ends.
  auto decoded_normal = DecodeAuditPathValues('\'/bin/ls\'');
  EXPECT_EQ(decoded_normal, '/bin/ls');
    }
    
    
    {    return 0;
}

    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_Marmalade_Init(true);
    
        if (device->QueryInterface(IID_PPV_ARGS(&pDXGIDevice)) == S_OK)
        if (pDXGIDevice->GetParent(IID_PPV_ARGS(&pDXGIAdapter)) == S_OK)
            if (pDXGIAdapter->GetParent(IID_PPV_ARGS(&pFactory)) == S_OK)
            {
                g_pd3dDevice = device;
                g_pFactory = pFactory;
            }
    if (pDXGIDevice) pDXGIDevice->Release();
    if (pDXGIAdapter) pDXGIAdapter->Release();
    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
      virtual std::string toString() const CXX11_OVERRIDE;
    
        DHTRoutingTableDeserializer deserializer(family);
    const std::string& dhtFile = e->getOption()->get(
        family == AF_INET ? PREF_DHT_FILE_PATH : PREF_DHT_FILE_PATH6);
    try {
      deserializer.deserialize(dhtFile);
      localNode = deserializer.getLocalNode();
    }
    catch (RecoverableException& e) {
      A2_LOG_ERROR_EX(
          fmt('Exception caught while loading DHT routing table from %s',
              dhtFile.c_str()),
          e);
    }
    if (!localNode) {
      localNode = std::make_shared<DHTNode>();
    }
    
    
    {} // namespace aria2
    
      virtual std::shared_ptr<DHTTask> createBucketRefreshTask() = 0;
    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) CXX11_OVERRIDE;
    
      DHTTaskExecutor periodicTaskQueue2_;
    
      // TODO handle exception thrown by this function.
  std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port) const;
    
    namespace aria2 {
    }
    
      virtual ~DHTUnknownMessage();
    
    bool DNSCache::CacheEntry::contains(const std::string& addr) const
{
  return find(addr) != addrEntries_.end();
}