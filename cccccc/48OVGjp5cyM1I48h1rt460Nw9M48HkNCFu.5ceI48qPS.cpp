
        
        #include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/format.hpp'
#include 'caffe/util/math_functions.hpp'
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    
    {}  // namespace caffe
    
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
    
    #include 'dotproductsse.h'
#include <cstdio>
#include <cstdlib>
    
    
    {  for (std::map<int, ParamContent*>::iterator iter = vcMap.begin();
                                          iter != vcMap.end();
                                          ++iter) {
    ParamContent* cur = iter->second;
    if (!changes_only || cur->HasChanged()) {
      fprintf(fp, '%-25s   %-12s   # %s\n',
              cur->GetName(), cur->GetValue().string(), cur->GetDescription());
    }
  }
  fclose(fp);
}
#endif // GRAPHICS_DISABLED

    
    /**********************************************************************
 * recog_word
 *
 * Convert the word to tess form and pass it to the tess segmenter.
 * Convert the output back to editor form.
 **********************************************************************/
namespace tesseract {
void Tesseract::recog_word(WERD_RES *word) {
  if (wordrec_skip_no_truth_words && (word->blamer_bundle == nullptr ||
      word->blamer_bundle->incorrect_result_reason() == IRR_NO_TRUTH)) {
    if (classify_debug_level) tprintf('No truth for word - skipping\n');
    word->tess_failed = true;
    return;
  }
  ASSERT_HOST(!word->chopped_word->blobs.empty());
  recog_word_recursive(word);
  word->SetupBoxWord();
  if (word->best_choice->length() != word->box_word->length()) {
    tprintf('recog_word ASSERT FAIL String:\'%s\'; '
            'Strlen=%d; #Blobs=%d\n',
            word->best_choice->debug_string().string(),
            word->best_choice->length(), word->box_word->length());
  }
  ASSERT_HOST(word->best_choice->length() == word->box_word->length());
  // Check that the ratings matrix size matches the sum of all the
  // segmentation states.
  if (!word->StatesAllValid()) {
    tprintf('Not all words have valid states relative to ratings matrix!!');
    word->DebugWordChoices(true, nullptr);
    ASSERT_HOST(word->StatesAllValid());
  }
  if (tessedit_override_permuter) {
    /* Override the permuter type if a straight dictionary check disagrees. */
    uint8_t perm_type = word->best_choice->permuter();
    if ((perm_type != SYSTEM_DAWG_PERM) &&
        (perm_type != FREQ_DAWG_PERM) && (perm_type != USER_DAWG_PERM)) {
      uint8_t real_dict_perm_type = dict_word(*word->best_choice);
      if (((real_dict_perm_type == SYSTEM_DAWG_PERM) ||
           (real_dict_perm_type == FREQ_DAWG_PERM) ||
           (real_dict_perm_type == USER_DAWG_PERM)) &&
          (alpha_count(word->best_choice->unichar_string().string(),
                       word->best_choice->unichar_lengths().string()) > 0)) {
        word->best_choice->set_permuter(real_dict_perm_type);  // use dict perm
      }
    }
    if (tessedit_rejection_debug &&
        perm_type != word->best_choice->permuter()) {
      tprintf('Permuter Type Flipped from %d to %d\n',
              perm_type, word->best_choice->permuter());
    }
  }
  // Factored out from control.cpp
  ASSERT_HOST((word->best_choice == nullptr) == (word->raw_choice == nullptr));
  if (word->best_choice == nullptr || word->best_choice->length() == 0 ||
      static_cast<int>(strspn(word->best_choice->unichar_string().string(),
                              ' ')) == word->best_choice->length()) {
    word->tess_failed = true;
    word->reject_map.initialise(word->box_word->length());
    word->reject_map.rej_word_tess_failure();
  } else {
    word->tess_failed = false;
  }
}
    }
    
    namespace {
void readBytes(BufferedFile& fp, unsigned char* buf, size_t buflen,
               size_t readlen)
{
  assert(readlen <= buflen);
  READ_CHECK(fp, buf, readlen);
}
} // namespace
    
      // number of nodes
  uint32_t numNodes = htonl(nodes_.size());
  WRITE_CHECK(fp, &numNodes, sizeof(uint32_t));
  // 4bytes reserved
  WRITE_CHECK(fp, zero, 4);
    
    class DHTRoutingTableSerializer {
private:
  int family_;
    }
    
      void addTask(const std::shared_ptr<DHTTask>& task) { queue_.push_back(task); }
    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) CXX11_OVERRIDE;
    
      virtual ~DHTTaskQueueImpl();
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H

    
    void DHTUnknownMessage::doReceivedAction() {}
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);