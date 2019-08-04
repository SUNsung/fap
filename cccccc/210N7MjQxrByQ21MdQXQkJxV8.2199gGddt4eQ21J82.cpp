
        
        inline bool MomentsType(const nnvm::NodeAttrs& attrs,
                        std::vector<int>* in_attrs,
                        std::vector<int>* out_attrs) {
  CHECK_EQ(in_attrs->size(), 1U);
  CHECK_EQ(out_attrs->size(), 2U);
    }
    
    It casts only between low precision float/FP32 and does not do anything for other types.
)code' ADD_FILELINE)
.set_attr_parser(ParamParser<AMPCastParam>)
.set_attr<mxnet::FInferShape>('FInferShape', ElemwiseShape<1, 1>)
.set_attr<nnvm::FInferType>('FInferType', AMPCastType)
.set_attr<nnvm::FInplaceOption>('FInplaceOption',
  [](const NodeAttrs& attrs){
    return std::vector<std::pair<int, int> >{{0, 0}};
  })
.set_attr<nnvm::FInplaceIdentity>('FInplaceIdentity',
  [](const NodeAttrs& attrs){
    return std::vector<bool>{true};
  })
.set_attr<FCompute>('FCompute<cpu>', AMPCastCompute<cpu>)
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseNone{'_backward_amp_cast'})
.add_argument('data', 'NDArray-or-Symbol', 'The input.')
.add_arguments(AMPCastParam::__FIELDS__());
    
    
    {    // out: [num_rois, c, pooled_h, pooled_w]
    // top_count: [num_rois, c, pooled_h, pooled_w]
    out_shape->clear();
    out_shape->push_back(
      Shape4(bshape[0], param_.output_dim, param_.pooled_size, param_.pooled_size));
    out_shape->push_back(
      Shape4(bshape[0], param_.output_dim, param_.pooled_size, param_.pooled_size));
    return true;
  }
    
    /*!
 *  Copyright (c) 2017 by Contributors
 * \file quantize-inl.h
 * \brief implementation of quantize operation
 */
#ifndef MXNET_OPERATOR_QUANTIZATION_QUANTIZE_INL_H_
#define MXNET_OPERATOR_QUANTIZATION_QUANTIZE_INL_H_
    
    
    {  SHAPE_ASSIGN_CHECK(*out_shape, 0, (*in_shape)[0]);
  SHAPE_ASSIGN_CHECK(*out_shape, 1, TShape{1});
  SHAPE_ASSIGN_CHECK(*out_shape, 2, TShape{1});
  return true;
}
    
    template <typename DType>
void GruForwardInference(DType* ws,
                         bool state_outputs,
                         const int L,
                         const int D,
                         const int T,
                         const int N,
                         int I,
                         const int H,
                         DType* x_ptr,
                         DType* hx_ptr,
                         DType* w_ptr,
                         DType* y_ptr,
                         DType* hy_ptr) {
  DType* wx = w_ptr;
  DType* wh = wx + I * H * 3;
  DType* bx = wh + H * H * 3 + (D - 1) * (H * H * 3 + I * H * 3)
      + (L - 1) * ((D + 1) * H) * H * 3 * D;
  DType* bh = bx + H * 3;
    }
    
    namespace mongo {
    }
    
        // Complete the command by appending the other options to the aggregate command.
    if (auto collation = cmd.getCollation()) {
        aggregationBuilder.append(kCollationField, collation.get());
    }
    
    #define MONGO_LOG_DEFAULT_COMPONENT ::mongo::logger::LogComponent::kStorage
    
    private:
    void _appendToUsageMap(BSONObjBuilder& b, const UsageMap& map) const;
    
            BSONObj fixed = fixDocumentForInsert(_opCtx.getServiceContext(), o).getValue();
        ASSERT_EQUALS(3, fixed.nFields());
        ASSERT(fixed.firstElement().fieldNameStringData() == '_id');
        ASSERT(fixed.firstElement().number() == 1);
    
        case URX_STRING:
    case URX_STRING_I:
        {
            int32_t lengthOp       = fCompiledPat->elementAti(index+1);
            U_ASSERT(URX_TYPE(lengthOp) == URX_STRING_LEN);
            int32_t length = URX_VAL(lengthOp);
            UnicodeString str(fLiteralText, val, length);
            printf('%s', CStr(str)());
        }
        break;
    
        char resultLocale[ULOC_FULLNAME_CAPACITY + 1];
    int32_t length = ucol_getFunctionalEquivalent(resultLocale, ULOC_FULLNAME_CAPACITY,
                                                  'collation', locale,
                                                  NULL, &errorCode);
    if(U_FAILURE(errorCode)) { return 0; }
    if(length == 0) {
        uprv_strcpy(resultLocale, 'root');
    } else {
        resultLocale[length] = 0;
    }
    
        ScriptSet &setAll();
    ScriptSet &resetAll();
    int32_t countMembers() const;
    int32_t hashCode() const;
    int32_t nextSetBit(int32_t script) const;
    
    UOBJECT_DEFINE_RTTI_IMPLEMENTATION(SelectFormat)
    
          tmp = get_node(fault->children, 'faultstring');
      if (tmp != nullptr && tmp->children != nullptr) {
        Variant zv =
          master_to_zval(get_conversion(dataTypeToSoap(KindOfString)), tmp);
        faultstring = zv.toString();
      }
    
    #include <climits>
#include <vector>
    
    #define CHECK_ACCESSOR(accesor, opstr, classname, propname)                    \
  if (!accesor) {                                                              \
    raise_error('Cannot directly %s the property %s::$%s',                     \
                 opstr, classname->data(), propname.data());                   \
  }
    
    
    {        if (encode_entity(buf, &len, const_cast<char*>(entity), utf8)) {
          *q++ = '&';
          const char *s = buf;
          for (int n = 0; n < len; n++) {
            *q++ = *s++;
          }
          *q++ = ';';
        } else {
          memcpy(q, p, codeLength);
          q += codeLength;
        }
      } else {
        memcpy(q, p, codeLength);
        q += codeLength;
      }
      p += codeLength - 1;
    
      const auto& headers = m_request->getHeaders();
  headers.forEach([&] (const std::string &header, const std::string &val) {
      m_requestHeaders[header.c_str()].push_back(val.c_str());
    });
    
    
    {  switch (op) {
  case Op::Add:
  case Op::Sub:
  case Op::Mul:
  case Op::AddO:
  case Op::SubO:
  case Op::MulO:
    return checkArith(t1) && checkArith(t2);
  case Op::BitAnd:
  case Op::BitOr:
  case Op::BitXor:
    return checkBitOp(t1) && checkBitOp(t2);
  default:
    break;
  }
  always_assert(0);
}
    
    #endif // D_DHT_REGISTRY_H

    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
    namespace aria2 {
    }
    
        // output element with JSON pointer '/number'
    std::cout << j.at('/number'_json_pointer) << '\n';
    // output element with JSON pointer '/string'
    std::cout << j.at('/string'_json_pointer) << '\n';
    // output element with JSON pointer '/array'
    std::cout << j.at('/array'_json_pointer) << '\n';
    // output element with JSON pointer '/array/1'
    std::cout << j.at('/array/1'_json_pointer) << '\n';
    
      std::thread positioning_thread_;
    
    bool ConfigManager::InitInternal() {
  if (inited_) {
    return true;
  }
  for (auto iter = model_config_map_.begin(); iter != model_config_map_.end();
       ++iter) {
    delete iter->second;
  }
  model_config_map_.clear();
    }
    
      common::Status ApplyRule(Frame* const frame,
                           ReferenceLineInfo* const reference_line_info);
    
    #include 'modules/planning/scenarios/scenario.h'
    
    #include 'modules/control/controller/controller_agent.h'
    
    #define ADEBUG_MODULE(module) \
  VLOG(4) << LEFT_BRACKET << module << RIGHT_BRACKET << '[DEBUG] '
#define ADEBUG ADEBUG_MODULE(MODULE_NAME)
#define AINFO ALOG_MODULE(MODULE_NAME, INFO)
#define AWARN ALOG_MODULE(MODULE_NAME, WARN)
#define AERROR ALOG_MODULE(MODULE_NAME, ERROR)
#define AFATAL ALOG_MODULE(MODULE_NAME, FATAL)
    
    
    {
    {
    {}  // namespace camera
}  // namespace perception
}  // namespace apollo

    
    
    {}  // anonymous namespace
    
      Random rnd(301);
  for (auto* handle : handles_) {
    for (int i = 0; i < kKeyNum; ++i) {
      db_->Put(WriteOptions(), handle, RandomString(&rnd, kKeySize),
               RandomString(&rnd, kValueSize));
    }
  }
    
      // initialize column families options
  std::unique_ptr<CompactionFilter> compaction_filter;
  compaction_filter.reset(new DummyCompactionFilter());
  cf_descs[0].options.table_factory.reset(NewBlockBasedTableFactory(bbt_opts));
  cf_descs[0].options.compaction_filter = compaction_filter.get();
  cf_descs[1].options.table_factory.reset(NewBlockBasedTableFactory(bbt_opts));