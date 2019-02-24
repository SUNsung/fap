
        
        #include <dmlc/omp.h>
#include <xgboost/logging.h>
#include <algorithm>
#include '../common/math.h'
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    SEXP XGBoosterDumpModel_R(SEXP handle, SEXP fmap, SEXP with_stats, SEXP dump_format) {
  SEXP out;
  R_API_BEGIN();
  bst_ulong olen;
  const char **res;
  const char *fmt = CHAR(asChar(dump_format));
  CHECK_CALL(XGBoosterDumpModelEx(R_ExternalPtrAddr(handle),
                                CHAR(asChar(fmap)),
                                asInteger(with_stats),
                                fmt,
                                &olen, &res));
  out = PROTECT(allocVector(STRSXP, olen));
  if (!strcmp('json', fmt)) {
    std::stringstream stream;
    stream <<  '[\n';
    for (size_t i = 0; i < olen; ++i) {
      stream << res[i];
      if (i < olen - 1) {
        stream << ',\n';
      } else {
        stream << '\n';
      }
    }
    stream <<  ']';
    SET_STRING_ELT(out, 0, mkChar(stream.str().c_str()));
  } else {
    for (size_t i = 0; i < olen; ++i) {
      std::stringstream stream;
      stream <<  'booster[' << i <<']\n' << res[i];
      SET_STRING_ELT(out, i, mkChar(stream.str().c_str()));
    }
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}
    
      bool Read(SparsePage* page, dmlc::SeekStream* fi) override {
    auto& offset_vec = page->offset.HostVector();
    auto& data_vec = page->data.HostVector();
    if (!fi->Read(&(offset_vec))) return false;
    CHECK_NE(offset_vec.size(), 0) << 'Invalid SparsePage file';
    this->LoadIndexValue(fi);
    }
    
      oprot->writeMessageBegin('getQueryColumns', ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();
    
    using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;
    
    namespace osquery { namespace extensions {
    }
    }
    
      xfer += iprot->readStructEnd();
    
    /**
 * @brief Queries SMART devices on the system by autodetection and explicit
 * storage controller arguments.
 *
 * @param client libsmartctl client
 * @param walk_func function that walks the system devices and runs the handler
 * function on each device
 * @param results reference to QueryData to store results in
 */
void querySmartDevices(
    libsmartctl::ClientInterface& client,
    std::function<void(
        std::function<void(const std::string&, hardwareDriver*)>)> walk_func,
    QueryData& results);
    
    /**
 * @brief Intel HECI GUID for the update application.
 *
 * This GUID can be used on every OS over the HECI protocol to inspect the
 * FW version.
 */
const std::vector<uint8_t> kMEIUpdateGUID{
    232, 205, 157, 48, 177, 204, 98, 64, 143, 120, 96, 1, 21, 163, 67, 39,
};
    
    Expected<int, PosixError> syscall(struct perf_event_attr* attr,
                                  pid_t pid,
                                  int cpu,
                                  int group_fd,
                                  unsigned long const flags);
    
    #include <gtest/gtest.h>
    
    Expected<EbpfTracepoint, LinuxProbesControl::Error> createTracepointForSyscall(
    syscall::EventType type, PerfEventCpuMap const& cpu_map) {
  auto program_exp = genLinuxProgram(BPF_PROG_TYPE_TRACEPOINT, cpu_map, type);
  if (program_exp.isError()) {
    return createError(LinuxProbesControl::Error::SystemEbpf,
                       'could not load program to track syscall ',
                       program_exp.takeError())
           << to<std::string>(type);
  }
  auto tracing_path_exp = toTracingPath(type);
  if (tracing_path_exp.isError()) {
    return createError(LinuxProbesControl::Error::InvalidArgument,
                       '',
                       tracing_path_exp.takeError());
  }
  auto sys_event_exp = tracing::NativeEvent::load(tracing_path_exp.take());
  if (sys_event_exp.isError()) {
    return createError(LinuxProbesControl::Error::SystemNativeEvent,
                       'could not enable linux event for ',
                       sys_event_exp.takeError())
           << to<std::string>(type);
  }
  auto tracepoint_exp =
      events::EbpfTracepoint::load(sys_event_exp.take(), program_exp.take());
  if (tracepoint_exp.isError()) {
    return createError(
               LinuxProbesControl::Error::SystemTracepoint,
               'could not attach tracing prograp to the native event of ',
               tracepoint_exp.takeError())
           << to<std::string>(type);
  }
  return tracepoint_exp.take();
}
    
    class EnterExitJoiner {
 public:
  boost::optional<Event> join(Event event);
    }