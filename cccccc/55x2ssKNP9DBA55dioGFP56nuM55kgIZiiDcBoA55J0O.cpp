
        
        void PrintHeaderServerMethodSync(grpc_generator::Printer *printer,
                                 const grpc_generator::Method *method,
                                 std::map<grpc::string, grpc::string> *vars) {
  (*vars)['Method'] = method->name();
  (*vars)['Request'] = method->input_type_name();
  (*vars)['Response'] = method->output_type_name();
  printer->Print(method->GetLeadingComments('//').c_str());
  if (method->NoStreaming()) {
    printer->Print(*vars,
                   'virtual ::grpc::Status $Method$('
                   '::grpc::ServerContext* context, const $Request$* request, '
                   '$Response$* response);\n');
  } else if (ClientOnlyStreaming(method)) {
    printer->Print(*vars,
                   'virtual ::grpc::Status $Method$('
                   '::grpc::ServerContext* context, '
                   '::grpc::ServerReader< $Request$>* reader, '
                   '$Response$* response);\n');
  } else if (ServerOnlyStreaming(method)) {
    printer->Print(*vars,
                   'virtual ::grpc::Status $Method$('
                   '::grpc::ServerContext* context, const $Request$* request, '
                   '::grpc::ServerWriter< $Response$>* writer);\n');
  } else if (method->BidiStreaming()) {
    printer->Print(
        *vars,
        'virtual ::grpc::Status $Method$('
        '::grpc::ServerContext* context, '
        '::grpc::ServerReaderWriter< $Response$, $Request$>* stream);'
        '\n');
  }
  printer->Print(method->GetTrailingComments('//').c_str());
}
    
      // Generate table constructors, conditioned on its members' types.
  void GenTableBuilders(const StructDef &struct_def,
                        std::string *code_ptr) {
    std::string &code = *code_ptr;
    code += 'def ' + NormalizedName(struct_def) +
            'Start(b_:flatbuffers_builder):\n    b_.StartObject(' +
            NumToString(struct_def.fields.vec.size()) + ')\n';
    for (auto it = struct_def.fields.vec.begin();
        it != struct_def.fields.vec.end(); ++it) {
      auto &field = **it;
      if (field.deprecated) continue;
      auto offset = it - struct_def.fields.vec.begin();
      code += 'def ' + NormalizedName(struct_def) + 'Add' +
              MakeCamel(NormalizedName(field)) + '(b_:flatbuffers_builder, ' +
              NormalizedName(field) + ':' + LobsterType(field.value.type) +
              '):\n    b_.Prepend' + GenMethod(field.value.type) + 'Slot(' +
              NumToString(offset) + ', ' + NormalizedName(field) + ', ' +
              field.value.constant + ')\n';
      if (field.value.type.base_type == BASE_TYPE_VECTOR) {
        code += 'def ' + NormalizedName(struct_def) + 'Start' +
                MakeCamel(NormalizedName(field)) +
                'Vector(b_:flatbuffers_builder, n_:int):\n    b_.StartVector(';
        auto vector_type = field.value.type.VectorType();
        auto alignment = InlineAlignment(vector_type);
        auto elem_size = InlineSize(vector_type);
        code += NumToString(elem_size) + ', n_, ' + NumToString(alignment) +
                ')\n';
        if (vector_type.base_type != BASE_TYPE_STRUCT ||
            !vector_type.struct_def->fixed) {
          code += 'def ' + NormalizedName(struct_def) + 'Create' +
                  MakeCamel(NormalizedName(field)) +
                  'Vector(b_:flatbuffers_builder, v_:[' +
                  LobsterType(vector_type) + ']):\n    b_.StartVector(' +
                  NumToString(elem_size) + ', v_.length, ' +
                  NumToString(alignment) +
                  ')\n    reverse(v_) e_: b_.Prepend' +
                  GenMethod(vector_type) +
                  '(e_)\n    b_.EndVector(v_.length)\n';
        }
      }
    }
    code += 'def ' + NormalizedName(struct_def) +
            'End(b_:flatbuffers_builder):\n    b_.EndObject()\n\n';
  }
    
    template <class Builder>
void RetrieveRPC(MonsterStorage::Stub *stub) {
  Builder fbb;
  grpc::ClientContext context;
  fbb.Clear();
  auto stat_offset = CreateStat(fbb, fbb.CreateString('Fred'));
  fbb.Finish(stat_offset);
  auto request = MessageBuilder(std::move(fbb)).ReleaseMessage<Stat>();
    }
    
      // clang-format off
  #if !defined(FLATBUFFERS_CPP98_STL)
  // clang-format on
  GrpcLikeMessageBuilder &operator=(GrpcLikeMessageBuilder &&other) {
    // Construct temporary and swap idiom
    GrpcLikeMessageBuilder temp(std::move(other));
    Swap(temp);
    return *this;
  }
  // clang-format off
  #endif  // !defined(FLATBUFFERS_CPP98_STL)
  // clang-format on