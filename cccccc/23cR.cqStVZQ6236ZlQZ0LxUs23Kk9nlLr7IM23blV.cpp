
        
        public:
  DeadEndBlocks(const SILFunction *F) : F(F) {}
    
    /// Index the given source file and store the results to \p indexStorePath.
///
/// \param primarySourceFile The source file to index.
///
/// \param indexUnitToken A unique identifier for this translation unit in the
/// form of a file path.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(SourceFile *primarySourceFile, StringRef indexUnitToken,
                    StringRef indexStorePath, bool indexSystemModules,
                    bool isDebugCompilation, StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
    
      virtual bool enableWarnings() { return false; }
  virtual bool indexLocals() { return false; }
    
     protected:
  // ----------------------------------------------------------------------
  // Utility functions that may be useful components for other thresholders.
    
    
    { private:
  // Pointer to the other end of the link. It is always true that either
  // other_end_ == nullptr or other_end_->other_end_ == this.
  DoublePtr* other_end_;
};
    
    
    {
    {  // check for missing directory separator
  const char *lastchar = datadir.string();
  lastchar += datadir.length() - 1;
  if ((strcmp(lastchar, '/') != 0) && (strcmp(lastchar, '\\') != 0))
    datadir += '/';
}
}  // namespace tesseract

    
     public:
  inline _ConstTessMemberResultCallback_3_5(const T* object, MemberSignature member, P1 p1, P2 p2, P3 p3)
    : object_(object),
      member_(member),      p1_(p1),      p2_(p2),      p3_(p3) { }
    
      // Converts a float network to an int network. Each set of input weights that
  // corresponds to a single output weight is converted independently:
  // Compute the max absolute value of the weight set.
  // Scale so the max absolute value becomes INT8_MAX.
  // Round to integer.
  // Store a multiplicative scale factor (as a float) that will reproduce
  //   the original value, subject to rounding errors.
  void ConvertToInt();
  // Returns the size rounded up to an internal factor used by the SIMD
  // implementation for its input.
  int RoundInputs(int size) const {
    if (multiplier_ == nullptr) return size;
    return multiplier_->RoundInputs(size);
  }
    
    // Helper to expand a box in one of the 4 directions by the given pad,
// provided it does not expand into any cell with a zero noise density.
// If that is not possible, try expanding all round by a small constant.
static TBOX AttemptBoxExpansion(const TBOX& box, const IntGrid& noise_density,
                                int pad) {
  TBOX expanded_box(box);
  expanded_box.set_right(box.right() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_left(box.left() - pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_top(box.top() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.set_bottom(box.bottom() + pad);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  expanded_box = box;
  expanded_box.pad(kNoisePadding, kNoisePadding);
  if (!noise_density.AnyZeroInRect(expanded_box))
    return expanded_box;
  return box;
}
    
    // The CCNonTextDetect class contains grid-based operations on blobs to create
// a full-resolution image mask analogous yet complementary to
// pixGenHalftoneMask as it is better at line-drawings, graphs and charts.
class CCNonTextDetect : public BlobGrid {
 public:
  CCNonTextDetect(int gridsize, const ICOORD& bleft, const ICOORD& tright);
  virtual ~CCNonTextDetect();
    }