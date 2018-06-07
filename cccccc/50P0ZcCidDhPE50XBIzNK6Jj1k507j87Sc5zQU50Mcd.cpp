
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class SYCLDeviceContext : public DeviceContext {
 public:
  SYCLDeviceContext() {}
    }
    
    std::ostream& operator<<(std::ostream& out,
                         const VersionedComputationHandle& versioned_handle) {
  out << versioned_handle.ToString();
  return out;
}
    
    void MPIUtils::InitMPI() {
  // Initialize the MPI environment if that hasn't been done
  int flag = 0;
  MPI_CHECK(MPI_Initialized(&flag));
  if (!flag) {
    int proc_id = 0, number_of_procs = 1, len = -1;
    char my_host_name[max_worker_name_length];
    // MPI_CHECK(MPI_Init_thread(0, 0, MPI_THREAD_MULTIPLE, &flag));
    MPI_CHECK(MPI_Init(0, 0));
    MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
    MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    MPI_CHECK(MPI_Get_processor_name(my_host_name, &len));
    fprintf(stderr,
            'MPI Environment initialized. Process id: %d Total processes: %d '
            '|| Hostname: %s \n',
            proc_id, number_of_procs, my_host_name);
  }
}
    
    Status PowGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  std::vector<FDH::Node> nodes = {
    {{'z'}, 'Pow', {'x', 'y'}},
    // dz * y * Pow(x, y - 1)
    FDH::Const('const_zero', 0.0f),
    FDH::Const('const_one', 1.0f),
    {{'zero'}, 'Cast', {'const_zero'}, {{'SrcT', DT_FLOAT}, {'DstT', '$T'}}},
    {{'one'}, 'Cast', {'const_one'}, {{'SrcT', DT_FLOAT}, {'DstT', '$T'}}},
    {{'t0'}, 'Sub', {'y', 'one'}, {}, {'dz'}},
    {{'t1'}, 'Pow', {'x', 't0'}},
    {{'t2'}, 'Mul', {'dz', 'y'}},
    {{'gx'}, 'Mul', {'t1', 't2'}},
    {{'unsafe_log'}, 'Log', {'x'}, {}, {'dz'}},
    {{'zeros'}, 'ZerosLike', {'x'}}};
  // clang-format on
  std::vector<FDH::Node> log_x_handling;
  DataType T;
  TF_RETURN_IF_ERROR(GetNodeAttr(attrs, 'T', &T));
  if (T == DT_COMPLEX64 || T == DT_COMPLEX128) {
    // dz * z * (x != 0 ? Log(x) : 0)
    // clang-format off
    log_x_handling = {
      {{'nz_x'}, 'NotEqual', {'x', 'zero'}},
      {{'safe_log'}, 'Select', {'nz_x', 'unsafe_log', 'zeros'}}};
    // clang-format on
  } else {
    // dz * z * (x > 0 ? Log(x) : 0)
    // clang-format off
    log_x_handling = {
      {{'pos_x'}, 'Greater', {'x', 'zero'}},
      {{'safe_log'}, 'Select', {'pos_x', 'unsafe_log', 'zeros'}}};
    // clang-format on
  }
  nodes.insert(nodes.end(), log_x_handling.begin(), log_x_handling.end());
  nodes.push_back({{'t4'}, 'Mul', {'dz', 'z'}});
  nodes.push_back({{'gy'}, 'Mul', {'safe_log', 't4'}});
  return GradForBinaryCwise(g, nodes);
}
REGISTER_OP_GRADIENT('Pow', PowGrad);
    
    #include <atomic>
#include <unordered_set>
    
    TEST_F(UnicharcompressTest, DoesChinese) {
  LOG(INFO) << 'Testing chi_tra';
  LoadUnicharset('chi_tra.unicharset');
  ExpectCorrect('chi_tra');
  LOG(INFO) << 'Testing chi_sim';
  LoadUnicharset('chi_sim.unicharset');
  ExpectCorrect('chi_sim');
}
    
    
    {  // Gate weight arrays of size [na + 1, no].
  WeightMatrix gate_weights_[WT_COUNT];
  // Used only if this is a softmax LSTM.
  FullyConnected* softmax_;
  // Input padded with previous output of size [width, na].
  NetworkIO source_;
  // Internal state used during forward operation, of size [width, ns].
  NetworkIO state_;
  // State of the 2-d maxpool, generated during forward, used during backward.
  GENERIC_2D_ARRAY<int8_t> which_fg_;
  // Internal state saved from forward, but used only during backward.
  NetworkIO node_values_[WT_COUNT];
  // Preserved input stride_map used for Backward when NT_LSTM_SQUASHED.
  StrideMap input_map_;
  int input_width_;
};
    
    struct OSBestResult {
  OSBestResult() : orientation_id(0), script_id(0), sconfidence(0.0),
                   oconfidence(0.0) {}
  int orientation_id;
  int script_id;
  float sconfidence;
  float oconfidence;
};
    
      // Update the other members if the cost is lower.
  void UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                      int32_t n, int32_t sig_x, int64_t sig_xsq);
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidFirstLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
    // This file contains types that are used both by the API and internally
// to Tesseract. In order to decouple the API from Tesseract and prevent cyclic
// dependencies, THIS FILE SHOULD NOT DEPEND ON ANY OTHER PART OF TESSERACT.
// Restated: It is OK for low-level Tesseract files to include publictypes.h,
// but not for the low-level tesseract code to include top-level API code.
// This file should not use other Tesseract types, as that would drag
// their includes into the API-level.
// API-level code should include apitypes.h in preference to this file.
    
      assert(peekType(msg) == thpp::Type::FLOAT);
  double arg1 = unpackFloat(msg);
  assert(arg1 == 1.0);
    
    #include <THPP/tensors/THTensor.hpp>
    
    #undef THStoragePtr
#undef THPStoragePtr
#undef THTensorPtr
#undef THPTensorPtr
    
    #define THPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THPDoubleStorageClass)
#define THPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THPLongStorageClass)
#define THPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THPIntStorageClass)
#define THPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THPShortStorageClass)
#define THPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THPCharStorageClass)
#define THPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THPByteStorageClass)
    
    bool object_exists(const char *name) {
  int fd = shm_open(name, O_RDONLY, 0);
  if (fd >= 0) {
    close(fd);
    return true;
  } else {
    return false;
  }
}
    
    void THDTensor_(bernoulli_FloatTensor)(THDTensor *self, THDGenerator *_generator,
                                       THDFloatTensor *p) {
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorBernoulli_FloatTensor, self, _generator, p),
    THDState::s_current_worker
  );
}
    
      /**
   * Construct a new string by replacing the characters denoted by the half-open
   *   range [`first`,`last`) within this string with the characters from string
   *   `that` starting at position `that_pos`.
   * \pre `that_pos <= that.size()`
   * \note Equivalent to
   *   <tt>creplace(first - data(), last - first, that, that_pos,
   *   that.size() - that_pos)</tt>
   */
  template <std::size_t M>
  constexpr BasicFixedString<Char, N + M> creplace(
      const Char* first,
      const Char* last,
      const BasicFixedString<Char, M>& that,
      std::size_t that_pos = 0u) const noexcept(false) {
    return creplace(
        first - data_,
        last - first,
        that,
        that_pos,
        that.size_ - detail::fixedstring::checkOverflow(that_pos, that.size_));
  }
    
      size_t sizeGuess() const {
    size_t size = 0;
    for (auto& q : queues_) {
      size += q.sizeGuess();
    }
    return size;
  }
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.try_dequeue(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
      size_type erase(const key_type& key) {
    iterator it = find(key);
    if (it == end()) {
      return 0;
    }
    m_.cont_.erase(it);
    return 1;
  }
    
    TEST(SortedVectorTypes, BadHints) {
  for (int toInsert = -1; toInsert <= 7; ++toInsert) {
    for (int hintPos = 0; hintPos <= 4; ++hintPos) {
      sorted_vector_set<int> s;
      for (int i = 0; i <= 3; ++i) {
        s.insert(i * 2);
      }
      s.insert(s.begin() + hintPos, toInsert);
      size_t expectedSize = (toInsert % 2) == 0 ? 4 : 5;
      EXPECT_EQ(s.size(), expectedSize);
      check_invariant(s);
    }
  }
}
    
          idled = false;
    } else {
      std::chrono::steady_clock::duration idleTimeout =
          MemoryIdler::defaultIdleTimeout.load(std::memory_order_acquire);
    
    #include <atomic>