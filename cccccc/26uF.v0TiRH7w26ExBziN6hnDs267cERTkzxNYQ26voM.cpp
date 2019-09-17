
        
        #ifndef NATIVE_MATE_NATIVE_MATE_CONSTRUCTOR_H_
#define NATIVE_MATE_NATIVE_MATE_CONSTRUCTOR_H_
    
      v8::Local<v8::Object> GetHandle() const override;
    
      // Delegate implementations.
  void OnError(const std::string& error) override;
  void OnError(const std::string& message,
               const int code,
               const std::string& domain) override;
  void OnCheckingForUpdate() override;
  void OnUpdateAvailable() override;
  void OnUpdateNotAvailable() override;
  void OnUpdateDownloaded(const std::string& release_notes,
                          const std::string& release_name,
                          const base::Time& release_date,
                          const std::string& update_url) override;
    
    #include 'base/callback.h'
#include 'chrome/browser/extensions/global_shortcut_listener.h'
#include 'native_mate/handle.h'
#include 'shell/browser/api/trackable_object.h'
#include 'ui/base/accelerators/accelerator.h'
    
    
    {}  // namespace
    
      /// Bookkeeping to ensure that useConformancesFrom{ObjectiveC,}Type() is
  /// only called once for each unique type, as an optimization.
  llvm::DenseSet<TypeBase *> usedConformancesFromTypes;
  llvm::DenseSet<TypeBase *> usedConformancesFromObjectiveCTypes;
    
    #include 'swift/Reflection/MetadataSource.h'
    
      StringRef getFieldName(uintptr_t Offset, uintptr_t Low,
                         uintptr_t High) const {
    uintptr_t nameAddr = (uintptr_t)FieldName.get() + Offset;
    if (nameAddr < Low || nameAddr > High)
      return '';
    return (const char *)nameAddr;
  }
    
          Demangle::Demangler Dem;
      auto Demangled = Dem.demangleType(Line);
      auto *TypeRef =
          swift::Demangle::decodeMangledType(Context.getBuilder(), Demangled);
      if (TypeRef == nullptr) {
        OS << 'Invalid typeref: ' << Line << '\n';
        continue;
      }
    
      /// This class has hidden visibility.
  Hidden               = 0x00010,
    
      static constexpr uint32_t validateInlineOffset(uint32_t offset) {
    return assert(offsetCanBeInline(offset)
                  && 'offset too big!'),
           offset;
  }
    
        case_setIfNonEmpty(ABIName)
    case_setIfNonEmpty(SymbolNamespace)
    case_setIfNonEmpty(RelatedEntityName)
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
        UniValue obj2(UniValue::VOBJ);
    BOOST_CHECK(obj2.pushKV('cat1', 9000));
    BOOST_CHECK(obj2.pushKV('cat2', 12345));
    
    #endif // BITCOIN_CRYPTO_RIPEMD160_H

    
      Status NewRandomAccessFile(const std::string& f, RandomAccessFile** r) {
    class CountingFile : public RandomAccessFile {
     private:
      RandomAccessFile* target_;
      AtomicCounter* counter_;
     public:
      CountingFile(RandomAccessFile* target, AtomicCounter* counter)
          : target_(target), counter_(counter) {
      }
      virtual ~CountingFile() { delete target_; }
      virtual Status Read(uint64_t offset, size_t n, Slice* result,
                          char* scratch) const {
        counter_->Increment();
        return target_->Read(offset, n, result, scratch);
      }
    };
    }
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
    // Header is checksum (4 bytes), length (2 bytes), type (1 byte).
static const int kHeaderSize = 4 + 2 + 1;
    
      // Generate goog.provides() calls.
  void FindProvides(const GeneratorOptions& options, io::Printer* printer,
                    const std::vector<const FileDescriptor*>& file,
                    std::set<std::string>* provided) const;
  void FindProvidesForFile(const GeneratorOptions& options,
                           io::Printer* printer, const FileDescriptor* file,
                           std::set<std::string>* provided) const;
  void FindProvidesForMessage(const GeneratorOptions& options,
                              io::Printer* printer, const Descriptor* desc,
                              std::set<std::string>* provided) const;
  void FindProvidesForEnum(const GeneratorOptions& options,
                           io::Printer* printer, const EnumDescriptor* enumdesc,
                           std::set<std::string>* provided) const;
  // For extension fields at file scope.
  void FindProvidesForFields(const GeneratorOptions& options,
                             io::Printer* printer,
                             const std::vector<const FieldDescriptor*>& fields,
                             std::set<std::string>* provided) const;
  // Print the goog.provides() found by the methods above.
  void GenerateProvides(const GeneratorOptions& options, io::Printer* printer,
                        std::set<std::string>* provided) const;
    
    namespace google {
namespace protobuf {
namespace io {
    }
    }
    }
    
    #include <google/protobuf/stubs/bytestream.h>
    
    TEST(StatusOr, TestPointerAssignmentStatusOk) {
  const int kI = 0;
  StatusOr<const int*> source(&kI);
  StatusOr<const int*> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(source.ValueOrDie(), target.ValueOrDie());
}
    
    TEST(StructurallyValidTest, ValidUTF8String) {
  // On GCC, this string can be written as:
  //   'abcd 1234 - \u2014\u2013\u2212'
  // MSVC seems to interpret \u differently.
  string valid_str('abcd 1234 - \342\200\224\342\200\223\342\210\222 - xyz789');
  EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data(),
                                      valid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data() + i,
                                        valid_str.size() - i));
  }
}
    
    
    {  typedef integral_constant<int, 1> one_type;
  EXPECT_EQ(1, one_type::value);
}
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    base::StringPiece GetStringResource(int resource_id) {
  return ResourceBundle::GetSharedInstance().GetRawDataResource(resource_id);
}
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
     protected:
  ~NwObjCreateFunction() override;
    
    
    {    for (auto& media_list : media_list_) {
      media_list->StartUpdating(this);
    }
  }
    
      // implement nw.Screen.initEventListeners()
  class NwScreenInitEventListenersFunction: public NWSyncExtensionFunction {
    public:
      NwScreenInitEventListenersFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    #include <array>
#include <string>
#include <string_view>
#include <unordered_map>
    
    
    {    bool Number::IsZero() const
    {
        return all_of(m_mantissa.begin(), m_mantissa.end(), [](auto&& i) { return i == 0; });
    }
}

    
        // if the grouping pattern or thousands symbol changed we need to refresh the display
    if (m_decGrouping != lastDecGrouping || m_groupSeparator != lastSep)
    {
        numChanged = true;
    }
    
    namespace CalculationManager
{
    enum CALCULATOR_MODE
    {
        CM_STD = 0,
        CM_SCI,
    };
    }
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetDisplayCopiedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::DisplayCopied, AutomationNotificationKind::ActionCompleted, AutomationNotificationProcessing::ImportantMostRecent);
}
    
      if (op == Operation::DELETE_KEYS) {
    m_operation = QSharedPointer<BulkOperations::AbstractOperation>(
        new BulkOperations::DeleteOperation(connection, dbIndex,
                                            callbackWrapper, keyPattern));
  } else if (op == Operation::TTL) {
    m_operation = QSharedPointer<BulkOperations::AbstractOperation>(
        new BulkOperations::TtlOperation(connection, dbIndex, callbackWrapper,
                                         keyPattern));
  } else if (op == Operation::COPY_KEYS) {
    m_operation = QSharedPointer<BulkOperations::AbstractOperation>(
        new BulkOperations::CopyOperation(connection, dbIndex, callbackWrapper,
                                          keyPattern));
  } else if (op == Operation::IMPORT_RDB_KEYS) {
    m_operation = QSharedPointer<BulkOperations::AbstractOperation>(
        new BulkOperations::RDBImportOperation(
            connection, dbIndex, callbackWrapper, m_python, keyPattern));
  }
    
    void BulkOperations::RDBImportOperation::performOperation(
    QSharedPointer<RedisClient::Connection>, int) {
  m_combinator = QSharedPointer<AsyncFuture::Combinator>(
      new AsyncFuture::Combinator(AsyncFuture::FailFast));
    }
    
      bool isMetadataValid() const override;