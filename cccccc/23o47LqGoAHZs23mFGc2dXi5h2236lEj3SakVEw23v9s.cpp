
        
          if (m_log_entry) {
    m_log_entry->setInt(std::string(s_names[(size_t)m_name].str) + '_micros',
                        elapsed / 1000);
  }
    
    struct PageletTransport final : Transport, Synchronizable {
  PageletTransport(
    const String& url, const Array& headers, const String& postData,
    const String& remoteHost,
    const std::set<std::string> &rfc1867UploadedFiles,
    const Array& files, int timeoutSeconds);
    }
    
    #include 'hphp/runtime/vm/jit/vasm-unit.h'
    
    void initNuma();
    
    /*
 * Helpers for unconditional and conditional jumps.
 */
void surpriseCheck(IRGS&);
void surpriseCheck(IRGS&, Offset);
void jmpImpl(IRGS&, Offset);
void implCondJmp(IRGS&, Offset taken, bool negate, SSATmp*);
    
      // DataBlock can track an alternate pseudo-frontier to support clients that
  // wish to emit code to one location while keeping memory references relative
  // to a separate location. The actual writes will be to m_dest.
  Address m_destBase{nullptr};
    
                // second, get data from reader, stored it in cache
            // 1. for each key, allocate the specific matrix on device
            for (auto& pa : inputMatrices)
            {
                const wstring& name = pa.first;
                const auto& input = pa.second;
                auto& M = input.GetMatrix<ElemType>();
                if (m_inputMatricesCache.find(name) == m_inputMatricesCache.end())
                    m_inputMatricesCache.AddInput(name, make_shared<Matrix<ElemType>>(M, M.GetDeviceId()), input.pMBLayout, input.sampleLayout); // deep copy from M
                else
                    m_inputMatricesCache.GetInputMatrix<ElemType>(name).SetValue(M);
            }
            // 2. MBlayout
            m_MBLayoutCache->CopyFrom(net.GetMBLayoutPtrOfNetwork());
            size_t nParallelSequences = m_MBLayoutCache->GetNumParallelSequences();
    
    template<> inline
dnnError_t dnnConvolutionCreateForward<float>(
    dnnPrimitive_t* pConvolution,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t algorithm,
    size_t dimension,
    const size_t srcSize[],
    const size_t dstSize[],
    const size_t filterSize[],
    const size_t convolutionStrides[],
    const int inputOffset[],
    const dnnBorder_t border_type)
{
    return dnnConvolutionCreateForward_F32(
        pConvolution,
        attributes,
        algorithm,
        dimension,
        srcSize,
        dstSize,
        filterSize,
        convolutionStrides,
        inputOffset,
        border_type);
}
    
        // this performs the operation on a row stripe, rows [beginrow,endrow) of M -> rows[beginrow,endrow) of result
    // Rows outside [beginrow,endrow) are not touched, and can e.g. be computed by another thread.
    void matprod_mtm(const ssematrixbase &Mt, size_t beginrow /*first row in M*/, size_t endrow /*end row in M*/, const ssematrixbase &V)
    {
        auto &us = *this;
        assert(V.rows() == Mt.rows()); // remember: Mt is the transpose of M
        assert(us.rows() == Mt.cols());
        assert(us.cols() == V.cols());
        assert(beginrow < endrow && endrow <= Mt.cols()); // remember that cols of Mt are the rows of M
    }
    
    
    {    auto code = cudaStreamDestroy(m_stream);
    if (code != cudaSuccess)
    {
        std::cerr << 'cudaStreamDestroy failed (PrefetchGPUDataTransferer dtor): '
            << cudaGetErrorString(code) << ' (cuda error ' <<  code << ')'<< std::endl;
    }
}
    
    
    {            // forward prop till reaching the current bn node
            m_net->ForwardProp(node);
        }
    
        // first try if a NetworkBuilder is present
    function<ComputationNetworkPtr(DEVICEID_TYPE)> createNetworkFn;
    bool gotIt = TryGetNetworkFactory<ConfigRecordType, ElemType>(config, createNetworkFn);
    if (gotIt)
    {
        // We have several ways to create a network.
        net = createNetworkFn(deviceId);
        if (outputNodeNames.size() > 0)
        {
            net->InvalidateCompiledNetwork();
            PatchOutputNodes(net, outputNodeNames, outputNodeNamesVector);
            net->CompileNetwork();
            // BUGBUG: This will generate double Validation output in the log
        }
    }
    else // no NetworkBuilder given: load from 'modelPath'
    {
        wstring modelPath = config(L'modelPath');
    }
    
    using namespace std;
using namespace Microsoft::MSR;
using namespace Microsoft::MSR::CNTK;
    
    using namespace std;
using namespace Microsoft::MSR::ScriptableObjects;
    
    // type of data in this section
enum SectionType
{
    sectionTypeNull = 0,
    sectionTypeFile = 1,          // file header
    sectionTypeData = 2,          // data section
    sectionTypeLabel = 3,         // label data
    sectionTypeLabelMapping = 4,  // label mapping table (array of strings)
    sectionTypeStats = 5,         // data statistics
    sectionTypeCategoryLabel = 6, // labels in category format (float type, all zeros with a single 1.0 per column)
    sectionTypeMax
};
    
        virtual VariableSchema GetInputSchema() const override;
    
    
    {            matrix->CopyToArray(dataPtr, numberToCopy);
        }
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    void MetaInfo::LoadBinary(dmlc::Stream *fi) {
  int version;
  CHECK(fi->Read(&version, sizeof(version)) == sizeof(version)) << 'MetaInfo: invalid version';
  CHECK(version >= 1 && version <= kVersion) << 'MetaInfo: unsupported file version';
  CHECK(fi->Read(&num_row_, sizeof(num_row_)) == sizeof(num_row_)) << 'MetaInfo: invalid format';
  CHECK(fi->Read(&num_col_, sizeof(num_col_)) == sizeof(num_col_)) << 'MetaInfo: invalid format';
  CHECK(fi->Read(&num_nonzero_, sizeof(num_nonzero_)) == sizeof(num_nonzero_))
      << 'MetaInfo: invalid format';
  CHECK(fi->Read(&labels_)) <<  'MetaInfo: invalid format';
  CHECK(fi->Read(&group_ptr_)) << 'MetaInfo: invalid format';
  if (version >= kVersionQidAdded) {
    CHECK(fi->Read(&qids_)) << 'MetaInfo: invalid format';
  } else {  // old format doesn't contain qid field
    qids_.clear();
  }
  CHECK(fi->Read(&weights_)) << 'MetaInfo: invalid format';
  CHECK(fi->Read(&root_index_)) << 'MetaInfo: invalid format';
  CHECK(fi->Read(&base_margin_)) << 'MetaInfo: invalid format';
}
    
    void SimpleCSRSource::CopyFrom(dmlc::Parser<uint32_t>* parser) {
  // use qid to get group info
  const uint64_t default_max = std::numeric_limits<uint64_t>::max();
  uint64_t last_group_id = default_max;
  bst_uint group_size = 0;
  this->Clear();
  while (parser->Next()) {
    const dmlc::RowBlock<uint32_t>& batch = parser->Value();
    if (batch.label != nullptr) {
      info.labels_.insert(info.labels_.end(), batch.label, batch.label + batch.size);
    }
    if (batch.weight != nullptr) {
      info.weights_.insert(info.weights_.end(), batch.weight, batch.weight + batch.size);
    }
    if (batch.qid != nullptr) {
      info.qids_.insert(info.qids_.end(), batch.qid, batch.qid + batch.size);
      // get group
      for (size_t i = 0; i < batch.size; ++i) {
        const uint64_t cur_group_id = batch.qid[i];
        if (last_group_id == default_max || last_group_id != cur_group_id) {
          info.group_ptr_.push_back(group_size);
        }
        last_group_id = cur_group_id;
        ++group_size;
      }
    }
    }
    }
    
          well_formed = db_wrapper->AddToBatch(
        batch, false,
        Handle<Array>::Cast(sub_batch->Get(String::NewSymbol('put'))),
        db_wrapper, *v8::String::Utf8Value(sub_batch->Get(
            String::NewSymbol('column_family'))));
    
    Name            Speed       Q.Score   Author
xxHash          5.4 GB/s     10
CrapWow         3.2 GB/s      2       Andrew
MumurHash 3a    2.7 GB/s     10       Austin Appleby
SpookyHash      2.0 GB/s     10       Bob Jenkins
SBox            1.4 GB/s      9       Bret Mulvey
Lookup3         1.2 GB/s      9       Bob Jenkins
SuperFastHash   1.2 GB/s      1       Paul Hsieh
CityHash64      1.05 GB/s    10       Pike & Alakuijala
FNV             0.55 GB/s     5       Fowler, Noll, Vo
CRC32           0.43 GB/s     9
MD5-32          0.33 GB/s    10       Ronald L. Rivest
SHA1-32         0.28 GB/s    10
    
    JNIEnv* JniCallback::getJniEnv(jboolean* attached) const {
  return JniUtil::getJniEnv(m_jvm, attached);
}
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
extern InternalIterator* NewMergingIterator(
    const InternalKeyComparator* comparator, InternalIterator** children, int n,
    Arena* arena = nullptr, bool prefix_seek_mode = false);
    
    
    {class DirectComparatorJniCallback : public BaseComparatorJniCallback {
 public:
      DirectComparatorJniCallback(
        JNIEnv* env, jobject jComparator,
        const ComparatorJniCallbackOptions* copt);
      ~DirectComparatorJniCallback();
};
}  // namespace rocksdb
    
    
    {
    {   private:
     jmethodID m_jLogMethodId;
     jobject m_jdebug_level;
     jobject m_jinfo_level;
     jobject m_jwarn_level;
     jobject m_jerror_level;
     jobject m_jfatal_level;
     jobject m_jheader_level;
     std::unique_ptr<char[]> format_str(const char* format, va_list ap) const;
  };
}  // namespace rocksdb
    
    #endif // D_A2_STR_H

    
      BtRequestFactory* getBtRequestFactory() const { return requestFactory_; }
    
    
    {  virtual bool execute() CXX11_OVERRIDE;
};
    
      std::string defaultValue_;
    
    #include <vector>
#include <string>
#include <memory>