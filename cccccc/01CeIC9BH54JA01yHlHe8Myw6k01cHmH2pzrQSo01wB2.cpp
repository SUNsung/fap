
        
        namespace internal {
    }
    
      // D'tor
  virtual ~UnitTest();
    
    
    {  static const bool value =
      sizeof(Helper(ImplicitlyConvertible::MakeFrom())) == 1;
# pragma warning(pop)           // Restores the warning state.
#elif defined(__BORLANDC__)
  // C++Builder cannot use member overload resolution during template
  // instantiation.  The simplest workaround is to use its C++0x type traits
  // functions (C++Builder 2009 and above only).
  static const bool value = __is_convertible(From, To);
#else
  static const bool value =
      sizeof(Helper(ImplicitlyConvertible::MakeFrom())) == 1;
#endif  // _MSV_VER
};
template <typename From, typename To>
const bool ImplicitlyConvertible<From, To>::value;
    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
    
    {  return clone;
}
    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
    /*! \brief typedef the factory function of operator property */
typedef std::function<OperatorProperty *()> OperatorPropertyFactory;
/*!
 * \brief Registry entry for OperatorProperty factory functions.
 */
struct OperatorPropertyReg
    : public dmlc::FunctionRegEntryBase<OperatorPropertyReg,
                                        OperatorPropertyFactory> {
  /*!
   * \brief Set key_var_num_args
   *  When this is set, the API caller is required to pass in a
   *  argument with key=key_num_args.c_str(), and value=num_args.
   *  num_args is number of positional argument when calling the function.
   *
   *  This is used to pass in length of positional arguments
   *  for operators that can take variable length of input.
   *  Most operators do not need to set this property.
   *
   * \param key the key name to be set
   */
  inline OperatorPropertyReg& set_key_var_num_args(const std::string &key) {  // NOLINT(*)
    this->key_var_num_args = key;
    return *this;
  }
  /*!
   * \brief Check if TypeString of the type matches the registered name
   */
  inline OperatorPropertyReg& check_name() {
    OperatorProperty *p = this->body();
    std::string type = p->TypeString();
    delete p;
    CHECK_EQ(this->name, type)
        << 'Register Name and TypeString mismatch, name=\'' << this->name << '\','
        << ' but TypeString=\'' << type <<'\'';
    return *this;
  }
    }
    
    #include <caffe/proto/caffe.pb.h>
#include <dmlc/parameter.h>
#include <dmlc/base.h>
#include <dmlc/json.h>
#include <dmlc/logging.h>
#include <dmlc/type_traits.h>
#include <google/protobuf/message.h>
#include <google/protobuf/text_format.h>
    
      virtual void Backward(const OpContext &ctx,
                        const std::vector<TBlob> &out_grad,
                        const std::vector<TBlob> &in_data,
                        const std::vector<TBlob> &out_data,
                        const std::vector<OpReqType> &req,
                        const std::vector<TBlob> &in_grad,
                        const std::vector<TBlob> &aux_args) {
    // Set mode before backward
    caffe::CaffeMode::SetMode<xpu>();
    using namespace mshadow;
    using namespace mshadow::expr;
    CHECK_EQ(out_grad.size(), param_.num_out);
    for (int i = 0; i < param_.num_data; ++i)
      CHECK(req[i] != kAddTo) << 'caffe doesn't accm diff on bottom data';
    CHECK(in_data.size() == param_.num_data);
    }
    
        for (int i = 0; i < param_.num_data; ++i) {
      TShape tshape = (*in_shape)[i];
      if (tshape.ndim() == 0) return false;
      auto blob_ptr = new Blob<float>();
      blob_ptr->Reshape(caffe::TShape2Vector(tshape));
      bot_blobs.push_back(blob_ptr);
    }
    
    namespace mxnet {
namespace engine {
/*!
 * \brief ThreadedEngine using global thread pool across all devices.
 * The policy of this Engine:
 *  - Execute Async operation immediately if pushed from Pusher.
 *  - Use a common thread pool for normal operations on all devices.
 *  - Use special thread pool for copy operations.
 */
class ThreadedEnginePooled : public ThreadedEngine {
 public:
  ThreadedEnginePooled() {
    this->Start();
  }
    }
    }
    }
    
    class TBlobContainer : public TBlob {
 public:
  TBlobContainer(void)
    : TBlob(), tensor_container_(nullptr) {}
  ~TBlobContainer() {
    if (tensor_container_) {
      release();
    }
  }
  void resize(const TShape &shape, int type_flag) {
    if (tensor_container_) {
      CHECK_EQ(this->type_flag_, type_flag);
      this->shape_ = shape;
      resize();
    } else {
      this->type_flag_ = type_flag;
      this->shape_ = shape;
      create();
    }
  }
    }
    
      std::chrono::seconds timeout_;
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    #include 'DHTTask.h'
#include 'Logger.h'
#include 'LogFactory.h'
#include 'a2functional.h'
#include 'fmt.h'
    
    void DHTTaskFactoryImpl::setRoutingTable(DHTRoutingTable* routingTable)
{
  routingTable_ = routingTable;
}
    
      DHTTaskExecutor immediateTaskQueue_;
    
      const uint64_t num_threads_;
  uint64_t num_initialized_;
  bool start_;
  uint64_t num_done_;
    
      // Need to refill more than one interval. Need to sleep longer. Check
  // whether expiration will hit
    
      auto delay_token_2 = controller.GetDelayToken(10000000u);
  // Rate reset after changing the token.
  ASSERT_EQ(static_cast<uint64_t>(2000000),
            controller.GetDelay(&env, 20000000u));
    
    #include 'rocksdb/cache.h'
#include 'rocksdb/compaction_filter.h'
#include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/table.h'
#include 'rocksdb/utilities/options_util.h'
    
      ////////////////////////////////////////////////////////
  //
  // 'Repeatable Read' (Snapshot Isolation) Example
  //   -- Using a single Snapshot
  //
  ////////////////////////////////////////////////////////
    
    // Take a default BlockBasedTableOptions 'table_options' in addition to a
// map 'opts_map' of option name to option value to construct the new
// BlockBasedTableOptions 'new_table_options'.
//
// Below are the instructions of how to config some non-primitive-typed
// options in BlockBasedTableOptions:
//
// * filter_policy:
//   We currently only support the following FilterPolicy in the convenience
//   functions:
//   - BloomFilter: use 'bloomfilter:[bits_per_key]:[use_block_based_builder]'
//     to specify BloomFilter.  The above string is equivalent to calling
//     NewBloomFilterPolicy(bits_per_key, use_block_based_builder).
//     [Example]:
//     - Pass {'filter_policy', 'bloomfilter:4:true'} in
//       GetBlockBasedTableOptionsFromMap to use a BloomFilter with 4-bits
//       per key and use_block_based_builder enabled.
//
// * block_cache / block_cache_compressed:
//   We currently only support LRU cache in the GetOptions API.  The LRU
//   cache can be set by directly specifying its size.
//   [Example]:
//   - Passing {'block_cache', '1M'} in GetBlockBasedTableOptionsFromMap is
//     equivalent to setting block_cache using NewLRUCache(1024 * 1024).
//
// @param table_options the default options of the output 'new_table_options'.
// @param opts_map an option name to value map for specifying how
//     'new_table_options' should be set.
// @param new_table_options the resulting options based on 'table_options'
//     with the change specified in 'opts_map'.
// @param input_strings_escaped when set to true, each escaped characters
//     prefixed by '\' in the values of the opts_map will be further converted
//     back to the raw string before assigning to the associated options.
// @param ignore_unknown_options when set to true, unknown options are ignored
//     instead of resulting in an unknown-option error.
// @return Status::OK() on success.  Otherwise, a non-ok status indicating
//     error will be returned, and 'new_table_options' will be set to
//     'table_options'.
Status GetBlockBasedTableOptionsFromMap(
    const BlockBasedTableOptions& table_options,
    const std::unordered_map<std::string, std::string>& opts_map,
    BlockBasedTableOptions* new_table_options,
    bool input_strings_escaped = false, bool ignore_unknown_options = false);
    
    
    {
    {}  // namespace experimental
}  // namespace rocksdb
