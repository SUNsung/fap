
        
        SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
    
    {
    {SHOULD_NOT_DO_GRADIENT(FindDuplicateElements);
} // namespace
} // namespace caffe2

    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    // Tests the default c'tor.
TEST(MyString, DefaultConstructor) {
  const MyString s;
    }
    
    namespace parallel {
    }
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////n
    }
    
    void PlainDirectory::rewind() {
  ::rewinddir(m_dir);
}
    
    
    {}

    
    
    {}
    
    
    {  std::string m_proxyHost;
  int         m_proxyPort;
  std::string m_proxyUsername;
  std::string m_proxyPassword;
};
    
    #include <stdexcept>
    
    /*
 * Decode a single unicode code point from UTF-8 byte sequence.
 */
char32_t utf8ToCodePoint(
    const unsigned char*& p,
    const unsigned char* const e,
    bool skipOnError);
    
    /**
 * Interface for Zlib-specific codec initialization.
 */
namespace folly {
namespace io {
namespace zlib {
    }
    }
    }
    
      bool is_lock_free() const noexcept {
    // lock free unless more than EXTERNAL_OFFSET threads are
    // contending and they all get unlucky and scheduled out during
    // load().
    //
    // TODO: Could use a lock-free external map to fix this
    // corner case.
    return true;
  }
    
     private:
  using Holder = std::shared_ptr<T>;
    
    namespace folly {
    }