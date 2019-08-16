
        
          std::mutex running_mutex_;
  std::condition_variable running_cv_;
  std::atomic<bool> running_;
    
              const TensorShape& X = in[0];
          int N = 0, C = 0, H = 0, W = 0;
          switch (order) {
            case StorageOrder::NCHW:
              N = X.dims(0);
              C = X.dims(1);
              H = X.dims(2);
              W = X.dims(3);
              break;
            case StorageOrder::NHWC:
              N = X.dims(0);
              H = X.dims(1);
              W = X.dims(2);
              C = X.dims(3);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
    namespace tesseract {
    }
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
    #endif

    
      // Classifies the given [training] sample, writing to results.
  // If page_pix is not nullptr, the overriding function may call
  // sample.GetSamplePix(padding, page_pix) to get an image of the sample
  // padded (with real image data) by the given padding to extract features
  // from the image of the character. Other members of TrainingSample:
  // features(), micro_features(), cn_feature(), geo_feature() may be used
  // to get the appropriate tesseract features.
  // If debug is non-zero, then various degrees of classifier dependent debug
  // information is provided.
  // If keep_this (a UNICHAR_ID) is >= 0, then the results should always
  // contain keep_this, and (if possible) anything of intermediate confidence.
  // (Used for answering 'Why didn't it get that right?' questions.) It must
  // be a UNICHAR_ID as the callers have no clue how to choose the best shape
  // that may contain a desired answer.
  // The return value is the number of classes saved in results.
  // NOTE that overriding functions MUST clear and sort the results by
  // descending rating unless the classifier is working with a team of such
  // classifiers.
  // NOTE: Neither overload of ClassifySample is pure, but at least one must
  // be overridden by a classifier in order for it to do anything.
  virtual int UnicharClassifySample(const TrainingSample& sample, Pix* page_pix,
                                    int debug, UNICHAR_ID keep_this,
                                    GenericVector<UnicharRating>* results);
    
    				new_hilite = HIGHLIGHT_INCR;
    
    	applied_force = Vector3();
	applied_torque = Vector3();
	first_integration = false;
    
    #include 'cpu_particles_editor_plugin.h'
    
    	struct BVH {
    }
    
    			last_is_slash = true;
			has_slashes = true;
		} else {
    
      Status GetAbsolutePath(const std::string& db_path,
                         std::string* output_path) override {
    auto status_and_enc_path = EncodePath(db_path);
    if (!status_and_enc_path.first.ok()) {
      return status_and_enc_path.first;
    }
    return EnvWrapper::GetAbsolutePath(status_and_enc_path.second, output_path);
  }
    
    /*
 * Class:     org_rocksdb_CompactionOptionsUniversal
 * Method:    newCompactionOptionsUniversal
 * Signature: ()J
 */
jlong Java_org_rocksdb_CompactionOptionsUniversal_newCompactionOptionsUniversal(
    JNIEnv*, jclass) {
  const auto* opt = new rocksdb::CompactionOptionsUniversal();
  return reinterpret_cast<jlong>(opt);
}
    
    #include 'portal.h'
#include 'rocksdb/env.h'
#include 'include/org_rocksdb_Env.h'
#include 'include/org_rocksdb_HdfsEnv.h'
#include 'include/org_rocksdb_RocksEnv.h'
#include 'include/org_rocksdb_RocksMemEnv.h'
#include 'include/org_rocksdb_TimedEnv.h'
    
      std::string value;
  bool value_found = false;
  bool keyMayExist;
  if (cf_handle != nullptr) {
    keyMayExist =
        db->KeyMayExist(read_opt, cf_handle, key_slice, &value, &value_found);
  } else {
    keyMayExist = db->KeyMayExist(read_opt, key_slice, &value, &value_found);
  }
    
    std::function<bool(const rocksdb::TableProperties&)> TableFilterJniCallback::GetTableFilterFunction() {
  return m_table_filter_function;
}
    
    
    {}  //namespace rocksdb
    
    #include 'rocksdb/trace_reader_writer.h'
#include 'rocksjni/jnicallback.h'
    
    /*
 * Class:     org_rocksdb_TransactionDB
 * Method:    getTransactionByName
 * Signature: (JLjava/lang/String;)J
 */
jlong Java_org_rocksdb_TransactionDB_getTransactionByName(
    JNIEnv* env, jobject, jlong jhandle, jstring jname) {
  auto* txn_db = reinterpret_cast<rocksdb::TransactionDB*>(jhandle);
  const char* name = env->GetStringUTFChars(jname, nullptr);
  if (name == nullptr) {
    // exception thrown: OutOfMemoryError
    return 0;
  }
  rocksdb::Transaction* txn = txn_db->GetTransactionByName(name);
  env->ReleaseStringUTFChars(jname, name);
  return reinterpret_cast<jlong>(txn);
}