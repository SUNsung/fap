
        
        // Here's what happens when an ASSERT_DEATH* or EXPECT_DEATH* is
// executed:
//
//   1. It generates a warning if there is more than one active
//   thread.  This is because it's safe to fork() or clone() only
//   when there is a single thread.
//
//   2. The parent process clone()s a sub-process and runs the death
//   test in it; the sub-process exits with code 0 at the end of the
//   death test, if it hasn't exited already.
//
//   3. The parent process waits for the sub-process to terminate.
//
//   4. The parent process checks the exit code and error message of
//   the sub-process.
//
// Examples:
//
//   ASSERT_DEATH(server.SendMessage(56, 'Hello'), 'Invalid port number');
//   for (int i = 0; i < 5; i++) {
//     EXPECT_DEATH(server.ProcessRequest(i),
//                  'Invalid request .* in ProcessRequest()')
//                  << 'Failed to die on request ' << i;
//   }
//
//   ASSERT_EXIT(server.ExitNow(), ::testing::ExitedWithCode(0), 'Exiting');
//
//   bool KilledBySIGHUP(int exit_code) {
//     return WIFSIGNALED(exit_code) && WTERMSIG(exit_code) == SIGHUP;
//   }
//
//   ASSERT_EXIT(client.HangUpServer(), KilledBySIGHUP, 'Hanging up!');
//
// On the regular expressions used in death tests:
//
//   On POSIX-compliant systems (*nix), we use the <regex.h> library,
//   which uses the POSIX extended regex syntax.
//
//   On other platforms (e.g. Windows), we only support a simple regex
//   syntax implemented as part of Google Test.  This limited
//   implementation should be enough most of the time when writing
//   death tests; though it lacks many features you can find in PCRE
//   or POSIX extended regex syntax.  For example, we don't support
//   union ('x|y'), grouping ('(xy)'), brackets ('[xy]'), and
//   repetition count ('x{5,7}'), among others.
//
//   Below is the syntax that we do support.  We chose it to be a
//   subset of both PCRE and POSIX extended regex, so it's easy to
//   learn wherever you come from.  In the following: 'A' denotes a
//   literal character, period (.), or a single \\ escape sequence;
//   'x' and 'y' denote regular expressions; 'm' and 'n' are for
//   natural numbers.
//
//     c     matches any literal character c
//     \\d   matches any decimal digit
//     \\D   matches any character that's not a decimal digit
//     \\f   matches \f
//     \\n   matches \n
//     \\r   matches \r
//     \\s   matches any ASCII whitespace, including \n
//     \\S   matches any character that's not a whitespace
//     \\t   matches \t
//     \\v   matches \v
//     \\w   matches any letter, _, or decimal digit
//     \\W   matches any character that \\w doesn't match
//     \\c   matches any literal character c, which must be a punctuation
//     .     matches any single character except \n
//     A?    matches 0 or 1 occurrences of A
//     A*    matches 0 or many occurrences of A
//     A+    matches 1 or many occurrences of A
//     ^     matches the beginning of a string (not that of each line)
//     $     matches the end of a string (not that of each line)
//     xy    matches x followed by y
//
//   If you accidentally use PCRE or POSIX extended regex features
//   not implemented by us, you will get a run-time failure.  In that
//   case, please try to rewrite your regular expression within the
//   above syntax.
//
//   This implementation is *not* meant to be as highly tuned or robust
//   as a compiled regex library, but should perform well enough for a
//   death test, which already incurs significant overhead by launching
//   a child process.
//
// Known caveats:
//
//   A 'threadsafe' style death test obtains the path to the test
//   program from argv[0] and re-executes it in the sub-process.  For
//   simplicity, the current implementation doesn't search the PATH
//   when launching the sub-process.  This means that the user must
//   invoke the test program via a path that contains at least one
//   path separator (e.g. path/to/foo_test and
//   /absolute/path/to/bar_test are fine, but foo_test is not).  This
//   is rarely a problem as people usually don't put the test binary
//   directory in PATH.
//
// TODO(wan@google.com): make thread-safe death tests search the PATH.
    
    // Then, use TYPED_TEST() instead of TEST_F() to define as many typed
// tests for this test case as you want.
TYPED_TEST(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  // Since we are inside a derived class template, C++ requires use to
  // visit the members of FooTest via 'this'.
  TypeParam n = this->value_;
    }
    
    GTEST_DECLARE_string_(internal_run_death_test);
    
    template<typename T> inline
bool operator==(T* ptr, const linked_ptr<T>& x) {
  return ptr == x.get();
}
    
      // Clones a 0-terminated C string, allocating memory using new.  The
  // caller is responsible for deleting the return value using
  // delete[].  Returns the cloned string, or NULL if the input is
  // NULL.
  //
  // This is different from strdup() in string.h, which allocates
  // memory using malloc().
  static const char* CloneCString(const char* c_str);
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
    
// Tests Factorial().
    
    #include 'sample2.h'
    
    	void disable_collisions_between_bodies(const bool p_disabled);
	_FORCE_INLINE_ bool is_disabled_collisions_between_bodies() const { return disabled_collisions_between_bodies; }
    
    class RigidBodyBullet;
class btTypedConstraint;
    
    #include 'register_types.h'
    
    
    {	return env->NewGlobalRef(context);
#else
	return NULL;
#endif
}
    
    #include 'core/reference.h'