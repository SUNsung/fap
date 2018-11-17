
        
        
    {}  // namespace mate
    
    namespace api {
    }
    
    scoped_refptr<TracingController::TraceDataEndpoint> GetTraceDataEndpoint(
    const base::FilePath& path,
    const CompletionCallback& callback) {
  base::FilePath result_file_path = path;
  if (result_file_path.empty() && !base::CreateTemporaryFile(&result_file_path))
    LOG(ERROR) << 'Creating temporary file failed';
    }
    
    void InAppPurchase::OnTransactionsUpdated(
    const std::vector<in_app_purchase::Transaction>& transactions) {
  Emit('transactions-updated', transactions);
}
#endif
    
    // static
void Net::BuildPrototype(v8::Isolate* isolate,
                         v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'Net'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetProperty('URLRequest', &Net::URLRequest);
}
    
    Screen::~Screen() {
  screen_->RemoveObserver(this);
}
    
    
    {}  // namespace api
    
    #ifndef ATOM_BROWSER_API_EVENT_H_
#define ATOM_BROWSER_API_EVENT_H_
    
    void SavePageHandler::Destroy(download::DownloadItem* item) {
  item->RemoveObserver(this);
  delete this;
}
    
    
    {  // We need to handle SIGTERM, because that is how many POSIX-based distros ask
  // processes to quit gracefully at shutdown time.
  struct sigaction action;
  memset(&action, 0, sizeof(action));
  action.sa_handler = SIGTERMHandler;
  CHECK_EQ(sigaction(SIGTERM, &action, nullptr), 0);
  // Also handle SIGINT - when the user terminates the browser via Ctrl+C. If
  // the browser process is being debugged, GDB will catch the SIGINT first.
  action.sa_handler = SIGINTHandler;
  CHECK_EQ(sigaction(SIGINT, &action, nullptr), 0);
  // And SIGHUP, for when the terminal disappears. On shutdown, many Linux
  // distros send SIGHUP, SIGTERM, and then SIGKILL.
  action.sa_handler = SIGHUPHandler;
  CHECK_EQ(sigaction(SIGHUP, &action, nullptr), 0);
}
    
    AtomQuotaPermissionContext::AtomQuotaPermissionContext() {}
    
    CC_CONSTRUCTOR_ACCESS:
    Action();
    virtual ~Action();
    
    void Waves3D::update(float time)
{
    int i, j;
    for (i = 0; i < _gridSize.width + 1; ++i)
    {
        for (j = 0; j < _gridSize.height + 1; ++j)
        {
            Vec3 v = getOriginalVertex(Vec2(i ,j));
            v.z += (sinf((float)M_PI * time * _waves * 2 + (v.y+v.x) * 0.01f) * _amplitude * _amplitudeRate);
            //CCLOG('v.z offset is %f\n', (sinf((float)M_PI * time * _waves * 2 + (v.y+v.x) * .01f) * _amplitude * _amplitudeRate));
            setVertex(Vec2(i, j), v);
        }
    }
}
    
                // We scale z here to avoid the animation being
            // too much bigger than the screen due to perspective transform
    
    #include '2d/CCActionGrid3D.h'
    
    bool SplitRows::initWithDuration(float duration, unsigned int rows)
{
    _rows = rows;
    }
    
    
    {  // Single-Delete diagnostics for exceptional situations
  uint64_t num_single_del_fallthru = 0;
  uint64_t num_single_del_mismatch = 0;
};

    
    class DB;
    
    int main() {
  // open DB
  Options options;
  options.create_if_missing = true;
  DB* db;
  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());
    }
    
    class MyFilter : public rocksdb::CompactionFilter {
 public:
  bool Filter(int level, const rocksdb::Slice& key,
              const rocksdb::Slice& existing_value, std::string* new_value,
              bool* value_changed) const override {
    fprintf(stderr, 'Filter(%s)\n', key.ToString().c_str());
    ++count_;
    assert(*value_changed == false);
    return false;
  }
    }
    
    
    {// Factor method to create a new persistent cache
Status NewPersistentCache(Env* const env, const std::string& path,
                          const uint64_t size,
                          const std::shared_ptr<Logger>& log,
                          const bool optimized_for_nvm,
                          std::shared_ptr<PersistentCache>* cache);
}  // namespace rocksdb

    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                         int32_t *const frame_num) = 0;
    
    TEST(SocketCanClientRawTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::SOCKET_CAN_RAW);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
      /**
   * @brief Transform an integer with the size of one byte to its binary
   *        represented by a string.
   * @param value The target integer to transform.
   * @return Binary representing the target integer.
   */
  static std::string byte_to_binary(const uint8_t value);
    
    /**
 * @file
 */
    
      if (can_receiver_.Init(can_client_.get(), sensor_message_manager_.get(),
                         canbus_conf_.enable_receiver_log()) != ErrorCode::OK) {
    return OnError('Failed to init can receiver.');
  }
  AINFO << 'The can receiver is successfully initialized.';
    
    DEFINE_string(adapter_config_filename, 'modules/canbus/conf/adapter.conf',
              'The adapter config file');
    
      t6 = t1 - t4;
  t8 = kSqrtHalf;
  t6 *= t8;
  a[5].real = a[4].real - t6;
  t1 += t4;
  t1 *= t8;
  a[5].imag = a[4].imag - t1;
  t6 += a[4].real;
  a[4].real = t6;
  t1 += a[4].imag;
  a[4].imag = t1;
    
      // Compares the 8x8 block with offsets (off_x, off_y) within the current
  // macro-block of the baseline image with the same block of img and returns
  // the resulting per-block distance. The interpretation of the returned
  // distance depends on the comparator used.
  virtual double CompareBlock(const OutputImage& img,
                              int off_x, int off_y) const = 0;
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    
    {}  // namespace guetzli

    
    #include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <memory>
#include <string>
#include <sstream>
#include <string.h>
#include 'png.h'
#include 'guetzli/jpeg_data.h'
#include 'guetzli/jpeg_data_reader.h'
#include 'guetzli/processor.h'
#include 'guetzli/quality.h'
#include 'guetzli/stats.h'
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    void BuildHuffmanCodeTable(const int* counts, const int* values,
                           HuffmanCodeTable* table) {
  int huffcode[256];
  int huffsize[256];
  int p = 0;
  for (int l = 1; l <= kJpegHuffmanMaxBitLength; ++l) {
    int i = counts[l];
    while (i--) huffsize[p++] = l;
  }
    }
    
    
    {  uint32_t counts[kSize];
};