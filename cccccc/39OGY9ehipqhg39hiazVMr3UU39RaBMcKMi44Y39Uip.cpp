
        
        
    {        return dlsym(h, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) GetProcAddress(name)
#endif
    
    TEST_F(UnicharcompressTest, DoesMarathi) {
  LOG(INFO) << 'Testing mar';
  LoadUnicharset('mar.unicharset');
  ExpectCorrect('mar');
}
    
    // dims=[5, 4, 3, 2]->[4, 3, 5, 2]
TEST_F(MatrixTest, RotatingTranspose_0_2) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 0, 2, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][24, 25][48, 49][72, 73][96, 97]]
  //                 [[2, 3][26, 27][50, 51][74, 75][98, 99]]
  //                 [[4, 5][28, 29][52, 53][76, 77][100, 101]]]
  //                [[[6, 7]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(24, m(1, 0));
  EXPECT_EQ(25, m(1, 1));
  EXPECT_EQ(96, m(4, 0));
  EXPECT_EQ(97, m(4, 1));
  EXPECT_EQ(2, m(5, 0));
  EXPECT_EQ(6, m(15, 0));
}
    
    ResultIterator::ResultIterator(const LTRResultIterator &resit)
    : LTRResultIterator(resit) {
  in_minor_direction_ = false;
  at_beginning_of_minor_run_ = false;
  preserve_interword_spaces_ = false;
    }
    
    
    {  int32_t local_cost_;    // Cost of this point on its own.
  int32_t total_cost_;    // Sum of all costs in best path to here.
                        // During cost calculations local_cost is excluded.
  int32_t total_steps_;   // Number of steps in best path to here.
  const DPPoint* best_prev_;  // Pointer to prev point in best path from here.
  // Information for computing the variance part of the cost.
  int32_t n_;             // Number of steps in best path to here for variance.
  int32_t sig_x_;         // Sum of step sizes for computing variance.
  int64_t sig_xsq_;       // Sum of squares of steps for computing variance.
};
    
    
    { private:
  double total_weight;         // no of elements or sum of weights.
  double sigx;                 // sum of x
  double sigy;                 // sum of y
  double sigxx;                // sum x squared
  double sigxy;                // sum of xy
  double sigyy;                // sum y squared
};
    
    
    {  low = 0;
  if (fc.y () == 0) {
    if (fc.x () >= 0)
      dir = 0;
    else
      dir = MODULUS / 2;
    return;
  }
  high = MODULUS;
  do {
    current = (high + low) / 2;
    if (dirtab[current] * fc >= 0)
      low = current;
    else
      high = current;
  }
  while (high - low > 1);
  dir = low;
}

    
    
/**********************************************************************
 * ROW::move
 *
 * Reposition row by vector
 **********************************************************************/
    
    /**
 * Possible types for a POLY_BLOCK or ColPartition.
 * Must be kept in sync with kPBColors in polyblk.cpp and PTIs*Type functions
 * below, as well as kPolyBlockNames in publictypes.cpp.
 * Used extensively by ColPartition, and POLY_BLOCK.
*/
enum PolyBlockType {
  PT_UNKNOWN,        // Type is not yet known. Keep as the first element.
  PT_FLOWING_TEXT,   // Text that lives inside a column.
  PT_HEADING_TEXT,   // Text that spans more than one column.
  PT_PULLOUT_TEXT,   // Text that is in a cross-column pull-out region.
  PT_EQUATION,       // Partition belonging to an equation region.
  PT_INLINE_EQUATION,  // Partition has inline equation.
  PT_TABLE,          // Partition belonging to a table region.
  PT_VERTICAL_TEXT,  // Text-line runs vertically.
  PT_CAPTION_TEXT,   // Text that belongs to an image.
  PT_FLOWING_IMAGE,  // Image that lives inside a column.
  PT_HEADING_IMAGE,  // Image that spans more than one column.
  PT_PULLOUT_IMAGE,  // Image that is in a cross-column pull-out region.
  PT_HORZ_LINE,      // Horizontal Line.
  PT_VERT_LINE,      // Vertical Line.
  PT_NOISE,          // Lies outside of any column.
  PT_COUNT
};
    
      /// Set the timer's expiry time relative to now.
  /**
   * This function sets the expiry time. Any pending asynchronous wait
   * operations will be cancelled. The handler for each cancelled operation will
   * be invoked with the boost::asio::error::operation_aborted error code.
   *
   * @param expiry_time The expiry time to be used for the timer.
   *
   * @return The number of asynchronous operations that were cancelled.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @note If the timer has already expired when expires_from_now() is called,
   * then the handlers for asynchronous wait operations will:
   *
   * @li have already been invoked; or
   *
   * @li have been queued for invocation in the near future.
   *
   * These handlers can no longer be cancelled, and therefore are passed an
   * error code that indicates the successful completion of the wait operation.
   */
  std::size_t expires_from_now(const duration& expiry_time)
  {
    boost::system::error_code ec;
    std::size_t s = this->service.expires_from_now(
        this->implementation, expiry_time, ec);
    boost::asio::detail::throw_error(ec, 'expires_from_now');
    return s;
  }
    
      /// Construct to represent a single non-modifiable buffer.
  explicit const_buffers_1(const const_buffer& b)
    : const_buffer(b)
  {
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Return a pointer to the beginning of the unread data.
  mutable_buffer data()
  {
    return boost::asio::buffer(buffer_) + begin_offset_;
  }
    
        // Find the next context with the same key.
    Value* next_by_key() const
    {
      context* elem = next_;
      while (elem)
      {
        if (elem->key_ == key_)
          return elem->value_;
        elem = elem->next_;
      }
      return 0;
    }
    
    #endif // BOOST_ASIO_DETAIL_EVENT_HPP

    
    #if !defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
      // Constructor for a half fenced block.
  explicit gcc_arm_fenced_block(half_t)
  {
  }
    
    class winrt_buffer_impl :
  public Microsoft::WRL::RuntimeClass<
    Microsoft::WRL::RuntimeClassFlags<
      Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
    ABI::Windows::Storage::Streams::IBuffer,
    Windows::Storage::Streams::IBufferByteAccess>
{
public:
  explicit winrt_buffer_impl(const boost::asio::const_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = boost::asio::buffer_size(b);
    capacity_ = boost::asio::buffer_size(b);
  }
    }
    
    // Decodes one 8x8 block of DCT coefficients from the bit stream.
bool DecodeDCTBlock(const HuffmanTableEntry* dc_huff,
                    const HuffmanTableEntry* ac_huff,
                    int Ss, int Se, int Al,
                    int* eobrun,
                    BitReaderState* br,
                    JPEGData* jpg,
                    coeff_t* last_dc_coeff,
                    coeff_t* coeffs) {
  int s;
  int r;
  bool eobrun_allowed = Ss > 0;
  if (Ss == 0) {
    s = ReadSymbol(dc_huff, br);
    if (s >= kJpegDCAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for DC coefficient.\n', s);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    if (s > 0) {
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
    }
    s += *last_dc_coeff;
    const int dc_coeff = SignedLeftshift(s, Al);
    coeffs[0] = dc_coeff;
    if (dc_coeff != coeffs[0]) {
      fprintf(stderr, 'Invalid DC coefficient %d\n', dc_coeff);
      jpg->error = JPEG_NON_REPRESENTABLE_DC_COEFF;
      return false;
    }
    *last_dc_coeff = s;
    ++Ss;
  }
  if (Ss > Se) {
    return true;
  }
  if (*eobrun > 0) {
    --(*eobrun);
    return true;
  }
  for (int k = Ss; k <= Se; k++) {
    s = ReadSymbol(ac_huff, br);
    if (s >= kJpegHuffmanAlphabetSize) {
      fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
              s, k);
      jpg->error = JPEG_INVALID_SYMBOL;
      return false;
    }
    r = s >> 4;
    s &= 15;
    if (s > 0) {
      k += r;
      if (k > Se) {
        fprintf(stderr, 'Out-of-band coefficient %d band was %d-%d\n',
                k, Ss, Se);
        jpg->error = JPEG_OUT_OF_BAND_COEFF;
        return false;
      }
      if (s + Al >= kJpegDCAlphabetSize) {
        fprintf(stderr, 'Out of range AC coefficient value: s=%d Al=%d k=%d\n',
                s, Al, k);
        jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
        return false;
      }
      r = br->ReadBits(s);
      s = HuffExtend(r, s);
      coeffs[kJPEGNaturalOrder[k]] = SignedLeftshift(s, Al);
    } else if (r == 15) {
      k += 15;
    } else {
      *eobrun = 1 << r;
      if (r > 0) {
        if (!eobrun_allowed) {
          fprintf(stderr, 'End-of-block run crossing DC coeff.\n');
          jpg->error = JPEG_EOB_RUN_TOO_LONG;
          return false;
        }
        *eobrun += br->ReadBits(r);
      }
      break;
    }
  }
  --(*eobrun);
  return true;
}
    
    namespace guetzli {
    }
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    
    {}  // namespace guetzli
    
      std::vector<uint8_t> ToSRGB(int xmin, int ymin, int xsize, int ysize) const;
    
    void AbstractAuthResolver::setDefaultCred(std::string user,
                                          std::string password)
{
  defaultUser_ = std::move(user);
  defaultPassword_ = std::move(password);
}
    
      PeerConnection* peerConnection_;
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    bool AbstractOptionHandler::isHidden() const { return flags_ & FLAG_HIDDEN; }
    
      virtual void setCumulative(bool f) CXX11_OVERRIDE;
    
    AnnounceList::AnnounceList(
    const std::deque<std::shared_ptr<AnnounceTier>>& announceTiers)
    : tiers_(announceTiers), currentTrackerInitialized_(false)
{
  resetIterator();
}
    
    class AnnounceList {
public:
private:
  std::deque<std::shared_ptr<AnnounceTier>> tiers_;
  std::deque<std::shared_ptr<AnnounceTier>>::iterator currentTier_;
  std::deque<std::string>::iterator currentTracker_;
  bool currentTrackerInitialized_;
    }
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }