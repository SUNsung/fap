
        
        
    {  if (!wasInline) delete[] oldAllocation;
}  
    
        if (node->Further || node->Right) {
      IndentScope ms(this, (childKind == ChildKind::Right ||
                            childKind == ChildKind::Further ||
                            childKind == ChildKind::Root) ? '  ' : '| ');
    }
    
      // If the result type matches the context, remove the context type from the
  // prefix of the name.
  bool resultTypeMatchesContext = returnsSelf || (resultType == contextType);
  if (resultTypeMatchesContext) {
    StringRef newBaseName = omitNeedlessWordsFromPrefix(baseName, contextType,
                                                        scratch);
    if (newBaseName != baseName) {
      baseName = newBaseName;
      anyChanges = true;
    }
  }
    
    
    {  return GraphemeClusterBreakProperty::Other;
}
    
    bool Mangle::needsPunycodeEncoding(StringRef str) {
  for (unsigned char c : str) {
    if (!isValidSymbolChar(c))
      return true;
  }
  return false;
}
    
    
    {
    {    switch (Bytes) {
    case 1:
      OutUTF8.push_back(S);
      break;
    case 2: {
      uint8_t Byte2 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte1 = S | 0xC0;
      OutUTF8.push_back(Byte1);
      OutUTF8.push_back(Byte2);
      break;
    }
    case 3: {
      uint8_t Byte3 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte2 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte1 = S | 0xE0;
      OutUTF8.push_back(Byte1);
      OutUTF8.push_back(Byte2);
      OutUTF8.push_back(Byte3);
      break;
    }
    case 4: {
      uint8_t Byte4 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte3 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte2 = (S | 0x80) & 0xBF;
      S >>= 6;
      uint8_t Byte1 = S | 0xF0;
      OutUTF8.push_back(Byte1);
      OutUTF8.push_back(Byte2);
      OutUTF8.push_back(Byte3);
      OutUTF8.push_back(Byte4);
      break;
    }
    }
  }
  return true;
}
    
    void MergeModuleJobAction::anchor() {}
    
    
    {
b2Polygon ConvexHull(b2Vec2* v, int nVert);
b2Polygon ConvexHull(float32* cloudX, float32* cloudY, int32 nVert);
}
#endif

    
    #include 'b2Glue.h'
    
    
    
    Block4x4Encoding is the abstract base class for the different encoders.  Each encoder targets a 
particular file format (e.g. ETC1, RGB8, RGBA8, R11)
    
    		unsigned int	m_uiEncodingIterations;
		bool			m_boolDone;						// all iterations have been done
		ErrorMetric		m_errormetric;
    
    
    {	};
    
    				iDRed = iRed2 - iRed1;
				iDGreen = iGreen2 - iGreen1;
				iDBlue = iBlue2 - iBlue1;
    
      /* The next level is to group blue strings into style-specific sets. */
    
        FT_Fixed         org_scale;
    FT_Pos           org_delta;
    
    #define FASTLZ_VERSION 0x000100
    
    #if defined(OPUS_ARM_INLINE_EDSP)
#include 'arm/kiss_fft_armv5e.h'
#endif
#if defined(MIPSr1_ASM)
#include 'mips/kiss_fft_mipsr1.h'
#endif
    
    void opus_fft_neon(const kiss_fft_state *st,
                   const kiss_fft_cpx *fin,
                   kiss_fft_cpx *fout);
    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
      virtual void accept(DHTMessageCallback* callback) = 0;
    
      // number of nodes
  READ_CHECK(fp, &temp32, sizeof(temp32));
  uint32_t numNodes = ntohl(temp32);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
        peerAnnounceStorage->setTaskQueue(taskQueue.get());
    peerAnnounceStorage->setTaskFactory(taskFactory.get());
    
      virtual std::shared_ptr<DHTTask>
  createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                 int numRetry = 0) = 0;
    
    void DHTUnknownMessage::doReceivedAction() {}
    
      // Input statistics
  // TODO(noetzli): The stats are incomplete. They are lacking everything
  // consumed by MergeHelper.
  uint64_t num_input_records = 0;
  uint64_t num_input_deletion_records = 0;
  uint64_t num_input_corrupt_records = 0;
  uint64_t total_input_raw_key_bytes = 0;
  uint64_t total_input_raw_value_bytes = 0;
    
    Status WriteBatchBase::Put(const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
      virtual Status Write(uint64_t offset, const Slice& data) override;
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
      // Do a write outside of the transaction to key 'y'
  s = txn_db->Put(write_options, 'y', 'y');
    
    Status GetStringFromColumnFamilyOptions(std::string* opts_str,
                                        const ColumnFamilyOptions& cf_options,
                                        const std::string& delimiter = ';  ');
    
    #include <string>
#include <vector>
    
    
    {}
