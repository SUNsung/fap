
        
        namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
      partial_run_mgr_.ExecutorDone(step_id, param.executor_status);
  partial_run_mgr_.PartialRunDone(step_id,
                                  [this](Status status) { set_status(status); },
                                  param.partial_run_status);
    
    #include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#if !defined(IS_SLIM_BUILD)
#include 'tensorflow/core/lib/io/zlib_compression_options.h'
#include 'tensorflow/core/lib/io/zlib_outputbuffer.h'
#endif  // IS_SLIM_BUILD
#include 'tensorflow/core/platform/macros.h'
#include 'tensorflow/core/platform/types.h'
    
    
    {}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include <string>
    
    Base::~Base() {
}
    
    v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id) {
  RenderThread::Get()->Send(new ShellViewHostMsg_Deallocate_Object(
      routing_id, object_id));
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  return v8::Undefined(isolate);
}
    
    void Clipboard::SetText(std::string& text) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  ui::Clipboard::ObjectMap map;
  map[ui::Clipboard::CBF_TEXT].push_back(
      std::vector<char>(text.begin(), text.end()));
  clipboard->WriteObjects(ui::CLIPBOARD_TYPE_COPY_PASTE, map);
}
    
    namespace nw {
    }
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
      std::string type;
    
    #include 'extensions/browser/extension_function.h'
    
    class NwObjDestroyFunction : public NWSyncExtensionFunction {
 public:
  NwObjDestroyFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {    content::DesktopMediaID source = content::DesktopMediaID::Parse(id);
    content::WebContents* web_contents = GetSenderWebContents();
    if (!source.is_null() && web_contents) {
      std::string result;
      source.audio_share = true;
      DesktopStreamsRegistry* registry =
        MediaCaptureDevicesDispatcher::GetInstance()->
        GetDesktopStreamsRegistry();
      // TODO(miu): Once render_frame_host() is being set, we should register the
      // exact RenderFrame requesting the stream, not the main RenderFrame.  With
      // that change, also update
      // MediaCaptureDevicesDispatcher::ProcessDesktopCaptureAccessRequest().
      // http://crbug.com/304341
      content::RenderFrameHost* const main_frame = web_contents->GetMainFrame();
      result = registry->RegisterStream(main_frame->GetProcess()->GetID(),
                                        main_frame->GetRoutingID(),
                                        web_contents->GetURL().GetOrigin(),
                                        source,
                                        extension()->name());
      response->AppendString(result);
    }
    return true;
  }
    
    static void findCorner(const std::vector<Point2f>& contour, Point2f point, Point2f& corner)
{
    // find the nearest point
    double min_dist = std::numeric_limits<double>::max();
    int min_idx = -1;
    }
    
    //! @cond IGNORED
    
    #endif //HAVE_LAPACK
#endif //OPENCV_CORE_HAL_INTERNAL_HPP

    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
    // A simple parser for the json db file. It requires the db file to have the
// exact form of [{'location': { 'latitude': 123, 'longitude': 456}, 'name':
// 'the name can be empty' }, { ... } ... The spaces will be stripped.
class Parser {
 public:
  explicit Parser(const std::string& db) : db_(db) {
    // Remove all spaces.
    db_.erase(
        std::remove_if(db_.begin(), db_.end(), isspace),
        db_.end());
    if (!Match('[')) {
      SetFailedAndReturnFalse();
    }
  }
    }
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
      void IncrementByte(int offset, int delta) {
    dest_.contents_[offset] += delta;
  }
    
    #include <algorithm>
#include <assert.h>
#include 'leveldb/comparator.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
    
    namespace leveldb {
namespace crc32c {
    }
    }
    
    TEST(HASH, SignedUnsignedIssue) {
  const unsigned char data1[1] = {0x62};
  const unsigned char data2[2] = {0xc3, 0x97};
  const unsigned char data3[3] = {0xe2, 0x99, 0xa5};
  const unsigned char data4[4] = {0xe1, 0x80, 0xb9, 0x32};
  const unsigned char data5[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
    }
    
    #include 'port/port.h'
#include 'port/thread_annotations.h'
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
    
    {
    {}  // namespace
}  // namespace leveldb
    
    namespace leveldb {
namespace log {
    }
    }
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    
    {}  // namespace
    
    #ifndef GUETZLI_JPEG_ERROR_H_
#define GUETZLI_JPEG_ERROR_H_
    
    namespace guetzli {
    }
    
    #include <jni.h>
#include <memory>