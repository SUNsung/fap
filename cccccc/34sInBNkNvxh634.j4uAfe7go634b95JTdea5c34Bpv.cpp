
        
        TYPED_TEST(HDF5DataLayerTest, TestRead) {
  typedef typename TypeParam::Dtype Dtype;
  // Create LayerParameter with the known parameters.
  // The data file we are reading has 10 rows and 8 columns,
  // with values from 0 to 10*8 reshaped in row-major order.
  LayerParameter param;
  param.add_top('data');
  param.add_top('label');
  param.add_top('label2');
    }
    
    void hdf5_save_string(hid_t loc_id, const string& dataset_name,
                      const string& s) {
  herr_t status = \
    H5LTmake_dataset_string(loc_id, dataset_name.c_str(), s.c_str());
  CHECK_GE(status, 0)
    << 'Failed to save string dataset with name ' << dataset_name;
}
    
      // True iff a request to stop early was received.
  bool requested_early_exit_;
    
    #include 'boost/scoped_ptr.hpp'
#include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
      std::vector<Prediction> Classify(const cv::Mat& img, int N = 5);
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
    /* NurbsError */
#define GLU_NURBS_ERROR1                   100251
#define GLU_NURBS_ERROR2                   100252
#define GLU_NURBS_ERROR3                   100253
#define GLU_NURBS_ERROR4                   100254
#define GLU_NURBS_ERROR5                   100255
#define GLU_NURBS_ERROR6                   100256
#define GLU_NURBS_ERROR7                   100257
#define GLU_NURBS_ERROR8                   100258
#define GLU_NURBS_ERROR9                   100259
#define GLU_NURBS_ERROR10                  100260
#define GLU_NURBS_ERROR11                  100261
#define GLU_NURBS_ERROR12                  100262
#define GLU_NURBS_ERROR13                  100263
#define GLU_NURBS_ERROR14                  100264
#define GLU_NURBS_ERROR15                  100265
#define GLU_NURBS_ERROR16                  100266
#define GLU_NURBS_ERROR17                  100267
#define GLU_NURBS_ERROR18                  100268
#define GLU_NURBS_ERROR19                  100269
#define GLU_NURBS_ERROR20                  100270
#define GLU_NURBS_ERROR21                  100271
#define GLU_NURBS_ERROR22                  100272
#define GLU_NURBS_ERROR23                  100273
#define GLU_NURBS_ERROR24                  100274
#define GLU_NURBS_ERROR25                  100275
#define GLU_NURBS_ERROR26                  100276
#define GLU_NURBS_ERROR27                  100277
#define GLU_NURBS_ERROR28                  100278
#define GLU_NURBS_ERROR29                  100279
#define GLU_NURBS_ERROR30                  100280
#define GLU_NURBS_ERROR31                  100281
#define GLU_NURBS_ERROR32                  100282
#define GLU_NURBS_ERROR33                  100283
#define GLU_NURBS_ERROR34                  100284
#define GLU_NURBS_ERROR35                  100285
#define GLU_NURBS_ERROR36                  100286
#define GLU_NURBS_ERROR37                  100287
    
      dict = fetched_thumb.streamGetDict();
  str = fetched_thumb.getStream(); 
		
  if (!dict->lookupInt('Width', 'W', &width))
    goto fail1;
  if (!dict->lookupInt('Height', 'H', &height))
    goto fail1;
  if (!dict->lookupInt('BitsPerComponent', 'BPC', &bits))
    goto fail1;
		
  /* Check for invalid dimensions and integer overflow. */
  if (width <= 0 || height <= 0)
    goto fail1;
  if (width > INT_MAX / 3 / height)
    goto fail1;
  pixbufdatasize = width * height * 3;
    
      {
    GooString roman('clxxvii');
    assert (fromRoman(roman.getCString()) == 177);
  }
    
      // get type
  if (dict->lookup('S', &obj)->isName()) {
    const char *s = obj.getName();
    
    if (strcmp('R', s) == 0)
      type = transitionReplace;
    else if (strcmp('Split', s) == 0)
      type = transitionSplit;
    else if (strcmp('Blinds', s) == 0)
      type = transitionBlinds;
    else if (strcmp('Box', s) == 0)
      type = transitionBox;
    else if (strcmp('Wipe', s) == 0)
      type = transitionWipe;
    else if (strcmp('Dissolve', s) == 0)
      type = transitionDissolve;
    else if (strcmp('Glitter', s) == 0)
      type = transitionGlitter;
    else if (strcmp('Fly', s) == 0)
      type = transitionFly;
    else if (strcmp('Push', s) == 0)
      type = transitionPush;
    else if (strcmp('Cover', s) == 0)
      type = transitionCover;
    else if (strcmp('Uncover', s) == 0)
      type = transitionUncover;
    else if (strcmp('Fade', s) == 0)
      type = transitionFade;
  }
  obj.free();
    
    
    {private:
  
  PageTransitionType type;           // transition style
  int duration;                      // duration of the effect in seconds
  PageTransitionAlignment alignment; // dimension of the effect
  PageTransitionDirection direction; // direction of motion
  int angle;                         // direction in degrees
  double scale;                      // scale
  GBool rectangular;                 // is the area to be flown in rectangular?
  GBool ok;                          // set if created successfully
};
    
    #include <config.h>
    
    
    {  return item ? item->item.copy(obj) : obj->initNull();
}

    
      // parse from a 'Media Play Parameters' dictionary
  void parseMediaPlayParameters(Object* playObj);
  // parse from a 'Media Screen Parameters' dictionary
  void parseMediaScreenParameters(Object* screenObj);
    
      SoundKind getSoundKind() { return kind; }
  GooString *getFileName() { return fileName; }
  double getSamplingRate() { return samplingRate; }
  int getChannels() { return channels; }
  int getBitsPerSample() { return bitsPerSample; }
  SoundEncoding getEncoding() { return encoding; }
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    RegTree ConstructTree() {
  RegTree tree;
  tree.ExpandNode(
      /*nid=*/0, /*split_index=*/0, /*split_value=*/0.0f,
      /*default_left=*/true,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  auto left = tree[0].LeftChild();
  auto right = tree[0].RightChild();
  tree.ExpandNode(
      /*nid=*/left, /*split_index=*/1, /*split_value=*/1.0f,
      /*default_left=*/false,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  tree.ExpandNode(
      /*nid=*/right, /*split_index=*/2, /*split_value=*/2.0f,
      /*default_left=*/false,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  return tree;
}
    
    SEXP XGBoosterSetAttr_R(SEXP handle, SEXP name, SEXP val) {
  R_API_BEGIN();
  const char *v = isNull(val) ? nullptr : CHAR(asChar(val));
  CHECK_CALL(XGBoosterSetAttr(R_ExternalPtrAddr(handle),
                              CHAR(asChar(name)), v));
  R_API_END();
  return R_NilValue;
}
    
    
    {  delete dmat;
}
    
    
    {}
    
      for (auto b : env.rpo_blocks) {
    auto const& state = env.block_states[b];
    folly::format(&ret, '{: <4}:\n', b);
    }
    
      size_t numFrees()   const { return m_nfree; }
  size_t numAllocs()  const { return m_nalloc; }
  size_t bytesFree()  const { return m_bytesFree; }
  size_t blocksFree() const { return m_freeRanges.size(); }
    
    int File::getc() {
  if (m_data->m_writepos > m_data->m_readpos) {
    m_data->m_position++;
    return m_data->m_buffer[m_data->m_readpos++] & 0xff;
  }
    }
    
    bool OutputFile::seek(int64_t /*offset*/, int /*whence*/ /* = SEEK_SET */) {
  raise_warning('cannot seek a php://output stream');
  return false;
}
    
    
    {  return false;
}
    
      Status Read(uint64_t offset, size_t n, Slice* result, char* scratch) const {
    MutexLock lock(&mutex_);
    const uint64_t available = Size() - std::min(Size(), offset);
    size_t offset_ = static_cast<size_t>(offset);
    if (n > available) {
      n = static_cast<size_t>(available);
    }
    if (n == 0) {
      *result = Slice();
      return Status::OK();
    }
    if (scratch) {
      memcpy(scratch, &(data_[offset_]), n);
      *result = Slice(scratch, n);
    } else {
      *result = Slice(&(data_[offset_]), n);
    }
    return Status::OK();
  }
    
          jobject jtable_properties = rocksdb::TablePropertiesJni::fromCppTableProperties(
          env, *(kv.second.get()));
      if (env->ExceptionCheck()) {
        // an error occurred
        env->DeleteLocalRef(jkey);
        return std::unique_ptr<std::pair<jobject, jobject>>(nullptr);
      }
    
    
/*
 * Class:     org_rocksdb_MemoryUtil
 * Method:    getApproximateMemoryUsageByType
 * Signature: ([J[J)Ljava/util/Map;
 */
jobject Java_org_rocksdb_MemoryUtil_getApproximateMemoryUsageByType(
    JNIEnv *env, jclass /*jclazz*/, jlongArray jdb_handles, jlongArray jcache_handles) {
    }
    
    /*
 * Class:     org_rocksdb_WriteOptions
 * Method:    setDisableWAL
 * Signature: (JZ)V
 */
void Java_org_rocksdb_WriteOptions_setDisableWAL(
    JNIEnv*, jobject, jlong jhandle, jboolean jflag) {
  reinterpret_cast<rocksdb::WriteOptions*>(jhandle)->disableWAL = jflag;
}
    
    /*
 * Class:     org_rocksdb_OptionsUtil
 * Method:    loadLatestOptions
 * Signature: (Ljava/lang/String;JLjava/util/List;Z)V
 */
void Java_org_rocksdb_OptionsUtil_loadLatestOptions(
    JNIEnv* env, jclass /*jcls*/, jstring jdbpath, jlong jenv_handle,
    jlong jdb_opts_handle, jobject jcfds, jboolean ignore_unknown_options) {
  jboolean has_exception = JNI_FALSE;
  auto db_path = rocksdb::JniUtil::copyStdString(env, jdbpath, &has_exception);
  if (has_exception == JNI_TRUE) {
    // exception occurred
    return;
  }
  std::vector<rocksdb::ColumnFamilyDescriptor> cf_descs;
  rocksdb::Status s = rocksdb::LoadLatestOptions(
      db_path, reinterpret_cast<rocksdb::Env*>(jenv_handle),
      reinterpret_cast<rocksdb::DBOptions*>(jdb_opts_handle), &cf_descs,
      ignore_unknown_options);
  if (!s.ok()) {
    // error, raise an exception
    rocksdb::RocksDBExceptionJni::ThrowNew(env, s);
  } else {
    build_column_family_descriptor_list(env, jcfds, cf_descs);
  }
}
    
    /*
 * Class:     org_rocksdb_ThreadStatus
 * Method:    getStateName
 * Signature: (B)Ljava/lang/String;
 */
jstring Java_org_rocksdb_ThreadStatus_getStateName(
  JNIEnv* env, jclass, jbyte jstate_type_value) {
  auto name = rocksdb::ThreadStatus::GetStateName(
      rocksdb::StateTypeJni::toCppStateType(jstate_type_value));
  return rocksdb::JniUtil::toJavaString(env, &name, true);
}
    
    #include 'rocksjni/portal.h'
    
      // check if open operation was successful
  if (s.ok()) {
    const jsize resultsLen = 1 + len_cols;  // db handle + column family handles
    std::unique_ptr<jlong[]> results =
        std::unique_ptr<jlong[]>(new jlong[resultsLen]);
    results[0] = reinterpret_cast<jlong>(db);
    for (int i = 1; i <= len_cols; i++) {
      results[i] = reinterpret_cast<jlong>(handles[i - 1]);
    }
    }