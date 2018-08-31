
        
        #endif // BITCOIN_QT_MACDOCKICONHANDLER_H

    
    #ifndef BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
#define BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
    
    #endif // BITCOIN_REVERSELOCK_H

    
        Round(a, b, c, d, e, f, g, h, 0x27b70a85, w0 += sigma1(w14) + w9 + sigma0(w1));
    Round(h, a, b, c, d, e, f, g, 0x2e1b2138, w1 += sigma1(w15) + w10 + sigma0(w2));
    Round(g, h, a, b, c, d, e, f, 0x4d2c6dfc, w2 += sigma1(w0) + w11 + sigma0(w3));
    Round(f, g, h, a, b, c, d, e, 0x53380d13, w3 += sigma1(w1) + w12 + sigma0(w4));
    Round(e, f, g, h, a, b, c, d, 0x650a7354, w4 += sigma1(w2) + w13 + sigma0(w5));
    Round(d, e, f, g, h, a, b, c, 0x766a0abb, w5 += sigma1(w3) + w14 + sigma0(w6));
    Round(c, d, e, f, g, h, a, b, 0x81c2c92e, w6 += sigma1(w4) + w15 + sigma0(w7));
    Round(b, c, d, e, f, g, h, a, 0x92722c85, w7 += sigma1(w5) + w0 + sigma0(w8));
    Round(a, b, c, d, e, f, g, h, 0xa2bfe8a1, w8 += sigma1(w6) + w1 + sigma0(w9));
    Round(h, a, b, c, d, e, f, g, 0xa81a664b, w9 += sigma1(w7) + w2 + sigma0(w10));
    Round(g, h, a, b, c, d, e, f, 0xc24b8b70, w10 += sigma1(w8) + w3 + sigma0(w11));
    Round(f, g, h, a, b, c, d, e, 0xc76c51a3, w11 += sigma1(w9) + w4 + sigma0(w12));
    Round(e, f, g, h, a, b, c, d, 0xd192e819, w12 += sigma1(w10) + w5 + sigma0(w13));
    Round(d, e, f, g, h, a, b, c, 0xd6990624, w13 += sigma1(w11) + w6 + sigma0(w14));
    Round(c, d, e, f, g, h, a, b, 0xf40e3585, w14 += sigma1(w12) + w7 + sigma0(w15));
    Round(b, c, d, e, f, g, h, a, 0x106aa070, w15 += sigma1(w13) + w8 + sigma0(w0));
    
    
    {    secp256k1_scalar_get_b32(brx, sigr);
    r = secp256k1_fe_set_b32(&fx, brx);
    (void)r;
    VERIFY_CHECK(r); /* brx comes from a scalar, so is less than the order; certainly less than p */
    if (recid & 2) {
        if (secp256k1_fe_cmp_var(&fx, &secp256k1_ecdsa_const_p_minus_order) >= 0) {
            return 0;
        }
        secp256k1_fe_add(&fx, &secp256k1_ecdsa_const_order_as_fe);
    }
    if (!secp256k1_ge_set_xo_var(&x, &fx, recid & 1)) {
        return 0;
    }
    secp256k1_gej_set_ge(&xj, &x);
    secp256k1_scalar_inverse_var(&rn, sigr);
    secp256k1_scalar_mul(&u1, &rn, message);
    secp256k1_scalar_negate(&u1, &u1);
    secp256k1_scalar_mul(&u2, &rn, sigs);
    secp256k1_ecmult(ctx, &qj, &xj, &u2, &u1);
    secp256k1_ge_set_gej_var(pubkey, &qj);
    return !secp256k1_gej_is_infinity(&qj);
}
    
        /* Check bad contexts and NULLs for signing */
    ecount = 0;
    CHECK(secp256k1_ecdsa_sign_recoverable(none, &recsig, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(sign, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_sign_recoverable(vrfy, &recsig, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, NULL, message, privkey, NULL, NULL) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, NULL, privkey, NULL, NULL) == 0);
    CHECK(ecount == 4);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, NULL, NULL, NULL) == 0);
    CHECK(ecount == 5);
    /* This will fail or succeed randomly, and in either case will not ARG_CHECK failure */
    secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, recovery_test_nonce_function, NULL);
    CHECK(ecount == 5);
    /* These will all fail, but not in ARG_CHECK way */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, zero_privkey, NULL, NULL) == 0);
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, over_privkey, NULL, NULL) == 0);
    /* This one will succeed. */
    CHECK(secp256k1_ecdsa_sign_recoverable(both, &recsig, message, privkey, NULL, NULL) == 1);
    CHECK(ecount == 5);
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                         int32_t *const frame_num) = 0;
    
    
    {    // wait for other agent receiving is ok.
    while (!other_agent()->is_receiving()) {
      std::this_thread::yield();
    }
    int64_t start = AsInt64<micros>(Clock::Now());
    while (true) {
      // param->print();
      if (count >= FLAGS_agent_mutual_send_frames) {
        break;
      }
      for (int32_t i = 0; i < MAX_CAN_SEND_FRAME_LEN; ++i) {
        // frames[i].id = id_count & 0x3FF;
        send_id = id;
        frames[i].id = id;
        frames[i].len = 8;
        frames[i].data[7] = count % 256;
        for (int32_t j = 0; j < 7; ++j) {
          frames[i].data[j] = j;
        }
        ++count;
        ++id;
        if (id > end_id) {
          id = start_id;
        }
      }
      int32_t frame_num = MAX_CAN_SEND_FRAME_LEN;
      if (client->Send(frames, &frame_num) != ErrorCode::OK) {
        param->send_err_cnt += MAX_CAN_SEND_FRAME_LEN;
        AERROR << 'send_thread send msg failed!, id:' << send_id
               << ', conf:' << param->conf.ShortDebugString();
      } else {
        param->send_cnt += frame_num;
        param->send_lost_cnt += MAX_CAN_SEND_FRAME_LEN - frame_num;
        AINFO << 'send_frames: ' << frame_num << 'send_frame#'
              << frames[0].CanFrameString()
              << ' send lost:' << MAX_CAN_SEND_FRAME_LEN - frame_num
              << ', conf:' << param->conf.ShortDebugString();
      }
    }
    int64_t end = AsInt64<micros>(Clock::Now());
    param->send_time = end - start;
    // In case for finish too quick to receiver miss some msg
    sleep(2);
    AINFO << 'Send thread stopping...' << param->conf.ShortDebugString();
    is_sending_finish(true);
    return;
  }
    
    #include <vector>
    
    
    {  if (static_cast<size_t>(*frame_num) != frames.size()) {
    AERROR << 'frame num is incorrect.';
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
  for (size_t i = 0; i < frames.size(); ++i) {
    ADEBUG << 'send frame i:' << i;
    ADEBUG << frames[i].CanFrameString();
    frame_info_ << frames[i].CanFrameString();
  }
  ++send_counter_;
  return ErrorCode::OK;
}
    
    #include <linux/can.h>
#include <linux/can/raw.h>
    
    template <typename SensorType>
std::condition_variable* MessageManager<SensorType>::GetMutableCVar() {
  return &cvar_;
}
    
    #include <cmath>
#include <numeric>
    
    #ifndef MODULES_DRIVERS_CANBUS_SENSOR_GFLAGS_H_
#define MODULES_DRIVERS_CANBUS_SENSOR_GFLAGS_H_