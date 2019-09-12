
        
        #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    void MapLiteTestUtil::ModifyMapFields(unittest::TestMapLite* message) {
  MapTestUtilImpl::ModifyMapFields<unittest::MapEnumLite,
                                   unittest::MAP_ENUM_FOO_LITE>(message);
}
    
    
    {
    {
    {}  // namespace util
}  // namespace protobuf
}  // namespace google

    
    TEST(TemplateUtilTest, TestSize) {
  EXPECT_GT(sizeof(GOOGLE_NAMESPACE::big_), sizeof(GOOGLE_NAMESPACE::small_));
}
    
        for (size_t i = 0; i < set_fields.size(); i++) {
      const FieldDescriptor* field = set_fields[i];
      if (ShouldBeClear(field)) {
        reflection->ClearField(message, field);
        continue;
      }
      if (field->type() == FieldDescriptor::TYPE_MESSAGE) {
        if (field->is_repeated()) {
          for (int j = 0; j < reflection->FieldSize(*message, field); j++) {
            StripMessage(reflection->MutableRepeatedMessage(message, field, j));
          }
        } else {
          StripMessage(reflection->MutableMessage(message, field));
        }
      }
    }
    
        if (dataset.message_name() == 'benchmarks.proto3.GoogleMessage1') {
      message = new benchmarks::proto3::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage1') {
      message = new benchmarks::proto2::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage2') {
      message = new benchmarks::proto2::GoogleMessage2;
    } else if (dataset.message_name() ==
        'benchmarks.google_message3.GoogleMessage3') {
      message = new benchmarks::google_message3::GoogleMessage3;
    } else if (dataset.message_name() ==
        'benchmarks.google_message4.GoogleMessage4') {
      message = new benchmarks::google_message4::GoogleMessage4;
    } else {
      std::cerr << 'Unknown message type: ' << dataset.message_name();
      exit(1);
    }
    
    std::string ReadFile(const std::string& name) {
  std::ifstream file(name.c_str());
  GOOGLE_CHECK(file.is_open()) << 'Couldn't find file ''
      << name
      << '', please make sure you are running this command from the benchmarks'
      << ' directory.\n';
  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
    
        std::unique_ptr<google::protobuf::io::ZeroCopyOutputStream> output(
        context->Open(basename + '.proto'));
    string content = GetPool()->BuildFile(new_file)->DebugString();
    Printer printer(output.get(), '$');
    printer.WriteRaw(content.c_str(), content.size());
    
     private:
  static bool IsMessageSet(const Descriptor *descriptor) {
    if (descriptor != nullptr
        && descriptor->options().message_set_wire_format()) {
      return true;
    }
    return false;
  }
    
    PyObject* PyServiceDescriptor_FromDescriptor(
    const ServiceDescriptor* service_descriptor) {
  return descriptor::NewInternedDescriptor(
      &PyServiceDescriptor_Type, service_descriptor, NULL);
}
    
    // Return the C++ descriptor pointer.
// This function checks the parameter type; on error, return NULL with a Python
// exception set.
const Descriptor* PyMessageDescriptor_AsDescriptor(PyObject* obj);
const FieldDescriptor* PyFieldDescriptor_AsDescriptor(PyObject* obj);
const EnumDescriptor* PyEnumDescriptor_AsDescriptor(PyObject* obj);
const FileDescriptor* PyFileDescriptor_AsDescriptor(PyObject* obj);
const ServiceDescriptor* PyServiceDescriptor_AsDescriptor(PyObject* obj);
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
      // Return whether this model is likely to agree with the other model on most
  // paragraphs they are marked.
  bool Comparable(const ParagraphModel &other) const;
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
      // The UNICHARMAP is represented as a tree whose nodes are of type
  // UNICHARMAP_NODE.
  struct UNICHARMAP_NODE {
    }
    
    namespace tesseract {
    }
    
    
    {        destroyrat(pr);
    }
    
    
    {    // If there are zeros to remove.
    if (fstrip)
    {
        // Remove them.
        memmove(pnum->mant, pmant, (int)(cdigits * sizeof(MANTTYPE)));
        // And adjust exponent and digit count accordingly.
        pnum->exp += (pnum->cdigit - cdigits);
        pnum->cdigit = cdigits;
    }
    return (fstrip);
}
    
        class UnitConverterMock : public UnitConversionManager::IUnitConverter
    {
    public:
        UnitConverterMock();
        void Initialize() override;
        std::vector<UCM::Category> GetCategories() override;
        UCM::CategorySelectionInitializer SetCurrentCategory(const UCM::Category& input) override;
        UCM::Category GetCurrentCategory();
        void SetCurrentUnitTypes(const UCM::Unit& fromType, const UCM::Unit& toType) override;
        void SwitchActive(const std::wstring& newValue);
        std::wstring SaveUserPreferences() override;
        void RestoreUserPreferences(_In_ const std::wstring& userPreferences) override;
        void SendCommand(UCM::Command command) override;
        void SetViewModelCallback(const std::shared_ptr<UCM::IUnitConverterVMCallback>& newCallback) override;
        void SetViewModelCurrencyCallback(_In_ const std::shared_ptr<UCM::IViewModelCurrencyCallback>& /*newCallback*/) override
        {
        }
        void Calculate() override
        {
        }
        void ResetCategoriesAndRatios() override
        {
        }
        std::future<std::pair<bool, std::wstring>> RefreshCurrencyRatios() override
        {
            co_return std::make_pair(true, L'');
        }
    }
    
            void Clear();
        bool TryToggleSign(bool isIntegerMode, std::wstring_view maxNumStr);
        bool TryAddDigit(unsigned int value, uint32_t radix, bool isIntegerMode, std::wstring_view maxNumStr, int32_t wordBitWidth, int maxDigits);
        bool TryAddDecimalPt();
        bool HasDecimalPt();
        bool TryBeginExponent();
        void Backspace();
        void SetDecimalSymbol(wchar_t decSymbol);
        std::wstring ToString(uint32_t radix);
        Rational ToRational(uint32_t radix, int32_t precision);
    
    LiveRegionHost::LiveRegionHost()
    : m_host(nullptr)
{
}
    
    
    {  return 0;
}
    
    namespace BulkOperations {
    }
    
    
    {    m_combinator->combine(future);
  }
    
      Q_PROPERTY(
      QString operationName READ operationName NOTIFY operationNameChanged)
  Q_PROPERTY(
      QString connectionName READ connectionName NOTIFY connectionNameChanged)
  Q_PROPERTY(int dbIndex READ dbIndex NOTIFY dbIndexChanged)
  Q_PROPERTY(QString keyPattern READ keyPattern WRITE setKeyPattern NOTIFY
                 keyPatternChanged)
  Q_PROPERTY(int operationProgress READ operationProgress NOTIFY
                 operationProgressChanged)
 public:
  enum class Operation {
    DELETE_KEYS,
    COPY_KEYS,
    IMPORT_RDB_KEYS,
    TTL,
  };
    
      virtual QString getTypeName() const = 0;
    
    namespace BulkOperations {
    }
    
    
    {  // Common double-linked list insertion.
  if (top != nullptr) {
    top->set_prev(category);
  }
  category->set_next(top);
  categories_[type] = category;
  return true;
}
    
      Address start = reservation.address();
  const size_t allocated_size = reservation.size();
    
      // This method ensures that all used store buffer entries are transferred to
  // the remembered set.
  void MoveAllEntriesToRememberedSet();
    
      void Step(int bytes_allocated, Address soon_object, size_t size) override;
    
    #endif  // V8_TARGET_ARCH_IA32

    
      int double_regs_offset = FrameDescription::double_registers_offset();
  // Fill in the double input registers.
  for (int i = 0; i < config->num_allocatable_double_registers(); ++i) {
    int code = config->GetAllocatableDoubleCode(i);
    int dst_offset = code * kDoubleSize + double_regs_offset;
    int src_offset = code * kDoubleSize;
    __ movsd(xmm0, Operand(esp, src_offset));
    __ movsd(Operand(esi, dst_offset), xmm0);
  }
    
    
    {
    {    for (byte* bp = prev_pc; bp < pc; bp++) {
      fprintf(f, '%02x',  *bp);
    }
    for (int i = 6 - (pc - prev_pc); i >= 0; i--) {
      fprintf(f, '  ');
    }
    fprintf(f, '  %s\n', buffer.start());
  }
}
    
    typedef XMMRegister FloatRegister;
    
        CSA_ASSERT(this, IsWeakOrCleared(maybe_weak_ref));
    TNode<PropertyCell> property_cell =
        CAST(GetHeapObjectAssumeWeak(maybe_weak_ref, &try_handler));
    
      // This handles the case where at least one input is a BigInt.
  BIND(&if_bigint);
  {
    var_type_feedback.Bind(SmiConstant(BinaryOperationFeedback::kBigInt));
    var_result.Bind(CallRuntime(Runtime::kBigIntBinaryOp, context, lhs, rhs,
                                SmiConstant(op)));
    Goto(&end);
  }