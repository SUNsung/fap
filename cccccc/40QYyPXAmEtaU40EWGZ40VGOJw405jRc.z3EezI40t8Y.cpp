
        
            static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdFft.Runtime.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
      // Extract the original list data
  std::string data;
  db_->Get(get_option_, key, &data);
    
    namespace rocksdb {
    }
    
    // Open the db inside DateTieredDBImpl because options needs pointer to its ttl
DateTieredDBImpl::DateTieredDBImpl(
    DB* db, Options options,
    const std::vector<ColumnFamilyDescriptor>& descriptors,
    const std::vector<ColumnFamilyHandle*>& handles, int64_t ttl,
    int64_t column_family_interval)
    : db_(db),
      cf_options_(ColumnFamilyOptions(options)),
      ioptions_(ImmutableCFOptions(options)),
      icomp_(cf_options_.comparator),
      ttl_(ttl),
      column_family_interval_(column_family_interval),
      mutex_(options.statistics.get(), db->GetEnv(), DB_MUTEX_WAIT_MICROS,
             options.use_adaptive_mutex) {
  latest_timebound_ = std::numeric_limits<int64_t>::min();
  for (size_t i = 0; i < handles.size(); ++i) {
    const auto& name = descriptors[i].name;
    int64_t timestamp = 0;
    try {
      timestamp = ParseUint64(name);
    } catch (const std::invalid_argument&) {
      // Bypass unrelated column family, e.g. default
      db_->DestroyColumnFamilyHandle(handles[i]);
      continue;
    }
    if (timestamp > latest_timebound_) {
      latest_timebound_ = timestamp;
    }
    handle_map_.insert(std::make_pair(timestamp, handles[i]));
  }
}
    
    #include 'BtMessage.h'
#include 'Command.h'
    
    bool AbstractHttpServerResponseCommand::execute()
{
  if (e_->getRequestGroupMan()->downloadFinished() || e_->isHaltRequested()) {
    return true;
  }
  try {
    ssize_t len = httpServer_->sendResponse();
    if (len > 0) {
      timeoutTimer_ = global::wallclock();
    }
  }
  catch (RecoverableException& e) {
    A2_LOG_INFO_EX(fmt('CUID#%' PRId64
                       ' - Error occurred while transmitting response body.',
                       getCuid()),
                   e);
    return true;
  }
  if (httpServer_->sendBufferIsEmpty()) {
    A2_LOG_INFO(fmt('CUID#%' PRId64 ' - HttpServer: all response transmitted.',
                    getCuid()));
    afterSend(httpServer_, e_);
    return true;
  }
  else {
    if (timeoutTimer_.difference(global::wallclock()) >= 30_s) {
      A2_LOG_INFO(fmt('CUID#%' PRId64
                      ' - HttpServer: Timeout while trasmitting response.',
                      getCuid()));
      return true;
    }
    else {
      updateReadWriteCheck();
      e_->addCommand(std::unique_ptr<Command>(this));
      return false;
    }
  }
}
    
    
    {
    {    httpConnection_->sendProxyRequest(std::move(httpRequest));
  }
  else {
    httpConnection_->sendPendingData();
  }
  if (httpConnection_->sendBufferIsEmpty()) {
    getDownloadEngine()->addCommand(getNextCommand());
    return true;
  }
  else {
    setWriteCheckSocket(getSocket());
    addCommandSelf();
    return false;
  }
}
    
    AnnounceTier::AnnounceTier(std::deque<std::string> urls)
    : event(STARTED), urls(std::move(urls))
{
}