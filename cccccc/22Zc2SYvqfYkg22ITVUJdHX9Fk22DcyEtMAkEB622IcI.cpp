
        
        /// Status get a list of active extenions.
Status getExtensions(ExtensionList& extensions);
    
      /**
   * @brief See the usesLogStatus method, log a Glog status.
   *
   * @param log A vector of parsed Glog log lines.
   * @return Status non-op indicating success or failure.
   */
  virtual Status logStatus(const std::vector<StatusLogLine>& log) {
    (void)log;
    return Status(1, 'Not enabled');
  }
    
    /**
 * @brief Getter for an instance uuid
 *
 * @return ok on success and ident is set to the instance uuid, otherwise
 * failure.
 */
Status getInstanceUUID(std::string& ident);
    
    static int osquery_close(dev_t dev, int flag, int fmt, struct proc *p) {
  // Only one daemon should request a close.
  lck_mtx_lock(osquery.mtx);
  if (osquery.open_count == 1) {
    unsubscribe_all_events();
    cleanup_user_kernel_buffer();
    osquery.open_count--;
  }
  lck_mtx_unlock(osquery.mtx);
    }
    
    /**
 * @brief Access the internal storage of the Decorator parser.
 *
 * The decoration set is a map of column name to value. It contains the opaque
 * set of decoration point results.
 *
 * Decorations are applied to log items before they are sent to the downstream
 * logging APIs: logString, logSnapshot, etc.
 *
 * @param results the output parameter to write decorations.
 */
void getDecorations(std::map<std::string, std::string>& results);
    
    #include <gtest/gtest.h>
    
    DEFINE_FIND_STATIC_METHOD(KXlog_logWrite, KXlog, 'logWrite', '(Lcom/tencent/mars/xlog/Xlog$XLoggerInfo;Ljava/lang/String;)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_logWrite
  (JNIEnv *env, jclass, jobject _log_info, jstring _log) {
    }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {    SPY_DETACH_VARIABLE('TestFun0 i');
}
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {  private:
    JavaVM* vm_;
    JNIEnv* env_;
    bool we_attach_;
    int status_;
};