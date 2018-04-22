
        
        #include <string>
#include <utility>
#include <vector>
    
    void SYCLDeviceContext::CopyCPUTensorToDevice(const Tensor *cpu_tensor,
                                              Device *device,
                                              Tensor *device_tensor,
                                              StatusCallback done) const {
  const int64 total_bytes = cpu_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(cpu_tensor);
    void *dst_ptr = DMAHelper::base(device_tensor);
    switch (cpu_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    void AddDeviceMetadata(const std::map<uint32, const Device *> &devices,
                       string *json) {
  for (const auto &pair : devices) {
    uint32 device_id = pair.first;
    const Device &device = *pair.second;
    if (!device.name().empty()) {
      Appendf(json,
              R'({'ph':'M','pid':%u,'name':'process_name',)'
              R'('args':{)',
              device_id);
      AppendEscapedName(json, device.name());
      StrAppend(json, '}},');
    }
    Appendf(json,
            R'({'ph':'M','pid':%u,'name':'process_sort_index',)'
            R'('args':{'sort_index':%u}},)',
            device_id, device_id);
    // Convert to a std::map so that devices are sorted by the device id.
    std::map<uint32, const Resource *> sorted_resources;
    for (const auto &pair : device.resources()) {
      sorted_resources[pair.first] = &pair.second;
    }
    AddResourceMetadata(device_id, sorted_resources, json);
  }
}
    
      /// DebuggerClient is consulted at two times during name
  /// lookup.  This is the first time: after all names in a
  /// source file have been checked but before external
  /// Modules are checked.  The results in the ResultVector will
  /// be consulted first.  Return true if results have been added
  /// to RV.
  /// FIXME: I don't think this ever does anything useful.
  virtual bool lookupOverrides(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    
    {  SyntaxMap[FromNode] = ToNode;
}
    
    namespace swift {
class DependencyTracker;
class ModuleDecl;
class SourceFile;
    }
    
        SmallVector<SymbolRelation, 3> relations;
    for(IndexRelation indexRel: indexOccur.Relations) {
      relations.push_back({addSymbol(indexRel), indexRel.roles});
    }
    
      swift::markup::CommentParts getParts() const {
    return Parts;
  }
    
    SILFunction *SILDebugScope::getParentFunction() const {
  if (InlinedCallSite)
    return InlinedCallSite->getParentFunction();
  if (auto *ParentScope = Parent.dyn_cast<const SILDebugScope *>())
    return ParentScope->getParentFunction();
  return Parent.get<SILFunction *>();
}

    
    /// A SyntaxRewriter for applying a set of formatting rules to a Syntax tree.
struct FormatSyntaxRewriter : public SyntaxRewriter {
  virtual StructDeclSyntax
  rewriteStructDecl(StructDeclSyntax Struct) override;
};
    
      /// Indicates whether to allow diagnostics for \c <unknown> locations if
  /// \c VerifyMode is not \c NoVerify.
  bool VerifyIgnoreUnknown = false;
    
    #endif // SWIFT_INDEX_INDEXSYMBOL_H

    
      /// Add a #line-defined virtual file region.
  ///
  /// By default, this region continues to the end of the buffer.
  ///
  /// \returns True if the new file was added, false if the file already exists.
  /// The name and line offset must match exactly in that case.
  ///
  /// \sa closeVirtualFile.
  bool openVirtualFile(SourceLoc loc, StringRef name, int lineOffset);
    
    #elif defined(__CYGWIN__)
    
    
    {  LOG(INFO) << 'Writing Testing data';
  scoped_ptr<db::DB> test_db(db::GetDB(db_type));
  test_db->Open(output_folder + '/cifar10_test_' + db_type, db::NEW);
  txn.reset(test_db->NewTransaction());
  // Open files
  std::ifstream data_file((input_folder + '/test_batch.bin').c_str(),
      std::ios::in | std::ios::binary);
  CHECK(data_file) << 'Unable to open test file.';
  for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
    read_image(&data_file, &label, str_buffer);
    datum.set_label(label);
    datum.set_data(str_buffer, kCIFARImageNBytes);
    string out;
    CHECK(datum.SerializeToString(&out));
    txn->Put(caffe::format_int(itemid, 5), out);
  }
  txn->Commit();
  test_db->Close();
}
    
      N = std::min<int>(labels_.size(), N);
  std::vector<int> maxN = Argmax(output, N);
  std::vector<Prediction> predictions;
  for (int i = 0; i < N; ++i) {
    int idx = maxN[i];
    predictions.push_back(std::make_pair(labels_[idx], output[idx]));
  }
    
    uint32_t swap_endian(uint32_t val) {
    val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF);
    return (val << 16) | (val >> 16);
}
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    #include 'caffe/common.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_ABSVAL_LAYER_HPP_

    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of SigmoidLayer.
 */
template <typename Dtype>
class CuDNNSigmoidLayer : public SigmoidLayer<Dtype> {
 public:
  explicit CuDNNSigmoidLayer(const LayerParameter& param)
      : SigmoidLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSigmoidLayer();
    }
    
    #include <vector>
    
    
class WERD;
class UNICHARSET;
    
    namespace tesseract  {
    }
    
    // Fills in the x-height range accepted by the given unichar_id, given its
// bounding box in the usual baseline-normalized coordinates, with some
// initial crude x-height estimate (such as word size) and this denoting the
// transformation that was used.
void DENORM::XHeightRange(int unichar_id, const UNICHARSET& unicharset,
                          const TBOX& bbox,
                          float* min_xht, float* max_xht, float* yshift) const {
  // Default return -- accept anything.
  *yshift = 0.0f;
  *min_xht = 0.0f;
  *max_xht = MAX_FLOAT32;
    }
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'strngs.h'
    
    FLOAT32 DistanceBetween(FPOINT A, FPOINT B);
    
    // Compute the distance between the given feature vector and the last
// Set feature vector.
double IntFeatureDist::FeatureDistance(
    const GenericVector<int>& features) const {
  int num_test_features = features.size();
  double denominator = total_feature_weight_ + num_test_features;
  double misses = denominator;
  for (int i = 0; i < num_test_features; ++i) {
    int index = features[i];
    double weight = 1.0;
    if (features_[index]) {
      // A perfect match.
      misses -= 2.0 * weight;
    } else if (features_delta_one_[index]) {
      misses -= 1.5 * weight;
    } else if (features_delta_two_[index]) {
      // A near miss.
      misses -= 1.0 * weight;
    }
  }
  return misses / denominator;
}
    
    
    {  // Size of the indexed feature space.
  int size_;
  // Total weight of features currently stored in the maps.
  double total_feature_weight_;
  // Pointer to IntFeatureMap given at Init to find offset features.
  const IntFeatureMap* feature_map_;
  // Array of bools indicating presence of a feature.
  bool* features_;
  // Array indicating the presence of a feature offset by one unit.
  bool* features_delta_one_;
  // Array indicating the presence of a feature offset by two units.
  bool* features_delta_two_;
};
    
    
    {  // Top-level iteration. Shape index in sparse charset_map space.
  int shape_index_;
  int num_shapes_;
  // Index to the character class within a shape.
  int shape_char_index_;
  int num_shape_chars_;
  // Index to the font within a shape/class pair.
  int shape_font_index_;
  int num_shape_fonts_;
  // The lowest level iteration. sample_index_/num_samples_ counts samples
  // in the current shape/class/font combination.
  int sample_index_;
  int num_samples_;
};
    
    bool js_cocos2dx_studio_BlendFuncFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_BlendFuncFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_BlendFuncFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_BlendFuncFrame_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_BlendFuncFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    	b2Body* m_groundBody;
	b2AABB m_worldAABB;
	ContactPoint m_points[k_maxContactPoints];
	int32 m_pointCount;
	DestructionListener m_destructionListener;
	GLESDebugDraw m_debugDraw;
	int32 m_textLine;
	b2World* m_world;
	b2Body* m_bomb;
	b2MouseJoint* m_mouseJoint;
	b2Vec2 m_bombSpawnPoint;
	bool m_bombSpawning;
	b2Vec2 m_mouseWorld;
	int32 m_stepCount;
    
    			b2FixtureDef fd;
			fd.shape = &shape;
    
    			b2WeldJointDef jd;
			jd.frequencyHz = 8.0f;
			jd.dampingRatio = 0.7f;
    
    
    {		settings->viewCenter.x = m_car->GetPosition().x;
		Test::Step(settings);
	}
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }