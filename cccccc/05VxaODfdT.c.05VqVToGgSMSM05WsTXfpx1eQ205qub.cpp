
        
        // Asserts that a given statement causes the program to exit, with an
// integer exit status that satisfies predicate, and emitting error output
// that matches regex.
# define ASSERT_EXIT(statement, predicate, regex) \
    GTEST_DEATH_TEST_(statement, predicate, regex, GTEST_FATAL_FAILURE_)
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21>
internal::ValueArray21<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21> Values(T1 v1, T2 v2, T3 v3, T4 v4,
    T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13,
    T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21) {
  return internal::ValueArray21<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21>(v1, v2, v3, v4, v5, v6,
      v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21);
}
    
    #endif  // 0
    
    #ifdef __BORLANDC__
// string.h is not guaranteed to provide strcpy on C++ Builder.
# include <mem.h>
#endif
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
    CallCredentials::~CallCredentials() {}
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H */

    
    void CensusClientCallData::OnDoneRecvMessageCb(void* user_data,
                                               grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  CensusChannelData* channeld =
      reinterpret_cast<CensusChannelData*>(elem->channel_data);
  GPR_ASSERT(calld != nullptr);
  GPR_ASSERT(channeld != nullptr);
  // Stream messages are no longer valid after receiving trailing metadata.
  if ((*calld->recv_message_) != nullptr) {
    calld->recv_message_count_++;
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_message_, GRPC_ERROR_REF(error));
}
    
    
    {  const protobuf::FileDescriptor* file_desc =
      descriptor_pool_->FindFileByName(filename);
  if (file_desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'File not found.');
  }
  std::unordered_set<grpc::string> seen_files;
  FillFileDescriptorResponse(file_desc, response, &seen_files);
  return Status::OK;
}
    
    
    
    #include 'EtcConfig.h'
#include 'Etc.h'
#include 'EtcFilter.h'
    
    
    {	};
    
    
#ifndef AFBLUE_H_
#define AFBLUE_H_
    
       C_MUL(m,a,b)         : m = a*b
   C_FIXDIV( c , div )  : if a fixed point impl., c /= div. noop otherwise
   C_SUB( res, a,b)     : res = a - b
   C_SUBFROM( res , a)  : res -= a
   C_ADDTO( res , a)    : res += a
 * */
#ifdef FIXED_POINT
#include 'arch.h'
    
    
/** 16x32 multiply, followed by a 15-bit shift right and 32-bit add.
    b must fit in 31 bits.
    Result fits in 32 bits. */
#undef MAC16_32_Q15
#define MAC16_32_Q15(c, a, b) ADD32(c, MULT16_32_Q15(a, b))
    
    /** 16x16 multiply-add where the result fits in 32 bits */
#undef MAC16_16
static OPUS_INLINE opus_val32 MAC16_16_armv5e(opus_val32 c, opus_val16 a,
 opus_val16 b)
{
  int res;
  __asm__(
      '#MAC16_16\n\t'
      'smlabb %0, %1, %2, %3;\n'
      : '=r'(res)
      : 'r'(a), 'r'(b), 'r'(c)
  );
  return res;
}
#define MAC16_16(c, a, b) (MAC16_16_armv5e(c, a, b))
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #define silk_SAT8(a)                        ((a) > silk_int8_MAX ? silk_int8_MAX  :       \
                                            ((a) < silk_int8_MIN ? silk_int8_MIN  : (a)))
#define silk_SAT16(a)                       ((a) > silk_int16_MAX ? silk_int16_MAX :      \
                                            ((a) < silk_int16_MIN ? silk_int16_MIN : (a)))
#define silk_SAT32(a)                       ((a) > silk_int32_MAX ? silk_int32_MAX :      \
                                            ((a) < silk_int32_MIN ? silk_int32_MIN : (a)))
    
            if( stack.size() != 0 )
            return false;
    
    
    {
    {        int index = 0;
        for(int i = 0 ; i < count[0] ; i ++)
            nums[index++] = 0;
        for(int i = 0 ; i < count[1] ; i ++)
            nums[index++] = 1;
        for(int i = 0 ; i < count[2] ; i ++)
            nums[index++] = 2;
    }
};
    
    private:
    ListNode* reverse(ListNode* head, int index, ListNode* &left){
    }
    
    #include <iostream>
#include <vector>
    
    
    {            res[level].push_back(node->val);
            if(node->left)
                q.push(make_pair(node->left, level + 1 ));
            if(node->right)
                q.push(make_pair(node->right, level + 1 ));
        }
    
    
    {
    {        stack<TreeNode*> stack;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()){
            if(cur != NULL){
                res.push_back(cur->val);
                stack.push(cur);
                cur = cur->left;
            }
            else{
                cur = stack.top();
                stack.pop();
                cur = cur->right;
            }
        }
        return res;
    }
};
    
    int main() {
    }
    
    private:
    void __postorderTraversal(TreeNode* node, vector<int> &res){
    }
    
            stack<TreeNode*> stack, output;
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    double ObjectGeneralInfo60B::lateral_vel(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 5);
  int32_t x = t0.get_byte(0, 6);
    }
    
    TEST_F(GemMessageManagerTest, GetRecvProtocols) {
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Accelrpt68::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Brakemotorrpt170::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Brakemotorrpt271::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Brakemotorrpt372::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Brakerpt6c::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Datetimerpt83::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Globalrpt6a::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Headlightrpt77::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Hornrpt79::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Latlonheadingrpt82::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(
                  Parkingbrakestatusrpt80::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Shiftrpt66::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Steeringmotorrpt173::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Steeringmotorrpt274::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Steeringmotorrpt375::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Steeringrpt16e::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Turnrpt64::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Vehiclespeedrpt6f::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Wheelspeedrpt7a::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Wiperrpt91::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Yawraterpt81::ID) != nullptr);
}
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
        Q_OBJECT
    
    
    {
    {    inline void clear()
    {
        cache_list.clear();
        cache_map.clear();
    }
};
}
    
        for (i = 0; i < MAP_SIZE; i++)
    {
        pkt = (swFdInfo *) malloc(sizeof(swFdInfo));
        pkt->key = i;
        pkt->fd = i * 37;
        swHashMap_add_int(ht, pkt->fd, pkt);
        lists[i] = pkt;
    }
    
    
    {    return retval;
}

    
        for (i = 0; i < READ_THREAD_N; i++)
    {
        int ret = swPipeUnsock_create(&threads[i].pipe, 1, SOCK_DGRAM);
        ASSERT_EQ(ret, 0);
        threads[i].thread = new std::thread(thread_read, i);
    }
    
        if (extended)
    {
        smart_str_appends(&querystr,
                          'SELECT a.attname, a.attnum, t.typname, a.attlen, a.attnotNULL, a.atthasdef, a.attndims, t.typtype, '
                                  'd.description '
                                  'FROM pg_class as c '
                                  ' JOIN pg_attribute a ON (a.attrelid = c.oid) '
                                  ' JOIN pg_type t ON (a.atttypid = t.oid) '
                                  ' JOIN pg_namespace n ON (c.relnamespace = n.oid) '
                                  ' LEFT JOIN pg_description d ON (d.objoid=a.attrelid AND d.objsubid=a.attnum AND c.oid=d.objoid) '
                                  'WHERE a.attnum > 0  AND c.relname = '');
    }
    else
    {
        smart_str_appends(&querystr,
                          'SELECT a.attname, a.attnum, t.typname, a.attlen, a.attnotnull, a.atthasdef, a.attndims, t.typtype '
                                  'FROM pg_class as c '
                                  ' JOIN pg_attribute a ON (a.attrelid = c.oid) '
                                  ' JOIN pg_type t ON (a.atttypid = t.oid) '
                                  ' JOIN pg_namespace n ON (c.relnamespace = n.oid) '
                                  'WHERE a.attnum > 0 AND c.relname = '');
    }
    escaped = (char *)safe_emalloc(strlen(tmp_name2), 2, 1);
    new_len = PQescapeStringConn(pgsql, escaped, tmp_name2, strlen(tmp_name2), NULL);
    if (new_len)
    {
        smart_str_appendl(&querystr, escaped, new_len);
    }
    efree(escaped);