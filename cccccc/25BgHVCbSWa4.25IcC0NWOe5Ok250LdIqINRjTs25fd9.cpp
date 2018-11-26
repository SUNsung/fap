
        
                    for (; j < size.width; j++)
                dst[j] = internal::saturate_cast<s16>((s32)src0[j] + (s32)src1[j]);
        }
        else
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src0 + j);
                internal::prefetch(src1 + j);
                uint8x16_t v_src0 = vld1q_u8(src0 + j);
                int16x8_t v_src00 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src0)));
                int16x8_t v_src01 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src0)));
                int16x8_t v_src10 = vld1q_s16(src1 + j), v_src11 = vld1q_s16(src1 + j + 8);
                int16x8_t v_dst0 = vaddq_s16(v_src00, v_src10);
                int16x8_t v_dst1 = vaddq_s16(v_src01, v_src11);
                vst1q_s16(dst + j, v_dst0);
                vst1q_s16(dst + j + 8, v_dst1);
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src0 + j)));
                int16x8_t v_src1 = vld1q_s16(src1 + j);
                int16x8_t v_dst = vaddq_s16(v_src0, v_src1);
                vst1q_s16(dst + j, v_dst);
            }
    
        uint16x8_t tprev = vdupq_n_u16(0x0);
    uint16x8_t tcurr = tprev;
    uint16x8_t tnext = tprev;
    uint16x8_t t0, t1, t2, t3, t4;
    for( size_t y = 0; y < size.height; y++ )
    {
        const u8 *srow0, *srow1;
        const u8 *srow2 = internal::getRowPtr(srcBase, srcStride, y);
        const u8 *srow3, *srow4;
        u8 *drow = internal::getRowPtr(dstBase, dstStride, y);
        if (borderType == BORDER_MODE_REFLECT101) {
            srow0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : 2-y);
            srow1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 1);
            srow3 = internal::getRowPtr(srcBase, srcStride, y < size.height-1 ? y+1 : size.height-2);
            srow4 = internal::getRowPtr(srcBase, srcStride, y < size.height-2 ? y+2 : (size.height<<1)-4-y);
        } else  if (borderType == BORDER_MODE_CONSTANT) {
            srow0 = y > 1 ? internal::getRowPtr(srcBase, srcStride, y-2) : tmp;
            srow1 = y > 0 ? internal::getRowPtr(srcBase, srcStride, y-1) : tmp;
            srow3 =  y < size.height-1 ? internal::getRowPtr(srcBase, srcStride, y+1) : tmp;
            srow4 =  y < size.height-2 ? internal::getRowPtr(srcBase, srcStride, y+2) : tmp;
        } else  if (borderType == BORDER_MODE_REFLECT) {
            srow0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : 1-y);
            srow1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
            srow3 = internal::getRowPtr(srcBase, srcStride, y < size.height-1 ? y+1 : size.height-1);
            srow4 = internal::getRowPtr(srcBase, srcStride, y < size.height-2 ? y+2 : (size.height<<1)-3-y);
        } else { // BORDER_MODE_REPLICATE
            srow0 = internal::getRowPtr(srcBase, srcStride, y > 1 ? y-2 : 0);
            srow1 = internal::getRowPtr(srcBase, srcStride, y > 0 ? y-1 : 0);
            srow3 = internal::getRowPtr(srcBase, srcStride, y < size.height-1 ? y+1 : size.height-1);
            srow4 = internal::getRowPtr(srcBase, srcStride, y < size.height-2 ? y+2 : size.height-1);
        }
    }
    
            //tail
        if (lookRight == 0 || i != width)
        {
            uint8x8_t tail0 = vld1_u8(src + (width - 9));//can't get left 1 pixel another way if width==8*k+1
            uint8x8_t tail2 = vtbl1_u8(vld1_u8(src + (width - 8 + lookRight)), vtmask);
            uint8x8_t tail1 = vext_u8(vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(tail0), 8*6)), tail2, 7);
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
                    uint16x8_t vdot1 = vmull_u8(vget_low_u8(vs1), vget_low_u8(vs2));
                uint16x8_t vdot2 = vmull_u8(vget_high_u8(vs1), vget_high_u8(vs2));
    
      virtual void accept(DHTMessageCallback* callback) = 0;
    
    DHTRoutingTable::DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode)
    : localNode_(localNode),
      root_(make_unique<DHTBucketTreeNode>(
          std::make_shared<DHTBucket>(localNode_))),
      numBucket_(1),
      taskQueue_{nullptr},
      taskFactory_{nullptr}
{
}
    
        uint16_t port;
    auto connection = make_unique<DHTConnectionImpl>(family);
    {
      port = e->getBtRegistry()->getUdpPort();
      const std::string& addr = e->getOption()->get(
          family == AF_INET ? PREF_DHT_LISTEN_ADDR : PREF_DHT_LISTEN_ADDR6);
      // If UDP port is already used, use the same port
      // number. Normally IPv4 port is available, then IPv6 port is
      // (especially for port >= 1024). We don't loose much by doing
      // this. We did the same thing in TCP socket. See BtSetup.cc.
      bool rv;
      if (port == 0) {
        auto sgl =
            util::parseIntSegments(e->getOption()->get(PREF_DHT_LISTEN_PORT));
        sgl.normalize();
        rv = connection->bind(port, addr, sgl);
      }
      else {
        rv = connection->bind(port, addr);
      }
      if (!rv) {
        throw DL_ABORT_EX('Error occurred while binding UDP port for DHT');
      }
      localNode->setPort(port);
    }
    A2_LOG_DEBUG(fmt('Initialized local node ID=%s',
                     util::toHex(localNode->getID(), DHT_ID_LENGTH).c_str()));
    auto tracker = std::make_shared<DHTMessageTracker>();
    auto routingTable = make_unique<DHTRoutingTable>(localNode);
    auto factory = make_unique<DHTMessageFactoryImpl>(family);
    auto dispatcher = make_unique<DHTMessageDispatcherImpl>(tracker);
    auto receiver = make_unique<DHTMessageReceiver>(tracker);
    auto taskQueue = make_unique<DHTTaskQueueImpl>();
    auto taskFactory = make_unique<DHTTaskFactoryImpl>();
    auto peerAnnounceStorage = make_unique<DHTPeerAnnounceStorage>();
    auto tokenTracker = make_unique<DHTTokenTracker>();
    // For now, UDPTrackerClient was enabled along with DHT
    auto udpTrackerClient = std::make_shared<UDPTrackerClient>();
    const auto messageTimeout =
        e->getOption()->getAsInt(PREF_DHT_MESSAGE_TIMEOUT);
    // wiring up
    tracker->setRoutingTable(routingTable.get());
    tracker->setMessageFactory(factory.get());
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    namespace aria2 {
    }
    
      DHTTaskExecutor periodicTaskQueue2_;
    
    namespace aria2 {
    }
    
      virtual void process() CXX11_OVERRIDE;