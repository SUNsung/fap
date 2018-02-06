
        
        #endif  // TENSORFLOW_COMMON_RUNTIME_SESSION_FACTORY_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace internal {
template <typename Scalar>
struct functor_traits<scalar_clip_op<Scalar> > {
  enum {
    Cost = NumTraits<Scalar>::AddCost * 3,
    PacketAccess = packet_traits<Scalar>::HasMax &&
                   packet_traits<Scalar>::HasMin &&
                   packet_traits<Scalar>::HasNegate
  };
};
}  // namespace internal
    
        DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory( &sd, sizeof( sd ) );
    sd.BufferCount = 1;
    sd.BufferDesc.Width = width;
    sd.BufferDesc.Height = height;
#ifdef CHECK_NV12
    sd.BufferDesc.Format = DXGI_FORMAT_NV12;
#else
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
#endif
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = NULL; //g_hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    
    #include '../perf_precomp.hpp'
#include 'opencv2/ts/ocl_perf.hpp'
    
        f1coeff[1] = 2*D[1][6] - 2*D[1][8] + 2*D[5][6] - 2*D[5][8] + 2*D[6][1] + 2*D[6][5] + 2*D[6][9] - 2*D[8][1] - 2*D[8][5] - 2*D[8][9] + 2*D[9][6] - 2*D[9][8]; // constant term
    f1coeff[2] = 6*D[1][2] + 6*D[1][4] + 6*D[2][1] - 6*D[2][5] - 6*D[2][9] + 6*D[4][1] - 6*D[4][5] - 6*D[4][9] - 6*D[5][2] - 6*D[5][4] - 6*D[9][2] - 6*D[9][4]; // s1^2  * s2
    f1coeff[3] = 4*D[1][7] - 4*D[1][3] + 8*D[2][6] - 8*D[2][8] - 4*D[3][1] + 4*D[3][5] + 4*D[3][9] + 8*D[4][6] - 8*D[4][8] + 4*D[5][3] - 4*D[5][7] + 8*D[6][2] + 8*D[6][4] + 4*D[7][1] - 4*D[7][5] - 4*D[7][9] - 8*D[8][2] - 8*D[8][4] + 4*D[9][3] - 4*D[9][7]; // s1 * s2
    f1coeff[4] = 4*D[1][2] - 4*D[1][4] + 4*D[2][1] - 4*D[2][5] - 4*D[2][9] + 8*D[3][6] - 8*D[3][8] - 4*D[4][1] + 4*D[4][5] + 4*D[4][9] - 4*D[5][2] + 4*D[5][4] + 8*D[6][3] + 8*D[6][7] + 8*D[7][6] - 8*D[7][8] - 8*D[8][3] - 8*D[8][7] - 4*D[9][2] + 4*D[9][4]; //s1 * s3
    f1coeff[5] = 8*D[2][2] - 8*D[3][3] - 8*D[4][4] + 8*D[6][6] + 8*D[7][7] - 8*D[8][8]; // s2 * s3
    f1coeff[6] = 4*D[2][6] - 2*D[1][7] - 2*D[1][3] + 4*D[2][8] - 2*D[3][1] + 2*D[3][5] - 2*D[3][9] + 4*D[4][6] + 4*D[4][8] + 2*D[5][3] + 2*D[5][7] + 4*D[6][2] + 4*D[6][4] - 2*D[7][1] + 2*D[7][5] - 2*D[7][9] + 4*D[8][2] + 4*D[8][4] - 2*D[9][3] - 2*D[9][7]; // s2^2 * s3
    f1coeff[7] = 2*D[2][5] - 2*D[1][4] - 2*D[2][1] - 2*D[1][2] - 2*D[2][9] - 2*D[4][1] + 2*D[4][5] - 2*D[4][9] + 2*D[5][2] + 2*D[5][4] - 2*D[9][2] - 2*D[9][4]; //s2^3
    f1coeff[8] = 4*D[1][9] - 4*D[1][1] + 8*D[3][3] + 8*D[3][7] + 4*D[5][5] + 8*D[7][3] + 8*D[7][7] + 4*D[9][1] - 4*D[9][9]; // s1 * s3^2
    f1coeff[9] = 4*D[1][1] - 4*D[5][5] - 4*D[5][9] + 8*D[6][6] - 8*D[6][8] - 8*D[8][6] + 8*D[8][8] - 4*D[9][5] - 4*D[9][9]; // s1
    f1coeff[10] = 2*D[1][3] + 2*D[1][7] + 4*D[2][6] - 4*D[2][8] + 2*D[3][1] + 2*D[3][5] + 2*D[3][9] - 4*D[4][6] + 4*D[4][8] + 2*D[5][3] + 2*D[5][7] + 4*D[6][2] - 4*D[6][4] + 2*D[7][1] + 2*D[7][5] + 2*D[7][9] - 4*D[8][2] + 4*D[8][4] + 2*D[9][3] + 2*D[9][7]; // s3
    f1coeff[11] = 2*D[1][2] + 2*D[1][4] + 2*D[2][1] + 2*D[2][5] + 2*D[2][9] - 4*D[3][6] + 4*D[3][8] + 2*D[4][1] + 2*D[4][5] + 2*D[4][9] + 2*D[5][2] + 2*D[5][4] - 4*D[6][3] + 4*D[6][7] + 4*D[7][6] - 4*D[7][8] + 4*D[8][3] - 4*D[8][7] + 2*D[9][2] + 2*D[9][4]; // s2
    f1coeff[12] = 2*D[2][9] - 2*D[1][4] - 2*D[2][1] - 2*D[2][5] - 2*D[1][2] + 4*D[3][6] + 4*D[3][8] - 2*D[4][1] - 2*D[4][5] + 2*D[4][9] - 2*D[5][2] - 2*D[5][4] + 4*D[6][3] + 4*D[6][7] + 4*D[7][6] + 4*D[7][8] + 4*D[8][3] + 4*D[8][7] + 2*D[9][2] + 2*D[9][4]; // s2 * s3^2
    f1coeff[13] = 6*D[1][6] - 6*D[1][8] - 6*D[5][6] + 6*D[5][8] + 6*D[6][1] - 6*D[6][5] - 6*D[6][9] - 6*D[8][1] + 6*D[8][5] + 6*D[8][9] - 6*D[9][6] + 6*D[9][8]; // s1^2
    f1coeff[14] = 2*D[1][8] - 2*D[1][6] + 4*D[2][3] + 4*D[2][7] + 4*D[3][2] - 4*D[3][4] - 4*D[4][3] - 4*D[4][7] - 2*D[5][6] + 2*D[5][8] - 2*D[6][1] - 2*D[6][5] + 2*D[6][9] + 4*D[7][2] - 4*D[7][4] + 2*D[8][1] + 2*D[8][5] - 2*D[8][9] + 2*D[9][6] - 2*D[9][8]; // s3^2
    f1coeff[15] = 2*D[1][8] - 2*D[1][6] - 4*D[2][3] + 4*D[2][7] - 4*D[3][2] - 4*D[3][4] - 4*D[4][3] + 4*D[4][7] + 2*D[5][6] - 2*D[5][8] - 2*D[6][1] + 2*D[6][5] - 2*D[6][9] + 4*D[7][2] + 4*D[7][4] + 2*D[8][1] - 2*D[8][5] + 2*D[8][9] - 2*D[9][6] + 2*D[9][8]; // s2^2
    f1coeff[16] = 2*D[3][9] - 2*D[1][7] - 2*D[3][1] - 2*D[3][5] - 2*D[1][3] - 2*D[5][3] - 2*D[5][7] - 2*D[7][1] - 2*D[7][5] + 2*D[7][9] + 2*D[9][3] + 2*D[9][7]; // s3^3
    f1coeff[17] = 4*D[1][6] + 4*D[1][8] + 8*D[2][3] + 8*D[2][7] + 8*D[3][2] + 8*D[3][4] + 8*D[4][3] + 8*D[4][7] - 4*D[5][6] - 4*D[5][8] + 4*D[6][1] - 4*D[6][5] - 4*D[6][9] + 8*D[7][2] + 8*D[7][4] + 4*D[8][1] - 4*D[8][5] - 4*D[8][9] - 4*D[9][6] - 4*D[9][8]; // s1 * s2 * s3
    f1coeff[18] = 4*D[1][5] - 4*D[1][1] + 8*D[2][2] + 8*D[2][4] + 8*D[4][2] + 8*D[4][4] + 4*D[5][1] - 4*D[5][5] + 4*D[9][9]; // s1 * s2^2
    f1coeff[19] = 6*D[1][3] + 6*D[1][7] + 6*D[3][1] - 6*D[3][5] - 6*D[3][9] - 6*D[5][3] - 6*D[5][7] + 6*D[7][1] - 6*D[7][5] - 6*D[7][9] - 6*D[9][3] - 6*D[9][7]; // s1^2 * s3
    f1coeff[20] = 4*D[1][1] - 4*D[1][5] - 4*D[1][9] - 4*D[5][1] + 4*D[5][5] + 4*D[5][9] - 4*D[9][1] + 4*D[9][5] + 4*D[9][9]; // s1^3
    
    
    {    return 3;
  }
    
        // find corner idx
    for(size_t i = 0; i < contour.size(); i++)
    {
        double dist = norm(contour[i] - point);
        if(dist < min_dist)
        {
            min_dist = dist;
            min_idx = (int)i;
        }
    }
    CV_Assert(min_idx >= 0);
    
            Mat_<double> rvec1(3, 1), tvec1(3, 1), rvec2(3, 1), tvec2(3, 1);
    
    // Returns ceil(a/b).
inline int DivCeil(int a, int b) {
  return (a + b - 1) / b;
}
    
    
    {}  // namespace
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    void ComputeBlockIDCT(const coeff_t* block, uint8_t* out) {
  coeff_t colidcts[kDCTBlockSize];
  const int kColScale = 11;
  const int kColRound = 1 << (kColScale - 1);
  for (int x = 0; x < 8; ++x) {
    int colbuf[8] = { 0 };
    Compute1dIDCT(&block[x], 8, colbuf);
    for (int y = 0; y < 8; ++y) {
      colidcts[8 * y + x] = (colbuf[y] + kColRound) >> kColScale;
    }
  }
  const int kRowScale = 18;
  const int kRowRound = 257 << (kRowScale - 1);  // includes offset by 128
  for (int y = 0; y < 8; ++y) {
    const int rowidx = 8 * y;
    int rowbuf[8] = { 0 };
    Compute1dIDCT(&colidcts[rowidx], 1, rowbuf);
    for (int x = 0; x < 8; ++x) {
      out[rowidx + x] =
          std::max(0, std::min(255, (rowbuf[x] + kRowRound) >> kRowScale));
    }
  }
}
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
    
    {  return total_size;
}
    
    static const int kJpegHuffmanRootTableBits = 8;
// Maximum huffman lookup table size.
// According to zlib/examples/enough.c, 758 entries are always enough for
// an alphabet of 257 symbols (256 + 1 special symbol for the all 1s code) and
// max bit length 16 if the root table has 8 bits.
static const int kJpegHuffmanLutSize = 758;
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    /**
 * Check whether 'path' starts with 'prefix'.
 * That is, if prefix has n path elements, then the first n elements of
 * path must be the same as prefix.
 *
 * There is a special case if prefix ends with a slash:
 * /foo/bar/ is not a prefix of /foo/bar, but both /foo/bar and /foo/bar/
 * are prefixes of /foo/bar/baz.
 */
bool starts_with(const path& p, const path& prefix);
    
    struct HugePageSize : private boost::totally_ordered<HugePageSize> {
  explicit HugePageSize(size_t s) : size(s) {}
    }
    
        // Enqueue an empty string and wake the I/O thread.
    // The empty string ensures that the I/O thread will break out of its wait
    // loop and increment the ioThreadCounter, even if there is no other work
    // to do.
    data->getCurrentQueue()->emplace_back();
    messageReady_.notify_one();
    
    
    {    return fileWriterFactory_.processOption(name, value);
  }
    
    namespace folly {
    }
    
      /**
   * Update the LogHandlers attached to this LogCategory by replacing
   * currently attached handlers with new LogHandler objects.
   *
   * The handlerMap argument is a map of (old_handler -> new_handler)
   * If any of the LogHandlers currently attached to this category are found in
   * the handlerMap, replace them with the new handler indicated in the map.
   *
   * This is used when the LogHandler configuration is changed requiring one or
   * more LogHandler objects to be replaced with new ones.
   */
  void updateHandlers(const std::unordered_map<
                      std::shared_ptr<LogHandler>,
                      std::shared_ptr<LogHandler>>& handlerMap);
    
    bool LogCategoryConfig::operator!=(const LogCategoryConfig& other) const {
  return !(*this == other);
}
    
    bool LogConfig::operator==(const LogConfig& other) const {
  return handlerConfigs_ == other.handlerConfigs_ &&
      categoryConfigs_ == other.categoryConfigs_;
}
    
      bool operator==(const LogConfig& other) const;
  bool operator!=(const LogConfig& other) const;
    
    /**
 * Parse a LogLevel from a JSON value.
 *
 * This accepts the log level either as an integer value or a string that can
 * be parsed with stringToLogLevel()
 *
 * On success updates the result parameter and returns true.
 * Returns false if the input is not a string or integer.
 * Throws a LogConfigParseError on other errors.
 */
bool parseJsonLevel(
    const dynamic& value,
    StringPiece categoryName,
    LogLevel& result) {
  if (value.isString()) {
    auto levelString = value.asString();
    try {
      result = stringToLogLevel(levelString);
      return true;
    } catch (const std::exception& ex) {
      throw LogConfigParseError{to<string>(
          'invalid log level \'',
          levelString,
          '\' for category \'',
          categoryName,
          '\'')};
    }
  } else if (value.isInt()) {
    auto level = static_cast<LogLevel>(value.asInt());
    if (level < LogLevel::MIN_LEVEL || level > LogLevel::MAX_LEVEL) {
      throw LogConfigParseError{to<string>(
          'invalid log level ',
          value.asInt(),
          ' for category \'',
          categoryName,
          '\': outside of valid range')};
    }
    result = level;
    return true;
  }
    }
    
      bool isMetadataGetMode() const { return metadataGetMode_; }
    
    public:
  AbstractProxyResponseCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      const std::shared_ptr<HttpConnection>& httpConnection, DownloadEngine* e,
      const std::shared_ptr<SocketCore>& s);
    
      void reconfigure(const std::vector<std::vector<std::string>>& announceList);
  void reconfigure(const std::string& url);
    
    #endif // D_ANNOUNCE_TIER_H
