    // Threshold size in bytes for single gradient to do packing
    size_t m_packThresholdSizeInBytes;
    
        if (!NodeNameExists(toName))
    {
        pToNode = pFromNode->Duplicate(toName, flags);
        AddNodeToNet(pToNode);
    }
    else
    {
        // node already exists
        pToNode = GetNodeFromName(toName);
    }
    
        // vector of sub-sections of this section
    vector<Section*> m_sections; // sub-sections of this section
    std::wstring m_name;         // name of this section, if empty use first part of description (before colon)
    
    
    {    // events
    cudaEventCreateWithFlags(&m_fetchCompleteEvent, flags) || 'cudaEventCreateWithFlags failed';
    cudaEventCreateWithFlags(&m_assignCompleteEvent, flags) || 'cudaEventCreateWithFlags failed';
    cudaEventCreateWithFlags(&m_syncEvent, cudaEventDisableTiming) || 'cudaEventCreateWithFlags failed';
}
    
            // Sync during or after all iters of a BN node are equivalent
        if (useParallelTrain)
        {
            if (m_gradHeader == nullptr)
            {
                m_gradHeader.reset(DistGradHeader::Create(evalNodes.size()), [](DistGradHeader* ptr)
                {
                    DistGradHeader::Destroy(ptr);
                });
            }
    }
    
    template <class ConfigRecordType, typename ElemType>
bool TryGetNetworkFactory(const ConfigRecordType& config, function<ComputationNetworkPtr(DEVICEID_TYPE)>& createNetworkFn)
{
    DEVICEID_TYPE deviceId = DeviceFromConfig(config);
    }
    
            // load and then execute
        if (sections.Exists('edit'))
        {
            auto config = ConfigArray(sections('edit'));
            for (int i = 0; i < config.size(); ++i)
            {
                Parse(sections(config[i]));
            }
            loadOrEditFound = true;
        }
    
    
    {  SnapshotList* list_;                 // just for sanity checks
};
    
      ASSERT_OK(env_->CreateDir('/dir'));
    
    void Mutex::Unlock() { PthreadCall('unlock', pthread_mutex_unlock(&mu_)); }
    
    
    {      // Ok
      break;
    case kSnappyCompression: {
      size_t ulength = 0;
      if (!port::Snappy_GetUncompressedLength(data, n, &ulength)) {
        delete[] buf;
        return Status::Corruption('corrupted compressed block contents');
      }
      char* ubuf = new char[ulength];
      if (!port::Snappy_Uncompress(data, n, ubuf)) {
        delete[] buf;
        delete[] ubuf;
        return Status::Corruption('corrupted compressed block contents');
      }
      delete[] buf;
      result->data = Slice(ubuf, ulength);
      result->heap_allocated = true;
      result->cachable = true;
      break;
    }
    default:
      delete[] buf;
      return Status::Corruption('bad block type');
  }
    
    
    {    current_->Next();
    FindSmallest();
  }
    
    char* EncodeVarint32(char* dst, uint32_t v) {
  // Operate on characters as unsigneds
  unsigned char* ptr = reinterpret_cast<unsigned char*>(dst);
  static const int B = 128;
  if (v < (1<<7)) {
    *(ptr++) = v;
  } else if (v < (1<<14)) {
    *(ptr++) = v | B;
    *(ptr++) = v>>7;
  } else if (v < (1<<21)) {
    *(ptr++) = v | B;
    *(ptr++) = (v>>7) | B;
    *(ptr++) = v>>14;
  } else if (v < (1<<28)) {
    *(ptr++) = v | B;
    *(ptr++) = (v>>7) | B;
    *(ptr++) = (v>>14) | B;
    *(ptr++) = v>>21;
  } else {
    *(ptr++) = v | B;
    *(ptr++) = (v>>7) | B;
    *(ptr++) = (v>>14) | B;
    *(ptr++) = (v>>21) | B;
    *(ptr++) = v>>28;
  }
  return reinterpret_cast<char*>(ptr);
}
    
    TEST(CRC, Mask) {
  uint32_t crc = Value('foo', 3);
  ASSERT_NE(crc, Mask(crc));
  ASSERT_NE(crc, Mask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Unmask(Mask(Mask(crc)))));
}