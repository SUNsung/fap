
        
        const char kAnyFullTypeName[] = 'google.protobuf.Any';
const char kTypeGoogleApisComPrefix[] = 'type.googleapis.com/';
const char kTypeGoogleProdComPrefix[] = 'type.googleprod.com/';
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    
    {  EXPECT_EQ(expected, decode_data.Data());
}
    
      EXPECT_EQ(false, refl->HasField(*message, optional_msg));
  refl->MutableMessage(message, optional_msg);
  EXPECT_EQ(true, refl->HasField(*message, optional_msg));
  delete refl->ReleaseMessage(message, optional_msg);
  EXPECT_EQ(false, refl->HasField(*message, optional_msg));
    
    // implements ZeroCopyInputStream ----------------------------------
bool GzipInputStream::Next(const void** data, int* size) {
  bool ok = (zerror_ == Z_OK) || (zerror_ == Z_STREAM_END)
      || (zerror_ == Z_BUF_ERROR);
  if ((!ok) || (zcontext_.next_out == NULL)) {
    return false;
  }
  if (zcontext_.next_out != output_position_) {
    DoNextOutput(data, size);
    return true;
  }
  if (zerror_ == Z_STREAM_END) {
    if (zcontext_.next_out != NULL) {
      // sub_stream_ may have concatenated streams to follow
      zerror_ = inflateEnd(&zcontext_);
      byte_count_ += zcontext_.total_out;
      if (zerror_ != Z_OK) {
        return false;
      }
      zerror_ = internalInflateInit2(&zcontext_, format_);
      if (zerror_ != Z_OK) {
        return false;
      }
    } else {
      *data = NULL;
      *size = 0;
      return false;
    }
  }
  zerror_ = Inflate(Z_NO_FLUSH);
  if ((zerror_ == Z_STREAM_END) && (zcontext_.next_out == NULL)) {
    // The underlying stream's Next returned false inside Inflate.
    return false;
  }
  ok = (zerror_ == Z_OK) || (zerror_ == Z_STREAM_END)
      || (zerror_ == Z_BUF_ERROR);
  if (!ok) {
    return false;
  }
  DoNextOutput(data, size);
  return true;
}
void GzipInputStream::BackUp(int count) {
  output_position_ = reinterpret_cast<void*>(
      reinterpret_cast<uintptr_t>(output_position_) - count);
}
bool GzipInputStream::Skip(int count) {
  const void* data;
  int size = 0;
  bool ok = Next(&data, &size);
  while (ok && (size < count)) {
    count -= size;
    ok = Next(&data, &size);
  }
  if (size > count) {
    BackUp(size - count);
  }
  return ok;
}
int64 GzipInputStream::ByteCount() const {
  int64 ret = byte_count_ + zcontext_.total_out;
  if (zcontext_.next_out != NULL && output_position_ != NULL) {
    ret += reinterpret_cast<uintptr_t>(zcontext_.next_out) -
           reinterpret_cast<uintptr_t>(output_position_);
  }
  return ret;
}
    
    // Given a pointer to the 'u' or 'U' starting a Unicode escape sequence, attempt
// to parse that sequence. On success, returns a pointer to the first char
// beyond that sequence, and fills in *code_point. On failure, returns ptr
// itself.
static const char* FetchUnicodePoint(const char* ptr, uint32* code_point) {
  const char* p = ptr;
  // Fetch the code point.
  const int len = UnicodeLength(*p++);
  if (!ReadHexDigits(p, len, code_point))
    return ptr;
  p += len;
    }
    
    #include <dmlc/registry.h>
#include <dmlc/parameter.h>
#include <map>
#include <vector>
#include <string>
#include <utility>
#include './base.h'
#include './operator.h'
    
    namespace caffe {
    }
    
    template <typename Dtype>
class LayerRegistry {
 public:
  static ::caffe::Layer<Dtype> * CreateLayer(const ::caffe::LayerParameter& param) {
    ::caffe::shared_ptr< ::caffe::Layer<Dtype> > ptr =
      ::caffe::LayerRegistry<Dtype>::CreateLayer(param);
    // avoid caffe::layer destructor, which deletes the weights layer owns
    new ::caffe::shared_ptr< ::caffe::Layer<Dtype> >(ptr);
    return ptr.get();
  }
};
    
      void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) override {
    param_.Init(kwargs);
  }
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file image_augmenter.h
 * \brief Interface of opencv based image augmenter
 */
#ifndef MXNET_IO_IMAGE_AUGMENTER_H_
#define MXNET_IO_IMAGE_AUGMENTER_H_
    
      inline void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    std::vector<std::pair<std::string, std::string> > kwargs_left;
    // init batch param, it could have similar param with
    kwargs_left = param_.InitAllowUnknown(kwargs);
    // Init space for out
    out_.inst_index = new unsigned[param_.batch_size];
    out_.batch_size = param_.batch_size;
    out_.data.clear();
    // init base iterator
    base_->Init(kwargs);
  }
    
    namespace mxnet {
namespace io {
// LibSVM parameters
struct LibSVMIterParam : public dmlc::Parameter<LibSVMIterParam> {
  /*! \brief path to data libsvm file */
  std::string data_libsvm;
  /*! \brief data shape */
  TShape data_shape;
  /*! \brief path to label libsvm file */
  std::string label_libsvm;
  /*! \brief label shape */
  TShape label_shape;
  /*! \brief partition the data into multiple parts */
  int num_parts;
  /*! \brief the index of the part will read*/
  int part_index;
  // declare parameters
  DMLC_DECLARE_PARAMETER(LibSVMIterParam) {
    DMLC_DECLARE_FIELD(data_libsvm)
        .describe('The input zero-base indexed LibSVM data file or a directory path.');
    DMLC_DECLARE_FIELD(data_shape)
        .describe('The shape of one example.');
    DMLC_DECLARE_FIELD(label_libsvm).set_default('NULL')
        .describe('The input LibSVM label file or a directory path. '
                  'If NULL, all labels will be read from ``data_libsvm``.');
    index_t shape1[] = {1};
    DMLC_DECLARE_FIELD(label_shape).set_default(TShape(shape1, shape1 + 1))
        .describe('The shape of one label.');
    DMLC_DECLARE_FIELD(num_parts).set_default(1)
        .describe('partition the data into multiple parts');
    DMLC_DECLARE_FIELD(part_index).set_default(0)
        .describe('the index of the part will read');
  }
};
    }
    }
    
    
    {REGISTER_INTERNAL(EventsConfigParserPlugin, 'config_parser', 'events');
}

    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    bool binary_to_compressed_c(const char* filename, const char* symbol, bool use_base85_encoding, bool use_compression)
{
    // Read file
    FILE* f = fopen(filename, 'rb');
    if (!f) return false;
    int data_sz;
    if (fseek(f, 0, SEEK_END) || (data_sz = (int)ftell(f)) == -1 || fseek(f, 0, SEEK_SET)) { fclose(f); return false; }
    char* data = new char[data_sz+4];
    if (fread(data, 1, data_sz, f) != (size_t)data_sz) { fclose(f); delete[] data; return false; }
    memset((void*)(((char*)data) + data_sz), 0, 4);
    fclose(f);
    }
    
            ID3D10Texture2D *pTexture = NULL;
        D3D10_SUBRESOURCE_DATA subResource;
        subResource.pSysMem = pixels;
        subResource.SysMemPitch = desc.Width * 4;
        subResource.SysMemSlicePitch = 0;
        g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);
    
        // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array that we will update during the application lifetime.
    io.KeyMap[ImGuiKey_Tab] = VK_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = VK_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = VK_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = VK_UP;
    io.KeyMap[ImGuiKey_DownArrow] = VK_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = VK_PRIOR;
    io.KeyMap[ImGuiKey_PageDown] = VK_NEXT;
    io.KeyMap[ImGuiKey_Home] = VK_HOME;
    io.KeyMap[ImGuiKey_End] = VK_END;
    io.KeyMap[ImGuiKey_Insert] = VK_INSERT;
    io.KeyMap[ImGuiKey_Delete] = VK_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = VK_BACK;
    io.KeyMap[ImGuiKey_Space] = VK_SPACE;
    io.KeyMap[ImGuiKey_Enter] = VK_RETURN;
    io.KeyMap[ImGuiKey_Escape] = VK_ESCAPE;
    io.KeyMap[ImGuiKey_A] = 'A';
    io.KeyMap[ImGuiKey_C] = 'C';
    io.KeyMap[ImGuiKey_V] = 'V';
    io.KeyMap[ImGuiKey_X] = 'X';
    io.KeyMap[ImGuiKey_Y] = 'Y';
    io.KeyMap[ImGuiKey_Z] = 'Z';
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        std::unique_ptr<DHTMessageFactory> messageFactory;
    
    namespace aria2 {
    }
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
      std::vector<std::shared_ptr<DHTNode>> nodes;
  // nodes
  const int compactlen = bittorrent::getCompactLength(family_);
  for (size_t i = 0; i < numNodes; ++i) {
    // 1byte compact peer info length
    uint8_t peerInfoLen;
    READ_CHECK(fp, &peerInfoLen, sizeof(peerInfoLen));
    if (peerInfoLen != compactlen) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 7 + 48);
      continue;
    }
    // 7bytes reserved
    readBytes(fp, buf, buf.size(), 7);
    // compactlen bytes compact peer info
    readBytes(fp, buf, buf.size(), compactlen);
    if (memcmp(zero, buf, compactlen) == 0) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 48 - compactlen);
      continue;
    }
    std::pair<std::string, uint16_t> peer =
        bittorrent::unpackcompact(buf, family_);
    if (peer.first.empty()) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 48 - compactlen);
      continue;
    }
    // 24-compactlen bytes reserved
    readBytes(fp, buf, buf.size(), 24 - compactlen);
    // node ID
    readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
    }
    
    public:
  DHTRoutingTableDeserializer(int family);
    
      // number of nodes
  uint32_t numNodes = htonl(nodes_.size());
  WRITE_CHECK(fp, &numNodes, sizeof(uint32_t));
  // 4bytes reserved
  WRITE_CHECK(fp, zero, 4);
    
    
    {} // namespace aria2

    
    
    {} // namespace aria2

    
      virtual void preProcess() CXX11_OVERRIDE;
    
    namespace aria2 {
    }
    
    const std::string& DNSCache::find(const std::string& hostname,
                                  uint16_t port) const
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.find(target);
  if (i == entries_.end()) {
    return A2STR::NIL;
  }
  else {
    return (*i)->getGoodAddr();
  }
}
    
    bool Speed::initWithAction(ActionInterval *action, float speed)
{
    CCASSERT(action != nullptr, 'action must not be NULL');
    if (action == nullptr)
    {
        log('Speed::initWithAction error: action is nullptr!');
        return false;
    }
    
    action->retain();
    _innerAction = action;
    _speed = speed;
    return true;
}
    
        // Overrides
    OrbitCamera *clone() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    OrbitCamera();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~OrbitCamera();
    
    /** Initializes a OrbitCamera action with radius, delta-radius,  z, deltaZ, x, deltaX. */
    bool initWithDuration(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX);
    
        float    x0 = v0.x;
    float    x1 = v1.x;
    float    x;
    Vec2    a, b, c, d;
    
        union
    {
        SEL_CallFunc    _callFunc;
        SEL_CallFuncN    _callFuncN;
    };
    
    /** function that will be called */
    std::function<void()> _function;
    
        /** Sets the target that the action will be forced to run with.
     *
     * @param forcedTarget The target that the action will be forced to run with.
     */
    void setForcedTarget(Node* forcedTarget);
    /** returns the target that the action is forced to run with. 
     *
     * @return The target that the action is forced to run with.
     */
    Node* getForcedTarget() { return _forcedTarget; }
    const Node* getForcedTarget() const { return _forcedTarget; }
    
    
    {    return count;
}
    
    
    {
    {
    {            p.z = (r * ( 1 - cosBeta ) * cosTheta);// '100' didn't work for
            p.x = p.z * sinf(rotateByYAxis) + p.x * cosf(rotateByYAxis);
            p.z = p.z * cosf(rotateByYAxis) - p.x * sinf(rotateByYAxis);
            p.z/=7;
            //    Stop z coord from dropping beneath underlying page in a transition
            // issue #751
            if( p.z < 0.5f )
            {
                p.z = 0.5f;
            }
            
            // Set new coords
            p.x += getGridRect().origin.x;
            setVertex(Vec2(i, j), p);
            
        }
    }
}
    
        /** array of AnimationFrames. */
    Vector<AnimationFrame*> _frames;
    
        /** Deletes a Animation from the cache.
     *
     * @param name The name of animation.
     */
    void removeAnimation(const std::string& name);
    /** @deprecated. Use removeAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE void removeAnimationByName(const std::string& name){ removeAnimation(name);}