
        
        
    {    Lock& lock;
    Lock templock;
};
    
    
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
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
    
    {    // These inputs are valid because PROTOCOLINFO accepts an OtherLine that is
    // just an OptArguments, which enables multiple spaces to be present
    // between the command and arguments.
    CheckSplitTorReplyLine('COMMAND  ARGS', 'COMMAND', ' ARGS');
    CheckSplitTorReplyLine('COMMAND   EVEN+more  ARGS', 'COMMAND', '  EVEN+more  ARGS');
}
    
    bool RunProtoCompiler(const string& filename,
                      const string& plugin_specific_args,
                      CommandLineInterface* cli, FileDescriptorProto* file) {
  cli->SetInputsAreProtoPathRelative(true);
    }
    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
    SourceLocation location;
    if (descriptor->GetSourceLocation(&location)) {
        WriteDocCommentBodyImpl(printer, location);
    }
}
    
    
    {  printer->Print(
    '\n'
    '#pragma clang diagnostic pop\n'
    '\n'
    '// @@protoc_insertion_point(global_scope)\n');
}
    
      string str_with_null_char('ab\0c', 4);
  EXPECT_EXIT(
      decode_data.AddString(1, str_with_null_char, 'def'),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
  EXPECT_EXIT(
      decode_data.AddString(1, 'def', str_with_null_char),
      ::testing::KilledBySignal(SIGABRT),
      'error: got a null char in a string for making TextFormat data, input:');
    
    // Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// https://developers.google.com/protocol-buffers/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
      const Dtype* cpu_data() const;
  void set_cpu_data(Dtype* data);
  const int* gpu_shape() const;
  const Dtype* gpu_data() const;
  void set_gpu_data(Dtype* data);
  const Dtype* cpu_diff() const;
  const Dtype* gpu_diff() const;
  Dtype* mutable_cpu_data();
  Dtype* mutable_gpu_data();
  Dtype* mutable_cpu_diff();
  Dtype* mutable_gpu_diff();
  void Update();
  void FromProto(const BlobProto& proto, bool reshape = true);
  void ToProto(BlobProto* proto, bool write_diff = false) const;
    
    // Disable the copy and assignment operator for a class.
#define DISABLE_COPY_AND_ASSIGN(classname) \
private:\
  classname(const classname&);\
  classname& operator=(const classname&)
    
      /**
   * @brief Adjust the shapes of top blobs and internal buffers to accommodate
   *        the shapes of the bottom blobs.
   *
   * @param bottom the input blobs, with the requested input shapes
   * @param top the top blobs, which should be reshaped as needed
   *
   * This method should reshape top blobs as needed according to the shapes
   * of the bottom (input) blobs, as well as reshaping any internal buffers
   * and making any other necessary adjustments so that the layer can
   * accommodate the bottom blobs.
   */
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) = 0;
    
      int num_kernels_im2col_;
  int num_kernels_col2im_;
  int conv_out_channels_;
  int conv_in_channels_;
  int conv_out_spatial_dim_;
  int kernel_dim_;
  int col_offset_;
  int output_offset_;
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/lrn_layer.hpp'
    
    
    {}  // namespace caffe
    
    
    {	b2PolyNode(b2Vec2& pos);
	b2PolyNode();
	void AddConnection(b2PolyNode& toMe);
	void RemoveConnection(b2PolyNode& fromMe);
	void RemoveConnectionByIndex(int32 index);
	bool IsConnectedTo(b2PolyNode& me);
	b2PolyNode* GetRightestConnection(b2PolyNode* incoming);
	b2PolyNode* GetRightestConnection(b2Vec2& incomingDir);
};
    
    /* 
EtcBlock4x4.cpp
    
      Note that the compressed data, regardless of the level, can always be
  decompressed using the function fastlz_decompress above.
*/
    
      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS'
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.*/
    
    void opus_fft_neon(const kiss_fft_state *st,
                   const kiss_fft_cpx *fin,
                   kiss_fft_cpx *fout);
    
    /*Constants used by the entropy encoder/decoder.*/
    
    
opus_int32 silk_inner_prod_aligned_scale(
    const opus_int16 *const     inVec1,             /*    I input vector 1                                              */
    const opus_int16 *const     inVec2,             /*    I input vector 2                                              */
    const opus_int              scale,              /*    I number of bits to shift                                     */
    const opus_int              len                 /*    I vector lengths                                              */
);
    
    
    {} // namespace osquery

    
      schedule_.clear();
  if (!obj.HasMember('queries') || !obj['queries'].IsObject()) {
    // This pack contained no queries.
    VLOG(1) << 'No queries defined for pack ' << name;
    return;
  }
    
    Status serializeQueryData(const QueryDataTyped& q,
                          const ColumnNames& cols,
                          JSON& doc,
                          rj::Document& arr) {
  for (const auto& r : q) {
    auto row_obj = doc.getObject();
    auto status = serializeRow(r, cols, doc, row_obj);
    if (!status.ok()) {
      return status;
    }
    doc.push(row_obj, arr);
  }
  return Status();
}
    
    uint32_t Extension_ping_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin('Extension_ping_args');
    }
    
    class ExtensionNull : virtual public ExtensionIf {
 public:
  virtual ~ExtensionNull() {}
  void ping(ExtensionStatus& /* _return */) {
    return;
  }
  void call(ExtensionResponse& /* _return */, const std::string& /* registry */, const std::string& /* item */, const ExtensionPluginRequest& /* request */) {
    return;
  }
  void shutdown() {
    return;
  }
};
    
    
  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->success.clear();
            uint32_t _size48;
            ::apache::thrift::protocol::TType _ktype49;
            ::apache::thrift::protocol::TType _vtype50;
            xfer += iprot->readMapBegin(_ktype49, _vtype50, _size48);
            uint32_t _i52;
            for (_i52 = 0; _i52 < _size48; ++_i52)
            {
              std::string _key53;
              xfer += iprot->readString(_key53);
              InternalOptionInfo& _val54 = this->success[_key53];
              xfer += _val54.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }
    
    using namespace  ::osquery::extensions;
    
    #include <osquery/tables.h>
    
      // Then, log the stack frames
  std::vector<std::string> stackTraces;
  std::vector<char> name(512, 0x0);
  std::ostringstream stackTrace;
  for (unsigned long frame = 0; frame < numFrames; frame++) {
    unsigned long long offset = 0;
    }
    
    
    {    return;
}
    
    
    {    return 0;
}
    
    
    {    return 0;
}

    
    
    {
    {
    {            if(curNode->right)
                stack.push(curNode->right);
            if(curNode->left)
                stack.push(curNode->left);
        }
        return res;
    }
};
    
    #include <iostream>
#include <vector>
#include <stack>
#include <cassert>
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                stack.push(Command('print', command.node));
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};
    
    public:
    vector<int> postorderTraversal(TreeNode* root) {
    }
    
            vector<int> res;
        if(root == NULL)
            return res;
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
    
    class MockProtocolData : public ProtocolData<::apollo::canbus::ChassisDetail> {
 public:
  static const int32_t ID = 0x111;
  MockProtocolData() {}
};
    
    
    {  int ret = x;
  return ret;
}
    
    int ClusterListStatus600::interface_version(const std::uint8_t* bytes,
                                            int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(4, 4);
    }
    
    
    {  int ret = x;
  return ret;
}
    
    int RadarState201::radar_power(const std::uint8_t* bytes,
                               int32_t length) const {
  Byte t0(bytes + 3);
  uint32_t x = t0.get_byte(0, 2);
    }
    
    
    {  for (auto& lon : lon_trajectories) {
    for (auto& lat : lat_trajectories) {
      trajectory_pair_pqueue_.emplace(lon, lat);
    }
  }
}
    
    
    {  // Report Messages
  AddRecvProtocolData<Accelrpt68, true>();
  AddRecvProtocolData<Brakemotorrpt170, true>();
  AddRecvProtocolData<Brakemotorrpt271, true>();
  AddRecvProtocolData<Brakemotorrpt372, true>();
  AddRecvProtocolData<Brakerpt6c, true>();
  AddRecvProtocolData<Datetimerpt83, true>();
  AddRecvProtocolData<Globalrpt6a, true>();
  AddRecvProtocolData<Headlightrpt77, true>();
  AddRecvProtocolData<Hornrpt79, true>();
  AddRecvProtocolData<Latlonheadingrpt82, true>();
  AddRecvProtocolData<Parkingbrakestatusrpt80, true>();
  AddRecvProtocolData<Shiftrpt66, true>();
  AddRecvProtocolData<Steeringmotorrpt173, true>();
  AddRecvProtocolData<Steeringmotorrpt274, true>();
  AddRecvProtocolData<Steeringmotorrpt375, true>();
  AddRecvProtocolData<Steeringrpt16e, true>();
  AddRecvProtocolData<Turnrpt64, true>();
  AddRecvProtocolData<Vehiclespeedrpt6f, true>();
  AddRecvProtocolData<Wheelspeedrpt7a, true>();
  AddRecvProtocolData<Wiperrpt91, true>();
  AddRecvProtocolData<Yawraterpt81, true>();
}
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }