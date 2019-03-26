
        
        void absDiff(const Size2D &size,
             const f32 * src0Base, ptrdiff_t src0Stride,
             const f32 * src1Base, ptrdiff_t src1Stride,
             f32 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<f32>());
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
    
                int16x4_t v_srclo = vget_low_s16(v_src0), v_srchi = vget_high_s16(v_src0);
            v_dst0 = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst0))),
                                  vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst0))));
    
    
    {
    {        for (; j < size.width; j++)
            dst[j] = (u16)src0[j] + (u16)src1[j];
    }
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
    
    template <bool L2gradient>
inline void ColFilter3x3Canny(const s16* src0, const s16* src1, const s16* src2, s16* dstx, s16* dsty, s32* mag, ptrdiff_t width)
{
    ptrdiff_t j = 0;
    for (; j <= width - 8; j += 8)
    {
        ColFilter3x3CannyL1Loop:
        int16x8_t line0x = vld1q_s16(src0 + j);
        int16x8_t line1x = vld1q_s16(src1 + j);
        int16x8_t line2x = vld1q_s16(src2 + j);
        int16x8_t line0y = vld1q_s16(src0 + j + width);
        int16x8_t line2y = vld1q_s16(src2 + j + width);
    }
    }
    
    #else
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
    inline float32x2_t vrecp_f32(float32x2_t val)
{
    float32x2_t reciprocal = vrecpe_f32(val);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    return reciprocal;
}
    
    namespace caffe2 {
    }
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
    int16_t word_blob_quality(WERD_RES *word, ROW *row);
void reject_whole_page(PAGE_RES_IT &page_res_it);
    
    struct OSBestResult {
  OSBestResult() : orientation_id(0), script_id(0), sconfidence(0.0),
                   oconfidence(0.0) {}
  int orientation_id;
  int script_id;
  float sconfidence;
  float oconfidence;
};
    
      /**
   * Controls what to include in a bounding box. Bounding boxes of all levels
   * between RIL_WORD and RIL_BLOCK can include or exclude potential diacritics.
   * Between layout analysis and recognition, it isn't known where all
   * diacritics belong, so this control is used to include or exclude some
   * diacritics that are above or below the main body of the word. In most cases
   * where the placement is obvious, and after recognition, it doesn't make as
   * much difference, as the diacritics will already be included in the word.
   */
  void SetBoundingBoxComponents(bool include_upper_dots,
                                bool include_lower_dots) {
    include_upper_dots_ = include_upper_dots;
    include_lower_dots_ = include_lower_dots;
  }
    
      // Transforms the given coords one step forward to normalized space, without
  // using any block rotation or predecessor.
  void LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const;
  void LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const;
  // Transforms the given coords forward to normalized space using the
  // full transformation sequence defined by the block rotation, the
  // predecessors, deepest first, and finally this. If first_norm is not nullptr,
  // then the first and deepest transformation used is first_norm, ending
  // with this, and the block rotation will not be applied.
  void NormTransform(const DENORM* first_norm, const TPOINT& pt,
                     TPOINT* transformed) const;
  void NormTransform(const DENORM* first_norm, const FCOORD& pt,
                     FCOORD* transformed) const;
  // Transforms the given coords one step back to source space, without
  // using to any block rotation or predecessor.
  void LocalDenormTransform(const TPOINT& pt, TPOINT* original) const;
  void LocalDenormTransform(const FCOORD& pt, FCOORD* original) const;
  // Transforms the given coords all the way back to source image space using
  // the full transformation sequence defined by this and its predecessors
  // recursively, shallowest first, and finally any block re_rotation.
  // If last_denorm is not nullptr, then the last transformation used will
  // be last_denorm, and the block re_rotation will never be executed.
  void DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                       TPOINT* original) const;
  void DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                       FCOORD* original) const;
    
    STRING ParagraphModel::ToString() const {
  char buffer[200];
  const STRING &alignment = ParagraphJustificationToString(justification_);
  snprintf(buffer, sizeof(buffer),
           'margin: %d, first_indent: %d, body_indent: %d, alignment: %s',
           margin_, first_indent_, body_indent_, alignment.string());
  return STRING(buffer);
}

    
    		inline ColorFloatRGBA * GetDecodedColors(void)
		{
			return m_afrgbaDecodedColors;
		}
    
    
#if !defined(FFT_ARM_H)
#define FFT_ARM_H
    
    #include <stdio.h>
#include 'opus_defines.h'
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    /********************************************************************/
/*                                MACROS                            */
/********************************************************************/
    
    AuthPropertyIterator AuthPropertyIterator::operator++(int) {
  AuthPropertyIterator tmp(*this);
  operator++();
  return tmp;
}
    
    class CensusChannelData : public ChannelData {
 public:
  grpc_error* Init(grpc_channel_element* elem,
                   grpc_channel_element_args* args) override;
};
    
    void CensusClientCallData::OnDoneRecvMessageCb(void* user_data,
                                               grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  CensusChannelData* channeld =
      reinterpret_cast<CensusChannelData*>(elem->channel_data);
  GPR_ASSERT(calld != nullptr);
  GPR_ASSERT(channeld != nullptr);
  // Stream messages are no longer valid after receiving trailing metadata.
  if ((*calld->recv_message_) != nullptr) {
    calld->recv_message_count_++;
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_message_, GRPC_ERROR_REF(error));
}
    
      // implementation of ServerReflectionInfo(stream ServerReflectionRequest) rpc
  // in ServerReflection service
  Status ServerReflectionInfo(
      ServerContext* context,
      ServerReaderWriter<reflection::v1alpha::ServerReflectionResponse,
                         reflection::v1alpha::ServerReflectionRequest>* stream)
      override;
    
     private:
  class DynamicThread {
   public:
    DynamicThread(DynamicThreadPool* pool);
    ~DynamicThread();
    }
    
    #endif  // GPR_WINDOWS

    
        // TODO: This could actually be strided?
    template <typename ElementType, typename V1ElemType>
    const ElementType* NDArrayView::_DataBuffer() const
    {
        if (AsDataType<ElementType>() != m_dataType)
            InvalidArgument('NDArrayView::DataBuffer: The specified ElementType '%s' does not match this NDArrayView's DataType '%s'.', typeid(ElementType).name(), DataTypeName(m_dataType));
    }
    
            // (start, end) values in the current window to be reported.
        std::pair<double, double> m_loss;
        std::pair<double, double> m_metric;
        std::pair<size_t, size_t> m_samples;
        std::pair<size_t, size_t> m_updates;
    
            if (!m_lossFunction->Output().DynamicAxes().empty())
        {
            m_aggregatedLossFunction = ReduceSum(lossFunction, Axis::AllAxes(), L'aggregateLoss');
            combinedFunctionArgs.push_back(m_aggregatedLossFunction);
            m_trainingSampleCountVar = m_lossFunction;
        }
        else
        {
            m_aggregatedLossFunction = m_lossFunction;
    }
    
    #pragma once
    
    
    {        return true;   // succeeded
    }
    
    // GetData - Gets metadata from the specified section (into CPU memory)
// sectionName - section name to retrieve data from
// numRecords - number of records to read
// data - pointer to data buffer, if NULL, dataBufferSize will be set to size of required buffer to accomidate request
// dataBufferSize - [in] size of the databuffer in bytes
//                  [out] size of buffer filled with data
// recordStart - record to start reading from, defaults to zero (start of data)
// returns: true if data remains to be read, false if the end of data was reached
bool DataReader::GetData(const std::wstring& sectionName, size_t numRecords, void* data, size_t& dataBufferSize, size_t recordStart)
{
    bool bRet = true;
    for (size_t i = 0; i < m_ioNames.size(); i++)
        bRet &= m_dataReaders[m_ioNames[i]]->GetData(sectionName, numRecords, data, dataBufferSize, recordStart);
    return bRet;
}
    
    // Copies internal accumulator to the output.
template <class ElemType>
void EpochAccumulatorNode<ElemType>::CopyAccumulatorToValue()
{
    // Value gets resized in UpdateFunctionValuesSize that is called in BeforeForwardProp. Resize fills matrix with NaN
    // values, so m_value matrix cannot be used as persistent storage between ForwardProp calls.
    Value().SetValue(*m_accumulator);
}
    
    void Label::branchFar(Assembler& a,
                  BranchConditions bc,
                  LinkReg lr,
                  ImmType immt,
                  bool immMayChange) {
  // Marking current address for patchAbsolute
  addJump(&a);
    }
    
    APCHandle::Pair APCCollection::WrapArray(APCHandle::Pair inner,
                                         CollectionType colType) {
  auto const col = new APCCollection;
  col->m_arrayHandle = inner.handle;
  col->m_colType = colType;
  return { &col->m_handle, inner.size + sizeof(APCCollection) };
}
    
    
    {  static void
  StringInsert(std::vector<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.push_back(value);
  }
  static void
  StringInsert(boost::container::flat_set<std::string>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string, stdltistr>& values,
               const std::string& /*key*/, const std::string& value) {
    values.insert(value);
  }
  static void
  StringInsert(std::set<std::string>& values, const std::string& /*key*/,
               const std::string& value) {
    values.insert(value);
  }
  static void StringInsert(std::map<std::string, std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(std::map<std::string, std::string,
                           stdltistr> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void StringInsert(hphp_string_imap<std::string> &values,
                           const std::string &key,
                           const std::string &value) {
    values[key] = value;
  }
  static void ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                     const std::string& iniStr,
                                     std::string& with_includes);
};
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////n
    }
    
    public:
  static void Add(InfoVec& out, const char* name, const std::string& value);
  static void AddServerStats(InfoVec& out, const char* name,
                             const char* statsName = nullptr);
    
    #include 'hphp/runtime/base/directory.h'
#include 'hphp/runtime/ext/std/ext_std_file.h'
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};