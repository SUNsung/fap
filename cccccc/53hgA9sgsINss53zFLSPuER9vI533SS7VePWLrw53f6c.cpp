
        
        // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    
    {  RenderView* render_view = RenderView::FromWebView(view);
  return render_view;
}
    
    namespace nwapi {
    }
    
     private:
  ObjectManager* object_manager_;
    
    
    {  gtk_widget_show(menu_);
  g_object_ref_sink(G_OBJECT(menu_));
}
    
    
    
    
    {
} // namespace extensions
#endif

    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    class NwObjCallObjectMethodFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        void DispatchEvent(
        events::HistogramValue histogram_value,
        const std::string& event_name,
        std::unique_ptr<base::ListValue> args) {
      DCHECK_CURRENTLY_ON(BrowserThread::UI);
      ExtensionsBrowserClient::Get()->BroadcastEventToRenderers(
                                                                histogram_value, event_name, std::move(args));
    }
    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
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
    
    /**!
 * \brief Workaround for missing functions in ::caffe::Layer
 * \warning Do not add or override any virtual functions in this class
 * @tparam Dtype
 */
template <typename Dtype>
class CaffeLayerFriend : public ::caffe::Layer<Dtype> {
  explicit CaffeLayerFriend(const ::caffe::LayerParameter& param) = delete;
 public:
  inline void SetPhase(::caffe::Phase p) {
    this->phase_ = p;
  }
};
    
    // specialize define for Layer Parameter
template<>
class FieldEntry<caffe::LayerParameter>
    : public FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> {
 public:
  // parent class
  typedef FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> Parent;
    }
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeLossProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    
    { private:
  CaffeOpParam param_;
  ::caffe::Layer<Dtype> *caffeOp_;
  std::vector< ::caffe::Blob<Dtype> *> bot_, top_, wei_;
  std::vector<bool> flags_;
  bool init_w_, init_wd_, setup_;
};  // class CaffeOp
    
    
    {  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(h, w, c == 3 ? CV_8UC3 : CV_8U, ndsrc.data().dptr_);
      cv::Mat dst(top+h+bot, left+w+right, c == 3 ? CV_8UC3 : CV_8U, ndout.data().dptr_);
      cv::copyMakeBorder(buf, dst, top, bot, left, right, type, cv::Scalar(value));
      CHECK(!dst.empty());
    }, ndout.ctx(), {ndsrc.var()}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}

    
    /*!
 * \brief a list of (label, example) pairs, examples can have various shape
 */
template<typename DType = real_t>
class InstVector {
 public:
  /*! \brief return the number of (label, example) pairs */
  inline size_t Size(void) const {
    return index_.size();
  }
  // get index
  inline unsigned Index(unsigned i) const {
    return index_[i];
  }
  // instance
  /* \brief get the i-th (label, example) pair */
  inline DataInst operator[](size_t i) const {
    DataInst inst;
    inst.index = index_[i];
    // ImageRecordIter depends on data vector
    // here having size 2. If you want to
    // change this assumption here, change it
    // in there as well (InitBatch section)!
    inst.data.push_back(TBlob(data_[i]));
    inst.data.push_back(TBlob(label_[i]));
    return inst;
  }
  /* \brief get the last (label, example) pair */
  inline DataInst Back() const {
    return (*this)[Size() - 1];
  }
  inline void Clear(void) {
    index_.clear();
    data_.Clear();
    label_.Clear();
  }
  /*
   * \brief push a (label, example) pair
   * only reserved the space, while the data is not copied
   */
  inline void Push(unsigned index,
                   mshadow::Shape<3> dshape,
                   mshadow::Shape<1> lshape) {
    index_.push_back(index);
    data_.Push(dshape);
    label_.Push(lshape);
  }
  /*! \return the data content */
  inline const TensorVector<3, DType>& data() const {
    return data_;
  }
  /*! \return the label content */
  inline const TensorVector<1, real_t>& label() const {
    return label_;
  }
    }
    
            void delWrite() {
            if (!m_write) return;
            delete m_write;
            m_write = 0;
        }
    
                    active_sock[i] = sock[i];
                auto sw_conn = swReactor_get(reactor, sock[i]);
                sw_conn->object = &task;
                sw_conn->removed = 0;
            }
            else if (ARES_GETSOCK_READABLE(bitmap, i))
            {
                // only readable
                if (unlikely(reactor->add(reactor, sock[i], SW_FD_ARES | SW_EVENT_READ) < 0))
                {
                    return '';
                }
    
    static inline void coro_test(coroutine_func_t fn, void *arg = nullptr)
{
    int complete_num = 0;
    coro_test_create(fn, arg, &complete_num);
    coro_test_wait(&complete_num, 1);
}
    
    
    {
    {        ret = chan.push(nullptr, 0.001);
        ASSERT_TRUE(ret);
        ret = chan.push(nullptr, 0.001);
        ASSERT_FALSE(ret);
    });
}