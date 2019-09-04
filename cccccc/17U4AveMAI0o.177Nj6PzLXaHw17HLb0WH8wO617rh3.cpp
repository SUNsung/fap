
        
            IMF_EXPORT
    FastHufDecoder (const char*& table,
                    int numBytes,
                    int minSymbol,
                    int maxSymbol,
                    int rleSymbol);
    
    template <>
IMF_EXPORT
const char *FloatVectorAttribute::staticTypeName ();
    
    
Slice &
FrameBuffer::operator [] (const string &name)
{
    return this->operator[] (name.c_str());
}
    
    	    if (strncmp (i->second->typeName(), typeName, sizeof (typeName)))
		THROW (IEX_NAMESPACE::InputExc, 'Unexpected type for image attribute '
				      '\'' << name << '\'.');
    
        virtual void	seekp (Int64 pos) = 0;
    
    #include 'ImfInputFile.h'
#include 'ImfOutputPart.h'
#include 'ImfForward.h'
#include 'ImfNamespace.h'
#include 'ImfExport.h'
    
    TEST(StatusOr, TestPointerCopyCtorStatusOk) {
  const int kI = 0;
  StatusOr<const int*> original(&kI);
  StatusOr<const int*> copy(original);
  EXPECT_EQ(original.status(), copy.status());
  EXPECT_EQ(original.ValueOrDie(), copy.ValueOrDie());
}
    
    #include <google/protobuf/stubs/template_util.h>
    
    class GoGoProtoGenerator : public CodeGenerator {
 public:
  virtual bool GenerateAll(const std::vector<const FileDescriptor*>& files,
                           const string& parameter,
                           GeneratorContext* context,
                           string* error) const {
    for (int i = 0; i < files.size(); i++) {
      for (auto file : files) {
        bool can_generate =
            (new_pool_.FindFileByName(file->name()) == nullptr);
        for (int j = 0; j < file->dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->dependency(j)->name()) != nullptr);
        }
        for (int j = 0; j < file->public_dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->public_dependency(j)->name()) != nullptr);
        }
        for (int j = 0; j < file->weak_dependency_count(); j++) {
          can_generate &= (new_pool_.FindFileByName(
              file->weak_dependency(j)->name()) != nullptr);
        }
        if (can_generate) {
          Generate(file, parameter, context, error);
          break;
        }
      }
    }
    }
    }
    
        std::unique_ptr<google::protobuf::io::ZeroCopyOutputStream> output(
        context->Open(basename + '.proto'));
    string content = GetPool()->BuildFile(new_file)->DebugString();
    Printer printer(output.get(), '$');
    printer.WriteRaw(content.c_str(), content.size());
    
      bool has_leaders;   // does the line contain leader dots (.....)?
  bool has_drop_cap;  // does the line have a drop cap?
  int pix_ldistance;  // distance to the left pblock boundary in pixels
  int pix_rdistance;  // distance to the right pblock boundary in pixels
  float pix_xheight;  // guessed xheight for the line
  int average_interword_space; // average space between words in pixels.
    
    
    {}  // namespace tesseract.
    
    bool ParagraphModel::ValidFirstLine(int lmargin, int lindent,
                                    int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + first_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + first_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
    This module may look unnecessarily verbose, but here's the philosophy...
    
        void operator()(const intersecting_geo_read_t &geo_read) {
        ql::env_t ql_env(
            ctx,
            ql::return_empty_normal_batches_t::NO,
            interruptor,
            geo_read.serializable_env,
            trace);
    }
    
    TPTEST(RDBBtree, SindexPostConstruct) {
    recreate_temporary_directory(base_path_t('.'));
    temp_file_t temp_file;
    }
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define INSTANTIATE_TYPED_TEST_CASE_P(Prefix, CaseName, Types) \
  bool gtest_##Prefix##_##CaseName GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTestCase<CaseName, \
          GTEST_CASE_NAMESPACE_(CaseName)::gtest_AllTests_, \
          ::testing::internal::TypeList< Types >::type>::Register(\
              #Prefix, #CaseName, GTEST_REGISTERED_TEST_NAMES_(CaseName))
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ', '
                            << e4 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3
                            << '\n' << e4 << ' evaluates to ' << v4;
}
    
      // Converts a wide C string to a String using the UTF-8 encoding.
  // NULL will be converted to '(null)'.  If an error occurred during
  // the conversion, '(failed to convert from wide string)' is
  // returned.
  static std::string ShowWideCString(const wchar_t* wide_c_str);
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      virtual std::string toString() const CXX11_OVERRIDE;
    
    #include <string>
#include <vector>
#include <memory>
    
    #define READ_CHECK(fp, ptr, count)                                             \
  if (fp.read((ptr), (count)) != (count)) {                                    \
    throw DL_ABORT_EX('Failed to load DHT routing table.');                    \
  }
    
    #endif // D_DHT_ROUTING_TABLE_DESERIALIZER_H

    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    DHTTaskFactoryImpl::~DHTTaskFactoryImpl() = default;
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
      virtual void
  addPeriodicTask1(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
    namespace aria2 {
    }
    
    DNSCache::CacheEntry::~CacheEntry() = default;
    
    bool zend::include(std::string file)
{
    zend_file_handle file_handle;
    int ret = php_stream_open_for_zend_ex(file.c_str(), &file_handle, USE_PATH | STREAM_OPEN_FOR_INCLUDE);
    if (ret != SUCCESS)
    {
        return false;
    }
    }
    
        fd2 = socket(AF_UNIX,SOCK_DGRAM,0);
    strncpy(un2.sun_path, sock2_path, sizeof(un2.sun_path) - 1); 
    bind(fd2,(struct sockaddr *)&un2,sizeof(un2));
    
    TEST(thread_pool, dispatch)
{
    ASSERT_EQ(swThreadPool_create(&pool, 4), SW_OK);
    pool.onTask = thread_onTask;
    ASSERT_EQ(swThreadPool_run(&pool), SW_OK);
    sw_atomic_long_t result = 0;
    }
    
    namespace swoole
{
    }
    
        private:
        const char * m_value;
        redisAsyncContext * m_ctx;
        RedisQtAdapter m_adapter;
    
            if (expire <= 0)
        {
            expire_time = 0;
        }
        else
        {
            expire_time = time(nullptr) + expire;
        }
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = (rand() % (20000 * 37));
        if (key % 37 == 0)
        {
            continue;
        }
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_EQ(ret, 0);
    }
    
    eof_packet::eof_packet(const char *data) : server_packet(data)
{
    swMysqlPacketDump(header.length, header.number, data, 'EOF_Packet');
    // EOF_Packet = Packet header (4 bytes) + 0xFE + warning(2byte) + status(2byte)
    data += SW_MYSQL_PACKET_HEADER_SIZE;
    // int<1>   header  [fe] EOF header
    data += 1;
    // int<2>   warnings    number of warnings
    warning_count = sw_mysql_uint2korr2korr(data);
    data += 2;
    // int<2>   status_flags    Status Flags
    server_status = sw_mysql_uint2korr2korr(data);
    swTraceLog(SW_TRACE_MYSQL_CLIENT, 'EOF_Packet, warnings=%u, status_code=%u', warning_count, server_status);
}
    
    struct _ser_context
{
    HashTable params; /* stores pointers; has to be first */
    struct err_s err;
    zend_llist keys,
    /* common part to res_context ends here */
    allocations;
    Socket *sock;
};
    
    	assert(level == IPPROTO_IPV6);
    
      // Connections
  void createNewConnection(RedisClient::ConnectionConfig config);
    
    
    {  if (m_affectedKeys.size() > 0) {
    performOperation(targetConnection, targetDbIndex);
  } else {
    getAffectedKeys([this, targetConnection, targetDbIndex](QVariant, QString) {
      performOperation(targetConnection, targetDbIndex);
    });
  }
}
    
        auto future = m_connection->cmd(
        {'DUMP', k.toUtf8()}, this, m_dbIndex,
        [=](const RedisClient::Response& r) {
          QList<QByteArray> cmd = {'RESTORE', k.toUtf8(), ttl,
                                   r.value().toByteArray()};
    }
    
      QString getTypeName() const override { return QString('copy_keys'); }
    
    
    { private:
  QSharedPointer<RedisClient::Connection> m_connection;
  QSharedPointer<Events> m_events;
  uint m_dbCount;
};

    
    class RDBImportOperation : public AbstractOperation {
  Q_OBJECT
 public:
  RDBImportOperation(QSharedPointer<RedisClient::Connection> connection,
                     int dbIndex, OperationCallback callback,
                     QSharedPointer<QPython> p,
                     QRegExp keyPattern = QRegExp('*', Qt::CaseSensitive,
                                                  QRegExp::Wildcard));
    }