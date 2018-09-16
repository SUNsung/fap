
        
        // Computes one set of 4x8 products of inputs and weights, adding to result.
// Horizontally adds 4 adjacent results, making 8x32-bit results.
// rep_input is assumed to be an 8x replicated set of 4x8-bit signed integers.
// Note that wi must previously have been re-organized with blocks of 4x8
// weights in contiguous memory.
// ones is a register of 16x16-bit values all equal to 1.
// Note: wi is incremented by the amount of data read.
// weights and reps are scratch registers.
// This function must be inlined with references in order for the compiler to
// correctly use the registers declared in the caller.
inline void MultiplyGroup(const __m256i& rep_input, const __m256i& ones,
                          const int8_t*& wi, __m256i& weights, __m256i& reps,
                          __m256i& result) {
  // Load a 4x8 block of weights.
  weights = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(wi));
  wi += kNumInputsPerRegister;
  // Normalize the signs on rep_input, weights, so weights is always +ve.
  reps = _mm256_sign_epi8(rep_input, weights);
  weights = _mm256_sign_epi8(weights, weights);
  // Multiply 32x8-bit reps by 32x8-bit weights to make 16x16-bit results,
  // with adjacent pairs added.
  weights = _mm256_maddubs_epi16(weights, reps);
  // Multiply 16x16-bit result by 16x16-bit ones to make 8x32-bit results,
  // with  adjacent pairs added. What we really want is a horizontal add of
  // 16+16=32 bit result, but there is no such instruction, so multiply by
  // 16-bit ones instead. It is probably faster than all the sign-extending,
  // permuting and adding that would otherwise be required.
  weights = _mm256_madd_epi16(weights, ones);
  result = _mm256_add_epi32(result, weights);
}
    
    // Config variables.
BOOL_VAR(equationdetect_save_bi_image, false, 'Save input bi image');
BOOL_VAR(equationdetect_save_spt_image, false, 'Save special character image');
BOOL_VAR(equationdetect_save_seed_image, false, 'Save the seed image');
BOOL_VAR(equationdetect_save_merged_image, false, 'Save the merged image');
    
    // Helper method to convert an orientation index to its value in degrees.
// The value represents the amount of clockwise rotation in degrees that must be
// applied for the text to be upright (readable).
TESS_API int OrientationIdToValue(const int& id);
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    namespace tesseract {
  class BoolParam;
  class DoubleParam;
  class IntParam;
  class StringParam;
  class Tesseract;
}
    
    ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
    /**
 * @class CanFrame
 * @brief The class which defines the information to send and receive.
 */
struct CanFrame {
  /// Message id
  uint32_t id;
  /// Message length
  uint8_t len;
  /// Message content
  uint8_t data[8];
  /// Time stamp
  struct timeval timestamp;
    }
    
    /**
 * @class CanClientFactory
 * @brief CanClientFactory inherites apollo::common::util::Facotory.
 */
class CanClientFactory
    : public apollo::common::util::Factory<CANCardParameter::CANCardBrand,
                                           CanClient> {
 public:
  /**
   * @brief Register the CAN clients of all brands. This function call the
   *        Function apollo::common::util::Factory::Register() for all of the
   *        CAN clients.
   */
  void RegisterCanClients();
    }
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
      int ret = setsockopt(dev_handler_, SOL_CAN_RAW, CAN_RAW_FILTER, &filter,
                       sizeof(filter));
  if (ret < 0) {
    AERROR << 'add receive msg id filter error code: ' << ret;
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    TEST(CanReceiverTest, ReceiveOne) {
  can::FakeCanClient can_client;
  MessageManager<::apollo::canbus::ChassisDetail> pm;
  CanReceiver<::apollo::canbus::ChassisDetail> receiver;
    }
    
      sender.AddMessage(1, &mpd);
  EXPECT_EQ(sender.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(sender.IsRunning());
  EXPECT_TRUE(sender.enable_log());
    
    const uint8_t BIT_MASK_1[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
const uint8_t BIT_MASK_0[] = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};
const uint8_t RANG_MASK_1_L[] = {0x01, 0x03, 0x07, 0x0F,
                                 0x1F, 0x3F, 0x7F, 0xFF};
const uint8_t RANG_MASK_0_L[] = {0xFE, 0XFC, 0xF8, 0xF0,
                                 0xE0, 0xC0, 0x80, 0x00};
    
    #endif  // MODULES_DRIVERS_CANBUS_COMMON_BYTE_H_
