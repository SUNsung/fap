
        
        int UniValue::get_int() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int32_t retval;
    if (!ParseInt32(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
        BOOST_CHECK_EQUAL(obj.empty(), false);
    BOOST_CHECK_EQUAL(obj.size(), 11);
    
    section .data
align 64
K256:
    dd	0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5
    dd	0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5
    dd	0xd807aa98,0x12835b01,0x243185be,0x550c7dc3
    dd	0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174
    dd	0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc
    dd	0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da
    dd	0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7
    dd	0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967
    dd	0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13
    dd	0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85
    dd	0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3
    dd	0xd192e819,0xd6990624,0xf40e3585,0x106aa070
    dd	0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5
    dd	0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3
    dd	0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208
    dd	0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    
    {}  // namespace leveldb

    
    typedef tuple<String, Size> DISParams;
typedef TestBaseWithParam<DISParams> DenseOpticalFlow_DIS;
    
            //
        // Enabled for Visual Studio:
        //        _M_IX86 -> x86
        //        _M_X64  -> 64bit x86
    
    //
// Alternative Canonical Huffman decoder:
//
// Canonical Huffman decoder based on 'On the Implementation of Minimum
// Redundancy Prefix Codes' by Moffat and Turpin - highly recommended
// reading as a good description of the problem space, as well as 
// a fast decoding algorithm.
//
// The premise is that instead of working directly with the coded 
// symbols, we create a new ordering based on the frequency of symbols.
// Less frequent symbols (and thus longer codes) are ordered earler.
// We're calling the values in this ordering 'Ids', as oppsed to 
// 'Symbols' - which are the short values we eventually want decoded.
//
// With this new ordering, a few small tables can be derived ('base' 
// and 'offset') which drive the decoding. To cut down on the 
// linear scanning of these tables, you can add a small table
// to directly look up short codes (as you might in a traditional
// lookup-table driven decoder). 
//
// The decoder is meant to be compatible with the encoder (and decoder)
// in ImfHuf.cpp, just faster. For ease of implementation, this decoder
// should only be used on compressed bitstreams >= 128 bits long.
//
    
    #include 'ImfAttribute.h'
    
    #endif

    
    
FrameBuffer::Iterator
FrameBuffer::begin ()
{
    return _map.begin();
}
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    void MapLiteTestUtil::ExpectMapFieldsModified(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsModified<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
    
    {
    {  // No default clause, clang will abort if a code is missing from
  // above switch.
  return 'UNKNOWN';
}
}  // namespace error.
    
    template <class T, T v> const T integral_constant<T, v>::value;
    
    
    {  // Yes || Yes == true.
  value = or_<true_, true_>::value;
  EXPECT_TRUE(value);
  // Yes || No == true.
  value = or_<true_, false_>::value;
  EXPECT_TRUE(value);
  // No || Yes == true.
  value = or_<false_, true_>::value;
  EXPECT_TRUE(value);
  // No || No == false.
  value = or_<false_, false_>::value;
  EXPECT_FALSE(value);
}
    
    
bool InitDescriptor() {
  if (PyType_Ready(&PyMessageDescriptor_Type) < 0)
    return false;
    }
    
    
    {  UNICHARMAP_NODE* nodes;
};
    
    template <typename TrainingParams,
          typename StatT, typename T = decltype(StatT().GetHess())>
XGBOOST_DEVICE inline T CalcGain(const TrainingParams &p, StatT stat) {
  return CalcGain(p, stat.GetGrad(), stat.GetHess());
}
    
    namespace xgboost {
namespace data {
// Used for single batch data.
class SimpleDMatrix : public DMatrix {
 public:
  explicit SimpleDMatrix(std::unique_ptr<DataSource>&& source)
      : source_(std::move(source)) {}
    }
    }
    }
    
    
    {  // Test the data read into the first row
  auto &batch = *dmat->GetRowBatches().begin();
  auto first_row = batch[0];
  ASSERT_EQ(first_row.size(), 3);
  EXPECT_EQ(first_row[2].index, 2);
  EXPECT_EQ(first_row[2].fvalue, 20);
}
    
    gbm::GBTreeModel CreateTestModel() {
  std::vector<std::unique_ptr<RegTree>> trees;
  trees.push_back(std::unique_ptr<RegTree>(new RegTree));
  (*trees.back())[0].SetLeaf(1.5f);
  (*trees.back()).Stat(0).sum_hess = 1.0f;
  gbm::GBTreeModel model(0.5);
  model.CommitModel(std::move(trees), 0);
  model.param.num_output_group = 1;
  model.base_margin = 0;
  return model;
}
    
    SEXP XGDMatrixSliceDMatrix_R(SEXP handle, SEXP idxset) {
  SEXP ret;
  R_API_BEGIN();
  int len = length(idxset);
  std::vector<int> idxvec(len);
  for (int i = 0; i < len; ++i) {
    idxvec[i] = INTEGER(idxset)[i] - 1;
  }
  DMatrixHandle res;
  CHECK_CALL(XGDMatrixSliceDMatrixEx(R_ExternalPtrAddr(handle),
                                     BeginPtr(idxvec), len,
                                     &res,
                                     0));
  ret = PROTECT(R_MakeExternalPtr(res, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    /*!
 * \brief load a data matrix
 * \param fname the name of the file
 * \param silent whether print messages during loading
 * \param out a loaded data matrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromFile(const char *fname,
                                    int silent,
                                    DMatrixHandle *out);
    
    
    {  delete dmat;
}
    
    template<typename DType>
inline void CompressArray<DType>::InitCompressChunks(size_t chunk_size, size_t max_nchunk) {
  raw_chunks_.clear();
  raw_chunks_.push_back(0);
  size_t min_chunk_size = data.size() / max_nchunk;
  chunk_size = std::max(min_chunk_size, chunk_size);
  size_t nstep = data.size() / chunk_size;
  for (size_t i = 0; i < nstep; ++i) {
    raw_chunks_.push_back(raw_chunks_.back() + chunk_size);
    CHECK_LE(raw_chunks_.back(), data.size());
  }
  if (nstep == 0) raw_chunks_.push_back(0);
  raw_chunks_.back() = data.size();
  CHECK_GE(raw_chunks_.size(), 2);
  out_buffer_.resize(raw_chunks_.size() - 1);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    out_buffer_[i].resize(raw_chunks_[i + 1] - raw_chunks_[i]);
  }
}