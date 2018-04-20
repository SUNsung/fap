#ifndef SWIFT_SIL_DEADENDBLOCKS_H
#define SWIFT_SIL_DEADENDBLOCKS_H
    
    private:
  StringRef findGroupForSymbol(const IndexSymbol &sym);
    
      // Only allow allocation using the allocator in MarkupContext or by
  // placement new.
  void *operator new(size_t Bytes, swift::markup::MarkupContext &MC,
                     unsigned Alignment = alignof(DocComment));
  void *operator new(size_t Bytes, void *Mem) {
    assert(Mem);
    return Mem;
  }
    
    #include 'swift/Syntax/Rewriter.h'
    
      /// Suppress all warnings
  bool SuppressWarnings = false;
    
      virtual void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                                DiagnosticKind Kind,
                                StringRef FormatString,
                                ArrayRef<DiagnosticArgument> FormatArgs,
                                const DiagnosticInfo &Info) override;
    
      /// Add a #line-defined virtual file region.
  ///
  /// By default, this region continues to the end of the buffer.
  ///
  /// \returns True if the new file was added, false if the file already exists.
  /// The name and line offset must match exactly in that case.
  ///
  /// \sa closeVirtualFile.
  bool openVirtualFile(SourceLoc loc, StringRef name, int lineOffset);
    
    namespace swift {
    }
    
    // The compiler generates the swift_once_t values as word-sized zero-initialized
// variables, so we want to make sure swift_once_t isn't larger than the
// platform word or the function below might overwrite something it shouldn't.
static_assert(sizeof(swift_once_t) <= sizeof(void*),
              'swift_once_t must be no larger than the platform word');
    
    namespace tesseract  {
    }
    
    // Returns the x,y means as an FCOORD.
FCOORD LLSQ::mean_point() const {
  if (total_weight > 0.0) {
    return FCOORD(sigx / total_weight, sigy / total_weight);
  } else {
    return FCOORD(0.0f, 0.0f);
  }
}
    
    // Vector of IntKDPair.
class KDVector : public GenericVector<IntKDPair> {
  // TODO(rays) Add some code to manipulate a KDVector. For now there
  // is nothing and this class is effectively a specialization typedef.
};
    
    
    {  clock_t start = clock();
  int total_samples = 0;
  double unscaled_error = 0.0;
  // Set a number of samples on which to run the classify debug mode.
  int error_samples = report_level > 3 ? report_level * report_level : 0;
  // Iterate over all the samples, accumulating errors.
  for (it->Begin(); !it->AtEnd(); it->Next()) {
    TrainingSample* mutable_sample = it->MutableSample();
    int page_index = mutable_sample->page_num();
    Pix* page_pix = 0 <= page_index && page_index < page_images.size()
                  ? page_images[page_index] : NULL;
    // No debug, no keep this.
    classifier->UnicharClassifySample(*mutable_sample, page_pix, 0,
                                      INVALID_UNICHAR_ID, &results);
    bool debug_it = false;
    int correct_id = mutable_sample->class_id();
    if (counter.unicharset_.has_special_codes() &&
        (correct_id == UNICHAR_SPACE || correct_id == UNICHAR_JOINED ||
         correct_id == UNICHAR_BROKEN)) {
      // This is junk so use the special counter.
      debug_it = counter.AccumulateJunk(report_level > 3,
                                        results,
                                        mutable_sample);
    } else {
      debug_it = counter.AccumulateErrors(report_level > 3, boosting_mode,
                                          fontinfo_table,
                                          results, mutable_sample);
    }
    if (debug_it && error_samples > 0) {
      // Running debug, keep the correct answer, and debug the classifier.
      tprintf('Error on sample %d: %s Classifier debug output:\n',
              it->GlobalSampleIndex(),
              it->sample_set()->SampleToString(*mutable_sample).string());
      classifier->DebugDisplay(*mutable_sample, page_pix, correct_id);
      --error_samples;
    }
    ++total_samples;
  }
  double total_time = 1.0 * (clock() - start) / CLOCKS_PER_SEC;
  // Create the appropriate error report.
  unscaled_error = counter.ReportErrors(report_level, boosting_mode,
                                        fontinfo_table,
                                        *it, unichar_error, fonts_report);
  if (scaled_error != NULL) *scaled_error = counter.scaled_error_;
  if (report_level > 1) {
    // It is useful to know the time in microseconds/char.
    tprintf('Errors computed in %.2fs at %.1f μs/char\n',
            total_time, 1000000.0 * total_time / total_samples);
  }
  return unscaled_error;
}
    
    /**----------------------------------------------------------------------------
            Macros
----------------------------------------------------------------------------**/
/* macros for computing miscellaneous functions of 2 points */
#define XDelta(A,B)   ( (B).x - (A).x )
#define YDelta(A,B)   ( (B).y - (A).y )
#define SlopeFrom(A,B)    ( YDelta(A,B) / XDelta(A,B) )
#define AngleFrom(A,B)		( atan2((double) YDelta(A,B),		\
					(double) XDelta(A,B) ) )
    
      // Initialize the bool array to the given size of feature space.
  // The feature_map is just borrowed, and must exist for the entire
  // lifetime of the IntFeatureDist.
  void Init(const IntFeatureMap* feature_map);