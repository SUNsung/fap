
        
        TF_LITE_MICRO_TESTS_BEGIN
    
    #include 'tensorflow/lite/context.h'
    
      void CheckArgsAndAllocateResult(OpKernelContext* c,
                                  OpInputList* indices_inputs,
                                  OpInputList* data_inputs, int* first_dim_size,
                                  int* data_elements_size,
                                  Tensor** result_ptr) {
    // Find maximum index in the indices vectors
    OP_REQUIRES_OK(c, c->input_list('indices', indices_inputs));
    }
    
      TfLiteModelInfo model_info_;
  const std::vector<void*>* inputs_ = nullptr;
  std::vector<void*> outputs_;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #define REGISTER_GATHER_ND_FULL(dev, type, index_type)                 \
  REGISTER_KERNEL_BUILDER(Name('GatherNd')                             \
                              .Device(DEVICE_##dev)                    \
                              .TypeConstraint<type>('Tparams')         \
                              .TypeConstraint<index_type>('Tindices'), \
                          GatherNdOp<dev##Device, type, index_type>)
    
    void ConvertTileOperator(const Model& model,
                         const TensorFlowTileOperator& src_op,
                         GraphDef* tensorflow_graph) {
  tensorflow::NodeDef* tile_op = tensorflow_graph->add_node();
  tile_op->set_op('Tile');
  tile_op->set_name(src_op.outputs[0]);
  CHECK_EQ(src_op.inputs.size(), 2);
  *tile_op->add_input() = src_op.inputs[0];
  *tile_op->add_input() = src_op.inputs[1];
  const tensorflow::DataType data_type =
      GetTensorFlowDataType(model, src_op.inputs[0]);
  (*tile_op->mutable_attr())['T'].set_type(data_type);
  const tensorflow::DataType multiples_data_type =
      GetTensorFlowDataType(model, src_op.inputs[1]);
  (*tile_op->mutable_attr())['Tmultiples'].set_type(multiples_data_type);
}
    
    namespace tensorflow {
namespace functor {
    }
    }
    
    // Collects one sample of monitoring profile and shows user-friendly metrics.
// If timestamp flag is true, timestamp will be displayed in '%H:%M:%S' format.
Status Monitor(const tensorflow::string& service_addr, int duration_ms,
               int monitoring_level, bool display_timestamp, string* result);
    
      // Checks if two graphs are equal. Both graphs must have the same set of nodes
  // with the same inputs and attributes. Nodes can be in different order.
  //
  // NOTE: This function uses EXPECT/ASSERT macros to check node properties
  // equality, and adds all failuires to the current test.
  void CompareGraphs(GraphDef want, GraphDef got) const;
    
    
    {  absl::flat_hash_map<string, std::shared_ptr<Transposer>> transposer_map_;
};
    
    
    {  ANNOTATE_SCOPED_MEMORY_LEAK;  // http://crbug.com/314087
  // TODO(erg): The mozilla implementation goes to a lot of callback trouble
  // just to make sure that they react to make sure there's some sort of
  // cancelable object; including making a whole callback just to handle the
  // cancelable.
  //
  // I don't see any reason why we should care if 'RegisterWindow' completes or
  // not.
  g_dbus_proxy_call(registrar_proxy_, 'RegisterWindow',
                    g_variant_new('(uo)', xid, path.c_str()),
                    G_DBUS_CALL_FLAGS_NONE, -1, nullptr, nullptr, nullptr);
}
    
      // mate::TrackableObject:
  static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #ifndef INCLUDED_IMF_FLOAT_ATTRIBUTE_H
#define INCLUDED_IMF_FLOAT_ATTRIBUTE_H
    
    
FrameBuffer::ConstIterator
FrameBuffer::find (const char name[]) const
{
    return _map.find (name);
}
    
        if (abs (double (fps) - double (fps_23_976())) < e)
	return fps_23_976();
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    #ifndef IMFINPUTSTREAMMUTEX_H_
#define IMFINPUTSTREAMMUTEX_H_
    
      static Mutex s_mutex;
  static StatsMap s_stats;
    
      static constexpr ptrdiff_t tableOff() {
    return offsetof(FixedStringMap, m_table);
  }
  static constexpr ptrdiff_t sizeOff() {
    return offsetof(FixedStringMap, m_extra);
  }
  static constexpr size_t sizeSize() {
    return sizeof(m_extra);
  }
private:
  struct Elm {
    LowStringPtr sd;
    V data;
  };
    
    extern 'C' int get_watchdog_count_() noexcept {
  std::lock_guard<std::mutex> guard(watchdog_mut);
  return watchdog_count;
}

    
    namespace {
    }
    
    #endif

    
    bool HHVM_FUNCTION(is_bool, const Variant& v);
bool HHVM_FUNCTION(is_int, const Variant& v);
bool HHVM_FUNCTION(is_float, const Variant& v);
bool HHVM_FUNCTION(is_numeric, const Variant& v);
bool HHVM_FUNCTION(is_string, const Variant& v);
bool HHVM_FUNCTION(is_scalar, const Variant& v);
bool HHVM_FUNCTION(is_array, const Variant& v);
// HH\\is_vec
bool HHVM_FUNCTION(HH_is_vec, const Variant& v);
bool HHVM_FUNCTION(is_object, const Variant& v);
bool HHVM_FUNCTION(is_resource, const Variant& v);
bool HHVM_FUNCTION(HH_is_meth_caller, TypedValue v);
    
      // No instructions in the middle of a block should have taken edges,
  // or be an unconditional Jmp.
  for (auto it = begin(b.hhbcs); it != end(b.hhbcs); ++it) {
    assert(it->op != Op::Jmp && 'unconditional Jmp mid-block');
    if (std::next(it) == end(b.hhbcs)) break;
    forEachTakenEdge(*it, [&](BlockId /*blk*/) {
      assert(!'Instruction in middle of block had a jump target');
    });
  }