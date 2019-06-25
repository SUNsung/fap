
        
        /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
        XGBOOST_DEVICE bool operator==(const Iterator &other) const {
      return i_ >= other.i_;
    }
    XGBOOST_DEVICE bool operator!=(const Iterator &other) const {
      return i_ < other.i_;
    }
    
    namespace xgboost {
namespace metric {
    }
    }
    
    bool Channel::close()
{
    if (closed)
    {
        return false;
    }
    swTraceLog(SW_TRACE_CHANNEL, 'channel closed');
    closed = true;
    while (!producer_queue.empty())
    {
        Coroutine *co = pop_coroutine(PRODUCER);
        co->resume();
    }
    while (!consumer_queue.empty())
    {
        Coroutine *co = pop_coroutine(CONSUMER);
        co->resume();
    }
    return true;
}

    
    //	swSignal_add(SIGINT, user_signal);
    
    
    {    private:
        redisAsyncContext * m_ctx;
        QSocketNotifier * m_read;
        QSocketNotifier * m_write;
};
    
        pid_t server_pid = create_server();
    
            if (pid == 0)
        {
            exit(0);
        }
    
    
    {
    {protected:
    swServer serv;
    vector<swListenPort *> ports;
    string host;
    int port;
    int mode;
    int events;
};
}

    
        unlink(sock1_path);
    unlink(sock2_path);
    
        swSignalfd_init();
    swSignal_add(SIGUSR1,sig_usr1);
    swSignalfd_setup(SwooleG.main_reactor);
    
        /**
     * 协程2
     */
    Coroutine::create([](void *arg)
    {
        G_a.x = 100;
        G_a.y = nullptr;
    });