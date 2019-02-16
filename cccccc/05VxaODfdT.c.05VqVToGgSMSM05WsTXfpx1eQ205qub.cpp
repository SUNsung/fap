
        
        // Returns the incoming data size from the grpc call final info.
uint64_t GetIncomingDataSize(const grpc_call_final_info* final_info);
    
    // server hour
const ViewDescriptor& ServerSentBytesPerRpcHour() {
  const static ViewDescriptor descriptor =
      HourDescriptor()
          .set_name('grpc.io/server/sent_bytes_per_rpc/hour')
          .set_measure(kRpcServerSentBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
    #endif  // GRPC_INTERNAL_CPP_DYNAMIC_THREAD_POOL_H

    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
      void showBuckets() const;
    
    #include 'common.h'
    
    void DHTTaskFactoryImpl::setMessageDispatcher(DHTMessageDispatcher* dispatcher)
{
  dispatcher_ = dispatcher;
}
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    #include <folly/Benchmark.h>
#include <folly/FileUtil.h>
#include <folly/init/Init.h>
#include <folly/json.h>
    
    TEST(StaticTracepoint, TestSemaphoreLocal) {
  manyArgTypesTestFunc();
    }
    
      /**
   * Returns a random uint64_t
   */
  static uint64_t rand64() {
    return rand64(ThreadLocalPRNG());
  }
    
    #pragma once
    
    // Some utility routines relating to unicode.
    
    /**
 * Helper functions for compression codecs.
 */
namespace folly {
namespace io {
namespace compression {
namespace detail {
    }
    }
    }
    }
    
    
    {    return newptr;
  }
  void init() {
    PackedPtr data;
    data.init();
    ptr_.store(data);
  }
    
    namespace folly {
    }