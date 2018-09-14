
        
        
    {  if (failed) throw std::runtime_error('parallel::for_each failed');
}
    
    CONFIG_BODY(bool, Bool)
CONFIG_BODY(char, Byte)
CONFIG_BODY(unsigned char, UByte)
CONFIG_BODY(int16_t, Int16)
CONFIG_BODY(uint16_t, UInt16)
CONFIG_BODY(int32_t, Int32)
CONFIG_BODY(uint32_t, UInt32)
CONFIG_BODY(int64_t, Int64)
CONFIG_BODY(uint64_t, UInt64)
CONFIG_BODY(double, Double)
CONFIG_BODY(std::string, String)
    
    req::ptr<File>
DataStreamWrapper::open(const String& filename, const String& /*mode*/,
                        int /*options*/,
                        const req::ptr<StreamContext>& /*context*/) {
    }
    
    #endif // incl_HPHP_DEBUGGABLE_H_

    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP { namespace FileUtil {
    }
    }
    
    // stb_compress* from stb.h - declaration
typedef unsigned int stb_uint;
typedef unsigned char stb_uchar;
stb_uint stb_compress(stb_uchar *out,stb_uchar *in,stb_uint len);
    
        // Setup GLUT display function
    // We will also call ImGui_ImplFreeGLUT_InstallFuncs() to get all the other functions installed for us, 
    // otherwise it is possible to install our own functions and call the imgui_impl_freeglut.h functions ourselves.
    glutDisplayFunc(glut_display_func);
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-06-12: DirectX12: Moved the ID3D12GraphicsCommandList* parameter from NewFrame() to RenderDrawData().
//  2018-06-08: Misc: Extracted imgui_impl_dx12.cpp/.h away from the old combined DX12+Win32 example.
//  2018-06-08: DirectX12: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle (to ease support for future multi-viewport).
//  2018-02-22: Merged into master with all Win32 code synchronized to other examples.
    
    #pragma once
#ifndef ROCKSDB_LITE
#include 'db/db_impl.h'
#include <vector>
#include <string>
    
    #ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif
    
    
    {
    {  // Get wal file in wal_dir
  if (dbname.compare(options.wal_dir) != 0) {
    if (!env->GetChildren(options.wal_dir, &files).ok()) {
      Error(options.info_log,
          'Error when reading %s dir\n',
          options.wal_dir.c_str());
      return;
    }
    wal_info.clear();
    for (std::string file : files) {
      if (ParseFileName(file, &number, &type)) {
        if (type == kLogFile) {
          env->GetFileSize(options.wal_dir + '/' + file, &file_size);
          char str[16];
          snprintf(str, sizeof(str), '%' PRIu64, file_size);
          wal_info.append(file).append(' size: ').
              append(str).append(' ; ');
        }
      }
    }
  }
  Header(options.info_log, 'Write Ahead Log file in %s: %s\n',
         options.wal_dir.c_str(), wal_info.c_str());
}
}  // namespace rocksdb

    
    class DB;
    
    int main() {
  Options options;
  options.create_if_missing = true;
  // Disable RocksDB background compaction.
  options.compaction_style = kCompactionStyleNone;
  // Small slowdown and stop trigger for experimental purpose.
  options.level0_slowdown_writes_trigger = 3;
  options.level0_stop_writes_trigger = 5;
  options.IncreaseParallelism(5);
  options.listeners.emplace_back(new FullCompactor(options));
    }
    
    #include <algorithm>
    
    static const uint8_t* kRangeLimit = kRangeLimitLut + 384;
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    #include <cmath>
    
      guetzli::Params params;
  params.butteraugli_target = static_cast<float>(
      guetzli::ButteraugliScoreForQuality(quality));
    
    #endif  // GUETZLI_JPEG_DATA_ENCODER_H_

    
      // Read sampling factors and quant table index for each component.
  std::vector<bool> ids_seen(256, false);
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    const int id = ReadUint8(data, pos);
    if (ids_seen[id]) {   // (cf. section B.2.2, syntax of Ci)
      fprintf(stderr, 'Duplicate ID %d in SOF.\n', id);
      jpg->error = JPEG_DUPLICATE_COMPONENT_ID;
      return false;
    }
    ids_seen[id] = true;
    jpg->components[i].id = id;
    int factor = ReadUint8(data, pos);
    int h_samp_factor = factor >> 4;
    int v_samp_factor = factor & 0xf;
    VERIFY_INPUT(h_samp_factor, 1, 15, SAMP_FACTOR);
    VERIFY_INPUT(v_samp_factor, 1, 15, SAMP_FACTOR);
    jpg->components[i].h_samp_factor = h_samp_factor;
    jpg->components[i].v_samp_factor = v_samp_factor;
    jpg->components[i].quant_idx = ReadUint8(data, pos);
    jpg->max_h_samp_factor = std::max(jpg->max_h_samp_factor, h_samp_factor);
    jpg->max_v_samp_factor = std::max(jpg->max_v_samp_factor, v_samp_factor);
  }
    
      // Cluster DC histograms.
  size_t num_dc_histo = ncomps;
  int dc_histo_indexes[kMaxComponents];
  std::vector<uint8_t> depths(ncomps * JpegHistogram::kSize);
  ClusterHistograms(&histograms[0], &num_dc_histo, dc_histo_indexes,
                    &depths[0]);
    
    /**
 * @namespace apollo::drivers::canbus
 * @brief apollo::drivers::canbus
 */
namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
      if (!is_started_) {
    AERROR << 'Esd can client has not been initiated! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  for (size_t i = 0; i < frames.size() && i < MAX_CAN_SEND_FRAME_LEN; ++i) {
    send_frames_[i].id = frames[i].id;
    send_frames_[i].len = frames[i].len;
    std::memcpy(send_frames_[i].data, frames[i].data, frames[i].len);
  }
    
    #include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
    
    
    {
    {
    {
    {
    {  std::vector<CanFrame> frames;
  int32_t num = 0;
  CanFrame frame;
  // frame.id = 0x60;
  // frame.len = 8;
  // frame.data[0] = 0;
  // frames.push_back(frame);
  // num = 1;
  EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
  EXPECT_EQ(hermes_can.Receive(&frames, &num), ErrorCode::OK);
}
*/
}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    
    {
    {    if (ret < 0) {
      AERROR << 'receive message failed, error code: ' << ret;
      return ErrorCode::CAN_CLIENT_ERROR_BASE;
    }
    if (recv_frames_[i].can_dlc != CANBUS_MESSAGE_LENGTH) {
      AERROR << 'recv_frames_[' << i
             << '].can_dlc = ' << recv_frames_[i].can_dlc
             << ', which is not equal to can message data length ('
             << CANBUS_MESSAGE_LENGTH << ').';
      return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
    }
    cf.id = recv_frames_[i].can_id;
    cf.len = recv_frames_[i].can_dlc;
    std::memcpy(cf.data, recv_frames_[i].data, recv_frames_[i].can_dlc);
    frames->push_back(cf);
  }
  return ErrorCode::OK;
}
    
    TEST(CanReceiverTest, ReceiveOne) {
  can::FakeCanClient can_client;
  MessageManager<::apollo::canbus::ChassisDetail> pm;
  CanReceiver<::apollo::canbus::ChassisDetail> receiver;
    }
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    /**
 * @class ProtocolData
 *
 * @brief This is the base class of protocol data.
 */
template <typename SensorType>
class ProtocolData {
 public:
  /**
   * @brief static function, used to calculate the checksum of input array.
   * @param input the pointer to the start position of input array
   * @param length the length of the input array
   * @return the value of checksum
   */
  static std::uint8_t CalculateCheckSum(const uint8_t *input,
                                        const uint32_t length);
  /**
   * @brief construct protocol data.
   */
  ProtocolData() = default;
    }
    
    #include <string>