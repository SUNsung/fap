
        
        OCL_PERF_TEST_P(DenseOpticalFlow_DIS, perf,
                Combine(Values('PRESET_ULTRAFAST', 'PRESET_FAST', 'PRESET_MEDIUM'), Values(szVGA, sz720p, sz1080p)))
{
    DISParams params = GetParam();
    }
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    
inline FrameBuffer::Iterator
FrameBuffer::Iterator::operator ++ (int)
{
    Iterator tmp = *this;
    ++_i;
    return tmp;
}
    
    
    {    return fps;
}
    
    void GenericInputFile::readMagicNumberAndVersionField(OPENEXR_IMF_INTERNAL_NAMESPACE::IStream& is, int& version)
{
    //
    // Read the magic number and the file format version number.
    // Then check if we can read the rest of this file.
    //
    }
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
      Projection* GetProjection() const;
    
    
# if defined(OC_CLZ32)
/**
 * OC_ILOGNZ_32 - Integer binary logarithm of a non-zero 32-bit value.
 * @_v: A non-zero 32-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_32() instead.
 */
#  define OC_ILOGNZ_32(_v) (OC_CLZ32_OFFS-OC_CLZ32(_v))
/**
 * OC_ILOG_32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_32(_v)   (OC_ILOGNZ_32(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_32(_v) (oc_ilog32(_v))
#  define OC_ILOG_32(_v)   (oc_ilog32(_v))
# endif
    
    static const vorbis_residue_template _res_16u_0[]={
  {1,0,32,  &_residue_44_low_un,
   &_huff_book__16u0__single,&_huff_book__16u0__single,
   &_resbook_16u_0,&_resbook_16u_0},
};
static const vorbis_residue_template _res_16u_1[]={
  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__16u1__short,&_huff_book__16u1__short,
   &_resbook_16u_1,&_resbook_16u_1},
    }
    
    static const vorbis_residue_template _res_8u_0[]={
  {1,0,32,  &_residue_44_low_un,
   &_huff_book__8u0__single,&_huff_book__8u0__single,
   &_resbook_8u_0,&_resbook_8u_0},
};
static const vorbis_residue_template _res_8u_1[]={
  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__8u1__single,&_huff_book__8u1__single,
   &_resbook_8u_1,&_resbook_8u_1},
};
    
    /* The bark scale equations are approximations, since the original
   table was somewhat hand rolled.  The below are chosen to have the
   best possible fit to the rolled tables, thus their somewhat odd
   appearance (these are more accurate and over a longer range than
   the oft-quoted bark equations found in the texts I have).  The
   approximations are valid from 0 - 30kHz (nyquist) or so.
    
      std::shared_ptr<DHTNode> localNode_;
    
      ~DHTSetup();
    
    
    {} // namespace aria2
    
    
    {} // namespace aria2

    
      size_t getExecutingTaskSize() const { return execTasks_.size(); }
    
      virtual void executeTask() CXX11_OVERRIDE;
    
    
    {} // namespace aria2

    
    // -----------------------------------------------------------------------
// EpochAccumulatorNode calculates mean values of all samples used in forward pass.
// During training, mean sample value is calculated in each epoch. Value of the node will contain mean sample value of
// its input node values since the beginning of epoch.
// This node is useful for creating 'per class' metrics like average class recall or mean intersection over union (mean
// IOU) which is standard metric in semantic labeling.
// For mean IOU, we calculate ratio true_positives / (true_positives + false_negatives + false_positives) for all target
// classes and then get mean of those values. true_positives, false_negatives, false_positives should be calculated over
// the whole data set. Here we cannot calculate mean IOU per sample and then average the result. Instead, we use
// EpochAccumulatorNode to store those values over the whole data set.
// -----------------------------------------------------------------------
template <class ElemType>
class EpochAccumulatorNode : public ComputationNodeNonLooping<ElemType>, public NumInputs<1>
{
    typedef ComputationNodeNonLooping<ElemType> Base;
    UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName() { return L'EpochAccumulator'; }
    }
    
    
    {
    {                node->InsertParam(runCountNode);
            }
        }
    }
    else if (cnNodeType == OperationNameOf(CropNode))
    {
        // We expect 2 or 4 inputs.
        if (parameter.size() != 2 && parameter.size() != 4)
        {
            RuntimeError('%ls accepts inputs: [input1, input2, offsetX, offsetY] or \
                                              [input1, input2] or \
                                              [input1, input2, eqNode1, eqNode2].', cnNodeType.c_str());
        }
    
            ElemType initValueScale = config('initValueScale', '1.0');
    
    template <typename ElemType>
void DoDumpNodes(const ConfigParameters& config)
{
    wstring modelPath        = config(L'modelPath');
    wstring nodeName         = config(L'nodeName', L'__AllNodes__');
    wstring nodeNameRegexStr = config(L'nodeNameRegex', L'');
    wstring defOutFilePath   = modelPath + L'.' + nodeName + L'.txt';
    wstring outputFile       = config(L'outputFile', defOutFilePath);
    bool printValues         = config(L'printValues', true);
    bool printMetadata       = config(L'printMetadata', true);
    if (!printValues && !printMetadata)
        InvalidArgument('printValues and printMetadata: Since both are set to false, there will be nothing to dump');
    }
    
            void ReportMAPerfStats( size_t totalSamplesProcessedSinceLastReport, 
                                size_t localSamplesProcessedSinceLastReport, 
                                float secondOnCommunication)
        {
            m_Timer.Stop(); 
            double secondsSinceLastReport = m_Timer.ElapsedSeconds(); 
            m_Timer.Restart(); 
    }
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create an array from std::forward_list
    std::forward_list<int64_t> c_flist {12345678909876, 23456789098765, 34567890987654, 45678909876543};
    json j_flist(c_flist);
    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }