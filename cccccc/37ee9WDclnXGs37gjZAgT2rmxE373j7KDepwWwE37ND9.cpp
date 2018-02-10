
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_

    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      ExpectSuccess(
      Builder().Input(FakeInput(1, DT_INT32)).Input(FakeInput(3, DT_INT32)),
      {DT_INT32, DT_INT32, DT_INT32, DT_INT32}, {}, R'proto(
      op: 'InPolymorphicTwice'
      input: ['a', 'b', 'b:1', 'b:2']
      attr { key: 'N' value { i: 1 } }
      attr { key: 'T' value { type: DT_INT32 } }
      attr { key: 'M' value { i: 3 } } )proto');
    
    #ifndef TENSORFLOW_PLATFORM_PREFETCH_H_
#define TENSORFLOW_PLATFORM_PREFETCH_H_
    
    
    {
    {    SetReaderFactory([this, compression_type, env]() {
      return new TFRecordReader(name(), compression_type, env);
    });
  }
};
    
    CV_EXPORTS Mat NormalizePixels(const Mat& imagePoints, const IntrinsicParams& param);
    
    #ifdef HAVE_CUDA
namespace
{
    size_t alignUpStep(size_t what, size_t alignment)
    {
        size_t alignMask = alignment - 1;
        size_t inverseAlignMask = ~alignMask;
        size_t res = (what + alignMask) & inverseAlignMask;
        return res;
    }
}
#endif
    
    
    {}
    
    template<class SerDe>
typename std::enable_if<SerDe::deserializing>::type
ArrayTypeTable::serde(SerDe& sd) {
  TRACE_SET_MOD(rat);
  uint32_t size;
  sd(size);
  FTRACE(1, 'ArrayTypeTable size = {}\n', size);
  decltype(m_arrTypes)(size).swap(m_arrTypes);
  for (auto i = uint32_t{0}; i < size; ++i) {
    m_arrTypes[i] = RepoAuthType::Array::deserialize(sd, *this);
    assert(m_arrTypes[i] != nullptr);
    assert(m_arrTypes[i]->id() == i);
    assert(check(m_arrTypes[i]));
    FTRACE(2, '  {} {}\n', i, show(*m_arrTypes[i]));
  }
}
    
    
    {}

    
    struct TimerName { const char* str; Timer::Name name; };
const TimerName s_names[] = {
# define TIMER_NAME(name) {#name, Timer::name},
  JIT_TIMERS
# undef TIMER_NAME
};
    
    bool Vunit::needsRegAlloc() const {
  if (next_vr > Vreg::V0) return true;
    }
    
      mpz_clear(gmpData);
    
    static Variant unserialize_with_no_notice(const String& str) {
  VariableUnserializer vu(str.data(), str.size(),
      VariableUnserializer::Type::Serialize, true);
  Variant v;
  try {
    v = vu.unserialize();
  } catch (ResourceExceededException &) {
    throw;
  } catch (Exception &e) {
    Logger::Error('unserialize(): %s', e.getMessage().c_str());
  }
  return v;
}
    
        (void) utimes(name, utsbuf); /* don't care if loses */
#elif defined(HAVE_UTIME_H) || defined(HAVE_SYS_UTIME_H)
    struct utimbuf  utbuf;
    
        // Emit conditional checks for all successors in this region, in descending
    // order of hotness. We rely on the region selector to decide which arcs
    // are appropriate to include in the region. Fall through to the
    // fully-generic JmpSwitchDest at the end if nothing matches.
    for (auto const& val : values) {
      auto targetOff = bcOff(env) + offsets[val.caseIdx];
      SrcKey sk(curSrcKey(env), targetOff);
      if (!env.irb->hasBlock(sk)) continue;
    }
    
    // Saves the COM marker segment as a string to *jpg.
bool ProcessCOM(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  std::string com_str(reinterpret_cast<const char*>(
      &data[*pos - 2]), marker_len);
  *pos += marker_len - 2;
  jpg->com_data.push_back(com_str);
  return true;
}
    
    #include 'guetzli/output_image.h'
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    #include 'mars/comm/xlogger/xlogger.h'
#include 'mars/comm/jni/util/scoped_jstring.h'
#include 'mars/comm/jni/util/var_cache.h'
#include 'mars/comm/jni/util/scope_jenv.h'
#include 'mars/comm/jni/util/comm_function.h'
    
    
    {    pclose(stream);
}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    using namespace v8;
    
    
int           XXH32_sizeofState();
XXH_errorcode XXH32_resetState(void* state, unsigned int seed);
    
    // Remove the first 'num' occurrences of value in (list: key).
//   : throws RedisListException
int RedisLists::RemoveFirst(const std::string& key, int32_t num,
                            const std::string& value) {
  // Ensure that the number is positive
  assert(num >= 0);
    }
    
      size_t CurrentSize() const {
    return cursize_;
  }
    
      if (left == right) {
    // In one of the two following cases:
    // (1) left is the first one of block_ids
    // (2) there is a gap of blocks between block of `left` and `left-1`.
    // we can further distinguish the case of key in the block or key not
    // existing, by comparing the target key and the key of the previous
    // block to the left of the block found.
    if (block_ids[left] > 0 &&
        (left == left_bound || block_ids[left - 1] != block_ids[left] - 1) &&
        CompareBlockKey(block_ids[left] - 1, target) > 0) {
      current_ = restarts_;
      return false;
    }
    }
    
    
    {};
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
    namespace rocksdb {
extern const uint64_t kCuckooTableMagicNumber;
    }