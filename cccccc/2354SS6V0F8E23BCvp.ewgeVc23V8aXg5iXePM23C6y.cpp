
        
        /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
    static void secp256k1_ecdsa_recoverable_signature_save(secp256k1_ecdsa_recoverable_signature* sig, const secp256k1_scalar* r, const secp256k1_scalar* s, int recid) {
    if (sizeof(secp256k1_scalar) == 32) {
        memcpy(&sig->data[0], r, 32);
        memcpy(&sig->data[32], s, 32);
    } else {
        secp256k1_scalar_get_b32(&sig->data[0], r);
        secp256k1_scalar_get_b32(&sig->data[32], s);
    }
    sig->data[64] = recid;
}
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
    BOOST_AUTO_TEST_CASE(univalue_set)
{
    UniValue v(UniValue::VSTR, 'foo');
    v.clear();
    BOOST_CHECK(v.isNull());
    BOOST_CHECK_EQUAL(v.getValStr(), '');
    }
    
    #include <stdint.h>
#include <stdlib.h>
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    namespace leveldb {
    }
    
    std::string CurrentFileName(const std::string& dbname) {
  return dbname + '/CURRENT';
}
    
      /*!
   * \brief sets parameters for gradient compression
   * \param kwargs a vector of pair of strings. A pair represents key and value
   * of the parameter. Will be parsed by GradientCompressionParam
   */
  void SetParams(const std::vector<std::pair<std::string, std::string> >& kwargs);
    
    #ifndef DECL_SCALAR
#define DECL_SCALAR(XPU, OP, FUN, REVERSE)                           \
  template<>                                                         \
  void Eval<XPU, OP, REVERSE>(const TBlob &lhs, const real_t &rhs,   \
                                     TBlob *ret, RunContext ctx) {   \
    FUN<XPU, OP, REVERSE>(lhs, rhs, ret, ctx);                       \
  }
#endif
    
    /*!
 *  Copyright (c) 2018 by Contributors
 * \file transformer.cc
 * \brief CPU implementation of the operators used in Transformer
 */
#include <mxnet/base.h>
#include './transformer-inl.h'
#include '../tensor/elemwise_unary_op.h'
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file ndarray_op.cc
 * \brief
 * \author Junyuan Xie
*/
#include './ndarray_op-inl.h'
#include <mxnet/base.h>
#include <mxnet/ndarray.h>
    
    
    {
    {NNVM_REGISTER_OP(IdentityAttachKLSparseReg)
.set_attr<nnvm::FSetInputVarAttrOnCompose>('FSetInputVarAttrOnCompose',
    [](const nnvm::NodeAttrs& attrs, nnvm::NodePtr var, const int index) {
      if (var->attrs.dict.find('__init__') != var->attrs.dict.end()) return;
      if (index == 1) {
        var->attrs.dict['__init__'] = '[\'zero\', {}]';
      }
    });
}  // namespace op
}  // namespace mxnet
    
    template<typename xpu>
void ConcatCompute(const nnvm::NodeAttrs& attrs, const OpContext& ctx,
                   const std::vector<TBlob>& inputs,
                   const std::vector<OpReqType>& req,
                   const std::vector<TBlob>& outputs) {
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  MSHADOW_TYPE_SWITCH(inputs[concat_enum::kData0].type_flag_, DType, {
    ConcatOp<xpu, DType> op;
    op.Init(param);
    op.Forward(ctx, inputs, req, outputs);
  });
}
    
        private:
        static Microsoft::MSR::CNTK::InputStreamDescription GetInputStreamDescription(const StreamInformation& s, const DeviceDescriptor& device)
        {
            assert(s.m_storageFormat == StorageFormat::Dense || s.m_storageFormat == StorageFormat::SparseCSC);
            auto CNTKdeviceId = AsCNTKImplDeviceId(device);
            auto CNTKMatrixType = s.m_storageFormat == StorageFormat::Dense ? Microsoft::MSR::CNTK::MatrixType::DENSE : Microsoft::MSR::CNTK::MatrixType::SPARSE;
            auto CNTKMatrixFormat = AsCNTKImplMatrixFormat(s.m_storageFormat);
            return Microsoft::MSR::CNTK::InputStreamDescription(s.m_name, CNTKdeviceId, CNTKMatrixType, CNTKMatrixFormat);
        }
    
    
    {        switch (m_dataType)
        {
        case DataType::Float:
        {
            auto sourceMatrix = source.GetMatrix<float>();
            auto destMatrix = GetWritableMatrix<float>();
            destMatrix->AssignValuesOf(*sourceMatrix);
            break;
        }
        case DataType::Double:
        {
            auto sourceMatrix = source.GetMatrix<double>();
            auto destMatrix = GetWritableMatrix<double>();
            destMatrix->AssignValuesOf(*sourceMatrix);
            break;
        }
        case DataType::Float16:
        {
            auto sourceMatrix = source.GetMatrix<half>();
            auto destMatrix = GetWritableMatrix<half>();
            destMatrix->AssignValuesOf(*sourceMatrix);
            break;
        }
        case DataType::Int8:
        {
            auto sourceMatrix = source.GetMatrix<char>();
            auto destMatrix = GetWritableMatrix<char>();
            destMatrix->AssignValuesOf(*sourceMatrix);
            break;
        }
        case DataType::Int16:
        {
            auto sourceMatrix = source.GetMatrix<short>();
            auto destMatrix = GetWritableMatrix<short>();
            destMatrix->AssignValuesOf(*sourceMatrix);
            break;
        }
        default:
            LogicError('NDArrayView::CopyFrom: Unsupported DataType %s', DataTypeName(m_dataType));
            break;
        }
    }
    
    
    void Trainer::ExecuteForwardBackward(const std::unordered_map<Variable, ValuePtr>& arguments, std::unordered_map<Variable, ValuePtr>& outputsToFetch, const DeviceDescriptor& computeDevice, std::unordered_map<Variable, ValuePtr>& parameterGradients)
    {
#ifndef  CNTK_UWP
        auto profForwardBackward = Microsoft::MSR::CNTK::ScopeProfile(Microsoft::MSR::CNTK::profilerEvtMainFB);
#endif
        std::unordered_map<Variable, ValuePtr> outputs = { { m_aggregatedLossFunction, nullptr }, { m_trainingSampleCountVar, nullptr } };
        if (m_aggregatedEvaluationFunction)
            outputs.insert({ m_aggregatedEvaluationFunction, nullptr });
    }
    
    #pragma once
    
    class Timer
{
public:
    Timer()
        : m_start(0), m_end(0)
    {
    }
    }
    
        // release temp matrices that are only used by forward computation
    // don't release matrices that need to be used in the gradient computation
    virtual void ReleaseMatricesAfterForwardProp(MatrixPool& matrixPool)
    {
        Base::ReleaseMatricesAfterForwardProp(matrixPool);
        ReleaseMatrixToPool(m_maxIndexes0, matrixPool);
        ReleaseMatrixToPool(m_maxIndexes1, matrixPool);
        ReleaseMatrixToPool(m_maxValues, matrixPool);
    }
    
    
    {
    {
    {
    {                // now assign the actual pointers 
                for (int i = 0; i < memoryCounter; i++)
                {
                    auto matrixPtr = make_shared<Matrix<ElemType>>(devId);
                    if (!matrixPtr) // this can't really happen, because we haven't started allocating memory yet
                        LogicError('MatrixPool: failed to get a valid matrix.');
                    for (auto& memInfo : memInfoVec)
                    {
                        if (memInfo.deviceId == devId && memInfo.isWorkSpace == wsFlag && memInfo.memoryId == i)
                        {
                            for (auto pOutMatrixPtr : memInfo.pMatrixPtrs)
                            {
                                *pOutMatrixPtr = matrixPtr;
                            }
                        }
                    }
                }
            }
        }
    }
};
    
    vector<size_t> numSequencesForFrame;
// -----------------------------------------------------------------------
// OptimizedRNNStackNode
// -----------------------------------------------------------------------
    
    //////////////////////////////////////////////////////////////////////
    
    
    {}
    
    
    {private:
  APCHandle m_handle;
  APCHandle* m_arrayHandle;
  CollectionType m_colType;
};
    
    void Config::ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                    const std::string& iniStr,
                                    std::string& with_includes) {
  std::istringstream iss(iniStr);
  std::string line;
  while (std::getline(iss, line)) {
    // Handle cases like
    //   #include           ''
    //   ##includefoo barbaz'myconfig.ini' how weird is that
    // Anything that is not a syntactically correct #include 'file' after
    // this pre-processing, will be treated as an ini comment and processed
    // as such in the ini parser
    auto pos = line.find_first_not_of(' ');
    if (pos == std::string::npos ||
        line.compare(pos, strlen('#include'), '#include') != 0) {
      // treat as normal ini line, including comment that doesn't start with
      // #include
      with_includes += line + '\n';
      continue;
    }
    pos += strlen('#include');
    auto start = line.find_first_not_of(' ', pos);
    auto end = line.find_last_not_of(' ');
    if ((start == std::string::npos || line[start] != ''') ||
        (end == start || line[end] != ''')) {
      with_includes += line + '\n'; // treat as normal comment
      continue;
    }
    std::string file = line.substr(start + 1, end - start - 1);
    const std::string logger_file = file;
    boost::filesystem::path p(file);
    if (!p.is_absolute()) {
      boost::filesystem::path opath(original_ini_filename);
      p = opath.parent_path()/p;
    }
    if (boost::filesystem::exists(p)) {
      std::ifstream ifs(p.string());
      const std::string contents((std::istreambuf_iterator<char>(ifs)),
                                 std::istreambuf_iterator<char>());
      Config::ReplaceIncludesWithIni(p.string(), contents, with_includes);
    } else {
      Logger::Warning('ini include file %s not found', logger_file.c_str());
    }
  }
}
    
    #include <memory>
    
    /**
 * Implement this interface to report information to debugger or execute
 * debugger commands.
 */
struct IDebuggable {
  enum Support {
    SupportInfo = 1,
    SupportDump = 2,
    SupportVerb = 4,
  };
    }
    
    const StaticString
  s_wrapper_type('wrapper_type'),
  s_stream_type('stream_type'),
  s_mode('mode'),
  s_unread_bytes('unread_bytes'),
  s_seekable('seekable'),
  s_timed_out('timed_out'),
  s_blocked('blocked'),
  s_eof('eof'),
  s_plainfile('plainfile'),
  s_dir('dir'),
  s_r('r');
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write at a nonexisting key
        object.at('the fast') = 'il rapido';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    using json = nlohmann::json;