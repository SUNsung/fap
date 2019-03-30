
        
          // Same as above, but you can choose the interception scope of this object.
  ScopedFakeTestPartResultReporter(InterceptMode intercept_mode,
                                   TestPartResultArray* result);
    
    #include <iosfwd>
#include <vector>
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-string.h'
    
      // To visit static members of the fixture, add the TestFixture::
  // prefix.
  n += TestFixture::shared_;
    
    // Returns a newly created InternalRunDeathTestFlag object with fields
// initialized from the GTEST_FLAG(internal_run_death_test) flag if
// the flag is specified; otherwise returns NULL.
InternalRunDeathTestFlag* ParseInternalRunDeathTestFlag();
    
      // Returns a copy of the FilePath with the directory part removed.
  // Example: FilePath('path/to/file').RemoveDirectoryName() returns
  // FilePath('file'). If there is no directory part ('just_a_file'), it returns
  // the FilePath unmodified. If there is no file part ('just_a_dir/') it
  // returns an empty FilePath ('').
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveDirectoryName() const;
    
    // String - an abstract class holding static string utilities.
class GTEST_API_ String {
 public:
  // Static utility methods
    }
    
      void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    b2Polygon::b2Polygon(float32* _x, float32* _y, int32 nVert) {
        nVertices = nVert;
        x = new float32[nVertices];
        y = new float32[nVertices];
        for (int32 i = 0; i < nVertices; ++i) {
            x[i] = _x[i];
            y[i] = _y[i];
        }
		areaIsSet = false;
}
	
b2Polygon::b2Polygon(b2Vec2* v, int32 nVert) {
        nVertices = nVert;
        x = new float32[nVertices];
        y = new float32[nVertices];
        for (int32 i = 0; i < nVertices; ++i) {
            x[i] = v[i].x;
            y[i] = v[i].y;
    }
    }
    
    	// C-style inteface to the encoder
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth,
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uimaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight,
				int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    namespace Etc
{
	class Block4x4EncodingBits;
    }
    
    
    {			m_pencodingbitsRGB8->individual.red2 = (unsigned int)m_frgbaColor2.IntRed(15.0f);
			m_pencodingbitsRGB8->individual.green2 = (unsigned int)m_frgbaColor2.IntGreen(15.0f);
			m_pencodingbitsRGB8->individual.blue2 = (unsigned int)m_frgbaColor2.IntBlue(15.0f);
		}
    
    bool HorzSegmentsOverlap(cInt seg1a, cInt seg1b, cInt seg2a, cInt seg2b)
{
  if (seg1a > seg1b) std::swap(seg1a, seg1b);
  if (seg2a > seg2b) std::swap(seg2a, seg2b);
  return (seg1a < seg2b) && (seg2a < seg1b);
}
    
    #if defined (__cplusplus)
extern 'C' {
#endif
    }
    
    #define PSHR(a,shift)   (a)
#define SHR(a,shift)    (a)
#define SHL(a,shift)    (a)
#define SATURATE(x,a)   (x)
#define SATURATE16(x)   (x)
    
    /** 16x16 multiplication where the result fits in 32 bits */
#undef MULT16_16
static OPUS_INLINE opus_val32 MULT16_16_armv5e(opus_val16 a, opus_val16 b)
{
  int res;
  __asm__(
      '#MULT16_16\n\t'
      'smulbb %0, %1, %2;\n'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define MULT16_16(a, b) (MULT16_16_armv5e(a, b))
    
        template <>
    std::tuple<const void *, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<float16>() const
    {
        return _SparseBlockColumnDataBuffers<float16, half>();
    }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
    
            const NDShape& Shape() const override { return m_unpackedShape; }
        DeviceDescriptor Device() const override { return m_isPacked ? m_packedData->Device() : Value::Device(); }
        DataType GetDataType() const override { return m_isPacked ? m_packedData->GetDataType() : Value::GetDataType(); }
        StorageFormat GetStorageFormat() const override { return m_isPacked? m_packedData->GetStorageFormat() : Value::GetStorageFormat(); }
        bool IsReadOnly() const override { return m_isPacked ? m_packedData->IsReadOnly() : Value::IsReadOnly(); }
    
    
    {
    {        // pass on some global option    --TODO: Why is this not done inside each reader??
        size_t nbrUttPerMinibatch = config(L'nbruttsineachrecurrentiter', (size_t) 1);
        m_dataReaders[ioName]->SetNumParallelSequences(nbrUttPerMinibatch);
    }
}
    
    // ---------------------------------------------------------------------------
// RandomOrdering -- class to help manage randomization of input data
// ---------------------------------------------------------------------------
    
        void Start();
    void Stop();
    void Restart();
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        Matrix<ElemType> sliceInput1Value = Input(1)->ValueFor(fr);
        Matrix<ElemType> sliceOutputValue = ValueFor(fr);
    }
    
        virtual bool OutputUsedInComputingInputNodesGradients() const override
    {
        return false;
    }
    virtual bool InputUsedInComputingInputNodesGradients(size_t /*childIndex*/) const override
    {
        return false;
    }
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    /*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WQSummary<DType, RType> > {
};
    
    
    {  /*!
   * \brief dump the model in the requested format
   * \param fmap feature map that may help give interpretations of feature
   * \param with_stats extra statistics while dumping model
   * \param format the format to dump the model in
   * \return a vector of dump for boosters.
   */
  virtual std::vector<std::string> DumpModel(const FeatureMap& fmap,
                                             bool with_stats,
                                             std::string format) const = 0;
  /*!
   * \brief create a gradient booster from given name
   * \param name name of gradient booster
   * \param cache_mats The cache data matrix of the Booster.
   * \param base_margin The base margin of prediction.
   * \return The created booster.
   */
  static GradientBooster* Create(
      const std::string& name,
      const std::vector<std::shared_ptr<DMatrix> >& cache_mats,
      bst_float base_margin);
};
    
    template<typename StorageIndex>
class SparsePageLZ4Format : public SparsePageFormat {
 public:
  explicit SparsePageLZ4Format(bool use_lz4_hc)
      : use_lz4_hc_(use_lz4_hc) {
    raw_bytes_ = raw_bytes_value_ = raw_bytes_index_ = 0;
    encoded_bytes_value_ = encoded_bytes_index_ = 0;
    nthread_ = dmlc::GetEnv('XGBOOST_LZ4_DECODE_NTHREAD', 4);
    nthread_write_ = dmlc::GetEnv('XGBOOST_LZ4_COMPRESS_NTHREAD', 12);
  }
  virtual ~SparsePageLZ4Format() {
    size_t encoded_bytes = raw_bytes_ +  encoded_bytes_value_ + encoded_bytes_index_;
    raw_bytes_ += raw_bytes_value_ + raw_bytes_index_;
    if (raw_bytes_ != 0) {
      LOG(CONSOLE) << 'raw_bytes=' << raw_bytes_
                   << ', encoded_bytes=' << encoded_bytes
                   << ', ratio=' << double(encoded_bytes) / raw_bytes_
                   << ', ratio-index=' << double(encoded_bytes_index_) /raw_bytes_index_
                   << ', ratio-value=' << double(encoded_bytes_value_) /raw_bytes_value_;
    }
  }
    }
    
      bool Read(SparsePage* page,
            dmlc::SeekStream* fi,
            const std::vector<bst_uint>& sorted_index_set) override {
    if (!fi->Read(&disk_offset_)) return false;
    auto& offset_vec = page->offset.HostVector();
    auto& data_vec = page->data.HostVector();
    // setup the offset
    offset_vec.clear();
    offset_vec.push_back(0);
    for (unsigned int fid : sorted_index_set) {
      CHECK_LT(fid + 1, disk_offset_.size());
      size_t size = disk_offset_[fid + 1] - disk_offset_[fid];
      offset_vec.push_back(offset_vec.back() + size);
    }
    data_vec.resize(offset_vec.back());
    // read in the data
    size_t begin = fi->Tell();
    size_t curr_offset = 0;
    for (size_t i = 0; i < sorted_index_set.size();) {
      bst_uint fid = sorted_index_set[i];
      if (disk_offset_[fid] != curr_offset) {
        CHECK_GT(disk_offset_[fid], curr_offset);
        fi->Seek(begin + disk_offset_[fid] * sizeof(Entry));
        curr_offset = disk_offset_[fid];
      }
      size_t j, size_to_read = 0;
      for (j = i; j < sorted_index_set.size(); ++j) {
        if (disk_offset_[sorted_index_set[j]] == disk_offset_[fid] + size_to_read) {
          size_to_read += offset_vec[j + 1] - offset_vec[j];
        } else {
          break;
        }
      }
    }
    }
    
        // Remove the assertion on batch.index, which can be null in the case that the data in this
    // batch is entirely sparse. Although it's true that this indicates a likely issue with the
    // user's data workflows, passing XGBoost entirely sparse data should not cause it to fail.
    // See https://github.com/dmlc/xgboost/issues/1827 for complete detail.
    // CHECK(batch.index != nullptr);
    
      iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare('deregisterExtension') != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  ExtensionManager_deregisterExtension_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();
    
    #include <fstream>
    
    // Sanity check integration test for kernel_extensions
// Spec file: specs/darwin/kernel_extensions.table
    
    // Sanity check integration test for kernel_modules
// Spec file: specs/linux/kernel_modules.table
    
        // create a JSON string directly from a string literal
    json j_string_literal('The quick brown fox jumps over the lazy dog.');
    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }