
        
          SelfType operator--(int) {
    SelfType temp(*this);
    --*this;
    return temp;
  }
    
    Value::Value(UInt value) {
  initBasic(uintValue);
  value_.uint_ = value;
}
#if defined(JSON_HAS_INT64)
Value::Value(Int64 value) {
  initBasic(intValue);
  value_.int_ = value;
}
Value::Value(UInt64 value) {
  initBasic(uintValue);
  value_.uint_ = value;
}
#endif // defined(JSON_HAS_INT64)
    
    TEST(AnyTest, TestPackAndUnpackAny) {
  // We can pack a Any message inside another Any message.
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
    }
    
      void Generate(io::Printer* printer);
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
      virtual MessageGenerator* NewMessageGenerator(
      const Descriptor* descriptor) const = 0;
    
    #include 'genericvector.h'
#include 'kdpair.h'
#include 'points.h'
    
    // Fills in the x-height range accepted by the given unichar_id, given its
// bounding box in the usual baseline-normalized coordinates, with some
// initial crude x-height estimate (such as word size) and this denoting the
// transformation that was used.
void DENORM::XHeightRange(int unichar_id, const UNICHARSET& unicharset,
                          const TBOX& bbox,
                          float* min_xht, float* max_xht, float* yshift) const {
  // Default return -- accept anything.
  *yshift = 0.0f;
  *min_xht = 0.0f;
  *max_xht = MAX_FLOAT32;
    }
    
    #ifndef TESSERACT_CCUTIL_DOUBLEPTR_H_
#define TESSERACT_CCUTIL_DOUBLEPTR_H_
    
    
    {  double rates[CT_SIZE];
  if (!ComputeRates(totals, rates))
    return 0.0;
  // Set output values if asked for.
  if (unichar_error != NULL)
    *unichar_error = rates[CT_UNICHAR_TOP1_ERR];
  return rates[boosting_mode];
}
    
      std::array<TimerName,kNumTimers> names_copy;
  std::copy(s_names, s_names + kNumTimers, begin(names_copy));
    
    Vlabel Vunit::makeScratchBlock() {
  return makeBlock(AreaIndex::Main, 1);
}
    
      if (!encoding.empty()) {
    mbs_haystack.no_encoding = mbs_needle.no_encoding =
      mbfl_name2no_encoding(encoding.data());
    if (mbs_haystack.no_encoding == mbfl_no_encoding_invalid) {
      raise_warning('Unknown encoding \'%s\'', encoding.data());
      return false;
    }
  }
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    NormalizedInstruction::NormalizedInstruction(SrcKey sk, const Unit* u)
  : source(sk)
  , funcd(nullptr)
  , m_unit(u)
  , immVec()
  , endsRegion(false)
  , preppedByRef(false)
  , ignoreInnerType(false)
  , interp(false)
  , forceSurpriseCheck(false)
{
  memset(imm, 0, sizeof(imm));
  populateImmediates(*this);
}
    
    #include 'hphp/util/arch.h'
#include 'hphp/util/assertions.h'
    
    const Arc& TargetGraph::incArcWeight(TargetId src, TargetId dst, double w) {
  auto res = arcs.emplace(src, dst, w);
  if (!res.second) {
    res.first->weight += w;
    return *res.first;
  }
  targets[src].succs.push_back(dst);
  targets[dst].preds.push_back(src);
  return *res.first;
}
    
    
// Logical immediates can't encode zero, so a return value of zero is used to
// indicate a failure case. Specifically, where the constraints on imm_s are
// not met.
uint64_t Instruction::ImmLogical() {
  unsigned reg_size = SixtyFourBits() ? kXRegSize : kWRegSize;
  int64_t n = BitN();
  int64_t imm_s = ImmSetBits();
  int64_t imm_r = ImmRotate();
    }