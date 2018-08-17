
        
        namespace atom {
    }
    
    
    {}  // namespace
    
    #ifndef ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_
#define ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_
    
      void OnUpdatePreferences(const base::ListValue& preferences);
    
    #if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
  // On Linux maximize can be an asynchronous operation. This notification
  // indicates that the window has been maximized. The source is
  // a Source<BrowserWindow> containing the BrowserWindow that was maximized.
  // No details are expected.
  NOTIFICATION_BROWSER_WINDOW_MAXIMIZED,
#endif
    
      // Sets time interval between updates. By default list of sources and their
  // thumbnail are updated once per second. If called after StartUpdating() then
  // it will take effect only after the next update.
  virtual void SetUpdatePeriod(base::TimeDelta period) = 0;
    
    #endif  // CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_

    
    void TtsPlatformImpl::clear_error() {
  error_ = std::string();
}
    
      SizeConstraints();
  SizeConstraints(const gfx::Size& min_size, const gfx::Size& max_size);
  ~SizeConstraints();
    
    
    {}  // namespace tesseract.
    
    // Sums the given 5 n-vectors putting the result into sum.
inline void SumVectors(int n, const double* v1, const double* v2,
                       const double* v3, const double* v4, const double* v5,
                       double* sum) {
  for (int i = 0; i < n; ++i) {
    sum[i] = v1[i] + v2[i] + v3[i] + v4[i] + v5[i];
  }
}
    
      // Parses the given string and returns a network according to the following
  // language:
  //  ============ Syntax of description below: ============
  // <d> represents a number.
  // <net> represents any single network element, including (recursively) a
  //   [...] series or (...) parallel construct.
  // (s|t|r|l|m) (regex notation) represents a single required letter.
  // NOTE THAT THROUGHOUT, x and y are REVERSED from conventional mathematics,
  // to use the same convention as Tensor Flow. The reason TF adopts this
  // convention is to eliminate the need to transpose images on input, since
  // adjacent memory locations in images increase x and then y, while adjacent
  // memory locations in tensors in TF, and NetworkIO in tesseract increase the
  // rightmost index first, then the next-left and so-on, like C arrays.
  // ============ INPUTS ============
  // <b>,<h>,<w>,<d> A batch of b images with height h, width w, and depth d.
  //   b, h and/or w may be zero, to indicate variable size. Some network layer
  //   (summarizing LSTM) must be used to make a variable h known.
  //   d may be 1 for greyscale, 3 for color.
  // NOTE that throughout the constructed network, the inputs/outputs are all of
  // the same [batch,height,width,depth] dimensions, even if a different size.
  // ============ PLUMBING ============
  // [...] Execute ... networks in series (layers).
  // (...) Execute ... networks in parallel, with their output depths added.
  // R<d><net> Execute d replicas of net in parallel, with their output depths
  //   added.
  // Rx<net> Execute <net> with x-dimension reversal.
  // Ry<net> Execute <net> with y-dimension reversal.
  // S<y>,<x> Rescale 2-D input by shrink factor x,y, rearranging the data by
  //   increasing the depth of the input by factor xy.
  // Mp<y>,<x> Maxpool the input, reducing the size by an (x,y) rectangle.
  // ============ FUNCTIONAL UNITS ============
  // C(s|t|r|l|m)<y>,<x>,<d> Convolves using a (x,y) window, with no shrinkage,
  //   random infill, producing d outputs, then applies a non-linearity:
  //   s: Sigmoid, t: Tanh, r: Relu, l: Linear, m: Softmax.
  // F(s|t|r|l|m)<d> Truly fully-connected with s|t|r|l|m non-linearity and d
  //   outputs. Connects to every x,y,depth position of the input, reducing
  //   height, width to 1, producing a single <d> vector as the output.
  //   Input height and width must be constant.
  //   For a sliding-window linear or non-linear map that connects just to the
  //   input depth, and leaves the input image size as-is, use a 1x1 convolution
  //   eg. Cr1,1,64 instead of Fr64.
  // L(f|r|b)(x|y)[s]<n> LSTM cell with n states/outputs.
  //   The LSTM must have one of:
  //    f runs the LSTM forward only.
  //    r runs the LSTM reversed only.
  //    b runs the LSTM bidirectionally.
  //   It will operate on either the x- or y-dimension, treating the other
  //     dimension independently (as if part of the batch).
  //   s (optional) summarizes the output in the requested dimension,
  //     outputting only the final step, collapsing the dimension to a
  //     single element.
  // LS<n> Forward-only LSTM cell in the x-direction, with built-in Softmax.
  // LE<n> Forward-only LSTM cell in the x-direction, with built-in softmax,
  //       with binary Encoding.
  // L2xy<n> Full 2-d LSTM operating in quad-directions (bidi in x and y) and
  //   all the output depths added.
  // ============ OUTPUTS ============
  // The network description must finish with an output specification:
  // O(2|1|0)(l|s|c)<n> output layer with n classes
  //  2 (heatmap) Output is a 2-d vector map of the input (possibly at
  //    different scale).
  //  1 (sequence) Output is a 1-d sequence of vector values.
  //  0 (category) Output is a 0-d single vector value.
  //  l uses a logistic non-linearity on the output, allowing multiple
  //    hot elements in any output vector value.
  //  s uses a softmax non-linearity, with one-hot output in each value.
  //  c uses a softmax with CTC. Can only be used with s (sequence).
  //  NOTE1: Only O1s and O1c are currently supported.
  //  NOTE2: n is totally ignored, and for compatibility purposes only. The
  //         output number of classes is obtained automatically from the
  //         unicharset.
  Network* BuildFromString(const StaticShape& input_shape, char** str);
    
    // Creates and returns a Pix distorted by various means according to the bool
// flags. If boxes is not nullptr, the boxes are resized/positioned according to
// any spatial distortion and also by the integer reduction factor box_scale
// so they will match what the network will output.
// Returns nullptr on error. The returned Pix must be pixDestroyed.
Pix* PrepareDistortedPix(const Pix* pix, bool perspective, bool invert,
                         bool white_noise, bool smooth_noise, bool blur,
                         int box_reduction, TRand* randomizer,
                         GenericVector<TBOX>* boxes);
// Distorts anything that has a non-null pointer with the same pseudo-random
// perspective distortion. Width and height only need to be set if there
// is no pix. If there is a pix, then they will be taken from there.
void GeneratePerspectiveDistortion(int width, int height, TRand* randomizer,
                                   Pix** pix, GenericVector<TBOX>* boxes);
// Computes the coefficients of a randomized projective transformation.
// The image transform requires backward transformation coefficient, and the
// box transform the forward coefficients.
// Returns the incolor arg to pixProjective.
int ProjectiveCoeffs(int width, int height, TRand* randomizer,
                     float** im_coeffs, float** box_coeffs);