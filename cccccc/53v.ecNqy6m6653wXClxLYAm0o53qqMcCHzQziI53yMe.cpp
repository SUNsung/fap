
        
        static void secp256k1_ge_to_storage(secp256k1_ge_storage *r, const secp256k1_ge *a) {
    secp256k1_fe x, y;
    VERIFY_CHECK(!a->infinity);
    x = a->x;
    secp256k1_fe_normalize(&x);
    y = a->y;
    secp256k1_fe_normalize(&y);
    secp256k1_fe_to_storage(&r->x, &x);
    secp256k1_fe_to_storage(&r->y, &y);
}
    
        memset(rng->v, 0x01, 32); /* RFC6979 3.2.b. */
    memset(rng->k, 0x00, 32); /* RFC6979 3.2.c. */
    
    #ifndef SECP256K1_MODULE_ECDH_MAIN_H
#define SECP256K1_MODULE_ECDH_MAIN_H
    
    int secp256k1_ecdsa_sign_recoverable(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32, const unsigned char *seckey, secp256k1_nonce_function noncefp, const void* noncedata) {
    secp256k1_scalar r, s;
    secp256k1_scalar sec, non, msg;
    int recid;
    int ret = 0;
    int overflow = 0;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(seckey != NULL);
    if (noncefp == NULL) {
        noncefp = secp256k1_nonce_function_default;
    }
    }
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
    #include <stdint.h>
#include <string>
#include <vector>
    
    #ifndef BITCOIN_CRYPTO_RIPEMD160_H
#define BITCOIN_CRYPTO_RIPEMD160_H
    
    loop0:
    lea	TBL,[K256 wrt rip]
    
      desired_output_for_decode = 'zbcdefghIJ';
  expected = string('\0zbcdefghIJ\0', 12);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    string Status::ToString() const {
  if (error_code_ == error::OK) {
    return 'OK';
  } else {
    if (error_message_.empty()) {
      return error::CodeEnumToString(error_code_);
    } else {
      return error::CodeEnumToString(error_code_) + ':' +
          error_message_;
    }
  }
}
    
    #include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
    
    using google::protobuf::FileDescriptorProto;
using google::protobuf::FileDescriptor;
using google::protobuf::DescriptorPool;
using google::protobuf::io::Printer;
using google::protobuf::util::SchemaGroupStripper;
using google::protobuf::util::EnumScrubber;
using google::protobuf::util::ExtensionStripper;
using google::protobuf::util::FieldScrubber;
    
    #include 'addressbook.pb.h'
    
      /// @brief Deprecated; use <code>Reshape(const vector<int>& shape)</code>.
  void Reshape(const int num, const int channels, const int height,
      const int width);
  /**
   * @brief Change the dimensions of the blob, allocating new memory if
   *        necessary.
   *
   * This function can be called both to create an initial allocation
   * of memory, and to adjust the dimensions of a top blob during Layer::Reshape
   * or Layer::Forward. When changing the size of blob, memory will only be
   * reallocated if sufficient memory does not already exist, and excess memory
   * will never be freed.
   *
   * Note that reshaping an input blob and immediately calling Net::Backward is
   * an error; either Net::Forward or Net::Reshape need to be called to
   * propagate the new input shape to higher layers.
   */
  void Reshape(const vector<int>& shape);
  void Reshape(const BlobShape& shape);
  void ReshapeLike(const Blob& other);
  inline string shape_string() const {
    ostringstream stream;
    for (int i = 0; i < shape_.size(); ++i) {
      stream << shape_[i] << ' ';
    }
    stream << '(' << count_ << ')';
    return stream.str();
  }
  inline const vector<int>& shape() const { return shape_; }
  /**
   * @brief Returns the dimension of the index-th axis (or the negative index-th
   *        axis from the end, if index is negative).
   *
   * @param index the axis index, which may be negative as it will be
   *        'canonicalized' using CanonicalAxisIndex.
   *        Dies on out of range index.
   */
  inline int shape(int index) const {
    return shape_[CanonicalAxisIndex(index)];
  }
  inline int num_axes() const { return shape_.size(); }
  inline int count() const { return count_; }
    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
      virtual inline const char* type() const { return 'Bias'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int MaxBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      virtual inline const char* type() const { return 'BNLL'; }
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
    #include 'unicode/translit.h'
    
    U_NAMESPACE_BEGIN
    
    
int32_t SelectFormat::findSubMessage(const MessagePattern& pattern, int32_t partIndex,
                                     const UnicodeString& keyword, UErrorCode& ec) {
    if (U_FAILURE(ec)) {
        return 0;
    }
    UnicodeString other(FALSE, SELECT_KEYWORD_OTHER, 5);
    int32_t count = pattern.countParts();
    int32_t msgStart=0;
    // Iterate over (ARG_SELECTOR, message) pairs until ARG_LIMIT or end of select-only pattern.
    do {
        const MessagePattern::Part& part=pattern.getPart(partIndex++);
        const UMessagePatternPartType type=part.getType();
        if(type==UMSGPAT_PART_TYPE_ARG_LIMIT) {
            break;
        }
        // part is an ARG_SELECTOR followed by a message
        if(pattern.partSubstringMatches(part, keyword)) {
            // keyword matches
            return partIndex;
        } else if(msgStart==0 && pattern.partSubstringMatches(part, other)) {
            msgStart=partIndex;
        }
        partIndex=pattern.getLimitPartIndex(partIndex);
    } while(++partIndex<count);
    return msgStart;
}
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
    class NumberFormat;
    
        /**
     * Returns TRUE if this object is equal to rhs.
     */
    UBool equals(const SignificantDigitInterval &rhs) const {
        return ((fMax == rhs.fMax) && (fMin == rhs.fMin));
    }
    
    
    
        case UDAT_QUARTER_FIELD:
        if (gotNumber) // i.e., Q or QQ.
        {
            // Don't want to parse the month if it is a string
            // while pattern uses numeric style: Q or QQ.
            // [We computed 'value' above.]
            cal.set(UCAL_MONTH, (value - 1) * 3);
            return pos.getIndex();
        } else {
            // count >= 3 // i.e., QQQ or QQQQ
            // Want to be able to parse both short and long forms.
            // Try count == 4 first:
            int32_t newStart = 0;
    }
    
        /**
     * Implement UnicodeMatcher
     * Returns TRUE if this matcher will match a character c, where c
     * & 0xFF == v, at offset, in the forward direction (with limit >
     * offset).  This is used by <tt>RuleBasedTransliterator</tt> for
     * indexing.
     * @param v    the given value
     * @return     TRUE if this matcher will match a character c, 
     *             where c & 0xFF == v
     */
    virtual UBool matchesIndexValue(uint8_t v) const;
    
    class ExtensionHandler : virtual public ExtensionIf {
 public:
  ExtensionHandler() {
    // Your initialization goes here
  }
    }
    
    namespace osquery { namespace extensions {
    }
    }
    
      for (const auto& iter : line) {
    options_index++;
    if (iter[0] == '/') {
      line_exports.push_back(iter);
    } else {
      break;
    }
  }
    
      // Join results..
  for (auto& entry : hw_info) {
    bool matched = false;
    for (auto& row : results) {
      auto serial = row.find('serial_number');
      if (serial == row.end()) {
        continue;
      }
    }
    }
    
    Expected<int, PosixError> syscall(struct perf_event_attr* attr,
                                  pid_t pid,
                                  int cpu,
                                  int group_fd,
                                  unsigned long const flags);
    
    
    {  auto dst = std::vector<TestMessage>{};
  auto status =
      ebpf::impl::consumeWrappedMessagesFromCircularBuffer<WrappedMessage>(
          &buf[0], tail, head, buf.size(), dst);
  ASSERT_FALSE(status.isError()) << status.getError().getMessage();
  ASSERT_EQ(dst.size(), test_size);
  for (std::size_t i = 0; i < test_size; ++i) {
    EXPECT_EQ(dst[i].c_, 't');
    EXPECT_EQ(dst[i].d_, 'i');
  }
  EXPECT_EQ(dst[0].a_, 1);
  EXPECT_EQ(dst[0].b_, 2);
  EXPECT_EQ(dst[1].a_, 3);
  EXPECT_EQ(dst[1].b_, 4);
  EXPECT_EQ(dst[2].a_, 5);
  EXPECT_EQ(dst[2].b_, 6);
}
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    // Sanity check integration test for kernel_integrity
// Spec file: specs/linux/kernel_integrity.table
    
    // Sanity check integration test for kernel_modules
// Spec file: specs/linux/kernel_modules.table