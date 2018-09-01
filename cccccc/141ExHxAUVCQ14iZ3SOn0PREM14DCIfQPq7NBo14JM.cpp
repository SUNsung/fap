
        
          // Calculate the depth at which the requirement's generic parameters
  // appear in the synthetic signature.
  unsigned depth = 0;
  if (covariantSelf) {
    depth++;
  }
  if (conformanceSig) {
    depth += conformanceSig->getGenericParams().back()->getDepth() + 1;
  }
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
    %# Ignore the following admonition; it applies to the resulting .cpp file only
//// Automatically Generated From UnicodeExtendedGraphemeClusters.cpp.gyb.
//// Do Not Edit Directly!
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
    
    
    {  return forInvalid();
}
    
    
    {  /* Used as a flag during the def's mutable stage.  Must be false unless
   * it is currently being used by a function on the stack.  This allows
   * us to easily determine which defs were passed into the function's
   * current invocation. */
  bool came_from_user;
};
    
    bool RunProtoCompiler(const string& filename,
                      const string& plugin_specific_args,
                      CommandLineInterface* cli, FileDescriptorProto* file) {
  cli->SetInputsAreProtoPathRelative(true);
    }
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message) {
    WriteDocCommentBody(printer, message);
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_GENERATOR_H__

    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(PrimitiveFieldGenerator);
};
    
    std::shared_ptr<Channel> CreateInsecureChannelFromFd(const grpc::string& target,
                                                     int fd) {
  internal::GrpcLibrary init_lib;
  init_lib.init();
  return CreateChannelInternal(
      '', grpc_insecure_channel_create_from_fd(target.c_str(), fd, nullptr));
}
    
    #include <grpc/grpc_cronet.h>
#include <grpcpp/channel.h>
#include <grpcpp/support/channel_arguments.h>
#include 'src/cpp/client/create_channel_internal.h'
    
    // begin a call to a named method
std::unique_ptr<GenericClientAsyncReaderWriter> GenericStub::Call(
    ClientContext* context, const grpc::string& method, CompletionQueue* cq,
    void* tag) {
  return CallInternal(channel_.get(), context, method, cq, true, tag);
}
    
    static internal::GrpcLibraryInitializer g_gli_initializer;
    
    #include 'src/cpp/ext/filters/census/context.h'
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    #include <grpc/support/port_platform.h>
    
    	szArgList = CommandLineToArgvW(GetCommandLine(), &argCount);
    
    Speed *Speed::reverse() const
{
    if (_innerAction)
        return Speed::create(_innerAction->reverse(), _speed);
    
    return nullptr;
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    ssize_t ActionManager::getNumberOfRunningActions() const
{
    ssize_t count = 0;
    struct _hashElement* element = nullptr;
    struct _hashElement* tmp = nullptr;
    HASH_ITER(hh, _targets, element, tmp)
    {
        count += (element->actions ? element->actions->num : 0);
    }
    return count;
}
    
    GridBase* PageTurn3D::getGrid()
{
    auto result = Grid3D::create(_gridSize, _gridNodeTarget->getGridRect());
    if (result)
    {
        result->setNeedDepthTestForBlit(true);
    }
    
    return result;
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    void AnimationCache::destroyInstance()
{
    CC_SAFE_RELEASE_NULL(s_sharedAnimationCache);
}
    
    bool AtlasNode::initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender)
{
    CCASSERT(tile.size() > 0, 'file size should not be empty');
    Texture2D *texture = Director::getInstance()->getTextureCache()->addImage(tile);
    return initWithTexture(texture, tileWidth, tileHeight, itemsToRender);
}
    
    std::string DHTResponseMessage::toString() const
{
  return fmt('dht response %s TransactionID=%s Remote:%s(%u), id=%s, v=%s, %s',
             getMessageType().c_str(), util::toHex(getTransactionID()).c_str(),
             getRemoteNode()->getIPAddress().c_str(),
             getRemoteNode()->getPort(),
             util::toHex(getRemoteNode()->getID(), DHT_ID_LENGTH).c_str(),
             util::torrentPercentEncode(getVersion()).c_str(),
             toStringOptional().c_str());
}
    
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
    
    #define WRITE_CHECK(fp, ptr, count)                                            \
  if (fp.write((ptr), (count)) != (count)) {                                   \
    throw DL_ABORT_EX(                                                         \
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));     \
  }
    
    #endif // D_DHT_SETUP_H

    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) CXX11_OVERRIDE;
    
      // show some sample bytes
  virtual std::string toString() const CXX11_OVERRIDE;
    
    const int CAN_RESULT_SUCC = 0;
const int CAN_ERROR_BASE = 2000;
const int CAN_ERROR_OPEN_DEVICE_FAILED = CAN_ERROR_BASE + 1;
const int CAN_ERROR_FRAME_NUM = CAN_ERROR_BASE + 2;
const int CAN_ERROR_SEND_FAILED = CAN_ERROR_BASE + 3;
const int CAN_ERROR_RECV_FAILED = CAN_ERROR_BASE + 4;
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    const uint8_t BIT_MASK_1[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
const uint8_t BIT_MASK_0[] = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};
const uint8_t RANG_MASK_1_L[] = {0x01, 0x03, 0x07, 0x0F,
                                 0x1F, 0x3F, 0x7F, 0xFF};
const uint8_t RANG_MASK_0_L[] = {0xFE, 0XFC, 0xF8, 0xF0,
                                 0xE0, 0xC0, 0x80, 0x00};
    
      // Init can client
  auto *can_factory = CanClientFactory::instance();
  can_factory->RegisterCanClients();
  can_client_ = can_factory->CreateCANClient(canbus_conf_.can_card_parameter());
  if (!can_client_) {
    return OnError('Failed to create can client.');
  }
  AINFO << 'Can client is successfully created.';