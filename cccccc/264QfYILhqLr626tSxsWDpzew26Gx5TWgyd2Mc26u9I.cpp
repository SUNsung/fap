
        
            http://www.apache.org/licenses/LICENSE-2.0
    
      int width = 35;
  int width_narrow = 15;
  int width_wide = 20;
  os << std::setw(width + 1) << 'Op,';
  os << std::setw(width_narrow + 1) << 'Count,';
  os << std::setw(width_wide + 1) << 'Measured time (ns),';
  os << std::setw(width_narrow + 2) << 'Time percent,';
  os << std::setw(width_narrow + 2) << 'Acc percent,';
  os << std::setw(width_wide + 1) << 'Analytical upper,';
  os << std::setw(width_wide + 1) << 'Analytical lower,';
  os << std::setw(width_narrow + 2) << 'Overall eff';
  os << std::setw(width_narrow + 2) << 'Compute eff';
  os << std::setw(width_narrow + 2) << 'Memory eff' << std::endl;
  float acc_percent = 0;
  for (const auto& op : ops_) {
    double percent = static_cast<double>(op.time) /
                     static_cast<double>(total_time_measured_serialized_);
    double eff =
        static_cast<double>(op.time_upper) / static_cast<double>(op.time);
    double compute_eff =
        static_cast<double>(op.compute_time) / static_cast<double>(op.time);
    double memory_eff =
        static_cast<double>(op.memory_time) / static_cast<double>(op.time);
    os << std::setw(width) << op.name << ',';
    os << std::setw(width_narrow) << op.count << ',';
    os << std::setw(width_wide) << op.time << ',';
    os << std::setw(width_narrow) << std::setprecision(2) << percent * 100
       << '%,';
    acc_percent += percent;
    os << std::setw(width_narrow) << std::setprecision(2) << acc_percent * 100
       << '%,';
    os << std::setw(width_wide) << op.time_upper << ',';
    os << std::setw(width_wide) << op.time_lower << ',';
    os << std::setw(width_narrow) << std::setprecision(2) << eff * 100 << '%,';
    os << std::setw(width_narrow) << std::setprecision(2) << compute_eff * 100
       << '%,';
    os << std::setw(width_narrow) << std::setprecision(2) << memory_eff * 100
       << '%,';
    os << std::endl;
  }
  os << std::endl;
    
    void ModelAnalyzer::PrintNodeInfo(const NodeDef* node,
                                  const GraphProperties& properties, bool debug,
                                  std::ostream& os) const {
  os << node->name() << ' [' << node->op() << ']' << std::endl;
  if (properties.HasOutputProperties(node->name())) {
    const std::vector<OpInfo::TensorProperties>& props =
        properties.GetOutputProperties(node->name());
    for (int i = 0; i < props.size(); ++i) {
      const OpInfo::TensorProperties& prop = props[i];
      os << '\t'
         << 'output ' << i << ' (' << DataTypeString(prop.dtype())
         << ') has shape ';
      if (prop.shape().unknown_rank()) {
        os << '?';
      } else {
        os << '[';
        for (int i = 0; i < prop.shape().dim_size(); ++i) {
          if (i > 0) {
            os << ', ';
          }
          if (prop.shape().dim(i).size() >= 0) {
            // Print the actual dimension.
            os << prop.shape().dim(i).size();
          } else if (prop.shape().dim(i).size() == -1) {
            // We don't know anything about the dimension.
            os << '?';
          } else {
            // Symbolic dimension.
            os << 'x' << -prop.shape().dim(i).size();
          }
        }
        os << ']';
      }
      os << std::endl;
    }
  }
    }
    
    
    {}  // namespace tensorflow

    
    PyArray_ArrFuncs NPyBfloat16_ArrFuncs;
    
    // Actually dereferences cached numpy arrays. REQUIRES being called while
// holding the GIL.
void ClearDecrefCache() {
  std::vector<void*> cache_copy;
  {
    mutex_lock ml(*DelayedDecrefLock());
    cache_copy.swap(*DecrefCache());
  }
  for (void* obj : cache_copy) {
    Py_DECREF(reinterpret_cast<PyObject*>(obj));
  }
}
    
    namespace tensorflow {
    }
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/lib/core/status.h'
    
    Safe_TFE_TensorHandlePtr make_safe(TFE_TensorHandle* handle) {
  return Safe_TFE_TensorHandlePtr(handle);
}
    
      ~ScopedActivateExecutorContext();
    
      // Logs information about the kernel driver version and userspace driver
  // library version.
  static void LogDriverVersionInformation();
    
      // TransactionObserver:
  void OnTransactionsUpdated(
      const std::vector<in_app_purchase::Transaction>& transactions) override;
    
    #ifndef ATOM_BROWSER_API_ATOM_API_RENDER_PROCESS_PREFERENCES_H_
#define ATOM_BROWSER_API_ATOM_API_RENDER_PROCESS_PREFERENCES_H_
    
      // C++ can not distinguish overloaded member function.
  template <AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template <AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template <typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
    
    {}  // namespace mate
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    IntSimdMatrixSSE::IntSimdMatrixSSE() {
#ifdef __SSE4_1__
  partial_funcs_ = {PartialMatrixDotVector1};
#endif  // __SSE4_1__
}
    
      // Split the part (horizontally), and save the split result into
  // parts_splitted. Note that it is caller's responsibility to release the
  // memory owns by parts_splitted. On the other hand, the part is unchanged
  // during this process and still owns the blobs, so do NOT call DeleteBoxes
  // when freeing the colpartitions in parts_splitted.
  void SplitCPHor(ColPartition* part,
                  GenericVector<ColPartition*>* parts_splitted);
    
    #include 'tesseractclass.h'
#ifdef _OPENMP
#include <omp.h>
#endif  // _OPENMP
    
    	// Set path to vendored ConEmu config file
	PathCombine(cfgPath, exeDir, L'vendor\\conemu-maximus5\\ConEmu.xml');
    
    bool SetDepth(int p0, HuffmanTree *pool, uint8_t *depth, int max_depth) {
  int stack[17];
  int level = 0;
  int p = p0;
  assert(max_depth <= 16);
  stack[0] = -1;
  while (true) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return false;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = static_cast<uint8_t>(level);
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return true;
    p = stack[level];
    stack[level] = -1;
  }
}
    
    
    {}  // namespace guetzli
    
    #include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <memory>
#include <string>
#include <sstream>
#include <string.h>
#include 'png.h'
#include 'guetzli/jpeg_data.h'
#include 'guetzli/jpeg_data_reader.h'
#include 'guetzli/processor.h'
#include 'guetzli/quality.h'
#include 'guetzli/stats.h'
    
    #include 'guetzli/jpeg_data.h'
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg);
    
    size_t HistogramHeaderCost(const JpegHistogram& histo) {
  size_t header_bits = 17 * 8;
  for (int i = 0; i + 1 < JpegHistogram::kSize; ++i) {
    if (histo.counts[i] > 0) {
      header_bits += 8;
    }
  }
  return header_bits;
}
    
    void BuildDCHistograms(const JPEGData& jpg, JpegHistogram* histo);
void BuildACHistograms(const JPEGData& jpg, JpegHistogram* histo);
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata);
size_t EstimateJpegDataSize(const int num_components,
                            const std::vector<JpegHistogram>& histograms);