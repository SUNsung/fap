
        
        #include <QIcon>
#include <QPixmap>
#include <QString>
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    
    {    Lock& lock;
    Lock templock;
};
    
    #ifdef USE_ENDOMORPHISM
static void secp256k1_ge_mul_lambda(secp256k1_ge *r, const secp256k1_ge *a) {
    static const secp256k1_fe beta = SECP256K1_FE_CONST(
        0x7ae96a2bul, 0x657c0710ul, 0x6e64479eul, 0xac3434e9ul,
        0x9cf04975ul, 0x12f58995ul, 0xc1396c28ul, 0x719501eeul
    );
    *r = *a;
    secp256k1_fe_mul(&r->x, &r->x, &beta);
}
#endif
    
    const std::vector<UniValue>& UniValue::getValues() const
{
    if (typ != VOBJ && typ != VARR)
        throw std::runtime_error('JSON value is not an object or array as expected');
    return values;
}
    
        BOOST_CHECK_EQUAL(strJson1, v.write());
    
    #include 'content/nw/src/api/menu/menu.h'
    
    ui::KeyboardCode GetKeycodeFromText(std::string text){
  ui::KeyboardCode retval = ui::VKEY_UNKNOWN;
  if (text.size() != 0){
    std::string upperText = base::ToUpperASCII(text);
    std::string keyName = text;
    bool found = false;
    if (upperText.size() == 1){
      char key = upperText[0];
      if (key>='0' && key<='9'){//handle digital
        keyName = 'Digit' + upperText;
        found = true;
      } else if (key>='A'&&key<='Z'){//handle alphabet
        keyName = 'Key' + upperText;
        found = true;
      }
    }
    }
    }
    
    void MenuItem::SetLabel(const std::string& label) {
  is_modified_ = true;
  label_ = base::UTF8ToUTF16(label);
    }
    
    
    {} // namespace extensions
#endif

    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnAllocateObject(id, type, *options, extension_id());
  return true;
}
    
      // True when a ScopedPyObjectPtr and a raw pointer refer to the same object.
  // Comparison operators are non reflexive.
  bool operator==(const PyObjectStruct* p) const { return ptr_ == p; }
  bool operator!=(const PyObjectStruct* p) const { return ptr_ != p; }
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
      // We start the comment with the main body based on the comments from the
  // .proto file (if present). We then end with the field declaration, e.g.:
  //   optional string foo = 5;
  // If the field is a group, the debug string might end with {.
  printer->Print('/**\n');
  WriteDocCommentBody(printer, field);
  printer->Print(
    ' * <code>$def$</code>\n',
    'def', EscapeJavadoc(FirstLineOf(field->DebugString())));
  printer->Print(' */\n');
}
    
    string ClassNameResolver::GetJavaImmutableClassName(
    const EnumDescriptor* descriptor) {
  return GetJavaClassFullName(
      ClassNameWithoutPackage(descriptor, true),
      descriptor->file(), true);
}
    
    
    {
    {
    {
    {
    {
    {
    {  printer->Print(
      '      return YES;\n'
      '    default:\n'
      '      return NO;\n'
      '  }\n'
      '}\n\n');
}
}  // namespace objectivec
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {  return Status::OK();
}
    
    // Filter policy wrapper that converts from internal keys to user keys
class InternalFilterPolicy : public FilterPolicy {
 private:
  const FilterPolicy* const user_policy_;
 public:
  explicit InternalFilterPolicy(const FilterPolicy* p) : user_policy_(p) { }
  virtual const char* Name() const;
  virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const;
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const;
};
    
    // Notified when log reader encounters corruption.
class CorruptionReporter : public log::Reader::Reporter {
 public:
  WritableFile* dst_;
  virtual void Corruption(size_t bytes, const Status& status) {
    std::string r = 'corruption: ';
    AppendNumberTo(&r, bytes);
    r += ' bytes; ';
    r += status.ToString();
    r.push_back('\n');
    dst_->Append(r);
  }
};
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
    namespace leveldb {
namespace log {
    }
    }
    
      size_t WrittenBytes() const {
    return dest_.contents_.size();
  }
    
        // Open the log file
    std::string logname = LogFileName(dbname_, log);
    SequentialFile* lfile;
    Status status = env_->NewSequentialFile(logname, &lfile);
    if (!status.ok()) {
      return status;
    }
    
    bool Follow::initWithTargetAndOffset(Node *followedNode, float xOffset,float yOffset,const Rect& rect)
{
    CCASSERT(followedNode != nullptr, 'FollowedNode can't be NULL');
    if(followedNode == nullptr)
    {
        log('Follow::initWithTarget error: followedNode is nullptr!');
        return false;
    }
 
    followedNode->retain();
    _followedNode = followedNode;
    _worldRect = rect;
    _boundarySet = !rect.equals(Rect::ZERO);
    _boundaryFullyCovered = false;
    }
    
        /** World boundaries. */
    float _leftBoundary;
    float _rightBoundary;
    float _topBoundary;
    float _bottomBoundary;
    
    /** Horizontal (x) and vertical (y) offset values. */
    float _offsetX;
    float _offsetY;
    
    Rect _worldRect;
    
    
#ifndef __CCACTION_CATMULLROM_H__
#define __CCACTION_CATMULLROM_H__
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    void ProgressFromTo::update(float time)
{
    ((kProgressTimerCast)(_target))->setPercentage(_from + (_to - _from) * time);
}
    
    
    {    /**
    @brief The callback function when ActionTween is running.
    @param value The new value of the specified key.
    @param key The key of property which should be updated.
    */
    virtual void updateTweenAction(float value, const std::string& key) = 0;
};
    
        for (auto& spriteFrame : frames)
    {
        auto animFrame = AnimationFrame::create(spriteFrame, 1, ValueMap());
        _frames.pushBack(animFrame);
        _totalDelayUnits++;
    }
    
    void AtlasNode::setQuadsToDraw(ssize_t quadsToDraw)
{
    _quadsToDraw = quadsToDraw;
}
    
    #include 'internal_macros.h'
    
    
    {}  // end namespace benchmark
    
    #include <string>
#include <vector>
    
    
    {
    {#if defined(NDEBUG)
  const char build_type[] = 'release';
#else
  const char build_type[] = 'debug';
#endif
  out << indent << FormatKV('library_build_type', build_type) << '\n';
  // Close context block and open the list of benchmarks.
  out << inner_indent << '},\n';
  out << inner_indent << '\'benchmarks\': [\n';
  return true;
}
    
    namespace benchmark {
    }
    
    void BenchmarkReporter::PrintBasicContext(std::ostream *out,
                                          Context const &context) {
  CHECK(out) << 'cannot be null';
  auto &Out = *out;
    }
    
    #ifndef GUETZLI_DEBUG_PRINT_H_
#define GUETZLI_DEBUG_PRINT_H_
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    
    {}  // namespace guetzli
    
    namespace guetzli {
    }
    
    #include <stddef.h>
#include <stdint.h>
    
    #include <memory>
#include <unordered_map>
    
      // init config and state
  // After a CAN handle is created with canOpen() the CAN-ID filter is
  // cleared
  // (no CAN messages
  // will pass the filter). To receive a CAN message with a certain CAN-ID
  // or an
  // NTCAN-Event with
  // a certain Event-ID it is required to enable this ID in the handle
  // filter as
  // otherwise a
  // received  message or event is discarded by the driver for this handle.
  // 1. set receive message_id filter, ie white list
  int32_t id_count = 0x800;
  ret = canIdRegionAdd(dev_handler_, 0, &id_count);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'add receive msg id filter error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    #include 'gtest/gtest.h'
    
    ErrorCode FakeCanClient::Send(const std::vector<CanFrame> &frames,
                              int32_t *const frame_num) {
  if (frame_num == nullptr) {
    AERROR << 'frame_num pointer is null';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    }
    
    
    {  auto ret = recv_client_->Receive(&buf, &frame_num);
  EXPECT_EQ(ret, ErrorCode::OK);
  recv_client_->Stop();
}
    
      if (!is_started_) {
    AERROR << 'Nvidia can client has not been initiated! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  for (size_t i = 0; i < frames.size() && i < MAX_CAN_SEND_FRAME_LEN; ++i) {
    if (frames[i].len != CANBUS_MESSAGE_LENGTH) {
      AERROR << 'frames[' << i << '].len = ' << frames[i].len
             << ', which is not equal to can message data length ('
             << CANBUS_MESSAGE_LENGTH << ').';
      return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
    }
    send_frames_[i].can_id = frames[i].id;
    send_frames_[i].can_dlc = frames[i].len;
    std::memcpy(send_frames_[i].data, frames[i].data, frames[i].len);
    }
    
    #include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
    
    // (SUM(input))^0xFF
template <typename SensorType>
uint8_t ProtocolData<SensorType>::CalculateCheckSum(const uint8_t *input,
                                                    const uint32_t length) {
  return std::accumulate(input, input + length, 0) ^ 0xFF;
}
    
    #include 'gtest/gtest.h'