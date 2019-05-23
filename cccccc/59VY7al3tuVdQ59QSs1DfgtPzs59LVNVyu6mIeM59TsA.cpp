
        
        
    {    Lock& lock;
    Lock templock;
};
    
      // Simulate no-space errors while this pointer is non-NULL.
  port::AtomicPointer no_space_;
    
    inline LookupKey::~LookupKey() {
  if (start_ != space_) delete[] start_;
}
    
    #ifndef GRPC_CUSTOM_DEFAULT_THREAD_POOL
    
    #include <grpc/support/port_platform.h>
    
    #include <grpc/impl/codegen/port_platform.h>
    
    TEST(AutoCompactTest, ReadHalf) { DoReads(kCount / 2); }
    
      // Offset at which to start looking for the first record to return
  uint64_t const initial_offset_;
    
    #include <string>
    
      // Compress blocks using the specified compression algorithm.  This
  // parameter can be changed dynamically.
  //
  // Default: kSnappyCompression, which gives lightweight but fast
  // compression.
  //
  // Typical speeds of kSnappyCompression on an Intel(R) Core(TM)2 2.4GHz:
  //    ~200-500MB/s compression
  //    ~400-800MB/s decompression
  // Note that these speeds are significantly faster than most
  // persistent storage speeds, and therefore it is typically never
  // worth switching to kNoCompression.  Even if the input data is
  // incompressible, the kSnappyCompression implementation will
  // efficiently detect that and will switch to uncompressed mode.
  CompressionType compression = kSnappyCompression;
    
    #include 'leveldb/cache.h'