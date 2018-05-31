
        
        #endif  // ATOM_BROWSER_UI_X_EVENT_DISABLER_H_

    
      // Returns whether current process is browser process, currently we detect it
  // by checking whether current has used V8 Lock, but it might be a bad idea.
  static inline bool IsBrowserProcess() { return v8::Locker::IsActive(); }
    
      // Sent when synchronous (startup) session restore completes. No details or
  // source.
  NOTIFICATION_SESSION_RESTORE_DONE,
    
    enum NotifyChromeResult {
  NOTIFY_SUCCESS,
  NOTIFY_FAILED,
  NOTIFY_WINDOW_HUNG,
};
    
      // The map of accelerators that have been successfully registered as global
  // shortcuts and their observer.
  typedef std::map<ui::Accelerator, Observer*> AcceleratorMap;
  AcceleratorMap accelerator_map_;
    
    // Wrapper used to keep track of the lifetime of a WebContents.
// Lives on the UI thread.
class PrintingUIWebContentsObserver : public content::WebContentsObserver {
 public:
  explicit PrintingUIWebContentsObserver(content::WebContents* web_contents);
    }
    
     private:
  // IPC message handler.
  int32_t OnHostMsgGetDeviceID(ppapi::host::HostMessageContext* context);
  int32_t OnHostMsgGetHmonitor(ppapi::host::HostMessageContext* context);
  int32_t OnHostMsgMonitorIsExternal(ppapi::host::HostMessageContext* context);
    
      // The listener to notify when the user closes the dialog.  This may be set to
  // NULL before the color chooser is closed, signalling that the listener no
  // longer cares about the outcome.
  views::ColorChooserListener* listener_;
    
      // Read sequentially.
  ASSERT_OK(env_->NewSequentialFile('/dir/f', &seq_file));
  ASSERT_OK(seq_file->Read(5, &result, scratch)); // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(seq_file->Skip(1));
  ASSERT_OK(seq_file->Read(1000, &result, scratch)); // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(seq_file->Read(1000, &result, scratch)); // Try reading past EOF.
  ASSERT_EQ(0, result.size());
  ASSERT_OK(seq_file->Skip(100)); // Try to skip past end of file.
  ASSERT_OK(seq_file->Read(1000, &result, scratch));
  ASSERT_EQ(0, result.size());
  delete seq_file;
    
    namespace leveldb {
    }
    
      if (direction_ == kReverse) {  // Switch directions?
    direction_ = kForward;
    // iter_ is pointing just before the entries for this->key(),
    // so advance into the range of entries for this->key() and then
    // use the normal skipping code below.
    if (!iter_->Valid()) {
      iter_->SeekToFirst();
    } else {
      iter_->Next();
    }
    if (!iter_->Valid()) {
      valid_ = false;
      saved_key_.clear();
      return;
    }
    // saved_key_ already contains the key to skip past.
  } else {
    // Store in saved_key_ the current key so we skip it below.
    SaveKey(ExtractUserKey(iter_->key()), &saved_key_);
  }
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
          // Test write entire array
      std::vector<unsigned char> buffer(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    extern JSClass  *jsb_cocostudio_ActionManagerEx_class;
extern JSObject *jsb_cocostudio_ActionManagerEx_prototype;
    
    
    {        ok &= luaval_to_number(tolua_S, 6,&arg4, 'cc.SimpleAudioEngine:playEffect');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect'', nullptr);
            return 0;
        }
        unsigned int ret = cobj->playEffect(arg0, arg1, arg2, arg3, arg4);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:playEffect',argc, 1);
    return 0;
    
    
    
    	m_world->SetAllowSleeping(settings->enableSleep > 0);
	m_world->SetWarmStarting(settings->enableWarmStarting > 0);
	m_world->SetContinuousPhysics(settings->enableContinuous > 0);
	m_world->SetSubStepping(settings->enableSubStepping > 0);
    
    	Bridge()
	{
		b2Body* ground = NULL;
		{
			b2BodyDef bd;
			ground = m_world->CreateBody(&bd);
    }
    }
    
    public:
  AbstractCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      DownloadEngine* e, const std::shared_ptr<SocketCore>& s = nullptr,
      const std::shared_ptr<SocketRecvBuffer>& socketRecvBuffer = nullptr,
      bool incNumConnection = true);
    
    
    {  virtual std::unique_ptr<Command> getNextCommand() = 0;
};
    
    class ActivePeerConnectionCommand : public Command {
private:
  RequestGroup* requestGroup_;
  std::shared_ptr<BtRuntime> btRuntime_;
  std::shared_ptr<PieceStorage> pieceStorage_;
  std::shared_ptr<PeerStorage> peerStorage_;
  std::shared_ptr<BtAnnounce> btAnnounce_;
    }
    
      int64_t offset_;
    
    bool AnnounceList::currentTierAcceptsCompletedEvent() const
{
  if (currentTrackerInitialized_) {
    return FindCompletedAllowedTier()(*currentTier_);
  }
    }