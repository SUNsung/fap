  assert(peekType(msg) == thpp::Type::LONG_STORAGE);
  THLongStorage *storage2 = unpackTHLongStorage(msg);
  assert(storage2->size == STORAGE_SIZE);
  for (int64_t i = 0; i < STORAGE_SIZE; i++)
    assert(storage2->data[i] == i);
  
  int vec_size = unpackInteger(msg);
  assert(vec_size == VEC_SIZE);
  for (int i = 0; i < VEC_SIZE; i++)
    assert(unpackInteger(msg) == 7);
    
    #define THDPStorage TH_CONCAT_3(THDP,Real,Storage)
#define THDPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THDPStorageClass TH_CONCAT_3(THDP,Real,StorageClass)
#define THDPStorage_(NAME) TH_CONCAT_4(THDP,Real,Storage_,NAME)
    
    
void register_fd(int fd) {
  struct pollfd pfd = {0};
  pfd.fd = fd;
  pfd.events = POLLIN;
  pollfds.push_back(pfd);
}
    
    void THDTensor_(ormqr)(THDTensor *ra, THDTensor *a, THDTensor *tau, THDTensor *c,
                       const char *side, const char *trans) {
  if (a == NULL) a = ra;
  THArgCheck(a->nDimension == 2, 1, 'A should be 2 dimensional');
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorOrmqr, ra, a, tau, c, side[0], trans[0]),
    THDState::s_current_worker
  );
  THDTensor_(free)(THDTensor_(cloneColumnMajor)(ra, c));
}
    
    void THP_decodeDoubleBuffer(double* dst, const uint8_t* src, THPByteOrder order, size_t len)
{
  for (size_t i = 0; i < len; i++) {
    union { uint64_t x; double d; };
    x = (order == THP_BIG_ENDIAN ? decodeUInt64BE(src) : decodeUInt64LE(src));
    dst[i] = d;
    src += sizeof(double);
  }
}
    
      struct addrinfo *next_addr = addresses.get();
  int socket;
  // we'll loop over the addresses only if at least of them gave us ECONNREFUSED.
  // Maybe the host was up, but the server wasn't running.
  bool any_refused = false;
  while (true) {
    try {
      SYSCHECK(socket = ::socket(next_addr->ai_family, next_addr->ai_socktype, next_addr->ai_protocol))
      ResourceGuard socket_guard([socket]() { ::close(socket); });
    }
    }
    
    /* Opaque object representing a Bidirectional stream creating engine. Created
 * and configured outside of this API to facilitate sharing with other
 * components */
typedef struct stream_engine {
  void* obj;
  void* annotation;
} stream_engine;
    
    #include <grpc/support/log.h>
    
    DEFINE_int32(driver_port, 0, 'Port for communication with driver');
DEFINE_int32(server_port, 0, 'Port for operation as a server');
DEFINE_string(credential_type, grpc::testing::kInsecureCredentialsType,
              'Credential type for communication with driver');
    
    #endif  // GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    UsageTimer::Result UsageTimer::Sample() {
  Result r;
  r.wall = Now();
  get_resource_usage(&r.user, &r.system);
  r.total_cpu_time = 0;
  r.idle_cpu_time = 0;
  get_cpu_usage(&r.total_cpu_time, &r.idle_cpu_time);
  return r;
}
    
     private:
  static Result Sample();
    
    #endif // WEBSOCKET_CLIENT_H

    
    #if defined(MBEDTLS_SSL_DTLS_BADMAC_LIMIT) &&                              \
    ( !defined(MBEDTLS_SSL_TLS_C) || !defined(MBEDTLS_SSL_PROTO_DTLS) )
#error 'MBEDTLS_SSL_DTLS_BADMAC_LIMIT  defined, but not all prerequisites'
#endif
    
    /*The number of extra bits of precision at which to store rate metrics.*/
# define OC_BIT_SCALE  (6)
/*The number of extra bits of precision at which to store RMSE metrics.
  This must be at least half OC_BIT_SCALE (rounded up).*/
# define OC_RMSE_SCALE (5)
/*The number of bins to partition statistics into.*/
# define OC_SAD_BINS   (24)
/*The number of bits of precision to drop from SAD scores to assign them to a
   bin.*/
# define OC_SAD_SHIFT  (9)
    
      static void GetRealtimeTime(timespec &sp);
  static void GetMonotonicTime(timespec &sp);
  static int64_t GetCurrentTimeMicros();
  static int64_t GetRusageMicros(Type t, Who who);
  static int64_t GetThreadCPUTimeNanos();
  const char *getName() const;
  int64_t getMicroSeconds() const;
  void report() const;
    
    #else // HAVE_NUMA undefined
namespace HPHP {
    }
    
      // check union_of and commonAncestor API
  EXPECT_TRUE((*(*clsA).commonAncestor(*clsB)).same(*clsBase));
  EXPECT_TRUE((*(*clsB).commonAncestor(*clsA)).same(*clsBase));
  EXPECT_TRUE((*(*clsAA).commonAncestor(*clsAB)).same(*clsA));
  EXPECT_TRUE((*(*clsAB).commonAncestor(*clsAA)).same(*clsA));
  EXPECT_TRUE((*(*clsA).commonAncestor(*clsBAA)).same(*clsBase));
  EXPECT_TRUE((*(*clsBAA).commonAncestor(*clsA)).same(*clsBase));
  EXPECT_TRUE((*(*clsBAA).commonAncestor(*clsB)).same(*clsB));
  EXPECT_TRUE((*(*clsB).commonAncestor(*clsBAA)).same(*clsB));
  EXPECT_TRUE((*(*clsBAA).commonAncestor(*clsBB)).same(*clsB));
  EXPECT_TRUE((*(*clsBB).commonAncestor(*clsBAA)).same(*clsB));
  EXPECT_TRUE((*(*clsAA).commonAncestor(*clsBase)).same(*clsBase));
  EXPECT_TRUE((*(*clsBase).commonAncestor(*clsAA)).same(*clsBase));
  EXPECT_FALSE((*clsAA).commonAncestor(*clsTestClass));
  EXPECT_FALSE((*clsTestClass).commonAncestor(*clsAA));
  EXPECT_FALSE((*clsBAA).commonAncestor(*clsNonUnique));
  EXPECT_FALSE((*clsNonUnique).commonAncestor(*clsBAA));
    
    #define FAIL_ON_ERROR(x) { DWORD ec; if ((ec = (x)) != ERROR_SUCCESS) { ShowErrorAndExit(ec, __WFUNCTION__, __LINE__); } }
    
    #include 'db/log_reader.h'
#include 'db/log_writer.h'
#include 'leveldb/env.h'
#include 'util/coding.h'
#include 'util/crc32c.h'
#include 'util/random.h'
#include 'util/testharness.h'
    
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
    
    class BloomTest {
 private:
  const FilterPolicy* policy_;
  std::string filter_;
  std::vector<std::string> keys_;
    }
    
    namespace leveldb {
    }
    
    
    {    // Compute (product % M) using the fact that ((x << 31) % M) == x.
    seed_ = static_cast<uint32_t>((product >> 31) + (product & M));
    // The first reduction may overflow by 1 bit, so we may need to
    // repeat.  mod == M is not possible; using > allows the faster
    // sign-bit-based test.
    if (seed_ > M) {
      seed_ -= M;
    }
    return seed_;
  }
  // Returns a uniformly distributed value in the range [0..n-1]
  // REQUIRES: n > 0
  uint32_t Uniform(int n) { return Next() % n; }
    
    #include <boost/asio/detail/config.hpp>
#include <cstddef>
#include <boost/asio/basic_io_object.hpp>
#include <boost/asio/detail/handler_type_requirements.hpp>
#include <boost/asio/detail/throw_error.hpp>
#include <boost/asio/error.hpp>
#include <boost/asio/wait_traits.hpp>
#include <boost/asio/waitable_timer_service.hpp>
    
    #include <boost/asio/detail/config.hpp>
#include <cstddef>
#include <boost/asio/async_result.hpp>
#include <boost/asio/buffered_read_stream_fwd.hpp>
#include <boost/asio/buffer.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_resize_guard.hpp>
#include <boost/asio/detail/buffered_stream_storage.hpp>
#include <boost/asio/detail/noncopyable.hpp>
#include <boost/asio/detail/type_traits.hpp>
#include <boost/asio/error.hpp>
#include <boost/asio/io_service.hpp>
    
    template <>
class base_from_completion_cond<transfer_all_t>
{
protected:
  explicit base_from_completion_cond(transfer_all_t)
  {
  }
    }
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #include <dmlc/base.h>
#include <dmlc/data.h>
#include <cstring>
#include <memory>
#include <numeric>
#include <string>
#include <vector>
#include './base.h'
    
    // functions related to booster
void _BoosterFinalizer(SEXP ext) {
  if (R_ExternalPtrAddr(ext) == NULL) return;
  CHECK_CALL(XGBoosterFree(R_ExternalPtrAddr(ext)));
  R_ClearExternalPtr(ext);
}
    
      virtual void Update(HostDeviceVector<GradientPair>* in_gpair, DMatrix* data,
                      gbm::GBLinearModel* model,
                      double sum_instance_weight) = 0;