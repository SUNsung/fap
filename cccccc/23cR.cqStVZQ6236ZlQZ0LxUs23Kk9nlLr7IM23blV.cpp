
        
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
    
    const int kBlnCellHeight = 256;     // Full-height for baseline normalization.
const int kBlnXHeight = 128;        // x-height for baseline normalization.
const int kBlnBaselineOffset = 64;  // offset for baseline normalization.
    
    static STRING ParagraphJustificationToString(
    tesseract::ParagraphJustification justification) {
  switch (justification) {
    case JUSTIFICATION_LEFT:
      return 'LEFT';
    case JUSTIFICATION_RIGHT:
      return 'RIGHT';
    case JUSTIFICATION_CENTER:
      return 'CENTER';
    default:
      return 'UNKNOWN';
  }
}
    
    
    {}
#endif

    
    		inline Block4x4Encoding * GetEncoding(void)
		{
			return m_pencoding;
		}
    
    #   define C_MULBYSCALAR( c, s ) \
      do{ (c).r =  S_MUL( (c).r , s ) ;\
          (c).i =  S_MUL( (c).i , s ) ; }while(0)
    
    #ifndef ARCH_H
#define ARCH_H
    
    #define MULT16_16_Q15(a, b) MULT16_16_Q15_(a, b, __FILE__, __LINE__)
static OPUS_INLINE short MULT16_16_Q15_(int a, int b, char *file, int line)
{
   opus_int64 res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(b))
   {
      fprintf (stderr, 'MULT16_16_Q15: inputs are not short: %d %d in %s: line %d\n', a, b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = ((opus_int64)a)*b;
   res >>= 15;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'MULT16_16_Q15: output is not short: %d in %s: line %d\n', (int)res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=1;
   return res;
}
    
    #if !defined(_mfrngcode_H)
# define _mfrngcode_H (1)
# include 'entcode.h'
    
    // Prints a TestPartResult object.
std::ostream& operator<<(std::ostream& os, const TestPartResult& result);
    
    // If the type list contains only one type, you can write that type
// directly without Types<...>:
//   INSTANTIATE_TYPED_TEST_CASE_P(My, FooTest, int);
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED3.  Don't use
// this in your code.
#define GTEST_PRED3_(pred, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred3Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             #v3, \
                                             pred, \
                                             v1, \
                                             v2, \
                                             v3), on_failure)
    
      // Copy an existing linked_ptr<>, adding ourselves to the list of references.
  template <typename U> linked_ptr(linked_ptr<U> const& ptr) { copy(&ptr); }
  linked_ptr(linked_ptr const& ptr) {  // NOLINT
    assert(&ptr != this);
    copy(&ptr);
  }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TUPLE_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TUPLE_H_
    
      // Now, we have that n is odd and n >= 3.
    
      /* Get color space */
  dict->lookup ('ColorSpace', &obj1);
  if (obj1.isNull ()) {
    obj1.free ();
    dict->lookup ('CS', &obj1);
  }
  colorSpace = GfxColorSpace::parse(&obj1, NULL);
  obj1.free();
  if (!colorSpace) {
    fprintf (stderr, 'Error: Cannot parse color space\n');
    goto fail1;
  }
    
    
    {  check(state->getStrokeColorSpace(), state->getStrokeColor(),
	state->getStrokeOpacity(), state->getBlendMode());
  state->getLineDash(&dash, &dashLen, &dashStart);
  if (dashLen != 0) {
    gdi = gFalse;
  }
}
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2009 Carlos Garcia Campos <carlosgc@gnome.org>
// Copyright (C) 2010 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2011 William Bader <williambader@hotmail.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    void MediaParameters::parseMediaPlayParameters(Object* obj) {
  
  Object tmp;
    }
    
      int duration;                      // 0
    
    
    {  ok = gTrue;
}
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    // try to load group information from file, if exists
inline bool MetaTryLoadGroup(const std::string& fname,
                             std::vector<unsigned>* group) {
  std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
  if (fi == nullptr) return false;
  dmlc::istream is(fi.get());
  group->clear();
  group->push_back(0);
  unsigned nline = 0;
  while (is >> nline) {
    group->push_back(group->back() + nline);
  }
  return true;
}
    
      // Make sure that the final sparse page has the right number of entries
  ASSERT_EQ(n_entries, page.data.Size());
    
    /*!
 * \brief preprocessed global index matrix, in CSR format
 *  Transform floating values to integer index in histogram
 *  This is a global histogram index.
 */
struct GHistIndexMatrix {
  /*! \brief row pointer to rows by element position */
  std::vector<size_t> row_ptr;
  /*! \brief The index data */
  std::vector<uint32_t> index;
  /*! \brief hit count of each index */
  std::vector<size_t> hit_count;
  /*! \brief The corresponding cuts */
  HistCutMatrix cut;
  // Create a global histogram matrix, given cut
  void Init(DMatrix* p_fmat, int max_num_bins);
  // get i-th row
  inline GHistIndexRow operator[](size_t i) const {
    return {&index[0] + row_ptr[i],
            static_cast<GHistIndexRow::index_type>(
                row_ptr[i + 1] - row_ptr[i])};
  }
  inline void GetFeatureCounts(size_t* counts) const {
    auto nfeature = cut.row_ptr.size() - 1;
    for (unsigned fid = 0; fid < nfeature; ++fid) {
      auto ibegin = cut.row_ptr[fid];
      auto iend = cut.row_ptr[fid + 1];
      for (auto i = ibegin; i < iend; ++i) {
        counts[fid] += hit_count[i];
      }
    }
  }
    }
    
    // implementation of inline functions.
inline void Learner::Predict(const SparsePage::Inst& inst,
                             bool output_margin,
                             HostDeviceVector<bst_float>* out_preds,
                             unsigned ntree_limit) const {
  gbm_->PredictInstance(inst, &out_preds->HostVector(), ntree_limit);
  if (!output_margin) {
    obj_->PredTransform(out_preds);
  }
}
    
    void GHistIndexMatrix::Init(DMatrix* p_fmat, int max_num_bins) {
  cut.Init(p_fmat, max_num_bins);
  const size_t nthread = omp_get_max_threads();
  const uint32_t nbins = cut.row_ptr.back();
  hit_count.resize(nbins, 0);
  hit_count_tloc_.resize(nthread * nbins, 0);
    }
    
    #include <dmlc/parameter.h>
#include <xgboost/enum_class_param.h>
    
    /*! \brief interface of objective function */
class ObjFunction {
 protected:
  LearnerTrainParam const* tparam_;
    }
    
    constexpr GPUSet::GpuIdType GPUSet::kAll;
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
    
    {} // namespace aria2
    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));