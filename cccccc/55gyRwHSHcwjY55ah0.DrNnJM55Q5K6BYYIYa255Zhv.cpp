#include 'boost/scoped_ptr.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/db.hpp'
#include 'caffe/util/format.hpp'
    
     private:
  // wrap im2col/col2im so we don't have to remember the (long) argument lists
  inline void conv_im2col_cpu(const Dtype* data, Dtype* col_buff) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      im2col_cpu(data, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], col_buff);
    } else {
      im2col_nd_cpu(data, num_spatial_axes_, conv_input_shape_.cpu_data(),
          col_buffer_shape_.data(), kernel_shape_.cpu_data(),
          pad_.cpu_data(), stride_.cpu_data(), dilation_.cpu_data(), col_buff);
    }
  }
  inline void conv_col2im_cpu(const Dtype* col_buff, Dtype* data) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      col2im_cpu(col_buff, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], data);
    } else {
      col2im_nd_cpu(col_buff, num_spatial_axes_, conv_input_shape_.cpu_data(),
          col_buffer_shape_.data(), kernel_shape_.cpu_data(),
          pad_.cpu_data(), stride_.cpu_data(), dilation_.cpu_data(), data);
    }
  }
#ifndef CPU_ONLY
  inline void conv_im2col_gpu(const Dtype* data, Dtype* col_buff) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      im2col_gpu(data, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], col_buff);
    } else {
      im2col_nd_gpu(data, num_spatial_axes_, num_kernels_im2col_,
          conv_input_shape_.gpu_data(), col_buffer_.gpu_shape(),
          kernel_shape_.gpu_data(), pad_.gpu_data(),
          stride_.gpu_data(), dilation_.gpu_data(), col_buff);
    }
  }
  inline void conv_col2im_gpu(const Dtype* col_buff, Dtype* data) {
    if (!force_nd_im2col_ && num_spatial_axes_ == 2) {
      col2im_gpu(col_buff, conv_in_channels_,
          conv_input_shape_.cpu_data()[1], conv_input_shape_.cpu_data()[2],
          kernel_shape_.cpu_data()[0], kernel_shape_.cpu_data()[1],
          pad_.cpu_data()[0], pad_.cpu_data()[1],
          stride_.cpu_data()[0], stride_.cpu_data()[1],
          dilation_.cpu_data()[0], dilation_.cpu_data()[1], data);
    } else {
      col2im_nd_gpu(col_buff, num_spatial_axes_, num_kernels_col2im_,
          conv_input_shape_.gpu_data(), col_buffer_.gpu_shape(),
          kernel_shape_.gpu_data(), pad_.gpu_data(), stride_.gpu_data(),
          dilation_.gpu_data(), data);
    }
  }
#endif
    
    #endif  // CAFFE_BATCHREINDEX_LAYER_HPP_

    
    #include 'caffe/layers/base_conv_layer.hpp'
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
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
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs. At training time, we have @f$
   *      y_{\mbox{train}} = \left\{
   *         \begin{array}{ll}
   *            \frac{x}{1 - p} & \mbox{if } u > p \\
   *            0 & \mbox{otherwise}
   *         \end{array} \right.
   *      @f$, where @f$ u \sim U(0, 1)@f$ is generated independently for each
   *      input at each iteration. At test time, we simply have
   *      @f$ y_{\mbox{test}} = \mathbb{E}[y_{\mbox{train}}] = x @f$.
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    }
    
      /**
   * @brief Computes the error gradient w.r.t. the ELU inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} = \left\{
   *        \begin{array}{lr}
   *            1           & \mathrm{if} \; x > 0 \\
   *            y + \alpha  & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$ if propagate_down[0].
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    #include 'guetzli/jpeg_data.h'
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
    class memory_resource {
 public:
  virtual ~memory_resource() = default;
  virtual void* allocate(
      const size_t bytes,
      const size_t alignment = max_align_v) = 0;
  virtual void deallocate(
      void* p,
      const size_t bytes,
      const size_t alignment = max_align_v) = 0;
};
    
    path remove_prefix(const path& pth, const path& prefix) {
  path::const_iterator it;
  if (!skipPrefix(pth, prefix, it)) {
    throw filesystem_error(
        'Path does not start with prefix',
        pth,
        prefix,
        bsys::errc::make_error_code(bsys::errc::invalid_argument));
  }
    }
    
    bool FileWriterFactory::processOption(StringPiece name, StringPiece value) {
  if (name == 'async') {
    async_ = to<bool>(value);
    return true;
  } else if (name == 'max_buffer_size') {
    auto size = to<size_t>(value);
    if (size == 0) {
      throw std::invalid_argument(to<string>('must be a positive integer'));
    }
    maxBufferSize_ = size;
    return true;
  } else {
    return false;
  }
}
    
    void ImmediateFileWriter::writeMessage(
    StringPiece buffer,
    uint32_t /* flags */) {
  // Write the data.
  // We are doing direct file descriptor writes here, so there is no buffering
  // of log message data.  Each message is immediately written to the output.
  auto ret = folly::writeFull(file_.fd(), buffer.data(), buffer.size());
  if (ret < 0) {
    int errnum = errno;
    LoggerDB::internalWarning(
        __FILE__,
        __LINE__,
        'error writing to log file ',
        file_.fd(),
        ': ',
        errnoStr(errnum));
  }
}
    
    namespace folly {
    }
    
    namespace folly {
    }
    
    // This class is to manage an aligned user
// allocated buffer for direct I/O purposes
// though can be used for any purpose.
class AlignedBuffer {
  size_t alignment_;
  std::unique_ptr<char[]> buf_;
  size_t capacity_;
  size_t cursize_;
  char* bufstart_;
    }
    
      std::string full_private_path =
      checkpoint_dir.substr(0, final_nonslash_idx + 1) + '.tmp';
  ROCKS_LOG_INFO(
      db_options.info_log,
      'Snapshot process -- using temporary directory %s',
      full_private_path.c_str());
  // create snapshot directory
  s = db_->GetEnv()->CreateDir(full_private_path);
  uint64_t sequence_number = 0;
  if (s.ok()) {
    db_->DisableFileDeletions();
    s = CreateCustomCheckpoint(
        db_options,
        [&](const std::string& src_dirname, const std::string& fname,
            FileType) {
          ROCKS_LOG_INFO(db_options.info_log, 'Hard Linking %s', fname.c_str());
          return db_->GetEnv()->LinkFile(src_dirname + fname,
                                         full_private_path + fname);
        } /* link_file_cb */,
        [&](const std::string& src_dirname, const std::string& fname,
            uint64_t size_limit_bytes, FileType) {
          ROCKS_LOG_INFO(db_options.info_log, 'Copying %s', fname.c_str());
          return CopyFile(db_->GetEnv(), src_dirname + fname,
                          full_private_path + fname, size_limit_bytes,
                          db_options.use_fsync);
        } /* copy_file_cb */,
        [&](const std::string& fname, const std::string& contents, FileType) {
          ROCKS_LOG_INFO(db_options.info_log, 'Creating %s', fname.c_str());
          return CreateFile(db_->GetEnv(), full_private_path + fname, contents);
        } /* create_file_cb */,
        &sequence_number, log_size_for_flush);
    // we copied all the files, enable file deletions
    db_->EnableFileDeletions(false);
  }
    
    namespace rocksdb {
JniCallback::JniCallback(JNIEnv* env, jobject jcallback_obj) {
  // Note: jcallback_obj may be accessed by multiple threads,
  // so we ref the jvm not the env
  const jint rs = env->GetJavaVM(&m_jvm);
  if(rs != JNI_OK) {
    // exception thrown
    return;
  }
    }
    }
    
      unique_ptr<WritableFile> writable_file;
  fname = test::TmpDir() + '/FailWhenSameKeyInserted';
  ASSERT_OK(env_->NewWritableFile(fname, &writable_file, env_options_));
  unique_ptr<WritableFileWriter> file_writer(
      new WritableFileWriter(std::move(writable_file), EnvOptions()));
  CuckooTableBuilder builder(file_writer.get(), kHashTableRatio, num_hash_fun,
                             100, BytewiseComparator(), 1, false, false,
                             GetSliceHash, 0 /* column_family_id */,
                             kDefaultColumnFamilyName);
  ASSERT_OK(builder.status());