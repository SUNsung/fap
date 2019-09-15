
        
        using namespace OPENEXR_IMF_INTERNAL_NAMESPACE;
    
    
    {        delete [] countTmp;
    }
   
    //
    // Compute offset - these are the positions of the first
    //                  id (not symbol) that has length [i]
    //
    
        int             _numSymbols;       // Number of symbols in the codebook.
    
    //-----------------------------------------------------------------------------
//
//	class FloatAttribute
//
//-----------------------------------------------------------------------------
    
    
Slice &
FrameBuffer::operator [] (const string &name)
{
    return this->operator[] (name.c_str());
}
    
    #endif /* GENERICOUTPUTFILE_H_ */

    
        IMF_EXPORT
    Header (const IMATH_NAMESPACE::Box2i &displayWindow,
	    const IMATH_NAMESPACE::Box2i &dataWindow,
	    float pixelAspectRatio = 1,
	    const IMATH_NAMESPACE::V2f &screenWindowCenter = IMATH_NAMESPACE::V2f (0, 0),
	    float screenWindowWidth = 1,
	    LineOrder lineOrder = INCREASING_Y,
	    Compression = ZIP_COMPRESSION);
    
    
    {    hufCanonicalCodeTable (scode);
    memcpy (frq, scode, sizeof (Int64) * HUF_ENCSIZE);
}
    
    
IStream::~IStream ()
{
    // empty
}
    
    
    
      void pollAndSchedule(int task_id);
  void schedule(int task_id, bool run_inline = false) noexcept;
  void reset() override;
  virtual void finishRun();
  void parentCallback(int parent_id);
  bool isInlineTask(int parent_id, int child_id) const;
    
    ```
    
    	THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
    
      ~Chapters();
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
     ********************************************************************/
    
    #endif  // VPX_PORTS_X86_H_

    
            public:
            // A LocalizationSettings object is not copyable.
            LocalizationSettings(const LocalizationSettings&) = delete;
            LocalizationSettings& operator=(const LocalizationSettings&) = delete;
    
    // Include the resource key ID from above into this vector to load it into memory for the engine to use
inline constexpr std::array<std::wstring_view, 120> g_sids = { SIDS_PLUS_MINUS,
                                                               SIDS_C,
                                                               SIDS_CE,
                                                               SIDS_BACKSPACE,
                                                               SIDS_DECIMAL_SEPARATOR,
                                                               SIDS_EMPTY_STRING,
                                                               SIDS_AND,
                                                               SIDS_OR,
                                                               SIDS_XOR,
                                                               SIDS_LSH,
                                                               SIDS_RSH,
                                                               SIDS_DIVIDE,
                                                               SIDS_MULTIPLY,
                                                               SIDS_PLUS,
                                                               SIDS_MINUS,
                                                               SIDS_MOD,
                                                               SIDS_YROOT,
                                                               SIDS_POW_HAT,
                                                               SIDS_INT,
                                                               SIDS_ROL,
                                                               SIDS_ROR,
                                                               SIDS_NOT,
                                                               SIDS_SIN,
                                                               SIDS_COS,
                                                               SIDS_TAN,
                                                               SIDS_SINH,
                                                               SIDS_COSH,
                                                               SIDS_TANH,
                                                               SIDS_LN,
                                                               SIDS_LOG,
                                                               SIDS_SQRT,
                                                               SIDS_XPOW2,
                                                               SIDS_XPOW3,
                                                               SIDS_NFACTORIAL,
                                                               SIDS_RECIPROCAL,
                                                               SIDS_DMS,
                                                               SIDS_CUBEROOT,
                                                               SIDS_POWTEN,
                                                               SIDS_PERCENT,
                                                               SIDS_SCIENTIFIC_NOTATION,
                                                               SIDS_PI,
                                                               SIDS_EQUAL,
                                                               SIDS_MC,
                                                               SIDS_MR,
                                                               SIDS_MS,
                                                               SIDS_MPLUS,
                                                               SIDS_MMINUS,
                                                               SIDS_EXP,
                                                               SIDS_OPEN_PAREN,
                                                               SIDS_CLOSE_PAREN,
                                                               SIDS_0,
                                                               SIDS_1,
                                                               SIDS_2,
                                                               SIDS_3,
                                                               SIDS_4,
                                                               SIDS_5,
                                                               SIDS_6,
                                                               SIDS_7,
                                                               SIDS_8,
                                                               SIDS_9,
                                                               SIDS_A,
                                                               SIDS_B,
                                                               SIDS_C,
                                                               SIDS_D,
                                                               SIDS_E,
                                                               SIDS_F,
                                                               SIDS_FRAC,
                                                               SIDS_SIND,
                                                               SIDS_COSD,
                                                               SIDS_TAND,
                                                               SIDS_ASIND,
                                                               SIDS_ACOSD,
                                                               SIDS_ATAND,
                                                               SIDS_SINR,
                                                               SIDS_COSR,
                                                               SIDS_TANR,
                                                               SIDS_ASINR,
                                                               SIDS_ACOSR,
                                                               SIDS_ATANR,
                                                               SIDS_SING,
                                                               SIDS_COSG,
                                                               SIDS_TANG,
                                                               SIDS_ASING,
                                                               SIDS_ACOSG,
                                                               SIDS_ATANG,
                                                               SIDS_ASINH,
                                                               SIDS_ACOSH,
                                                               SIDS_ATANH,
                                                               SIDS_POWE,
                                                               SIDS_POWTEN2,
                                                               SIDS_SQRT2,
                                                               SIDS_SQR,
                                                               SIDS_CUBE,
                                                               SIDS_CUBERT,
                                                               SIDS_FACT,
                                                               SIDS_RECIPROC,
                                                               SIDS_DEGREES,
                                                               SIDS_NEGATE,
                                                               SIDS_RSH,
                                                               SIDS_DIVIDEBYZERO,
                                                               SIDS_DOMAIN,
                                                               SIDS_UNDEFINED,
                                                               SIDS_POS_INFINITY,
                                                               SIDS_NEG_INFINITY,
                                                               SIDS_ABORTED,
                                                               SIDS_NOMEM,
                                                               SIDS_TOOMANY,
                                                               SIDS_OVERFLOW,
                                                               SIDS_NORESULT,
                                                               SIDS_INSUFFICIENT_DATA,
                                                               SIDS_ERR_UNK_CH,
                                                               SIDS_ERR_UNK_FN,
                                                               SIDS_ERR_UNEX_NUM,
                                                               SIDS_ERR_UNEX_CH,
                                                               SIDS_ERR_UNEX_SZ,
                                                               SIDS_ERR_MISMATCH_CLOSE,
                                                               SIDS_ERR_UNEX_END,
                                                               SIDS_ERR_SG_INV_ERROR,
                                                               SIDS_ERR_INPUT_OVERFLOW,
                                                               SIDS_ERR_OUTPUT_OVERFLOW };

    
    //-----------------------------------------------------------------------------
//
// List of useful constants for evaluation, note this list needs to be
// initialized.
//
//-----------------------------------------------------------------------------
    
    void CHistoryCollector::AddOpenBraceToHistory()
{
    AddCommand(std::make_shared<CParentheses>(IDC_OPENP));
    int ichOpndStart = IchAddSzToEquationSz(CCalcEngine::OpCodeToString(IDC_OPENP), -1);
    PushLastOpndStart(ichOpndStart);
    }
    
        spHistoryItem->historyItemVector.spTokens = tokens;
    spHistoryItem->historyItemVector.spCommands = commands;
    
      dict->lookup('Decode', &obj1);
  if (obj1.isNull()) {
    obj1.free();
    dict->lookup('D', &obj1);
  }
  colorMap = new GfxImageColorMap(bits, &obj1, colorSpace);
  obj1.free();
  if (!colorMap->isOk()) {
    fprintf (stderr, 'Error: invalid colormap\n');
    delete colorMap;
    goto fail1;
  }
    
      // Get stream.
  Stream *getStream() { return lexer->getStream(); }
    
    class PopplerCache
{
  public:
    PopplerCache(int cacheSizeA);
    ~PopplerCache();
    
    /* The item returned is owned by the cache */
    PopplerCacheItem *lookup(const PopplerCacheKey &key);
    
    /* The key and item pointers ownership is taken by the cache */
    void put(PopplerCacheKey *key, PopplerCacheItem *item);
    
    /* The max size of the cache */
    int size();
    
    /* The number of items in the cache */
    int numberOfItems();
    
    /* The n-th item in the cache */
    PopplerCacheItem *item(int index);
    
    /* The n-th key in the cache */
    PopplerCacheKey *key(int index);
  
  private:
    PopplerCache(const PopplerCache &cache); // not allowed
  
    PopplerCacheKey **keys;
    PopplerCacheItem **items;
    int lastValidCacheIndex;
    int cacheSize;
};
    
    
    {  void addElement (double elapsed);
  int getCount () { return count; }
  double getTotal () { return total; }
  double getMin () { return max; }
  double getMax () { return max; }
private:
  int count;			// size of <elems> array
  double total;			// number of elements in array
  double min;			// reference count
  double max;			// reference count
};
    
    
    {  if (ownerPassword || userPassword) {
    authData = makeAuthData(ownerPassword, userPassword);
  } else {
    authData = NULL;
  }
  ok = authorize(authData);
  if (authData) {
    freeAuthData(authData);
  }
  for (i = 0; !ok && i < 3; ++i) {
    if (!(authData = getAuthData())) {
      break;
    }
    ok = authorize(authData);
    if (authData) {
      freeAuthData(authData);
    }
  }
  if (!ok) {
    error(-1, 'Incorrect password');
  }
  return ok;
}
    
    Stream *Sound::getStream()
{
  return streamObj->getStream();
}
    
      //----- save/restore graphics state
  virtual void saveState(GfxState *state);
  virtual void restoreState(GfxState *state);
    
    ncclRedOp_t ncclRedOpFromMpiOp(MPI_Op op)
{
    if (op == MPI_SUM) return ncclSum;
    else if (op == MPI_MAX) return ncclMax;
    else if (op == MPI_MIN) return ncclMin;
    else if (op == MPI_PROD) return ncclProd;
    else RuntimeError('Invalid MPI_Op');
}
    
    public:
    TimesNodeBase(DEVICEID_TYPE deviceId, const wstring& name, size_t outputRank = 1, int inferInputRankToMap = NoInferredInputRank)
        : Base(deviceId, name), m_outputRank(outputRank), m_inferInputRankToMap(inferInputRankToMap), m_beingUnrolled(false)
    {
    }
    
        template<typename ElemType>
    class BlockMomentumSGD : public IMASGD<ElemType>
    {
        typedef IMASGD<ElemType> Base;
        using Base::m_pMPI;
        using Base::m_deviceId;
        using Base::DownCast;
    
     protected:
        bool m_resetSGDMomentumAfterAggregation; 
        bool m_useNesterovMomentum;
        double m_blockLearningRate; 
        double m_blockMomentumAsTimeConstantPerWorker; 
        size_t m_syncPeriodPerWorker; 
        map < wstring, shared_ptr<Matrix<ElemType>>>     m_prevParameters;       // parameters at the last model aggregation point
        map < wstring, shared_ptr<Matrix<ElemType>>>    m_blockLevelSmoothedGradient; 
    }
    
    
    {
    {
    {
    {            nodePtr->AttachInputs(inputNodes);
#else       // TODO: delete this
            switch (inputs.size())
            {
            // TODO: just use a vector attach
            case 1:
                nodePtr->AttachInputs(ComputationNode<ElemType>::FromVoidPtr(inputs[0]));
                break;
            case 2:
                nodePtr->AttachInputs(ComputationNode<ElemType>::FromVoidPtr(inputs[0]), ComputationNode<ElemType>::FromVoidPtr(inputs[1]));
                break;
            case 3:
                nodePtr->AttachInputs(ComputationNode<ElemType>::FromVoidPtr(inputs[0]), ComputationNode<ElemType>::FromVoidPtr(inputs[1]), ComputationNode<ElemType>::FromVoidPtr(inputs[2]));
                break;
            case 4:
                nodePtr->AttachInputs(ComputationNode<ElemType>::FromVoidPtr(inputs[0]), ComputationNode<ElemType>::FromVoidPtr(inputs[1]), ComputationNode<ElemType>::FromVoidPtr(inputs[2]), ComputationNode<ElemType>::FromVoidPtr(inputs[3]));
                break;
            case 5:
                nodePtr->AttachInputs(ComputationNode<ElemType>::FromVoidPtr(inputs[0]), ComputationNode<ElemType>::FromVoidPtr(inputs[1]), ComputationNode<ElemType>::FromVoidPtr(inputs[2]), ComputationNode<ElemType>::FromVoidPtr(inputs[3]), ComputationNode<ElemType>::FromVoidPtr(inputs[4]));
                break;
            case 6:
                nodePtr->AttachInputs(ComputationNode<ElemType>::FromVoidPtr(inputs[0]), ComputationNode<ElemType>::FromVoidPtr(inputs[1]), ComputationNode<ElemType>::FromVoidPtr(inputs[2]), ComputationNode<ElemType>::FromVoidPtr(inputs[3]), ComputationNode<ElemType>::FromVoidPtr(inputs[4]), ComputationNode<ElemType>::FromVoidPtr(inputs[5]));
                break;
            default:
                if (nodeParamCount > 0)
                    RuntimeError('Invalid number of parameters name = '%s' call = '%s'\n', node->GetName().c_str(), node->GetValue().c_str());
                break;
            }
#endif
        }
        // process common optional parameters (currently only 'tag');
        ProcessOptionalParameters(node);
        break;
    }
    case ndlPassFinal:
        break;
    }
}
    
    template std::shared_ptr<IDistGradAggregator<double>> GetSimpleDistGradAggregator<double>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce);
    
    
    {
    {
    {
    {BOOST_AUTO_TEST_SUITE_END()
}}}}

    
    
    {
    {
    {}}}
#pragma warning(pop)

    
        // a few more handy operations that occurred multiple times
    bool IsNan() const { return std::isnan(first); }
    EpochCriterion operator-(const EpochCriterion& other) const { return EpochCriterion(first - other.first, second - other.second); }
    void operator+=(const EpochCriterion& other) { first += other.first; second += other.second; }
    
        // non-transactional
    N_INSERT,
    N_UPDATE,
    N_INCDEC,
    N_DELETE,
    N_REPLACE,
    N_SELECT,
    
      static constexpr ptrdiff_t tableOff() {
    return offsetof(FixedStringMap, m_table);
  }
  static constexpr ptrdiff_t sizeOff() {
    return offsetof(FixedStringMap, m_extra);
  }
  static constexpr size_t sizeSize() {
    return sizeof(m_extra);
  }
private:
  struct Elm {
    LowStringPtr sd;
    V data;
  };
    
      void onEgressPaused() noexcept override {}
    
    TEST_F(ProxygenTransportBasicTest, negative_length) {
  auto req = getRequest(HTTPMethod::POST);
  req->getHeaders().add(HTTP_HEADER_CONTENT_LENGTH, '-500');
  EXPECT_CALL(m_server, onRequestError(_));
  EXPECT_CALL(m_txn, sendHeaders(IsResponseStatusCode(400)));
  EXPECT_CALL(m_txn, sendEOM());
  m_transport->onHeadersComplete(std::move(req));
}
    
    #undef ARITH_OPS
    
      /*
   * Initialize the source list for this IRInstruction.  We must not have
   * already had our sources initialized before this function is called.
   *
   * Memory for `srcs' is owned outside of this class and must outlive it.
   */
  void initializeSrcs(uint32_t numSrcs, SSATmp** srcs);
    
      std::map<std::string, bool> results = {
      {'unrestricted_pack', true},
      {'discovery_pack', false},
      {'fake_version_pack', false},
      {'valid_discovery_pack', true},
      {'restricted_pack', false},
  };
    
    Expected<std::string, DatabaseError> Database::getStringOr(
    const std::string& domain,
    const std::string& key,
    const std::string& default_value) {
  auto result = getString(domain, key);
  if (!result && result.getError() == DatabaseError::KeyNotFound) {
    return default_value;
  }
  return result;
}
    
    // This implementation is not 100% thread safe and does not
// support close/open commands during regular db usage.
// It's safe as long as DB is open in single threaded manner,
// and only then used from multiple threads.
class RocksdbDatabase final : public Database {
 public:
  using Handle = rocksdb::ColumnFamilyHandle;
  using HandleRef = std::shared_ptr<Handle>;
    }
    
    enum class RocksdbMigrationError {
  InvalidArgument = 1,
  FailToOpen = 2,
  FailToGetVersion = 3,
  NoMigrationFromCurrentVersion = 5,
  MigrationLogicError = 6,
  FailToOpenSrcDatabase = 7,
  FailMoveDatabase = 8,
};
    
    #include <osquery/flagalias.h>
#include <osquery/flags.h>
#include <osquery/registry.h>
#include <osquery/utils/conversions/tryto.h>
    
    
    {
    {    private:
        /**
         * Description of your variable here.
         */
        // bool mSomeVariableHere;
    };
}
    
        const auto FACE_NUMBER_PARTS = 70u;
    #define FACE_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  4,5,  5,6,  6,7,  7,8,  8,9,  9,10,  10,11,  11,12,  12,13,  13,14,  14,15,  15,16,  17,18,  18,19,  19,20, \
        20,21,  22,23,  23,24,  24,25,  25,26,  27,28,  28,29,  29,30,  31,32,  32,33,  33,34,  34,35,  36,37,  37,38,  38,39,  39,40,  40,41, \
        41,36,  42,43,  43,44,  44,45,  45,46,  46,47,  47,42,  48,49,  49,50,  50,51,  51,52,  52,53,  53,54,  54,55,  55,56,  56,57,  57,58, \
        58,59,  59,48,  60,61,  61,62,  62,63,  63,64,  64,65,  65,66,  66,67,  67,60
    #define FACE_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> FACE_PAIRS_RENDER {FACE_PAIRS_RENDER_GPU};
    #define FACE_COLORS_RENDER_GPU 255.f,    255.f,    255.f
    const std::vector<float> FACE_COLORS_RENDER{FACE_COLORS_RENDER_GPU};
    const std::vector<float> FACE_SCALES_RENDER{FACE_SCALES_RENDER_GPU};