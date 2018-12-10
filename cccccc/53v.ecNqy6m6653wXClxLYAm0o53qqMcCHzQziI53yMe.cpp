
        
          // A light version of SplitCPHor: instead of really doing the part split, we
  // simply compute the union bounding box of each split part.
  void SplitCPHorLite(ColPartition* part, GenericVector<TBOX>* splitted_boxes);
    
    const PageIterator& PageIterator::operator=(const PageIterator& src) {
  page_res_ = src.page_res_;
  tesseract_ = src.tesseract_;
  include_upper_dots_ = src.include_upper_dots_;
  include_lower_dots_ = src.include_lower_dots_;
  scale_ = src.scale_;
  scaled_yres_ = src.scaled_yres_;
  rect_left_ = src.rect_left_;
  rect_top_ = src.rect_top_;
  rect_width_ = src.rect_width_;
  rect_height_ = src.rect_height_;
  delete it_;
  it_ = new PAGE_RES_IT(*src.it_);
  BeginWord(src.blob_index_);
  return *this;
}
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
      // blow away the copied chopped_word, as we want to work with
  // the blobs from the input chopped_word so seam_arrays can be merged.
  TWERD *chopped = word->chopped_word;
  TWERD *chopped2 = new TWERD;
  chopped2->blobs.reserve(chopped->NumBlobs() - split_pt);
  for (int i = split_pt; i < chopped->NumBlobs(); ++i) {
    chopped2->blobs.push_back(chopped->blobs[i]);
  }
  chopped->blobs.truncate(split_pt);
  word->chopped_word = nullptr;
  delete word2->chopped_word;
  word2->chopped_word = nullptr;
    
      // Set the resolution of the source image in pixels per inch.
  // This should be called right after SetImage(), and will let us return
  // appropriate font sizes for the text.
  void SetSourceYResolution(int ppi) {
    yres_ = ppi;
    estimated_res_ = ppi;
  }
  int GetSourceYResolution() const {
    return yres_;
  }
  int GetScaledYResolution() const {
    return scale_ * yres_;
  }
  // Set the resolution of the source image in pixels per inch, as estimated
  // by the thresholder from the text size found during thresholding.
  // This value will be used to set internal size thresholds during recognition
  // and will not influence the output 'point size.' The default value is
  // the same as the source resolution. (yres_)
  void SetEstimatedResolution(int ppi) {
    estimated_res_ = ppi;
  }
  // Returns the estimated resolution, including any active scaling.
  // This value will be used to set internal size thresholds during recognition.
  int GetScaledEstimatedResolution() const {
    return scale_ * estimated_res_;
  }
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
    
    {}  // namespace tesseract.

    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
    }
    
    const ViewDescriptor& ClientCompletedRpcsMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/client/completed_rpcs/minute')
          .set_measure(kRpcClientRoundtripLatencyMeasureName)
          .set_aggregation(Aggregation::Count())
          .add_column(ClientMethodTagKey())
          .add_column(ClientStatusTagKey());
  return descriptor;
}
    
    class ProtoServerReflection final
    : public reflection::v1alpha::ServerReflection::Service {
 public:
  ProtoServerReflection();
    }
    
    
    {  m_last_elem_pos += 1;
  return offset;
}
    
    /**
 * Parts of the language can individually be made stricter, warning or
 * erroring when there's dangerous/unintuive usage; for example,
 * array_fill_keys() with non-int/string keys: Hack.Lang.StrictArrayFillKeys
 */
enum class HackStrictOption {
  OFF, // PHP5 behavior
  WARN,
  ON
};
    
    #endif // HPHP_DATA_STREAM_WRAPPER_H

    
    
    {  /**
   * Execute a debugger action.
   */
  virtual String debuggerVerb(const std::string& /*verb*/,
                              const std::vector<std::string>& /*args*/) {
    return String();
  }
};
    
    #endif // HPHP_GLOB_STREAM_WRAPPER_H

    
    namespace CNTK
{
    class CompositeMinibatchSource final : public MinibatchSource
    {
        static const std::wstring PositionAttributeName;
        static const std::wstring DistributedAfterSampleCountAttributeName;
    }
    }
    
        NDArrayViewPtr NDArrayView::DeepClone(const DeviceDescriptor& device, bool readOnly/* = false*/) const
    {
        NDArrayViewPtr newView = MakeSharedObject<NDArrayView>(this->GetDataType(), this->GetStorageFormat(), this->Shape(), device);
        switch (m_dataType)
        {
        case DataType::Float:
        {
            auto newMatrix = newView->GetWritableMatrix<float>();
            auto thisMatrix = GetMatrix<float>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        case DataType::Double:
        {
            auto newMatrix = newView->GetWritableMatrix<double>();
            auto thisMatrix = GetMatrix<double>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        case DataType::Float16:
        {
            auto newMatrix = newView->GetWritableMatrix<half>();
            auto thisMatrix = GetMatrix<half>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        case DataType::Int8:
        {
            auto newMatrix = newView->GetWritableMatrix<char>();
            auto thisMatrix = GetMatrix<char>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        case DataType::Int16:
        {
            auto newMatrix = newView->GetWritableMatrix<short>();
            auto thisMatrix = GetMatrix<short>();
            newMatrix->AssignValuesOf(*thisMatrix);
            break;
        }
        default:
            LogicError('NDArrayView::DeepClone: Unsupported DataType %s', DataTypeName(m_dataType));
            break;
        }
    }
    
        template <typename T> 
    inline std::string GetVersionsString(size_t currentVersion, size_t dictVersion)
    {
        std::stringstream info;
        info << 'Current ' << Typename<T>() << ' version = ' << currentVersion 
             << ', Dictionary version = ' << dictVersion;
        return info.str();
    }
    
        template <typename ElementType>
    /*static*/ ValuePtr Value::Create(const NDShape& sampleShape, const std::vector<std::vector<size_t>>& oneHotSequences, const std::vector<bool>& sequenceStartFlags, const DeviceDescriptor& device, bool readOnly/* = false*/)
    {
        if (oneHotSequences.size() == 0)
            InvalidArgument('Value::Create:: The number of sequences must be > 0');
    }
    
    
    {                if ((filterRank + outputRank) > shape.Rank())
                    InvalidArgument('Sum of filter rank (%d) and output rank (%d) of the parameter initializer cannot exceed the Parameter shape '%S' rank (%d)', filterRank, outputRank, shape.AsString().c_str(), (int)shape.Rank());
            }
    
    #define NOMINMAX
#include 'Windows.h' // for HANDLE
    
    template <class ElemType>
class EnvironmentInputNode : public ComputationNodeNonLooping<ElemType>, public NumInputs<0>
{
    typedef ComputationNodeNonLooping<ElemType> Base; UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName() { return L'EnvironmentInput'; }
    }
    
    U_NAMESPACE_END
    
    SelectFormat::SelectFormat(const UnicodeString& pat,
                           UErrorCode& status) : msgPattern(status) {
   applyPattern(pat, status);
}
    
    U_NAMESPACE_BEGIN
    
    #endif /* #if !UCONFIG_NO_COLLATION */

    
    namespace benchmark {
enum LogColor {
  COLOR_DEFAULT,
  COLOR_RED,
  COLOR_GREEN,
  COLOR_YELLOW,
  COLOR_BLUE,
  COLOR_MAGENTA,
  COLOR_CYAN,
  COLOR_WHITE
};
    }
    
    bool SameNames(UserCounters const& l, UserCounters const& r) {
  if (&l == &r) return true;
  if (l.size() != r.size()) {
    return false;
  }
  for (auto const& c : l) {
    if (r.find(c.first) == r.end()) {
      return false;
    }
  }
  return true;
}
    
    double BenchmarkReporter::Run::GetAdjustedCPUTime() const {
  double new_time = cpu_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}