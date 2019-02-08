
        
            const auto* shapes_and_types = c.output_handle_shapes_and_types(i);
    if (shapes_and_types != nullptr) {
      auto* out_handle_data = out.mutable_handle_data();
      out_handle_data->set_is_set(true);
      for (const auto& p : *shapes_and_types) {
        auto* out_shape_and_type = out_handle_data->add_shape_and_type();
        ProtoFromShapeHandle(p.shape, &c, out_shape_and_type->mutable_shape());
        out_shape_and_type->set_dtype(p.dtype);
      }
    }
    
    // Get the python wrappers for a list of ops in a OpList.
// `op_list_buf` should be a pointer to a buffer containing
// the binary encoded OpList proto, and `op_list_len` should be the
// length of that buffer.
string GetPythonWrappers(const char* op_list_buf, size_t op_list_len);
    
    #include 'tensorflow/core/framework/op.h'
    
    
    {
    {}  // namespace cuda
}  // namespace stream_executor

    
        /** Colorize an icon (given filename) with the text color */
    QIcon TextColorIcon(const QString& filename) const;
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    static void secp256k1_hmac_sha256_initialize(secp256k1_hmac_sha256_t *hash, const unsigned char *key, size_t keylen) {
    int n;
    unsigned char rkey[64];
    if (keylen <= 64) {
        memcpy(rkey, key, keylen);
        memset(rkey + keylen, 0, 64 - keylen);
    } else {
        secp256k1_sha256_t sha256;
        secp256k1_sha256_initialize(&sha256);
        secp256k1_sha256_write(&sha256, key, keylen);
        secp256k1_sha256_finalize(&sha256, rkey);
        memset(rkey + 32, 0, 32);
    }
    }
    
    static void secp256k1_ecdsa_recoverable_signature_load(const secp256k1_context* ctx, secp256k1_scalar* r, secp256k1_scalar* s, int* recid, const secp256k1_ecdsa_recoverable_signature* sig) {
    (void)ctx;
    if (sizeof(secp256k1_scalar) == 32) {
        /* When the secp256k1_scalar type is exactly 32 byte, use its
         * representation inside secp256k1_ecdsa_signature, as conversion is very fast.
         * Note that secp256k1_ecdsa_signature_save must use the same representation. */
        memcpy(r, &sig->data[0], 32);
        memcpy(s, &sig->data[32], 32);
    } else {
        secp256k1_scalar_set_b32(r, &sig->data[0], NULL);
        secp256k1_scalar_set_b32(s, &sig->data[32], NULL);
    }
    *recid = sig->data[64];
}
    
    int UniValue::get_int() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int32_t retval;
    if (!ParseInt32(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    const Message* GetCProtoInsidePyProto(PyObject* msg) {
  return GetCProtoInsidePyProtoPtr(msg);
}
Message* MutableCProtoInsidePyProto(PyObject* msg) {
  return MutableCProtoInsidePyProtoPtr(msg);
}
    
    bool ParseAnyTypeUrl(const string& type_url, string* url_prefix,
                     string* full_type_name) {
  size_t pos = type_url.find_last_of('/');
  if (pos == string::npos || pos + 1 == type_url.size()) {
    return false;
  }
  if (url_prefix) {
    *url_prefix = type_url.substr(0, pos + 1);
  }
  *full_type_name = type_url.substr(pos + 1);
  return true;
}
    
    // Check whether there is any type defined in the proto file that has
// the given class name.
bool ClassNameResolver::HasConflictingClassName(
    const FileDescriptor* file, const string& classname) {
  for (int i = 0; i < file->enum_type_count(); i++) {
    if (file->enum_type(i)->name() == classname) {
      return true;
    }
  }
  for (int i = 0; i < file->service_count(); i++) {
    if (file->service(i)->name() == classname) {
      return true;
    }
  }
  for (int i = 0; i < file->message_type_count(); i++) {
    if (MessageHasConflictingClassName(file->message_type(i), classname)) {
      return true;
    }
  }
  return false;
}
    
    void OneofGenerator::GeneratePropertyImplementation(io::Printer* printer) {
  printer->Print(
      variables_,
      '@dynamic $name$OneOfCase;\n');
}
    
    
  string error;
  bool succeeded = generator.GenerateAll(
      parsed_files, request.parameter(), &context, &error);
    
    #ifndef B2_POLYGON_H
#define B2_POLYGON_H
    
    
    {		}
    
    #define UNIT_QUANT_SHIFT 2
#define UNIT_QUANT_FACTOR (1 << UNIT_QUANT_SHIFT)
    
    TEdge *GetMaximaPair(TEdge *e)
{
  if ((e->Next->Top == e->Top) && !e->Next->NextInLML)
    return e->Next;
  else if ((e->Prev->Top == e->Top) && !e->Prev->NextInLML)
    return e->Prev;
  else return 0;
}
//------------------------------------------------------------------------------
    
    int fastlz_compress_level(int level, const void* input, int length, void* output);
    
    /** 16x16 multiplication where the result fits in 32 bits */
#undef MULT16_16
static OPUS_INLINE opus_val32 MULT16_16_armv5e(opus_val16 a, opus_val16 b)
{
  int res;
  __asm__(
      '#MULT16_16\n\t'
      'smulbb %0, %1, %2;\n'
      : '=r'(res)
      : 'r'(a), 'r'(b)
  );
  return res;
}
#define MULT16_16(a, b) (MULT16_16_armv5e(a, b))
    
    #define MULT16_16_P13(a,b) (SHR(ADD32(4096,MULT16_16((a),(b))),13))
#define MULT16_16_P14(a,b) (SHR(ADD32(8192,MULT16_16((a),(b))),14))
#define MULT16_16_P15(a,b) (SHR(ADD32(16384,MULT16_16((a),(b))),15))
    
    namespace CNTK
{
    class CompositeMinibatchSource final : public MinibatchSource
    {
        static const std::wstring PositionAttributeName;
        static const std::wstring DistributedAfterSampleCountAttributeName;
    }
    }
    
            ValidateType<T>(dict, typeValue, currentVersion);
    
            DataType aggregateDataType = m_aggregatedLossFunction->Output().GetDataType();
    
        /*virtual*/ ValuePtr Value::DeepClone(bool readOnly/* = false*/) const
    {
        // TODO: Check if this is a derived type and throw an exception in that case
        return MakeSharedObject<Value>(Data()->DeepClone(readOnly), (Mask() != nullptr) ? Mask()->DeepClone() : nullptr);
    }
    
            VariableKind kind = VariableKind(dict[kindKey].Value<std::size_t>());
        if (kind != VariableKind::Constant &&
            kind != VariableKind::Input &&
            kind != VariableKind::Parameter &&
            kind != VariableKind::Placeholder)
        {
            LogicError('Unexpected variable kind '%ls':'%u' (%s).',
                       kindKey.c_str(),
                       static_cast<std::underlying_type<VariableKind>::type>(kind),
                       GetVersionsString<Variable>(s_serializationVersion, version).c_str());
        }
        
        DataType dataType = DataType(dict[dataTypeKey].Value<std::size_t>());
        if (dataType != DataType::Unknown &&
            dataType != DataType::Float &&
            dataType != DataType::Double &&
            dataType != DataType::Float16 &&
            dataType != DataType::Int8 &&
            dataType != DataType::Int16)
        {
            LogicError('Unexpected variable datatype '%ls':'%u' (%s).', 
                       dataTypeKey.c_str(), 
                       static_cast<std::underlying_type<DataType>::type>(dataType),
                       GetVersionsString<Variable>(s_serializationVersion, version).c_str());
        }
        
        const vector<DictionaryValue>& dictionaryValueVector = dict[dynamicAxisKey].Value<vector<DictionaryValue>>();
        vector<Axis> dynamicAxis;
        dynamicAxis.reserve(dictionaryValueVector.size());
        for (const auto& dictionaryValue : dictionaryValueVector)
        {
            dynamicAxis.push_back(dictionaryValue.Value<Axis>());
        }
    
    
    {
    {        SetDims(TensorShape::Scalar(Environment().IsV2Library()), Input(0)->HasMBLayout()); // each column is reduced to a scalar
    }
};