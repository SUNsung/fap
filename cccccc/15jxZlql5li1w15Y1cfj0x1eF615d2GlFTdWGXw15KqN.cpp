
        
        // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel AVX intrinsics to access the SIMD instruction set.
double DotProductAVX(const double* u, const double* v, int n) {
  int max_offset = n - 4;
  int offset = 0;
  // Accumulate a set of 4 sums in sum, by loading pairs of 4 values from u and
  // v, and multiplying them together in parallel.
  __m256d sum = _mm256_setzero_pd();
  if (offset <= max_offset) {
    offset = 4;
    // Aligned load is reputedly faster but requires 32 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 31) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 31) == 0) {
      // Use aligned load.
      __m256d floats1 = _mm256_load_pd(u);
      __m256d floats2 = _mm256_load_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_load_pd(u + offset);
        floats2 = _mm256_load_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    } else {
      // Use unaligned load.
      __m256d floats1 = _mm256_loadu_pd(u);
      __m256d floats2 = _mm256_loadu_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_loadu_pd(u + offset);
        floats2 = _mm256_loadu_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    }
  }
  // Add the 4 product sums together horizontally. Not so easy as with sse, as
  // there is no add across the upper/lower 128 bit boundary, so permute to
  // move the upper 128 bits to lower in another register.
  __m256d sum2 = _mm256_permute2f128_pd(sum, sum, 1);
  sum = _mm256_hadd_pd(sum, sum2);
  sum = _mm256_hadd_pd(sum, sum);
  double result;
  // _mm256_extract_f64 doesn't exist, but resist the temptation to use an sse
  // instruction, as that introduces a 70 cycle delay. All this casting is to
  // fool the intrinsics into thinking we are extracting the bottom int64.
  auto cast_sum = _mm256_castpd_si256(sum);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored '-Wstrict-aliasing'
  *(reinterpret_cast<int64_t*>(&result)) =
#if defined(_WIN32) || defined(__i386__)
      // This is a very simple workaround that is activated
      // for all platforms that do not have _mm256_extract_epi64.
      // _mm256_extract_epi64(X, Y) == ((uint64_t*)&X)[Y]
      ((uint64_t*)&cast_sum)[0]
#else
      _mm256_extract_epi64(cast_sum, 0)
#endif
      ;
#pragma GCC diagnostic pop
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
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
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
      // Try to adjust the blamer bundle.
  if (orig_bb != nullptr) {
    // TODO(rays) Looks like a leak to me.
    // orig_bb should take, rather than copy.
    word->blamer_bundle = new BlamerBundle();
    word2->blamer_bundle = new BlamerBundle();
    orig_bb->SplitBundle(chopped->blobs.back()->bounding_box().right(),
                         word2->chopped_word->blobs[0]->bounding_box().left(),
                         wordrec_debug_blamer,
                         word->blamer_bundle, word2->blamer_bundle);
  }
    
    // Creates a box file string from a unichar string, TBOX and page number.
void MakeBoxFileStr(const char* unichar_str, const TBOX& box, int page_num,
                    STRING* box_str);
    
    template <class A1> class TessCallback1;
    
    CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    namespace grpc {
    }
    
    namespace grpc {
    }
    
      // Fixed Field ID values:
  enum FieldIdValue {
    kTraceIdField = 0,
    kSpanIdField = 1,
    kTraceOptionsField = 2,
  };
    
    const ViewDescriptor& ClientRoundtripLatencyMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/client/roundtrip_latency/minute')
          .set_measure(kRpcClientRoundtripLatencyMeasureName)
          .set_aggregation(MillisDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
    void ProtoServerReflection::FillErrorResponse(const Status& status,
                                              ErrorResponse* error_response) {
  error_response->set_error_code(status.error_code());
  error_response->set_error_message(status.error_message());
}
    
    // Reads the CPU stats (in a pair of busy and total numbers) from the system.
// The units of the stats should be the same.
std::pair<uint64_t, uint64_t> GetCpuStatsImpl();
    
      void Corrupt(FileType filetype, int offset, int bytes_to_corrupt) {
    // Pick file to corrupt
    std::vector<std::string> filenames;
    ASSERT_OK(env_.GetChildren(dbname_, &filenames));
    uint64_t number;
    FileType type;
    std::string fname;
    int picked_number = -1;
    for (size_t i = 0; i < filenames.size(); i++) {
      if (ParseFileName(filenames[i], &number, &type) &&
          type == filetype &&
          int(number) > picked_number) {  // Pick latest file
        fname = dbname_ + '/' + filenames[i];
        picked_number = number;
      }
    }
    ASSERT_TRUE(!fname.empty()) << filetype;
    }
    
    #include <deque>
#include <set>
#include 'db/dbformat.h'
#include 'db/log_writer.h'
#include 'db/snapshot.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'port/port.h'
#include 'port/thread_annotations.h'
    
    namespace leveldb {
    }
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string LogFileName(const std::string& dbname, uint64_t number);
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
      // Reports dropped bytes to the reporter.
  // buffer_ must be updated to remove the dropped bytes prior to invocation.
  void ReportCorruption(uint64_t bytes, const char* reason);
  void ReportDrop(uint64_t bytes, const Status& reason);
    
      Status OpenWithStatus(Options* options = nullptr) {
    Close();
    Options opts;
    if (options != nullptr) {
      opts = *options;
    } else {
      opts.reuse_logs = true;  // TODO(sanjay): test both ways
      opts.create_if_missing = true;
    }
    if (opts.env == nullptr) {
      opts.env = env_;
    }
    return DB::Open(opts, dbname_, &db_);
  }
    
    namespace leveldb {
    }
    
      /// Remove a pack, by name.
  void remove(const std::string& pack);
    
    QueryData ATCPlugin::generate(QueryContext& context) {
  QueryData qd;
  std::vector<std::string> paths;
  auto s = resolveFilePattern(path_, paths);
  if (!s.ok()) {
    LOG(WARNING) << 'Could not glob: ' << path_;
  }
  for (const auto& path : paths) {
    s = genQueryDataForSqliteTable(path, sqlite_query_, qd, false);
    if (!s.ok()) {
      LOG(WARNING) << 'Error Code: ' << s.getCode()
                   << ' Could not generate data: ' << s.getMessage();
    }
  }
  return qd;
}
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    #include <gflags/gflags.h>
#include <gtest/gtest.h>
    
    #include <vector>