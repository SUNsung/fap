
        
          while (true) {
    uint16_t newFlags = uint16_t(flags & ~freeFlags);
    if (newFlags == 0) {
      // The storage space is now unused.  Free it.
      storage->prefix.HeapPrefix::~HeapPrefix();
      free(storage);
      return;
    }
    }
    
    INSTANTIATE_TEST_CASE_P(
    MoveToFbString,
    MoveToFbStringTest,
    ::testing::Combine(
        ::testing::Values(0, 1, 24, 256, 1 << 10, 1 << 20),  // element size
        ::testing::Values(1, 2, 10),                         // element count
        ::testing::Bool(),                                   // shared
        ::testing::Values(CREATE, TAKE_OWNERSHIP_MALLOC,
                          TAKE_OWNERSHIP_CUSTOM, USER_OWNED)));
    
      bool pop(T& val) {
    hazptr_local<1, Atom> h;
    hazptr_holder<Atom>& hptr = h[0];
    Node* node;
    while (true) {
      node = hptr.get_protected(head_);
      if (node == nullptr) {
        return false;
      }
      auto next = node->next();
      if (cas_head(node, next)) {
        break;
      }
    }
    hptr.reset();
    val = node->value();
    node->retire();
    return true;
  }
    
    /**
 * A simple helper for getting a constant reference to an object.
 *
 * Example:
 *
 *   std::vector<int> v{1,2,3};
 *   // The following two lines are equivalent:
 *   auto a = const_cast<const std::vector<int>&>(v).begin();
 *   auto b = folly::as_const(v).begin();
 *
 * Like C++17's std::as_const. See http://wg21.link/p0007
 */
#if __cpp_lib_as_const || _MSC_VER