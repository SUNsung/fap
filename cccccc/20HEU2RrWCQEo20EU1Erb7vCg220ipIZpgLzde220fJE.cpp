
        
        // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
      ExpectInvalid(Builder().Input(FakeInput({})),
                'Length for attr 'T' of 0 must be at least minimum 1');
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    string VersionedComputationHandle::ToString() const {
  return tensorflow::strings::StrCat(handle.handle(), ':v', version);
}
    
      // If instruction is part of inputs, don't reset the bit_vector.
  if (std::find(inputs.begin(), inputs.end(), instruction) == inputs.end()) {
    bit_vector.SetToZero();
  }
  bit_vector.Set(GetIndex(instruction));
  for (const HloInstruction* input : inputs) {
    bit_vector.OrWith(GetBitVector(input));
  }
    
    
    {  /* We cannot open it, but we were able to stat it. */
  if (access(file, W_OK) == 0)
    if (file_printf(ms, 'writable, ') == -1)
      return -1;
  if (access(file, X_OK) == 0)
    if (file_printf(ms, 'executable, ') == -1)
      return -1;
  if (S_ISREG(md))
    if (file_printf(ms, 'regular file, ') == -1)
      return -1;
  if (file_printf(ms, 'no read permission') == -1)
    return -1;
  return 0;
}
    
        // Emit conditional checks for all successors in this region, in descending
    // order of hotness. We rely on the region selector to decide which arcs
    // are appropriate to include in the region. Fall through to the
    // fully-generic JmpSwitchDest at the end if nothing matches.
    for (auto const& val : values) {
      auto targetOff = bcOff(env) + offsets[val.caseIdx];
      SrcKey sk(curSrcKey(env), targetOff);
      if (!env.irb->hasBlock(sk)) continue;
    }
    
    ////////////////////////////////////////////////////////////////////////////////
    
    #endif
    
    
inline int Instruction::ImmBranch() const {
  switch (BranchType()) {
    case CondBranchType: return ImmCondBranch();
    case UncondBranchType: return ImmUncondBranch();
    case CompareBranchType: return ImmCmpBranch();
    case TestBranchType: return ImmTestBranch();
    default: not_reached();
  }
  return 0;
}
    
    std::string read_embedded_data(const embedded_data& desc) {
  std::ifstream ifs(desc.m_filename);
  if (!ifs.good()) return '';
  ifs.seekg(desc.m_start, std::ios::beg);
  std::unique_ptr<char[]> data(new char[desc.m_len]);
  ifs.read(data.get(), desc.m_len);
  return std::string(data.get(), desc.m_len);
}
    
    #include <cstdint>
#include <string>
    
    namespace leveldb {
    }
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
    void BlockBuilder::Reset() {
  buffer_.clear();
  restarts_.clear();
  restarts_.push_back(0);       // First restart point is at offset 0
  counter_ = 0;
  finished_ = false;
  last_key_.clear();
}
    
    
    {    page->data.resize(page->offset.back());
    CHECK_EQ(index_.data.size(), value_.data.size());
    CHECK_EQ(index_.data.size(), page->data.size());
    for (size_t i = 0; i < page->data.size(); ++i) {
      page->data[i] = SparseBatch::Entry(index_.data[i] + min_index_, value_.data[i]);
    }
    return true;
  }
    
    #include <cstdio>
#include <cstring>
#include <string>
#include <istream>
#include <fstream>
    
      size_t PeekRead(void* dptr, size_t size) {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer < size) {
      buffer_ = buffer_.substr(buffer_ptr_, buffer_.length());
      buffer_ptr_ = 0;
      buffer_.resize(size);
      size_t nadd = strm_->Read(dmlc::BeginPtr(buffer_) + nbuffer, size - nbuffer);
      buffer_.resize(nbuffer + nadd);
      std::memcpy(dptr, dmlc::BeginPtr(buffer_), buffer_.length());
      return buffer_.length();
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      return size;
    }
  }
    
    
    {
    {}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_RANDOM_H_

    
      bool Read(SparsePage* page,
            dmlc::SeekStream* fi,
            const std::vector<bst_uint>& sorted_index_set) override {
    if (!fi->Read(&disk_offset_)) return false;
    // setup the offset
    page->offset.clear();
    page->offset.push_back(0);
    for (size_t i = 0; i < sorted_index_set.size(); ++i) {
      bst_uint fid = sorted_index_set[i];
      CHECK_LT(fid + 1, disk_offset_.size());
      size_t size = disk_offset_[fid + 1] - disk_offset_[fid];
      page->offset.push_back(page->offset.back() + size);
    }
    page->data.resize(page->offset.back());
    // read in the data
    size_t begin = fi->Tell();
    size_t curr_offset = 0;
    for (size_t i = 0; i < sorted_index_set.size();) {
      bst_uint fid = sorted_index_set[i];
      if (disk_offset_[fid] != curr_offset) {
        CHECK_GT(disk_offset_[fid], curr_offset);
        fi->Seek(begin + disk_offset_[fid] * sizeof(SparseBatch::Entry));
        curr_offset = disk_offset_[fid];
      }
      size_t j, size_to_read = 0;
      for (j = i; j < sorted_index_set.size(); ++j) {
        if (disk_offset_[sorted_index_set[j]] == disk_offset_[fid] + size_to_read) {
          size_to_read += page->offset[j + 1] - page->offset[j];
        } else {
          break;
        }
      }
    }
    }
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    #include 'guetzli/gamma_correct.h'
    
      tmp0 = in[2 * stride];
  tmp1 = kIDCTMatrix[ 2] * tmp0;
  tmp2 = kIDCTMatrix[10] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    
    {  uint32_t counts[kSize];
};
    
    
    {  uint8_t bits;     // number of bits used for this symbol
  uint16_t value;   // symbol value or table offset
};
    
    #include 'guetzli/quality.h'