
        
        NS_ASSUME_NONNULL_BEGIN
    
    #endif // SWIFT_INDEX_INDEXRECORD_H

    
    /// Options for controlling diagnostics.
class DiagnosticOptions {
public:
  /// Indicates whether textual diagnostics should use color.
  bool UseColor = false;
    }
    
      /// Returns the line and column represented by the given source location.
  ///
  /// If \p BufferID is provided, \p Loc must come from that source buffer.
  ///
  /// This respects #line directives.
  std::pair<unsigned, unsigned>
  getLineAndColumn(SourceLoc Loc, unsigned BufferID = 0) const {
    assert(Loc.isValid());
    int LineOffset = getLineOffset(Loc);
    int l, c;
    std::tie(l, c) = LLVMSourceMgr.getLineAndColumn(Loc.Value, BufferID);
    assert(LineOffset+l > 0 && 'bogus line offset');
    return { LineOffset + l, c };
  }
    
    using namespace swift;
    
    
    {  TRand random_;
  IntSimdMatrix base_;
};
    
    extern BLOCK_LIST *current_block_list;
extern STRING_VAR_H (editor_image_win_name, 'EditorImage',
'Editor image window name');
extern INT_VAR_H (editor_image_xpos, 590, 'Editor image X Pos');
extern INT_VAR_H (editor_image_ypos, 10, 'Editor image Y Pos');
extern INT_VAR_H (editor_image_height, 680, 'Editor image height');
extern INT_VAR_H (editor_image_width, 655, 'Editor image width');
extern INT_VAR_H (editor_image_word_bb_color, BLUE,
'Word bounding box colour');
extern INT_VAR_H (editor_image_blob_bb_color, YELLOW,
'Blob bounding box colour');
extern INT_VAR_H (editor_image_text_color, WHITE, 'Correct text colour');
extern STRING_VAR_H (editor_dbwin_name, 'EditorDBWin',
'Editor debug window name');
extern INT_VAR_H (editor_dbwin_xpos, 50, 'Editor debug window X Pos');
extern INT_VAR_H (editor_dbwin_ypos, 500, 'Editor debug window Y Pos');
extern INT_VAR_H (editor_dbwin_height, 24, 'Editor debug window height');
extern INT_VAR_H (editor_dbwin_width, 80, 'Editor debug window width');
extern STRING_VAR_H (editor_word_name, 'BlnWords',
'BL normalised word window');
extern INT_VAR_H (editor_word_xpos, 60, 'Word window X Pos');
extern INT_VAR_H (editor_word_ypos, 510, 'Word window Y Pos');
extern INT_VAR_H (editor_word_height, 240, 'Word window height');
extern INT_VAR_H (editor_word_width, 655, 'Word window width');
extern double_VAR_H (editor_smd_scale_factor, 1.0, 'Scaling for smd image');
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    #include 'dawg.h'
#include 'object_cache.h'
#include 'strngs.h'
#include 'tessdatamanager.h'
    
    class DawgCache {
 public:
  Dawg *GetSquishedDawg(const STRING &lang, TessdataType tessdata_dawg_type,
                        int debug_level, TessdataManager *data_file);
    }
    
      // Computes vectors of min and max label index for each timestep, based on
  // whether skippability of nulls makes it possible to complete a valid path.
  bool ComputeLabelLimits();
  // Computes targets based purely on the labels by spreading the labels evenly
  // over the available timesteps.
  void ComputeSimpleTargets(GENERIC_2D_ARRAY<float>* targets) const;
  // Computes mean positions and half widths of the simple targets by spreading
  // the labels even over the available timesteps.
  void ComputeWidthsAndMeans(GenericVector<float>* half_widths,
                             GenericVector<int>* means) const;
  // Calculates and returns a suitable fraction of the simple targets to add
  // to the network outputs.
  float CalculateBiasFraction();
  // Runs the forward CTC pass, filling in log_probs.
  void Forward(GENERIC_2D_ARRAY<double>* log_probs) const;
  // Runs the backward CTC pass, filling in log_probs.
  void Backward(GENERIC_2D_ARRAY<double>* log_probs) const;
  // Normalizes and brings probs out of log space with a softmax over time.
  void NormalizeSequence(GENERIC_2D_ARRAY<double>* probs) const;
  // For each timestep computes the max prob for each class over all
  // instances of the class in the labels_, and sets the targets to
  // the max observed prob.
  void LabelsToClasses(const GENERIC_2D_ARRAY<double>& probs,
                       NetworkIO* targets) const;
  // Normalizes the probabilities such that no target has a prob below min_prob,
  // and, provided that the initial total is at least min_total_prob, then all
  // probs will sum to 1, otherwise to sum/min_total_prob. The maximum output
  // probability is thus 1 - (num_classes-1)*min_prob.
  static void NormalizeProbs(GENERIC_2D_ARRAY<float>* probs);
  // Returns true if the label at index is a needed null.
  bool NeededNull(int index) const;
  // Returns exp(clipped(x)), clipping x to a reasonable range to prevent over/
  // underflow.
  static double ClippedExp(double x) {
    if (x < -kMaxExpArg_) return exp(-kMaxExpArg_);
    if (x > kMaxExpArg_) return exp(kMaxExpArg_);
    return exp(x);
  }
    
    #endif // LIBFUZZER_LINUX

    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <cstdarg>
#include <cstdio>
#include <fstream>
#include <io.h>
#include <iterator>
#include <sys/stat.h>
#include <sys/types.h>
#include <windows.h>
    
      size_t InsertPartOf(const uint8_t *From, size_t FromSize, uint8_t *To,
                      size_t ToSize, size_t MaxToSize);
  size_t CopyPartOf(const uint8_t *From, size_t FromSize, uint8_t *To,
                    size_t ToSize);
  size_t ApplyDictionaryEntry(uint8_t *Data, size_t Size, size_t MaxSize,
                              DictionaryEntry &DE);
    
    	// Pad with 0x80 followed by 0x00 until the end of the block
	sha1_addUncounted(s, 0x80);
	while (s->bufferOffset != 56) sha1_addUncounted(s, 0x00);
    
    #endif  // LLVM_FUZZER_SHA1_H

    
    bool IsASCII(const Unit &U);
    
    
    {
    {      (void)sigemptyset(&BlockedSignalsSet);
      (void)sigaddset(&BlockedSignalsSet, SIGCHLD);
      if (sigprocmask(SIG_BLOCK, &BlockedSignalsSet, &OldBlockedSignalsSet) ==
          -1) {
        Printf('Failed to block SIGCHLD\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGQUIT, &OldSigQuitAction, NULL);
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
    }
    ++ActiveThreadCount;
  }