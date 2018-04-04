
        
          /// Prepare a callee for an Objective-C method.
  Callee getObjCMethodCallee(IRGenFunction &IGF, const ObjCMethod &method,
                             llvm::Value *selfValue, CalleeInfo &&info);
    
    public:
  DeadEndBlocks(const SILFunction *F) : F(F) {}
    
      /// Indicates whether the diagnostics produced during compilation should be
  /// checked against expected diagnostics, indicated by markers in the
  /// input source file.
  enum {
    NoVerify,
    Verify,
    VerifyAndApplyFixes
  } VerifyMode = NoVerify;
    
    /// \brief Diagnostic consumer that displays diagnostics to standard error.
class PrintingDiagnosticConsumer : public DiagnosticConsumer {
  llvm::raw_ostream &Stream;
  bool ForceColors = false;
  bool DidErrorOccur = false;
public:
  PrintingDiagnosticConsumer(llvm::raw_ostream &stream = llvm::errs()) :
    Stream(stream) { }
    }
    
    #ifndef SWIFT_BASIC_SOURCEMANAGER_H
#define SWIFT_BASIC_SOURCEMANAGER_H
    
    #ifndef SWIFT_SYNTAX_REFERENCES_H
#define SWIFT_SYNTAX_REFERENCES_H
    
    Substitution::Substitution(Type Replacement,
                           ArrayRef<ProtocolConformanceRef> Conformance)
  : Replacement(Replacement), Conformance(Conformance)
{
  // The replacement type must be materializable.
  assert(Replacement->isMaterializable()
         && 'cannot substitute with a non-materializable type');
}
    
    ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return NULL for both.
  void Disconnect() {
    if (other_end_ != NULL) {
      other_end_->other_end_ = NULL;
      other_end_ = NULL;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
    // Tests a classifier, computing its error rate.
// See errorcounter.h for description of arguments.
// Iterates over the samples, calling the classifier in normal/silent mode.
// If the classifier makes a CT_UNICHAR_TOPN_ERR error, and the appropriate
// report_level is set (4 or greater), it will then call the classifier again
// with a debug flag and a keep_this argument to find out what is going on.
double ErrorCounter::ComputeErrorRate(ShapeClassifier* classifier,
    int report_level, CountTypes boosting_mode,
    const FontInfoTable& fontinfo_table,
    const GenericVector<Pix*>& page_images, SampleIterator* it,
    double* unichar_error,  double* scaled_error, STRING* fonts_report) {
  int fontsize = it->sample_set()->NumFonts();
  ErrorCounter counter(classifier->GetUnicharset(), fontsize);
  GenericVector<UnicharRating> results;
    }
    
    
    
        template <typename ElementType>
    ElementType Value::AsScalar() const
    {
        if (Mask())
            LogicError('Value::AsScalar: Scalar Value object must not have an associated mask');
    }
    
        mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    mBsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    Matrix<float>::ScaleAndAdd(alpha, mAsparse, mBsparse);
    
        StreamMinibatchInputs inputMatrices;
    for (auto& node : featureNodes)
        inputMatrices.AddInput(node->NodeName(), node->ValuePtr(), node->GetMBLayout(), node->GetSampleLayout());