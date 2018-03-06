
        
        #endif // defined(BOOST_ASIO_HAS_STD_ARRAY) || defined(GENERATING_DOCUMENTATION)
    
      descriptor_write_op(int descriptor,
      const ConstBufferSequence& buffers, Handler& handler)
    : descriptor_write_op_base<ConstBufferSequence>(
        descriptor, buffers, &descriptor_write_op::do_complete),
      handler_(BOOST_ASIO_MOVE_CAST(Handler)(handler))
  {
  }
    
      ~winrt_buffer_impl()
  {
  }
    
      template <typename T>
  static std::shared_ptr<T> get_shared_ptr_from_counted_base(
      counted_base* base,
      bool inc = true) {
    if (!base) {
      return nullptr;
    }
    std::shared_ptr<const void> newp;
    if (inc) {
      inc_shared_count(base, 1);
    }
    newp.*fieldPtr(access_shared_ptr_ptr{}) =
        get_shared_ptr<const void>(base); // _M_ptr
    (newp.*fieldPtr(access_refcount{})).*fieldPtr(access_base{}) = base;
    // reinterpret_pointer_cast<T>
    auto res = reinterpret_cast<std::shared_ptr<T>*>(&newp);
    return std::move(*res);
  }
    
    
    {
    {} // namespace detail
} // namespace folly

    
    TEST(MemoryIdler, futexWaitAwokenLate) {
  StrictMock<Futex<MockAtom>> fut;
  auto clock = MockClock::setup();
  auto begin = MockClock::time_point(std::chrono::seconds(100));
  auto idleTimeout = MemoryIdler::defaultIdleTimeout.load();
    }
    
    #include <bitset>
    
      // This load is safe because needles.size() >= 16
  auto arr2 = _mm_loadu_si128(reinterpret_cast<const __m128i*>(needles.data()));
  auto b =
      _mm_cmpestri(arr2, 16, arr1, int(haystack.size() - blockStartIdx), 0);
    
    template <IdentifyCallable::Kind, typename Fn>
struct ArgumentTypesByKind {};
template <typename Fn>
struct ArgumentTypesByKind<IdentifyCallable::Kind::MemberFunction, Fn> {
  using type = typename boost::mpl::template pop_front<
    typename boost::function_types::template parameter_types<
      decltype(&Fn::operator())
    >::type
  >::type;
};
template <typename Fn>
struct ArgumentTypesByKind<IdentifyCallable::Kind::Function, Fn> {
  using type = typename boost::function_types::template parameter_types<Fn>;
};
    
    namespace detail {
std::string toPseudoJson(const folly::dynamic& d) {
  std::stringstream ss;
  ss << d;
  return ss.str();
}
} // namespace detail
    
       private:
    friend struct Pop;
    
    // Errors & exceptions are best tested separately, but squeezing all the
// features into one test is good for exercising nesting.
TEST(TestDynamicParser, AllParserFeaturesSuccess) {
  // Input
  auto d = dynamic::array(
    dynamic::object('a', 7)('b', 9)('c', 13.3),
    5,
    dynamic::array('x', 'y', 1, 'z'),
    dynamic::object('int', 7)('false', 0)('true', true)('str', 's'),
    dynamic::object('bools', dynamic::array(false, true, 0, 1))
  );
  // Outputs, in the same order as the inputs.
  std::map<std::string, double> doubles;
  folly::Optional<int64_t> outer_int;
  std::vector<std::string> strings;
  folly::Optional<int64_t> inner_int;
  folly::Optional<bool> inner_false;
  folly::Optional<bool> inner_true;
  folly::Optional<std::string> inner_str;
  std::vector<bool> bools;
  // Parse and verify some invariants
  DynamicParser p(DynamicParser::OnError::RECORD, &d);
  EXPECT_EQ(d, p.value());
  p.required(0, [&](const dynamic& v) {
    EXPECT_EQ(0, p.key().getInt());
    EXPECT_EQ(v, p.value());
    p.objectItems([&](const std::string& k, double v) {
      EXPECT_EQ(k, p.key().getString());
      EXPECT_EQ(v, p.value().asDouble());
      doubles.emplace(k, v);
    });
  });
  p.required(1, [&](int64_t k, int64_t v) {
    EXPECT_EQ(1, k);
    EXPECT_EQ(1, p.key().getInt());
    EXPECT_EQ(5, p.value().getInt());
    outer_int = v;
  });
  p.optional(2, [&](const dynamic& v) {
    EXPECT_EQ(2, p.key().getInt());
    EXPECT_EQ(v, p.value());
    p.arrayItems([&](int64_t k, const std::string& v) {
      EXPECT_EQ(strings.size(), k);
      EXPECT_EQ(k, p.key().getInt());
      EXPECT_EQ(v, p.value().asString());
      strings.emplace_back(v);
    });
  });
  p.required(3, [&](const dynamic& v) {
    EXPECT_EQ(3, p.key().getInt());
    EXPECT_EQ(v, p.value());
    p.optional('int', [&](const std::string& k, int64_t v) {
      EXPECT_EQ('int', p.key().getString());
      EXPECT_EQ(k, p.key().getString());
      EXPECT_EQ(v, p.value().getInt());
      inner_int = v;
    });
    p.required('false', [&](const std::string& k, bool v) {
      EXPECT_EQ('false', p.key().getString());
      EXPECT_EQ(k, p.key().getString());
      EXPECT_EQ(v, p.value().asBool());
      inner_false = v;
    });
    p.required('true', [&](const std::string& k, bool v) {
      EXPECT_EQ('true', p.key().getString());
      EXPECT_EQ(k, p.key().getString());
      EXPECT_EQ(v, p.value().getBool());
      inner_true = v;
    });
    p.required('str', [&](const std::string& k, const std::string& v) {
      EXPECT_EQ('str', p.key().getString());
      EXPECT_EQ(k, p.key().getString());
      EXPECT_EQ(v, p.value().getString());
      inner_str = v;
    });
    p.optional('not set', [&](bool) { FAIL() << 'No key 'not set''; });
  });
  p.required(4, [&](const dynamic& v) {
    EXPECT_EQ(4, p.key().getInt());
    EXPECT_EQ(v, p.value());
    p.optional('bools', [&](const std::string& k, const dynamic& v2) {
      EXPECT_EQ(std::string('bools'), k);
      EXPECT_EQ(k, p.key().getString());
      EXPECT_EQ(v2, p.value());
      p.arrayItems([&](int64_t k, bool v3) {
        EXPECT_EQ(bools.size(), k);
        EXPECT_EQ(k, p.key().getInt());
        EXPECT_EQ(v3, p.value().asBool());
        bools.push_back(v3);
      });
    });
  });
  p.optional(5, [&](int64_t) { FAIL() << 'Index 5 does not exist'; });
  // Confirm the parse
  EXPECT_EQ(dynamic(dynamic::object()), p.releaseErrors());
  EXPECT_EQ((decltype(doubles){{'a', 7.}, {'b', 9.}, {'c', 13.3}}), doubles);
  EXPECT_EQ((int64_t)5, outer_int);
  EXPECT_EQ((decltype(strings){'x', 'y', '1', 'z'}), strings);
  EXPECT_EQ((int64_t)7, inner_int);
  EXPECT_FALSE(inner_false.value());
  EXPECT_TRUE(inner_true.value());
  EXPECT_EQ(std::string('s'), inner_str);
  EXPECT_EQ(std::string('s'), inner_str);
  EXPECT_EQ((decltype(bools){false, true, false, true}), bools);
}
    
    const std::string& NestedCommandLineApp::resolveAlias(
    const std::string& name) const {
  auto dest = &name;
  for (;;) {
    auto pos = aliases_.find(*dest);
    if (pos == aliases_.end()) {
      break;
    }
    dest = &pos->second;
  }
  return *dest;
}
    
    #include <folly/experimental/NestedCommandLineApp.h>
    
    #include <string>
    
    
    {} // namespace aria2
    
      std::shared_ptr<Peer> peer_;
    
    namespace aria2 {
    }
    
    #include <algorithm>
    
    namespace aria2 {
    }
    
    private:
  void startAsyncFamily(const std::string& hostname, int family,
                        DownloadEngine* e, Command* command);
  void setNameResolverCheck(size_t resolverIndex, DownloadEngine* e,
                            Command* command);
  void disableNameResolverCheck(size_t index, DownloadEngine* e,
                                Command* command);
    
    AuthConfig::AuthConfig() {}