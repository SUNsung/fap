#if GTEST_HAS_GLOBAL_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::wstring& wstr);
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    // Functions producing parameter generators.
//
// Google Test uses these generators to produce parameters for value-
// parameterized tests. When a parameterized test case is instantiated
// with a particular generator, Google Test creates and runs tests
// for each element in the sequence produced by the generator.
//
// In the following sample, tests from test case FooTest are instantiated
// each three times with parameter values 3, 5, and 8:
//
// class FooTest : public TestWithParam<int> { ... };
//
// TEST_P(FooTest, TestThis) {
// }
// TEST_P(FooTest, TestThat) {
// }
// INSTANTIATE_TEST_CASE_P(TestSequence, FooTest, Values(3, 5, 8));
//
    
    // Returns the current OS stack trace as an std::string.
//
// The maximum number of stack frames to be included is specified by
// the gtest_stack_trace_depth flag.  The skip_count parameter
// specifies the number of top frames to be skipped, which doesn't
// count against the number of frames to be included.
//
// For example, if Foo() calls Bar(), which in turn calls
// GetCurrentOsStackTraceExceptTop(..., 1), Foo() will be included in
// the trace but Bar() and GetCurrentOsStackTraceExceptTop() won't.
GTEST_API_ std::string GetCurrentOsStackTraceExceptTop(
    UnitTest* unit_test, int skip_count);
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(ParameterizedTestCaseInfo);
};  // class ParameterizedTestCaseInfo
    
    // SameSizeTuplePrefixComparator<k, k>::Eq(t1, t2) returns true if the
// first k fields of t1 equals the first k fields of t2.
// SameSizeTuplePrefixComparator(k1, k2) would be a compiler error if
// k1 != k2.
template <int kSize1, int kSize2>
struct SameSizeTuplePrefixComparator;
    
    template <typename T1, typename T2>
struct AssertTypeEq;
    
    
    {    return -1;
  }
    
      // Now, we have that n is odd and n >= 3.
    
    
// Step 2. Use the TEST macro to define your tests.
//
// TEST has two parameters: the test case name and the test name.
// After using the macro, you should define your test logic between a
// pair of braces.  You can use a bunch of macros to indicate the
// success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are
// examples of such macros.  For a complete list, see gtest.h.
//
// <TechnicalDetails>
//
// In Google Test, tests are grouped into test cases.  This is how we
// keep test code organized.  You should put logically related tests
// into the same test case.
//
// The test case name and the test name should both be valid C++
// identifiers.  And you should not use underscore (_) in the names.
//
// Google Test guarantees that each test you define is run exactly
// once, but it makes no guarantee on the order the tests are
// executed.  Therefore, you should write your tests in such a way
// that their results don't depend on their order.
//
// </TechnicalDetails>
    
    namespace HPHP {
    }
    
    Array TimeStamp::CurrentTime() {
  struct timeval tp;
  gettimeofday(&tp, nullptr);
    }
    
    void Timer::GetMonotonicTime(timespec &ts) {
  gettime(CLOCK_MONOTONIC, &ts);
}
    
    static Variant php_mb_numericentity_exec(const String& str,
                                         const Variant& convmap,
                                         const String& encoding,
                                         bool is_hex, int type) {
  int mapsize=0;
  mbfl_string string, result, *ret;
  mbfl_no_encoding no_encoding;
    }
    
    namespace HPHP { namespace jit {
///////////////////////////////////////////////////////////////////////////////
    }
    }
    
    ALWAYS_INLINE
Cell MixedArray::getElmKey(const Elm& e) {
  if (e.hasIntKey()) {
    return make_tv<KindOfInt64>(e.ikey);
  }
  auto str = e.skey;
  if (str->isRefCounted()) {
    str->rawIncRefCount();
    return make_tv<KindOfString>(str);
  }
  return make_tv<KindOfPersistentString>(str);
}
    
      // Bring servers back up on the same port (we aren't recreating the channel).
  StartServers(kNumServers, ports);
    
    // Factories for building different types of Credentials The functions may
// return empty shared_ptr when credentials cannot be created. If a
// Credentials pointer is returned, it can still be invalid when used to create
// a channel. A lame channel will be created then and all rpcs will fail on it.
    
    grpc_channel_args* grpc_channel_args_set_socket_mutator(
    grpc_channel_args* a, grpc_socket_mutator* mutator) {
  grpc_arg tmp = grpc_socket_mutator_to_arg(mutator);
  return grpc_channel_args_copy_and_add(a, &tmp, 1);
}
    
    
    {  for (i = 0; i <= str_len - sep_len; i++) {
    if (memcmp(str_ptr + i, sep, sep_len) == 0) {
      *begin = read_offset;
      *end = read_offset + i;
      return 1;
    }
  }
  return 0;
}
    
      GPR_ASSERT(ch_args->num_args == 2);
  GPR_ASSERT(strcmp(ch_args->args[0].key, arg_int.key) == 0);
  GPR_ASSERT(ch_args->args[0].type == arg_int.type);
  GPR_ASSERT(ch_args->args[0].value.integer == arg_int.value.integer);
    
      final = grpc_slice_merge(output.slices, output.count);
  GPR_ASSERT(grpc_slice_eq(value, final));
    
      // Make list of keys from flattened key structure
  start_.push_back(keys_.size());  // Simplify length computation
  tmp_keys_.resize(num_keys);
  for (size_t i = 0; i < num_keys; i++) {
    const char* base = keys_.data() + start_[i];
    size_t length = start_[i+1] - start_[i];
    tmp_keys_[i] = Slice(base, length);
  }
    
    #endif  // STORAGE_LEVELDB_DB_SNAPSHOT_H_

    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
    
    {  delete iter;
  delete db;
  DestroyDB(dbpath, options);
}
    
    #ifndef STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_
#define STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_
    
      // Check the crc of the type and the block contents
  const char* data = contents.data();    // Pointer to where Read put the data
  if (options.verify_checksums) {
    const uint32_t crc = crc32c::Unmask(DecodeFixed32(data + n + 1));
    const uint32_t actual = crc32c::Value(data, n + 1);
    if (actual != crc) {
      delete[] buf;
      s = Status::Corruption('block checksum mismatch');
      return s;
    }
  }
    
    Iterator* NewMergingIterator(const Comparator* cmp, Iterator** list, int n) {
  assert(n >= 0);
  if (n == 0) {
    return NewEmptyIterator();
  } else if (n == 1) {
    return list[0];
  } else {
    return new MergingIterator(cmp, list, n);
  }
}
    
    	if (!xlogger_IsEnabledFor((TLogLevel)level)) {
		return;
	}
    
        if (EXPECTS_CRASH_DUMP_END == _state)
        return -1;
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #include 'socket/unix_socket.h'
#include 'ptrbuffer.h'
#include 'adler32.h'
#include 'assert/__assert.h'
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #include 'comm/debugger/testspy.h'
    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
    
    
    {  // Statically allocating this lets us use this in allocation-sensitive
  // contexts. This relies on the assumption that std::mutex won't dynamically
  // allocate memory, which we assume to be the case on Linux and iOS.
  static Indestructible<std::array<Bucket, kNumBuckets>> gBuckets;
  return (*gBuckets)[key % kNumBuckets];
}
    
    using namespace folly;
using namespace folly::detail;
using namespace testing;
    
    #include <glog/logging.h>
    
    #pragma once