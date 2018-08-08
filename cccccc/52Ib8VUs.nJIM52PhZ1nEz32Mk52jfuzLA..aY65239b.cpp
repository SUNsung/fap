
        
        template <bool del, class R, class P1, class P2, class A1, class A2, class A3>
class _TessFunctionResultCallback_2_3 : public TessResultCallback3<R,A1,A2,A3> {
 public:
  typedef TessResultCallback3<R,A1,A2,A3> base;
  typedef R (*FunctionSignature)(P1,P2,A1,A2,A3);
    }
    
      // Returns the distance between the given pair of font/class pairs.
  // Finds in cache or computes and caches.
  // OrganizeByFontAndClass must have been already called.
  float ClusterDistance(int font_id1, int class_id1,
                        int font_id2, int class_id2,
                        const IntFeatureMap& feature_map);
    
      // Computes matrix.vector v = Wu.
  // u is of size W.dim2() - 1 and the output v is of size W.dim1().
  // u is imagined to have an extra element at the end with value 1, to
  // implement the bias, but it doesn't actually have it.
  // Asserts that the call matches what we have.
  void MatrixDotVector(const double* u, double* v) const;
  void MatrixDotVector(const int8_t* u, double* v) const;
  // MatrixDotVector for peep weights, MultiplyAccumulate adds the
  // component-wise products of *this[0] and v to inout.
  void MultiplyAccumulate(const double* v, double* inout);
  // Computes vector.matrix v = uW.
  // u is of size W.dim1() and the output v is of size W.dim2() - 1.
  // The last result is discarded, as v is assumed to have an imaginary
  // last value of 1, as with MatrixDotVector.
  void VectorDotMatrix(const double* u, double* v) const;
  // Fills dw_[i][j] with the dot product u[i][] . v[j][], using elements
  // from u and v, starting with u[i][offset] and v[j][offset].
  // Note that (matching MatrixDotVector) v[last][] is missing, presumed 1.0.
  // Runs parallel if requested. Note that inputs must be transposed.
  void SumOuterTransposed(const TransposedArray& u, const TransposedArray& v,
                          bool parallel);
  // Updates the weights using the given learning rate, momentum and adam_beta.
  // num_samples is used in the Adam correction factor.
  void Update(double learning_rate, double momentum, double adam_beta,
              int num_samples);
  // Adds the dw_ in other to the dw_ is *this.
  void AddDeltas(const WeightMatrix& other);
  // Sums the products of weight updates in *this and other, splitting into
  // positive (same direction) in *same and negative (different direction) in
  // *changed.
  void CountAlternators(const WeightMatrix& other, double* same,
                        double* changed) const;
    
     private:
  // Internal version of EvaluateBox returns the unclipped gradients as well
  // as the result of EvaluateBox.
  // hgrad1 and hgrad2 are the gradients for the horizontal textline.
  int EvaluateBoxInternal(const TBOX& box, const DENORM* denorm, bool debug,
                          int* hgrad1, int* hgrad2,
                          int* vgrad1, int* vgrad2) const;