  // content::DownloadItem::Observer:
  void OnDownloadUpdated(content::DownloadItem* item) override;
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(URLRequestAsyncAsarJob);
};
    
      // URLRequestSimpleJob:
  int GetData(std::string* mime_type,
              std::string* charset,
              std::string* data,
              const net::CompletionCallback& callback) const override;
    
    RenderProcessPreferences::RenderProcessPreferences(const Predicate& predicate)
    : predicate_(predicate),
      next_id_(0),
      cache_needs_update_(true) {
  registrar_.Add(this,
                 content::NOTIFICATION_RENDERER_PROCESS_CREATED,
                 content::NotificationService::AllBrowserContextsAndSources());
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(RenderProcessPreferences);
};
    
    Completion *CompletionBuilder::finish() {
  SwiftResult base = current;
  llvm::SmallString<64> nameStorage;
  StringRef name = getOriginalName();
  if (modified) {
    // We've modified the original result, so build a new one.
    auto opKind = CodeCompletionOperatorKind::None;
    if (current.isOperator())
      opKind = current.getOperatorKind();
    }
    }
    
    #pragma mark - NSData verification
    
      // Only allow allocation using the allocator in MarkupContext or by
  // placement new.
  void *operator new(size_t Bytes, swift::markup::MarkupContext &MC,
                     unsigned Alignment = alignof(DocComment));
  void *operator new(size_t Bytes, void *Mem) {
    assert(Mem);
    return Mem;
  }
    
    namespace swift {
    }
    
    #include 'llvm/ADT/Hashing.h'
    
    
    {
    {  bool didErrorOccur() {
    return DidErrorOccur;
  }
};
  
}
    
    using clang::index::SymbolKind;
using clang::index::SymbolLanguage;
using clang::index::SymbolSubKind;
using clang::index::SymbolProperty;
using clang::index::SymbolPropertySet;
using clang::index::SymbolRole;
using clang::index::SymbolRoleSet;
using clang::index::SymbolRelation;
using clang::index::SymbolInfo;
    
      // This is the top-level C++ Message object that owns the whole
  // proto tree.  Every Python RepeatedScalarContainer holds a
  // reference to it in order to keep it alive as long as there's a
  // Python object that references any part of the tree.
  shared_ptr<Message> owner;
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
    // Fixxht overview.
// Premise: Initial estimate of x-height is adequate most of the time, but
// occasionally it is incorrect. Most notable causes of failure are:
// 1. Small caps, where the top of the caps is the same as the body text
// xheight. For small caps words the xheight needs to be reduced to correctly
// recognize the caps in the small caps word.
// 2. All xheight lines, such as summer. Here the initial estimate will have
// guessed that the blob tops are caps and will have placed the xheight too low.
// 3. Noise/logos beside words, or changes in font size on a line. Such
// things can blow the statistics and cause an incorrect estimate.
// 4. Incorrect baseline. Can happen when 2 columns are incorrectly merged.
// In this case the x-height is often still correct.
//
// Algorithm.
// Compare the vertical position (top only) of alphnumerics in a word with
// the range of positions in training data (in the unicharset).
// See CountMisfitTops. If any characters disagree sufficiently with the
// initial xheight estimate, then recalculate the xheight, re-run OCR on
// the word, and if the number of vertical misfits goes down, along with
// either the word rating or certainty, then keep the new xheight.
// The new xheight is calculated as follows:ComputeCompatibleXHeight
// For each alphanumeric character that has a vertically misplaced top
// (a misfit), yet its bottom is within the acceptable range (ie it is not
// likely a sub-or super-script) calculate the range of acceptable xheight
// positions from its range of tops, and give each value in the range a
// number of votes equal to the distance of its top from its acceptance range.
// The x-height position with the median of the votes becomes the new
// x-height. This assumes that most characters will be correctly recognized
// even if the x-height is incorrect. This is not a terrible assumption, but
// it is not great. An improvement would be to use a classifier that does
// not care about vertical position or scaling at all.
// Separately collect stats on shifted baselines and apply the same logic to
// computing a best-fit shift to fix the error. If the baseline needs to be
// shifted, but the x-height is OK, returns the original x-height along with
// the baseline shift to indicate that recognition needs to re-run.
    
    ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
    void LLSQ::add(double x, double y) {          // add an element
  total_weight++;                           // count elements
  sigx += x;                     // update accumulators
  sigy += y;
  sigxx += x * x;
  sigxy += x * y;
  sigyy += y * y;
}
// Adds an element with a specified weight.
void LLSQ::add(double x, double y, double weight) {
  total_weight += weight;
  sigx += x * weight;                     // update accumulators
  sigy += y * weight;
  sigxx += x * x * weight;
  sigxy += x * y * weight;
  sigyy += y * y * weight;
}
// Adds a whole LLSQ.
void LLSQ::add(const LLSQ& other) {
  total_weight += other.total_weight;
  sigx += other.sigx;                     // update accumulators
  sigy += other.sigy;
  sigxx += other.sigxx;
  sigxy += other.sigxy;
  sigyy += other.sigyy;
}
    
    int decreasing_top_order(const void *row1, const void *row2);
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    void ROW::recalc_bounding_box() {  //recalculate BB
  WERD *word;                    //current word
  WERD_IT it = &words;           //words of ROW
  inT16 left;                    //of word
  inT16 prev_left;               //old left
    }
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    bool HHVM_FUNCTION(fb_intercept, const String& name, const Variant& handler,
                                 const Variant& data /* = uninit_variant */) {
  return register_intercept(name, handler, data);
}
    
    String TimeStamp::CurrentMicroTime() {
  struct timeval tp;
  gettimeofday(&tp, nullptr);
  char ret[100];
  snprintf(ret, 100, '%.8F %ld', (double)tp.tv_usec / 1000000, tp.tv_sec);
  return String(ret, CopyString);
}
    
    const char *Timer::getName() const {
  switch (m_type) {
  case WallTime:  return 'wall time';
  case SystemCPU: return 'system cpu';
  case UserCPU:   return 'user cpu';
  case TotalCPU:  return 'total cpu';
  default: assert(false);
  }
  return nullptr;
}
    
    
    {  v << vcall{
    CallSpec::direct(pthread_getspecific),
    v.makeVcallArgs({{v.cns(datum.tls->m_key)}}),
    v.makeTuple({d}),
    Fixup{},
    DestType::SSA
  };
}
    
    namespace jit {
    }
    
      /////////////////////////////////////////////////////////////////////////////
    
      PackedArrayInit returnArray(2);
  returnArray.appendWithRef(mpzToGMPObject(gmpReturnQ));
  returnArray.appendWithRef(mpzToGMPObject(gmpReturnR));
    
    
    {  const Vunit&                     m_unit;
  const jit::vector<Vlabel>        m_blocks;
  const PredVector                 m_preds;
  jit::hash_map<uint64_t, int64_t> m_arcWgts; // keyed using arcId()
};
    
    ///////////////////////////////////////////////////////////////////////////////
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    /// Create a new non-modifiable buffer that represents the given POD array.
/**
 * @returns A const_buffers_1 value equivalent to:
 * @code const_buffers_1(
 *     data.data(),
 *     data.size() * sizeof(PodType)); @endcode
 */
template <typename PodType, std::size_t N>
inline const_buffers_1 buffer(const std::array<PodType, N>& data)
{
  return const_buffers_1(
      const_buffer(data.data(), data.size() * sizeof(PodType)));
}
    
      /// Get a const reference to the lowest layer.
  const lowest_layer_type& lowest_layer() const
  {
    return next_layer_.lowest_layer();
  }
    
    
    {
    {} // namespace asio
} // namespace boost
    
        // Push the key/value pair on to the stack.
    context(Key* k, Value& v)
      : key_(k),
        value_(&v),
        next_(call_stack<Key, Value>::top_)
    {
      call_stack<Key, Value>::top_ = this;
    }
    
    #include <boost/asio/detail/config.hpp>
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #ifndef BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
#define BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
    
    template <typename Handler, typename Arg1, typename Arg2>
auto two_arg_handler_test(Handler h, Arg1* a1, Arg2* a2)
  -> decltype(
    sizeof(Handler(static_cast<const Handler&>(h))),
    ((h)(*a1, *a2)),
    char(0));
    
    void dev_poll_reactor::shutdown_service()
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
  shutdown_ = true;
  lock.unlock();
    }
    
    #endif // defined(BOOST_ASIO_HAS_EPOLL)
    
    This pointer must be provided as 'void* state' parameter for XXH32_update().
XXH32_update() can be called as many times as necessary.
The user must provide a valid (allocated) input.
The function returns an error code, with 0 meaning OK, and any other value meaning there is an error.
Note that 'len' is type 'int', which means it is limited to 2^31-1.
If your data is larger, it is recommended to chunk your data into blocks
of size for example 2^30 (1GB) to avoid any 'int' overflow issue.
    
      // Store the name of the database
  db_name_ = db_path;
    
    #include <algorithm>
#include 'port/port.h'
    
      virtual size_t GetPinnedUsage() const override {
    return cache_->GetPinnedUsage();
  }
    
     public: // Style getters
    
        int unit;
    double value;
    
      ASSERT_FLOAT_EQ(10, YGNodeLayoutGetMargin(root, YGEdgeLeft));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetMargin(root, YGEdgeRight));
    
    #include <gtest/gtest.h>
#include <yoga/Yoga.h>
    
    // @Generated by gentest/gentest.rb from gentest/fixtures/YGBorderTest.html
    
      ASSERT_FLOAT_EQ(10, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(80, YGNodeLayoutGetHeight(root_child0));
    
    
    {} // namespace facebook

    
    // Define a callback to handle incoming messages
void on_message(server* s, websocketpp::connection_hdl hdl, message_ptr msg) {
    try {
        s->send(hdl, msg->get_payload(), msg->get_opcode());
    } catch (const websocketpp::lib::error_code& e) {
    }
    }
    
        int err = connect(socketfd, (sockaddr *) &addr, sizeof(addr));
    if (err) {
        cout << 'Connection error, connections: ' << connections << endl;
        return false;
    }
    send(socketfd, buf, strlen(buf), 0);
    memset(message, 0, 1024);
    size_t length;
    do {
        length = recv(socketfd, message, sizeof(message), 0);
    }
    while (strncmp(&message[length - 4], '\r\n\r\n', 4));
    
        // Not thread safe
    void sendPrepared(PreparedMessage *preparedMessage, void *callbackData = nullptr);
    static void finalizeMessage(PreparedMessage *preparedMessage);
    void close(int code = 1000, const char *message = nullptr, size_t length = 0);
    void transfer(Group<isServer> *group);
    
        const char *closeMessage = 'I'm closing now';
    size_t closeMessageLength = strlen(closeMessage);
    
            if (!socket->messageQueue.empty() && ((events & UV_WRITABLE) || SSL_want(socket->ssl) == SSL_READING)) {
            socket->cork(true);
            while (true) {
                Queue::Message *messagePtr = socket->messageQueue.front();
                int sent = SSL_write(socket->ssl, messagePtr->data, (int) messagePtr->length);
                if (sent == (ssize_t) messagePtr->length) {
                    if (messagePtr->callback) {
                        messagePtr->callback(p, messagePtr->callbackData, false, messagePtr->reserved);
                    }
                    socket->messageQueue.pop();
                    if (socket->messageQueue.empty()) {
                        if ((socket->state.poll & UV_WRITABLE) && SSL_want(socket->ssl) != SSL_WRITING) {
                            socket->change(socket->nodeData->loop, socket, socket->setPoll(UV_READABLE));
                        }
                        break;
                    }
                } else if (sent <= 0) {
                    switch (SSL_get_error(socket->ssl, sent)) {
                    case SSL_ERROR_WANT_READ:
                        break;
                    case SSL_ERROR_WANT_WRITE:
                        if ((socket->getPoll() & UV_WRITABLE) == 0) {
                            socket->change(socket->nodeData->loop, socket, socket->setPoll(socket->getPoll() | UV_WRITABLE));
                        }
                        break;
                    default:
                        STATE::onEnd((Socket *) p);
                        return;
                    }
                    break;
                }
            }
            socket->cork(false);
        }
    
    void Hub::onClientConnection(uS::Socket *s, bool error) {
    HttpSocket<CLIENT> *httpSocket = (HttpSocket<CLIENT> *) s;
    }
    
        for (int i = 0; i < numFdReady; i++) {
        Poll *poll = (Poll *) readyEvents[i].data.ptr;
        int status = -bool(readyEvents[i].events & EPOLLERR);
        callbacks[poll->state.cbIndex](poll, status, readyEvents[i].events);
    }
    
        nodeData->loop = loop;
    nodeData->asyncMutex = &asyncMutex;