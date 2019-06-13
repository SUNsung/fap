
        
        AboutProtocolHandler::~AboutProtocolHandler() {}
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    
    {}  // namespace atom
    
    void DragFileItems(const std::vector<base::FilePath>& files,
                   const gfx::Image& icon,
                   gfx::NativeView view);
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 2));
    }
    input_blob_names.push_back(GO(2));
    
    template <typename T, class Context>
class BernoulliJSDGradientOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDGradientOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
    #include 'ocrpara.h'
#include 'host.h'  // For NearlyEqual()
    
    
    {  UnicharAmbigsVector dang_ambigs_;
  UnicharAmbigsVector replace_ambigs_;
  GenericVector<UnicharIdVector *> one_to_one_definite_ambigs_;
  GenericVector<UnicharIdVector *> ambigs_for_adaption_;
  GenericVector<UnicharIdVector *> reverse_ambigs_for_adaption_;
};
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
      int operator==(const KDPair<Key, Data>& other) const {
    return key == other.key;
  }
    
    Transliterator* RemoveTransliterator::clone(void) const {
    Transliterator* result = new RemoveTransliterator();
    if (result != NULL && getFilter() != 0) {
        result->adoptFilter((UnicodeFilter*)(getFilter()->clone()));
    }
    return result;
}
    
        RegexCompile     compiler(This, status);
    compiler.compile(regex, pe, status);
    
    U_NAMESPACE_END
    
    U_NAMESPACE_END
    
        switch (ruleMode)
    {
    // if the mode is day-of-month, the day of month is given
    case DOM_MODE:
        ruleDayOfMonth = ruleDay;
        break;
    }
    
    int32_t SimpleDateFormat::matchQuarterString(const UnicodeString& text,
                              int32_t start,
                              UCalendarDateFields field,
                              const UnicodeString* data,
                              int32_t dataCount,
                              Calendar& cal) const
{
    int32_t i = 0;
    int32_t count = dataCount;
    }
    
    #include 'unicode/uniset.h'
#include 'unicode/udat.h'
#include 'cmemory.h'
#include 'uassert.h'
#include 'ucln_in.h'
#include 'umutex.h'
    
        int32_t length = fFlagAndLength;
    if (length > getCapacity() && reallocate(length, 0) == NULL) {
        setToBogus();
        return;
    }