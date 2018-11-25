
        
            assert(info.name.size() < (2 << 10) && 'name failed sanity check');
    
      while (!RawText.empty()) {
    size_t Pos = RawText.find_first_of('\n\r');
    if (Pos == StringRef::npos)
      Pos = RawText.size();
    }
    
        // Finish the first scheduled task.
    PidTaskPair P = std::move(ExecutingTasks.front());
    ExecutingTasks.pop();
    
    // stdarg.h types.
// Note: this does not catch va_list on platforms where va_list is an array.
// There's an explicit workaround in ImportType.cpp's VisitDecayedType for that.
MAP_STDLIB_TYPE('va_list', VaList, 0, 'CVaListPointer', false, DoNothing)
MAP_STDLIB_TYPE('__gnuc_va_list', VaList, 0, 'CVaListPointer', false, DoNothing)
MAP_STDLIB_TYPE('__va_list', VaList, 0, 'CVaListPointer', false, DoNothing)
    
    /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
      ~SecureAuthContext() override;
    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    
    {    buf[kVersionIdOffset] = kVersionId;
    buf[kServerElapsedTimeOffset] = kServerElapsedTimeField;
    absl::little_endian::Store64(&buf[kServerElapsedTimeOffset + kFieldIdSize],
                                 time);
    return kRpcServerStatsSize;
  }
    
    const ViewDescriptor& ServerSentMessagesPerRpcHour() {
  const static ViewDescriptor descriptor =
      HourDescriptor()
          .set_name('grpc.io/server/sent_messages_per_rpc/hour')
          .set_measure(kRpcServerSentMessagesPerRpcMeasureName)
          .set_aggregation(CountDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
      // implementation of ServerReflectionInfo(stream ServerReflectionRequest) rpc
  // in ServerReflection service
  Status ServerReflectionInfo(
      ServerContext* context,
      ServerReaderWriter<reflection::v1alpha::ServerReflectionResponse,
                         reflection::v1alpha::ServerReflectionRequest>* stream)
      override;
    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
    TEST_F(PacksTests, test_schedule) {
  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  // Expect a single query in the schedule since one query has an explicit
  // invalid/fake platform requirement.
  EXPECT_EQ(fpack.getSchedule().size(), 1U);
}
    
        std::string arg_interval('--interval');
    arguments.push_back(arg_interval.c_str());
    arguments.push_back(extensions_interval.c_str());
    arguments.push_back(nullptr);
    
    
    {  if (code != STILL_ACTIVE) {
    exitCode = code;
    return true;
  }
#else
  int status = 0;
  if (::waitpid(process.nativeHandle(), &status, 0) == -1) {
    return false;
  }
  if (WIFEXITED(status)) {
    exitCode = WEXITSTATUS(status);
    return true;
  }
#endif
  return false;
}
    
    static const size_t kINotifyMaxEvents = 512;
static const size_t kINotifyEventSize =
    sizeof(struct inotify_event) + (NAME_MAX + 1);
static const size_t kINotifyBufferSize =
    (kINotifyMaxEvents * kINotifyEventSize);
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    BenchmarkReporter::Run CreateRunReport(
    const benchmark::internal::Benchmark::Instance& b,
    const internal::ThreadManager::Result& results, size_t iters,
    double seconds) {
  // Create report about this benchmark run.
  BenchmarkReporter::Run report;
    }
    
    ConsoleReporter::OutputOptions GetOutputOptions(bool force_no_color = false);
    
    #define CHECK_EQ(a, b) CHECK((a) == (b))
#define CHECK_NE(a, b) CHECK((a) != (b))
#define CHECK_GE(a, b) CHECK((a) >= (b))
#define CHECK_LE(a, b) CHECK((a) <= (b))
#define CHECK_GT(a, b) CHECK((a) > (b))
#define CHECK_LT(a, b) CHECK((a) < (b))
    
    std::string FormatString(const char* msg, va_list args);
std::string FormatString(const char* msg, ...);
    
    // Return a vector containing the bigO and RMS information for the specified
// list of reports. If 'reports.size() < 2' an empty vector is returned.
std::vector<BenchmarkReporter::Run> ComputeBigO(
    const std::vector<BenchmarkReporter::Run>& reports);
    
    #include 'benchmark/benchmark.h'
#include 'internal_macros.h'
    
    void JSONReporter::PrintRunData(Run const& run) {
  std::string indent(6, ' ');
  std::ostream& out = GetOutputStream();
  out << indent << FormatKV('name', run.benchmark_name) << ',\n';
  if (run.error_occurred) {
    out << indent << FormatKV('error_occurred', run.error_occurred) << ',\n';
    out << indent << FormatKV('error_message', run.error_message) << ',\n';
  }
  if (!run.report_big_o && !run.report_rms) {
    out << indent << FormatKV('iterations', run.iterations) << ',\n';
    out << indent
        << FormatKV('real_time', run.GetAdjustedRealTime())
        << ',\n';
    out << indent
        << FormatKV('cpu_time', run.GetAdjustedCPUTime());
    out << ',\n'
        << indent << FormatKV('time_unit', GetTimeUnitString(run.time_unit));
  } else if (run.report_big_o) {
    out << indent
        << FormatKV('cpu_coefficient', run.GetAdjustedCPUTime())
        << ',\n';
    out << indent
        << FormatKV('real_coefficient', run.GetAdjustedRealTime())
        << ',\n';
    out << indent << FormatKV('big_o', GetBigOString(run.complexity)) << ',\n';
    out << indent << FormatKV('time_unit', GetTimeUnitString(run.time_unit));
  } else if (run.report_rms) {
    out << indent
        << FormatKV('rms', run.GetAdjustedCPUTime());
  }
  if (run.bytes_per_second > 0.0) {
    out << ',\n'
        << indent
        << FormatKV('bytes_per_second', run.bytes_per_second);
  }
  if (run.items_per_second > 0.0) {
    out << ',\n'
        << indent
        << FormatKV('items_per_second', run.items_per_second);
  }
  for(auto &c : run.counters) {
    out << ',\n'
        << indent
        << FormatKV(c.first, c.second);
  }
  if (!run.report_label.empty()) {
    out << ',\n' << indent << FormatKV('label', run.report_label);
  }
  out << '\n';
}
    
    #define GUARDED_BY(x) THREAD_ANNOTATION_ATTRIBUTE__(guarded_by(x))
    
      // 2. set baudrate to 500k
  ret = canSetBaudrate(dev_handler_, NTCAN_BAUD_500);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'set baudrate error code: ' << ret << ', ' << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                    int32_t *const frame_num) override;
    
    #include 'modules/drivers/canbus/can_comm/can_receiver.h'
    
    template <typename SensorType>
template <class T, bool need_check>
void MessageManager<SensorType>::AddSendProtocolData() {
  send_protocol_data_.emplace_back(new T());
  auto *dt = send_protocol_data_.back().get();
  if (dt == nullptr) {
    return;
  }
  protocol_data_map_[T::ID] = dt;
  if (need_check) {
    check_ids_[T::ID].period = dt->GetPeriod();
    check_ids_[T::ID].real_period = 0;
    check_ids_[T::ID].last_time = 0;
    check_ids_[T::ID].error_count = 0;
  }
}
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
    
    #endif  // MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_

    
      SensorCanbusConf canbus_conf_;
  std::unique_ptr<CanClient> can_client_;
  CanReceiver<SensorType> can_receiver_;
  std::unique_ptr<canbus::MessageManager<SensorType>> sensor_message_manager_;
  std::unique_ptr<std::thread> thread_;
    
    // System gflags
DECLARE_string(node_name);
DECLARE_string(canbus_driver_name);