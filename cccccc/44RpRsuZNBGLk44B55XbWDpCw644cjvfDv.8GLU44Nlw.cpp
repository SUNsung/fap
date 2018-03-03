
        
        namespace HPHP {
/////////////////////////////////////////////////////////////////////////////
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    ///////////////////////////////////////////////////////////////////////////////
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    //////////////////////////////////////////////////////////////////////
    
    protected:
  Sweepable();
  enum class Init {};
  explicit Sweepable(Init) { init(); }
  virtual ~Sweepable() { delist(); }
    
    
    {
    {    s_dispatcher->enqueue(job);
    g_context->incrPageletTasksStarted();
    return Resource(std::move(task));
  }
  return Resource();
}
    
    #include <atomic>
#include 'stddef.h'
    
    #include 'hphp/runtime/vm/resumable.h'
    
    // true pass, false limit
bool CommFrequencyLimit::Check() {
    uint64_t now = ::gettickcount();
    if (!touch_times_.empty() && (now<touch_times_.front()) ) { //if user modify the time, amend it
    	xwarn2(TSF'Must be modified time.now=%_', now);
    	size_t size = touch_times_.size();
    	touch_times_.clear();
    	for (size_t i=0; i<size; ++i) {
    		touch_times_.push_back(now-1);
    	}
    }
    }
    
    //
//  spy.h
//  PublicComponent
//
//  Created by yerungui on 14-5-14.
//
    
        auto startPoint = high_resolution_clock::now();
    vector<thread *> threads;
    for (int i = 0; i < THREADS; i++) {
        threads.push_back(new thread([i] {
            while(nextConnection(i));
        }));
    }
    
    template <bool isServer>
void Group<isServer>::addWebSocket(WebSocket<isServer> *webSocket) {
    if (webSocketHead) {
        webSocketHead->prev = webSocket;
        webSocket->next = webSocketHead;
    } else {
        webSocket->next = nullptr;
    }
    webSocketHead = webSocket;
    webSocket->prev = nullptr;
}
    
        if (!httpSocket->isShuttingDown()) {
        if (isServer) {
            Group<isServer>::from(httpSocket)->removeHttpSocket(httpSocket);
            Group<isServer>::from(httpSocket)->httpDisconnectionHandler(httpSocket);
        }
    } else {
        httpSocket->cancelTimeout();
    }
    
    /*
 * Immediately terminates this WebSocket. Will call onDisconnection of its Group.
 *
 * Hints: Close code will be 1006 and message will be empty.
 *
 */
template <bool isServer>
void WebSocket<isServer>::terminate() {
    }
    
        void start(void (*cb)(Timer *), int timeout, int repeat) {
        loop->timepoint = std::chrono::system_clock::now();
        std::chrono::system_clock::time_point timepoint = loop->timepoint + std::chrono::milliseconds(timeout);
    }