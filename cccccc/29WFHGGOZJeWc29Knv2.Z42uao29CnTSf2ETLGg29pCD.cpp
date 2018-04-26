
        
        namespace tensorflow {
    }
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
    #include 'tensorflow/core/lib/strings/strcat.h'
    
        const string file_format =
        str_util::Lowercase(file_format_tensor.scalar<string>()());
    const int32 samples_per_second =
        samples_per_second_tensor.scalar<int32>()();
    const int32 bits_per_second = bits_per_second_tensor.scalar<int32>()();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    
    {  auto const ret = make_map_array(
    s_sec, (int)tp.tv_sec,
    s_usec, (int)tp.tv_usec,
    s_minuteswest, (int)(-offset->offset / 60),
    s_dsttime, (int)offset->is_dst
  );
  timelib_time_offset_dtor(offset);
  return ret;
}
    
    TRACE_SET_MOD(jittime);
    
    
    {  numa_node_mask = folly::nextPowTwo(numa_num_nodes) - 1;
}
    
    namespace irgen {
    }
    
      DataBlock(DataBlock&& other) = default;
  DataBlock& operator=(DataBlock&& other) = default;
    
    namespace {
void freezeClusters(const TargetGraph& cg, std::vector<Cluster>& clusters) {
  uint32_t totalSize = 0;
  std::sort(clusters.begin(), clusters.end(), compareClustersDensity);
  for (auto& cluster : clusters) {
    uint32_t newSize = totalSize + cluster.size;
    if (newSize > kFrozenPages * kPageSize) break;
    cluster.frozen = true;
    totalSize = newSize;
    auto fid = cluster.targets[0];
    HFTRACE(1, 'freezing cluster for func %d, size = %u, samples = %u)\n',
            fid, cg.targets[fid].size, cg.targets[fid].samples);
  }
}
    }
    
    
void Instruction::SetImmPCOffsetTarget(Instruction* target,
                                       Instruction* from) {
  auto adjusted_target = !from ? target : target + (int64_t)(this - from);
  if (IsPCRelAddressing()) {
    SetPCRelImmTarget(adjusted_target);
  } else if (IsLoadOrStore()) {
    SetPCRelLoadStoreTarget(adjusted_target);
  } else {
    SetBranchImmTarget(adjusted_target);
  }
}
    
      if (::lseek(source_file, desc.m_start, SEEK_SET) < 0) {
    Logger::Error('dlopen_embedded_data: Unable to seek to section: %s',
                  folly::errnoStr(errno).c_str());
    return nullptr;
  }
    
    #endif //__cplusplus
    
    struct CurlShareResource : SweepableResourceData {
  DECLARE_RESOURCE_ALLOCATION(CurlShareResource)
  CLASSNAME_IS('curl_share')
  const String& o_getClassNameHook() const override { return classnameof(); }
  bool isInvalid() const override { return !m_share; }
    }
    
    
    {  auto const sync_sp = v.makeReg();
  v << lea{sp[cellsToBytes(extra->offset.offset)], sync_sp};
  emitEagerSyncPoint(v, inst->marker().fixupSk().pc(), rvmtl(), fp, sync_sp);
}
    
    ${Storage}::${Storage}(Context* context, ${THStorage}* storage):
    storage(storage), context(context) {}
    
      /// If a service includes a run loop it should check for interrupted.
  std::atomic<bool> interrupted_{false};
    
      /// The line of the file emitting the status log.
  size_t line;
    
      Status s;
  for (const auto& p : paths_) {
    s = carve.carve(fs::path(p));
    EXPECT_TRUE(s.ok());
  }
    
    /**
 * @brief Access the internal storage of the Decorator parser.
 *
 * The decoration set is a map of column name to value. It contains the opaque
 * set of decoration point results.
 *
 * Decorations are applied to log items before they are sent to the downstream
 * logging APIs: logString, logSnapshot, etc.
 *
 * @param results the output parameter to write decorations.
 */
void getDecorations(std::map<std::string, std::string>& results);
    
    void customDelete(OwnershipTestClass* p) {
  ++customDeleterCount;
  delete p;
}
    
    #pragma once
    
    TEST_F(OrderingTest, compare_not_equal_to) {
  compare_not_equal_to<OddCompare<int>> op;
  EXPECT_TRUE(op(3, 4));
  EXPECT_FALSE(op(3, 3));
  EXPECT_TRUE(op(4, 3));
}
    
    namespace folly {
namespace hazptr {
    }
    }
    
      enum class State {
    UNINITIALIZED,
    INITIALIZED,
    PENDING,
    COMPLETED,
    CANCELED,
  };
    
      /**
   * Get the maximum buffer size for this AsyncFileWriter, in bytes.
   */
  size_t getMaxBufferSize() const;
    
      std::shared_ptr<LogWriter> createWriter() override {
    // Get the output file to use
    if (path_.empty()) {
      throw std::invalid_argument('no path specified for file handler');
    }
    return fileWriterFactory_.createWriter(
        File{path_, O_WRONLY | O_APPEND | O_CREAT});
  }
    
    
    {} // namespace folly

    
    Value Node::getFlexBasis(void) const
{
    return Value::fromYGValue(YGNodeStyleGetFlexBasis(m_node));
}
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
    
    /**
 * A thread-local object is a 'global' object within a thread. This is useful
 * for writing apartment-threaded code, where nothing is actullay shared
 * between different threads (hence no locking) but those variables are not
 * on stack in local scope. To use it, just do something like this,
 *
 *   ThreadLocal<MyClass> static_object;
 *     static_object->data_ = ...;
 *     static_object->doSomething();
 *
 *   ThreadLocal<int> static_number;
 *     int value = *static_number;
 *
 * So, syntax-wise it's similar to pointers. T can be primitive types, and if
 * it's a class, there has to be a default constructor.
 */
template<typename T>
class ThreadLocal {
public:
  /**
   * Constructor that has to be called from a thread-neutral place.
   */
  ThreadLocal() :
    m_key(0),
    m_cleanup(OnThreadExit) {
    initialize();
  }
    }
    
    DEFINE_BOXED_PRIMITIVE(boolean, Boolean)
DEFINE_BOXED_PRIMITIVE(byte, Byte)
DEFINE_BOXED_PRIMITIVE(char, Character)
DEFINE_BOXED_PRIMITIVE(short, Short)
DEFINE_BOXED_PRIMITIVE(int, Integer)
DEFINE_BOXED_PRIMITIVE(long, Long)
DEFINE_BOXED_PRIMITIVE(float, Float)
DEFINE_BOXED_PRIMITIVE(double, Double)