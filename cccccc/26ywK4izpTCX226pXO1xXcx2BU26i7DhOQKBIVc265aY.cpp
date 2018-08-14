
        
        /*! \brief LOG INFO to report message to R console, need to append newline */
#define RLOG_INFO ::Rcpp::Rcout
    
    void Executor::UpdateAuxArray(const Rcpp::List& array,
                              bool match_name,
                              bool skip_null) {
  UpdateArray('aux.arrays', array, aux_arrays_, match_name, skip_null);
}
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_states) {
    using namespace mshadow;
    using namespace mshadow::expr;
    CHECK_EQ(in_data.size(), 3);
    CHECK_EQ(out_data.size(), 2);
    CHECK_GT(req.size(), 1);
    CHECK_EQ(req[proposal::kOut], kWriteTo);
    CHECK_EQ(in_data[proposal::kClsProb].shape_[0], 1)
      << 'Sorry, multiple images each device is not implemented.';
    }
    
    void MKLDNNConcatForward(const nnvm::NodeAttrs& attrs, const OpContext &ctx,
                         const std::vector<NDArray> &in_data,
                         const std::vector<OpReqType> &req,
                         const std::vector<NDArray> &out_data) {
  TmpMemMgr::Get()->Init(ctx.requested[concat_enum::kTempSpace]);
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  int num_in_data = param.num_args;
  int concat_dim = param.dim;
  std::vector<mkldnn::memory::primitive_desc> data_md;
  std::vector<const mkldnn::memory *> data_mem;
  data_md.reserve(num_in_data);
  data_mem.reserve(num_in_data);
  for (int i = 0; i < num_in_data; i++) {
    const mkldnn::memory *tmp_mem = in_data[i].GetMKLDNNData();
    mkldnn::memory::primitive_desc tmp_pd = tmp_mem->get_primitive_desc();
    data_md.push_back(tmp_pd);
    data_mem.push_back(tmp_mem);
  }
  MKLDNNConcatFwd &fwd = GetConcatForward(concat_dim, in_data, data_md);
  mxnet::mkldnn_output_t out_mem = CreateMKLDNNMem(out_data[concat_enum::kOut],
                                                   fwd.fwd_pd.dst_primitive_desc(),
                                                   req[concat_enum::kOut]);
  fwd.SetNewMem(data_mem, *out_mem.second);
  MKLDNNStream::Get()->RegisterPrim(fwd.GetFwd());
  CommitOutput(out_data[concat_enum::kOut], out_mem);
  MKLDNNStream::Get()->Submit();
}
    
    
    {
    {
    {
    {        for (dim_t l = 0; l < num_cols; ++l) {
          out[offset_out+l] += data_r[offset_r+l] * val;
        }
      }
    }
  }
};
    
    
    {
    {}  // namespace op
}  // namespace mxnet
    
        // transpose rows [i0,i1) to columns [i0,i1) of 'to'
    // CURRENTLY, i0 must be aligned to 4. (If this is ever not OK, fix it then.)
    void transposerows(ssematrixbase &to, size_t i0, size_t i1) const
    {
        transposepatch(to, i0, i1, 0, cols());
    }
    
        InvalidateCompiledNetwork();
    
    // SectionString - section to hold variable length zero terminated UTF8 strings
// supports mapping tables
// for faster access, a section with offsets to the beginning of the strings can be saved as well
class SectionString : public Section
{
public:
    typedef std::string LabelType; // TODO: are these supposed to be the same as the DataReader's?
    typedef unsigned LabelIdType;
    }
    
    GPUDataTransferer::GPUDataTransferer(int deviceId, bool useConcurrentStreams) 
{
#pragma warning(disable : 4127)
    if (useConcurrentStreams && (s_fetchStream == NULL))
    {
        cudaStreamCreateWithFlags(&s_fetchStream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed';
        cudaStreamCreateWithFlags(&s_assignStream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed';
    }
    }
    
    using namespace std;
using namespace Microsoft::MSR::ScriptableObjects;
    
        static void SetTimestampingFlag()
    {
        auto& us = GetStaticInstance();
        us.m_timestampFlag = true;
    }
    
    vector<wstring> /*IConfigRecord::*/ ComputationNodeBase::GetMemberIds() const
{
    return vector<wstring>{ L'name', L'operation', L'dim', L'dims', /*L'tag', */L'inputs', OperationName() + L'Args' };
}
    
    #endif // BOOST_ASIO_BASIC_WAITABLE_TIMER_HPP

    
      /// Close the stream.
  boost::system::error_code close(boost::system::error_code& ec)
  {
    return next_layer_.close(ec);
  }
    
      BOOST_ASIO_DECL static void init_native_buffer(
      native_buffer_type& buf,
      const boost::asio::const_buffer& buffer);
#elif defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
  // The maximum number of buffers to support in a single operation.
  enum { max_buffers = 64 < max_iov_len ? 64 : max_iov_len };
    
    #endif // BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP

    
    #include <boost/asio/detail/config.hpp>
    
    /**
 * Get current exceptions being handled.  front() is the most recent exception.
 * There should be at most one unless rethrowing.
 */
std::vector<ExceptionInfo> getCurrentExceptions();
    
      if (state_ != SingletonHolderState::NotRegistered) {
    /* Possible causes:
     *
     * You have two instances of the same
     * folly::Singleton<Class>. Probably because you define the
     * singleton in a header included in multiple places? In general,
     * folly::Singleton shouldn't be in the header, only off in some
     * anonymous namespace in a cpp file. Code needing the singleton
     * will find it when that code references folly::Singleton<Class>.
     *
     * Alternatively, you could have 2 singletons with the same type
     * defined with a different name in a .cpp (source) file. For
     * example:
     *
     * Singleton<int> a([] { return new int(3); });
     * Singleton<int> b([] { return new int(4); });
     *
     */
    singletonWarnDoubleRegistrationAndAbort(type());
  }
    
    namespace folly {
    }
    
      static size_t controlBlockSize(size_t n) {
    return offsetof(ControlBlockAndPromise, promises) + n * sizeof(BoolPromise);
  }
    
    
    {  friend bool operator==(Self const& a, Self const& b) noexcept {
    return std::addressof(a.ref_.get()) == std::addressof(b.ref_.get());
  }
  friend bool operator!=(Self const& a, Self const& b) noexcept {
    return std::addressof(a.ref_.get()) != std::addressof(b.ref_.get());
  }
};
    
    TEST(AlignedSysAllocator, bad_alloc_default) {
  using Alloc = AlignedSysAllocator<float>;
  Alloc const alloc(1024);
  std::vector<float, Alloc> nums(alloc);
  if (!kIsSanitize) {
    EXPECT_THROW(nums.reserve(kTooBig), std::bad_alloc);
  }
}
    
      Function<int(int) const> callback = [](int x) { return x + 1; };
    
      vector<Future<LargeReturn>> futures;
  for (auto idx = 0; idx < 40; ++idx) {
    futures.emplace_back(futures::retrying(
        [&executor](size_t, const exception_wrapper&) {
          return via(&executor).then([] { return true; });
        },
        func));
  }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        if (IsLocking())
        ::wakeupLock_Unlock(object_);
    
    
    {    SPY_DETACH_VARIABLE('TestFun0 i');
}
    
    #include 'comm/debugger/spy.inl'
    
    bool JNU_JbyteArray2Buffer(JNIEnv* _env, const jbyteArray bytes, AutoBuffer& ab);
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.