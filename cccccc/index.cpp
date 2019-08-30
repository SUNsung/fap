
        
        TEST(ClusteredBitVector, SetClearBit) {
  ClusteredBitVector vec;
  vec.appendClearBits(64);
  vec.setBit(3);
  vec.setBit(7);
  vec.setBit(7);
  vec.setBit(63);
  EXPECT_EQ(3u, vec.count());
  EXPECT_EQ(true, vec[3]);
  EXPECT_EQ(true, vec[7]);
  EXPECT_EQ(true, vec[63]);
  EXPECT_EQ(false, vec[0]);
  EXPECT_EQ(false, vec[14]);
  EXPECT_EQ(false, vec[62]);
    }
    
    
    {  ReadBytesResult readBytes(RemoteAddress Addr, uint64_t Size) {
    if (!isAddressValid(Addr, Size))
      return ReadBytesResult(nullptr, [](const void *) {});
    return ReadBytesResult((const void *)(Addr.getAddressData()),
                           [](const void *) {});
  }
};
    
      /// Invoke fn for each Key1 and submap
  void forEachKey1(function_ref<void(const Key1 &, const Key2Map &)> fn) const {
    map1.forEachKey1(fn);
  }