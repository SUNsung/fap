
        
        
    {
    {
    {
    {bool AnnotationMatchesSubstring(const string& file_content,
                                const GeneratedCodeInfo::Annotation* annotation,
                                const string& expected_text) {
  std::vector<const GeneratedCodeInfo::Annotation*> annotations;
  annotations.push_back(annotation);
  return AtLeastOneAnnotationMatchesSubstring(file_content, annotations,
                                              expected_text);
}
}  // namespace annotation_test_util
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {  for (int i = 0; i < parts.size(); i++) {
    string::size_type equals_pos = parts[i].find_first_of('=');
    std::pair<string, string> value;
    if (equals_pos == string::npos) {
      value.first = parts[i];
      value.second = '';
    } else {
      value.first = parts[i].substr(0, equals_pos);
      value.second = parts[i].substr(equals_pos + 1);
    }
    output->push_back(value);
  }
}
    
    TEST(MovableMessageTest, SelfMoveAssignment) {
  // The `self` reference is necessary to defeat -Wself-move.
  protobuf_unittest::TestAllTypes message, &self = message;
  TestUtil::SetAllFields(&message);
  message = std::move(self);
  TestUtil::ExpectAllFieldsSet(message);
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, service);
  printer->Print(
    ' * Protobuf service {@code $fullname$}\n'
    ' */\n',
    'fullname', EscapeJavadoc(service->full_name()));
}
    
        /*
        For each point `p` within `size`, do:
        dst[p] = lower <= src[p] && src[p] <= upper ? trueValue : falseValue
    */
    void thresholdRange(const Size2D &size,
                        const u8 *srcBase, ptrdiff_t srcStride,
                        u8 *dstBase, ptrdiff_t dstStride,
                        u8 lowerThreshold, u8 upperThreshold,
                        u8 trueValue = 255, u8 falseValue = 0);
    
    void absDiff(const Size2D &size,
             const u16 *src0Base, ptrdiff_t src0Stride,
             const u16 *src1Base, ptrdiff_t src1Stride,
             u16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u16>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        //last line
    if(i < size.height)
    {
        //vertical convolution
        ptrdiff_t idx_rm1 = internal::borderInterpolate(i - 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp1 = internal::borderInterpolate(i + 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
    }
    
    
    {            v_src = vld4q_u8(src + sj + 64);
            vst1q_u8(dst + dj + 16, v_src.val[coi]);
        }
#endif
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(f32, s8, 8,
     register float32x4_t vhalf asm ('q0') = vdupq_n_f32(0.5f);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d2-d3}, [%[src1]]                              \n\t'
             'vld1.32 {d4-d5}, [%[src2]]                              \n\t'
             'vadd.f32 q3, q1, q0                                     \n\t'
             'vadd.f32 q4, q2, q0                                     \n\t'
             'vcvt.s32.f32 q5, q3                                     \n\t'
             'vcvt.s32.f32 q6, q4                                     \n\t'
             'vqmovn.s32 d14, q5                                      \n\t'
             'vqmovn.s32 d15, q6                                      \n\t'
             'vqmovn.s16 d16, q7                                      \n\t'
             'vst1.8 {d16}, [%[dst]]                                  \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i + 0),
               [src2] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i),
               'w' (vhalf)
             : 'd2','d3','d4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17'
         );
     }
})
#else
CVT_FUNC(f32, s8, 8,
     float32x4_t vhalf = vdupq_n_f32(0.5f);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         float32x4_t vline1_f32 = vld1q_f32(_src + i);
         float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
    }
    }
    
    void lshift(const Size2D &size,
            const u8 * srcBase, ptrdiff_t srcStride,
            s16 * dstBase, ptrdiff_t dstStride,
            u32 shift)
{
    internal::assertSupportedConfiguration();
    }
    
    
    {
    {        for (--jd; js < size.width; ++js, --jd)
            dst[jd] = src[js];
    }
}
    
    // Factory makes and returns an IntSimdMatrix (sub)class of the best
// available type for the current architecture.
/* static */
IntSimdMatrix* IntSimdMatrix::GetFastestMultiplier() {
  IntSimdMatrix* multiplier = nullptr;
  if (SIMDDetect::IsAVX2Available()) {
    multiplier = new IntSimdMatrixAVX2();
  } else if (SIMDDetect::IsSSEAvailable()) {
    multiplier = new IntSimdMatrixSSE();
  } else {
    // Default c++ implementation.
    multiplier = new IntSimdMatrix();
  }
  return multiplier;
}
    
      // Computes a reshaped copy of the weight matrix w. If there are no
  // partial_funcs_, it does nothing.
  void Init(const GENERIC_2D_ARRAY<int8_t>& w);
    
    // Computes one set of 4x8 products of inputs and weights, adding to result.
// Horizontally adds 4 adjacent results, making 8x32-bit results.
// rep_input is assumed to be an 8x replicated set of 4x8-bit signed integers.
// Note that wi must previously have been re-organized with blocks of 4x8
// weights in contiguous memory.
// ones is a register of 16x16-bit values all equal to 1.
// Note: wi is incremented by the amount of data read.
// weights and reps are scratch registers.
// This function must be inlined with references in order for the compiler to
// correctly use the registers declared in the caller.
inline void MultiplyGroup(const __m256i& rep_input, const __m256i& ones,
                          const int8_t*& wi, __m256i& weights, __m256i& reps,
                          __m256i& result) {
  // Load a 4x8 block of weights.
  weights = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(wi));
  wi += kNumInputsPerRegister;
  // Normalize the signs on rep_input, weights, so weights is always +ve.
  reps = _mm256_sign_epi8(rep_input, weights);
  weights = _mm256_sign_epi8(weights, weights);
  // Multiply 32x8-bit reps by 32x8-bit weights to make 16x16-bit results,
  // with adjacent pairs added.
  weights = _mm256_maddubs_epi16(weights, reps);
  // Multiply 16x16-bit result by 16x16-bit ones to make 8x32-bit results,
  // with  adjacent pairs added. What we really want is a horizontal add of
  // 16+16=32 bit result, but there is no such instruction, so multiply by
  // 16-bit ones instead. It is probably faster than all the sign-extending,
  // permuting and adding that would otherwise be required.
  weights = _mm256_madd_epi16(weights, ones);
  result = _mm256_add_epi32(result, weights);
}
    
    #endif

    
      // Array holding scores for each orientation id [0,3].
  // Orientation ids [0..3] map to [0, 270, 180, 90] degree orientations of the
  // page respectively, where the values refer to the amount of clockwise
  // rotation to be applied to the page for the text to be upright and readable.
  float orientations[4];
  // Script confidence scores for each of 4 possible orientations.
  float scripts_na[4][kMaxNumberOfScripts];
    
    bool PageIterator::SetWordBlamerBundle(BlamerBundle *blamer_bundle) {
  if (it_->word() != nullptr) {
    it_->word()->blamer_bundle = blamer_bundle;
    return true;
  } else {
    return false;
  }
}
    
      /**
   * Returns an image of the current object at the given level in greyscale
   * if available in the input. To guarantee a binary image use BinaryImage.
   * NOTE that in order to give the best possible image, the bounds are
   * expanded slightly over the binary connected component, by the supplied
   * padding, so the top-left position of the returned image is returned
   * in (left,top). These will most likely not match the coordinates
   * returned by BoundingBox.
   * If you do not supply an original image, you will get a binary one.
   * Use pixDestroy to delete the image after use.
   */
  Pix* GetImage(PageIteratorLevel level, int padding, Pix* original_img,
                int* left, int* top) const;
    
    
    {  *right_piece = word2;
  *orig_blamer_bundle = orig_bb;
}
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
      void branchFar(CodeAddress c, BranchParams bp,
                 ImmType immt = ImmType::TocOnly,
                 bool immMayChange = false) {
    LinkReg lr = (bp.savesLR()) ? LinkReg::Save : LinkReg::DoNotTouch;
    branchFar(c, static_cast<BranchConditions>(bp), lr, immt, immMayChange);
  }
    
      // Parse and process a .ini string (e.g., -d)
  static void ParseIniString(const std::string &iniStr, IniSettingMap &ini,
                             const bool constants_only = false);
    
      static std::string FormatNumber(const char* fmt, int64_t n);
  static std::string FormatSize(int64_t size);
  static std::string FormatTime(int64_t milliSeconds);
    
    
    {    // If the -c option is specified without a -n, php behavior is to
    // load the default ini/hdf
    auto cb = [&newargv] (const char *filename) {
      newargv.push_back('-c');
      newargv.push_back(filename);
    };
    add_default_config_files_globbed(DEFAULT_CONFIG_DIR '/php*.ini', cb);
    add_default_config_files_globbed(DEFAULT_CONFIG_DIR '/config*.hdf', cb);
  }
    
      ExtendedException& operator=(const ExtendedException& other);
  ExtendedException& operator=(ExtendedException&& other) noexcept;
    
    #endif

    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
        // delete files/directories that are only in dest
    if (access(fsrc.c_str(), F_OK) < 0) {
      size_t pos = fdest.rfind('.');
      if (pos != string::npos) {
        string ext = fdest.substr(pos + 1);
        // do not delete intermediate files
        if (ext == 'o' || ext == 'd') {
          continue;
        }
      }
      todelete.insert(fdest);
      continue;
    }
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    #include <dmlc/io.h>
#include <string>
#include <cstring>
#include './sync.h'
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    /*!
 * \brief Registry entry for sparse page format.
 */
struct SparsePageFormatReg
    : public dmlc::FunctionRegEntryBase<SparsePageFormatReg,
                                        std::function<SparsePageFormat* ()> > {
};
    
    namespace dmlc {
DMLC_REGISTRY_ENABLE(::xgboost::TreeUpdaterReg);
}  // namespace dmlc
    
     private:
  // try to prune off current leaf
  inline int TryPruneLeaf(RegTree &tree, int nid, int depth, int npruned) { // NOLINT(*)
    if (tree[nid].IsRoot()) return npruned;
    int pid = tree[nid].Parent();
    RegTree::NodeStat &s = tree.Stat(pid);
    ++s.leaf_child_cnt;
    if (s.leaf_child_cnt >= 2 && param_.NeedPrune(s.loss_chg, depth - 1)) {
      // need to be pruned
      tree.ChangeToLeaf(pid, param_.learning_rate * s.base_weight);
      // tail recursion
      return this->TryPruneLeaf(tree, pid, depth - 1, npruned + 2);
    } else {
      return npruned;
    }
  }
  /*! \brief do pruning of a tree */
  inline void DoPrune(RegTree &tree) { // NOLINT(*)
    int npruned = 0;
    // initialize auxiliary statistics
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      tree.Stat(nid).leaf_child_cnt = 0;
    }
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      if (tree[nid].IsLeaf()) {
        npruned = this->TryPruneLeaf(tree, nid, tree.GetDepth(nid), npruned);
      }
    }
    if (!param_.silent) {
      LOG(INFO) << 'tree pruning end, ' << tree.param.num_roots << ' roots, '
                << tree.NumExtraNodes() << ' extra nodes, ' << npruned
                << ' pruned nodes, max_depth=' << tree.MaxDepth();
    }
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