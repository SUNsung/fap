
        
        // Names that corresponds to a single input parameter.
class ParamNames {
 public:
  // Create param based on Arg.
  ParamNames(const string& name, const string& rename_to) : name_(name) {
    rename_to_ = AvoidPythonReserved(rename_to);
  }
    }
    
    // NumPy casts
    
    // Called by python code on initialization.
//
// 'trampoline' must represent a python function which has the
// following signature:
//   (string, list(ndarray)) | (string, list(EagerTensor)) ->
//     ndarray | list(ndarray) | python scalar |
//     EagerTensor | list(EagerTensor) | None
//
// The trampoline takes two arguments, the first is a string token
// used by the python frontend's dispatching logic; the second is a
// list of numpy ndarrays or EagerTensor objects. It can return a
// single numpy ndarray, a list of numpy ndarrays, a python scalar, an
// EagerTensor, a list of EagerTensors, or None.
//
// PyFunc requires inputs and outputs to be ndarrays. EagerPyFunc requires
// inputs to be a list of EagerTensors and outputs to be an EagerTensor, a list
// of EagerTensors, or None.
//
// The C++ runtime converts outputs back to Tensor objects.
//
// This function is called by script_ops.py during its module initialization.
//
// TODO(zhifengc): Support distributed runtime.
void InitializePyTrampoline(PyObject* trampoline);
    
    struct TFTensorDeleter {
  void operator()(TF_Tensor* p) const { TF_DeleteTensor(p); }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
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
    
    
    {
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<ImageAugmenter *()> ImageAugmenterFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct ImageAugmenterReg
    : public dmlc::FunctionRegEntryBase<ImageAugmenterReg,
                                        ImageAugmenterFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register image augmenter
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IMAGE_AUGMENTER(aug_default)
 * .describe('default augmenter')
 * .set_body([]() {
 *     return new DefaultAugmenter();
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IMAGE_AUGMENTER(name)                            \
  DMLC_REGISTRY_REGISTER(::mxnet::io::ImageAugmenterReg, ImageAugmenterReg, name)
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_USE_OPENCV
    
    template<typename xpu>
void Quantize2BitKernelLaunch(mshadow::Stream<xpu> *s, const std::vector<mxnet::TBlob> &inputs,
                              const float threshold) {
  mxnet::op::mxnet_op::Kernel<quantize_2bit, xpu>
    ::Launch(s,
            inputs[2].Size(),         // compressed array size
            inputs[0].Size(),         // original size
            inputs[2].dptr<float>(),  // compressed array
            inputs[0].dptr<float>(),  // original array
            inputs[1].dptr<float>(),  // residual array
            -1 *threshold,            // negative threshold
            threshold);               // positive threshold
}
    
      /*!
  * \brief Issues dequantize operation to be scheduled by the engine
  * Decompresses `from` into `to` using current parameters of `type` and `threshold`
  * \param from the ndarray containing quantized data
  * \param to the target ndarray which contains final dequantized data
  * \param priority Priority of the action.
  */
  void Dequantize(const mxnet::NDArray &from, mxnet::NDArray *to, const int priority);
    
      for (auto& blob : in_data) {
    ptrs.push_back(reinterpret_cast<void*>(new NDArray(blob, ndctx.dev_id)));
    tags.push_back(0);
  }
  for (auto& blob : out_data) {
    NDArray* nd = new NDArray(blob, ndctx.dev_id);
    ptrs.push_back(reinterpret_cast<void*>(nd));
    ndvar.push_back(nd->var());
    tags.push_back(1);
  }
  std::sort(ndvar.begin(), ndvar.end());
  ndvar.resize(std::unique(ndvar.begin(), ndvar.end()) - ndvar.begin());
    
    
    
        Rational Pow(Rational const& base, Rational const& pow);
    Rational Root(Rational const& base, Rational const& root);
    Rational Fact(Rational const& rat);
    Rational Mod(Rational const& a, Rational const& b);
    
    
    {    m_hasExponent = true; // Entering exponent
    return true;
}
    
    
    {
    {        CommandBINEDITSTART = 700,
        CommandBINPOS0 = 700,
        CommandBINPOS1 = 701,
        CommandBINPOS2 = 702,
        CommandBINPOS3 = 703,
        CommandBINPOS4 = 704,
        CommandBINPOS5 = 705,
        CommandBINPOS6 = 706,
        CommandBINPOS7 = 707,
        CommandBINPOS8 = 708,
        CommandBINPOS9 = 709,
        CommandBINPOS10 = 710,
        CommandBINPOS11 = 711,
        CommandBINPOS12 = 712,
        CommandBINPOS13 = 713,
        CommandBINPOS14 = 714,
        CommandBINPOS15 = 715,
        CommandBINPOS16 = 716,
        CommandBINPOS17 = 717,
        CommandBINPOS18 = 718,
        CommandBINPOS19 = 719,
        CommandBINPOS20 = 720,
        CommandBINPOS21 = 721,
        CommandBINPOS22 = 722,
        CommandBINPOS23 = 723,
        CommandBINPOS24 = 724,
        CommandBINPOS25 = 725,
        CommandBINPOS26 = 726,
        CommandBINPOS27 = 727,
        CommandBINPOS28 = 728,
        CommandBINPOS29 = 729,
        CommandBINPOS30 = 730,
        CommandBINPOS31 = 731,
        CommandBINPOS32 = 732,
        CommandBINPOS33 = 733,
        CommandBINPOS34 = 734,
        CommandBINPOS35 = 735,
        CommandBINPOS36 = 736,
        CommandBINPOS37 = 737,
        CommandBINPOS38 = 738,
        CommandBINPOS39 = 739,
        CommandBINPOS40 = 740,
        CommandBINPOS41 = 741,
        CommandBINPOS42 = 742,
        CommandBINPOS43 = 743,
        CommandBINPOS44 = 744,
        CommandBINPOS45 = 745,
        CommandBINPOS46 = 746,
        CommandBINPOS47 = 747,
        CommandBINPOS48 = 748,
        CommandBINPOS49 = 749,
        CommandBINPOS50 = 750,
        CommandBINPOS51 = 751,
        CommandBINPOS52 = 752,
        CommandBINPOS53 = 753,
        CommandBINPOS54 = 754,
        CommandBINPOS55 = 755,
        CommandBINPOS56 = 756,
        CommandBINPOS57 = 757,
        CommandBINPOS58 = 758,
        CommandBINPOS59 = 759,
        CommandBINPOS60 = 760,
        CommandBINPOS61 = 761,
        CommandBINPOS62 = 762,
        CommandBINPOS63 = 763,
        CommandBINEDITEND = 763
    };
}

    
    {
    if (b->cdigit > 1 || b->mant[0] != 1 || b->exp != 0)
    {
        // b is not one.
        if ((*pa)->cdigit > 1 || (*pa)->mant[0] != 1 || (*pa)->exp != 0)
        {
            // pa and b are both not one.
            _divnumx(pa, b, precision);
        }
        else
        {
            // if pa is one and b is not one, just copy b, and adjust the sign.
            int32_t sign = (*pa)->sign;
            DUPNUM(*pa, b);
            (*pa)->sign *= sign;
        }
    }
    else
    {
        // b is one so don't divide, but set the sign.
        (*pa)->sign *= b->sign;
    }
}
    
    
    {
    {    private:
        static bool IsNativeUDF(const Dictionary& dict);
    };
}

    
                if ((oldOutputRank != SentinelValueForInferParamInitRank) && (oldOutputRank != outputRank))
                InvalidArgument('Output rank of a non-uniform random initialier cannot be overridden if it has been already specified!');
    
        // Releases the mutex
    void Release()
    {
        assert(m_fd != -1);
        // removing file
        unlink(m_fileName.c_str());
        // Note: file is intentionally removed *before* releasing the lock
        // to ensure that locked file isn't deleted by the non-owner of the lock
        m_lock.l_type = F_UNLCK;
        // Now removing the lock and closing the file descriptor
        // waiting processes will be notified
        int rc = fcntl(m_fd, F_SETLKW, &m_lock);
        if (rc == FCNTL_ERROR)
        {
            RuntimeError('Mutex Release: Failed to release mutex %s', m_fileName.c_str());
        }
        close(m_fd);
        m_fd = -1;
    }
    
    // Same as above but with additional information about required streams.
void DataReader::StartMinibatchLoop(size_t mbSize, size_t epoch, const std::unordered_set<InputStreamDescription>& streamDescriptions, size_t requestedEpochSamples)
{
    for (size_t i = 0; i < m_ioNames.size(); i++)
        m_dataReaders[m_ioNames[i]]->StartMinibatchLoop(mbSize, epoch, streamDescriptions, requestedEpochSamples);
}
    
    #include <functional>
#include <stdexcept>