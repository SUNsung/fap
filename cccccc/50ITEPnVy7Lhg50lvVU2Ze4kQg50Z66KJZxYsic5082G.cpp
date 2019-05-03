
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Creates a numpy array in 'ret' and copies the content of tensor 't'
// into 'ret'.
Status ConvertTensorToNdarray(const Tensor& t, PyObject** ret);
    
    Safe_TFE_TensorHandlePtr make_safe(TFE_TensorHandle* handle) {
  return Safe_TFE_TensorHandlePtr(handle);
}
    
      const tensorflow::OpRegistrationData* op_reg_data;
  auto status =
      tensorflow::OpRegistry::Global()->LookUp(node_def.op(), &op_reg_data);
  if (!status.ok()) {
    LOG(WARNING) << 'Op ' << node_def.op() << ' not found: ' << status;
    return '';
  }
  AddDefaultsToNodeDef(op_reg_data->op_def, &node_def);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    { private:
  union {
    ElemT value_;
    DeviceMemory<ElemT> pointer_;
  };
  bool is_pointer_;
};
    
      InternalExtensionInfo(const InternalExtensionInfo&);
  InternalExtensionInfo& operator=(const InternalExtensionInfo&);
  InternalExtensionInfo() : name(), version(), sdk_version(), min_sdk_version() {
  }
    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    namespace osquery {
namespace table_tests {
    }
    }
    
    // A simple compaction algorithm that always compacts everything
// to the highest level whenever possible.
class FullCompactor : public Compactor {
 public:
  explicit FullCompactor(const Options options) : options_(options) {
    compact_options_.compression = options_.compression;
    compact_options_.output_file_size_limit =
        options_.target_file_size_base;
  }
    }
    
      // Write a key OUTSIDE of transaction
  db->Put(write_options, 'abc', 'xyz');
    
    namespace {
// A dummy compaction filter
class DummyCompactionFilter : public CompactionFilter {
 public:
  virtual ~DummyCompactionFilter() {}
  virtual bool Filter(int level, const Slice& key, const Slice& existing_value,
                      std::string* new_value, bool* value_changed) const {
    return false;
  }
  virtual const char* Name() const { return 'DummyCompactionFilter'; }
};
    }
    
    using namespace rocksdb;
    
    namespace rocksdb {
    }
    
      // Compress blocks using the specified compression algorithm.  This
  // parameter can be changed dynamically.
  //
  // Default: kSnappyCompression, which gives lightweight but fast
  // compression.
  //
  // Typical speeds of kSnappyCompression on an Intel(R) Core(TM)2 2.4GHz:
  //    ~200-500MB/s compression
  //    ~400-800MB/s decompression
  // Note that these speeds are significantly faster than most
  // persistent storage speeds, and therefore it is typically never
  // worth switching to kNoCompression.  Even if the input data is
  // incompressible, the kSnappyCompression implementation will
  // efficiently detect that and will switch to uncompressed mode.
  CompressionType compression;
    
    #endif  // ROCKSDB_LITE

    
    Speed* Speed::create(ActionInterval* action, float speed)
{
    Speed *ret = new (std::nothrow) Speed();
    if (ret && ret->initWithAction(action, speed))
    {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
    
    void OrbitCamera::startWithTarget(Node *target)
{
    ActionCamera::startWithTarget(target);
    }
    
    
    {    return action;
}
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual FlipX* reverse() const override;
    virtual FlipX* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    FlipX() :_flipX(false) {}
    virtual ~FlipX() {}
    
        /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionManager();