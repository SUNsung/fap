
        
        // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    
    {  WriteFieldDocComment(printer, descriptor_);
  if (descriptor_->is_repeated()) {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newRepeatedGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $packed$,\n'
        '      $singular_type$.class);\n');
  } else {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newSingularGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $default$,\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $singular_type$.class);\n');
  }
  printer->Annotate('name', descriptor_);
}
    
    
    {  zcontext_.zalloc = Z_NULL;
  zcontext_.zfree = Z_NULL;
  zcontext_.opaque = Z_NULL;
  zcontext_.next_out = NULL;
  zcontext_.avail_out = 0;
  zcontext_.total_out = 0;
  zcontext_.next_in = NULL;
  zcontext_.avail_in = 0;
  zcontext_.total_in = 0;
  zcontext_.msg = NULL;
  // default to GZIP format
  int windowBitsFormat = 16;
  if (options.format == ZLIB) {
    windowBitsFormat = 0;
  }
  zerror_ = deflateInit2(
      &zcontext_,
      options.compression_level,
      Z_DEFLATED,
      /* windowBits */15 | windowBitsFormat,
      /* memLevel (default) */8,
      options.compression_strategy);
}
    
    // ----------------------------------------------------------------------
// NoLocaleStrtod()
//   This code will make you cry.
// ----------------------------------------------------------------------
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Here we have a hand-written lexer.  At first you might ask yourself,
// 'Hand-written text processing?  Is Kenton crazy?!'  Well, first of all,
// yes I am crazy, but that's beside the point.  There are actually reasons
// why I ended up writing this this way.
//
// The traditional approach to lexing is to use lex to generate a lexer for
// you.  Unfortunately, lex's output is ridiculously ugly and difficult to
// integrate cleanly with C++ code, especially abstract code or code meant
// as a library.  Better parser-generators exist but would add dependencies
// which most users won't already have, which we'd like to avoid.  (GNU flex
// has a C++ output option, but it's still ridiculously ugly, non-abstract,
// and not library-friendly.)
//
// The next approach that any good software engineer should look at is to
// use regular expressions.  And, indeed, I did.  I have code which
// implements this same class using regular expressions.  It's about 200
// lines shorter.  However:
// - Rather than error messages telling you 'This string has an invalid
//   escape sequence at line 5, column 45', you get error messages like
//   'Parse error on line 5'.  Giving more precise errors requires adding
//   a lot of code that ends up basically as complex as the hand-coded
//   version anyway.
// - The regular expression to match a string literal looks like this:
//     kString  = new RE('(\'([^\'\\\\]|'              // non-escaped
//                       '\\\\[abfnrtv?\''\\\\0-7]|'   // normal escape
//                       '\\\\x[0-9a-fA-F])*\'|'       // hex escape
//                       '\'([^\'\\\\]|'        // Also support single-quotes.
//                       '\\\\[abfnrtv?\''\\\\0-7]|'
//                       '\\\\x[0-9a-fA-F])*\')');
//   Verifying the correctness of this line noise is actually harder than
//   verifying the correctness of ConsumeString(), defined below.  I'm not
//   even confident that the above is correct, after staring at it for some
//   time.
// - PCRE is fast, but there's still more overhead involved than the code
//   below.
// - Sadly, regular expressions are not part of the C standard library, so
//   using them would require depending on some other library.  For the
//   open source release, this could be really annoying.  Nobody likes
//   downloading one piece of software just to find that they need to
//   download something else to make it work, and in all likelihood
//   people downloading Protocol Buffers will already be doing so just
//   to make something else work.  We could include a copy of PCRE with
//   our code, but that obligates us to keep it up-to-date and just seems
//   like a big waste just to save 200 lines of code.
//
// On a similar but unrelated note, I'm even scared to use ctype.h.
// Apparently functions like isalpha() are locale-dependent.  So, if we used
// that, then if this code is being called from some program that doesn't
// have its locale set to 'C', it would behave strangely.  We can't just set
// the locale to 'C' ourselves since we might break the calling program that
// way, particularly if it is multi-threaded.  WTF?  Someone please let me
// (Kenton) know if I'm missing something here...
//
// I'd love to hear about other alternatives, though, as this code isn't
// exactly pretty.
    
        void div(const Size2D &size,
             const f32 * src0Base, ptrdiff_t src0Stride,
             const f32 * src1Base, ptrdiff_t src1Stride,
             f32 * dstBase, ptrdiff_t dstStride,
             f32 scale);
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        typename internal::VecTraits<T>::vec128 v_min = internal::vminq(v_src0, v_src1);
        typename internal::VecTraits<T>::vec128 v_max = internal::vmaxq(v_src0, v_src1);
        v_dst = internal::vqsubq(v_max, v_min);
    }
    
            for (; j < roiw32; j += 32)
        {
            internal::prefetch(src + j);
            uint8x16_t v_src0 = vld1q_u8(src + j), v_src1 = vld1q_u8(src + j + 16);
            uint8x16_t v_dst0 = vmvnq_u8(v_src0), v_dst1 = vmvnq_u8(v_src1);
            vst1q_u8(dst + j, v_dst0);
            vst1q_u8(dst + j + 16, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            uint8x8_t v_src = vld1_u8(src + j);
            uint8x8_t v_dst = vmvn_u8(v_src);
            vst1_u8(dst + j, v_dst);
        }
    
                op(v_src00, v_src10, v_dst0);
            op(v_src01, v_src11, v_dst1);
    
    
    {            vec128 v_src = vld1q(src + js);
            vec128 v_dst = vrev64q(v_src);
            v_dst = vcombine(vget_high(v_dst), vget_low(v_dst));
            vst1q(dst + jd - step_base, v_dst);
        }
        for (; js < roiw_tail; js += step_tail, jd -= step_tail)
        {
            vec64 v_src = vld1(src + js);
            vst1(dst + jd - step_tail, vrev64(v_src));
        }
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
      bool is_started() const;
    
    
    {  /// Whether to ignore instances with a certain label.
  bool has_ignore_label_;
  /// The label indicating that an instance should be ignored.
  int ignore_label_;
  /// Keeps counts of the number of samples per class.
  Blob<Dtype> nums_buffer_;
};
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_LCN_LAYER_HPP_

    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include <vector>
    
      xfer += iprot->readStructBegin(fname);
    
    typedef struct _Extension_call_args__isset {
  _Extension_call_args__isset() : registry(false), item(false), request(false) {}
  bool registry :1;
  bool item :1;
  bool request :1;
} _Extension_call_args__isset;
    
    
    {    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin('query', ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }
    
    #include 'osquery_types.h'
    
      virtual ~ExtensionStatus() throw();
  int32_t code;
  std::string message;
  ExtensionRouteUUID uuid;
    
    // getSerializedQueryLogItem() return an std::pair where pair->first
// is a string which should serialize to pair->second. pair->second
// should deserialize to pair->first
std::pair<JSON, QueryLogItem> getSerializedQueryLogItem();
std::pair<std::string, QueryLogItem> getSerializedQueryLogItemJSON();
    
    #include <boost/core/ignore_unused.hpp>
#include <boost/filesystem.hpp>
    
    template <typename... TemplateArgs>
struct IsMap<std::map<TemplateArgs...>> : std::true_type {};
    
    #include <osquery/utils/expected/expected.h>
    
    #include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
    
        int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    
    
    {private:
    int nextDifferentCharacterIndex(const vector<int> &nums, int p){
        for( ; p < nums.size() ; p ++ )
            if( nums[p] != nums[p - 1] )
                break;
        return p;
    }
};
    
                cur = stack.top();
            stack.pop();
            res.push_back(cur->val);
            cur = cur->right;
    
    int main() {
    }
    
    
int main() {
    }
    
    #include <iostream>
#include <vector>
#include <stack>
#include <cassert>
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    public:
    vector<int> preorderTraversal(TreeNode* root) {
    }
    
    /// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};