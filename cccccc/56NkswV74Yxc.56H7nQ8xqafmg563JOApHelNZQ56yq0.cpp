
        
        #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    
    {
    {
    {}  // namespace
}  // namespace testing
}  // namespace grpc
    
    void grpc_set_default_iomgr_platform() {
  grpc_set_tcp_client_impl(&grpc_windows_tcp_client_vtable);
  grpc_set_tcp_server_impl(&grpc_windows_tcp_server_vtable);
  grpc_set_timer_impl(&grpc_generic_timer_vtable);
  grpc_set_pollset_vtable(&grpc_windows_pollset_vtable);
  grpc_set_pollset_set_vtable(&grpc_windows_pollset_set_vtable);
  grpc_set_resolver_impl(&grpc_windows_resolver_vtable);
  grpc_set_iomgr_platform_vtable(&vtable);
}
    
      ac = (async_connect*)gpr_malloc(sizeof(async_connect));
  ac->on_done = on_done;
  ac->socket = socket;
  gpr_mu_init(&ac->mu);
  ac->refs = 2;
  ac->addr_name = grpc_sockaddr_to_uri(addr);
  ac->endpoint = endpoint;
  ac->channel_args = grpc_channel_args_copy(channel_args);
  GRPC_CLOSURE_INIT(&ac->on_connect, on_connect, ac, grpc_schedule_on_exec_ctx);
    
    
    {  value = GPR_GLOBAL_CONFIG_GET(string_var);
  EXPECT_EQ(0, strcmp(value.get(), 'Test'));
}
    
    
    {    CompareType(method_desc->input_type()->full_name());
    CompareType(method_desc->output_type()->full_name());
  }
    
    
    {} // namespace aria2
    
    std::shared_ptr<DHTNode> DHTRoutingTable::getNode(const unsigned char* nodeID,
                                                  const std::string& ipaddr,
                                                  uint16_t port) const
{
  std::shared_ptr<DHTBucket> bucket = getBucketFor(nodeID);
  return bucket->getNode(nodeID, ipaddr, port);
}
    
    #endif // D_DHT_TASK_H

    
    
    {  size_t getQueueSize() const { return queue_.size(); }
};
    
    void DHTTaskFactoryImpl::setCommonProperty(
    const std::shared_ptr<DHTAbstractTask>& task)
{
  task->setRoutingTable(routingTable_);
  task->setMessageDispatcher(dispatcher_);
  task->setMessageFactory(factory_);
  task->setTaskQueue(taskQueue_);
  task->setLocalNode(localNode_);
}
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
    #include 'util.h'
#include 'bittorrent_helper.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'MessageDigest.h'
#include 'message_digest_helper.h'
#include 'fmt.h'
    
    namespace aria2 {
    }
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    int main()
{
    // ============
    // object types
    // ============
    }
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    TEST_F(DistanceApproachIPOPTInterfaceTest, eval_f) {
  int n = 1274;
  double obj_value = 0.0;
  double x[1274];
  std::fill_n(x, n, 1.2);
  bool res = ptop_->eval_f(n, x, true, obj_value);
  EXPECT_DOUBLE_EQ(obj_value, 1443.3600000000008) << 'eval_f: ' << obj_value;
  EXPECT_TRUE(res);
}
    
    class StageApproachingParkingSpot : public Stage {
 public:
  explicit StageApproachingParkingSpot(
      const ScenarioConfig::StageConfig& config)
      : Stage(config) {}
    }
    
    class PullOverScenarioTest : public ::testing::Test {
 public:
  virtual void SetUp() {}
    }
    
    #include 'gtest/gtest.h'
#include 'modules/planning/proto/planning_config.pb.h'
    
     private:
  void WriteOutputJpgFile(const std::vector<uint8_t>& jpeg_buffer,
                          const std::string& output_jpg_file) const;
  std::string GetOutputFile(const int frame_num) const;
    
    
    {  EXPECT_EQ(expect, real);
}
    
    #include 'cyber/croutine/croutine.h'
#include 'cyber/proto/choreography_conf.pb.h'
#include 'cyber/scheduler/scheduler.h'
    
        bool Has(K key) {
      Entry *m_target = head_->next.load(std::memory_order_acquire);
      while (Entry *target = m_target) {
        if (target->key < key) {
          m_target = target->next.load(std::memory_order_acquire);
          continue;
        } else {
          return target->key == key;
        }
      }
      return false;
    }
    
        int ret = 0;
    ret = fscanf(fp, '%254s %f %f %lf %f %f %f %f %f %f %f %lf %lf %lf %f %f',
                 type, &trash, &trash, &obj->camera_supplement.alpha, &x1, &y1,
                 &x2, &y2, &obj->size[2], &obj->size[1], &obj->size[0],
                 &obj->center[0], &obj->center[1], &obj->center[2], &obj->theta,
                 &score);
    AINFO << 'fscanf return: ' << ret;
    if (FLAGS_dist_type == 'H-from-h') {
      obj->size[0] = static_cast<float>(obj->center[2]);
    } else if (FLAGS_dist_type == 'H-on-h') {
      obj->size[0] = static_cast<float>(obj->center[2]) * (y2 - y1);
    }
    obj->camera_supplement.box.xmin = std::max<float>(x1, 0);
    obj->camera_supplement.box.ymin = std::max<float>(y1, 0);
    obj->camera_supplement.box.xmax =
        std::min<float>(x2, static_cast<float>(FLAGS_width));
    obj->camera_supplement.box.ymax =
        std::min<float>(y2, static_cast<float>(FLAGS_height));
    obj->camera_supplement.area_id = 5;
    
    namespace osquery {
    }
    
    /**
 * @brief Returns a pointer of where the requested symbol exists
 */
void* platformModuleGetSymbol(ModuleHandle module, const std::string& symbol);
    
    // clang-format off
#define WIN32_NO_STATUS
#include <Windows.h>
#undef WIN32_NO_STATUS
#include <ntstatus.h>
// clang-format on
#include <iomanip>
#include <psapi.h>
#include <stdlib.h>
#include <tlhelp32.h>
#include <winternl.h>
    
      /*
   * @brief a variable tracking all of the paths we attempt to carve
   *
   * This is a globbed set of file paths that we're expecting will be
   * carved.
   */
  std::set<boost::filesystem::path> carvePaths_;
    
    
    {  rocksdb::Options options = getOptions();
  auto db_path = boost::filesystem::path(path_).make_preferred();
  auto destroy_status = rocksdb::DestroyDB(db_path.string(), options);
  if (!destroy_status.ok()) {
    return createError(DatabaseError::FailToDestroyDB, 'Fail to destroy db: ')
           << destroy_status.ToString();
  }
  return Success();
}
    
     private:
  rocksdb::Options getOptions();
  std::vector<rocksdb::ColumnFamilyDescriptor> createDefaultColumnFamilies(
      const rocksdb::Options& options);
  ExpectedSuccess<DatabaseError> openInternal(
      const rocksdb::Options& options, const boost::filesystem::path& path);
  Expected<std::string, DatabaseError> getRawBytesInternal(
      Handle* handle, const std::string& key);
  ExpectedSuccess<DatabaseError> putRawBytesInternal(Handle* handle,
                                                     const std::string& key,
                                                     const std::string& value);
  ExpectedSuccess<DatabaseError> checkDbConnection();
  Expected<std::shared_ptr<Handle>, DatabaseError> getHandle(
      const std::string& domain);
    
    
    {} // namespace osquery

    
    int Flag::createAlias(const std::string& alias, const FlagDetail& flag) {
  instance().aliases_.insert(std::make_pair(alias, flag));
  return 0;
}
    
    
    {    bzero(data, 256);
    ret = p.read(&p, data, 255);
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world\n你好中国。\n', data), 0);
}

    
        coro_test({
        make_pair([](void *arg)
        {
            auto chan = (Channel *) arg;
    }
    }
    
    
    {
    {
    {    inline Coroutine* pop_coroutine(enum opcode type)
    {
        Coroutine* co;
        if (type == PRODUCER)
        {
            co = producer_queue.front();
            producer_queue.pop_front();
            swTraceLog(SW_TRACE_CHANNEL, 'resume producer cid=%ld', co->get_cid());
        }
        else // if (type == CONSUMER)
        {
            co = consumer_queue.front();
            consumer_queue.pop_front();
            swTraceLog(SW_TRACE_CHANNEL, 'resume consumer cid=%ld', co->get_cid());
        }
        return co;
    }
};
//-------------------------------------------------------------------------------
}}

    
    
    {    ASSERT_GT(cid, 0);
    ASSERT_EQ(cid, _cid);
}
    
    namespace swoole
{
/**
 * This cache isn't thread safe
 */
class LRUCache
{
private:
    typedef std::pair<time_t, std::shared_ptr<void>> cache_node_t;
    typedef std::list<std::pair<std::string, cache_node_t>> cache_list_t;
    }
    }
    
            execute_data = prev = l;