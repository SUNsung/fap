
        
        class TestServiceImpl : public ::grpc::testing::EchoTestService::Service {
 public:
  TestServiceImpl() : signal_client_(false), host_() {}
  explicit TestServiceImpl(const grpc::string& host)
      : signal_client_(false), host_(new grpc::string(host)) {}
    }
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    #include <grpcpp/create_channel_impl.h>
#include <grpcpp/support/channel_arguments.h>
    
    
    {
    { private:
  std::shared_ptr<grpc::Channel> CreateChannelWithInterceptors(
      const string& target, const grpc::ChannelArguments& args,
      std::vector<
          std::unique_ptr<experimental::ClientInterceptorFactoryInterface>>
          interceptor_creators) override {
    grpc_channel_args channel_args;
    args.SetChannelArgs(&channel_args);
    return CreateChannelInternal(
        '',
        grpc_cronet_secure_channel_create(engine_, target.c_str(),
                                          &channel_args, nullptr),
        std::move(interceptor_creators));
  }
  void* engine_;
};
}  // namespace grpc
namespace grpc_impl {
std::shared_ptr<ChannelCredentials> CronetChannelCredentials(void* engine) {
  return std::shared_ptr<ChannelCredentials>(
      new grpc::CronetChannelCredentialsImpl(engine));
}
}  // namespace grpc_impl

    
    // Provide an explicit override of health checking service interface.
TEST_F(HealthServiceEnd2endTest, ExplicitlyOverride) {
  EnableDefaultHealthCheckService(true);
  EXPECT_TRUE(DefaultHealthCheckServiceEnabled());
  std::unique_ptr<HealthCheckServiceInterface> override_service(
      new CustomHealthCheckService(&health_check_service_impl_));
  HealthCheckServiceInterface* underlying_service = override_service.get();
  SetUpServer(false, false, true, std::move(override_service));
  HealthCheckServiceInterface* service = server_->GetHealthCheckService();
  EXPECT_TRUE(service == underlying_service);
    }
    
    // Add a second service with one async method.
TEST_F(HybridEnd2endTest, GenericEchoAsyncRequestStream_AsyncDupService) {
  typedef EchoTestService::WithAsyncMethod_RequestStream<
      EchoTestService::WithGenericMethod_Echo<TestServiceImpl>>
      SType;
  SType service;
  AsyncGenericService generic_service;
  duplicate::EchoTestService::AsyncService dup_service;
  SetUpServer(&service, &dup_service, &generic_service, nullptr);
  ResetStub();
  std::thread generic_handler_thread(HandleGenericCall, &generic_service,
                                     cqs_[0].get());
  std::thread request_stream_handler_thread(HandleClientStreaming<SType>,
                                            &service, cqs_[1].get());
  std::thread echo_handler_thread(
      HandleEcho<duplicate::EchoTestService::AsyncService>, &dup_service,
      cqs_[2].get(), true);
  TestAllMethods();
  SendEchoToDupService();
  generic_handler_thread.join();
  request_stream_handler_thread.join();
  echo_handler_thread.join();
}
    
                Windows::Globalization::DayOfWeek GetFirstDayOfWeek() const
            {
                return m_firstDayOfWeek;
            }
    
    //----------------------------------------------------------------------------
//
//    FUNCTION: nRadixxtonum
//
//    ARGUMENTS: pointer to a number, base requested.
//
//    RETURN: number representation in radix requested.
//
//    DESCRIPTION: Does a base conversion on a number from
//    internal to requested base. Assumes number being passed
//    in is really in internal base form.
//
//----------------------------------------------------------------------------
    
    namespace CalculatorUnitTests
{
    static UCM::Unit UNIT1 = { 1, L'UNIT1', L'U1', true, false, false };
    static UCM::Unit UNIT2 = { 2, L'UNIT2', L'U2', false, true, false };
    static UCM::Unit UNIT3 = { 3, L'UNIT3', L'U3', false, false, false };
    static UCM::Unit UNIT4 = { 4, L'UNIT4', L'U4', true, false, false };
    static UCM::Unit UNIT5 = { 5, L'UNIT5', L'U5', false, false, false };
    static UCM::Unit UNIT6 = { 6, L'UNIT6', L'U6', false, true, false };
    static UCM::Unit UNIT7 = { 7, L'UNIT7', L'U7', false, true, false };
    static UCM::Unit UNIT8 = { 8, L'UNIT8', L'U8', false, false, false };
    static UCM::Unit UNIT9 = { 9, L'UNIT9', L'U9', true, false, false };
    static UCM::Unit UNITWHIMSY = { 10, L'Whimsy', L'UW', true, false, true };
    }
    
        if (nullptr != m_pHistoryDisplay)
    {
        unsigned int addedItemIndex = m_pHistoryDisplay->AddToHistory(m_spTokens, m_spCommands, numStr);
        m_pCalcDisplay->OnHistoryItemAdded(addedItemIndex);
    }
    
    
    {        // we need to redraw to update the decimal point button
        numChanged = true;
    }
    
        class CalculatorHistory : public IHistoryDisplay
    {
    public:
        CalculatorHistory(const size_t maxSize);
        unsigned int AddToHistory(
            _In_ std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> const& spTokens,
            _In_ std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> const& spCommands,
            std::wstring_view result);
        std::vector<std::shared_ptr<HISTORYITEM>> const& GetHistory();
        std::shared_ptr<HISTORYITEM> const& GetHistoryItem(unsigned int uIdx);
        void ClearHistory();
        unsigned int AddItem(_In_ std::shared_ptr<HISTORYITEM> const& spHistoryItem);
        bool RemoveItem(unsigned int uIdx);
        size_t MaxHistorySize() const
        {
            return m_maxHistorySize;
        }
        ~CalculatorHistory(void);
    }
    
    namespace CalcEngine
{
    class CalcNumSec
    {
    public:
        CalcNumSec()
            : value()
            , m_isNegative(false)
        {
        }
    }
    }
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetOpenParenthesisCountChangedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement,
        CalculatorActivityIds::OpenParenthesisCountChanged,
        AutomationNotificationKind::ActionCompleted,
        AutomationNotificationProcessing::ImportantMostRecent);
}
    
      agent_a.WaitForFinish();
  if (!FLAGS_only_one_send) {
    agent_b.WaitForFinish();
  }
  param_ptr_a->print();
  if (!FLAGS_only_one_send) {
    param_ptr_b->print();
  }
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
      std::mutex& mutex() { return mutex_; }
  std::list<std::weak_ptr<TimerTask>>& task_list() { return task_list_; }
    
    
    {
    {    if (emergency_mode && mode != Chassis::EMERGENCY_MODE) {
      set_driving_mode(Chassis::EMERGENCY_MODE);
      message_manager_->ResetSendMessages();
    }
    end = ::apollo::common::time::AsInt64<::apollo::common::time::micros>(
        ::apollo::common::time::Clock::Now());
    std::chrono::duration<double, std::micro> elapsed{end - start};
    if (elapsed < default_period) {
      std::this_thread::sleep_for(default_period - elapsed);
    } else {
      AERROR << 'Too much time consumption in GemController looping process:'
             << elapsed.count();
    }
  }
}
    
    
    {  boost::filesystem::recursive_directory_iterator itr(path);
  while (itr != boost::filesystem::recursive_directory_iterator()) {
    try {
      if (apollo::common::util::EndWith(itr->path().string(), suffix)) {
        files->push_back(itr->path().string());
      }
      ++itr;
    } catch (const std::exception &ex) {
      AWARN << 'Caught execption: ' << ex.what();
      continue;
    }
  }
  return true;
}
    
    #include 'gtest/gtest.h'
    
    
    {  if (writer->attributes().has_message_type()) {
    *msg_type = writer->attributes().message_type();
  }
}
    
      ScopedEventBaseThread sebt{kThreadName};
  sebt.getEventBase()->runInEventBaseThread([&] {
    createdThreadName = folly::getCurrentThreadName();
    done.post();
  });
    
    #include <folly/Executor.h>
#include <atomic>
    
    #include <folly/Range.h>
    
      /** push_retired */
  void push_retired(hazptr_obj_list<Atom>& l, bool check = true) {
    /*** Full fence ***/ asymmetricLightBarrier();
    while (true) {
      auto r = retired();
      l.tail()->set_next(r);
      if (retired_.compare_exchange_weak(
              r,
              l.head(),
              std::memory_order_release,
              std::memory_order_acquire)) {
        break;
      }
    }
    rcount_.fetch_add(l.count(), std::memory_order_release);
    if (check) {
      check_cleanup_and_reclaim();
    }
  }
    
      ~AsyncFileWriter();
    
    #include <folly/File.h>
#include <folly/Range.h>
#include <folly/Synchronized.h>
#include <folly/logging/LogWriter.h>
    
    template <class Alloc>
std::pair<typename Arena<Alloc>::Block*, size_t>
Arena<Alloc>::Block::allocate(Alloc& alloc, size_t size, bool allowSlack) {
  size_t allocSize = sizeof(Block) + size;
  if (allowSlack) {
    allocSize = ArenaAllocatorTraits<Alloc>::goodSize(alloc, allocSize);
  }
    }
    
    template <typename T>
using SysArenaAllocator = ArenaAllocator<T, SysAllocator<void>>;
    
    static_assert(AllocatorHasTrivialDeallocate<SysArena>::value, '');
    
    TEST_F(FifoSemaphoreTest, basic) {
  test_basic<FifoSemaphore>();
}
    
      {
    Pool pool(2);
    std::vector<std::thread> thr(nthreads);
    for (auto i = 0; i < nthreads; ++i) {
      thr[i] = std::thread([&]() {
        started.fetch_add(1);
        while (!start.load()) {
          ;
        }
        for (auto j = 0; j < count; ++j) {
          uint32_t idx = pool.allocIndex();
          if (idx != 0) {
            pool.recycleIndex(idx);
          }
        }
      });
    }
    }