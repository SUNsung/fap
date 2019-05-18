
        
          /*! \brief internal next function, inlined for fater processing. */
  inline bool Next_(void) {
    if (!base_->Next()) return false;
    const DataInst &src = base_->Value();
    this->SetOutImg(src);
    out_.data.resize(2);
    out_.data[0] = outimg_;
    out_.data[1] = src.data[1];
    out_.index = src.index;
    out_.extra_data = src.extra_data;
    return true;
  }
  /*!
   * \brief Set the output image, after augmentation and normalization.
   * \param src The source image.
   */
  inline void SetOutImg(const DataInst &src) {
    using namespace mshadow::expr;  // NOLINT(*)
    }
    
    struct quantize_2bit {
  MSHADOW_XINLINE static void Map(int out_block_id,
                                  int original_size,
                                  float *out,
                                  float *grad,
                                  float *residual,
                                  const float neg_threshold,
                                  const float pos_threshold) {
    // this block contains the compressed representation of
    // upto 16 values starting from out_block_id*16
    float *compr_block = out + out_block_id;
    // init to 0
    *compr_block = 0;
    // start and end are indices in original grad array
    const int start = out_block_id << 4;
    const int end = (start + 16 <= original_size) ? start + 16 : original_size;
    // cast as char* to manipulate bits of float addresses
    char *block_ptr = reinterpret_cast < char * > (compr_block);
    // masks to set bits when value meets pos_threshold
    // 0xc0 is mask when value is to be represented by the first two bits in a char*
    // 0xc0 means first two bits are set to 11
    const uint8_t posbits[] = {0xc0, 0x30, 0x0c, 0x03};
    // masks to set bits when value meets neg_threshold
    const uint8_t negbits[] = {0x80, 0x20, 0x08, 0x02};
    for (int i = start; i < end; i++) {
      // adds offset to reach appropriate byte
      char *curr_byte = block_ptr + ((i - start) >> 2);
      // adds gradient to existing residual to get updated grad
      residual[i] += grad[i];
      if (residual[i] >= pos_threshold) {
        // set data to 11
        *curr_byte |= posbits[(i & 3)];
        // reduce residual by pos_threshold
        residual[i] -= pos_threshold;
      } else if (residual[i] <= neg_threshold) {
        // set data to 10
        *curr_byte |= negbits[(i & 3)];
        residual[i] -= neg_threshold;
      }
    }
  }
};
    
    )code' ADD_FILELINE)
.set_attr<FCompute>('FCompute<cpu>', DivSqrtDimForward_<cpu>)
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseNone{'_contrib_div_sqrt_dim'});
    
    namespace mxnet {
namespace op {
template<>
Operator* CreateOp<cpu>(CropParam param) {
  return new CropOp<cpu>(param);
}
    }
    }
    
    MXNET_REGISTER_OP_PROPERTY(_NDArray, NDArrayOpProp)
.describe('Stub for implementing an operator implemented in native frontend language with ndarray.')
.add_argument('data', 'NDArray-or-Symbol[]', 'Input data for the custom operator.')
.add_arguments(NDArrayOpParam::__FIELDS__());
    
    
    
    
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    namespace HPHP {
    }
    
    template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 0, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 0, rate, fillCols);
}
    
    
    {}

    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  String read() override;
  String read(int64_t length) override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seekable() override { return true;}
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
  bool stat(struct stat *sb) override;
    
      virtual void startup() = 0;
    
    #include <cstring>
    
      virtual void process() CXX11_OVERRIDE;
    
        // output changed array
    std::cout << object << '\n';
    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    using json = nlohmann::json;