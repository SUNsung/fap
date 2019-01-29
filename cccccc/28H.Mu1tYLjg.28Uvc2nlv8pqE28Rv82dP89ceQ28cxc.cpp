
        
        #endif // BITCOIN_QT_OPENURIDIALOG_H

    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
    #include <univalue.h>
    
    static void secp256k1_gej_neg(secp256k1_gej *r, const secp256k1_gej *a) {
    r->infinity = a->infinity;
    r->x = a->x;
    r->y = a->y;
    r->z = a->z;
    secp256k1_fe_normalize_weak(&r->y);
    secp256k1_fe_negate(&r->y, &r->y, 1);
}
    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
    int secp256k1_ecdsa_recoverable_signature_parse_compact(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature* sig, const unsigned char *input64, int recid) {
    secp256k1_scalar r, s;
    int ret = 1;
    int overflow = 0;
    }
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    // Added for Bitcoin Core
template<typename... Args>
std::string format(const std::string &fmt, const Args&... args)
{
    std::ostringstream oss;
    format(oss, fmt.c_str(), args...);
    return oss.str();
}
    
        BOOST_CHECK(arr.push_backV(vec));
    
        enum BORDER_MODE
    {
        BORDER_MODE_UNDEFINED,
        BORDER_MODE_CONSTANT,
        BORDER_MODE_REPLICATE,
        BORDER_MODE_REFLECT,
        BORDER_MODE_REFLECT101,
        BORDER_MODE_WRAP
    };
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vabd(v_src0, v_src1);
    }
    
            for (; sj < roiw8; sj += 8, syj += 16, dj += 32)
        {
            uint8x8x2_t v_y = vld2_u8(srcy + syj);
            uint8x8x4_t v_dst;
            v_dst.val[0] = vld1_u8(srcu + sj);
            v_dst.val[1] = v_y.val[0];
            v_dst.val[2] = vld1_u8(srcv + sj);
            v_dst.val[3] = v_y.val[1];
            vst4_u8(dst + dj, v_dst);
        }
    
    template <typename T>
inline T *getRowPtr(T *base, ptrdiff_t stride, size_t row)
{
    char *baseRaw = const_cast<char *>(reinterpret_cast<const char *>(base));
    return reinterpret_cast<T *>(baseRaw + ptrdiff_t(row) * stride);
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVT_FUNC(s8, u16, 16,
     register uint8x16_t zero0 asm ('q1') = vmovq_n_u8(0);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.8 {d0-d1}, [%[src]]                              \n\t'
             'vmax.s8 q0, q1                                        \n\t'
             'vst2.8 {d0,d2}, [%[dst1]]                             \n\t'
             'vst2.8 {d1,d3}, [%[dst2]]                             \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst1] 'r' (_dst + i + 0),
               [dst2] 'r' (_dst + i + 8),
               'w' (zero0)
             : 'd0','d1'
         );
     }
})
#else
CVT_FUNC(s8, u16, 16,
     int8x16x2_t vline_s8;
     vline_s8.val[1] = vmovq_n_s8(0);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         vline_s8.val[0] = vld1q_s8(_src + i);
         vline_s8.val[0] = vmaxq_s8(vline_s8.val[0], vline_s8.val[1]);
         vst2q_s8((int8_t*)(_dst + i), vline_s8);
     }
})
#endif
    
    
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
    
    #include './ndarray.h'
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file operator_util.h
 * \brief Utility functions and registries to help quickly build new operators.
 *  [Deprecated]
 *  Use the register functions in this file when possible to simplify operator creations.
 *  Operators registered in this file will be exposed to both NDArray API and symbolic API.
 *
 * \author Tianqi Chen
 */
#ifndef MXNET_OPERATOR_UTIL_H_
#define MXNET_OPERATOR_UTIL_H_
    
    
    {
    {   private:
    friend class CudaModule;
    /*!
     * \brief constructor
     * \param mod module of this kernel
     * \param mangled_name mangled kernel name
     * \param signature kernel argument signature
     */
    Kernel(const std::shared_ptr<Chunk>& mod,
           const std::string& mangled_name,
           const std::vector<ArgType>& signature);
    /*! \brief mangled kernel name */
    std::string mangled_name_;
    /*! \brief kernel argument signature */
    std::vector<ArgType> signature_;
    /*! \brief module of this kernel */
    std::shared_ptr<Chunk> mod_;
    /*! \brief cached kernel function on each device */
    std::unordered_map<int, CUfunction> func_;
  };
  /*!
   * \brief CudaModule constructor
   * \param source cuda source code.
   * \param exports export symbols before mangling.
   */
  CudaModule(const char* source,
             const std::vector<std::string>& options,
             const std::vector<std::string>& exports)
      : ptr_(std::make_shared<Chunk>(source, options, exports)) {}
  /*!
   * \brief Get cuda kernal from module by name
   * \param name kernel name
   * \param signature kernel signature
   * \return shared pointer to cuda kernel
   */
  std::shared_ptr<Kernel> GetKernel(const std::string& name,
                                    const std::vector<ArgType>& signature);
};
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    // Set mode before forward
    caffe::CaffeMode::SetMode<xpu>();
    using ::caffe::Blob;
    using std::vector;
    using namespace mshadow;
    using namespace mshadow::expr;
    for (uint32_t i = 0; i < req.size(); ++i)
      CHECK_EQ(req[i], kWriteTo);
    }
    
    /*!
 * \brief Thread pool.
 */
class ThreadPool {
 public:
  /*! \brief Signal event upon destruction, even for exceptions (RAII) */
  struct SetReadyOnDestroy {
    explicit inline SetReadyOnDestroy(const std::shared_ptr<dmlc::ManualEvent>& event)
      : event_(event) {
    }
    inline ~SetReadyOnDestroy() {
      if (event_) {
        event_->signal();
      }
    }
    std::shared_ptr<dmlc::ManualEvent>  event_;
  };
    }
    
            for(int i = 0 ; i < nums.size() ; i ++){
            unordered_map<int,int>::iterator iter = record.find(target - nums[i]);
            if(iter != record.end() && iter->second != i){
                int res[] = {i, iter->second};
                return vector<int>(res, res + 2);
            }
        }
    
            ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
    
    int main() {
    }
    
    /// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
    
    private:
    struct Command{
        string s;   // go, print
        TreeNode* node;
        Command(string s, TreeNode* node): s(s), node(node){}
    };
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    
    {
    {
    {            if(cur != NULL){
                stack.push(cur);
                cur = cur->left;
            }
            else {
                cur = stack.top();
                stack.pop();
                res.push_back(cur->val);
                cur = cur->right;
            }
        }
        return res;
    }
};
    
            vector<vector<int>> res;
        if(root == NULL)
            return res;
    
            stack<Command> stack;
        stack.push(Command('go', root));
        while(!stack.empty()){
            Command command = stack.top();
            stack.pop();
    }
    
    #include <iostream>
#include <vector>
#include <stack>
#include <cassert>
    
    
void print_vec(const vector<int>& vec){
    for(int e: vec)
        cout << e << ' ';
    cout << endl;
}
    
    
    {
    {
    {            TagNode tagNode = stack.top();
            stack.pop();
            cur = tagNode.node;
            if(tagNode.isFirst == false){
                tagNode.isFirst = true;
                stack.push(tagNode);
                cur = cur->right;
            }
            else{
                res.push_back(cur->val);
                cur = NULL;
            };
        }
        return res;
    }
};
    
            stack.push(root);
        while(!stack.empty()){
    }