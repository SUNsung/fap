
        
        ChannelCredentials::~ChannelCredentials() {}
    
    MeasureInt64 RpcServerSentMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcServerSentMessagesPerRpcMeasureName,
                             'Number of messages sent per RPC', kCount);
  return measure;
}
    
    const ViewDescriptor& ClientCompletedRpcsMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/client/completed_rpcs/minute')
          .set_measure(kRpcClientRoundtripLatencyMeasureName)
          .set_aggregation(Aggregation::Count())
          .add_column(ClientMethodTagKey())
          .add_column(ClientStatusTagKey());
  return descriptor;
}
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetString(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    
    {  void ThreadFunc();
  static void ReapThreads(std::list<DynamicThread*>* tlist);
};
    
    #ifndef GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
#define GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
    
    using namespace Microsoft::MSR::CNTK;
    
        void ProgressWriter::UpdateTraining(size_t samples, const ValuePtr& accumulatedLoss,
                                        const ValuePtr& accumulatedMetric)
    {
        m_training->Update(samples, accumulatedLoss, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> aggregateLoss, std::pair<double, double> aggregateMetric)
            {
                OnWriteTrainingUpdate(samples, updates, aggregateLoss, aggregateMetric);
            });
        OnTrainingUpdateEnd();
    }
    
    
    {
    {    private:
        static bool IsNativeUDF(const Dictionary& dict);
    };
}

    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }