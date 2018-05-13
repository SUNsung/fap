
        
          virtual bool lookupAdditions(DeclBaseName Name, DeclContext *DC,
                               SourceLoc Loc, bool IsTypeLookup,
                               ResultVector &RV) = 0;
    
    //===----------------------------------------------------------------------===//
// CodeCompletionOrganizer::Impl utilities
//===----------------------------------------------------------------------===//
    
    public:
  const std::string *createString(StringRef str) {
    auto *s = new std::string(str);
    StrsCreated.push_back(s);
    return s;
  }
    
    #include 'swift/SIL/SILDebugScope.h'
#include 'swift/SIL/SILFunction.h'
    
    
    {} // end namespace swift
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
SWIFT_RUNTIME_EXPORT
void swift_once(swift_once_t *predicate, void (*fn)(void *), void *context);
    
    #ifndef SWIFT_INDEX_INDEX_H
#define SWIFT_INDEX_INDEX_H
    
      /// A list of all of the results that we are tracking in reverse order. The
  /// reason that it is in reverse order is to allow us to simply traverse the
  /// list by popping values off the back.
  SmallVector<SILResultInfo, 8> allResults;
    
    
    {}  // namespace tesseract.
    
    /**
 * Base class for all tesseract APIs.
 * Specific classes can add ability to work on different inputs or produce
 * different outputs.
 * This class is mostly an interface layer on top of the Tesseract instance
 * class to hide the data types so that users of this class don't have to
 * include any other Tesseract headers.
 */
class TESS_API TessBaseAPI {
 public:
  TessBaseAPI();
  virtual ~TessBaseAPI();
    }
    
        // Writing direction changes at a per-word granularity
    tesseract::WritingDirection writing_direction;
    {
      tesseract::Orientation orientation;
      tesseract::TextlineOrder textline_order;
      float deskew_angle;
      res_it->Orientation(&orientation, &writing_direction,
                          &textline_order, &deskew_angle);
      if (writing_direction != WRITING_DIRECTION_TOP_TO_BOTTOM) {
        switch (res_it->WordDirection()) {
          case DIR_LEFT_TO_RIGHT:
            writing_direction = WRITING_DIRECTION_LEFT_TO_RIGHT;
            break;
          case DIR_RIGHT_TO_LEFT:
            writing_direction = WRITING_DIRECTION_RIGHT_TO_LEFT;
            break;
          default:
            writing_direction = old_writing_direction;
        }
      }
    }
    
    namespace tesseract {
double DotProductSSE(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductSSE can't be used on Android\n');
  abort();
}
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  fprintf(stderr, 'IntDotProductSSE can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    namespace tesseract {
    }
    
    
    {  for (i = 0, offset = 0; i < char_position;
       offset += word->best_choice->unichar_lengths()[i++]);
  return (
      word->uch_set->get_isdigit(
          word->best_choice->unichar_string().string() + offset,
          word->best_choice->unichar_lengths()[i]) ||
      (word->best_choice->permuter() == NUMBER_PERM &&
       STRING(numeric_punctuation).contains(
           word->best_choice->unichar_string().string()[offset])));
}
    
            // Init node per <NodeProto>.
        // <p_nameToValueInfoMap> specifies the node's inputs'/outputs' value information,
        // including name, type and shape.
        void Init(const NodeProto& p_nodeProto,
            const ArgNameToTypeMap& p_nameToType);
        void Init(const std::string& p_name,
            const std::string& p_opType,
            const std::string& p_description,
            const std::vector<NodeArg>& p_inputArgs,
            const std::vector<NodeArg>& p_outputArgs,
            const std::string& p_domain);
        void Init(const std::string& p_name,
            const std::string& p_opType,
            const std::string& p_description,
            const std::vector<NodeArg>& p_inputArgs,
            const std::vector<int>& p_inputArgCount,
            const std::vector<NodeArg>& p_outputArgs,
            const std::string& p_domain);
        void Init(const std::string& p_name,
            const std::string& p_opType,
            const std::string& p_description,
            const std::vector<NodeArg>& p_outputArgs,
            const std::string& p_domain);
    
                    if (IsLittleEndianOrder())
                {
                    memcpy((void*)p_data, (void*)buff, raw_data.size() * sizeof(char));
                }
                else
                {
                    for (size_t i = 0; i < raw_data.size(); i += typeSize, buff += typeSize)
                    {
                        T result;
                        const char* tempBytes = reinterpret_cast<char*>(&result);
                        for (size_t j = 0; j < typeSize; ++j)
                        {
                            memcpy((void*)&tempBytes[j], (void*)&buff[typeSize - 1 - i], sizeof(char));
                        }
                        p_data[i] = result;
                    }
                }
    
        std::function<void(OperatorSchemaSetter&)> RNNDocGeneratorInputX() {
        return [=](OperatorSchemaSetter& schema) {
            schema.Input('X',
                'The input sequences packed (and potentially padded) into one 3-D '
                'tensor with the shape of `[seq_length, batch_size, input_size]`.', 'T');
            schema.TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
                'Constrain input and output types to float tensors.');
        };
    }
    
        // Taken from Caffe2
    REGISTER_OPERATOR_SCHEMA(DepthToSpace)
        .Description('DepthToSpace for 4-D tensors of type T. '
            'Rearranges (permutes) data from channel into blocks of spatial data, '
            'followed by cropping. This is the reverse transformation of '
            'SpaceToDepth. More specifically, this op outputs a copy of the input '
            'tensor where values from the channel dimension are moved in spatial '
            'blocks to the height and width dimensions, followed by cropping along '
            'the height and width dimensions.')
        .Input('input', 'Input tensor of [N,C,H,W]', 'T')
        .Output('output', 'Output tensor of [N, C/(blocksize * blocksize), H * blocksize, '
            'W * blocksize]', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('blocksize', 'Blocks of [blocksize,blocksize] are moved.', AttrType::AttributeProto_AttributeType_INT);
    
    // This class stores sequence data for HTK for doubles.
struct HTKDoubleSequenceData : DenseSequenceData
{
    HTKDoubleSequenceData(FeatureMatrix& data, const NDShape& frameShape)
        : m_buffer(data.GetData(), data.GetData() + data.GetTotalSize()),
          m_frameShape(frameShape)
    {
        m_numberOfSamples = (uint32_t)data.GetNumberOfColumns();
        if (m_numberOfSamples != data.GetNumberOfColumns())
            RuntimeError('Maximum number of samples per sequence exceeded.');
    }
    }
    
    enum
{
    CNTKGRUZRWeightMultiplier = 2
};
enum
{
    CNTKGRUBiasIndex = 1,
    CNTKGRUWeightIndex = 2,
    CNTKGRUHiddenWeightZRIndex = 3,
    CNTKGRUHiddenWeightHIndex = 4,
    CNTKGRUPastOrFutureIndex = 5,
    CNTKGRUInputIndex = 6,
    CNTKGRUInputCount = 7
};
    
    template <class ElemType>
class BinaryReader : public DataReaderBase
{
    size_t m_mbSize;           // size of minibatch requested
    size_t m_mbStartSample;    // starting sample # of the next minibatch
    size_t m_epochSize;        // size of an epoch
    size_t m_epoch;            // which epoch are we on
    size_t m_epochStartSample; // the starting sample for the epoch
    size_t m_totalSamples;     // number of samples in the dataset
    bool m_partialMinibatch;   // a partial minibatch is allowed
    MBLayoutPtr m_pMBLayout;
    }
    
    
    {    cudaMemcpyAsync(cpuBuffer, gpuBuffer, numElements * elementSize, cudaMemcpyDeviceToHost, GetFetchStream()) || 'cudaMemcpyAsync failed';
}