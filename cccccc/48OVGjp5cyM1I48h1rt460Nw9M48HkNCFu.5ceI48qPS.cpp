
        
        cv::Mat dls::skewsymm(const cv::Mat * X1)
{
    cv::MatConstIterator_<double> it = X1->begin<double>();
    return (cv::Mat_<double>(3,3) <<        0, -*(it+2),  *(it+1),
                                      *(it+2),        0, -*(it+0),
                                     -*(it+1),  *(it+0),       0);
}
    
    
    {        findLinesCrossPoint(origin1, dir1, origin2, dir2, corners[i]);
    }
    
    #include 'opencv2/core/bufferpool.hpp'
    
        if (new_rows != 0 && new_rows != rows)
    {
        int total_size = total_width * rows;
    }
    
      Status Echo(ServerContext* context, const EchoRequest* request,
              EchoResponse* response) override {
    {
      std::unique_lock<std::mutex> lock(mu_);
      ++request_count_;
    }
    return TestServiceImpl::Echo(context, request, response);
  }
    
    #include <cassert>
    
      // Allow a limit on number of messages in a stream
  int messages_per_stream_;
  int messages_issued_;
    
    #endif /* GRPC_CORE_LIB_COMPRESSION_MESSAGE_COMPRESS_H */

    
    
    
    namespace routeguide {
class Feature;
    }
    
    
float ConvertToRadians(float num) {
  return num * 3.1415926 /180;
}
    
    // Reads the Start of Scan (SOS) marker segment and fills in *scan_info with the
// parsed data.
bool ProcessSOS(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  const size_t start_pos = *pos;
  VERIFY_LEN(3);
  size_t marker_len = ReadUint16(data, pos);
  int comps_in_scan = ReadUint8(data, pos);
  VERIFY_INPUT(comps_in_scan, 1, static_cast<int>(jpg->components.size()),
               COMPS_IN_SCAN);
    }
    
    
    {}  // namespace guetzli
    
    #include 'guetzli/gamma_correct.h'
    
      tmp0 = in[stride];
  tmp1 = kIDCTMatrix[ 1] * tmp0;
  tmp2 = kIDCTMatrix[ 9] * tmp0;
  tmp3 = kIDCTMatrix[17] * tmp0;
  tmp4 = kIDCTMatrix[25] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    namespace guetzli {
    }
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg);
    
    // Creates a JPEG from the rgb pixel data. Returns true on success.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg);
    
    namespace guetzli {
    }
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    // Backup and restore just enough data to be able to use IsItemHovered() on item A after another B in the same window has overwritten the data.  
struct ImGuiItemHoveredDataBackup
{
    ImGuiID                 LastItemId;
    ImGuiItemStatusFlags    LastItemStatusFlags;
    ImRect                  LastItemRect;
    ImRect                  LastItemDisplayRect;
    }