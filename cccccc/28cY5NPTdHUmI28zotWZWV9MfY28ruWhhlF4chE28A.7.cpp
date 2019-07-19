
        
        void run_recovery_tests(void) {
    int i;
    for (i = 0; i < count; i++) {
        test_ecdsa_recovery_api();
    }
    for (i = 0; i < 64*count; i++) {
        test_ecdsa_recovery_end_to_end();
    }
    test_ecdsa_recovery_edge_cases();
}
    
    bool ParseInt32(const std::string& str, int32_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtol will not set errno if valid
    long int n = strtol(str.c_str(), &endp, 10);
    if(out) *out = (int32_t)n;
    // Note that strtol returns a *long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int32_t*. On 64-bit
    // platforms the size of these types may be different.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int32_t>::min() &&
        n <= std::numeric_limits<int32_t>::max();
}
    
        objTypes['cat2'] = UniValue::VSTR;
    BOOST_CHECK(!obj.checkObject(objTypes));
    
    %define SHUF_00BA	xmm10 ; shuffle xBxA -> 00BA
%define SHUF_DC00	xmm11 ; shuffle xDxC -> DC00
%define BYTE_FLIP_MASK	xmm12
    
%ifdef LINUX
%define NUM_BLKS rdx	; 3rd arg
%define CTX	rsi	; 2nd arg
%define INP	rdi	; 1st arg
    
    class ModelDB: public DB {
 public:
  class ModelSnapshot : public Snapshot {
   public:
    KVMap map_;
  };
    }
    
    
    {}  // namespace leveldb
    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
          PartialCompactTestPreFault(num_pre_sync, num_post_sync);
      PartialCompactTestReopenWithFault(RESET_DROP_UNSYNCED_DATA,
                                        num_pre_sync,
                                        num_post_sync);
    
    // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
      protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
  ASSERT_TRUE(message.ParseFromString(message.SerializeAsString()));
  EXPECT_FALSE(message.any_value().Is<protobuf_unittest::TestAny>());
  EXPECT_TRUE(message.any_value().Is<google::protobuf::Any>());
    
    // The abstract interface to a class which generates code implementing a
// particular proto file in a particular language.  A number of these may
// be registered with CommandLineInterface to support various languages.
class PROTOC_EXPORT CodeGenerator {
 public:
  inline CodeGenerator() {}
  virtual ~CodeGenerator();
    }
    
    #define MESSAGE_TEST_NAME MessageTest
#define GENERATED_DESCRIPTOR_TEST_NAME GeneratedDescriptorTest
#define GENERATED_MESSAGE_TEST_NAME GeneratedMessageTest
#define GENERATED_ENUM_TEST_NAME GeneratedEnumTest
#define GENERATED_SERVICE_TEST_NAME GeneratedServiceTest
#define HELPERS_TEST_NAME HelpersTest
#define DESCRIPTOR_INIT_TEST_NAME DescriptorInitializationTest
    
    Importer::Importer(SourceTree* source_tree,
                   MultiFileErrorCollector* error_collector)
    : database_(source_tree),
      pool_(&database_, database_.GetValidationErrorCollector()) {
  pool_.EnforceWeakDependencies(true);
  database_.RecordErrorsTo(error_collector);
}
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MultiFileErrorCollector);
};
    
    
    {  // Create temporary file
  auto fd = mkstemp(&tmp[0]);
  if (fd == -1) {
    throw std::system_error(errno, std::system_category());
  }
  close(fd);
  return std::string(tmp.data(), tmp.size());
}
    
    
    {
    {    return SingleGradientDef(
        'MergeSingleMapFeatureTensorsGradient',
        '',
        input_blob_names,
        output_blob_names);
  }
};
    
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
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    
// Returns the median value of the vector, given that the values are
// circular, with the given modulus. Values may be signed or unsigned,
// eg range from -pi to pi (modulus 2pi) or from 0 to 2pi (modulus 2pi).
// NOTE that the array is shuffled, but the time taken is linear.
// An assumption is made that most of the values are spread over no more than
// half the range, but wrap-around is accounted for if the median is near
// the wrap-around point.
// Cannot be a member of GenericVector, as it makes heavy used of LLSQ.
// T must be an integer or float/double type.
template<typename T> T MedianOfCircularValues(T modulus, GenericVector<T>* v) {
  LLSQ stats;
  T halfrange = static_cast<T>(modulus / 2);
  int num_elements = v->size();
  for (int i = 0; i < num_elements; ++i) {
    stats.add((*v)[i], (*v)[i] + halfrange);
  }
  bool offset_needed = stats.y_variance() < stats.x_variance();
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] += halfrange;
    }
  }
  int median_index = v->choose_nth_item(num_elements / 2);
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] -= halfrange;
    }
  }
  return (*v)[median_index];
}
    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
    // Computes the Otsu threshold(s) for the given image rectangle, making one
// for each channel. Each channel is always one byte per pixel.
// Returns an array of threshold values and an array of hi_values, such
// that a pixel value >threshold[channel] is considered foreground if
// hi_values[channel] is 0 or background if 1. A hi_value of -1 indicates
// that there is no apparent foreground. At least one hi_value will not be -1.
// Delete thresholds and hi_values with delete [] after use.
// The return value is the number of channels in the input image, being
// the size of the output thresholds and hi_values arrays.
int OtsuThreshold(Pix* src_pix, int left, int top, int width, int height,
                  int** thresholds, int** hi_values);
    
    #endif  // TESSERACT_CCUTIL_QRSEQUENCE_H_

    
    // Class to encapsulate all the functionality and sub-structures required
// to count errors for an isolated character classifier (ShapeClassifier).
class ErrorCounter {
 public:
  // Computes and returns the unweighted boosting_mode error rate of the given
  // classifier. Can be used for testing, or inside an iterative training
  // system, including one that uses boosting.
  // report_levels:
  // 0 = no output.
  // 1 = bottom-line error rate.
  // 2 = bottom-line error rate + time.
  // 3 = font-level error rate + time.
  // 4 = list of all errors + short classifier debug output on 16 errors.
  // 5 = list of all errors + short classifier debug output on 25 errors.
  // * The boosting_mode determines which error type is used for computing the
  //   scaled_error output, and setting the is_error flag in the samples.
  // * The fontinfo_table is used to get string font names for the debug
  //   output, and also to count font attributes errors.
  // * The page_images vector may contain a Pix* (which may be nullptr) for each
  //   page index assigned to the samples.
  // * The it provides encapsulated iteration over some sample set.
  // * The outputs unichar_error, scaled_error and totals_report are all
  //   optional.
  // * If not nullptr, unichar error gets the top1 unichar error rate.
  // * Scaled_error gets the error chosen by boosting_mode weighted by the
  //   weights on the samples.
  // * Fonts_report gets a string summarizing the error rates for each font in
  //   both human-readable form and as a tab-separated list of error counts.
  //   The human-readable form is all before the first tab.
  // * The return value is the un-weighted version of the scaled_error.
  static double ComputeErrorRate(ShapeClassifier* classifier,
                                 int report_level, CountTypes boosting_mode,
                                 const FontInfoTable& fontinfo_table,
                                 const GenericVector<Pix*>& page_images,
                                 SampleIterator* it,
                                 double* unichar_error,
                                 double* scaled_error,
                                 STRING* fonts_report);
  // Tests a pair of classifiers, debugging errors of the new against the old.
  // See errorcounter.h for description of arguments.
  // Iterates over the samples, calling the classifiers in normal/silent mode.
  // If the new_classifier makes a boosting_mode error that the old_classifier
  // does not, and the appropriate, it will then call the new_classifier again
  // with a debug flag and a keep_this argument to find out what is going on.
  static void DebugNewErrors(ShapeClassifier* new_classifier,
                             ShapeClassifier* old_classifier,
                             CountTypes boosting_mode,
                             const FontInfoTable& fontinfo_table,
                             const GenericVector<Pix*>& page_images,
                             SampleIterator* it);
    }
    
    // Setup the map for the given indexed_features that have been indexed by
// feature_map.
void IntFeatureDist::Set(const GenericVector<int>& indexed_features,
                          int canonical_count, bool value) {
  total_feature_weight_ = canonical_count;
  for (int i = 0; i < indexed_features.size(); ++i) {
    const int f = indexed_features[i];
    features_[f] = value;
    for (int dir = -kNumOffsetMaps; dir <= kNumOffsetMaps; ++dir) {
      if (dir == 0) continue;
      const int mapped_f = feature_map_->OffsetFeature(f, dir);
      if (mapped_f >= 0) {
        features_delta_one_[mapped_f] = value;
        for (int dir2 = -kNumOffsetMaps; dir2 <= kNumOffsetMaps; ++dir2) {
          if (dir2 == 0) continue;
          const int mapped_f2 = feature_map_->OffsetFeature(mapped_f, dir2);
          if (mapped_f2 >= 0)
            features_delta_two_[mapped_f2] = value;
        }
      }
    }
  }
}
    
    mkldnn_output_t CreateMKLDNNMem(const NDArray &out_arr,
                                const mkldnn::memory::primitive_desc &desc,
                                OpReqType req,
                                const NDArray* in_arr) {
  if (kAddTo == req) {
    auto tmp = TmpMemMgr::Get()->Alloc(desc);
    return mkldnn_output_t(OutDataOp::AddBack, tmp);
  } else if (kWriteInplace == req && in_arr != nullptr && CanWriteTo(out_arr, *in_arr, desc)) {
    mkldnn::memory *mem = const_cast<NDArray &>(out_arr).CreateMKLDNNData(desc);
    // mem is nullptr if out_arr is view and desc is MKLDNN format.
    // need to Reorder2Default before calling CreateMKLDNNMem
    CHECK(mem != nullptr);
    return mkldnn_output_t(OutDataOp::Noop, mem);
  } else if (kWriteInplace == req) {
    auto tmp = TmpMemMgr::Get()->Alloc(desc);
    return mkldnn_output_t(OutDataOp::CopyBack, tmp);
  } else if (kWriteTo == req) {
    mkldnn::memory *mem = const_cast<NDArray &>(out_arr).CreateMKLDNNData(desc);
    if (nullptr == mem) {
      auto tmp = TmpMemMgr::Get()->Alloc(desc);
      return mkldnn_output_t(OutDataOp::CopyBack, tmp);
    }
    return mkldnn_output_t(OutDataOp::Noop, mem);
  }
  auto tmp = TmpMemMgr::Get()->Alloc(desc);
  return mkldnn_output_t(OutDataOp::Noop, tmp);
}
    
    
    {
    {}  // namespace op
}  // namespace mxnet
#endif  // MXNET_OPERATOR_NN_MOMENTS_INL_H_

    
    DMLC_REGISTER_PARAMETER(MomentsParam);
    
    DMLC_REGISTER_PARAMETER(AMPCastParam);
DMLC_REGISTER_PARAMETER(AMPMultiCastParam);
    
    #include <mxnet/storage.h>
#include <cstddef>
    
    template<int req>
struct IndexArrayDefaultKernel {
  MSHADOW_XINLINE static void Map(int i,
                                  int64_t* out_data,
                                  const int ndim,
                                  const dim_t* shape) {
    int64_t index = i;
    for (ptrdiff_t j = ndim - 1; j >= 0; j--) {
      KERNEL_ASSIGN(out_data[ptrdiff_t(i) * ptrdiff_t(ndim) + j], req, index % shape[j]);
      index /= shape[j];
    }
  }
};
    
        if (!q.value.HasMember('interval')) {
      query.interval = FLAGS_schedule_default_interval;
    } else {
      query.interval = JSON::valueToSize(q.value['interval']);
    }
    
      // This function designed to write batch of data as one operation and get
  // as much performance as possbile. Because of this, db may not guarantee
  // data consistency or atomic nature of operation
  // Please see actual function implementation for details and limitations
  virtual ExpectedSuccess<DatabaseError> putStringsUnsafe(
      const std::string& domain,
      const std::vector<std::pair<std::string, std::string>>& data) = 0;
    
    #include <osquery/utils/json/json.h>
    
      /// The UNIX time for when the status message was emitted
  size_t time;