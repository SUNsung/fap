
        
            if (info.bytes > buf.size()) {
      llvm::dbgs() << 'AST section too small.\n';
      return false;
    }
    
    DummyTaskQueue::~DummyTaskQueue() = default;
    
    #endif // SWIFT_IMPORTER_IMPORT_AS_MEMBER_INFERENCE_H

    
    /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
    class SignVerifyMessageDialog : public QDialog
{
    Q_OBJECT
    }
    
    protected:
    void paintEvent(QPaintEvent *);
    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
    /// Make type-agnostic format list from list of template arguments.
///
/// The exact return type of this function is an implementation detail and
/// shouldn't be relied upon.  Instead it should be stored as a FormatListRef:
///
///   FormatListRef formatList = makeFormatList( /*...*/ );
template<typename... Args>
detail::FormatListN<sizeof...(Args)> makeFormatList(const Args&... args)
{
    return detail::FormatListN<sizeof...(args)>(args...);
}
    
    #define TYPE_METHODS(utype, ctype) \
    inline bool Handlers::Set##utype##Handler(const FieldDef *f, \
                                              const utype##Handler &h) { \
      return SetValueHandler<ctype>(f, h); \
    } \
    
    ReflectionClassGenerator::~ReflectionClassGenerator() {
}
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    void ExtensionGenerator::GenerateStaticVariablesInitialization(
    io::Printer* printer) {
  std::map<string, string> vars;
  vars['root_class_and_method_name'] = root_class_and_method_name_;
  vars['extended_type'] = ClassName(descriptor_->containing_type());
  vars['number'] = SimpleItoa(descriptor_->number());
    }
    
      string error_msg;
  CodeGeneratorResponse response;
    
                int32x4_t normh = vmovl_s16(vget_high_s16(norm));
            int32x4_t norml = vmovl_s16(vget_low_s16(norm));
    
    #define MERGE_ASM2(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vst2.' #bits ' {d0, d2}, [%[out0]]           \n\t' \
                                          'vst2.' #bits ' {d1, d3}, [%[out1]]           \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL2(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3' \
                                      );
#define MERGE_ASM3(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vst3.' #bits ' {d0, d2, d4}, [%[out0]]       \n\t' \
                                          'vst3.' #bits ' {d1, d3, d5}, [%[out1]]       \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL3(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5' \
                                      );
#define MERGE_ASM4(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vld1.' #bits ' {d6-d7}, [%[in3]]             \n\t' \
                                          'vst4.' #bits ' {d0, d2, d4, d6}, [%[out0]]   \n\t' \
                                          'vst4.' #bits ' {d1, d3, d5, d7}, [%[out1]]   \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), [in3] 'r' (src3 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL4(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                      );
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0, const typename internal::VecTraits<T>::vec64 & v_src1,
              typename internal::VecTraits<T>::unsign::vec64 & v_dst) const
    {
        v_dst = internal::vceq(v_src0, v_src1);
    }
    
                for( ; j < (s32)size.width - 3; j++, ptr++ )
            {
                s32 v = ptr[0];
                const u8* tab = &threshold_tab[0] - v + 255;
                s32 d = tab[ptr[pixel[0]]] | tab[ptr[pixel[8]]];
    }
    
    
    {            prev = vaddw_u16(prev, vdup_lane_u16(el4h, 3));
        }
    
    inline uint8x8_t vqtbl1_u8 (uint8x16_t a, uint8x8_t b)
{
#ifdef __aarch64__
    // AArch64 supports this natively
    return ::vqtbl1_u8(a, b);
#else
    union { uint8x16_t v; uint8x8x2_t w; } u = { a };
    return vtbl2_u8(u.w, b);
#endif
}
    
    #endif  // TESSERACT_ARCH_DOTPRODUCTSSE_H_

    
      // Search the nearest neighbor of part in one vertical direction as defined in
  // search_bottom. It returns the neighbor found that major x overlap with it,
  // or nullptr when not found.
  ColPartition* SearchNNVertical(const bool search_bottom,
                                 const ColPartition* part);
    
    int os_detect_blobs(const GenericVector<int>* allowed_scripts,
                    BLOBNBOX_CLIST* blob_list,
                    OSResults* osr,
                    tesseract::Tesseract* tess);
    
    /**
 * Sets up the internal data for iterating the blobs of a new word, then
 * moves the iterator to the given offset.
 */
void PageIterator::BeginWord(int offset) {
  WERD_RES* word_res = it_->word();
  if (word_res == nullptr) {
    // This is a non-text block, so there is no word.
    word_length_ = 0;
    blob_index_ = 0;
    word_ = nullptr;
    return;
  }
  if (word_res->best_choice != nullptr) {
    // Recognition has been done, so we are using the box_word, which
    // is already baseline denormalized.
    word_length_ = word_res->best_choice->length();
    if (word_res->box_word != nullptr) {
      if (word_res->box_word->length() != word_length_) {
        tprintf('Corrupted word! best_choice[len=%d] = %s, box_word[len=%d]: ',
                word_length_, word_res->best_choice->unichar_string().string(),
                word_res->box_word->length());
        word_res->box_word->bounding_box().print();
      }
      ASSERT_HOST(word_res->box_word->length() == word_length_);
    }
    word_ = nullptr;
    // We will be iterating the box_word.
    delete cblob_it_;
    cblob_it_ = nullptr;
  } else {
    // No recognition yet, so a 'symbol' is a cblob.
    word_ = word_res->word;
    ASSERT_HOST(word_->cblob_list() != nullptr);
    word_length_ = word_->cblob_list()->length();
    if (cblob_it_ == nullptr) cblob_it_ = new C_BLOB_IT;
    cblob_it_->set_to_list(word_->cblob_list());
  }
  for (blob_index_ = 0; blob_index_ < offset; ++blob_index_) {
    if (cblob_it_ != nullptr)
      cblob_it_->forward();
  }
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
    
    #define VARDIR        'configs/' /*parameters files */
#define MAX_ITEMS_IN_SUBMENU 30
    
    // A rather hackish helper structure which can take any kind of parameter input
// (defined by ParamType) and do a couple of common operations on them, like
// comparisond or getting its value. It is used in the context of the
// ParamsEditor as a bridge from the internal tesseract parameters to the
// ones displayed by the ScrollView server.
class ParamContent : public ELIST_LINK {
 public:
  // Compare two VC objects by their name.
  static int Compare(const void* v1, const void* v2);
    }
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
    // implementation of tensor to blob, called by TensorToBlob
template<typename Device, typename Dtype>
void SetDataGradToBlob(caffeMemoryTypes memType,
                       typename std::vector< ::caffe::Blob<Dtype>*>::iterator blob,
                       typename std::vector<TBlob>::const_iterator itr);
    
    #include './exec_pass.h'
    
    #include <mxnet/io.h>
#include <mxnet/base.h>
#include <mxnet/tensor_blob.h>
#include <dmlc/base.h>
#include <mshadow/tensor.h>
#include <vector>
#include <string>
    
    // ColumnFamilySet has interesting thread-safety requirements
// * CreateColumnFamily() or RemoveColumnFamily() -- need to be protected by DB
// mutex AND executed in the write thread.
// CreateColumnFamily() should ONLY be called from VersionSet::LogAndApply() AND
// single-threaded write thread. It is also called during Recovery and in
// DumpManifest().
// RemoveColumnFamily() is only called from SetDropped(). DB mutex needs to be
// held and it needs to be executed from the write thread. SetDropped() also
// guarantees that it will be called only from single-threaded LogAndApply(),
// but this condition is not that important.
// * Iteration -- hold DB mutex, but you can release it in the body of
// iteration. If you release DB mutex in body, reference the column
// family before the mutex and unreference after you unlock, since the column
// family might get dropped when the DB mutex is released
// * GetDefault() -- thread safe
// * GetColumnFamily() -- either inside of DB mutex or from a write thread
// * GetNextColumnFamilyID(), GetMaxColumnFamily(), UpdateMaxColumnFamily(),
// NumberOfColumnFamilies -- inside of DB mutex
class ColumnFamilySet {
 public:
  // ColumnFamilySet supports iteration
  class iterator {
   public:
    explicit iterator(ColumnFamilyData* cfd)
        : current_(cfd) {}
    iterator& operator++() {
      // dropped column families might still be included in this iteration
      // (we're only removing them when client drops the last reference to the
      // column family).
      // dummy is never dead, so this will never be infinite
      do {
        current_ = current_->next_;
      } while (current_->refs_.load(std::memory_order_relaxed) == 0);
      return *this;
    }
    bool operator!=(const iterator& other) {
      return this->current_ != other.current_;
    }
    ColumnFamilyData* operator*() { return current_; }
    }
    }
    
      int64_t num_record_drop_hidden = 0;
  int64_t num_record_drop_obsolete = 0;
  int64_t num_record_drop_range_del = 0;
  int64_t num_range_del_drop_obsolete = 0;
  // Deletions obsoleted before bottom level due to file gap optimization.
  int64_t num_optimized_del_drop_obsolete = 0;
  uint64_t total_filter_time = 0;
    
    namespace rocksdb {
    }
    
      // 0-terminated strings storing the first 8 bytes of the smallest and
  // largest key in the output.
  static const size_t kMaxPrefixLength = 8;
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
    static const uint8_t kRangeLimitLut[4 * 256] = {
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,
  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,
  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,
  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,
  96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
};
    
    // This function will create a Huffman tree.
//
// The catch here is that the tree cannot be arbitrarily deep.
// Brotli specifies a maximum depth of 15 bits for 'code trees'
// and 7 bits for 'code length code trees.'
//
// count_limit is the value that is to be faked as the minimum value
// and this minimum value is raised until the tree matches the
// maximum length requirement.
//
// This algorithm is not of excellent performance for very long data blocks,
// especially when population counts are longer than 2**tree_limit, but
// we are not planning to use this with extremely long blocks.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth) {
  // For block sizes below 64 kB, we never need to do a second iteration
  // of this loop. Probably all of our block sizes will be smaller than
  // that, so this loop is mostly of academic interest. If we actually
  // would need this, we would be better off with the Katajainen algorithm.
  for (uint32_t count_limit = 1; ; count_limit *= 2) {
    size_t n = 0;
    for (size_t i = length; i != 0;) {
      --i;
      if (data[i]) {
        const uint32_t count = std::max<uint32_t>(data[i], count_limit);
        tree[n++] = HuffmanTree(count, -1, static_cast<int16_t>(i));
      }
    }
    }
    }
    
    namespace guetzli {
    }
    
    
    {  fclose(f);
  return result;
}
    
    void InitJPEGDataForYUV444(int w, int h, JPEGData* jpg) {
  jpg->width = w;
  jpg->height = h;
  jpg->max_h_samp_factor = 1;
  jpg->max_v_samp_factor = 1;
  jpg->MCU_rows = (h + 7) >> 3;
  jpg->MCU_cols = (w + 7) >> 3;
  jpg->quant.resize(3);
  jpg->components.resize(3);
  for (int i = 0; i < 3; ++i) {
    JPEGComponent* c = &jpg->components[i];
    c->id = i;
    c->h_samp_factor = 1;
    c->v_samp_factor = 1;
    c->quant_idx = i;
    c->width_in_blocks = jpg->MCU_cols;
    c->height_in_blocks = jpg->MCU_rows;
    c->num_blocks = c->width_in_blocks * c->height_in_blocks;
    c->coeffs.resize(c->num_blocks * kDCTBlockSize);
  }
}
    
    #endif  // GUETZLI_JPEG_DATA_READER_H_

    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};