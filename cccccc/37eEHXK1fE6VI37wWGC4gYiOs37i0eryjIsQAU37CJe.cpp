
        
            void acquire_superblock_for_write(
            int expected_change_count,
            write_durability_t durability,
            write_token_t *token,
            scoped_ptr_t<txn_t> *txn_out,
            scoped_ptr_t<real_superblock_t> *sb_out,
            signal_t *interruptor)
            THROWS_ONLY(interrupted_exc_t);
    
      // Returns true iff the test part passed.
  bool passed() const { return type_ == kSuccess; }
    
    // Next, declare that you will define a type-parameterized test case
// (the _P suffix is for 'parameterized' or 'pattern', whichever you
// prefer):
TYPED_TEST_CASE_P(FooTest);
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_)};
    return ValuesIn(array);
  }
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    template <GTEST_7_TYPENAMES_(T)>
class GTEST_7_TUPLE_(T) {
 public:
  template <int k> friend class gtest_internal::Get;
    }
    
            try
        {
            andrat(&lhsRat, rhsRat, RATIONAL_BASE, RATIONAL_PRECISION);
            destroyrat(rhsRat);
        }
        catch (uint32_t error)
        {
            destroyrat(lhsRat);
            destroyrat(rhsRat);
            throw(error);
        }
    
    
    {        pnumret->exp += expSign * expValue;
    }
    
    typedef enum eNUMOBJ_FMT NUMOBJ_FMT;
typedef enum eANGLE_TYPE ANGLE_TYPE;
    
                Windows::Globalization::NumberFormatting::DecimalFormatter ^ m_ratioFormatter;
            std::wstring m_ratioFormat;
            Windows::Foundation::DateTime m_cacheTimestamp;
            std::wstring m_timestampFormat;
    
        vector<uint32_t> const& Number::Mantissa() const
    {
        return m_mantissa;
    }
    
    vector<shared_ptr<HISTORYITEM>> const& CalculatorHistory::GetHistory()
{
    return m_historyItems;
}
    
            CalcInput(wchar_t decSymbol)
            : m_hasExponent(false)
            , m_hasDecimal(false)
            , m_decPtIndex(0)
            , m_decSymbol(decSymbol)
            , m_base()
            , m_exponent()
        {
        }
    
    
    {    return (labelArray.arrSize() > 0) ? BSON('errorLabels' << labelArray.arr()) : BSONObj();
}
    
        const HostAndPort& getHostAndPort() const override;
    transport::ConnectSSLMode getSslMode() const override;
    bool isHealthy() override;
    AsyncDBClient* client();
    Date_t now() override;
    
    #include 'mongo/base/status.h'
#include 'mongo/util/functional.h'
    
        ASSERT_EQ(obj['towardsNegativeInfinity'].safeNumberLongForHash(),
              std::numeric_limits<long long>::lowest());
    ASSERT_EQ(obj['towardsNegativeInfinity'].safeNumberLong(),
              std::numeric_limits<long long>::lowest());
    
        // Complete the command by appending the other options to the aggregate command.
    if (auto collation = cmd.getCollation()) {
        aggregationBuilder.append(kCollationField, collation.get());
    }
    
        /**
     * Save any state required to recover from changes to the underlying collection's data.
     *
     * While in the 'saved' state, it is only legal to call restoreState,
     * detachFromOperationContext, or the destructor.
     */
    virtual void saveState() = 0;
    
        for (size_t i = 0; i < names.size(); i++) {
        BSONObjBuilder bb(b.subobjStart(names[i]));
    }
    
                    utext_extract(input, nextOutputStringStart, fActiveLimit, remainingChars, remaining16Length+1, &status);
                if (dest[i]) {
                    utext_replace(dest[i], 0, utext_nativeLength(dest[i]), remainingChars, remaining16Length, &status);
                } else {
                    UText remainingText = UTEXT_INITIALIZER;
                    utext_openUChars(&remainingText, remainingChars, remaining16Length, &status);
                    dest[i] = utext_clone(NULL, &remainingText, TRUE, FALSE, &status);
                    utext_close(&remainingText);
                }
    
      if (static_cast<int>(current_percent) >= limit_percentage_) {
    if (FLAG_trace_stress_scavenge) {
      heap_.isolate()->PrintWithTimestamp('[Scavenge] GC requested\n');
    }
    }
    
        template <typename Callback>
    void Update(Callback callback) {
      size_t new_index = 0;
      for (size_t i = 0; i < index_; i++) {
        if (callback(entries_[i], &entries_[new_index])) {
          new_index++;
        }
      }
      index_ = new_index;
    }
    
    void InterpreterDispatchDescriptor::InitializePlatformSpecific(
    CallInterfaceDescriptorData* data) {
  Register registers[] = {
      kInterpreterAccumulatorRegister, kInterpreterBytecodeOffsetRegister,
      kInterpreterBytecodeArrayRegister, kInterpreterDispatchTableRegister};
  data->InitializePlatformSpecific(arraysize(registers), registers);
}
    
    void TurboAssembler::Cvttss2ui(Register dst, Operand src, XMMRegister tmp) {
  Label done;
  cvttss2si(dst, src);
  test(dst, dst);
  j(positive, &done);
  Move(tmp, static_cast<float>(INT32_MIN));
  addss(tmp, src);
  cvttss2si(dst, tmp);
  or_(dst, Immediate(0x80000000));
  bind(&done);
}
    
          TNode<HeapObject> handler = CAST(var_handler.value());
      Label if_transitioning_element_store(this);
      GotoIfNot(IsCode(handler), &if_transitioning_element_store);
      TailCallStub(StoreWithVectorDescriptor{}, CAST(handler), CAST(p->context),
                   p->receiver, p->name, p->value, p->slot, p->vector);
    
    namespace v8 {
namespace internal {
    }
    }
    
    Config::Config(void) : m_config(YGConfigNew()) {}
    
      const YGNodeRef root_child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetPositionType(root_child0, YGPositionTypeAbsolute);
  YGNodeStyleSetPosition(root_child0, YGEdgeBottom, 10);
  YGNodeStyleSetWidth(root_child0, 60);
  YGNodeStyleSetHeight(root_child0, 40);
  YGNodeInsertChild(root, root_child0, 0);
  YGNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0_child0_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0_child0_child0));
  ASSERT_FLOAT_EQ(1080, YGNodeLayoutGetWidth(root_child0_child0_child0));
  ASSERT_FLOAT_EQ(144, YGNodeLayoutGetHeight(root_child0_child0_child0));
    
      ASSERT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_EQ(100, YGNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(100, YGNodeLayoutGetHeight(root_child0));
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root_child0));