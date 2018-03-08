
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Runs the optimized version of the graph on the cluster, measure
  // the runtimes of each operation, and annotated the CostGraphDef
  // with the corresponding measurements.
  // Returns the average latency for the whole graph.
  Status PredictCosts(const GraphDef& optimized_graph, CostGraphDef* cost_graph,
                      Costs* overall_cost) const override;
    
    #ifndef TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_
#define TENSORFLOW_KERNELS_SPARSE_TENSOR_DENSE_ADD_OP_H_
    
    
    {  int argc = argv.size();
  exec_argv_ = new char*[argc + 1];
  for (int i = 0; i < argc; i++) {
    exec_argv_[i] = strdup(argv[i].c_str());
    if (exec_argv_[i] == nullptr) {
      LOG(FATAL) << 'SetProgram failed to allocate command argument.';
      return;
    }
  }
  exec_argv_[argc] = nullptr;
}
    
      bool operator==(const PluginConfig& rhs) const;
    
    std::ostream& operator<<(std::ostream& out,
                         const VersionedComputationHandle& versioned_handle) {
  out << versioned_handle.ToString();
  return out;
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    //////////////////////////////////////////////////////////////////////
    
    #include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/datetime.h'
#include 'hphp/runtime/base/resource-data.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/util/timer.h'
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
      /* encoding */
  if (!encoding.empty()) {
    string.no_encoding = mbfl_name2no_encoding(encoding.data());
    if (string.no_encoding == mbfl_no_encoding_invalid) {
      raise_warning('Unknown encoding \'%s\'', encoding.data());
      return false;
    }
  }
    
      if (root % 2 == 0 && mpz_sgn(gmpData) < 0) {
    mpz_clear(gmpData);
    raise_warning(cs_GMP_ERROR_EVEN_ROOT_NEGATIVE_NUMBER, 'gmp_rootrem');
    return false;
  }
    
    #include 'hphp/runtime/vm/jit/containers.h'
#include 'hphp/runtime/vm/jit/prof-data.h'
#include 'hphp/runtime/vm/jit/timer.h'
#include 'hphp/runtime/vm/jit/vasm.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-print.h'
#include 'hphp/runtime/vm/jit/vasm-text.h'
#include 'hphp/runtime/vm/jit/vasm-unit.h'
#include 'hphp/runtime/vm/jit/vasm-visit.h'
    
    PageletTransport::PageletTransport(
    const String& url, const Array& headers, const String& postData,
    const String& remoteHost, const set<std::string> &rfc1867UploadedFiles,
    const Array& files, int timeoutSeconds)
    : m_refCount(0),
      m_timeoutSeconds(timeoutSeconds),
      m_done(false),
      m_code(0),
      m_event(nullptr) {
    }
    
      /**
   * Create a new RequestHandler.
   */
  std::unique_ptr<RequestHandler> createRequestHandler() {
    return m_handlerFactory();
  }
    
    #include <cstdint>
#include <vector>
#include <numa.h>
    
          if (bounded && val.caseIdx == iv.size() - 2) {
        // If we haven't checked bounds yet and this is the 'first non-zero'
        // case, we have to skip it. This case is only hit for non-Int input
        // types anyway.
        continue;
      }
    
    /**
 * @brief Superclass for the pluggable logging facilities.
 *
 * In order to make the logging of osquery results and inline debug, warning,
 * error status easy to integrate into your environment, we take advantage of
 * a plugin interface which allows you to integrate osquery with your internal
 * large-scale logging infrastructure.
 *
 * You may use flume, splunk, syslog, scribe, etc. In order to use your
 * specific upstream logging systems, one simply needs to create a custom
 * subclass of LoggerPlugin. That subclass should at least implement the
 * LoggerPlugin::logString method.
 *
 * Consider the following example:
 *
 * @code{.cpp}
 *   class TestLoggerPlugin : public LoggerPlugin {
 *    public:
 *     osquery::Status logString(const std::string& s) {
 *       int i = 0;
 *       internal::logStringToFlume(s, i);
 *       std::string message;
 *       if (i == 0) {
 *         message = 'OK';
 *       } else {
 *         message = 'Failed';
 *       }
 *       return osquery::Status(i, message);
 *     }
 *  };
 *
 *  REGISTER(TestLoggerPlugin, 'logger', 'test');
 * @endcode
 */
class LoggerPlugin : public Plugin {
 public:
  /// The LoggerPlugin PluginRequest action router.
  Status call(const PluginRequest& request, PluginResponse& response) override;
    }
    
    class DropPrivileges : private boost::noncopyable {
 public:
  /// Make call sites use 'dropTo' booleans to improve the UI.
  static DropPrivilegesRef get() {
    DropPrivilegesRef handle = DropPrivilegesRef(new DropPrivileges());
    return handle;
  }
    }
    
    static int subscribe_to_event(osquery_event_t event, int subscribe) {
  if (osquery.buffer == NULL) {
    return -EINVAL;
  }
  if (!(OSQUERY_NULL_EVENT < event && event < OSQUERY_NUM_EVENTS)) {
    return -EINVAL;
  }
  if (!osquery_publishers[event]) {
    return -EINVAL;
  }
    }
    
    #include 'osquery/tests/test_util.h'
    
        std::string arg_interval('--interval');
    arguments.push_back(arg_interval.c_str());
    arguments.push_back(extensions_interval.c_str());
    arguments.push_back(nullptr);
    
    #include <string>
    
    
    {  // Returns a heuristic cutoff on block errors in the sense that we won't
  // consider distortions where a block error is greater than this.
  virtual float BlockErrorLimit() const = 0;
  // Given the search direction (+1 for upwards and -1 for downwards) and the
  // current distance map, fills in *block_weight image with the relative block
  // error adjustment weights.
  // The target_mul param has the same semantics as in DistanceOK().
  // Note that this is essentially a static function in the sense that it does
  // not depend on the last Compare() call.
  virtual void ComputeBlockErrorAdjustmentWeights(
      int direction, int max_block_dist, double target_mul, int factor_x,
      int factor_y, const std::vector<float>& distmap,
      std::vector<float>* block_weight) = 0;
};
    
    void Erode(int w, int h, std::vector<bool>* image) {
  std::vector<bool> temp = *image;
  for (int y = 1; y + 1 < h; y++) {
    for (int x = 1; x + 1 < w; x++) {
      size_t index = y * w + x;
      if (!(temp[index] && temp[index - 1] && temp[index + 1]
          && temp[index - w] && temp[index + w])) {
        (*image)[index] = 0;
      }
    }
  }
}
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    #include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
    
      int width() const { return width_; }
  int height() const { return height_; }
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
    namespace mars {
namespace baseevent {
    }
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #endif
    
        void Detach(const char* _key) {
        __OnDetach(_key);
        m_variablemap.erase(_key);
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
bool TSpy::SpyHookLogFunc(XLoggerInfo_t& _info, std::string& _log)
{
    __attribute__((unused)) int i = 0;
    return true;
}
    
            if (JNI_OK == status_) {
            break;
        }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    TEST(MemoryIdler, futexWaitAwokenEarly) {
  StrictMock<Futex<MockAtom>> fut;
  auto clock = MockClock::setup();
  auto begin = MockClock::time_point(std::chrono::seconds(100));
  auto idleTimeout = MemoryIdler::defaultIdleTimeout.load();
    }
    
     private:
  // Uses SFINAE to detect and call
  // std::enable_shared_from_this<T>::weak_from_this() if available. Falls
  // back to std::enable_shared_from_this<T>::shared_from_this() otherwise.
  template <typename U>
  auto weak_from_this_(std::enable_shared_from_this<U>* base_ptr)
  noexcept -> decltype(base_ptr->weak_from_this()) {
    return base_ptr->weak_from_this();
  }
    
    TEST(to_weak_ptr, example) {
  auto s = std::make_shared<int>(17);
  EXPECT_EQ(1, s.use_count());
  EXPECT_EQ(2, (to_weak_ptr(s).lock(), s.use_count())) << 'lvalue';
  EXPECT_EQ(3, (to_weak_ptr(decltype(s)(s)).lock(), s.use_count())) << 'rvalue';
}
    
      template <typename Fn>
  static auto makeFailsafe(std::false_type, Fn* fn) noexcept
      -> ScopeGuardImpl<decltype(std::ref(*fn))> {
    return ScopeGuardImpl<decltype(std::ref(*fn))>{std::ref(*fn)};
  }
    
    
    {  EXPECT_EQ(dynamic(dynamic::object
    ('nested', dynamic::object(coerce_fn(good_k), parse_error))
    ('key_errors', dynamic::object(coerce_fn(missing_k), key_error))
    ('value', d)
  ), errors);
}
    
    
    {  // Check that global flags can still be given after the command
  EXPECT_EQ(
      'running foo\n'
      'foo global-foo 43\n'
      'foo local-foo 44\n'
      'foo arg a\n'
      'foo arg b\n',
      callHelper({'foo', '--global-foo', '43', '--local-foo', '44',
                 'a', 'b'}));
}