
        
          // Calculate the depth at which the requirement's generic parameters
  // appear in the synthetic signature.
  unsigned depth = 0;
  if (covariantSelf) {
    depth++;
  }
  if (conformanceSig) {
    depth += conformanceSig->getGenericParams().back()->getDepth() + 1;
  }
    
      Storage() = delete;
    
    
    {  //DefaultCacheKey() = default;
  DefaultCacheKey(void *Key, CacheImpl::CallBacks *CBs) : Key(Key), CBs(CBs) {}
};
    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
    /// Match the beginning of the name to the given type name.
StringRef swift::matchLeadingTypeName(StringRef name,
                                      OmissionTypeName typeName) {
  // Match the camelCase beginning of the name to the
  // ending of the type name.
  auto nameWords = camel_case::getWords(name);
  auto typeWords = camel_case::getWords(typeName.Name);
  auto nameWordIter = nameWords.begin(),
    nameWordIterEnd = nameWords.end();
  auto typeWordRevIter = typeWords.rbegin(),
    typeWordRevIterEnd = typeWords.rend();
    }
    
    #include 'llvm/ADT/PointerUnion.h'
    
    class SignVerifyMessageDialog : public QDialog
{
    Q_OBJECT
    }
    
    public Q_SLOTS:
    void updateRates();
    void setGraphRangeMins(int mins);
    void clear();
    
        ~reverse_lock() {
        templock.lock();
        templock.swap(lock);
    }
    
    #include <univalue.h>
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
    static void secp256k1_rfc6979_hmac_sha256_generate(secp256k1_rfc6979_hmac_sha256_t *rng, unsigned char *out, size_t outlen) {
    /* RFC6979 3.2.h. */
    static const unsigned char zero[1] = {0x00};
    if (rng->retry) {
        secp256k1_hmac_sha256_t hmac;
        secp256k1_hmac_sha256_initialize(&hmac, rng->k, 32);
        secp256k1_hmac_sha256_write(&hmac, rng->v, 32);
        secp256k1_hmac_sha256_write(&hmac, zero, 1);
        secp256k1_hmac_sha256_finalize(&hmac, rng->k);
        secp256k1_hmac_sha256_initialize(&hmac, rng->k, 32);
        secp256k1_hmac_sha256_write(&hmac, rng->v, 32);
        secp256k1_hmac_sha256_finalize(&hmac, rng->v);
    }
    }
    
        secp256k1_pubkey_load(ctx, &pt, point);
    secp256k1_scalar_set_b32(&s, scalar, &overflow);
    if (overflow || secp256k1_scalar_is_zero(&s)) {
        ret = 0;
    } else {
        unsigned char x[32];
        unsigned char y[1];
        secp256k1_sha256_t sha;
    }
    
    
    {
    {        /* compute using ECDH function */
        CHECK(secp256k1_ec_pubkey_create(ctx, &point[0], s_one) == 1);
        CHECK(secp256k1_ecdh(ctx, output_ecdh, &point[0], s_b32) == 1);
        /* compute 'explicitly' */
        CHECK(secp256k1_ec_pubkey_create(ctx, &point[1], s_b32) == 1);
        CHECK(secp256k1_ec_pubkey_serialize(ctx, point_ser, &point_ser_len, &point[1], SECP256K1_EC_COMPRESSED) == 1);
        CHECK(point_ser_len == sizeof(point_ser));
        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, point_ser, point_ser_len);
        secp256k1_sha256_finalize(&sha, output_ser);
        /* compare */
        CHECK(memcmp(output_ecdh, output_ser, sizeof(output_ser)) == 0);
    }
}
    
    
    {    /* Test r/s equal to zero */
    {
        /* (1,1) encoded in DER. */
        unsigned char sigcder[8] = {0x30, 0x06, 0x02, 0x01, 0x01, 0x02, 0x01, 0x01};
        unsigned char sigc64[64] = {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        };
        secp256k1_pubkey pubkeyc;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyc, &rsig, msg32) == 1);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 1);
        sigcder[4] = 0;
        sigc64[31] = 0;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyb, &rsig, msg32) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 0);
        sigcder[4] = 1;
        sigcder[7] = 0;
        sigc64[31] = 1;
        sigc64[63] = 0;
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigc64, 0) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyb, &rsig, msg32) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder, sizeof(sigcder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyc) == 0);
    }
}
    
    BOOST_AUTO_TEST_CASE(util_ParseTorReplyMapping)
{
    // Data we should receive during normal usage
    CheckParseTorReplyMapping(
        'METHODS=COOKIE,SAFECOOKIE COOKIEFILE=\'/home/x/.tor/control_auth_cookie\'', {
            {'METHODS', 'COOKIE,SAFECOOKIE'},
            {'COOKIEFILE', '/home/x/.tor/control_auth_cookie'},
        });
    CheckParseTorReplyMapping(
        'METHODS=NULL', {
            {'METHODS', 'NULL'},
        });
    CheckParseTorReplyMapping(
        'METHODS=HASHEDPASSWORD', {
            {'METHODS', 'HASHEDPASSWORD'},
        });
    CheckParseTorReplyMapping(
        'Tor=\'0.2.9.8 (git-a0df013ea241b026)\'', {
            {'Tor', '0.2.9.8 (git-a0df013ea241b026)'},
        });
    CheckParseTorReplyMapping(
        'SERVERHASH=aaaa SERVERNONCE=bbbb', {
            {'SERVERHASH', 'aaaa'},
            {'SERVERNONCE', 'bbbb'},
        });
    CheckParseTorReplyMapping(
        'ServiceID=exampleonion1234', {
            {'ServiceID', 'exampleonion1234'},
        });
    CheckParseTorReplyMapping(
        'PrivateKey=RSA1024:BLOB', {
            {'PrivateKey', 'RSA1024:BLOB'},
        });
    CheckParseTorReplyMapping(
        'ClientAuth=bob:BLOB', {
            {'ClientAuth', 'bob:BLOB'},
        });
    }
    
    /**
 * @brief Fills a Blob with values @f$ x \sim N(0, \sigma^2) @f$ where
 *        @f$ \sigma^2 @f$ is set inversely proportional to number of incoming
 *        nodes, outgoing nodes, or their average.
 *
 * A Filler based on the paper [He, Zhang, Ren and Sun 2015]: Specifically
 * accounts for ReLU nonlinearities.
 *
 * Aside: for another perspective on the scaling factor, see the derivation of
 * [Saxe, McClelland, and Ganguli 2013 (v3)].
 *
 * It fills the incoming matrix by randomly sampling Gaussian data with std =
 * sqrt(2 / n) where n is the fan_in, fan_out, or their average, depending on
 * the variance_norm option. You should make sure the input blob has shape (num,
 * a, b, c) where a * b * c = fan_in and num * b * c = fan_out. Note that this
 * is currently not the case for inner product layers.
 */
template <typename Dtype>
class MSRAFiller : public Filler<Dtype> {
 public:
  explicit MSRAFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype std = sqrt(Dtype(2) / n);
    caffe_rng_gaussian<Dtype>(blob->count(), Dtype(0), std,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
      virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_POOLING_LAYER_HPP_

    
    namespace caffe {
    }
    
    
    {}  // namespace grpc

    
    #include 'src/cpp/ext/filters/census/context.h'
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
    inline absl::string_view GetMethod(const grpc_slice* path) {
  if (GRPC_SLICE_IS_EMPTY(*path)) {
    return '';
  }
  // Check for leading '/' and trim it if present.
  return absl::StripPrefix(absl::string_view(reinterpret_cast<const char*>(
                                                 GRPC_SLICE_START_PTR(*path)),
                                             GRPC_SLICE_LENGTH(*path)),
                           '/');
}
    
      // Deserializes rpc server stats from the incoming 'buf' into *time.  Returns
  // number of bytes decoded. If the buffer is of insufficient size (it must be
  // at least kRpcServerStatsSize bytes) or the encoding version or field ID are
  // unrecognized, *time will be set to 0 and it will return
  // kEncodeDecodeFailure. Inlined for performance reasons.
  static size_t Decode(absl::string_view buf, uint64_t* time) {
    if (buf.size() < kRpcServerStatsSize) {
      *time = 0;
      return kEncodeDecodeFailure;
    }
    }
    
    // Force InitProtoReflectionServerBuilderPlugin() to be called at static
// initialization time.
struct StaticProtoReflectionPluginInitializer {
  StaticProtoReflectionPluginInitializer() {
    InitProtoReflectionServerBuilderPlugin();
  }
} static_proto_reflection_plugin_initializer;
    
    #include <condition_variable>
#include <list>
#include <memory>
#include <mutex>
#include <queue>
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    
    
    //----------------------------------------------------------------------------
//
//  ScriptSet implementation
//
//----------------------------------------------------------------------------
ScriptSet::ScriptSet() {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] = 0;
    }
}
    
    U_NAMESPACE_END
    
    #ifndef __SHARED_PLURALRULES_H__
#define __SHARED_PLURALRULES_H__
    
    class UnicodeString;
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or OTHER
     */
    static int32_t indexOrOtherIndexFromString(const char *keyword) {
        int32_t i = indexOrNegativeFromString(keyword);
        return i >= 0 ? i : OTHER;
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
    
    PointArray* PointArray::clone() const
{
    vector<Vec2> newArray = _controlPoints;
    
    PointArray *points = new (std::nothrow) PointArray();
    points->initWithCapacity(10);
    points->setControlPoints(std::move(newArray));
    }
    
    // NOTE: the original code used the same class for the `reverse()` method
EASERATE_TEMPLATE_IMPL(EaseIn, tweenfunc::easeIn);
EASERATE_TEMPLATE_IMPL(EaseOut, tweenfunc::easeOut);
EASERATE_TEMPLATE_IMPL(EaseInOut, tweenfunc::easeInOut);
    
    NS_CC_BEGIN
    
        /* Creates an animation with an array of SpriteFrame and a delay between frames in seconds.
     * The frames will be added with one 'delay unit'.
     * @since v0.99.5
     * @param arrayOfSpriteFrameNames An array of SpriteFrame.
     * @param delay A delay between frames in seconds.
     * @param loops The times the animation is going to loop.
     */
    static Animation* createWithSpriteFrames(const Vector<SpriteFrame*>& arrayOfSpriteFrameNames, float delay = 0.0f, unsigned int loops = 1);
    
        friend class Director;
    void setIgnoreContentScaleFactor(bool bIgnoreContentScaleFactor);
    
    void PolygonInfo::setTriangles(const TrianglesCommand::Triangles& other)
{
    this->releaseVertsAndIndices();
    _isVertsOwner = false;
    
    this->triangles.vertCount = other.vertCount;
    this->triangles.indexCount = other.indexCount;
    this->triangles.verts = other.verts;
    this->triangles.indices = other.indices;
}
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    
    {  int ret = x;
  return ret;
}
    
    double ObjectExtendedInfo60D::object_length(const std::uint8_t* bytes,
                                            int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 8);
    }
    
      Byte t1(bytes + 6);
  int32_t t = t1.get_byte(5, 3);
    
    
    {  int ret = x;
  return ret;
}
    
    #include 'modules/drivers/radar/conti_radar/protocol/radar_state_201.h'
    
    namespace apollo {
namespace localization {
namespace msf {
    }
    }
    }
    
      // coordinate frame
  std::string from_coordinate = geo_text->Value();
  int eastZone = GetLongZone(east);
  int westZone = GetLongZone(west);
  if (eastZone != westZone) {
    std::string err_msg = 'unsupport data in more than one zones';
    return Status(apollo::common::ErrorCode::HDMAP_DATA_ERROR, err_msg);
  }
  int zone = westZone;
  std::string to_coordinate = '+proj=utm +zone=' + std::to_string(zone) +
                              ' +ellps=WGS84 +datum=WGS84 +units=m +no_defs';
  CoordinateConvertTool::GetInstance()->SetConvertParam(from_coordinate,
                                                        to_coordinate);
    
    TEST(TestPiecewiseLinearConstraint, add_derivative_boundary) {
  PiecewiseLinearConstraint constraint(10, 0.1);
  std::vector<uint32_t> index_list;
  std::vector<double> lower_bound;
  std::vector<double> upper_bound;
  for (uint32_t i = 0; i < 10; ++i) {
    index_list.push_back(i);
    lower_bound.push_back(1.0);
    upper_bound.push_back(100.0);
  }
    }
    
    Eigen::MatrixXd SplineSegKernel::DerivativeKernel(const uint32_t num_params,
                                                  const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateDerivative(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'derivative', &term_matrix);
  return kernel_derivative_.block(0, 0, num_params, num_params)
      .cwiseProduct(term_matrix);
}
    
    #include 'modules/prediction/container/obstacles/obstacle_clusters.h'