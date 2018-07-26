
        
        
    {
    {} // end namespace index
} // end namespace swift
    
    
    {} // end namespace swift
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
SWIFT_RUNTIME_EXPORT
void swift_once(swift_once_t *predicate, void (*fn)(void *), void *context);
    
    #ifndef SWIFT_INDEX_INDEXDATACONSUMER_H
#define SWIFT_INDEX_INDEXDATACONSUMER_H
    
    
    {
    {
    {  unsigned getNumFixitsApplied() const {
    return NumFixitsApplied;
  }
};
} // end namespace migrator
} // end namespace swift
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
}
    
    Type typeAddO(Type t1, Type t2) {
  if (auto t = eval_const(t1, t2, cellAddO))          return *t;
  if (t1.subtypeOf(BInt) && t2.subtypeOf(BInt))       return TNum;
  if (auto t = usual_arith_conversions(t1, t2))       return *t;
  if (t1.subtypeOf(BArr) && t2.subtypeOf(BArr))       return TArr;
  if (t1.subtypeOf(BVec) && t2.subtypeOf(BVec))       return TVec;
  if (t1.subtypeOf(BDict) && t2.subtypeOf(BDict))     return TDict;
  if (t1.subtypeOf(BKeyset) && t2.subtypeOf(BKeyset)) return TKeyset;
  return TInitCell;
}
    
      std::string m_proxyHost;
  int         m_proxyPort;
  std::string m_proxyUsername;
  std::string m_proxyPassword;
    
    // Set by a .ini file at the start
static SystemSettings s_system_settings;
    
    TEST(LogTest, UnexpectedMiddleType) {
  Write('foo');
  SetByte(6, kMiddleType);
  FixChecksum(0, 3);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(3, DroppedBytes());
  ASSERT_EQ('OK', MatchError('missing start'));
}
    
    
    {  size_t read = 0;
  std::string read_data;
  while (read < kWriteSize) {
    ASSERT_OK(seq_file->Read(kWriteSize - read, &result, scratch));
    read_data.append(result.data(), result.size());
    read += result.size();
  }
  ASSERT_TRUE(write_data == read_data);
  delete seq_file;
  delete [] scratch;
}
    
    
    {  // Skewed: pick 'base' uniformly from range [0,max_log] and then
  // return 'base' random bits.  The effect is to pick a number in the
  // range [0,2^max_log-1] with exponential bias towards smaller numbers.
  uint32_t Skewed(int max_log) {
    return Uniform(1 << Uniform(max_log + 1));
  }
};
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    
    {  // No copying allowed
  BlockBuilder(const BlockBuilder&);
  void operator=(const BlockBuilder&);
};
    
    template <typename T>
bool SingletonHolder<T>::hasLiveInstance() {
  return !instance_weak_.expired();
}
    
    
    {  Type type_;
};
    
      void push(T val) {
    auto node = new Node(val, head());
    while (!cas_head(node->next_, node)) {
      /* try again */;
    }
  }
    
    #pragma once
    
    
    { private:
  folly::LifoSem sem_;
  folly::MPMCQueue<T> queue_;
};
    
    class alignas(hardware_destructive_interference_size) hazptr_rec {
  friend class hazptr_domain;
  friend class hazptr_holder;
  friend struct hazptr_tc_entry;
    }
    
    #include <folly/portability/GTest.h>
    
    void AbstractBtMessage::setBtMessageFactory(BtMessageFactory* factory)
{
  messageFactory_ = factory;
}
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
      virtual ssize_t readData(unsigned char* data, size_t len,
                           int64_t offset) CXX11_OVERRIDE;
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    
    {  std::shared_ptr<AsyncNameResolver> asyncNameResolver_[2];
  size_t numResolver_;
  int resolverCheck_;
  bool ipv4_;
  bool ipv6_;
};
    
    #include 'common.h'