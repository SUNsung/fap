
        
          static void OnDoneRecvMessageCb(void* user_data, grpc_error* error);
    
      CensusServerCallData()
      : gc_(nullptr),
        auth_context_(nullptr),
        recv_initial_metadata_(nullptr),
        initial_on_done_recv_initial_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&census_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_initial_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
    
    {
    {   private:
    const grpc::string name_;
    const int value_;
  };
  return std::unique_ptr<ServerBuilderOption>(new IntOption(name, value));
}
    
    #include <mach/mach.h>
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    LoadRecordValue::LoadRecordValue(grpc::string metric_name, uint64_t num_calls,
                                 double total_metric_value) {
  call_metrics_.emplace(std::move(metric_name),
                        CallMetricValue(num_calls, total_metric_value));
}
    
        UnicodeString &displayScripts(UnicodeString &dest) const; // append script names to dest string.
    ScriptSet & parseScripts(const UnicodeString &scriptsString, UErrorCode &status);  // Replaces ScriptSet contents.
    
        /**
     * Returns TRUE if this object is equal to rhs.
     */
    UBool equals(const SignificantDigitInterval &rhs) const {
        return ((fMax == rhs.fMax) && (fMin == rhs.fMin));
    }
    
    
    {    // Now we need some adjustment
    if (savingsDST > 0) {
        if ((nonExistingTimeOpt & kStdDstMask) == kStandard
            || ((nonExistingTimeOpt & kStdDstMask) != kDaylight && (nonExistingTimeOpt & kFormerLatterMask) != kLatter)) {
            date -= getDSTSavings();
            recalc = TRUE;
        }
    } else {
        if ((duplicatedTimeOpt & kStdDstMask) == kDaylight
                || ((duplicatedTimeOpt & kStdDstMask) != kStandard && (duplicatedTimeOpt & kFormerLatterMask) == kFormer)) {
            date -= getDSTSavings();
            recalc = TRUE;
        }
    }
    if (recalc) {
        day = uprv_floor(date / U_MILLIS_PER_DAY);
        millis = (int32_t) (date - day * U_MILLIS_PER_DAY);
        Grego::dayToFields(day, year, month, dom, dow);
        savingsDST = getOffset(GregorianCalendar::AD, year, month, dom,
                          (uint8_t) dow, millis,
                          Grego::monthLength(year, month),
                          status) - rawOffsetGMT;
    }
}
    
    SimpleDateFormatStaticSets::SimpleDateFormatStaticSets(UErrorCode &status)
: fDateIgnorables(NULL),
  fTimeIgnorables(NULL),
  fOtherIgnorables(NULL)
{
    fDateIgnorables  = new UnicodeSet(UNICODE_STRING('[-,./[:whitespace:]]', 20), status);
    fTimeIgnorables  = new UnicodeSet(UNICODE_STRING('[-.:[:whitespace:]]', 19),  status);
    fOtherIgnorables = new UnicodeSet(UNICODE_STRING('[:whitespace:]', 14),       status);
    }
    
    #if !UCONFIG_NO_FORMATTING
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create a JSON number from number_unsigned_t
    json::number_integer_t value_unsigned_t = 17;
    json j_unsigned_t(value_unsigned_t);
    
    
    {
    {    printer->Print(file->GetTrailingComments('//').c_str());
  }
  return output;
}
    
      // Shortcut for creating monster with all fields set:
  auto orc = CreateMonster(builder, &position, 150, 80, name, inventory,
                           Color_Red, weapons, Equipment_Weapon, axe.Union());
    
    // Represents any type in the IDL, which is a combination of the BaseType
// and additional information for vectors/structs_.
struct Type {
  explicit Type(BaseType _base_type = BASE_TYPE_NONE, StructDef *_sd = nullptr,
                EnumDef *_ed = nullptr)
      : base_type(_base_type),
        element(BASE_TYPE_NONE),
        struct_def(_sd),
        enum_def(_ed) {}
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
    
      static std::string GenTypeBasic(const Type &type) {
    static const char *ctypename[] = {
    // clang-format off
        #define FLATBUFFERS_TD(ENUM, IDLTYPE, \
            CTYPE, JTYPE, GTYPE, NTYPE, PTYPE, RTYPE) \
            #NTYPE,
                FLATBUFFERS_GEN_TYPES(FLATBUFFERS_TD)
        #undef FLATBUFFERS_TD
      // clang-format on
    };
    return ctypename[type.base_type];
  }