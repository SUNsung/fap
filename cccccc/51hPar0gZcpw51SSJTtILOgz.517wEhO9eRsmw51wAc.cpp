
        
         private:
  // Must return a T descendant allocated with new that ResourceOpKernel will
  // take ownership of.
  virtual Status CreateResource(T** resource) EXCLUSIVE_LOCKS_REQUIRED(mu_) = 0;
    
      // Converts binary example labels from 0.0 or 1.0 to -1.0 or 1.0 respectively
  // as expected by smooth hinge loss.
  Status ConvertLabel(float* const example_label) const final {
    if (*example_label == 0.0) {
      *example_label = -1;
      return Status::OK();
    }
    if (*example_label == 1.0) {
      return Status::OK();
    }
    return errors::InvalidArgument(
        'Only labels of 0.0 or 1.0 are supported right now. '
        'Found example with label: ',
        *example_label);
  }
    
    #endif  // TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_

    
    
    {}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      Status OnWorkStartedLocked() override {
    line_number_ = 0;
    TF_RETURN_IF_ERROR(env_->NewRandomAccessFile(current_work(), &file_));
    }
    
    HloReachabilityMap::HloReachabilityMap(
    const std::list<HloInstruction*>& instructions)
    : size_(instructions.size()) {
  bit_vectors_.reserve(size_);
  for (const HloInstruction* hlo : instructions) {
    indices_[hlo] = bit_vectors_.size();
    bit_vectors_.emplace_back(size_);
  }
  CHECK_EQ(size_, indices_.size());  // instructions should be unique
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    class RemoveDeviceTest : public ::testing::Test {
 protected:
  void TestRemoveDevice() {
    GraphDef graph_def;
    }
    }
    
      // Compute the intersection with another slice and if 'result' is not
  // nullptr, store the results in *result; returns true if there is any real
  // intersection.
  bool Intersect(const TensorSlice& other, TensorSlice* result) const;
  // A short hand.
  bool Overlaps(const TensorSlice& other) const {
    return Intersect(other, nullptr);
  }
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
REGISTER_COMPLEX(GPU, float, complex64);
REGISTER_COMPLEX(GPU, double, complex128);
#endif
    
        // On the 1st send (i == 0), gating is disabled, so data should be sent.
    // On the 2nd send (i == 1), gating is enabled, and the server has enabled
    //   the watch key in the previous send (READ_WRITE), so data should be
    //   sent. In this iteration, the server response with a EventReply proto to
    //   unblock the debug node.
    // On the 3rd send (i == 2), gating is enabled, but the server has disabled
    //   the watch key in the previous send, so data should not be sent.
    const bool enable_gated_grpc = (i != 0);
    TF_ASSERT_OK(DebugIO::PublishDebugTensor(kDebugNodeKey, tensor, wall_time,
                                             urls, enable_gated_grpc));
    
    const char* leveldb_iter_key(const leveldb_iterator_t* iter, size_t* klen) {
  Slice s = iter->rep->key();
  *klen = s.size();
  return s.data();
}
    
    
    {}  // namespace leveldb
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      Benchmark()
  : db_(NULL),
    db_num_(0),
    num_(FLAGS_num),
    reads_(FLAGS_reads < 0 ? FLAGS_num : FLAGS_reads),
    bytes_(0),
    rand_(301) {
    std::vector<std::string> files;
    std::string test_dir;
    Env::Default()->GetTestDirectory(&test_dir);
    Env::Default()->GetChildren(test_dir, &files);
    if (!FLAGS_use_existing_db) {
      for (int i = 0; i < files.size(); i++) {
        if (Slice(files[i]).starts_with('dbbench_sqlite3')) {
          std::string file_name(test_dir);
          file_name += '/';
          file_name += files[i];
          Env::Default()->DeleteFile(file_name.c_str());
        }
      }
    }
  }
    
    inline bool operator==(const Slice& x, const Slice& y) {
  return ((x.size() == y.size()) &&
          (memcmp(x.data(), y.data(), x.size()) == 0));
}
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include <vector>
    
    
    {  int M_;
  int K_;
  int N_;
  bool bias_term_;
  Blob<Dtype> bias_multiplier_;
};
    
      /**
   * @brief Computes the error gradient w.r.t. the forwarded inputs.
   *
   * @param top output Blob vector (length 1+), providing the error gradient with
   *        respect to the outputs
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2+), into which the top error
   *        gradient is copied
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}
    
    int64_t gettime_ns(clockid_t clock) {
  if (clock != CLOCK_THREAD_CPUTIME_ID) {
    return folly::chrono::clock_gettime_ns(clock);
  }
    }
    
      const timespec& getStartTimer() const;
  int getTimeoutSeconds() const;
    
    
    {  return ret;
}
    
    #ifndef PIPE_BUF
/* Get the PIPE_BUF from pathconf */
#ifdef _PC_PIPE_BUF
#define PIPE_BUF pathconf('.', _PC_PIPE_BUF)
#else
#define PIPE_BUF 512
#endif
#endif
    
    
    {
    {      // If this address spans cache lines, on x64 this is not an atomic store.
      // This being the case, use caution when overwriting code that is
      // reachable by multiple threads: make sure it doesn't span cache lines.
      *reinterpret_cast<uint64_t*>(dest()) = u.qword;
    } else {
      memcpy(dest(), bs, n);
    }
    m_frontier += n;
  }
    
      std::sort(
    sortedFuncs.begin(),
    sortedFuncs.end(),
    [&] (TargetId f1, TargetId f2) {
      auto& func1 = cg.targets[f1];
      auto& func2 = cg.targets[f2];
      return
        (uint64_t)func1.samples * func2.size >
        (uint64_t)func2.samples * func1.size;
    }
  );
    
    
static uint64_t RepeatBitsAcrossReg(unsigned reg_size,
                                    uint64_t value,
                                    unsigned width) {
  assert((width == 2) || (width == 4) || (width == 8) || (width == 16) ||
         (width == 32));
  assert((reg_size == kWRegSize) || (reg_size == kXRegSize));
  uint64_t result = value & ((1UL << width) - 1UL);
  for (unsigned i = width; i < reg_size; i *= 2) {
    result |= (result << i);
  }
  return result;
}
    
    inline
bool SynchronizableMulti::waitImpl(int id, int q, Priority pri, timespec *ts) {
  assert(id >= 0 && id < m_conds.size());
  auto& cond = m_conds[id];
    }
    
    int getifaddrs(struct ifaddrs** result) {
	int fd = socket(PF_NETLINK, SOCK_RAW, NETLINK_ROUTE);
	if (fd < 0) {
		return -1;
	}
	netlinkrequest ifaddr_request;
	memset(&ifaddr_request, 0, sizeof(ifaddr_request));
	ifaddr_request.header.nlmsg_flags = NLM_F_ROOT | NLM_F_REQUEST;
	ifaddr_request.header.nlmsg_type = RTM_GETADDR;
	ifaddr_request.header.nlmsg_len = NLMSG_LENGTH(sizeof(ifaddrmsg));
	ssize_t count = send(fd, &ifaddr_request, ifaddr_request.header.nlmsg_len, 0);
	if (static_cast<size_t>(count) != ifaddr_request.header.nlmsg_len) {
		close(fd);
		return -1;
	}
	struct ifaddrs* start = NULL;
	struct ifaddrs* current = NULL;
	char buf[kMaxReadSize];
	ssize_t amount_read = recv(fd, &buf, kMaxReadSize, 0);
	while (amount_read > 0) {
		nlmsghdr* header = reinterpret_cast<nlmsghdr*>(&buf[0]);
		size_t header_size = static_cast<size_t>(amount_read);
		for ( ; NLMSG_OK(header, header_size);
		      header = NLMSG_NEXT(header, header_size)) {
			switch (header->nlmsg_type) {
			case NLMSG_DONE:
				// Success. Return.
				*result = start;
				close(fd);
				return 0;
			case NLMSG_ERROR:
				close(fd);
				freeifaddrs(start);
				return -1;
			case RTM_NEWADDR: {
				ifaddrmsg* address_msg =
						reinterpret_cast<ifaddrmsg*>(NLMSG_DATA(header));
				rtattr* rta = IFA_RTA(address_msg);
				ssize_t payload_len = IFA_PAYLOAD(header);
				while (RTA_OK(rta, payload_len)) {
					if (rta->rta_type == IFA_ADDRESS) {
						int family = address_msg->ifa_family;
						if (family == AF_INET || family == AF_INET6) {
							ifaddrs* newest = new ifaddrs;
							memset(newest, 0, sizeof(ifaddrs));
							if (current) {
								current->ifa_next = newest;
							} else {
								start = newest;
							}
							if (populate_ifaddrs(newest, address_msg, RTA_DATA(rta),
									     RTA_PAYLOAD(rta)) != 0) {
								freeifaddrs(start);
								*result = NULL;
								return -1;
							}
							current = newest;
						}
					}
					rta = RTA_NEXT(rta, payload_len);
				}
				break;
			}
			}
		}
		amount_read = recv(fd, &buf, kMaxReadSize, 0);
	}
	close(fd);
	freeifaddrs(start);
	return -1;
}
    
    bool WebSocketClient::is_verify_ssl_enabled() const {
    }
    
    	void set_roll_influence(float p_value);
	float get_roll_influence() const;
    
    #include 'editor/create_dialog.h'
#include 'editor/plugins/script_editor_plugin.h'
#include 'editor/property_editor.h'
#include 'editor/property_selector.h'
#include 'scene/gui/graph_edit.h'
#include 'visual_script.h'
class VisualScriptEditorSignalEdit;
class VisualScriptEditorVariableEdit;
    
        ~jpeg_decoder();
    
      &_huff_book_line_128x11_0sub0,
  &_huff_book_line_128x11_1sub0,
  &_huff_book_line_128x11_1sub1,
  &_huff_book_line_128x11_2sub1,
  &_huff_book_line_128x11_2sub2,
  &_huff_book_line_128x11_2sub3,
  &_huff_book_line_128x11_3sub1,
  &_huff_book_line_128x11_3sub2,
  &_huff_book_line_128x11_3sub3,
};
static const static_codebook*const _floor_128x17_books[]={
  &_huff_book_line_128x17_class1,
  &_huff_book_line_128x17_class2,
  &_huff_book_line_128x17_class3,
    
    // Entropy encoding (Huffman) utilities.
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_FDCT_H_
#define GUETZLI_FDCT_H_
    
    #include <stddef.h>
#include <stdint.h>
    
    struct JpegHistogram {
  static const int kSize = kJpegHuffmanAlphabetSize + 1;
    }
    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
    public:
  AbstractProxyRequestCommand(cuid_t cuid, const std::shared_ptr<Request>& req,
                              const std::shared_ptr<FileEntry>& fileEntry,
                              RequestGroup* requestGroup, DownloadEngine* e,
                              const std::shared_ptr<Request>& proxyRequest,
                              const std::shared_ptr<SocketCore>& s);
    
      /**
   * The internal announce URL pointer points to next URL.
   * If the current URL is the last element of its group, then the first
   * element of the next group is pointed.
   */
  void announceFailure();
    
    AnnounceTier::~AnnounceTier() = default;
    
      // Don't allow copying
  AnnounceTier(const AnnounceTier&) = delete;
  AnnounceTier& operator=(const AnnounceTier&) = delete;
    
    TLSContext* TLSContext::make(TLSSessionSide side, TLSVersion ver)
{
  return new AppleTLSContext(side, ver);
}
    
    std::string AuthConfig::getAuthText() const
{
  std::string s = user_;
  s += ':';
  s += password_;
  return s;
}
    
    
    {private:
  uint8_t Size = 0;
  uint8_t Data[kMaxSize];
};
    
    #endif // LIBFUZZER_LINUX

    
    void WriteToFile(const Unit &U, const std::string &Path) {
  // Use raw C interface because this function may be called from a sig handler.
  FILE *Out = fopen(Path.c_str(), 'w');
  if (!Out) return;
  fwrite(U.data(), sizeof(U[0]), U.size(), Out);
  fclose(Out);
}
    
    void WriteToFile(const Unit &U, const std::string &Path);
    
    void Fuzzer::ResetEdgeCoverage() {
  CHECK_EXTERNAL_FUNCTION(__sanitizer_reset_coverage);
  EF->__sanitizer_reset_coverage();
}
    
    #ifndef SHA_BIG_ENDIAN
	// Swap byte order back
	int i;
	for (i=0; i<5; i++) {
		s->state[i]=
			  (((s->state[i])<<24)& 0xff000000)
			| (((s->state[i])<<8) & 0x00ff0000)
			| (((s->state[i])>>8) & 0x0000ff00)
			| (((s->state[i])>>24)& 0x000000ff);
	}
#endif
    
    
    {  static const size_t kMaxMutations = 1 << 16;
  size_t NumMutations;
  TraceBasedMutation Mutations[kMaxMutations];
  // TODO: std::set is too inefficient, need to have a custom DS here.
  std::set<Word> InterestingWords;
  MutationDispatcher &MD;
  const FuzzingOptions Options;
  const Fuzzer *F;
  std::map<Word, size_t> AutoDictUnitCounts;
  size_t AutoDictAdds = 0;
};
    
    #include 'FuzzerUtil.h'
#include 'FuzzerIO.h'
#include 'FuzzerInternal.h'
#include <cassert>
#include <chrono>
#include <cstring>
#include <errno.h>
#include <signal.h>
#include <sstream>
#include <stdio.h>
#include <sys/types.h>
#include <thread>