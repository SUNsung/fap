
        
        struct grpc_channel;
    
    CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    
    {}  // namespace grpc

    
    namespace grpc {
    }
    
    
    {#ifdef __cplusplus
} /* namespace regex_constants */
/*
 * import names into boost for backwards compatiblity:
 */
using regex_constants::match_flag_type;
using regex_constants::match_default;
using regex_constants::match_not_bol;
using regex_constants::match_not_eol;
using regex_constants::match_not_bob;
using regex_constants::match_not_eob;
using regex_constants::match_not_bow;
using regex_constants::match_not_eow;
using regex_constants::match_not_dot_newline;
using regex_constants::match_not_dot_null;
using regex_constants::match_prev_avail;
/* using regex_constants::match_init; */
using regex_constants::match_any;
using regex_constants::match_not_null;
using regex_constants::match_continuous;
using regex_constants::match_partial;
/*using regex_constants::match_stop; */
using regex_constants::match_all;
using regex_constants::match_perl;
using regex_constants::match_posix;
using regex_constants::match_nosubs;
using regex_constants::match_extra;
using regex_constants::match_single_line;
/*using regex_constants::match_max; */
using regex_constants::format_all;
using regex_constants::format_sed;
using regex_constants::format_perl;
using regex_constants::format_default;
using regex_constants::format_no_copy;
using regex_constants::format_first_only;
/*using regex_constants::format_is_if;*/
    
    enum saved_state_type
{
   saved_type_end = 0,
   saved_type_paren = 1,
   saved_type_recurse = 2,
   saved_type_assertion = 3,
   saved_state_alt = 4,
   saved_state_repeater_count = 5,
   saved_state_extra_block = 6,
   saved_state_greedy_single_repeat = 7,
   saved_state_rep_slow_dot = 8,
   saved_state_rep_fast_dot = 9,
   saved_state_rep_char = 10,
   saved_state_rep_short_set = 11,
   saved_state_rep_long_set = 12,
   saved_state_non_greedy_long_repeat = 13, 
   saved_state_count = 14
};
    
    
    {   // remember where we got to if this is a leading repeat:
   if((rep->leading) && (count < rep->max))
      restart = position;
   if(position == last)
   {
      // can't repeat any more, remove the pushed state: 
      destroy_single_repeat();
      if((m_match_flags & match_partial) && (position == last) && (position != search_base))
         m_has_partial_match = true;
      if(0 == (rep->can_be_null & mask_skip))
         return true;
   }
   else if(count == rep->max)
   {
      // can't repeat any more, remove the pushed state: 
      destroy_single_repeat();
      if(!can_start(*position, rep->_map, mask_skip))
         return true;
   }
   else
   {
      pmp->count = count;
      pmp->last_position = position;
   }
   pstate = rep->alt.p;
   return false;
}
    
       void put(char_type c);
   void put(const sub_match_type& sub);
   void format_all();
   void format_perl();
   void format_escape();
   void format_conditional();
   void format_until_scope_end();
   bool handle_perl_verb(bool have_brace);
    
    
    {
    {} // namespace BOOST_REGEX_DETAIL_NS
} // namespace boost
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_format.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides formatting output routines for search and replace
  *                operations.  Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    inline Float8 operator+(Float8 lhs, const Float8& rhs) {
  lhs += rhs;
  return lhs;
}
inline Float8 operator-(Float8 lhs, const Float8& rhs) {
  lhs -= rhs;
  return lhs;
}
inline Float8 operator*(Float8 lhs, const Float8& rhs) {
  lhs *= rhs;
  return lhs;
}
inline Float8 operator/(Float8 lhs, const Float8& rhs) {
  lhs /= rhs;
  return lhs;
}
    
    #include <cstdio>
#include <cstring>
#include <string>
#include <istream>
#include <fstream>
    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
    namespace xgboost {
namespace gbm {
/*! \brief model parameters */
struct GBTreeModelParam : public dmlc::Parameter<GBTreeModelParam> {
  /*! \brief number of trees */
  int num_trees;
  /*! \brief number of roots */
  int num_roots;
  /*! \brief number of features to be used by trees */
  int num_feature;
  /*! \brief pad this space, for backward compatibility reason.*/
  int pad_32bit;
  /*! \brief deprecated padding space. */
  int64_t num_pbuffer_deprecated;
  /*!
   * \brief how many output group a single instance can produce
   *  this affects the behavior of number of output we have:
   *    suppose we have n instance and k group, output will be k * n
   */
  int num_output_group;
  /*! \brief size of leaf vector needed in tree */
  int size_leaf_vector;
  /*! \brief reserved parameters */
  int reserved[32];
  /*! \brief constructor */
  GBTreeModelParam() {
    std::memset(this, 0, sizeof(GBTreeModelParam));
    static_assert(sizeof(GBTreeModelParam) == (4 + 2 + 2 + 32) * sizeof(int),
                  '64/32 bit compatibility issue');
  }
  // declare parameters, only declare those that need to be set.
  DMLC_DECLARE_PARAMETER(GBTreeModelParam) {
    DMLC_DECLARE_FIELD(num_output_group)
        .set_lower_bound(1)
        .set_default(1)
        .describe(
            'Number of output groups to be predicted,'
            ' used for multi-class classification.');
    DMLC_DECLARE_FIELD(num_roots).set_lower_bound(1).set_default(1).describe(
        'Tree updater sequence.');
    DMLC_DECLARE_FIELD(num_feature)
        .set_lower_bound(0)
        .describe('Number of features used for training and prediction.');
    DMLC_DECLARE_FIELD(size_leaf_vector)
        .set_lower_bound(0)
        .set_default(0)
        .describe('Reserved option for vector tree.');
  }
};
    }
    }
    
    
    {} // namespace atomics
    
    #include 'gtest/gtest.h'
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    
    {  int64_t send_time_ = 0;
  int64_t recv_time_ = 0;
  int32_t send_succ_count_ = 0;
  int32_t recv_succ_count_ = 0;
  int32_t send_err_count_ = 0;
  int32_t recv_err_count_ = 0;
  std::stringstream recv_ss_;
  CANCardParameter param_;
};
    
      int32_t ret = bcan_recv(_dev_handler, _recv_frames, *frame_num);
  // don't log timeout
  if (ret == RX_TIMEOUT) {
    *frame_num = 0;
    return ErrorCode::OK;
  }
  if (ret < 0) {
    int ret_rece_error = bcan_get_status(_dev_handler);
    AERROR << 'receive message failed, error code:' << ret
           << 'receive error:' << ret_rece_error;
    return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
  }
  *frame_num = ret;
    
    #include 'gflags/gflags.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    #include <string>
#include <vector>
    
    TEST(SocketCanClientRawTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::SOCKET_CAN_RAW);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    
    {  receiver.Init(&can_client, &pm, false);
  EXPECT_EQ(receiver.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(receiver.IsRunning());
  receiver.Stop();
  EXPECT_FALSE(receiver.IsRunning());
}
    
    uint8_t Byte::get_byte(const int32_t start_pos, const int32_t length) const {
  if (start_pos > BYTE_LENGTH - 1 || start_pos < 0 || length < 1) {
    return 0x00;
  }
  int32_t end_pos = std::min(start_pos + length - 1, BYTE_LENGTH - 1);
  int32_t real_len = end_pos + 1 - start_pos;
  uint8_t result = *value_ >> start_pos;
  result &= RANG_MASK_1_L[real_len - 1];
  return result;
}