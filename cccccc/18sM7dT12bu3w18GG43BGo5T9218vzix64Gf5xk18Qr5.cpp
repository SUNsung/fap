
        
            explicit reverse_lock(Lock& _lock) : lock(_lock) {
        _lock.unlock();
        _lock.swap(templock);
    }
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
        /* Check NULLs for de/serialization */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    ecount = 0;
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(both, NULL, &recid, &recsig) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(both, sig, NULL, &recsig) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(both, sig, &recid, NULL) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(both, sig, &recid, &recsig) == 1);
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    // Attempt to parse an internal key from 'internal_key'.  On success,
// stores the parsed data in '*result', and returns true.
//
// On error, returns false, leaves '*result' in an undefined state.
extern bool ParseInternalKey(const Slice& internal_key,
                             ParsedInternalKey* result);
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    int os_detect_blobs(const GenericVector<int>* allowed_scripts,
                    BLOBNBOX_CLIST* blob_list,
                    OSResults* osr,
                    tesseract::Tesseract* tess);
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    class TBOX;
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
    STRING ParagraphModel::ToString() const {
  char buffer[200];
  const STRING &alignment = ParagraphJustificationToString(justification_);
  snprintf(buffer, sizeof(buffer),
           'margin: %d, first_indent: %d, body_indent: %d, alignment: %s',
           margin_, first_indent_, body_indent_, alignment.string());
  return STRING(buffer);
}

    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    #endif  // TESSERACT_CCMAIN_OTSUTHR_H_

    
    
    {  UNICHARMAP_NODE* nodes;
};
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'blobs.h'
#include 'intproto.h'
#include 'normalis.h'
#include <cmath>
    
    			if (new_hilite != highlight) {
    }
    
    	if (GjkEpa2::Distance(p_shape_A, p_transform_A, p_shape_B, p_transform_B, p_transform_B.origin - p_transform_A.origin, res)) {
    }
    
    	PoolVector<Triangle> triangles;
	PoolVector<Vector3> vertices;
    
    void ShaderGLES3::set_base_material_tex_index(int p_idx) {
    }
    
    
    {
    {			ur->create_action(TTR('Change Array Value'));
			ur->add_do_method(this, '_set_value', idx, p_value);
			ur->add_undo_method(this, '_set_value', idx, value);
			ur->add_do_method(this, '_notif_changev', p_name);
			ur->add_undo_method(this, '_notif_changev', p_name);
			ur->commit_action();
			return true;
		}
	}
    
    
    {	AudioStreamPreviewGenerator();
};
    
    				int px = xi, py = yi;
				int sx = px, sy = py;
				sx = CLAMP(sx, 0, src_width);
				sy = CLAMP(sy, 0, src_height);
				Color color = p_src_image->get_pixel(sx, sy);
				if (p_transposed) {
					SWAP(px, py);
				}
				px += p_offset.x;
				py += p_offset.y;
    
    		point = (point - blend_space->get_min_space()) / (blend_space->get_max_space() - blend_space->get_min_space());
		point *= s.width;
    
                    case CAL_HEBREW:
                    return Windows::Globalization::CalendarIdentifiers::Hebrew;
    
      std::shared_ptr<DHTNode> localNode_;
    
    void DHTRoutingTableSerializer::serialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Saving DHT routing table to %s.', filename.c_str()));
  std::string filenameTemp = filename;
  filenameTemp += '__temp';
  BufferedFile fp(filenameTemp.c_str(), BufferedFile::WRITE);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
        dispatcher->setTimeout(std::chrono::seconds(messageTimeout));
    
      DHTRoutingTable* routingTable_;
    
    class DHTTask;
    
    DHTTokenTracker::DHTTokenTracker(const unsigned char* initialSecret)
{
  memcpy(secret_[0], initialSecret, SECRET_SIZE);
  memcpy(secret_[1], initialSecret, SECRET_SIZE);
}
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
      virtual ~DHTTokenUpdateCommand();
    
      // show some sample bytes
  virtual std::string toString() const CXX11_OVERRIDE;
    
    uint64_t GlobalData::RegisterChannel(const std::string& channel) {
  auto id = Hash(channel);
  while (channel_id_map_.Has(id)) {
    std::string* name = nullptr;
    channel_id_map_.Get(id, &name);
    if (channel == *name) {
      break;
    }
    ++id;
    AWARN << 'Channel name hash collision: ' << channel << ' <=> ' << *name;
  }
  channel_id_map_.Set(id, channel);
  return id;
}
    
    #include 'modules/perception/base/box.h'
#include 'modules/perception/base/object_types.h'
#include 'modules/perception/base/point_cloud.h'
    
    // @brief: calculate the location similarity between cloud and camera box
// @return the location similarity which belongs to [0, 1].
// @key idea:
// 1. calculate the mean x y pixel distance
// 2. normalize mean pixel distance on the size of box and std of x/y
// 3. generate location similarity from Chi-Squared distribution
// @NOTE: original method name is compute_pts_box_dist_score
double ComputePtsBoxLocationSimilarity(const ProjectionCachePtr& cache,
                                       const ProjectionCacheObject* object,
                                       const base::BBox2DF& camera_bbox) {
  static const double min_p = 1e-6;
  static const double max_p = 1 - 1e-6;
  double x_std_dev = 0.4;
  double y_std_dev = 0.5;
  size_t check_augmented_iou_minimum_pts_num = 20;
  float augmented_buffer = 25.0f;
  if (object->Empty()) {
    ADEBUG << 'cache object is empty!';
    return min_p;
  }
  Eigen::Vector2d mean_pixel_dist(0.0, 0.0);
  // calculate mean x y pixel distance
  const size_t start_ind = object->GetStartInd();
  const size_t end_ind = object->GetEndInd();
  if (end_ind - start_ind >= check_augmented_iou_minimum_pts_num) {
    base::BBox2DF velo_bbox = object->GetBox();
    float augmented_iou =
        CalculateAugmentedIOUBBox(velo_bbox, camera_bbox, augmented_buffer);
    if (augmented_iou < FLT_EPSILON) {
      ADEBUG << 'augmented iou is empty!';
      return min_p;
    }
  }
  for (size_t i = start_ind; i < end_ind; ++i) {
    auto* velo_pt2d = cache->GetPoint2d(i);
    if (velo_pt2d == nullptr) {
      AERROR << 'query pt from projection cache failed!';
      continue;
    }
    if (velo_pt2d->x() >= camera_bbox.xmin &&
        velo_pt2d->x() < camera_bbox.xmax &&
        velo_pt2d->y() >= camera_bbox.ymin &&
        velo_pt2d->y() < camera_bbox.ymax) {
      continue;
    }
    Eigen::Vector2d diff;
    diff.x() = std::max(0.0, camera_bbox.xmin - velo_pt2d->x());
    diff.x() = std::max(diff.x(), velo_pt2d->x() - camera_bbox.xmax);
    diff.y() = std::max(0.0, camera_bbox.ymin - velo_pt2d->y());
    diff.y() = std::max(diff.y(), velo_pt2d->y() - camera_bbox.ymax);
    mean_pixel_dist += diff;
  }
  mean_pixel_dist /= static_cast<double>(object->Size());
  ADEBUG << 'mean_pixel_dist is: ' << mean_pixel_dist;
  // normalize according to box size
  Eigen::Vector2d box_size = Eigen::Vector2d(
      camera_bbox.xmax - camera_bbox.xmin, camera_bbox.ymax - camera_bbox.ymin);
  mean_pixel_dist.array() /= box_size.array();
  // assuming the normalized distance obeys gauss distribution
  double square_norm_mean_pixel_dist =
      mean_pixel_dist.x() * mean_pixel_dist.x() / x_std_dev / x_std_dev +
      mean_pixel_dist.y() * mean_pixel_dist.y() / y_std_dev / y_std_dev;
  // use chi-square distribution. Cauchy may be more reasonable.
  double location_similarity =
      1 - ChiSquaredCdf2TableFun(square_norm_mean_pixel_dist);
  // for numerical stability
  location_similarity = std::max(min_p, std::min(max_p, location_similarity));
  return location_similarity;
}
// @brief: calculate the shape similarity between cloud and camera box
// @return the shape similarity which belongs to [0, 1].
// @key idea:
// 1. calculate box size diff between velo box and camera box
// 2. normalize box size diff according to the std of x/y
// 3. generate shape similarity from Chi-Squared distribution
// @NOTE: original method name is compute_pts_box_shape_score
double ComputePtsBoxShapeSimilarity(const ProjectionCachePtr& cache,
                                    const ProjectionCacheObject* object,
                                    const base::BBox2DF& camera_bbox) {
  static const double min_p = 1e-3;
  static const double max_p = 1 - 1e-3;
  double x_std_dev = 0.3;
  double y_std_dev = 0.4;
  if (object->Empty()) {
    return min_p;
  }
  // compute 2d bbox size of camera & velo
  Eigen::Vector2d camera_box_size = Eigen::Vector2d(
      camera_bbox.xmax - camera_bbox.xmin, camera_bbox.ymax - camera_bbox.ymin);
  // handled one point case
  base::BBox2DF velo_projection_bbox = object->GetBox();
  Eigen::Vector2d velo_box_size = camera_box_size / 10;
  velo_box_size.x() =
      std::max(static_cast<float>(velo_box_size.x()),
               velo_projection_bbox.xmax - velo_projection_bbox.xmin);
  velo_box_size.y() =
      std::max(static_cast<float>(velo_box_size.y()),
               velo_projection_bbox.ymax - velo_projection_bbox.ymin);
  // compute normalized box size diff
  Eigen::Vector2d mean_box_size = (camera_box_size + velo_box_size) / 2;
  Eigen::Vector2d box_size_diff =
      (velo_box_size - camera_box_size).array() / mean_box_size.array();
  // assuming the normalized distance obeys gauss distribution
  double square_norm_box_size_diff =
      box_size_diff.x() * box_size_diff.x() / x_std_dev / x_std_dev +
      box_size_diff.y() * box_size_diff.y() / y_std_dev / y_std_dev;
  ADEBUG << 'camera_box_size@(' << camera_box_size(0) << ','
         << camera_box_size(1) << '); '
         << 'velo_box_size@(' << velo_box_size.x() << ',' << velo_box_size.y()
         << '); '
         << 'box_size_diff@(' << box_size_diff.x() << ',' << box_size_diff.y()
         << '); '
         << 'square_norm_box_size_diff@' << square_norm_box_size_diff;
  // use chi-square distribution. Cauchy may be more reasonable.
  double shape_similarity =
      1 - ChiSquaredCdf2TableFun(square_norm_box_size_diff);
  // for numerical stability
  shape_similarity = std::max(min_p, std::min(max_p, shape_similarity));
  return shape_similarity;
}
// @brief: calculate the similarity between cloud and camera box
// @return the similarity which belongs to [0, 1].
// @key idea:
// 1. compute location similarity and shape similarity
// 2. fuse the two similarity above
// @NOTE: original method name is compute_pts_box_score
double ComputePtsBoxSimilarity(const ProjectionCachePtr& cache,
                               const ProjectionCacheObject* object,
                               const base::BBox2DF& camera_bbox) {
  double location_similarity =
      ComputePtsBoxLocationSimilarity(cache, object, camera_bbox);
  double shape_similarity =
      ComputePtsBoxShapeSimilarity(cache, object, camera_bbox);
  double fused_similarity =
      FuseTwoProbabilities(location_similarity, shape_similarity);
  ADEBUG << 'fused_similarity@' << fused_similarity << ', location_similarity@'
         << location_similarity << ', shape_similarity@' << shape_similarity;
  return fused_similarity;
}
// @brief: calculate the x/y/h similarity between radar and camera
// @return the similarity which belongs to [0, 1].
// @key idea:
// 1. compute the difference on x/y/h
// 2. compute similarity according to the WelshVarLoss/ChiSquareProb
// 3. scale the similarity above
double ComputeRadarCameraXSimilarity(const double velo_ct_x,
                                     const double camera_ct_x,
                                     const double size_x,
                                     const XSimilarityParams& params) {
  double x_diff = std::abs(velo_ct_x - camera_ct_x) / size_x;
  double x_similarity = WelshVarLossFun(x_diff, params.welsh_loss_thresh_,
                                        params.welsh_loss_scale_);
  x_similarity = ScalePositiveProbability(
      x_similarity, params.scale_positive_max_p_, params.scale_positive_th_p_);
  return x_similarity;
}
double ComputeRadarCameraYSimilarity(const double velo_ct_y,
                                     const double camera_ct_y,
                                     const double size_y,
                                     const YSimilarityParams& params) {
  // double y_diff =
  //     std::abs(velo_ct_y - camera_ct_y + size_y * params.smooth_factor_) /
  //     size_y;
    }
    
        template <typename T>
    cl_int getInfo(cl_kernel_info name, T* param) const
    {
        return detail::errHandler(
            detail::getInfo(&::clGetKernelInfo, object_, name, param),
            __GET_KERNEL_INFO_ERR);
    }
    
            bool getMergeResults() const;
    
        template<typename T>
    Rectangle<T>& Rectangle<T>::operator=(const Rectangle<T>& rectangle)
    {
        try
        {
            x = rectangle.x;
            y = rectangle.y;
            width = rectangle.width;
            height = rectangle.height;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }