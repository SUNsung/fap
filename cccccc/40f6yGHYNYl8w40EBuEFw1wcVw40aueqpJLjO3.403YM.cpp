
        
          EMatXf deltas(5, 5);
  // 0.174533 radians -> 10 degrees
  deltas << 0.47861834, 0.13992102, 0.14961673, 0.71495209, 0.0, 0.29915856,
      -0.35664671, 0.89018666, 0.70815367, 0.174533, -0.03852064, 0.44466892,
      0.49492538, 0.71409376, 0.174533, 0.28052918, 0.02184832, 0.65289006,
      1.05060139, 0.174533, -0.38172557, -0.08533806, -0.60335309, 0.79052375,
      0.174533;
    
    PyObject * THPWrapper_New(void *data, void (*destructor)(void*))
{
  PyObject *args = PyTuple_New(0);
  if (!args) {
    return NULL;
  }
  PyObject *result = PyObject_Call(THPWrapperClass, args, NULL);
  if (result) {
    THPWrapper* wrapper = (THPWrapper*) result;
    wrapper->data = data;
    wrapper->destructor = destructor;
  }
  Py_DECREF(args);
  return result;
}
    
    PyObject * THPStorage_(_setCdata)(THPStorage *self, PyObject *new_cdata)
{
  HANDLE_TH_ERRORS
  THPUtils_assert(THPUtils_checkLong(new_cdata), 'given an invalid argument to '
      '_set_cdata - expected an int or long, but got %s',
      THPUtils_typename(new_cdata));
  THWStorage *ptr = (THWStorage*)PyLong_AsVoidPtr(new_cdata);
  THWStorage_(retain)(LIBRARY_STATE ptr);
  THWStorage_(free)(LIBRARY_STATE self->cdata);
  self->cdata = ptr;
  Py_INCREF(self);
  return (PyObject*)self;
  END_HANDLE_TH_ERRORS
}
    
    void grpc_ares_ev_driver_shutdown_locked(grpc_ares_ev_driver* ev_driver) {
  ev_driver->shutting_down = true;
  fd_node* fn = ev_driver->fds;
  while (fn != nullptr) {
    fd_node_shutdown_locked(fn, 'grpc_ares_ev_driver_shutdown');
    fn = fn->next;
  }
}
    
      if (tcp->shutting_down) {
    GRPC_CLOSURE_SCHED(
        cb, GRPC_ERROR_CREATE_REFERENCING_FROM_STATIC_STRING(
                'TCP socket is shutting down', &tcp->shutdown_error, 1));
    return;
  }
    
    #include <errno.h>
#include <fcntl.h>
#include <gflags/gflags.h>
#include <gmock/gmock.h>
#include <thread>
#include <vector>
    
    
    {}  // namespace grpc_core
    
    static received_status unpack_received_status(gpr_atm atm) {
  if ((atm & 1) == 0) {
    return {false, GRPC_ERROR_NONE};
  } else {
    return {true, (grpc_error*)(atm & ~static_cast<gpr_atm>(1))};
  }
}
    
    // Creates a bundle slice containing the contents of all certificate files in
// a directory.
// Returns such slice.
// Exposed for testing purposes only.
grpc_slice CreateRootCertsBundle(const char* certs_directory);
    
    #ifndef GRPC_USE_SYSTEM_SSL_ROOTS_ENV_VAR
#define GRPC_USE_SYSTEM_SSL_ROOTS_ENV_VAR 'GRPC_USE_SYSTEM_SSL_ROOTS'
#endif
    
    #endif  // GRPCPP_RESOURCE_QUOTA_H

    
    void Executor::UpdateArray(const char* array_name,
                           const Rcpp::List& from,
                           Rcpp::List* to,
                           bool match_name,
                           bool skip_null) {
  if (!match_name) {
    RCHECK(from.size() == to->size())
        << 'Update array list must contain names';
    for (size_t i = 0; i < from.size(); ++i) {
      if (to->at(i) != R_NilValue) {
        if (from[i] != R_NilValue) {
          NDArray dst = NDArray::FromRObject(to->at(i));
          NDArray::CopyFromTo(NDArray::FromRObject(from[i]), &dst);
        } else {
          RCHECK(skip_null)
              << 'Position ' << i << ' expected to be not NULL';
        }
      } else {
        RCHECK(from[i] == R_NilValue)
            << 'Position ' << i << ' expected to be NULL';
      }
    }
  } else {
    if (from.size() == 0) return;
    RCHECK(HasName(from))
        << 'match.name is set to TRUE, the input list must have names in all elements';
    std::vector<std::string> names = from.names();
    for (size_t i = 0; i < names.size(); ++i) {
      RCHECK(names[i].length() != 0)
          << 'match.name is set to TRUE, the input list must have names in all elements';
      RCHECK(to->containsElementNamed(names[i].c_str()))
          << 'cannot find key ' << names[i] << ' in the array ' << array_name;
      int index = to->findName(names[i]);
      if (to->at(index) != R_NilValue) {
        if (from[i] != R_NilValue) {
          NDArray dst = NDArray::FromRObject(to->at(index));
          NDArray::CopyFromTo(NDArray::FromRObject(from[i]), &dst);
        } else {
          RCHECK(skip_null)
              << 'Element ' << names[i] << ' expected to be not NULL';
        }
      } else {
        RCHECK(from[i] == R_NilValue)
            << 'Element ' << names[i] << ' expected to be NULL';
      }
    }
  }
}
    
    
    {} // namespace mgpu

    
    /*! \brief Back-end chunk of NDArray */
struct NDBlob {
 public:
  /*!
   * \brief constructor
   * \param handle The handle
   */
  NDBlob(NDArrayHandle handle, bool writable)
      : handle(handle), writable(writable), moved(false) {
  }
  /*! \brief destructor */
  ~NDBlob() {
    if (!moved) {
      MX_CALL(MXNDArrayFree(handle));
    }
  }
  /*! \brief The internal handle of NDArray */
  NDArrayHandle handle;
  /*! \brief whether the Blob is writable */
  bool writable;
  /*! \brief whether if the */
  bool moved;
};
    
      #pragma omp parallel for num_threads(engine::OpenMP::Get()->GetRecommendedOMPThreadCount())
  for (int index = 0; index < anchors * heights * widths; ++index) {
    // index_t index = h * (widths * anchors) + w * (anchors) + a;
    int a = index % anchors;
    int w = (index / anchors) % widths;
    int h = index / (widths * anchors);
    }
    
    void MKLDNNConcatBackward(const nnvm::NodeAttrs& attrs, const OpContext &ctx,
                          const std::vector<NDArray>& inputs,
                          const std::vector<OpReqType>& req,
                          const std::vector<NDArray>& outputs) {
  TmpMemMgr::Get()->Init(ctx.requested[concat_enum::kTempSpace]);
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  int num_in_data = param.num_args;
  int axis_ = param.dim;
  auto engine = CpuEngine::Get()->get_engine();
  auto gz_mem = inputs[0].GetMKLDNNData();
  mkldnn::memory::primitive_desc gz_pd = gz_mem->get_primitive_desc();
  /* init the offset */
  mkldnn::memory::dims offsets = {0, 0, 0, 0};
  for (int i = 0; i < num_in_data; i++) {
    mkldnn::memory::dims diff_src_tz
        = {static_cast<int>(outputs[i].shape()[0]),
          static_cast<int>(outputs[i].shape()[1]),
          static_cast<int>(outputs[i].shape()[2]),
          static_cast<int>(outputs[i].shape()[3])};
    auto diff_src_mpd = outputs[i].GetMKLDNNData()->get_primitive_desc();
    auto gradi_mem_ = CreateMKLDNNMem(outputs[i], diff_src_mpd, req[i]);
    // create view from gy to gxs[i]
    std::shared_ptr<mkldnn::view::primitive_desc> view_pd;
    view_pd.reset(new mkldnn::view::primitive_desc(gz_pd, diff_src_tz, offsets));
    // create reorder primitive from gy to gxs[i]
    mkldnn::reorder::primitive_desc reorder_pd(
        view_pd.get()->dst_primitive_desc(), diff_src_mpd);
    offsets[axis_] += diff_src_tz[axis_];
    MKLDNNStream::Get()->RegisterPrim(mkldnn::reorder(
            reorder_pd, *gz_mem, *gradi_mem_.second));
    CommitOutput(outputs[i], gradi_mem_);
  }
  MKLDNNStream::Get()->Submit();
}
    
    // Transfer gradient and input and output to FGradient function
struct ElemwiseGradUseInOut {
  const char *op_name;
  std::vector<nnvm::NodeEntry> operator()(const nnvm::NodePtr& n,
                                          const std::vector<nnvm::NodeEntry>& ograds) const {
    std::vector<nnvm::NodeEntry> heads(ograds.begin(), ograds.end());
    for (auto& h : n->inputs) {
      heads.push_back(h);
    }
    index_t n_out = n->num_outputs();
    for (index_t i = 0; i < n_out; ++i) {
      heads.emplace_back(nnvm::NodeEntry{n, i, 0});
    }
    return MakeGradNode(op_name, n, heads, n->attrs.dict);
  }
};
    
            Tensor<cpu, 1, DType>   data_l = lhs.data().FlatTo1D<cpu, DType>(s);
        Tensor<cpu, 1, DType>   data_r = rhs.data().FlatTo1D<cpu, DType>(s);
        Tensor<cpu, 1, DType> data_out = output.data().FlatTo1D<cpu, DType>(s);
    
    #endif  // MXNET_OPERATOR_CONTRIB_ROI_ALIGN_INL_H_

    
    // Define image record parser parameters
struct ImageRecParserParam : public dmlc::Parameter<ImageRecParserParam> {
  /*! \brief path to image list */
  std::string path_imglist;
  /*! \brief path to image recordio */
  std::string path_imgrec;
  /*! \brief path to index file */
  std::string path_imgidx;
  /*! \brief a sequence of names of image augmenters, seperated by , */
  std::string aug_seq;
  /*! \brief label-width */
  int label_width;
  /*! \brief input shape */
  TShape data_shape;
  /*! \brief number of threads */
  int preprocess_threads;
  /*! \brief whether to remain silent */
  bool verbose;
  /*! \brief partition the data into multiple parts */
  int num_parts;
  /*! \brief the index of the part will read*/
  int part_index;
  /*! \brief the size of a shuffle chunk*/
  size_t shuffle_chunk_size;
  /*! \brief the seed for chunk shuffling*/
  int shuffle_chunk_seed;
    }
    
      // Creates a 'CSVIter' with `dtype`='int32'
  CSVIter = mx.io.CSVIter(data_csv = 'data/data.csv', data_shape = (3,),
  batch_size = 3, round_batch=False, dtype='int32')
    
    
    {  template <typename A, typename B>
  constexpr bool operator()(A&& a, B&& b) const {
    return ne ^ (C::operator()(static_cast<A&&>(a), static_cast<B&&>(b)) == o);
  }
};
    
      ~HazptrLockFreeLIFO() {
    Node* next;
    for (auto node = head(); node; node = next) {
      next = node->next();
      node->retire();
    }
    hazptr_cleanup<Atom>();
  }
    
    
    { private:
  /* Used by the single writer */
  void locate_lower_bound(const T& v, Atom<Node*>*& prev) const {
    auto curr = prev->load(std::memory_order_relaxed);
    while (curr) {
      if (curr->elem_ >= v) {
        break;
      }
      prev = &(curr->next_);
      curr = curr->next_.load(std::memory_order_relaxed);
    }
    return;
  }
};
    
    #include <string>
    
    /** hazptr_priv structures
 *  Thread private lists of retired objects that belong to the default domain.
 */
class hazptr_priv {
  std::atomic<hazptr_obj*> head_;
  std::atomic<hazptr_obj*> tail_;
  int rcount_;
  bool active_;
  hazptr_priv* prev_;
  hazptr_priv* next_;
    }
    
    
    { private:
  detail::BufferedSlidingWindow<TDigest, ClockT> bufferedSlidingWindow_;
};
    
      /**
   * Create a subprocess run as a shell command (as shell -c 'command')
   *
   * The shell to use is taken from the environment variable $SHELL,
   * or /bin/sh if $SHELL is unset.
   */
  [[deprecated('Prefer not running in a shell or use `shellify`.')]]
  explicit Subprocess(
      const std::string& cmd,
      const Options& options = Options(),
      const std::vector<std::string>* env = nullptr);
    
    /**
 * @return If the setting exists, returns the current settings metadata.
 *         Empty Optional otherwise.
 */
folly::Optional<SettingMetadata> getSettingsMeta(
    folly::StringPiece settingName);
    
    namespace detail {
    }