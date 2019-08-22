
        
            Settings::KeyModifiers KeyChord::Modifiers()
    {
        return _modifiers;
    }
    
    #endif   // CAFFE_UTIL_HDF5_H_
#endif   // USE_HDF5

    
    template <typename Dtype>
void SGDSolver<Dtype>::SnapshotSolverStateToHDF5(
    const string& model_filename) {
// This code is taken from https://github.com/sh1r0/caffe-android-lib
#ifdef USE_HDF5
  string snapshot_filename =
      Solver<Dtype>::SnapshotFilename('.solverstate.h5');
  LOG(INFO) << 'Snapshotting solver state to HDF5 file ' << snapshot_filename;
  hid_t file_hid = H5Fcreate(snapshot_filename.c_str(), H5F_ACC_TRUNC,
      H5P_DEFAULT, H5P_DEFAULT);
  CHECK_GE(file_hid, 0)
      << 'Couldn't open ' << snapshot_filename << ' to save solver state.';
  hdf5_save_int(file_hid, 'iter', this->iter_);
  hdf5_save_string(file_hid, 'learned_net', model_filename);
  hdf5_save_int(file_hid, 'current_step', this->current_step_);
  hid_t history_hid = H5Gcreate2(file_hid, 'history', H5P_DEFAULT, H5P_DEFAULT,
      H5P_DEFAULT);
  CHECK_GE(history_hid, 0)
      << 'Error saving solver state to ' << snapshot_filename << '.';
  for (int i = 0; i < history_.size(); ++i) {
    ostringstream oss;
    oss << i;
    hdf5_save_nd_dataset<Dtype>(history_hid, oss.str(), *history_[i]);
  }
  H5Gclose(history_hid);
  H5Fclose(file_hid);
// This code is taken from https://github.com/sh1r0/caffe-android-lib
#else
  LOG(FATAL) << 'SnapshotSolverStateToHDF5 requires hdf5;'
             << ' compile with USE_HDF5.';
#endif  // USE_HDF5
}
    
    template<typename TypeParam>
void HDF5OutputLayerTest<TypeParam>::CheckBlobEqual(const Blob<Dtype>& b1,
                                                    const Blob<Dtype>& b2) {
  EXPECT_EQ(b1.num(), b2.num());
  EXPECT_EQ(b1.channels(), b2.channels());
  EXPECT_EQ(b1.height(), b2.height());
  EXPECT_EQ(b1.width(), b2.width());
  for (int n = 0; n < b1.num(); ++n) {
    for (int c = 0; c < b1.channels(); ++c) {
      for (int h = 0; h < b1.height(); ++h) {
        for (int w = 0; w < b1.width(); ++w) {
          EXPECT_EQ(b1.data_at(n, c, h, w), b2.data_at(n, c, h, w));
        }
      }
    }
  }
}
    
    string hdf5_load_string(hid_t loc_id, const string& dataset_name) {
  // Get size of dataset
  size_t size;
  H5T_class_t class_;
  herr_t status = \
    H5LTget_dataset_info(loc_id, dataset_name.c_str(), NULL, &class_, &size);
  CHECK_GE(status, 0) << 'Failed to get dataset info for ' << dataset_name;
  char *buf = new char[size];
  status = H5LTread_dataset_string(loc_id, dataset_name.c_str(), buf);
  CHECK_GE(status, 0)
    << 'Failed to load int dataset with name ' << dataset_name;
  string val(buf);
  delete[] buf;
  return val;
}
    
    template <typename Dtype>
void Solver<Dtype>::CheckSnapshotWritePermissions() {
  if (Caffe::root_solver() && param_.snapshot()) {
    CHECK(param_.has_snapshot_prefix())
        << 'In solver params, snapshot is specified but snapshot_prefix is not';
    string probe_filename = SnapshotFilename('.tempfile');
    std::ofstream probe_ofs(probe_filename.c_str());
    if (probe_ofs.good()) {
      probe_ofs.close();
      std::remove(probe_filename.c_str());
    } else {
      LOG(FATAL) << 'Cannot write to snapshot prefix ''
          << param_.snapshot_prefix() << ''.  Make sure '
          << 'that the directory exists and is writable.';
    }
  }
}
    
    
    {  /* Print the top N predictions. */
  for (size_t i = 0; i < predictions.size(); ++i) {
    Prediction p = predictions[i];
    std::cout << std::fixed << std::setprecision(4) << p.second << ' - \''
              << p.first << '\'' << std::endl;
  }
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires OpenCV; compile with USE_OPENCV.';
}
#endif  // USE_OPENCV

    
      // Returns the mode: running on CPU or GPU.
  inline static Brew mode() { return Get().mode_; }
  // The setters for the variables
  // Sets the mode. It is recommended that you don't change the mode halfway
  // into the program since that may cause allocation of pinned memory being
  // freed in a non-pinned way, which may cause problems - I haven't verified
  // it personally but better to note it here in the header file.
  inline static void set_mode(Brew mode) { Get().mode_ = mode; }
  // Sets the random seed of both boost and curand
  static void set_random_seed(const unsigned int seed);
  // Sets the device. Since we have cublas and curand stuff, set device also
  // requires us to reset those values.
  static void SetDevice(const int device_id);
  // Prints the current GPU status.
  static void DeviceQuery();
  // Check if specified device is available
  static bool CheckDevice(const int device_id);
  // Search from start_id to the highest possible device ordinal,
  // return the ordinal of the first available device.
  static int FindDevice(const int start_id = 0);
  // Parallel training
  inline static int solver_count() { return Get().solver_count_; }
  inline static void set_solver_count(int val) { Get().solver_count_ = val; }
  inline static int solver_rank() { return Get().solver_rank_; }
  inline static void set_solver_rank(int val) { Get().solver_rank_ = val; }
  inline static bool multiprocess() { return Get().multiprocess_; }
  inline static void set_multiprocess(bool val) { Get().multiprocess_ = val; }
  inline static bool root_solver() { return Get().solver_rank_ == 0; }
    
    /** @brief Fills a Blob with values @f$ x \in [0, 1] @f$
 *         such that @f$ \forall i \sum_j x_{ij} = 1 @f$.
 */
template <typename Dtype>
class PositiveUnitballFiller : public Filler<Dtype> {
 public:
  explicit PositiveUnitballFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    DCHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), 0, 1, blob->mutable_cpu_data());
    // We expect the filler to not be called very frequently, so we will
    // just use a simple implementation
    int dim = blob->count() / blob->shape(0);
    CHECK(dim);
    for (int i = 0; i < blob->shape(0); ++i) {
      Dtype sum = 0;
      for (int j = 0; j < dim; ++j) {
        sum += data[i * dim + j];
      }
      for (int j = 0; j < dim; ++j) {
        data[i * dim + j] /= sum;
      }
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    /*
 * Class:     org_rocksdb_CompactionOptions
 * Method:    compression
 * Signature: (J)B
 */
jbyte Java_org_rocksdb_CompactionOptions_compression(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_opts =
      reinterpret_cast<rocksdb::CompactionOptions*>(jhandle);
  return rocksdb::CompressionTypeJni::toJavaCompressionType(
      compact_opts->compression);
}
    
    #include <jni.h>
    
    /*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    maxDictBytes
 * Signature: (J)I
 */
jint Java_org_rocksdb_CompressionOptions_maxDictBytes(
    JNIEnv*, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::CompressionOptions*>(jhandle);
  return static_cast<jint>(opt->max_dict_bytes);
}
    
      std::vector<rocksdb::ColumnFamilyDescriptor> column_families;
  const jsize len_cols = env->GetArrayLength(jcolumn_names);
  if (len_cols > 0) {
    if (env->EnsureLocalCapacity(len_cols) != 0) {
      // out of memory
      env->ReleaseStringUTFChars(jdb_path, db_path);
      return nullptr;
    }
    }
    
    /*
 * Class:     org_rocksdb_DBOptions
 * Method:    copyDBOptions
 * Signature: (J)J
 */
jlong Java_org_rocksdb_DBOptions_copyDBOptions(
    JNIEnv*, jclass, jlong jhandle) {
  auto new_opt =
      new rocksdb::DBOptions(*(reinterpret_cast<rocksdb::DBOptions*>(jhandle)));
  return reinterpret_cast<jlong>(new_opt);
}
    
    /*
 * Class:     org_rocksdb_RocksDB
 * Method:    flushWal
 * Signature: (JZ)V
 */
void Java_org_rocksdb_RocksDB_flushWal(
    JNIEnv* env, jobject, jlong jdb_handle, jboolean jsync) {
  auto* db = reinterpret_cast<rocksdb::DB*>(jdb_handle);
  auto s = db->FlushWAL(jsync == JNI_TRUE);
  if (!s.ok()) {
    rocksdb::RocksDBExceptionJni::ThrowNew(env, s);
  }
}
    
    namespace rocksdb {
TableFilterJniCallback::TableFilterJniCallback(
    JNIEnv* env, jobject jtable_filter)
    : JniCallback(env, jtable_filter) {
  m_jfilter_methodid =
      AbstractTableFilterJni::getFilterMethod(env);
  if(m_jfilter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }
    
    /*
 * Class:     org_rocksdb_TtlDB
 * Method:    closeDatabase
 * Signature: (J)V
 */
void Java_org_rocksdb_TtlDB_closeDatabase(
    JNIEnv* /* env */, jclass, jlong /* jhandle */) {
  //auto* ttl_db = reinterpret_cast<rocksdb::DBWithTTL*>(jhandle);
  //assert(ttl_db != nullptr);
  //rocksdb::Status s = ttl_db->Close();
  //rocksdb::RocksDBExceptionJni::ThrowNew(env, s);
    }
    
    extern JSClass  *jsb_cocos2d_EventMouse_class;
extern JSObject *jsb_cocos2d_EventMouse_prototype;
    
    cocos2d::Node* CSLoader::createNode(const Data& data)
{
    return createNode(data, nullptr);
}
    
    static int lua_cocos2dx_ActionTimeline_setFrameEventCallFunc(lua_State* L)
{
    if (nullptr == L)
        return 0;
    
    int argc = 0;
    cocostudio::timeline::ActionTimeline* self = nullptr;
    
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
	if (!tolua_isusertype(L,1,'ccs.ActionTimeline',0,&tolua_err)) goto tolua_lerror;
#endif
    
    self = static_cast<cocostudio::timeline::ActionTimeline*>(tolua_tousertype(L,1,0));
    
#if COCOS2D_DEBUG >= 1
	if (nullptr == self) {
		tolua_error(L,'invalid 'self' in function 'lua_cocos2dx_ActionTimeline_setFrameEventCallFunc'\n', NULL);
		return 0;
	}
#endif
    argc = lua_gettop(L) - 1;
    
    if (1 == argc)
    {
#if COCOS2D_DEBUG >= 1
        if (!toluafix_isfunction(L,2,'LUA_FUNCTION',0,&tolua_err) )
        {
            goto tolua_lerror;
        }
#endif
        
        LUA_FUNCTION handler = (  toluafix_ref_function(L,2,0));
        self->setFrameEventCallFunc([=](cocostudio::timeline::Frame* frame){
            toluafix_pushusertype_ccobject(L, frame->_ID, &frame->_luaID, (void*)frame, getLuaTypeName(frame, 'ccs.Frame'));
            LuaEngine::getInstance()->getLuaStack()->executeFunctionByHandler(handler, 1);
        });
        
        return 0;
    }
    
    
    luaL_error(L, ''setFrameEventCallFunc' function of ActionTimeline has wrong number of arguments: %d, was expecting %d\n', argc, 1);
    
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(L,'#ferror in function 'setFrameEventCallFunc'.',&tolua_err);
#endif
    return 0;
}
    
            checkBox2->setName('swallow');
        _uiLayer->addChild(checkBox2);
    
            Button* titleButton = Button::create('cocosui/backtotopnormal.png', 'cocosui/backtotoppressed.png');
        titleButton->setTitleText('Title Button');
        titleButton->setPosition(Vec2(innerWidth / 2.0f, button->getBottomBoundary() - button->getContentSize().height));
        scrollView->addChild(titleButton);