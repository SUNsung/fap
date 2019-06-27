
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/stream_executor/host/host_timer.h'
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput + 2));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 3));
    }
    input_blob_names.push_back(GO(3));
    
    namespace caffe2 {
namespace {
    }
    }
    
    int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
    /** @brief Fills a Blob with values @f$ x \in [0, 1] @f$
 *         such that @f$ \forall i \sum_j x_{ij} = 1 @f$.
 */
template <typename Dtype>
class PositiveUnitballFiller : public Filler<Dtype> {
 public:
  explicit PositiveUnitballFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    DCHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), 0, 1, blob->mutable_cpu_data());
    // We expect the filler to not be called very frequently, so we will
    // just use a simple implementation
    int dim = blob->count() / blob->shape(0);
    CHECK(dim);
    for (int i = 0; i < blob->shape(0); ++i) {
      Dtype sum = 0;
      for (int j = 0; j < dim; ++j) {
        sum += data[i * dim + j];
      }
      for (int j = 0; j < dim; ++j) {
        data[i * dim + j] /= sum;
      }
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    /**
 * @brief An interface for the units of computation which can be composed into a
 *        Net.
 *
 * Layer%s must implement a Forward function, in which they take their input
 * (bottom) Blob%s (if any) and compute their output Blob%s (if any).
 * They may also implement a Backward function, in which they compute the error
 * gradients with respect to their input Blob%s, given the error gradients with
 * their output Blob%s.
 */
template <typename Dtype>
class Layer {
 public:
  /**
   * You should not implement your own constructor. Any set up code should go
   * to SetUp(), where the dimensions of the bottom blobs are provided to the
   * layer.
   */
  explicit Layer(const LayerParameter& param)
    : layer_param_(param) {
      // Set phase and copy blobs (if there are any).
      phase_ = param.phase();
      if (layer_param_.blobs_size() > 0) {
        blobs_.resize(layer_param_.blobs_size());
        for (int i = 0; i < layer_param_.blobs_size(); ++i) {
          blobs_[i].reset(new Blob<Dtype>());
          blobs_[i]->FromProto(layer_param_.blobs(i));
        }
      }
    }
  virtual ~Layer() {}
    }
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t bias_desc_;
  cudnnFilterDescriptor_t filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #include 'src/cpp/ext/filters/census/context.h'
    
    ThreadPoolInterface* CreateDefaultThreadPoolImpl() {
  int cores = gpr_cpu_num_cores();
  if (!cores) cores = 4;
  return new DynamicThreadPool(cores);
}
    
    #ifndef GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
#define GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
    #ifndef STORAGE_LEVELDB_UTIL_HASH_H_
#define STORAGE_LEVELDB_UTIL_HASH_H_
    
    #include 'db/dbformat.h'
#include 'db/skiplist.h'
#include 'leveldb/db.h'
#include 'util/arena.h'
    
    // Options that control read operations
struct LEVELDB_EXPORT ReadOptions {
  ReadOptions() = default;
    }
    
      // Return a string representation of this status suitable for printing.
  // Returns the string 'OK' for success.
  std::string ToString() const;
    
    #endif  // STORAGE_LEVELDB_INCLUDE_TABLE_H_

    
      Block(const Block&) = delete;
  Block& operator=(const Block&) = delete;
    
     private:
  void GenerateFilter();
    
    TEST(CacheTest, UseExceedsCacheSize) {
  // Overfill the cache, keeping handles on all inserted entries.
  std::vector<Cache::Handle*> h;
  for (int i = 0; i < kCacheSize + 100; i++) {
    h.push_back(InsertAndReturnHandle(1000 + i, 2000 + i));
  }
    }
    
    static const int kDelayMicros = 100000;
    
        /**
     * ICU 'poor man's RTTI', returns a UClassID for this class.
     */
    U_I18N_API static UClassID U_EXPORT2 getStaticClassID();
    
    //----------------------------------------------------------------------------
//
//  ScriptSet implementation
//
//----------------------------------------------------------------------------
ScriptSet::ScriptSet() {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] = 0;
    }
}
    
    //-------------------------------------------------------------------------------
//
//  ScriptSet - A bit set representing a set of scripts.
//
//              This class was originally used exclusively with script sets appearing
//              as part of the spoof check whole script confusable binary data. Its
//              use has since become more general, but the continued use to wrap
//              prebuilt binary data does constrain the design.
//
//-------------------------------------------------------------------------------
class U_I18N_API ScriptSet: public UMemory {
  public:
    ScriptSet();
    ScriptSet(const ScriptSet &other);
    ~ScriptSet();
    }
    
    int32_t SearchIterator::getMatchedLength() const
{
    return m_search_->matchedLength;
}
    
void SearchIterator::getMatchedText(UnicodeString &result) const
{
    int32_t matchedindex  = m_search_->matchedIndex;
    int32_t     matchedlength = m_search_->matchedLength;
    if (matchedindex != USEARCH_DONE && matchedlength != 0) {
        result.setTo(m_search_->text + matchedindex, matchedlength); 
    }
    else {
        result.remove();
    }
}
    
void SearchIterator::setBreakIterator(BreakIterator *breakiter, 
                                      UErrorCode &status)
{
    if (U_SUCCESS(status)) {
#if 0
        m_search_->breakIter = NULL;
        // the c++ breakiterator may not make use of ubreakiterator.
        // so we'll have to keep track of it ourselves.
#else
        // Well, gee... the Constructors that take a BreakIterator
        // all cast the BreakIterator to a UBreakIterator and
        // pass it to the corresponding usearch_openFromXXX
        // routine, so there's no reason not to do this.
        //
        // Besides, a UBreakIterator is a BreakIterator, so
        // any subclass of BreakIterator should work fine here...
        m_search_->breakIter = (UBreakIterator *) breakiter;
#endif
        
        m_breakiterator_ = breakiter;
    }
}
    
const BreakIterator * SearchIterator::getBreakIterator(void) const
{
    return m_breakiterator_;
}
    
    #define DOT               ((UChar)0x002E)
#define SINGLE_QUOTE      ((UChar)0x0027)
#define SLASH             ((UChar)0x002F)
#define BACKSLASH         ((UChar)0x005C)
#define SPACE             ((UChar)0x0020)
#define TAB               ((UChar)0x0009)
#define QUOTATION_MARK    ((UChar)0x0022)
#define ASTERISK          ((UChar)0x002A)
#define COMMA             ((UChar)0x002C)
#define HYPHEN            ((UChar)0x002D)
#define U_ZERO            ((UChar)0x0030)
#define U_ONE             ((UChar)0x0031)
#define U_TWO             ((UChar)0x0032)
#define U_THREE           ((UChar)0x0033)
#define U_FOUR            ((UChar)0x0034)
#define U_FIVE            ((UChar)0x0035)
#define U_SIX             ((UChar)0x0036)
#define U_SEVEN           ((UChar)0x0037)
#define U_EIGHT           ((UChar)0x0038)
#define U_NINE            ((UChar)0x0039)
#define COLON             ((UChar)0x003A)
#define SEMI_COLON        ((UChar)0x003B)
#define CAP_A             ((UChar)0x0041)
#define CAP_B             ((UChar)0x0042)
#define CAP_R             ((UChar)0x0052)
#define CAP_Z             ((UChar)0x005A)
#define LOWLINE           ((UChar)0x005F)
#define LEFTBRACE         ((UChar)0x007B)
#define RIGHTBRACE        ((UChar)0x007D)
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    SimpleDateFormat::SimpleDateFormat(const UnicodeString& pattern,
                                   const Locale& locale,
                                   UErrorCode& status)
:   fPattern(pattern),
    fLocale(locale),
    fTimeZoneFormat(NULL),
    fSharedNumberFormatters(NULL),
    fCapitalizationBrkIter(NULL)
{
    }
    
    
//------------------------------------------------------------------------------
//
//   smpdtfmt_cleanup     Memory cleanup function, free/delete all
//                      cached memory.  Called by ICU's u_cleanup() function.
//
//------------------------------------------------------------------------------
UBool
SimpleDateFormatStaticSets::cleanup(void)
{
    delete gStaticSets;
    gStaticSets = NULL;
    gSimpleDateFormatStaticSetsInitOnce.reset();
    return TRUE;
}
    
    #include 'unicode/udat.h'
    
    #include 'unicode/utypes.h'
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or a negative value
     */
    static int32_t indexOrNegativeFromString(const char *keyword);
    
    /**
 * An object that matches a fixed input string, implementing the
 * UnicodeMatcher API.  This object also implements the
 * UnicodeReplacer API, allowing it to emit the matched text as
 * output.  Since the match text may contain flexible match elements,
 * such as UnicodeSets, the emitted text is not the match pattern, but
 * instead a substring of the actual matched text.  Following
 * convention, the output text is the leftmost match seen up to this
 * point.
 *
 * A StringMatcher may represent a segment, in which case it has a
 * positive segment number.  This affects how the matcher converts
 * itself to a pattern but does not otherwise affect its function.
 *
 * A StringMatcher that is not a segment should not be used as a
 * UnicodeReplacer.
 */
class StringMatcher : public UnicodeFunctor, public UnicodeMatcher, public UnicodeReplacer {
    }
    
    /**
 * Construct a StringReplacer that sets the emits the given output
 * text and sets the cursor to the given position.
 * @param theOutput text that will replace input text when the
 * replace() method is called.  May contain stand-in characters
 * that represent nested replacers.
 * @param theCursorPos cursor position that will be returned by
 * the replace() method
 * @param theData transliterator context object that translates
 * stand-in characters to UnicodeReplacer objects
 */
StringReplacer::StringReplacer(const UnicodeString& theOutput,
                               int32_t theCursorPos,
                               const TransliterationRuleData* theData) {
    output = theOutput;
    cursorPos = theCursorPos;
    hasCursor = TRUE;
    data = theData;
    isComplex = TRUE;
}
    
    int64_t VMTOC::getValue(int64_t index, bool qword) {
  HPHP::Address addr = reinterpret_cast<HPHP::Address>(
      static_cast<intptr_t>(index) + getPtrVector());
  int64_t ret_val = 0;
  int max_elem = qword ? 8 : 4;
  for (int i = max_elem-1; i >= 0; i--) {
    ret_val = addr[i] + (ret_val << 8);
  }
  return ret_val;
}