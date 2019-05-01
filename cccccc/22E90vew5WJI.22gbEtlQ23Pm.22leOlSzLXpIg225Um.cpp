
        
        #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
      // Builds and returns an ImageData from the basic data. Note that imagedata,
  // truth_text, and box_text are all the actual file data, NOT filenames.
  static ImageData* Build(const char* name, int page_number, const char* lang,
                          const char* imagedata, int imagedatasize,
                          const char* truth_text, const char* box_text);
    
    class ParagraphModel;
    
    // Computes the Otsu threshold(s) for the given histogram.
// Also returns H = total count in histogram, and
// omega0 = count of histogram below threshold.
int OtsuStats(const int* histogram, int* H_out, int* omega0_out);
    
    
#endif  // TESSERACT_CCUTIL_OBJECT_CACHE_H_

    
    /// Get the total length and remove the nth node
/// Two Pass Algorithm
///
/// Time Complexity: O(n)
/// Space Complexity: O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    }
    }
    
    
    {    return;
}
    
            ListNode* tail = pre->next;
        ListNode* left;
        pre->next = reverse(pre->next, n - m, left);
        tail->next = left;
    
    public:
    vector<int> inorderTraversal(TreeNode* root) {
    }
    
            while(!q.empty()){
    }
    
    using namespace std;
    
    // Classic Non-Recursive algorithm for preorder traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
    #include <iostream>
#include <vector>
#include <stack>
#include <cassert>
    
    // Another Classic Non-Recursive algorithm for preorder traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                stack.push(Command('print', command.node));
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};
    
    
    {    return 0;
}
    
    
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
    
      for (uint32_t nid = 0; nid < idx.num_nodes(); ++nid) {
    const auto& inode = idx[nid];
    if (inode.source->op() != ewise_plus_op) continue;
    int sid = storage_id[idx.entry_id(inode.inputs[0])];
    if (sid != storage_id[idx.entry_id(nid, 0)]) continue;
    if (idx[inode.inputs[0].node_id].source->is_variable()) continue;
    if (idx[inode.inputs[1].node_id].source->is_variable()) continue;
    uint32_t eid_rhs  = idx.entry_id(inode.inputs[1]);
    if (ref_count[eid_rhs] != 1) continue;
    if (inode.inputs[0].node_id >= inode.inputs[1].node_id) continue;
    // TODO(haibin) support inplace addto for Dynamic Storage
    if (storage_id[eid_rhs] == kDynamicStorageID) continue;
    CHECK_NE(storage_id[eid_rhs], sid);
    storage_id[eid_rhs] = sid;
    addto_entry[eid_rhs] = 1;
    storage_inplace_index[eid_rhs] = -1;
    skip_plus_node[nid] = 1;
  }
    
      /*! \brief internal next function, inlined for fater processing. */
  inline bool Next_(void) {
    if (!base_->Next()) return false;
    const DataInst &src = base_->Value();
    this->SetOutImg(src);
    out_.data.resize(2);
    out_.data[0] = outimg_;
    out_.data[1] = src.data[1];
    out_.index = src.index;
    out_.extra_data = src.extra_data;
    return true;
  }
  /*!
   * \brief Set the output image, after augmentation and normalization.
   * \param src The source image.
   */
  inline void SetOutImg(const DataInst &src) {
    using namespace mshadow::expr;  // NOLINT(*)
    mshadow::Tensor<cpu, 3> data = src.data[0].get<cpu, 3, real_t>();
    }
    
    /*!
 * \file gradient_compression-inl.h
 * \author Rahul Huilgol
 * \brief Declares and defines functions used to quantize and dequantize data
 */
#ifndef MXNET_KVSTORE_GRADIENT_COMPRESSION_INL_H_
#define MXNET_KVSTORE_GRADIENT_COMPRESSION_INL_H_
    
    
    {  if (has('dist')) {
#if MXNET_USE_DIST_KVSTORE
    kv = new kvstore::KVStoreDist(use_device_comm);
    if (!has('_async') && kv->IsWorkerNode() && kv->get_rank() == 0) {
      // configure the server to be the sync mode
      kv->SendCommandToServers(static_cast<int>(kvstore::CommandType::kSyncMode), '');
    }
#else
    LOG(FATAL) << 'compile with USE_DIST_KVSTORE=1 to use ' << tname;
    return nullptr;
#endif  // MXNET_USE_DIST_KVSTORE
  } else {
    if (has('nccl')) {
#if MXNET_USE_NCCL
      kv = new kvstore::KVStoreNCCL();
#else
      LOG(FATAL) << 'compile with USE_NCCL=1 to use ' << tname;
      return nullptr;
#endif
    } else {
      kv =  new kvstore::KVStoreLocal(use_device_comm);
    }
  }
  kv->type_ = tname;
  return kv;
}
    
    
// Wrap a TVM function to a function that invokes MXNet's Engine
// It does two things: call the engine properly
// set up the NDArray to DLTensor during invocation.
void WrapAsyncCall(TVMArgs wrap_args, TVMRetValue* wrap_rv) {
  PackedFunc f = wrap_args[0];
  PackedFunc fset_stream =  wrap_args[1];
  int num_const = wrap_args[2];
    }
    
    namespace mxnet {
namespace op {
    }
    }
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file identity_attach_KL_sparse_reg.cc
 * \brief\
*/
#include './identity_attach_KL_sparse_reg-inl.h'
#include <nnvm/op_attr_types.h>
    
    //--------------------------------------------------------------------------------
//
//    regionEnd
//
//--------------------------------------------------------------------------------
int32_t RegexMatcher::regionEnd() const {
    return (int32_t)fRegionLimit;
}
    
    UnicodeString &ScientificNumberFormatter::SuperscriptStyle::format(
        const UnicodeString &original,
        FieldPositionIterator &fpi,
        const UnicodeString &preExponent,
        const DecimalFormatStaticSets &staticSets,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    FieldPosition fp;
    int32_t copyFromOffset = 0;
    while (fpi.next(fp)) {
        switch (fp.getField()) {
        case UNUM_EXPONENT_SYMBOL_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(preExponent);
            break;
        case UNUM_EXPONENT_SIGN_FIELD:
            {
                int32_t beginIndex = fp.getBeginIndex();
                int32_t endIndex = fp.getEndIndex();
                UChar32 aChar = original.char32At(beginIndex);
                if (staticSets.fMinusSigns->contains(aChar)) {
                    appendTo.append(
                            original,
                            copyFromOffset,
                            beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptMinusSign);
                } else if (staticSets.fPlusSigns->contains(aChar)) {
                    appendTo.append(
                           original,
                           copyFromOffset,
                           beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptPlusSign);
                } else {
                    status = U_INVALID_CHAR_FOUND;
                    return appendTo;
                }
                copyFromOffset = endIndex;
            }
            break;
        case UNUM_EXPONENT_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            if (!copyAsSuperscript(
                    original,
                    fp.getBeginIndex(),
                    fp.getEndIndex(),
                    appendTo,
                    status)) {
              return appendTo;
            }
            copyFromOffset = fp.getEndIndex();
            break;
        default:
            break;
        }
    }
    appendTo.append(
            original, copyFromOffset, original.length() - copyFromOffset);
    return appendTo;
}
    
    U_CAPI UBool U_EXPORT2
uhash_compareScriptSet(const UElement key1, const UElement key2);
    
    #define LOW_A             ((UChar)0x0061)
#define LOW_B             ((UChar)0x0062)
#define LOW_C             ((UChar)0x0063)
#define LOW_D             ((UChar)0x0064)
#define LOW_E             ((UChar)0x0065)
#define LOW_F             ((UChar)0x0066)
#define LOW_G             ((UChar)0x0067)
#define LOW_H             ((UChar)0x0068)
#define LOW_I             ((UChar)0x0069)
#define LOW_J             ((UChar)0x006a)
#define LOW_K             ((UChar)0x006B)
#define LOW_L             ((UChar)0x006C)
#define LOW_M             ((UChar)0x006D)
#define LOW_N             ((UChar)0x006E)
#define LOW_O             ((UChar)0x006F)
#define LOW_P             ((UChar)0x0070)
#define LOW_Q             ((UChar)0x0071)
#define LOW_R             ((UChar)0x0072)
#define LOW_S             ((UChar)0x0073)
#define LOW_T             ((UChar)0x0074)
#define LOW_U             ((UChar)0x0075)
#define LOW_V             ((UChar)0x0076)
#define LOW_W             ((UChar)0x0077)
#define LOW_X             ((UChar)0x0078)
#define LOW_Y             ((UChar)0x0079)
#define LOW_Z             ((UChar)0x007A)
    
    
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
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    U_CDECL_END
    
    U_CAPI int32_t U_EXPORT2
ucol_keyHashCode(const uint8_t *key, 
                       int32_t  length)
{
    return icu::computeHashCode(key, length);
}
    
    int32_t StandardPlural::indexFromString(const char *keyword, UErrorCode &errorCode) {
    if (U_FAILURE(errorCode)) { return OTHER; }
    int32_t i = indexOrNegativeFromString(keyword);
    if (i >= 0) {
        return i;
    } else {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return OTHER;
    }
}
    
        // Handle a cursor preceding the output
    if (hasCursor && cursor < 0) {
        while (cursor++ < 0) {
            ICU_Utility::appendToRule(rule, (UChar)0x0040 /*@*/, TRUE, escapeUnprintable, quoteBuf);
        }
        // Fall through and append '|' below
    }