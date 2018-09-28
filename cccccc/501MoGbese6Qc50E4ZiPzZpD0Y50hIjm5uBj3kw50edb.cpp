
        
        
    {
    {    if (SemanticNode.is<Expr *>()) {
      SemanticNode.get<Expr *>()->dump(llvm::errs());
    } else if (SemanticNode.is<Decl *>()) {
      SemanticNode.get<Decl *>()->dump(llvm::errs());
    } else if (SemanticNode.is<Expr *>()) {
      SemanticNode.get<Expr *>()->dump(llvm::errs());
    } else {
      llvm_unreachable('ASTNode has pointer to unknown thing!');
    }
    llvm::errs() << '\n=====================================================\n';
  }
}

    
    
    {    triple.setOSName(osx.str());
  }
  Target = std::move(triple);
    
    #ifndef DIRECTIONAL_PREPOSITION
#  define DIRECTIONAL_PREPOSITION(Word) PREPOSITION(Word)
#endif
    
      IsFirstLine = true;
  for (auto &Line : Lines) {
    if (!IsFirstLine) {
      Line = Line.drop_front(WhitespaceToTrim);
    }
    IsFirstLine = false;
  }
    
    namespace {
  // Quasi-lexicographic order: string length first, then string data.
  // Since we don't care about the actual length, we can use this, which
  // lets us ignore the string data a larger proportion of the time.
  struct SortByLengthComparator {
    bool operator()(StringRef lhs, StringRef rhs) const {
      return (lhs.size() < rhs.size() ||
              (lhs.size() == rhs.size() && lhs < rhs));
    }
  };
} // end anonymous namespace
    
      static IAMResult infer(ASTContext &, clang::Sema &, const clang::NamedDecl *,
                         IAMOptions = IAMOptions::getDefault());
    
    private:
    NetworkStyle(const QString &appName, const int iconColorHueShift, const int iconColorSaturationReduction, const char *titleAddText);
    
    #endif // BITCOIN_QT_PLATFORMSTYLE_H
    
    #ifndef SECP256K1_HASH_IMPL_H
#define SECP256K1_HASH_IMPL_H
    
        (void)ctx;
    ARG_CHECK(sig != NULL);
    ARG_CHECK(input64 != NULL);
    ARG_CHECK(recid >= 0 && recid <= 3);
    
        BOOST_CHECK(v.setInt((uint64_t)1023ULL));
    BOOST_CHECK(v.isNum());
    BOOST_CHECK_EQUAL(v.getValStr(), '1023');
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    
    {} // namespace osquery

    
    #include <osquery/config.h>
#include <osquery/logger.h>
#include <osquery/registry_factory.h>
    
    DECLARE_bool(disable_decorators);
DECLARE_bool(decorations_top_level);
    
      // This looks funky, because the parser is named 'options' and it claims
  // ownership of a single top-level-key called 'options'.
  const auto& doc = c.getParser('options')->getData().doc()['options'];
    
      /**
   * @brief Update the internal context buffer with additional content
   *
   * This method allows you to chunk up large content so that it doesn't all
   * have to be loaded into memory at the same time
   *
   * @param buffer The buffer to be hashed
   * @param size The size of the buffer to be hashed
   */
  void update(const void* buffer, size_t size);
    
    
    {  return true;
}
    
      /// Limit the `inotify` actions to the subscription mask (if not 0).
  uint32_t mask{0};
    
      auto ec = pub->createEventContext();
  pub->fire(ec, 0);
    
    class ExampleTable : public TablePlugin {
 private:
  TableColumns columns() const {
    return {
        std::make_tuple('example_text', TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple(
            'example_integer', INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }
    }
    
    template <size_t... Indexes>
int snprintf20Numbers(int i, index_sequence<Indexes...>) {
  static_assert(20 == sizeof...(Indexes), 'Must have exactly 20 indexes');
  return snprintf(
      bigBuf.data(),
      bigBuf.size(),
      '%d %d %d %d %d'
      '%d %d %d %d %d'
      '%d %d %d %d %d'
      '%d %d %d %d %d',
      (i + static_cast<int>(Indexes))...);
}
    
    
    {  EXPECT_TRUE(fref);
  EXPECT_EQ(42, fref(4, 2));
}
    
    
    {  std::string arguments2;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_branch_2', 0, arguments2));
  std::array<int, 1> expected2{{sizeof(double)}};
  checkTracepointArguments(arguments2, expected2);
}
    
    #include <folly/GLog.h>
    
    #include <string>
    
    TEST(Conv, timespecToStdChrono) {
  struct timespec ts;
    }
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
    
    {  /**
   * The strategy parameter is used to tune the compression algorithm.
   * Supported values:
   * - Z_DEFAULT_STRATEGY: normal data
   * - Z_FILTERED: data produced by a filter (or predictor)
   * - Z_HUFFMAN_ONLY: force Huffman encoding only (no string match)
   * - Z_RLE: limit match distances to one
   * - Z_FIXED: prevents the use of dynamic Huffman codes
   *
   * The strategy parameter only affects the compression ratio but not the
   * correctness of the compressed output.
   */
  int strategy;
};
    
      bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto newptr = get_newptr(n);
    PackedPtr oldptr, expectedptr;
    }
    
    
    {        uint32_t scratch;
        bool success;
        __asm__ __volatile__
        (
            'movl %%ebx, %[scratch]\n\t'
            'movl %[desired_lo], %%ebx\n\t'
            'lock; cmpxchg8b %[dest]\n\t'
            'movl %[scratch], %%ebx\n\t'
            'sete %[success]\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '+A,A,A,A,A,A' (expected), [dest] '+m,m,m,m,m,m' (storage), [scratch] '=m,m,m,m,m,m' (scratch), [success] '=q,m,q,m,q,m' (success)
            : [desired_lo] 'S,S,D,D,m,m' ((uint32_t)desired), 'c,c,c,c,c,c' ((uint32_t)(desired >> 32))
#else
            : '+A' (expected), [dest] '+m' (storage), [scratch] '=m' (scratch), [success] '=q' (success)
            : [desired_lo] 'S' ((uint32_t)desired), 'c' ((uint32_t)(desired >> 32))
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return success;
#else
        bool success;
        __asm__ __volatile__
        (
            'lock; cmpxchg8b %[dest]\n\t'
            'sete %[success]\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '+A,A' (expected), [dest] '+m,m' (storage), [success] '=q,m' (success)
            : 'b,b' ((uint32_t)desired), 'c,c' ((uint32_t)(desired >> 32))
#else
            : '+A' (expected), [dest] '+m' (storage), [success] '=q' (success)
            : 'b' ((uint32_t)desired), 'c' ((uint32_t)(desired >> 32))
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return success;
#endif
    }
    
    using atomics::atomic_thread_fence;
using atomics::atomic_signal_fence;