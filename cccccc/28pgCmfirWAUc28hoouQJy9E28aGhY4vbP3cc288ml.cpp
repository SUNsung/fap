
        
        
    {  char* a_base = static_cast<char*>(
      params.buffer_allocations->GetDeviceAddress(a_buffer_).opaque());
  int* info_base = static_cast<int*>(
      params.buffer_allocations->GetDeviceAddress(info_buffer_).opaque());
  se::DeviceMemoryBase workspace_data =
      params.buffer_allocations->GetDeviceAddress(workspace_buffer_);
  for (int64 i = 0; i < batch_size_; ++i) {
    se::DeviceMemoryBase a_data =
        se::DeviceMemoryBase(a_base + i * a_batch_stride_, a_batch_stride_);
    se::DeviceMemory<int> info_data(
        se::DeviceMemoryBase(info_base + i, sizeof(int)));
    switch (type_) {
      case F32: {
        TF_RETURN_IF_ERROR(
            context->Potrf(uplo_, n_, se::DeviceMemory<float>(a_data), n_,
                           info_data, se::DeviceMemory<float>(workspace_data)));
        break;
      }
      case F64: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<double>(a_data), n_, info_data,
            se::DeviceMemory<double>(workspace_data)));
        break;
      }
      case C64: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<std::complex<float>>(a_data), n_,
            info_data, se::DeviceMemory<std::complex<float>>(workspace_data)));
        break;
      }
      case C128: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<std::complex<double>>(a_data), n_,
            info_data, se::DeviceMemory<std::complex<double>>(workspace_data)));
        break;
      }
      default:
        return InvalidArgument('Invalid type for cholesky %s',
                               PrimitiveType_Name(type_));
    }
  }
  return Status::OK();
}
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CHOLESKY_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_CHOLESKY_THUNK_H_
    
    #include 'tensorflow/compiler/xla/service/buffer_assignment.h'
#include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/compiler/xla/types.h'
#include 'tensorflow/core/lib/core/status.h'
    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/sequential_thunk.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    
    {
    {}  // namespace gpu
}  // namespace xla
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_TUPLE_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_TUPLE_THUNK_H_
    
      OP_REQUIRES_OK(
      context, ValidateUpdateShape(buffer_shape, indices_shape, updates_shape));
    
    
    {    void KeyChord::Vkey(int32_t value)
    {
        _vkey = value;
    }
}

    
    std::string LogFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'log');
}
    
    Status BlockHandle::DecodeFrom(Slice* input) {
  if (GetVarint64(input, &offset_) && GetVarint64(input, &size_)) {
    return Status::OK();
  } else {
    return Status::Corruption('bad block handle');
  }
}
    
    class EmptyIterator : public Iterator {
 public:
  EmptyIterator(const Status& s) : status_(s) {}
  ~EmptyIterator() override = default;
    }
    
    #endif  // STORAGE_LEVELDB_TABLE_MERGER_H_

    
    namespace leveldb {
    }
    
      Gfx *createGfx(OutputDev *out, double hDPI, double vDPI,
		 int rotate, GBool useMediaBox, GBool crop,
		 int sliceX, int sliceY, int sliceW, int sliceH,
		 GBool printing, Catalog *catalog,
		 GBool (*abortCheckCbk)(void *data),
		 void *abortCheckCbkData,
		 GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
		 void *annotDisplayDecideCbkData);
    
    class PageLabelInfo {
public:
  PageLabelInfo(Object *tree, int numPages);
  ~PageLabelInfo();
  GBool labelToIndex(GooString *label, int *index);
  GBool indexToLabel(int index, GooString *label);
    }
    
      // indirect reference or integer
  } else if (buf1.isInt()) {
    num = buf1.getInt();
    shift();
    if (buf1.isInt() && buf2.isCmd('R')) {
      obj->initRef(num, buf1.getInt());
      shift();
      shift();
    } else {
      obj->initInt(num);
    }
    
    PopplerObjectCache::~PopplerObjectCache() {
  delete cache;
}
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
    // number of Type 3 fonts to cache
#define splashOutT3FontCacheSize 8
    
    #include <cmath>
#include <iostream>
#include <limits>
#include <memory>
#include <vector>
    
    int main(int argc, char* argv[]) {
  QApplication a(argc, argv);
  int major, minor;
  {
    QOffscreenSurface surf;
    surf.create();
    }
    }
    
    struct alignas(16) CameraFrameSupplement {
  // @brief valid only when on_use = true
  bool on_use = false;
    }
    
      c_matrix_.setIdentity(states_num_, states_num_);
  env_uncertainty_.setZero(states_num_, states_num_);
    
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
    
    using cyber::common::GetAbsolutePath;
    
    
    {    struct stat file_stat;
    if (stat(file.c_str(), &file_stat) < 0)
    {
        swWarn('stat(%s) failed', file.c_str());
        return false;
    }
    if (file_stat.st_size <= offset)
    {
        swWarn('file[offset=%jd] is empty', (intmax_t) offset);
        return false;
    }
    return serv.sendfile(&serv, fd, (char *) file.c_str(), file.length(), offset, length) == SW_OK;
}
    
    #ifdef USE_UCONTEXT
    typedef ucontext_t coroutine_context_t;
#else
    typedef fcontext_t coroutine_context_t;
#endif
    
    TEST(coroutine_gethostbyname, resolve_cache_inet4_and_inet6)
{
    coro_test([](void *arg)
    {
        System::set_dns_cache_capacity(10);
    }
    }
    
        swSignalfd_init();
    swSignal_add(SIGUSR1,sig_usr1);
    swSignalfd_setup(SwooleG.main_reactor);
    
    namespace swoole
{
    }
    
            void cleanup() {
            delRead();
            delWrite();
        }