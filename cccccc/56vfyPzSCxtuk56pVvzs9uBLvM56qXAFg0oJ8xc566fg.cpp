
        
        const std::vector<UniValue>& UniValue::getValues() const
{
    if (typ != VOBJ && typ != VARR)
        throw std::runtime_error('JSON value is not an object or array as expected');
    return values;
}
    
        UniValue v3;
    BOOST_CHECK(v3.setNumStr('32482348723847471234'));
    BOOST_CHECK_THROW(v3.get_int64(), std::runtime_error);
    BOOST_CHECK(v3.setNumStr('1000'));
    BOOST_CHECK_EQUAL(v3.get_int64(), 1000);
    
      iter->Seek('a');
  ASSERT_EQ(IterStatus(iter), 'a->va');
  iter->Next();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
    
    Status DumpDescriptor(Env* env, const std::string& fname, WritableFile* dst) {
  return PrintLogContents(env, fname, VersionEditPrinter, dst);
}
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
  virtual std::string GetName() const { return '[stdout]'; }
};
    
      void openServerStats(QSharedPointer<RedisClient::Connection> connection);
    
    BulkOperations::AbstractOperation::AbstractOperation(
    QSharedPointer<RedisClient::Connection> connection, int dbIndex,
    OperationCallback callback, QRegExp keyPattern)
    : m_connection(connection),
      m_dbIndex(dbIndex),
      m_keyPattern(keyPattern),
      m_currentState(State::READY),
      m_progress(0),
      m_callback(callback) {}
    
    QVariant QmlUtils::compress(const QVariant &value, unsigned alg) {
  return qcompress::compress(value.toByteArray(), alg);
}
    
     public:
  Manager(QSharedPointer<ConnectionsModel> model, QSharedPointer<QPython> p);
    
      typedef std::function<void(QRegExp affectedKeysFilter, long processed,
                             const QStringList& errors)>
      OperationCallback;