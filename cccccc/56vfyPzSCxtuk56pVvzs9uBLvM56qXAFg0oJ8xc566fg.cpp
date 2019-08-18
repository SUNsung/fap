
        
            IMF_EXPORT
    static bool enabled ();
    
    ///////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2011, Industrial Light & Magic, a division of Lucas
// Digital Ltd. LLC
//
// Portions (c) 2012 Weta Digital Ltd
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// *       Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// *       Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// *       Neither the name of Industrial Light & Magic nor the names of
// its contributors may be used to endorse or promote products derived
// from this software without specific prior written permission. 
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
//
///////////////////////////////////////////////////////////////////////////
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    
    {    std::string		_fileName;
};
    
    
    {    private:
        InputFile* file;
    // for internal use - give OutputFile and TiledOutputFile access to file for copyPixels
    friend void OutputFile::copyPixels(InputPart&);
    friend void TiledOutputFile::copyPixels(InputPart&);
    
};
    
    #include 'src/core/ext/filters/client_channel/parse_address.h'
#include 'src/core/ext/filters/client_channel/resolver/fake/fake_resolver.h'
#include 'src/core/ext/filters/client_channel/server_address.h'
#include 'src/core/lib/gprpp/ref_counted_ptr.h'
#include 'src/core/lib/gprpp/thd.h'
#include 'src/core/lib/iomgr/sockaddr.h'
    
    #include 'src/core/lib/iomgr/iocp_windows.h'
#include 'src/core/lib/iomgr/iomgr.h'
#include 'src/core/lib/iomgr/pollset_windows.h'
#include 'src/core/lib/iomgr/resolve_address.h'
#include 'src/core/lib/iomgr/socket_windows.h'
#include 'src/core/lib/iomgr/tcp_client.h'
#include 'src/core/lib/iomgr/tcp_server.h'
#include 'src/core/lib/iomgr/timer.h'
    
    void GlobalConfigEnvBool::Set(bool value) {
  SetValue(value ? 'true' : 'false');
}
    
    
    {}  // namespace grpc
    
    CallCredentials::~CallCredentials() {}
    
      request.set_message('You should be dead');
  // This may succeed or fail depending on the state of the TCP connection
  stream->Write(request);
  // But the read will definitely fail
  EXPECT_FALSE(stream->Read(&response));
    
      send_response_.set_message(recv_request_.message());
  SerializeToByteBufferInPlace(&send_response_, &send_response_buffer_);
  srv_stream.Write(send_response_buffer_, tag(5));
  cli_stream->Read(&recv_response_, tag(6));
  Verifier().Expect(5, true).Expect(6, true).Verify(cq_.get());
  EXPECT_EQ(send_response_.message(), recv_response_.message());
    
    TEST(ConfigParser, TrimWhitespace) {
  ASSERT_EQ(ConfigParser::TrimWhitespace('foo bar'), 'foo bar');
  ASSERT_EQ(ConfigParser::TrimWhitespace('  foo bar'), 'foo bar');
  ASSERT_EQ(ConfigParser::TrimWhitespace('foo bar  '), 'foo bar');
  ASSERT_EQ(ConfigParser::TrimWhitespace('foo bar\t'), 'foo bar');
  ASSERT_EQ(ConfigParser::TrimWhitespace('   foo bar  '), 'foo bar');
  ASSERT_EQ(ConfigParser::TrimWhitespace('\t\t  foo bar  \t'), 'foo bar');
  ASSERT_EQ(ConfigParser::TrimWhitespace('\tabc\t'), 'abc');
  ASSERT_EQ(ConfigParser::TrimWhitespace('\r abc\t'), 'abc');
}
    
      auto device_id = devices.DeviceId(0);
  EXPECT_EQ(device_id, 2);
  auto device_index = devices.Index(2);
  EXPECT_EQ(device_index, 0);
    
        int begin_idx = skip_index_0 ? 1 : 0;
    feature_set_tree_->Resize(num_col - begin_idx);
    std::iota(feature_set_tree_->HostVector().begin(),
              feature_set_tree_->HostVector().end(), begin_idx);
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost
