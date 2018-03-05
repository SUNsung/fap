
        
        namespace osquery {
namespace tables {
    }
    }
    
      /// The EventPublisher will keep track of Subscription%s that contain callins.
  SubscriptionVector subscriptions_;
    
      /// A helper call that does not return a response (only status).
  static Status call(const std::string& registry_name,
                     const std::string& item_name,
                     const PluginRequest& request);
    
      /*
   * @brief the uri used to begin POSTing carve data
   *
   * This endpoint should negotiate the details of the carve, as well
   * as give the client a session id used to continue POSTing the data.
   */
  std::string startUri_;
    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
    
    {
    {  ::strncpy(dst, src, count);
  return Status(0, 'OK');
}
}

    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    // This class implements debug drawing callbacks that are invoked
// inside b2World::Step.
class GLESDebugDraw : public b2Draw
{
    float32 mRatio;
    cocos2d::GLProgram* mShaderProgram;
    GLint        mColorLocation;
    }
    
    	void Break()
	{
		// Create two bodies from one.
		b2Body* body1 = m_piece1->GetBody();
		b2Vec2 center = body1->GetWorldCenter();
    }
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
    
    
    {	b2Body* m_body;
	b2Body* m_bullet;
	float32 m_x;
};
    
    
    {    for (size_t i = 0; i < sorted_index_set.size(); ++i) {
      bst_uint cid = sorted_index_set[i];
      size_t dst_begin = page->offset[i];
      size_t src_begin = disk_offset_[cid];
      size_t num = disk_offset_[cid + 1] - disk_offset_[cid];
      for (size_t j = 0; j < num; ++j) {
        page->data[dst_begin + j] = SparseBatch::Entry(
            index_.data[src_begin + j] + min_index_, value_.data[src_begin + j]);
      }
    }
    return true;
  }
    
      fs = dmlc::Stream::Create(tmp_file.c_str(), 'r');
  xgboost::MetaInfo inforead;
  inforead.LoadBinary(fs);
  EXPECT_EQ(inforead.labels, info.labels);
  EXPECT_EQ(inforead.num_col, info.num_col);
  EXPECT_EQ(inforead.num_row, info.num_row);
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
    /*! \brief gradient statistics pair usually needed in gradient boosting */
typedef detail::bst_gpair_internal<float> bst_gpair;
    
    /*!
 * \brief base class of multi-class evaluation
 * \tparam Derived the name of subclass
 */
template<typename Derived>
struct EvalMClassBase : public Metric {
  bst_float Eval(const std::vector<bst_float> &preds,
                 const MetaInfo &info,
                 bool distributed) const override {
    CHECK_NE(info.labels.size(), 0U) << 'label set cannot be empty';
    CHECK(preds.size() % info.labels.size() == 0)
        << 'label and prediction size not match';
    const size_t nclass = preds.size() / info.labels.size();
    CHECK_GE(nclass, 1U)
        << 'mlogloss and merror are only used for multi-class classification,'
        << ' use logloss for binary classification';
    const bst_omp_uint ndata = static_cast<bst_omp_uint>(info.labels.size());
    double sum = 0.0, wsum = 0.0;
    int label_error = 0;
    #pragma omp parallel for reduction(+: sum, wsum) schedule(static)
    for (bst_omp_uint i = 0; i < ndata; ++i) {
      const bst_float wt = info.GetWeight(i);
      int label =  static_cast<int>(info.labels[i]);
      if (label >= 0 && label < static_cast<int>(nclass)) {
        sum += Derived::EvalRow(label,
                                dmlc::BeginPtr(preds) + i * nclass,
                                nclass) * wt;
        wsum += wt;
      } else {
        label_error = label;
      }
    }
    CHECK(label_error >= 0 && label_error < static_cast<int>(nclass))
        << 'MultiClassEvaluation: label must be in [0, num_class),'
        << ' num_class=' << nclass << ' but found ' << label_error << ' in label';
    }
    }
    
    void OutputImage::ToLinearRGB(std::vector<std::vector<float> >* rgb) const {
  ToLinearRGB(0, 0, width_, height_, rgb);
}
    
    #ifndef GUETZLI_ENTROPY_ENCODE_H_
#define GUETZLI_ENTROPY_ENCODE_H_
    
    
    {  tmp0 = in[7 * stride];
  tmp1 = kIDCTMatrix[ 7] * tmp0;
  tmp2 = kIDCTMatrix[15] * tmp0;
  tmp3 = kIDCTMatrix[23] * tmp0;
  tmp4 = kIDCTMatrix[31] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
}
    
      // Fill in 2nd level tables and add pointers to root table.
  table += table_size;
  table_size = 0;
  low = 0;
  for (len = kJpegHuffmanRootTableBits + 1;
       len <= kJpegHuffmanMaxBitLength; ++len) {
    for (; count[len] > 0; --count[len]) {
      // Start a new sub-table if the previous one is full.
      if (low >= table_size) {
        table += table_size;
        table_bits = NextTableBitSize(count, len);
        table_size = 1 << table_bits;
        total_size += table_size;
        low = 0;
        lut[key].bits = table_bits + kJpegHuffmanRootTableBits;
        lut[key].value = (table - lut) - key;
        ++key;
      }
      code.bits = len - kJpegHuffmanRootTableBits;
      code.value = symbols[idx++];
      reps = 1 << (table_bits - code.bits);
      while (reps--) {
        table[low++] = code;
      }
    }
  }
    
    // Utility function for building a Huffman lookup table for the jpeg decoder.
    
    namespace guetzli {
    }
    
    template <bool isServer>
void ExtensionsNegotiator<isServer>::readOffer(std::string offer) {
    if (isServer) {
        ExtensionsParser extensionsParser(offer.data(), offer.length());
        if ((options & PERMESSAGE_DEFLATE) && extensionsParser.perMessageDeflate) {
            if (extensionsParser.clientNoContextTakeover || (options & CLIENT_NO_CONTEXT_TAKEOVER)) {
                options |= CLIENT_NO_CONTEXT_TAKEOVER;
            }
    }
    }
    }
    
        SSL_CTX_set_options(context.context, SSL_OP_NO_SSLv3);
    
        static __thread char buf[INET6_ADDRSTRLEN];
    
    
    {        if (webSocket->compressionStatus == WebSocket<isServer>::CompressionStatus::ENABLED) {
            webSocket->compressionStatus = WebSocket<isServer>::CompressionStatus::COMPRESSED_FRAME;
            return true;
        } else {
            return false;
        }
    }
    
    template <bool isServer>
void Group<isServer>::removeHttpSocket(HttpSocket<isServer> *httpSocket) {
    if (iterators.size()) {
        iterators.top() = httpSocket->next;
    }
    if (httpSocket->prev == httpSocket->next) {
        httpSocketHead = nullptr;
        httpTimer->stop();
        httpTimer->close();
    } else {
        if (httpSocket->prev) {
            ((HttpSocket<isServer> *) httpSocket->prev)->next = httpSocket->next;
        } else {
            httpSocketHead = (HttpSocket<isServer> *) httpSocket->next;
        }
        if (httpSocket->next) {
            ((HttpSocket<isServer> *) httpSocket->next)->prev = httpSocket->prev;
        }
    }
}
    
                                webSocket->cork(true);
                            Group<isServer>::from(webSocket)->connectionHandler(webSocket, req);
                            // todo: should not uncork if closed!
                            webSocket->cork(false);
                            delete httpSocket;
    
        if (opCode < 3) {
        if (!remainingBytes && fin && !webSocket->fragmentBuffer.length()) {
            if (webSocket->compressionStatus == WebSocket<isServer>::CompressionStatus::COMPRESSED_FRAME) {
                    webSocket->compressionStatus = WebSocket<isServer>::CompressionStatus::ENABLED;
                    data = group->hub->inflate(data, length, group->maxPayload);
                    if (!data) {
                        forceClose(webSocketState);
                        return true;
                    }
            }
    }
    }
    
    namespace uS {
    }
    
            Socket initialSocket(nodeData, getLoop(), fd, ssl);
        uS::Socket *socket = I(&initialSocket);
    
    template <bool isServer>
class ExtensionsNegotiator {
protected:
    int options;
public:
    ExtensionsNegotiator(int wantedOptions);
    std::string generateOffer();
    void readOffer(std::string offer);
    int getNegotiatedOptions();
};