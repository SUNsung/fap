
        
        #ifndef DIRECTIONAL_PREPOSITION
#  define DIRECTIONAL_PREPOSITION(Word) PREPOSITION(Word)
#endif
    
      // The canonical type decl we will import as a member of
  EffectiveClangContext effectiveDC = {};
    
    Optional<FrontendInputsAndOutputs> ArgsToFrontendInputsConverter::convert(
    SmallVectorImpl<std::unique_ptr<llvm::MemoryBuffer>> *buffers) {
  SWIFT_DEFER {
    if (buffers) {
      std::move(ConfigurationFileBuffers.begin(),
                ConfigurationFileBuffers.end(),
                std::back_inserter(*buffers));
      // Clearing the original list of buffers isn't strictly necessary, but
      // makes the behavior more sensible if we were to call convert() again.
      ConfigurationFileBuffers.clear();
    }
  };
    }
    
      llvm::SetVector<StringRef> Files;
    
    /// A plan for emitting a series of calls.
class CallEmission {
public:
  IRGenFunction &IGF;
    }
    
    static std::string getNoteRawContent(const std::string& fileName) {
  auto subProc = folly::Subprocess(
      std::vector<std::string>{
          'objdump',
          '--full-content',
          '--section=.note.' + kUSDTSubsectionName,
          fileName,
      },
      folly::Subprocess::Options().pipeStdout().usePath());
  auto output = subProc.communicate();
  auto retCode = subProc.wait();
  CHECK(retCode.exited());
  CHECK(output.second.empty());
  return output.first;
}
    
    #pragma once
    
      explicit Options(
      Format format_ = Format::ZLIB,
      int windowSize_ = 15,
      int memLevel_ = 8,
      int strategy_ = Z_DEFAULT_STRATEGY)
      : format(format_),
        windowSize(windowSize_),
        memLevel(memLevel_),
        strategy(strategy_) {}
    
      // Install a pointer to ourselves as the allocator.
  *reinterpret_cast<SimpleAllocator**>(mem_) = this;
  static_assert(max_align_v >= sizeof(SimpleAllocator*), 'alignment too small');
  mem_ += std::min(sz_, max_align_v);
    
      void reset(const std::shared_ptr<T>& p = nullptr) {
    auto newslots = folly::make_unique<Slots>();
    // Allocate each Holder in a different CoreRawAllocator stripe to
    // prevent false sharing. Their control blocks will be adjacent
    // thanks to allocate_shared().
    for (auto slot : folly::enumerate(newslots->slots_)) {
      auto alloc = getCoreAllocator<Holder, kNumSlots>(slot.index);
      auto holder = std::allocate_shared<Holder>(alloc, p);
      *slot = std::shared_ptr<T>(holder, p.get());
    }
    }
    
    #include <folly/portability/GTest.h>
    
    TEST_F(GMockOutputTest, UninterestingCallWithDefaultAction) {
  ON_CALL(foo_, Bar2(_, _))
      .WillByDefault(Return(true));   // Default action #1
  ON_CALL(foo_, Bar2(1, _))
      .WillByDefault(Return(false));  // Default action #2
    }
    
    // Tests that private members can be accessed from a TEST declared as
// a friend of the class.
TEST(PrivateCodeTest, CanAccessPrivateMembers) {
  PrivateCode a;
  EXPECT_EQ(0, a.x_);
    }
    
    
// Google Mock - a framework for writing C++ mock classes.
//
// This file implements some matchers that depend on gmock-generated-matchers.h.
//
// Note that tests are implemented in gmock-matchers_test.cc rather than
// gmock-more-matchers-test.cc.