
        
          AcceleratorCallbackMap accelerator_callback_map_;
    
      // JsAsker:
  void StartAsync(std::unique_ptr<base::Value> options) override;
    
    void DragFileItems(const std::vector<base::FilePath>& files,
                   const gfx::Image& icon,
                   gfx::NativeView view);
    
    class EventDisabler : public ui::EventRewriter {
 public:
  EventDisabler();
  ~EventDisabler() override;
    }
    
    class UnresponsiveSuppressor {
 public:
  UnresponsiveSuppressor();
  ~UnresponsiveSuppressor();
    }
    
    #endif  // ATOM_COMMON_API_LOCKER_H_

    
    #ifndef ATOM_COMMON_COLOR_UTIL_H_
#define ATOM_COMMON_COLOR_UTIL_H_
    
    
    {  if (!args_->GetSize())
    return false;
  base::Value* spec = NULL;
  EXTENSION_FUNCTION_VALIDATE(args_->Get(0, &spec) && spec);
  if (!spec->is_dict())
    return false;
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(spec);
  bool auto_print;
  std::string printer_name, pdf_path;
  if (dict->GetBoolean('autoprint', &auto_print))
    chrome::NWPrintSetCustomPrinting(auto_print);
  if (dict->GetString('printer', &printer_name))
    chrome::NWPrintSetDefaultPrinter(printer_name);
  if (dict->GetString('pdf_path', &pdf_path))
    chrome::NWPrintSetPDFPath(base::FilePath::FromUTF8Unsafe(pdf_path));
  chrome::NWPrintSetOptions(dict);
  return true;
}
    
    // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    #include 'base/logging.h'
#include 'base/values.h'
    
    namespace remote {
    }
    
    
    {}  // namespace nwapi

    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return !item->icon_.IsEmpty();
}
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    class NwClipboardClearSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardClearSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    class NwObjCallObjectMethodFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
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
    
    int getifaddrs(struct ifaddrs** result) {
	int fd = socket(PF_NETLINK, SOCK_RAW, NETLINK_ROUTE);
	if (fd < 0) {
		return -1;
	}
	netlinkrequest ifaddr_request;
	memset(&ifaddr_request, 0, sizeof(ifaddr_request));
	ifaddr_request.header.nlmsg_flags = NLM_F_ROOT | NLM_F_REQUEST;
	ifaddr_request.header.nlmsg_type = RTM_GETADDR;
	ifaddr_request.header.nlmsg_len = NLMSG_LENGTH(sizeof(ifaddrmsg));
	ssize_t count = send(fd, &ifaddr_request, ifaddr_request.header.nlmsg_len, 0);
	if (static_cast<size_t>(count) != ifaddr_request.header.nlmsg_len) {
		close(fd);
		return -1;
	}
	struct ifaddrs* start = NULL;
	struct ifaddrs* current = NULL;
	char buf[kMaxReadSize];
	ssize_t amount_read = recv(fd, &buf, kMaxReadSize, 0);
	while (amount_read > 0) {
		nlmsghdr* header = reinterpret_cast<nlmsghdr*>(&buf[0]);
		size_t header_size = static_cast<size_t>(amount_read);
		for ( ; NLMSG_OK(header, header_size);
		      header = NLMSG_NEXT(header, header_size)) {
			switch (header->nlmsg_type) {
			case NLMSG_DONE:
				// Success. Return.
				*result = start;
				close(fd);
				return 0;
			case NLMSG_ERROR:
				close(fd);
				freeifaddrs(start);
				return -1;
			case RTM_NEWADDR: {
				ifaddrmsg* address_msg =
						reinterpret_cast<ifaddrmsg*>(NLMSG_DATA(header));
				rtattr* rta = IFA_RTA(address_msg);
				ssize_t payload_len = IFA_PAYLOAD(header);
				while (RTA_OK(rta, payload_len)) {
					if (rta->rta_type == IFA_ADDRESS) {
						int family = address_msg->ifa_family;
						if (family == AF_INET || family == AF_INET6) {
							ifaddrs* newest = new ifaddrs;
							memset(newest, 0, sizeof(ifaddrs));
							if (current) {
								current->ifa_next = newest;
							} else {
								start = newest;
							}
							if (populate_ifaddrs(newest, address_msg, RTA_DATA(rta),
									     RTA_PAYLOAD(rta)) != 0) {
								freeifaddrs(start);
								*result = NULL;
								return -1;
							}
							current = newest;
						}
					}
					rta = RTA_NEXT(rta, payload_len);
				}
				break;
			}
			}
		}
		amount_read = recv(fd, &buf, kMaxReadSize, 0);
	}
	close(fd);
	freeifaddrs(start);
	return -1;
}
    
    	friend class Main;
	static bool initialize_certs;
    
    
    {	WebSocketClient();
	~WebSocketClient();
};
    
      uint num_left = get_bits(16);
    
        FILE *m_pFile;
    bool m_eof_flag, m_error_flag;
    
    #include 'x86/x86cpu.h'
/* We currently support 5 x86 variants:
 * arch[0] -> non-sse
 * arch[1] -> sse
 * arch[2] -> sse2
 * arch[3] -> sse4.1
 * arch[4] -> avx
 */
#define OPUS_ARCHMASK 7
int opus_select_arch(void);
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
     private:
  Node* head() {
    return head_.load(std::memory_order_acquire);
  }
    
    // See portability/Unistd.h for why these need to be in a namespace
// rather then extern 'C'.
namespace folly {
namespace portability {
namespace fcntl {
int creat(char const* fn, int pm);
int fcntl(int fd, int cmd, ...);
int posix_fallocate(int fd, off_t offset, off_t len);
int open(char const* fn, int of, int pm = 0);
}
}
}
    
      size_t size() override {
    return queue_.size();
  }
    
        try {
      func();
    } catch (std::exception const& ex) {
      LOG(ERROR) << 'SerialExecutor: func threw unhandled exception '
                 << folly::exceptionStr(ex);
    } catch (...) {
      LOG(ERROR) << 'SerialExecutor: func threw unhandled non-exception '
                    'object';
    }
    
      XLOGC_IF(DBG1, 0x6 | 0x2 ? true : false, 'More conditional 3');
  EXPECT_EQ(1, messages.size());
  messages.clear();
    
      // Use the simple helper function in XlogHeader2
  testXlogHdrFunction('factor', 99);
  ASSERT_EQ(1, messages.size());
  EXPECT_EQ('test: factor=99', messages[0].first.getMessage());
  EXPECT_TRUE(messages[0].first.getFileName().endsWith('XlogHeader2.h'))
      << 'unexpected file name: ' << messages[0].first.getFileName();
  EXPECT_EQ(LogLevel::DBG3, messages[0].first.getLevel());
  EXPECT_EQ(
      'folly.logging.test.XlogHeader2.h',
      messages[0].first.getCategory()->getName());
  EXPECT_EQ('folly.logging.test', messages[0].second->getName());
  messages.clear();