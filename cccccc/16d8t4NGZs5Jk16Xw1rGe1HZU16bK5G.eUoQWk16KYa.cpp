
        
        
//-----------------------------------------------------------------------------
//
//	class FloatVectorAttribute
//
//-----------------------------------------------------------------------------
    
    #include <ImfMisc.h>
#include <ImfPartType.h>
    
    
    {    protected:
        IMF_EXPORT
        GenericOutputFile() {}
        IMF_EXPORT
        void writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os, const Header& header);
        IMF_EXPORT
        void writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os, const Header * headers, int parts);
  
};
    
    
    {    private:
        InputFile* file;
    // for internal use - give OutputFile and TiledOutputFile access to file for copyPixels
    friend void OutputFile::copyPixels(InputPart&);
    friend void TiledOutputFile::copyPixels(InputPart&);
    
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
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                             int32_t n, int32_t sig_x, int64_t sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
      // Returns the average sum of squared perpendicular error from a line
  // through mean_point() in the direction dir.
  double rms_orth(const FCOORD &dir) const;
    
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
    
      /* Initial reject modes (pre NN_ACCEPT) */
  R_POOR_MATCH,         // TEMP Ray's original heuristic (Not used)
  R_NOT_TESS_ACCEPTED,  // TEMP Tess didn't accept WERD
  R_CONTAINS_BLANKS,    // TEMP Tess failed on other chs in WERD
  R_BAD_PERMUTER,       // POTENTIAL Bad permuter for WERD
    
      // Provides access to the ShapeTable that this classifier works with.
  virtual const ShapeTable* GetShapeTable() const = 0;
  // Provides access to the UNICHARSET that this classifier works with.
  // Must be overridden IFF GetShapeTable() returns nullptr.
  virtual const UNICHARSET& GetUnicharset() const;
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
Iterator* NewDBIterator(DBImpl* db, const Comparator* user_key_comparator,
                        Iterator* internal_iter, SequenceNumber sequence,
                        uint32_t seed);
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    #include 'leveldb/env.h'
#include 'leveldb/export.h'
#include 'leveldb/status.h'
    
    #include <string>
#include <vector>
    
      switch (data[n]) {
    case kNoCompression:
      if (data != buf) {
        // File implementation gave us pointer to some other data.
        // Use it directly under the assumption that it will be live
        // while the file is open.
        delete[] buf;
        result->data = Slice(data, n);
        result->heap_allocated = false;
        result->cachable = false;  // Do not double-cache
      } else {
        result->data = Slice(buf, n);
        result->heap_allocated = true;
        result->cachable = true;
      }
    }
    
    class Comparator;
class Iterator;
    
    
    {  dst.clear();
  PutFixed64(&dst, 0x0807060504030201ull);
  ASSERT_EQ(8, dst.size());
  ASSERT_EQ(0x01, static_cast<int>(dst[0]));
  ASSERT_EQ(0x02, static_cast<int>(dst[1]));
  ASSERT_EQ(0x03, static_cast<int>(dst[2]));
  ASSERT_EQ(0x04, static_cast<int>(dst[3]));
  ASSERT_EQ(0x05, static_cast<int>(dst[4]));
  ASSERT_EQ(0x06, static_cast<int>(dst[5]));
  ASSERT_EQ(0x07, static_cast<int>(dst[6]));
  ASSERT_EQ(0x08, static_cast<int>(dst[7]));
}
    
    namespace xgboost {
namespace common {
/*!
 * \brief calculate the sigmoid of the input.
 * \param x input parameter
 * \return the transformed value.
 */
XGBOOST_DEVICE inline float Sigmoid(float x) {
  return 1.0f / (1.0f + expf(-x));
}
    }
    }
    
      xgboost::tree::SplitEntry se2;
  EXPECT_FALSE(se1.Update(se2));
  EXPECT_FALSE(se2.Update(-1, 100, 0, true, xgboost::tree::GradStats(),
                          xgboost::tree::GradStats()));
  ASSERT_TRUE(se2.Update(1, 100, 0, true, xgboost::tree::GradStats(),
                         xgboost::tree::GradStats()));
  ASSERT_TRUE(se1.Update(se2));
    
    /*!
 * \brief template for all quantile sketch algorithm
 *        that uses merge/prune scheme
 * \tparam DType type of data content
 * \tparam RType type of rank
 * \tparam TSummary actual summary data structure it uses
 */
template<typename DType, typename RType, class TSummary>
class QuantileSketchTemplate {
 public:
  /*! \brief type of summary type */
  using Summary = TSummary;
  /*! \brief the entry type */
  using Entry = typename Summary::Entry;
  /*! \brief same as summary, but use STL to backup the space */
  struct SummaryContainer : public Summary {
    std::vector<Entry> space;
    SummaryContainer(const SummaryContainer &src) : Summary(nullptr, src.size) {
      this->space = src.space;
      this->data = dmlc::BeginPtr(this->space);
    }
    SummaryContainer() : Summary(nullptr, 0) {
    }
    /*! \brief reserve space for summary */
    inline void Reserve(size_t size) {
      if (size > space.size()) {
        space.resize(size);
        this->data = dmlc::BeginPtr(space);
      }
    }
    /*!
     * \brief set the space to be merge of all Summary arrays
     * \param begin beginning position in the summary array
     * \param end ending position in the Summary array
     */
    inline void SetMerge(const Summary *begin,
                         const Summary *end) {
      CHECK(begin < end) << 'can not set combine to empty instance';
      size_t len = end - begin;
      if (len == 1) {
        this->Reserve(begin[0].size);
        this->CopyFrom(begin[0]);
      } else if (len == 2) {
        this->Reserve(begin[0].size + begin[1].size);
        this->SetMerge(begin[0], begin[1]);
      } else {
        // recursive merge
        SummaryContainer lhs, rhs;
        lhs.SetCombine(begin, begin + len / 2);
        rhs.SetCombine(begin + len / 2, end);
        this->Reserve(lhs.size + rhs.size);
        this->SetCombine(lhs, rhs);
      }
    }
    /*!
     * \brief do elementwise combination of summary array
     *        this[i] = combine(this[i], src[i]) for each i
     * \param src the source summary
     * \param max_nbyte maximum number of byte allowed in here
     */
    inline void Reduce(const Summary &src, size_t max_nbyte) {
      this->Reserve((max_nbyte - sizeof(this->size)) / sizeof(Entry));
      SummaryContainer temp;
      temp.Reserve(this->size + src.size);
      temp.SetCombine(*this, src);
      this->SetPrune(temp, space.size());
    }
    /*! \brief return the number of bytes this data structure cost in serialization */
    inline static size_t CalcMemCost(size_t nentry) {
      return sizeof(size_t) + sizeof(Entry) * nentry;
    }
    /*! \brief save the data structure into stream */
    template<typename TStream>
    inline void Save(TStream &fo) const {  // NOLINT(*)
      fo.Write(&(this->size), sizeof(this->size));
      if (this->size != 0) {
        fo.Write(this->data, this->size * sizeof(Entry));
      }
    }
    /*! \brief load data structure from input stream */
    template<typename TStream>
    inline void Load(TStream &fi) {  // NOLINT(*)
      CHECK_EQ(fi.Read(&this->size, sizeof(this->size)), sizeof(this->size));
      this->Reserve(this->size);
      if (this->size != 0) {
        CHECK_EQ(fi.Read(this->data, this->size * sizeof(Entry)),
                 this->size * sizeof(Entry));
      }
    }
  };
  /*!
   * \brief initialize the quantile sketch, given the performance specification
   * \param maxn maximum number of data points can be feed into sketch
   * \param eps accuracy level of summary
   */
  inline void Init(size_t maxn, double eps) {
    LimitSizeLevel(maxn, eps, &nlevel, &limit_size);
    // lazy reserve the space, if there is only one value, no need to allocate space
    inqueue.queue.resize(1);
    inqueue.qtail = 0;
    data.clear();
    level.clear();
  }
    }
    
        const auto HAND_NUMBER_PARTS = 21u;
    #define HAND_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  0,5,  5,6,  6,7,  7,8,  0,9,  9,10,  10,11,  11,12,  0,13,  13,14,  14,15,  15,16,  0,17,  17,18,  18,19,  19,20
    #define HAND_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> HAND_PAIRS_RENDER {HAND_PAIRS_RENDER_GPU};
    #define HAND_COLORS_RENDER_GPU \
        100.f,  100.f,  100.f, \
        100.f,    0.f,    0.f, \
        150.f,    0.f,    0.f, \
        200.f,    0.f,    0.f, \
        255.f,    0.f,    0.f, \
        100.f,  100.f,    0.f, \
        150.f,  150.f,    0.f, \
        200.f,  200.f,    0.f, \
        255.f,  255.f,    0.f, \
          0.f,  100.f,   50.f, \
          0.f,  150.f,   75.f, \
          0.f,  200.f,  100.f, \
          0.f,  255.f,  125.f, \
          0.f,   50.f,  100.f, \
          0.f,   75.f,  150.f, \
          0.f,  100.f,  200.f, \
          0.f,  125.f,  255.f, \
        100.f,    0.f,  100.f, \
        150.f,    0.f,  150.f, \
        200.f,    0.f,  200.f, \
        255.f,    0.f,  255.f
    const std::vector<float> HAND_COLORS_RENDER{HAND_COLORS_RENDER_GPU};
    const std::vector<float> HAND_SCALES_RENDER{HAND_SCALES_RENDER_GPU};
    
    #include <atomic>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <openpose/core/common.hpp>
    
        private:
        const bool mMergeResults;
        const int mLevels;
        const int mPatchSize;
        const bool mTrackVelocity;
        const float mConfidenceThreshold;
        const bool mScaleVarying;
        const float mRescale;