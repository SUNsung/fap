
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
    // Contains device-level options that can be specified at a platform level.
// Example usage:
//    auto device_options = DeviceOptions::Default();
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
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
    
    U_CAPI void U_EXPORT2
uhash_deleteScriptSet(void *obj);
    
    UnicodeString&
SelectFormat::toPattern(UnicodeString& appendTo) {
    if (0 == msgPattern.countParts()) {
        appendTo.setToBogus();
    } else {
        appendTo.append(msgPattern.getPatternString());
    }
    return appendTo;
}
    
    SharedBreakIterator::~SharedBreakIterator() {
  delete ptr;
}
    
    U_NAMESPACE_BEGIN
    
    int32_t 
SmallIntFormatter::estimateDigitCount(
        int32_t positiveValue, const IntDigitCountRange &range) {
    if (positiveValue >= gMaxFastInt) {
        return range.getMax();
    }
    return range.pin(gDigitCount[positiveValue]);
}
    
    
    {    if (count > 0) {
        uprv_memcpy(getBytes(), newValues, count);
    }
}
    
    StringMatcher::StringMatcher(const UnicodeString& theString,
                             int32_t start,
                             int32_t limit,
                             int32_t segmentNum,
                             const TransliterationRuleData& theData) :
    data(&theData),
    segmentNumber(segmentNum),
    matchStart(-1),
    matchLimit(-1)
{
    theString.extractBetween(start, limit, pattern);
}
    
    #define NOMINMAX
#include 'Windows.h' // for HANDLE
    
        typedef unsigned int INDEXTYPE; // don't use size_t, as this saves HUGE amounts of RAM
    std::vector<INDEXTYPE> map;     // [t] -> t' indices in randomized order
    size_t currentseed;             // seed for current sequence
    size_t randomizationrange;      // t - randomizationrange/2 <= t' < t + randomizationrange/2 (we support this to enable swapping)
                                    // special values (randomizeDisable)
    void Invalidate()
    {
        currentseed = (size_t) -1;
    }
    
            // add to set
        let wasAdded = AddNodeToNetIfNotYet(node, /*makeUniqueName=*/ true);
        if (!wasAdded) // node already there (above will fail if there is a different node with the same name)
            continue;
    
                    ExtractSampleSequence(firstSeq, columnIndices, squashInputs, tokensToIgnore, firstSeqVec);
                ExtractSampleSequence(secondSeq, columnIndices, squashInputs, tokensToIgnore, secondSeqVec);
    
    template<class ElemType>
OptimizedRNNStackNode<ElemType>::OptimizedRNNStackNode(DEVICEID_TYPE deviceId, const wstring& name)
    : Base(deviceId, name),
    m_rnnAttributes(0, 0, 0, L'lstm', -1),
    m_BackwardDataCalledYet(false)
{
}
    
    void Assembler::stdx(const Reg64& rt, MemoryRef m) {
  assertx(!m.r.disp);  // doesn't support immediate displacement
  EmitXForm(31, rn(rt), rn(m.r.base), rn(m.r.index), 149);
}
    
    APCCollection::~APCCollection() {
  // Zero for size is correct, because when this APCCollection was unreferenced
  // it already included the size of the inner handle.
  m_arrayHandle->unreferenceRoot(0);
}
    
    struct DataStreamWrapper final : Stream::Wrapper {
  DataStreamWrapper() {
    m_isLocal = true;
  }
    }
    
    
    {}
    
    template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done) {
  if (LIKELY(map.numSubMaps() == 1) ||
      done.load(std::memory_order_relaxed) ||
      done.exchange(true, std::memory_order_relaxed)) {
    return;
  }
    }
    
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
    
    namespace HPHP {
    }
    
    #include 'hphp/runtime/base/plain-file.h'