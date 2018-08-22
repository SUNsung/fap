
        
        class DocComment {
  const Decl *D;
  const swift::markup::Document *Doc = nullptr;
  const swift::markup::CommentParts Parts;
    }
    
    namespace swift {
    }
    
      IndexSymbol() = default;
    
    
    {
    {
    {  unsigned getNumFixitsApplied() const {
    return NumFixitsApplied;
  }
};
} // end namespace migrator
} // end namespace swift
    
    
    {} // namespace SourceKit
    
    // Tests that the RotatingTranspose function does the right thing for various
// transformations.
// dims=[5, 4, 3, 2]->[5, 2, 4, 3]
TEST_F(MatrixTest, RotatingTranspose_3_1) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 3, 1, &m);
  m.ResizeNoInit(kInputSize_ / 3, 3);
  // Verify that the result is:
  // output tensor=[[[[0, 2, 4][6, 8, 10][12, 14, 16][18, 20, 22]]
  //                 [[1, 3, 5][7, 9, 11][13, 15, 17][19, 21, 23]]]
  //                [[[24, 26, 28]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(2, m(0, 1));
  EXPECT_EQ(4, m(0, 2));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(1, m(4, 0));
  EXPECT_EQ(24, m(8, 0));
  EXPECT_EQ(26, m(8, 1));
  EXPECT_EQ(25, m(12, 0));
}
    
      // Constructor for NT_LSTM (regular 1 or 2-d LSTM), NT_LSTM_SOFTMAX (LSTM with
  // additional softmax layer included and fed back into the input at the next
  // timestep), or NT_LSTM_SOFTMAX_ENCODED (as LSTM_SOFTMAX, but the feedback
  // is binary encoded instead of categorical) only.
  // 2-d and bidi softmax LSTMs are not rejected, but are impossible to build
  // in the conventional way because the output feedback both forwards and
  // backwards in time does become impossible.
  LSTM(const STRING& name, int num_inputs, int num_states, int num_outputs,
       bool two_dimensional, NetworkType type);
  virtual ~LSTM();
    
    template <bool del, class R, class T, class A1, class A2>
class _ConstTessMemberResultCallback_0_2 : public TessResultCallback2<R,A1,A2> {
 public:
  typedef TessResultCallback2<R,A1,A2> base;
  typedef R (T::*MemberSignature)(A1,A2) const;
    }
    
    const char *kHyphenLikeUTF8[] = {
  '-',       // ASCII hyphen-minus
  '\u05BE',  // word hyphen in hybrew
  '\u2010',  // hyphen
  '\u2011',  // non-breaking hyphen
  '\u2012',  // a hyphen the same width as digits
  '\u2013',  // en dash
  '\u2014',  // em dash
  '\u2015',  // horizontal bar
  '\u2212',  // arithmetic minus sign
  '\uFE58',  // small em dash
  '\uFE63',  // small hyphen-minus
  '\uFF0D',  // fullwidth hyphen-minus
  nullptr,      // end of our list
};
    
    // Returns true if the given blob overlaps more than max_overlaps blobs
// in the current grid.
bool CCNonTextDetect::BlobOverlapsTooMuch(BLOBNBOX* blob, int max_overlaps) {
  // Search the grid to see what intersects it.
  // Setup a Rectangle search for overlapping this blob.
  BlobGridSearch rsearch(this);
  const TBOX& box = blob->bounding_box();
  rsearch.StartRectSearch(box);
  rsearch.SetUniqueMode(true);
  BLOBNBOX* neighbour;
  int overlap_count = 0;
  while (overlap_count <= max_overlaps &&
         (neighbour = rsearch.NextRectSearch()) != nullptr) {
    if (box.major_overlap(neighbour->bounding_box())) {
      ++overlap_count;
      if (overlap_count > max_overlaps)
        return true;
    }
  }
  return false;
}
    
    #include <memory>
    
      /**
   * Invoked when there is no data to be read or written and the stream is
   * closed successfully remotely and locally. Once invoked, no further callback
   * methods will be invoked.
   */
  void (*on_succeded)(bidirectional_stream* stream);
    
    #include 'test/core/util/test_config.h'
#include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    #include <grpc/support/alloc.h>
#include <grpc/support/log.h>
#include <grpc/support/string_util.h>
#include <grpc/support/time.h>
#include 'src/core/ext/filters/client_channel/resolver/dns/c_ares/grpc_ares_wrapper.h'
#include 'src/core/lib/gpr/string.h'
#include 'src/core/lib/iomgr/iomgr_internal.h'
#include 'src/core/lib/iomgr/sockaddr_utils.h'
    
    #include <grpc/support/alloc.h>
#include <grpc/support/log.h>
#include <grpc/support/log_windows.h>
#include <grpc/support/string_util.h>
#include <grpc/support/time.h>
#include <string.h>
#include 'src/core/lib/gpr/string.h'
#include 'src/core/lib/gprpp/memory.h'
#include 'src/core/lib/iomgr/combiner.h'
#include 'src/core/lib/iomgr/socket_windows.h'
#include 'src/core/lib/iomgr/tcp_windows.h'
#include 'src/core/lib/slice/slice_internal.h'
    
    static void on_txt_done_locked(void* arg, int status, int timeouts,
                               unsigned char* buf, int len) {
  gpr_log(GPR_DEBUG, 'on_txt_done_locked');
  char* error_msg;
  grpc_ares_request* r = static_cast<grpc_ares_request*>(arg);
  const size_t prefix_len = sizeof(g_service_config_attribute_prefix) - 1;
  struct ares_txt_ext* result = nullptr;
  struct ares_txt_ext* reply = nullptr;
  grpc_error* error = GRPC_ERROR_NONE;
  if (status != ARES_SUCCESS) goto fail;
  status = ares_parse_txt_reply_ext(buf, len, &reply);
  if (status != ARES_SUCCESS) goto fail;
  // Find service config in TXT record.
  for (result = reply; result != nullptr; result = result->next) {
    if (result->record_start &&
        memcmp(result->txt, g_service_config_attribute_prefix, prefix_len) ==
            0) {
      break;
    }
  }
  // Found a service config record.
  if (result != nullptr) {
    size_t service_config_len = result->length - prefix_len;
    *r->service_config_json_out =
        static_cast<char*>(gpr_malloc(service_config_len + 1));
    memcpy(*r->service_config_json_out, result->txt + prefix_len,
           service_config_len);
    for (result = result->next; result != nullptr && !result->record_start;
         result = result->next) {
      *r->service_config_json_out = static_cast<char*>(
          gpr_realloc(*r->service_config_json_out,
                      service_config_len + result->length + 1));
      memcpy(*r->service_config_json_out + service_config_len, result->txt,
             result->length);
      service_config_len += result->length;
    }
    (*r->service_config_json_out)[service_config_len] = '\0';
    gpr_log(GPR_INFO, 'found service config: %s', *r->service_config_json_out);
  }
  // Clean up.
  ares_free_data(reply);
  goto done;
fail:
  gpr_asprintf(&error_msg, 'C-ares TXT lookup status is not ARES_SUCCESS: %s',
               ares_strerror(status));
  error = GRPC_ERROR_CREATE_FROM_COPIED_STRING(error_msg);
  gpr_free(error_msg);
  if (r->error == GRPC_ERROR_NONE) {
    r->error = error;
  } else {
    r->error = grpc_error_add_child(error, r->error);
  }
done:
  grpc_ares_request_unref_locked(r);
}
    
    #endif

    
    ///////////////////////////////////////////////////////////////////////////////
    
      // ref counting
  void incRefCount();
  void decRefCount();
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
      Address dest() const { return m_destBase + (m_frontier - m_base); }
    
    void BumpMapper::append(BumpMapper* m) {
  // add things one by one so that we can easily avoid loops in the chain.
  assert(!m->m_fallback);
  assert(m != this);
  if (m_fallback) {
    return m_fallback->append(m);
  }
  m_fallback = m;
}
    
    #include 'hphp/util/alloc.h'
    
    #include 'hphp/runtime/vm/jit/irlower-internal.h'
    
    arr_lval SetArray::LvalStrRef(ArrayData* ad, StringData*, bool) {
  throwRefInvalidArrayValueException(ad);
}