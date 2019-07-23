
        
          net::NSSCertDatabase* cert_db_;
  // Whether the certificate database has a public slot associated with the
  // profile. If not set, importing certificates is not allowed with this model.
  bool is_user_db_available_;
    
      CHROMEG_CALLBACK_1(GlobalMenuBarRegistrarX11,
                     void,
                     OnProxyCreated,
                     GObject*,
                     GAsyncResult*);
  CHROMEG_CALLBACK_1(GlobalMenuBarRegistrarX11,
                     void,
                     OnNameOwnerChanged,
                     GObject*,
                     GParamSpec*);
    
    Dictionary Dictionary::CreateEmpty(v8::Isolate* isolate) {
  return Dictionary(isolate, v8::Object::New(isolate));
}
    
    void* FromV8Impl(v8::Isolate* isolate, v8::Local<v8::Value> val) {
  if (!val->IsObject())
    return nullptr;
  v8::Local<v8::Object> obj = v8::Local<v8::Object>::Cast(val);
  if (obj->InternalFieldCount() != 1)
    return nullptr;
  return obj->GetAlignedPointerFromInternalField(0);
}
    
    ObjectTemplateBuilder& ObjectTemplateBuilder::SetImpl(
    const base::StringPiece& name,
    v8::Local<v8::Data> val) {
  template_->Set(StringToSymbol(isolate_, name), val);
  return *this;
}
    
    v8::Local<v8::Value> Converter<float>::ToV8(v8::Isolate* isolate, float val) {
  return v8::Number::New(isolate, val);
}
    
    #if !defined(OS_LINUX) && !defined(OS_FREEBSD)
template <>
struct Converter<unsigned long> {  // NOLINT(runtime/int)
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   unsigned long val);  // NOLINT(runtime/int)
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     unsigned long* out);  // NOLINT(runtime/int)
};
#endif
    
    // DispatchToCallback converts all the JavaScript arguments to C++ types and
// invokes the base::Callback.
template <typename Sig>
struct Dispatcher {};
    
    #include 'native_mate/dictionary.h'
#include 'native_mate/scoped_persistent.h'
    
     protected:
  // Init the class with T::BuildPrototype.
  void Init(v8::Isolate* isolate) {
    v8::Local<v8::FunctionTemplate> templ = GetConstructor(isolate);
    }
    
    void AtomURLRequest::Terminate() {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
  delegate_ = nullptr;
  base::PostTaskWithTraits(FROM_HERE, {content::BrowserThread::IO},
                           base::BindOnce(&AtomURLRequest::DoTerminate, this));
}
    
    PdfViewerUI::PdfViewerUI(content::BrowserContext* browser_context,
                         content::WebUI* web_ui,
                         const std::string& src)
    : content::WebUIController(web_ui),
      content::WebContentsObserver(web_ui->GetWebContents()),
      src_(src) {
  pdf_handler_ = new PdfViewerHandler(src);
  web_ui->AddMessageHandler(
      std::unique_ptr<content::WebUIMessageHandler>(pdf_handler_));
  content::URLDataSource::Add(browser_context, new BundledDataSource);
}
    
    namespace winrt::Microsoft::Terminal::Settings::implementation
{
    KeyChord::KeyChord(bool ctrl, bool alt, bool shift, int32_t vkey) :
        _modifiers{ (ctrl ? Settings::KeyModifiers::Ctrl : Settings::KeyModifiers::None) |
                    (alt ? Settings::KeyModifiers::Alt : Settings::KeyModifiers::None) |
                    (shift ? Settings::KeyModifiers::Shift : Settings::KeyModifiers::None) },
        _vkey{ vkey }
    {
    }
    }
    
        // Create the pipes to which the ConPTY will connect
    if (CreatePipe(&hPipePTYIn, phPipeOut, NULL, 0) &&
        CreatePipe(phPipeIn, &hPipePTYOut, NULL, 0))
    {
        // Determine required size of Pseudo Console
        COORD consoleSize{};
        CONSOLE_SCREEN_BUFFER_INFO csbi{};
        HANDLE hConsole{ GetStdHandle(STD_OUTPUT_HANDLE) };
        if (GetConsoleScreenBufferInfo(hConsole, &csbi))
        {
            consoleSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
            consoleSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
        }
    }
    
    #ifndef TESSERACT_CCUTIL_BOXREAD_H_
#define TESSERACT_CCUTIL_BOXREAD_H_
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
      // Returns the direction of the fitted line as a unit vector, using the
  // least mean squared perpendicular distance. The line runs through the
  // mean_point, i.e. a point p on the line is given by:
  // p = mean_point() + lambda * vector_fit() for some real number lambda.
  // Note that the result (0<=x<=1, -1<=y<=-1) is directionally ambiguous
  // and may be negated without changing its meaning, since a line is only
  // unique to a range of pi radians.
  // Modernists prefer to think of this as an Eigenvalue problem, but
  // Pearson had the simple solution in 1901.
  //
  // Note that this is equivalent to returning the Principal Component in PCA,
  // or the eigenvector corresponding to the largest eigenvalue in the
  // covariance matrix.
  FCOORD vector_fit() const;
    
    template<typename xpu>
inline void MomentsBackwardImpl(const nnvm::NodeAttrs& attrs,
                                const OpContext& ctx,
                                const std::vector<TBlob>& inputs,
                                const std::vector<OpReqType>& req,
                                const std::vector<TBlob>& outputs,
                                const dmlc::optional<mxnet::TShape>& axes) {
  using namespace mshadow;
  using namespace mshadow::expr;
  using namespace mshadow_op;
  using namespace mxnet_op;
    }
    
    The mean and variance are calculated by aggregating the contents of data across axes.
If x is 1-D and axes = [0] this is just the mean and variance of a vector.
    
    struct AllFiniteParam: public dmlc::Parameter<AllFiniteParam> {
  bool init_output;
  DMLC_DECLARE_PARAMETER(AllFiniteParam) {
    DMLC_DECLARE_FIELD(init_output)
    .set_default(true)
    .describe('Initialize output to 1.');
  }
};
    
        // bbox: [num_rois, 5]
    mxnet::TShape bshape = in_shape->at(deformablepsroipool::kBox);
    CHECK_EQ(bshape.ndim(), 2) << 'bbox should be a 2D tensor of shape [batch, 5]';
    CHECK_EQ(bshape[1], 5) << 'bbox should be a 2D tensor of shape [batch, 5]';
    
      std::vector<NDArray*> ndoutputs;
  ndoutputs.reserve(op->num_outputs());
  if (*outputs == nullptr) {
    *num_outputs = op->num_outputs();
    for (int i = 0; i < *num_outputs; ++i) ndoutputs.push_back(new NDArray());
  } else {
    CHECK_EQ(*num_outputs, op->num_outputs())
        << 'CachedOp expects ' << op->num_outputs() << ' outputs, but '
        << *num_outputs << ' was given.';
    for (int i = 0; i < *num_outputs; ++i) {
      ndoutputs.push_back(reinterpret_cast<NDArray*>((*outputs)[i]));
    }
  }
    
      // inference step function for nid
  auto infer_step = [&](uint32_t nid, bool last_iter) {
    const auto& inode = idx[nid];
    const std::string name = inode.source->attrs.name;
    const uint32_t num_inputs = inode.inputs.size();
    const uint32_t num_outputs = inode.source->num_outputs();
    if (inode.source->is_variable()) {
      // Variable node. No operator. Only one output entry.
      CHECK(inode.source->op() == nullptr);
      CHECK_EQ(num_outputs, 1U);
      const uint32_t out_ent_id = idx.entry_id(nid, 0);
      if (shape_attr_key.length() != 0 && fis_none(rshape[out_ent_id])) {
        auto it = inode.source->attrs.dict.find(shape_attr_key);
        if (it != inode.source->attrs.dict.end()) {
          std::istringstream is(it->second);
          CHECK(is >> rshape[out_ent_id]) << 'Invalid attribute';
          if (!Imperative::Get()->is_np_shape()) {
            common::ConvertToNumpyShape(&rshape[out_ent_id]);
          }
        }
      }
      // assign a default value to node attribute
      if (dispatch_mode_name != nullptr) {
        op::dispatch_mode_assign(&dispatch_modes[nid], default_mode_val);
      }
    } else if (is_backward.get(inode.source->op(), false) &&
               inode.control_deps.size() && bwd_identity_assign) {
      CHECK(dispatch_mode_name == nullptr)
        << 'Backward inference for node attributes is not available';
      CHECK_GE(inode.control_deps.size(), 1U)
        << 'BackwardOp need to have control_deps to its forward op';
      const IndexedGraph::Node& fnode = idx[inode.control_deps[0]];
      nnvm::NodePtr fwd_ptr = inode.source->control_deps[0];
      CHECK(fwd_ptr->op() != nullptr) << 'Forward op cannot be a variable';
      // use gradient function to find out the correspondence.
      std::vector<nnvm::NodeEntry> ograd(fwd_ptr->num_outputs());
      for (size_t i = 0; i < ograd.size(); ++i) {
        ograd[i].index = static_cast<uint32_t>(i);
      }
      // input gradient list
      auto igrad = fgrad[fwd_ptr->op()](fwd_ptr, ograd);
      const nnvm::Node* igrad_node = nullptr;
      // Input gradient assignement
      for (size_t i = 0; i < igrad.size(); ++i) {
        if (igrad[i].node->op() == inode.source->op()) {
          uint32_t eid = idx.entry_id(nid, igrad[i].index);
          if (fis_none(rshape[eid])) {
            rshape[eid] = rshape[idx.entry_id(fnode.inputs[i])];
          } else if (!fis_none(rshape[idx.entry_id(fnode.inputs[i])])) {
            // Need to skip empty forward shape, because it may not be
            // available now and it is possible to infer the forward
            // shape in one of the next a few passes
            CHECK_EQ(rshape[eid], rshape[idx.entry_id(fnode.inputs[i])])
                << 'Backward shape inconsistent with the forward shape';
          }
          if (igrad_node == nullptr) {
            igrad_node = igrad[i].node.get();
          } else {
            CHECK(igrad_node == igrad[i].node.get());
          }
        }
      }
      // out grad entries
      CHECK(igrad_node != nullptr)
        << 'Cannot find matching backward op for ' << inode.source->attrs.name;
      for (size_t i = 0; i < igrad_node->inputs.size(); ++i) {
        const nnvm::NodeEntry& e = igrad_node->inputs[i];
        if (e.node == nullptr) {
          uint32_t eid = idx.entry_id(inode.inputs[i]);
          if (fis_none(rshape[eid])) {
            rshape[eid] = rshape[idx.entry_id(inode.control_deps[0], e.index)];
          }
        }
      }
    } else {
      DispatchMode* dispatch_mode = nullptr;
      bool forward_known = true;
      // Forward operator inference.
      ishape.resize(num_inputs, empty_val);
      bool is_input_dynamic_shape = false;
      for (uint32_t i = 0; i < ishape.size(); ++i) {
        ishape[i] = rshape[idx.entry_id(inode.inputs[i])];
        if (!mxnet::ndim_is_known(ishape[i]) && is_dynamic[idx.entry_id(inode.inputs[i])]) {
          is_input_dynamic_shape = true;
        }
        if (fis_none(ishape[i])) forward_known = false;
      }
      oshape.resize(num_outputs, empty_val);
      for (uint32_t i = 0; i < oshape.size(); ++i) {
        oshape[i] = rshape[idx.entry_id(nid, i)];
        if (fis_none(oshape[i])) forward_known = false;
      }
      if (dispatch_mode_name != nullptr) {
        dispatch_mode = &dispatch_modes[nid];
        if (dispatch_modes[nid] == DispatchMode::kUndefined) forward_known = false;
      }
      auto finfer = finfer_shape.get(inode.source->op(), fdefault);
      if (finfer == nullptr || is_input_dynamic_shape) {
        for (uint32_t i = 0; i < oshape.size(); ++i) {
          if (!mxnet::ndim_is_known(oshape[i].ndim())) {
            is_dynamic[idx.entry_id(nid, i)] = 1;
          }
        }
      } else if (!forward_known) {
        if (finfer != nullptr) {
          // Call inference function of the operator.
          try {
            forward_known = ApplyOpInferAttr(ret, finfer, inode.source->attrs,
                                             nid, &ishape, &oshape, dispatch_mode);
          } catch (const std::exception& e) {
            throw dmlc::Error('Error in operator ' + inode.source->attrs.name + ': ' + e.what());
          }
        } else {
          CHECK(!last_iter)
              << 'Attribute ' << infer_name
              << ' is not registed by op ' << inode.source->op()->name
              << ' we are not able to complete the inference because of this';
        }
      }
      // Save to the result map.
      for (uint32_t i = 0; i < num_inputs; ++i) {
        rshape[idx.entry_id(inode.inputs[i])] = ishape[i];
      }
      for (uint32_t i = 0; i < num_outputs; ++i) {
        rshape[idx.entry_id(nid, i)] = oshape[i];
      }
    }
  };
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2

    
    const std::string& DHTResponseMessage::getType() const { return R; }
    
    class DHTRoutingTable {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
    namespace aria2 {
    }
    
    #endif // D_DHT_TASK_H

    
    using json = nlohmann::json;
    
    
    {  return std::unique_ptr<CompactionFilter>(new BlobIndexCompactionFilter(
      context, static_cast<uint64_t>(current_time), statistics_));
}
    
    class PutOperatorV2 : public PutOperator {
  bool FullMerge(const Slice& /*key*/, const Slice* /*existing_value*/,
                 const std::deque<std::string>& /*operand_sequence*/,
                 std::string* /*new_value*/,
                 Logger* /*logger*/) const override {
    assert(false);
    return false;
  }
    }
    
    class DB;
    
      std::atomic<int> total_stopped_;
  std::atomic<int> total_delayed_;
  std::atomic<int> total_compaction_pressure_;
  uint64_t bytes_left_;
  uint64_t last_refill_time_;
  // write rate set when initialization or by `DBImpl::SetDBOptions`
  uint64_t max_delayed_write_rate_;
  // current write rate
  uint64_t delayed_write_rate_;
    
      // put and get from non-default column family
  s = db->Put(WriteOptions(), handles[1], Slice('key'), Slice('value'));
  assert(s.ok());
  std::string value;
  s = db->Get(ReadOptions(), handles[1], Slice('key'), &value);
  assert(s.ok());
    
    // Example structure that describes a compaction task.
struct CompactionTask {
  CompactionTask(
      DB* _db, Compactor* _compactor,
      const std::string& _column_family_name,
      const std::vector<std::string>& _input_file_names,
      const int _output_level,
      const CompactionOptions& _compact_options,
      bool _retry_on_fail)
          : db(_db),
            compactor(_compactor),
            column_family_name(_column_family_name),
            input_file_names(_input_file_names),
            output_level(_output_level),
            compact_options(_compact_options),
            retry_on_fail(_retry_on_fail) {}
  DB* db;
  Compactor* compactor;
  const std::string& column_family_name;
  std::vector<std::string> input_file_names;
  int output_level;
  CompactionOptions compact_options;
  bool retry_on_fail;
};
    
      const char* Name() const override { return 'MyFilter'; }
    
    std::string kDBPath = '/tmp/rocksdb_transaction_example';
    
    namespace rocksdb {
namespace experimental {
    }
    }
    
      // If true, the database will be created if it is missing.
  // Default: false
  bool create_if_missing;
    
    #include 'rocksdb/utilities/lua/rocks_lua_custom_library.h'