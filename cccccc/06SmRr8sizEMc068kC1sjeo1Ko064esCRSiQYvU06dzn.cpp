
        
        TEST(RecordTest, iterator_test) {
  uint64_t msg_num = 200;
  uint64_t begin_time = 100000000;
  uint64_t step_time = 100000000;  // 100ms
  uint64_t end_time = begin_time + step_time * (msg_num - 1);
  ConstructRecord(msg_num, begin_time, step_time);
    }
    
    using apollo::cyber::Time;
using apollo::cyber::message::PyMessageWrap;
    
     private:
  void WriteOutputJpgFile(const std::vector<uint8_t>& jpeg_buffer,
                          const std::string& output_jpg_file) const;
  std::string GetOutputFile(const int frame_num) const;
    
    /*
 * Class:     org_rocksdb_CompactionJobStats
 * Method:    disposeInternal
 * Signature: (J)V
 */
void Java_org_rocksdb_CompactionJobStats_disposeInternal(
    JNIEnv *, jobject, jlong jhandle) {
  auto* compact_job_stats =
      reinterpret_cast<rocksdb::CompactionJobStats*>(jhandle);
  delete compact_job_stats;
}
    
    /*
 * Class:     org_rocksdb_CompactionOptions
 * Method:    maxSubcompactions
 * Signature: (J)I
 */
jint Java_org_rocksdb_CompactionOptions_maxSubcompactions(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_opts =
      reinterpret_cast<rocksdb::CompactionOptions*>(jhandle);
  return static_cast<jint>(
      compact_opts->max_subcompactions);
}
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    setMaxMergeWidth
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompactionOptionsUniversal_setMaxMergeWidth(
    JNIEnv*, jobject, jlong jhandle, jint jmax_merge_width) {
  auto* opt = reinterpret_cast<rocksdb::CompactionOptionsUniversal*>(jhandle);
  opt->max_merge_width = static_cast<unsigned int>(jmax_merge_width);
}
    
    /*
 * Class:     org_rocksdb_OptimisticTransactionDB
 * Method:    open
 * Signature: (JLjava/lang/String;)J
 */
jlong Java_org_rocksdb_OptimisticTransactionDB_open__JLjava_lang_String_2(
    JNIEnv* env, jclass, jlong joptions_handle, jstring jdb_path) {
  const char* db_path = env->GetStringUTFChars(jdb_path, nullptr);
  if (db_path == nullptr) {
    // exception thrown: OutOfMemoryError
    return 0;
  }
    }
    
    /*
 * Class:     org_rocksdb_Options
 * Method:    failIfOptionsFileError
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_Options_failIfOptionsFileError(
    JNIEnv*, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::Options*>(jhandle);
  return static_cast<jboolean>(opt->fail_if_options_file_error);
}
    
    Status TraceWriterJniCallback::Close() {
  jboolean attached_thread = JNI_FALSE;
  JNIEnv* env = getJniEnv(&attached_thread);
  if (env == nullptr) {
    return Status::IOError('Unable to attach JNI Environment');
  }
    }
    
      auto* opt = reinterpret_cast<rocksdb::Options*>(joptions_handle);
  rocksdb::DBWithTTL* db = nullptr;
  rocksdb::Status s =
      rocksdb::DBWithTTL::Open(*opt, db_path, &db, jttl, jread_only);
  env->ReleaseStringUTFChars(jdb_path, db_path);
    
    QObject *QmlUtils::wrapLargeText(const QByteArray &text) {
  // NOTE(u_glide): Use 150Kb chunks
  auto w =
      new ValueEditor::LargeTextWrappingModel(QString::fromUtf8(text), 153600);
  w->setParent(this);
  return w;
}