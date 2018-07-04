
        
          virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Clipboard);
};
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.setListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardSetListSyncFunction);
};
    
    // For desktop capture APIs
#include 'base/base64.h'
#include 'base/strings/string16.h'
#include 'base/strings/utf_string_conversions.h'
#include 'chrome/browser/media/webrtc/desktop_media_list_observer.h'
#include 'chrome/browser/media/webrtc/desktop_streams_registry.h'
#include 'chrome/browser/media/webrtc/media_capture_devices_dispatcher.h'
#include 'chrome/browser/media/webrtc/native_desktop_media_list.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_process_host.h'
#include 'content/public/browser/web_contents.h'
#include 'third_party/webrtc/modules/desktop_capture/desktop_capture_options.h'
#include 'third_party/webrtc/modules/desktop_capture/desktop_capturer.h'
#include 'ui/gfx/codec/png_codec.h'
#include 'ui/gfx/image/image.h'
#include 'ui/gfx/image/image_skia.h'
    
    bool NwShellOpenExternalFunction::RunNWSync(base::ListValue* response, std::string* error) {
  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallStaticMethod(render_frame_host(), 'Shell', 'OpenExternal', *args_);
  return true;
}
    
        state->preFilterType = CV_STEREO_BM_XSOBEL; //CV_STEREO_BM_NORMALIZED_RESPONSE;
    state->preFilterSize = 9;
    state->preFilterCap = 31;
    state->SADWindowSize = 15;
    state->minDisparity = 0;
    state->numberOfDisparities = numberOfDisparities > 0 ? numberOfDisparities : 64;
    state->textureThreshold = 10;
    state->uniquenessRatio = 15;
    state->speckleRange = state->speckleWindowSize = 0;
    state->trySmallerWindows = 0;
    state->roi1 = state->roi2 = cvRect(0,0,0,0);
    state->disp12MaxDiff = -1;
    
    #ifdef HAVE_CLAMDBLAS
    
    using namespace cv::ocl::runtime;
    
    /* [-255..255].^2 */
const ushort g_8x16uSqrTab[] =
{
    65025, 64516, 64009, 63504, 63001, 62500, 62001, 61504, 61009, 60516, 60025, 59536,
    59049, 58564, 58081, 57600, 57121, 56644, 56169, 55696, 55225, 54756, 54289, 53824,
    53361, 52900, 52441, 51984, 51529, 51076, 50625, 50176, 49729, 49284, 48841, 48400,
    47961, 47524, 47089, 46656, 46225, 45796, 45369, 44944, 44521, 44100, 43681, 43264,
    42849, 42436, 42025, 41616, 41209, 40804, 40401, 40000, 39601, 39204, 38809, 38416,
    38025, 37636, 37249, 36864, 36481, 36100, 35721, 35344, 34969, 34596, 34225, 33856,
    33489, 33124, 32761, 32400, 32041, 31684, 31329, 30976, 30625, 30276, 29929, 29584,
    29241, 28900, 28561, 28224, 27889, 27556, 27225, 26896, 26569, 26244, 25921, 25600,
    25281, 24964, 24649, 24336, 24025, 23716, 23409, 23104, 22801, 22500, 22201, 21904,
    21609, 21316, 21025, 20736, 20449, 20164, 19881, 19600, 19321, 19044, 18769, 18496,
    18225, 17956, 17689, 17424, 17161, 16900, 16641, 16384, 16129, 15876, 15625, 15376,
    15129, 14884, 14641, 14400, 14161, 13924, 13689, 13456, 13225, 12996, 12769, 12544,
    12321, 12100, 11881, 11664, 11449, 11236, 11025, 10816, 10609, 10404, 10201, 10000,
     9801,  9604,  9409,  9216,  9025,  8836,  8649,  8464,  8281,  8100,  7921,  7744,
     7569,  7396,  7225,  7056,  6889,  6724,  6561,  6400,  6241,  6084,  5929,  5776,
     5625,  5476,  5329,  5184,  5041,  4900,  4761,  4624,  4489,  4356,  4225,  4096,
     3969,  3844,  3721,  3600,  3481,  3364,  3249,  3136,  3025,  2916,  2809,  2704,
     2601,  2500,  2401,  2304,  2209,  2116,  2025,  1936,  1849,  1764,  1681,  1600,
     1521,  1444,  1369,  1296,  1225,  1156,  1089,  1024,   961,   900,   841,   784,
      729,   676,   625,   576,   529,   484,   441,   400,   361,   324,   289,   256,
      225,   196,   169,   144,   121,   100,    81,    64,    49,    36,    25,    16,
        9,     4,     1,     0,     1,     4,     9,    16,    25,    36,    49,    64,
       81,   100,   121,   144,   169,   196,   225,   256,   289,   324,   361,   400,
      441,   484,   529,   576,   625,   676,   729,   784,   841,   900,   961,  1024,
     1089,  1156,  1225,  1296,  1369,  1444,  1521,  1600,  1681,  1764,  1849,  1936,
     2025,  2116,  2209,  2304,  2401,  2500,  2601,  2704,  2809,  2916,  3025,  3136,
     3249,  3364,  3481,  3600,  3721,  3844,  3969,  4096,  4225,  4356,  4489,  4624,
     4761,  4900,  5041,  5184,  5329,  5476,  5625,  5776,  5929,  6084,  6241,  6400,
     6561,  6724,  6889,  7056,  7225,  7396,  7569,  7744,  7921,  8100,  8281,  8464,
     8649,  8836,  9025,  9216,  9409,  9604,  9801, 10000, 10201, 10404, 10609, 10816,
    11025, 11236, 11449, 11664, 11881, 12100, 12321, 12544, 12769, 12996, 13225, 13456,
    13689, 13924, 14161, 14400, 14641, 14884, 15129, 15376, 15625, 15876, 16129, 16384,
    16641, 16900, 17161, 17424, 17689, 17956, 18225, 18496, 18769, 19044, 19321, 19600,
    19881, 20164, 20449, 20736, 21025, 21316, 21609, 21904, 22201, 22500, 22801, 23104,
    23409, 23716, 24025, 24336, 24649, 24964, 25281, 25600, 25921, 26244, 26569, 26896,
    27225, 27556, 27889, 28224, 28561, 28900, 29241, 29584, 29929, 30276, 30625, 30976,
    31329, 31684, 32041, 32400, 32761, 33124, 33489, 33856, 34225, 34596, 34969, 35344,
    35721, 36100, 36481, 36864, 37249, 37636, 38025, 38416, 38809, 39204, 39601, 40000,
    40401, 40804, 41209, 41616, 42025, 42436, 42849, 43264, 43681, 44100, 44521, 44944,
    45369, 45796, 46225, 46656, 47089, 47524, 47961, 48400, 48841, 49284, 49729, 50176,
    50625, 51076, 51529, 51984, 52441, 52900, 53361, 53824, 54289, 54756, 55225, 55696,
    56169, 56644, 57121, 57600, 58081, 58564, 59049, 59536, 60025, 60516, 61009, 61504,
    62001, 62500, 63001, 63504, 64009, 64516, 65025
};
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
    namespace osquery {
    }
    
    #include <gtest/gtest.h>
    
    Status WmiResultItem::GetUnsignedLong(const std::string& name,
                                      unsigned long& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
  if (hr != S_OK) {
    return Status(-1, 'Error retrieving data from WMI query.');
  }
  if (value.vt != VT_UI4) {
    VariantClear(&value);
    return Status(-1, 'Invalid data type returned.');
  }
  ret = value.lVal;
  VariantClear(&value);
  return Status(0);
}
    
     protected:
  /// Require each plugin tester to implement a set name.
  virtual std::string name() = 0;
    
     private:
  /// Apply normal subscription to event matching logic.
  bool shouldFire(const EventTappingSubscriptionContextRef& mc,
                  const EventTappingEventContextRef& ec) const override;
    
    #include 'guetzli/output_image.h'
    
    #include <stddef.h>
#include <stdint.h>
    
      JpegHistogram() { Clear(); }
  void Clear() {
    memset(counts, 0, sizeof(counts));
    counts[kSize - 1] = 1;
  }
  void Add(int symbol) {
    counts[symbol] += 2;
  }
  void Add(int symbol, int weight) {
    counts[symbol] += 2 * weight;
  }
  void AddHistogram(const JpegHistogram& other) {
    for (int i = 0; i + 1 < kSize; ++i) {
      counts[i] += other.counts[i];
    }
    counts[kSize - 1] = 1;
  }
  int NumSymbols() const {
    int n = 0;
    for (int i = 0; i + 1 < kSize; ++i) {
      n += (counts[i] > 0 ? 1 : 0);
    }
    return n;
  }
    
    struct HuffmanTableEntry {
  // Initialize the value to an invalid symbol so that we can recognize it
  // when reading the bit stream using a Huffman code with space > 0.
  HuffmanTableEntry() : bits(0), value(0xffff) {}
    }
    
    namespace mars {
namespace baseevent {
    }
    }
    
        std::string strstack;
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    void CommFrequencyLimit::__DelOlderTouchTime(uint64_t _time) {
    for (std::list<uint64_t>::iterator iter = touch_times_.begin(); iter != touch_times_.end();) {
        if ((_time - (*iter)) > time_span_) {
            iter = touch_times_.erase(iter);
            continue;
        }
    }
    }
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    #include <jni.h>
    
      BtRequestFactory* requestFactory_;
    
    AbstractHttpServerResponseCommand::AbstractHttpServerResponseCommand(
    cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
    DownloadEngine* e, const std::shared_ptr<SocketCore>& socket)
    : Command(cuid),
      e_(e),
      socket_(socket),
      httpServer_(httpServer),
      readCheck_(false),
      writeCheck_(true)
{
  setStatus(Command::STATUS_ONESHOT_REALTIME);
  e_->addSocketForWriteCheck(socket_, this);
}
    
    void AbstractOptionHandler::setInitialOption(bool f)
{
  updateFlags(FLAG_INITIAL_OPTION, f);
}
    
      virtual bool getInitialOption() const CXX11_OVERRIDE;
    
    public:
  AbstractProxyResponseCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      const std::shared_ptr<HttpConnection>& httpConnection, DownloadEngine* e,
      const std::shared_ptr<SocketCore>& s);
    
    private:
  TLSSessionSide side_;
  TLSVersion minTLSVer_;
  bool verifyPeer_;
  SecIdentityRef credentials_;
    
    #include 'a2functional.h'