
        
        // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    
    {}  // namespace nwapi

    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
    namespace nw {
    }
    
        bool enabled;
    if (option.GetBoolean('enabled', &enabled))
      SetEnabled(enabled);
    
    
    {
  DECLARE_EXTENSION_FUNCTION('nw.App.setProxyConfig', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppSetProxyConfigFunction);
};
    
      for (const auto& op : new_net.op()) {
    EXPECT_NE(op.type(), 'Declare');
    EXPECT_NE(op.type(), 'Export');
  }
    
    std::string tmppath() {
  // TMPFILE is for manual test execution during which the user will specify
  // the full temp file path using the environmental variable TMPFILE
  const char* tmpfile = getenv('TMPFILE');
  if (tmpfile) {
    return std::string(tmpfile);
  }
    }
    
    **Result**
    
    ```
    
    
    {}  // namespace mongo

    
    
    {}  // namespace mongo

    
    
    {    return aggregationBuilder.obj();
}
    
            UsageData total;
    
    RemoveTransliterator::~RemoveTransliterator() {}
    
        /**
     * Implements {@link Transliterator#handleTransliterate}.
     * @param text          the buffer holding transliterated and
     *                      untransliterated text
     * @param offset        the start and limit of the text, the position
     *                      of the cursor, and the start and limit of transliteration.
     * @param incremental   if true, assume more text may be coming after
     *                      pos.contextLimit. Otherwise, assume the text is complete.
     */
    virtual void handleTransliterate(Replaceable& text, UTransPosition& offset,
                                     UBool isIncremental) const;
    
            if (matchindex != USEARCH_DONE) {
            if (m_search_->isOverlap) {
                matchindex += m_search_->matchedLength - 2;
            }
    }
    
    #if !UCONFIG_NO_FORMATTING
    
    U_NAMESPACE_BEGIN
    
      void is_sending_finish(bool val) { is_sending_finish_ = val; }
    
    void GemController::SetEpbBreak(const ControlCommand& command) {
  if (command.parking_brake()) {
    // None
  } else {
    // None
  }
}
    
    bool LoadBrownCameraIntrinsic(const std::string &yaml_file,
                              base::BrownCameraDistortionModel *model) {
  if (!PathExists(yaml_file) || model == nullptr) {
    return false;
  }
    }
    
    #pragma once
    
    /**
 * @brief Checks to see if the provided directory is a temporary folder.
 * @note This just compares the temporary directory path against the given path
 *       on Windows.
 */
Status platformIsTmpDir(const boost::filesystem::path& dir);
    
      std::vector<char> admins_buf(sid_buff_size, '\0');
  auto admins_sid = static_cast<PSID>(admins_buf.data());
  if (!CreateWellKnownSid(
          WinBuiltinAdministratorsSid, nullptr, admins_sid, &sid_buff_size)) {
    return Status(-1, 'CreateWellKnownSid failed');
  }
    
    /// Given a string with the structure described in `parseSystemStoreString`
/// return the unlocalized system store name.
LPCWSTR extractStoreName(LPCWSTR sysStoreW) {
  auto* delimiter = wcschr(sysStoreW, L'\\');
  if (delimiter == nullptr) {
    return sysStoreW;
  } else {
    return delimiter + 1;
  }
}
    
      Row r;
  r['version'] = tree.get<std::string>('Version', '');
  r['api_version'] = tree.get<std::string>('ApiVersion', '');
  r['min_api_version'] = tree.get<std::string>('MinAPIVersion', '');
  r['git_commit'] = tree.get<std::string>('GitCommit', '');
  r['go_version'] = tree.get<std::string>('GoVersion', '');
  r['os'] = tree.get<std::string>('Os', '');
  r['arch'] = tree.get<std::string>('Arch', '');
  r['kernel_version'] = tree.get<std::string>('KernelVersion', '');
  r['build_time'] = tree.get<std::string>('BuildTime', '');
  results.push_back(r);
    
    void Initializer::initWorkerWatcher(const std::string& name) const {
  if (isWorker()) {
    initWorker(name);
  } else {
    // The watcher will forever monitor and spawn additional workers.
    // This initialize will handle work for processes without watchdogs too.
    initWatcher();
  }
}
    
    /**
 * @brief Categories of process states adapted to be platform agnostic
 *
 * A process can have the following states. Unfortunately, because of operating
 * system differences. A generic state change is not directly translatable on
 * Windows. Therefore, PROCESS_STATE_CHANGE will only occur on POSIX systems.
 */
enum ProcessState {
  PROCESS_ERROR = -1,
  PROCESS_STILL_ALIVE = 0,
  PROCESS_EXITED,
  PROCESS_STATE_CHANGE
};
    
    namespace osquery {
uint32_t getUidFromSid(PSID sid);
uint32_t getGidFromSid(PSID sid);
namespace tables {
    }
    }
    
        if ((ret == NERR_Success || ret == ERROR_MORE_DATA) &&
        userBuffer != nullptr) {
      auto iterBuff = LPUSER_INFO_3(userBuffer);
      for (size_t i = 0; i < dwNumUsersRead; i++) {
        // User level 4 contains the SID value
        unsigned long dwDetailedUserInfoLevel = 4;
        LPBYTE userLvl4Buff = nullptr;
        ret = NetUserGetInfo(nullptr,
                             iterBuff->usri3_name,
                             dwDetailedUserInfoLevel,
                             &userLvl4Buff);
    }
    }
    
    namespace fs = boost::filesystem;
    
    Status ConfigPlugin::genPack(const std::string& name,
                             const std::string& value,
                             std::string& pack) {
  return Status(1, 'Not implemented');
}
    
      /**
   * @brief Receive a merged JSON document for each top-level config key.
   *
   * Called when the Config instance is initially loaded with data from the
   * active config plugin and when it is updated via an async ConfigPlugin
   * update. Every config parser will receive a map of merged data for each key
   * they requested in keys().
   *
   * @param source source of the config data
   * @param config A JSON-parsed document map.
   * @return Failure if the parser should no longer receive updates.
   */
  virtual Status update(const std::string& source,
                        const ParserConfig& config) = 0;
    
    JSON getExamplePacksConfig() {
  std::string content;
  auto const filepath = getTestConfigDirectory() / 'test_inline_pack.conf';
  auto status = readFile(filepath, content);
  EXPECT_TRUE(status.ok())
      << 'Could not read file: ' << boost::io::quoted(filepath.string())
      << ', because: ' << status.what();
  JSON doc = JSON::newObject();
  doc.fromString(content);
  return doc;
}
    
    
    {} // namespace osquery
