
        
        //  16384 * sqrt(2) * sin(kPi/9) * 2 / 3
static const tran_high_t sinpi_1_9 = 5283;
static const tran_high_t sinpi_2_9 = 9929;
static const tran_high_t sinpi_3_9 = 13377;
static const tran_high_t sinpi_4_9 = 15212;
    
    
    {  friend inline bool operator== (const IntPoint& a, const IntPoint& b)
  {
    return a.X == b.X && a.Y == b.Y;
  }
  friend inline bool operator!= (const IntPoint& a, const IntPoint& b)
  {
    return a.X != b.X  || a.Y != b.Y; 
  }
};
//------------------------------------------------------------------------------
    
    #undef silk_SMLAWW
static OPUS_INLINE opus_int32 silk_SMLAWW_armv4(opus_int32 a, opus_int32 b,
 opus_int32 c)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
    '#silk_SMLAWW\n\t'
    'smull %0, %1, %2, %3\n\t'
    : '=&r'(rd_lo), '=&r'(rd_hi)
    : '%r'(b), 'r'(c)
  );
  return a+(rd_hi<<16)+(rd_lo>>16);
}
#define silk_SMLAWW(a, b, c) (silk_SMLAWW_armv4(a, b, c))
    
    /* a32 + (b32 * (opus_int32)((opus_int16)(c32))) >> 16 output have to be 32bit int */
#undef silk_SMLAWB
static OPUS_INLINE opus_int32 silk_SMLAWB_armv5e(opus_int32 a, opus_int32 b,
 opus_int16 c)
{
  int res;
  __asm__(
      '#silk_SMLAWB\n\t'
      'smlawb %0, %1, %2, %3\n\t'
      : '=r'(res)
      : 'r'(b), 'r'(c), 'r'(a)
  );
  return res;
}
#define silk_SMLAWB(a, b, c) (silk_SMLAWB_armv5e(a, b, c))
    
        ChangeConstants(m_radix, precision);
    
    unsigned int CalculatorHistory::AddItem(_In_ shared_ptr<HISTORYITEM> const& spHistoryItem)
{
    if (m_historyItems.size() >= m_maxHistorySize)
    {
        m_historyItems.erase(m_historyItems.begin());
    }
    }
    
    void CUnaryCommand::Accept(_In_ ISerializeCommandVisitor& commandVisitor)
{
    commandVisitor.Visit(*this);
}
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    
    {
    {  // The feature value for a feature in each row should be identical, as that is
  // how the dmatrix has been created
  for (int i = 0; i < page.Size(); ++i) {
    auto inst = page[i];
    for (int j = 1; j < inst.size(); ++j) {
      ASSERT_EQ(inst[0].fvalue, inst[j].fvalue);
    }
  }
}
}  // namespace xgboost

    
    
    {  for (auto i = 0ull; i < (*dmat)->Info().num_row_; i++) {
    for (auto j = 0ull; j < (*dmat)->Info().num_col_; j++) {
        auto col = column_matrix.GetColumn(j);
        EXPECT_EQ(gmat.index[i * (*dmat)->Info().num_col_ + j],
                  col.GetGlobalBinIdx(i));
    }
  }
  delete dmat;
}
    
    
    {/*!
 * \brief Macro to register objective function.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_OBJECTIVE(LinearRegression, 'reg:linear')
 * .describe('Linear regression objective')
 * .set_body([]() {
 *     return new RegLossObj(LossType::kLinearSquare);
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_OBJECTIVE(UniqueId, Name)                      \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::ObjFunctionReg &              \
  __make_ ## ObjFunctionReg ## _ ## UniqueId ## __ =                    \
      ::dmlc::Registry< ::xgboost::ObjFunctionReg>::Get()->__REGISTER__(Name)
}  // namespace xgboost
#endif  // XGBOOST_OBJECTIVE_H_

    
      static GPUDistribution Granular(GPUSet devices, int granularity) {
    return GPUDistribution(devices, granularity, 0, std::vector<size_t>());
  }