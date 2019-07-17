
        
                //  Create the Pseudo Console and pipes to it
        HANDLE hPipeIn{ INVALID_HANDLE_VALUE };
        HANDLE hPipeOut{ INVALID_HANDLE_VALUE };
        hr = CreatePseudoConsoleAndPipes(&hPC, &hPipeIn, &hPipeOut);
        if (S_OK == hr)
        {
            // Create & start thread to listen to the incoming pipe
            // Note: Using CRT-safe _beginthread() rather than CreateThread()
            HANDLE hPipeListenerThread{ reinterpret_cast<HANDLE>(_beginthread(PipeListener, 0, hPipeIn)) };
    }
    
    
    {      'message_type {'
      '  name: \'TestMessage\''
      '  field { name:\'foo\' label:LABEL_REQUIRED type:TYPE_INT32 number:1 }'
      '  reserved_range { start:2   end:3         }'
      '  reserved_range { start:15  end:16        }'
      '  reserved_range { start:9   end:12        }'
      '  reserved_range { start:3   end:4         }'
      '  reserved_range { start:20  end:536870912 }'
      '}');
}
    
    TEST_F(JsonObjectWriterTest, RenderPrimitives) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->StartObject('')
      ->RenderBool('bool', true)
      ->RenderDouble('double', std::numeric_limits<double>::max())
      ->RenderFloat('float', std::numeric_limits<float>::max())
      ->RenderInt32('int', std::numeric_limits<int32>::min())
      ->RenderInt64('long', std::numeric_limits<int64>::min())
      ->RenderBytes('bytes', 'abracadabra')
      ->RenderString('string', 'string')
      ->RenderBytes('emptybytes', '')
      ->RenderString('emptystring', string())
      ->EndObject();
  EXPECT_EQ(
      '{\'bool\':true,'
      '\'double\':' +
          ValueAsString<double>(std::numeric_limits<double>::max()) +
          ','
          '\'float\':' +
          ValueAsString<float>(std::numeric_limits<float>::max()) +
          ','
          '\'int\':-2147483648,'
          '\'long\':\'-9223372036854775808\','
          '\'bytes\':\'YWJyYWNhZGFicmE=\','
          '\'string\':\'string\','
          '\'emptybytes\':\'\','
          '\'emptystring\':\'\'}',
      CloseStreamAndGetString());
}
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    namespace google {
namespace protobuf {
namespace io {
    }
    }
    }
    
    // Verify that ByteSink is subclassable and Flush() overridable.
class FlushingByteSink : public StringByteSink {
 public:
  explicit FlushingByteSink(string* dest) : StringByteSink(dest) {}
  virtual void Flush() { Append('z', 1); }
 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FlushingByteSink);
};
    
    TEST(StatusOr, TestPointerValue) {
  const int kI = 0;
  StatusOr<const int*> thing(&kI);
  EXPECT_EQ(&kI, thing.ValueOrDie());
}
    
    #endif  // GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_

    
    #include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
    
    class DataStripper {
 public:
  void StripMessage(Message *message) {
    std::vector<const FieldDescriptor*> set_fields;
    const Reflection* reflection = message->GetReflection();
    reflection->ListFields(*message, &set_fields);
    }
    }
    
    int main(int argc, char *argv[]) {
  if (argc % 2 == 0 || argc == 1) {
    std::cerr << 'Usage: [input_files] [output_file_names] where ' <<
        'input_files are one to one mapping to output_file_names.' <<
        std::endl;
    return 1;
  }
    }
    
    ``max_time`` is the length of the observation period of the point process. That is, specifying ``max_time[i] = 5`` computes the likelihood of the i-th sample as observed on the time interval :math:`(0, 5]`. Naturally, the sum of all valid ``lags[i, :valid_length[i]]`` must be less than or equal to 5.
    
         x = [[1, 2, 3], [4, 5, 6]]
     mean, var = moments(data=x, axes=[0])
     mean = [2.5, 3.5, 4.5]
     var = [2.25, 2.25, 2.25]
     mean, var = moments(data=x, axes=[1])
     mean = [2.0, 5.0]
     var = [0.66666667, 0.66666667]
     mean, var = moments(data=x, axis=[0, 1])
     mean = [3.5]
     var = [2.9166667]
    
      // inference step function for nid
  auto infer_step = [&](uint32_t nid, bool last_iter) {
    const auto& inode = idx[nid];
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
      for (uint32_t i = 0; i < ishape.size(); ++i) {
        ishape[i] = rshape[idx.entry_id(inode.inputs[i])];
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
      if (!forward_known) {
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
    
    #include <mxnet/operator_util.h>
#include <vector>
#include <limits>
#include '../elemwise_op_common.h'
#include '../mshadow_op.h'
#include '../mxnet_op.h'
#include './quantization_utils.h'
#include '../tensor/broadcast_reduce_op.h'
    
    NNVM_REGISTER_OP(_contrib_quantized_elemwise_add)
.describe(R'code(elemwise_add operator for input dataA and input dataB data type of int8,
and accumulates in type int32 for the output. For each argument, two more arguments of type
float32 must be provided representing the thresholds of quantizing argument from data
type float32 to int8. The final outputs contain result in int32, and min
and max thresholds representing the threholds for quantizing the float32 output into int32.
    
    
    {  std::lock_guard<std::mutex> lock(Storage::Get()->GetMutex(Context::kGPU));
  size_t size = RoundAllocSize(handle.size);
  auto&& reuse_pool = memory_pool_[size];
  reuse_pool.push_back(handle.dptr);
}
    
    #ifndef MXNET_OPERATOR_CONTRIB_INDEX_ARRAY_INL_H_
#define MXNET_OPERATOR_CONTRIB_INDEX_ARRAY_INL_H_
    
                DType* src_iter_undi2 = src_iter_undi + nstates * N * H;  //  nstates * N * H
            auto src_iter_undi2_memory =
                mkldnn::memory({ src_iter_undi_md, cpu_engine }, src_iter_undi2);
            op.concat_iter_memory.push_back(src_iter_undi2_memory);
    
    
    {  if (state_outputs) {
    DType* dst_hcy = reinterpret_cast<DType *> ((*hcy_memory)[layer_index].get_data_handle());
    if (mode == rnn_enum::kLstm) {
      for (int l = 0; l < L; l++) {
        offset1 = l * single_cell_size;
        offset2 = l * nstates * single_cell_size;
        #pragma omp parallel for num_threads(omp_threads)
        for (int n = 0; n < single_cell_size; n++) {
          hy_ptr[offset1 + n] = dst_hcy[offset2 + n];
          cy_ptr[offset1 + n] = dst_hcy[offset2 + n + single_cell_size];
        }
      }
    } else {
      #pragma omp parallel for num_threads(omp_threads)
      for (int n = 0; n < L * single_cell_size; n++) {
        hy_ptr[n] = dst_hcy[n];
      }
    }
  }
}
    
    shared_ptr<ComputationNodeBase> NewComputationNodeFromConfig(const Microsoft::MSR::ScriptableObjects::IConfigRecordPtr configp)
{
    wstring precision = configp->Get(L'precision'); // dispatch on ElemType
    wstring operationName = configp->Get(L'operation');
    ComputationNodeBasePtr node;
    if (operationName == OperationName2Of(CastNode))
    {
        auto inputs = ComputationNodeBase::GetInputsFromConfig(configp);
        if (inputs.empty())
            RuntimeError('NewComputationNodeFromConfig: No inputs found for Cast node.');
    }
    }
    
        // get the matrix-column indices for a given sequence
    // sequence is expected to belong to this MB
    vector<size_t> GetColumnIndices(const SequenceInfo& seq) const
    {
        size_t numFrames = GetNumSequenceFramesInCurrentMB(seq);
        vector<size_t> res;
        res.reserve(numFrames);
        for (size_t i = 0; i < numFrames;++i)
            res.push_back(GetColumnIndex(seq,i));
        return res;
    }
    
                    fstream.PutMarker(FileMarker::fileMarkerBeginSection, L'BMomentumAsTimeConstant');
                fstream << m_blockMomentumAsTimeConstantPerWorker; 
                fstream.PutMarker(FileMarker::fileMarkerEndSection, L'EMomentumAsTimeConstant');
    
    
    {    m_eval = nullptr; // pointer to an arbitrary eval structure
    // script for macro calls, need to expand the macro for each call
    // if it's not expanded the evalValue will be overwitten on multiple calls to a macro
    m_script = (copyMe.m_script) ? new NDLScript<ElemType>(*copyMe.m_script) : nullptr;
}
template <typename ElemType>
NDLScript<ElemType>::NDLScript(const NDLScript&& moveMe)
    : ConfigParser(move(moveMe))
{
    m_baseName      = move(moveMe.m_baseName);
    m_scriptString  = move(moveMe.m_scriptString);
    m_script        = move(moveMe.m_script);        // script lines in parsed node order, macros will have definition followed by body
    m_symbols       = move(moveMe.m_symbols);       // symbol table
    m_macroNode     = move(moveMe.m_macroNode);     // set when interpretting a macro definition
    m_noDefinitions = move(moveMe.m_noDefinitions); // no definitions can be made in this script, interpret all macro/function names as calls
    m_definingMacro = move(moveMe.m_definingMacro);
    m_children      = move(moveMe.m_children);      // child nodes. Note that m_script nodes may not be children of this object, they include macro nodes
    m_cn            = move(moveMe.m_cn);            // computation network to use for backup symbol lookup. Used for MEL where NDL and network nodes are mixed
}
    
    // -----------------------------------------------------------------------
// register ComputationNode with the ScriptableObject system
// -----------------------------------------------------------------------
    
        operator int() const
    {
        long val = tolong();
        int ival = (int) val;
        if (val != ival)
        {
            RuntimeError('ConfigValue (int): integer argument expected');
        }
        return ival;
    }
    operator unsigned int() const
    {
        unsigned long val = toulong();
        unsigned int ival = (unsigned int) val;
        if (val != ival)
        {
            RuntimeError('ConfigValue (unsigned int): integer argument expected');
        }
    }
    
    BOOST_AUTO_TEST_CASE(EvalScalarTimesTest)
{
    std::string modelDefinition =
        'deviceId = -1 \n'
        'precision = \'float\' \n'
        'traceLevel = 1 \n'
        'run=NDLNetworkBuilder \n'
        'NDLNetworkBuilder=[ \n'
        'i1 = Input(1) \n'
        'o1 = Times(Constant(3), i1, tag=\'output\') \n'
        'FeatureNodes = (i1) \n'
        '] \n';
    }
    
    namespace aria2 {
    }
    
    #include 'common.h'
    
    void DHTTaskFactoryImpl::setCommonProperty(
    const std::shared_ptr<DHTAbstractTask>& task)
{
  task->setRoutingTable(routingTable_);
  task->setMessageDispatcher(dispatcher_);
  task->setMessageFactory(factory_);
  task->setTaskQueue(taskQueue_);
  task->setLocalNode(localNode_);
}
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    const std::string& DNSCache::find(const std::string& hostname,
                                  uint16_t port) const
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.find(target);
  if (i == entries_.end()) {
    return A2STR::NIL;
  }
  else {
    return (*i)->getGoodAddr();
  }
}