
        
        template <> IMF_EXPORT
void EnvmapAttribute::writeValueTo (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream &,
                                    int) const;
    
    
    
    
    {        if (headers[i].hasType() && isImage(headers[i].type()) == false)
            version |= NON_IMAGE_FLAG;
    }
    
            REPLACE_EXC (e, 'Cannot read image file '
                     '\'' << fileName << '\'. ' << e.what());
        throw;
    }
    catch (...)
    {
        if (is)          delete is;
        if (_data && !_data->multiPartBackwardSupport && _data->_streamData)
        {
            delete _data->_streamData;
        }
        if (_data)       delete _data;
    
            IMF_EXPORT
        InputPartData(InputStreamMutex* mutex, const Header &header,
                      int partNumber, int numThreads, int version);
    
    void ConnectionsTree::TreeItem::lock() {
  m_locked = true;
  emit m_model.itemChanged(getSelf());
}
    
        auto future = m_connection->cmd(
        {'DUMP', k.toUtf8()}, this, m_dbIndex,
        [=](const RedisClient::Response& r) {
          QList<QByteArray> cmd = {'RESTORE', k.toUtf8(), ttl,
                                   r.value().toByteArray()};
    }
    
      if (m_affectedKeys.size() == 0) {
    return returnResults();
  }
    
      auto returnResults = [this]() {
    m_callback(m_keyPattern, m_progress, m_errors);
  };