
        
        
    {private:
    Ui::OpenURIDialog *ui;
};
    
    #ifndef BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
#define BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
    
    
    {    /* d = (a0*2) * a3 */
    'leaq (%%r10,%%r10,1),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rbx\n'
    'movq %%rdx,%%rcx\n'
    /* d += (a1*2) * a2 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c = a4 * a4 */
    'movq %%r14,%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* a4 *= 2 */
    'addq %%r14,%%r14\n'
    /* d += a0 * a4 */
    'movq %%r10,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d+= (a1*2) * a3 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a2 * a2 */
    'movq %%r12,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * a0 */
    'movq %%r10,%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a1 * a4 */
    'movq %%r11,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += (a2*2) * a3 */
    'leaq (%%r12,%%r12,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* a0 *= 2 */
    'addq %%r10,%%r10\n'
    /* c += a0 * a1 */
    'movq %%r10,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a2 * a4 */
    'movq %%r12,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a3 * a3 */
    'movq %%r13,%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a0 * a2 (last use of %%r10) */
    'movq %%r10,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0),t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* c += a1 * a1 */
    'movq %%r11,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a3 * a4 */
    'movq %%r13,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rbx only) */
    'shrdq $52,%%rcx,%%rbx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rbx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'D'(r)
: '%rax', '%rbx', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    static void CheckSplitTorReplyLine(std::string input, std::string command, std::string args)
{
    BOOST_TEST_MESSAGE(std::string('CheckSplitTorReplyLine(') + input + ')');
    auto ret = SplitTorReplyLine(input);
    BOOST_CHECK_EQUAL(ret.first, command);
    BOOST_CHECK_EQUAL(ret.second, args);
}
    
    #include <stdint.h>
#include <string>
#include <vector>
    
    #ifndef BITCOIN_CRYPTO_RIPEMD160_H
#define BITCOIN_CRYPTO_RIPEMD160_H
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {} // namespace
    
     protected:
  ~NwClipboardSetListSyncFunction() override;
    
          rect = gfx_display.work_area();
      DisplayGeometry& work_area = displayResult->work_area;
      work_area.x = rect.x();
      work_area.y = rect.y();
      work_area.width = rect.width();
      work_area.height = rect.height();
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    
    {
    {}  // namespace data
}  // namespace xgboost
#endif  // XGBOOST_DATA_SPARSE_PAGE_WRITER_H_

    
    
    {
    {
    {  // base margin
  bst_float base_margin;
  // model parameter
  GBTreeModelParam param;
  /*! \brief vector of trees stored in the model */
  std::vector<std::unique_ptr<RegTree> > trees;
  /*! \brief for the update process, a place to keep the initial trees */
  std::vector<std::unique_ptr<RegTree> > trees_to_update;
  /*! \brief some information indicator of the tree, reserved */
  std::vector<int> tree_info;
};
}  // namespace gbm
}  // namespace xgboost

    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
      // Resets the SplitEvaluator to the state it was in after the Init was called
  virtual void Reset();
    
    namespace detail {
inline void SetBit(CompressedByteT *byte, int bit_idx) {
  *byte |= 1 << bit_idx;
}
template <typename T>
inline T CheckBit(const T &byte, int bit_idx) {
  return byte & (1 << bit_idx);
}
inline void ClearBit(CompressedByteT *byte, int bit_idx) {
  *byte &= ~(1 << bit_idx);
}
static const int kPadding = 4;  // Assign padding so we can read slightly off
                               // the beginning of the array
    }
    
        // output element with JSON pointer '/number'
    std::cout << j.at('/number'_json_pointer) << '\n';
    // output element with JSON pointer '/string'
    std::cout << j.at('/string'_json_pointer) << '\n';
    // output element with JSON pointer '/array'
    std::cout << j.at('/array'_json_pointer) << '\n';
    // output element with JSON pointer '/array/1'
    std::cout << j.at('/array/1'_json_pointer) << '\n';
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
      const std::vector<float> distmap() const override { return distmap_; }
  float distmap_aggregate() const override { return distance_; }
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli

    
    #endif  // GUETZLI_JPEG_DATA_DECODER_H_

    
    #include 'guetzli/fdct.h'