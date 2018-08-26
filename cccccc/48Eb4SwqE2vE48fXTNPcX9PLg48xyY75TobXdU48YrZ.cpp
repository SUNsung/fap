
        
        static bool anyMutable(ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    if (field.isMutable())
      return true;
  }
  return false;
}
    
      /// Retrieve the generic signature that describes the shape of this
  /// storage.
  GenericSignature *getGenericSignature() const { return genericSig; }
    
    void CacheImpl::removeAll() {
  cache_remove_all(static_cast<cache_t*>(Impl));
}
    
        bool ExecutionFailed = false;
    ProcessInfo PI = ExecuteNoWait(T->ExecPath, Argv.data(),
                                   (const char **)envp,
                                   /*redirects*/None, /*memoryLimit*/0,
                                   /*ErrMsg*/nullptr, &ExecutionFailed);
    if (ExecutionFailed) {
      return true;
    }
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
      ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart, C + 1,
                     llvm::lenientConversion);
  if (TargetStart == C) {
    // The source string contains an ill-formed subsequence at the end.
    return S;
  }
    
    public Q_SLOTS:
    void updateRates();
    void setGraphRangeMins(int mins);
    void clear();
    
    /** Check bounds on a command line confirm target */
unsigned int ParseConfirmTarget(const UniValue& value);
    
    static void secp256k1_ge_to_storage(secp256k1_ge_storage *r, const secp256k1_ge *a) {
    secp256k1_fe x, y;
    VERIFY_CHECK(!a->infinity);
    x = a->x;
    secp256k1_fe_normalize(&x);
    y = a->y;
    secp256k1_fe_normalize(&y);
    secp256k1_fe_to_storage(&r->x, &x);
    secp256k1_fe_to_storage(&r->y, &y);
}
    
    void run_ecdh_tests(void) {
    test_ecdh_api();
    test_ecdh_generator_basepoint();
    test_bad_scalar();
}
    
    
    {    /* Serialize/parse compact and verify/recover. */
    extra[0] = 0;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[0], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign(ctx, &signature[0], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[4], message, privkey, NULL, NULL) == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[1], message, privkey, NULL, extra) == 1);
    extra[31] = 1;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[2], message, privkey, NULL, extra) == 1);
    extra[31] = 0;
    extra[0] = 1;
    CHECK(secp256k1_ecdsa_sign_recoverable(ctx, &rsignature[3], message, privkey, NULL, extra) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(ctx, sig, &recid, &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(memcmp(&signature[4], &signature[0], 64) == 0);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 1);
    memset(&rsignature[4], 0, sizeof(rsignature[4]));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 1);
    /* Parse compact (with recovery id) and recover. */
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recover(ctx, &recpubkey, &rsignature[4], message) == 1);
    CHECK(memcmp(&pubkey, &recpubkey, sizeof(pubkey)) == 0);
    /* Serialize/destroy/parse signature and verify again. */
    CHECK(secp256k1_ecdsa_recoverable_signature_serialize_compact(ctx, sig, &recid, &rsignature[4]) == 1);
    sig[secp256k1_rand_bits(6)] += 1 + secp256k1_rand_int(255);
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsignature[4], sig, recid) == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(ctx, &signature[4], &rsignature[4]) == 1);
    CHECK(secp256k1_ecdsa_verify(ctx, &signature[4], message, &pubkey) == 0);
    /* Recover again */
    CHECK(secp256k1_ecdsa_recover(ctx, &recpubkey, &rsignature[4], message) == 0 ||
          memcmp(&pubkey, &recpubkey, sizeof(pubkey)) != 0);
}
    
    
    {    RejectDifficultyMismatch(difficulty, expected_difficulty);
}
    
    
    {    BOOST_CHECK_EQUAL(sub.m_expected_tip, chainActive.Tip()->GetBlockHash());
}
    
    #define TegraUnaryOpScale_Invoker(name, func, scale_cnt, ...) TegraGenOp_Invoker(name, func, 1, 1, scale_cnt, \
                                                                                 RANGE_DATA(ST, src1_data, src1_step), src1_step, \
                                                                                 RANGE_DATA(DT, dst1_data, dst1_step), dst1_step, __VA_ARGS__)
    
    void absDiff(const Size2D &size,
             const u8 *src0Base, ptrdiff_t src0Stride,
             const u8 *src1Base, ptrdiff_t src1Stride,
             u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<u8>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    #ifdef CAROTENE_NEON
    // in this case we can use the following scheme:
    // dst[p] = (src[p] + dst[p]) >> 1
    // which is faster
    if (alpha == 0.5f)
    {
        internal::vtransform(size,
                             srcBase, srcStride,
                             dstBase, dstStride,
                             dstBase, dstStride,
                             AccumulateWeightedHalf());
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s32, s8, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d0-d1}, [%[src1]]                              \n\t'
             'vld1.32 {d2-d3}, [%[src2]]                              \n\t'
             'vqmovn.s32 d4, q0                                       \n\t'
             'vqmovn.s32 d5, q1                                       \n\t'
             'vqmovn.s16  d6, q2                                      \n\t'
             'vst1.8 {d6}, [%[dst]]                                   \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i + 0),
               [src2] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i)
             : 'd0','d1','d2','d3','d4','d5','d6'
         );
     }
})
#else
CVT_FUNC(s32, s8, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int32x4_t vline1_s32 = vld1q_s32(_src + i);
         int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
    }
    }
    
    #include 'common.hpp'
#include 'saturate_cast.hpp'
    
    // It is possible to accumulate up to 131071 schar multiplication results in sint32 without overflow
// We process 16 elements and accumulate two new elements per step. So we could handle 131071/2*16 elements
#define DOT_INT_BLOCKSIZE 131070*8
    f64 result = 0.0;
    for (size_t row = 0; row < size.height; ++row)
    {
        const s8 * src0 = internal::getRowPtr(src0Base, src0Stride, row);
        const s8 * src1 = internal::getRowPtr(src1Base, src1Stride, row);
    }
    
    namespace leveldb {
    }
    
      void DoWrite(ThreadState* thread, bool seq) {
    if (num_ != FLAGS_num) {
      char msg[100];
      snprintf(msg, sizeof(msg), '(%d ops)', num_);
      thread->stats.AddMessage(msg);
    }
    }
    
      FileState(const std::string& filename)
      : filename_(filename),
        pos_(-1),
        pos_at_last_sync_(-1),
        pos_at_last_flush_(-1) { }
    
    TEST(LogTest, ReadPastEnd) {
  CheckOffsetPastEndReturnsNoRecords(5);
}
    
        ArchiveFile(src);
    if (counter == 0) {
      builder->Abandon();  // Nothing to save
    } else {
      s = builder->Finish();
      if (s.ok()) {
        t.meta.file_size = builder->FileSize();
      }
    }
    delete builder;
    builder = nullptr;
    
    TEST(CanClientFactoryTest, CreateCanClient) {
  auto *can_factory = CanClientFactory::instance();
  EXPECT_TRUE(can_factory != nullptr);
    }
    
    
    {    bool first = true;
    while (!other_agent()->is_sending_finish()) {
      is_receiving(true);
      int32_t len = MAX_CAN_RECV_FRAME_LEN;
      ErrorCode ret = client->Receive(&buf, &len);
      if (len == 0) {
        AINFO << 'recv frame:0';
        continue;
      }
      if (first) {
        start = AsInt64<micros>(Clock::Now());
        first = false;
      }
      if (ret != ErrorCode::OK || len == 0) {
        // AINFO << 'channel:' << param->conf.channel_id()
        //      << ', recv frame:failed, code:' << ret;
        AINFO << 'recv error:' << ret;
        continue;
      }
      for (int32_t i = 0; i < len; ++i) {
        param->recv_cnt = param->recv_cnt + 1;
        AINFO << 'recv_frame#' << buf[i].CanFrameString()
              << ' conf:' << param->conf.ShortDebugString()
              << ',recv_cnt: ' << param->recv_cnt;
      }
    }
    int64_t end = AsInt64<micros>(Clock::Now());
    param->recv_time = end - start;
    AINFO << 'Recv thread stopping..., conf:' << param->conf.ShortDebugString();
    return;
  }
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Receive(std::vector<CanFrame> *frames,
                                    int32_t *const frame_num) override;
    
    #endif  // MODULES_DRIVERS_CANBUS_CAN_COMM_CAN_RECEIVER_H_

    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
    
    std::string Byte::to_hex_string() const { return byte_to_hex(*value_); }
    
    #ifndef MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
#define MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
    
    #include 'modules/drivers/canbus/sensor_gflags.h'