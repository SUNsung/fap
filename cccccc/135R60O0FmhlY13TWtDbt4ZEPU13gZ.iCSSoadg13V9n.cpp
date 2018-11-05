
        
        class SubstitutionMap::Storage final
  : public llvm::FoldingSetNode,
    llvm::TrailingObjects<Storage, Type, ProtocolConformanceRef>
{
  friend TrailingObjects;
    }
    
    
    {  // For the rest, just generator chunks one at a time.
  do {
    auto claimedBits = std::min(numBits, size_t(ChunkSizeInBits));
    *nextChunk++ = getMoreBits(claimedBits);
    numBits -= claimedBits;
  } while (numBits);
}
    
    
    {  return UuidCompare(&uuid1, &uuid2, &s);
#else
  return uuid_compare(Value, y.Value);
#endif
}
    
    
    {    QWidget *m_dummyWidget;
    QMenu *m_dockMenu;
    QMainWindow *mainWindow;
};
    
    #ifndef BITCOIN_QT_NETWORKSTYLE_H
#define BITCOIN_QT_NETWORKSTYLE_H
    
        /** Colorize an icon (given filename) with the icon color */
    QIcon SingleColorIcon(const QString& filename) const;
    
        /** Specify model role to use as ordinal value (defaults to Qt::UserRole) */
    void setRole(int role);
    
        ~reverse_lock() {
        templock.lock();
        templock.swap(lock);
    }
    
        Round(a, b, c, d, e, f, g, h, 0xe49b69c1, w0 += sigma1(w14) + w9 + sigma0(w1));
    Round(h, a, b, c, d, e, f, g, 0xefbe4786, w1 += sigma1(w15) + w10 + sigma0(w2));
    Round(g, h, a, b, c, d, e, f, 0x0fc19dc6, w2 += sigma1(w0) + w11 + sigma0(w3));
    Round(f, g, h, a, b, c, d, e, 0x240ca1cc, w3 += sigma1(w1) + w12 + sigma0(w4));
    Round(e, f, g, h, a, b, c, d, 0x2de92c6f, w4 += sigma1(w2) + w13 + sigma0(w5));
    Round(d, e, f, g, h, a, b, c, 0x4a7484aa, w5 += sigma1(w3) + w14 + sigma0(w6));
    Round(c, d, e, f, g, h, a, b, 0x5cb0a9dc, w6 += sigma1(w4) + w15 + sigma0(w7));
    Round(b, c, d, e, f, g, h, a, 0x76f988da, w7 += sigma1(w5) + w0 + sigma0(w8));
    Round(a, b, c, d, e, f, g, h, 0x983e5152, w8 += sigma1(w6) + w1 + sigma0(w9));
    Round(h, a, b, c, d, e, f, g, 0xa831c66d, w9 += sigma1(w7) + w2 + sigma0(w10));
    Round(g, h, a, b, c, d, e, f, 0xb00327c8, w10 += sigma1(w8) + w3 + sigma0(w11));
    Round(f, g, h, a, b, c, d, e, 0xbf597fc7, w11 += sigma1(w9) + w4 + sigma0(w12));
    Round(e, f, g, h, a, b, c, d, 0xc6e00bf3, w12 += sigma1(w10) + w5 + sigma0(w13));
    Round(d, e, f, g, h, a, b, c, 0xd5a79147, w13 += sigma1(w11) + w6 + sigma0(w14));
    Round(c, d, e, f, g, h, a, b, 0x06ca6351, w14 += sigma1(w12) + w7 + sigma0(w15));
    Round(b, c, d, e, f, g, h, a, 0x14292967, w15 += sigma1(w13) + w8 + sigma0(w0));
    
    int secp256k1_ecdh(const secp256k1_context* ctx, unsigned char *result, const secp256k1_pubkey *point, const unsigned char *scalar) {
    int ret = 0;
    int overflow = 0;
    secp256k1_gej res;
    secp256k1_ge pt;
    secp256k1_scalar s;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(result != NULL);
    ARG_CHECK(point != NULL);
    ARG_CHECK(scalar != NULL);
    }
    
    #ifdef TINYFORMAT_OLD_LIBSTDCPLUSPLUS_WORKAROUND
template<typename T, bool convertible = is_convertible<T, int>::value>
struct formatZeroIntegerWorkaround
{
    static bool invoke(std::ostream& /**/, const T& /**/) { return false; }
};
template<typename T>
struct formatZeroIntegerWorkaround<T,true>
{
    static bool invoke(std::ostream& out, const T& value)
    {
        if (static_cast<int>(value) == 0 && out.flags() & std::ios::showpos)
        {
            out << '+0';
            return true;
        }
        return false;
    }
};
#endif // TINYFORMAT_OLD_LIBSTDCPLUSPLUS_WORKAROUND
    
    int64_t UniValue::get_int64() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int64_t retval;
    if (!ParseInt64(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
      // Computes matrix.vector v = Wu.
  // u is of size W.dim2() - 1 and the output v is of size W.dim1().
  // u is imagined to have an extra element at the end with value 1, to
  // implement the bias, but it doesn't actually have it.
  // Computes the base C++ implementation, if there are no partial_funcs_.
  // NOTE: The size of the input vector (u) must be padded using
  // RoundInputs above.
  // The input will be over-read to the extent of the padding. There are no
  // alignment requirements.
  void MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                       const GenericVector<double>& scales, const int8_t* u,
                       double* v) const;
    
    IntSimdMatrixAVX2::IntSimdMatrixAVX2() {
#ifdef __AVX2__
  num_outputs_per_register_ = kNumOutputsPerRegister;
  max_output_registers_ = kMaxOutputRegisters;
  num_inputs_per_register_ = kNumInputsPerRegister;
  num_inputs_per_group_ = kNumInputsPerGroup;
  num_input_groups_ = kNumInputGroups;
  partial_funcs_ = {PartialMatrixDotVector64, PartialMatrixDotVector32,
                    PartialMatrixDotVector16, PartialMatrixDotVector8};
#endif  // __AVX2__
}
    
    
    {}  // namespace tesseract.

    
      /**
   * Returns an image of the current object at the given level in greyscale
   * if available in the input. To guarantee a binary image use BinaryImage.
   * NOTE that in order to give the best possible image, the bounds are
   * expanded slightly over the binary connected component, by the supplied
   * padding, so the top-left position of the returned image is returned
   * in (left,top). These will most likely not match the coordinates
   * returned by BoundingBox.
   * If you do not supply an original image, you will get a binary one.
   * Use pixDestroy to delete the image after use.
   */
  Pix* GetImage(PageIteratorLevel level, int padding, Pix* original_img,
                int* left, int* top) const;
    
    // Getter for the name.
const char* ParamContent::GetName() const {
  if (param_type_ == VT_INTEGER) { return iIt->name_str(); }
  else if (param_type_ == VT_BOOLEAN) { return bIt->name_str(); }
  else if (param_type_ == VT_DOUBLE) { return dIt->name_str(); }
  else if (param_type_ == VT_STRING) { return sIt->name_str(); }
  else
    return 'ERROR: ParamContent::GetName()';
}
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
    
    class LearnerUniversal : public LearnerBase
    {
        std::unordered_map<Parameter, Variable> m_parameter_gradient_map;
        FunctionPtr m_update_func;
    }
    
    #else // --- Linux version
    
    // ===================================================================
// construction from config
// ===================================================================