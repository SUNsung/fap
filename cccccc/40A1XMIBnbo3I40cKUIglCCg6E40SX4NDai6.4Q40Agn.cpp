
        
        // Tests that GetEncodingAsString returns the right result for a trivial
// unicharset.
TEST_F(UnicharcompressTest, GetEncodingAsString) {
  LoadUnicharset('trivial.unicharset');
  ExpectCorrect('trivial');
  STRING encoding = compressed_.GetEncodingAsString(unicharset_);
  string encoding_str(&encoding[0], encoding.length());
  std::vector<string> lines =
      strings::Split(encoding_str, '\n', strings::SkipEmpty());
  EXPECT_EQ(5, lines.size());
  // The first line is always space.
  EXPECT_EQ('0\t ', lines[0]);
  // Next we have i.
  EXPECT_EQ('1\ti', lines[1]);
  // Next we have f.
  EXPECT_EQ('2\tf', lines[2]);
  // Next we have the fi ligature: ﬁ. There are no nulls in it, as there are no
  // repeated letter ligatures in this unicharset, unlike por.unicharset above.
  EXPECT_EQ('2,1\tﬁ', lines[3]);
  // Finally the null character.
  EXPECT_EQ('3\t<nul>', lines[4]);
}
    
     public:
  inline _ConstTessMemberResultCallback_4_4(const T* object, MemberSignature member, P1 p1, P2 p2, P3 p3, P4 p4)
    : object_(object),
      member_(member),      p1_(p1),      p2_(p2),      p3_(p3),      p4_(p4) { }
    
      // Adjust the weights of all the samples to be uniform in the given charset.
  // Returns the number of samples in the iterator.
  int UniformSamples();
    
      // Helper functions for TransformToBlocks.
  // Add the part to the temp list in the correct order.
  void AddToTempPartList(ColPartition* part, ColPartition_CLIST* temp_list);
  // Add everything from the temp list to the work_set assuming correct order.
  void EmptyTempPartList(ColPartition_CLIST* temp_list,
                         WorkingPartSet_LIST* work_set);
    
    
    {  if (colour == ScrollView::RED || colour == ScrollView::BLUE) {
    looplength = loop_bounding_box (start, botleft, topright);
    outline = new C_OUTLINE (start, botleft, topright, looplength);
                                 //add to list
    outline_it->add_after_then_move (outline);
  }
}
    
    namespace tesseract {
    }
    
    namespace grpc {
namespace testing {
    }
    }
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    void grpc_ares_ev_driver_start_locked(grpc_ares_ev_driver* ev_driver) {
  if (!ev_driver->working) {
    ev_driver->working = true;
    grpc_ares_notify_on_event_locked(ev_driver);
  }
}
    
    void (*grpc_resolve_address_ares)(
    const char* name, const char* default_port,
    grpc_pollset_set* interested_parties, grpc_closure* on_done,
    grpc_resolved_addresses** addrs) = grpc_resolve_address_ares_impl;
    
    void RunResolvesRelevantRecordsTest(void (*OnDoneLocked)(void* arg,
                                                         grpc_error* error)) {
  grpc_core::ExecCtx exec_ctx;
  ArgsStruct args;
  ArgsInit(&args);
  args.expected_addrs = ParseExpectedAddrs(FLAGS_expected_addrs);
  args.expected_service_config_string = FLAGS_expected_chosen_service_config;
  args.expected_lb_policy = FLAGS_expected_lb_policy;
  // maybe build the address with an authority
  char* whole_uri = nullptr;
  GPR_ASSERT(gpr_asprintf(&whole_uri, 'dns://%s/%s',
                          FLAGS_local_dns_server_address.c_str(),
                          FLAGS_target_name.c_str()));
  // create resolver and resolve
  grpc_core::OrphanablePtr<grpc_core::Resolver> resolver =
      grpc_core::ResolverRegistry::CreateResolver(whole_uri, nullptr,
                                                  args.pollset_set, args.lock);
  gpr_free(whole_uri);
  grpc_closure on_resolver_result_changed;
  GRPC_CLOSURE_INIT(&on_resolver_result_changed, OnDoneLocked, (void*)&args,
                    grpc_combiner_scheduler(args.lock));
  resolver->NextLocked(&args.channel_args, &on_resolver_result_changed);
  grpc_core::ExecCtx::Get()->Flush();
  PollPollsetUntilRequestDone(&args);
  ArgsFinish(&args);
}
    
    /* Destructor for call_data */
static void destroy_call_elem(grpc_call_element* elem,
                              const grpc_call_final_info* final_info,
                              grpc_closure* ignored) {
  call_data* calld = static_cast<call_data*>(elem->call_data);
  grpc_credentials_mdelem_array_destroy(&calld->md_array);
  grpc_call_credentials_unref(calld->creds);
  grpc_slice_unref_internal(calld->host);
  grpc_slice_unref_internal(calld->method);
  grpc_auth_metadata_context_reset(&calld->auth_md_context);
}
    
    #include 'src/core/lib/security/context/security_context.h'
#include 'src/core/lib/security/credentials/credentials.h'
#include 'src/core/lib/security/transport/auth_filters.h'
#include 'src/core/lib/slice/slice_internal.h'
    
    #ifndef GPR_LINUX
    
    template<typename T>
inline Vptr emitTLSAddr(Vout& v, TLSDatum<T> datum) {
  switch (arch()) {
    case Arch::X64:
      return x64::detail::emitTLSAddr(v, datum);
    case Arch::ARM:
      return arm::detail::emitTLSAddr(v, datum);
    case Arch::PPC64:
      return ppc64::detail::emitTLSAddr(v, datum);
  }
  not_reached();
}
    
      /**
   * Create a task. This returns a task handle, or null object
   * if there are no worker threads.
   */
  static Resource TaskStart(
    const String& url, const Array& headers,
    const String& remote_host,
    const String& post_data = null_string,
    const Array& files = null_array,
    int timeoutSeconds = -1,
    PageletServerTaskEvent *event = nullptr
  );
    
      /*
   * Create a sub-string from start with specified length.
   *
   * If the start is outside the bounds of the string, or the length is
   * negative, the empty string is returned.  The range [start, start+length]
   * gets clamped to [start, size()].
   */
  StringData* substr(int start, int length = StringData::MaxSize);
    
    struct hphp_string_isame {
  bool operator()(const String& s1, const String& s2) const {
    return s1.get()->isame(s2.get());
  }
};
    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP {
    }
    
    void* BumpExtentAllocator::
extent_alloc(extent_hooks_t* extent_hooks, void* addr,
             size_t size, size_t alignment, bool* zero,
             bool* commit, unsigned arena_ind) {
  assert(extent_hooks == &BumpExtentAllocator::s_hooks);
  if (addr != nullptr) return nullptr;
  assert(folly::isPowTwo(alignment));
  const uintptr_t mask = ~(alignment - 1);
    }
    
      using BumpAllocState::mappedSize;
  using BumpAllocState::allocatedSize;
  using BumpAllocState::maxCapacity;
    
    
    {  return ret;
}
    
      if (num_req == 1) {
    // Iterating through the counter is correct but a bit inefficient
    // compared to being able to access the right offset into array data,
    // but necessary for this code to be agnostic to the array's internal
    // representation.  Assuming uniform distribution, we'll expect to
    // iterate through half of the array's data.
    ssize_t index = HHVM_FN(rand)(0, count-1);
    ssize_t pos = input->iter_begin();
    while (index--) {
      pos = input->iter_advance(pos);
    }
    return input->getKey(pos);
  }
    
      // Check that opening non-existent file fails.
  SequentialFile* seq_file;
  RandomAccessFile* rand_file;
  ASSERT_TRUE(!env_->NewSequentialFile('/dir/non_existent', &seq_file).ok());
  ASSERT_TRUE(!seq_file);
  ASSERT_TRUE(!env_->NewRandomAccessFile('/dir/non_existent', &rand_file).ok());
  ASSERT_TRUE(!rand_file);
    
    // Test for issue 178: a manual compaction causes deleted data to reappear.
#include <iostream>
#include <sstream>
#include <cstdlib>
    
      // Add string delta to buffer_ followed by value
  buffer_.append(key.data() + shared, non_shared);
  buffer_.append(value.data(), value.size());
    
      // Read the block contents as well as the type/crc footer.
  // See table_builder.cc for the code that built this structure.
  size_t n = static_cast<size_t>(handle.size());
  char* buf = new char[n + kBlockTrailerSize];
  Slice contents;
  Status s = file->Read(handle.offset(), n + kBlockTrailerSize, &contents, buf);
  if (!s.ok()) {
    delete[] buf;
    return s;
  }
  if (contents.size() != n + kBlockTrailerSize) {
    delete[] buf;
    return Status::Corruption('truncated block read');
  }
    
      size_t FilterSize() const {
    return filter_.size();
  }
    
    
    {  // Pick up remaining bytes
  switch (limit - data) {
    case 3:
      h += static_cast<unsigned char>(data[2]) << 16;
      FALLTHROUGH_INTENDED;
    case 2:
      h += static_cast<unsigned char>(data[1]) << 8;
      FALLTHROUGH_INTENDED;
    case 1:
      h += static_cast<unsigned char>(data[0]);
      h *= m;
      h ^= (h >> r);
      break;
  }
  return h;
}
    
      ~AutoCompactTest() {
    delete db_;
    DestroyDB(dbname_, Options());
    delete tiny_cache_;
  }
    
    namespace leveldb {
namespace {
    }
    }
    
      // Returns true if the argument of the last Compare() call (or the baseline
  // image, if Compare() was not called yet) meets the image acceptance
  // criteria. The target_mul modifies the acceptance criteria used in this call
  // the following way:
  //    = 1.0 : the original acceptance criteria is used,
  //    < 1.0 : a more strict acceptance criteria is used,
  //    > 1.0 : a less strict acceptance criteria is used.
  virtual bool DistanceOK(double target_mul) const = 0;
    
    // TODO(user) Use linear->SRGB conversion and a lookup-table.
inline float LinearToGamma(float x) {
  return 255.0 * std::pow(x, 1.0 / 2.2);
}
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    #include 'guetzli/gamma_correct.h'
    
    #include 'guetzli/jpeg_data.h'
    
    
    {}  // namespace guetzli

    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
      if (state_ != SingletonHolderState::NotRegistered) {
    /* Possible causes:
     *
     * You have two instances of the same
     * folly::Singleton<Class>. Probably because you define the
     * singleton in a header included in multiple places? In general,
     * folly::Singleton shouldn't be in the header, only off in some
     * anonymous namespace in a cpp file. Code needing the singleton
     * will find it when that code references folly::Singleton<Class>.
     *
     * Alternatively, you could have 2 singletons with the same type
     * defined with a different name in a .cpp (source) file. For
     * example:
     *
     * Singleton<int> a([] { return new int(3); });
     * Singleton<int> b([] { return new int(4); });
     *
     */
    singletonWarnDoubleRegistrationAndAbort(type());
  }
    
     public:
  HazptrSWMRSet() : head_(nullptr) {}
    
      // Bump the value and record ourselves as reader.
  // This ensures that block stays allocated, as the reader count is > 0.
  auto prev = block->valueAndReaderCount.fetch_add(kReader + 1,
                                                   std::memory_order_acquire);
    
    TEST(to_weak_ptr, example) {
  auto s = std::make_shared<int>(17);
  EXPECT_EQ(1, s.use_count());
  EXPECT_EQ(2, (to_weak_ptr(s).lock(), s.use_count())) << 'lvalue';
  EXPECT_EQ(3, (to_weak_ptr(decltype(s)(s)).lock(), s.use_count())) << 'rvalue';
}