
        
        
    {}  // namespace api
    
    // static
Handle<Event> Event::Create(v8::Isolate* isolate) {
  return mate::CreateHandle(isolate, new Event(isolate));
}
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    #ifndef ATOM_BROWSER_NET_ASAR_ASAR_PROTOCOL_HANDLER_H_
#define ATOM_BROWSER_NET_ASAR_ASAR_PROTOCOL_HANDLER_H_
    
    
    {}  // namespace atom

    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    #include <string>
    
      CHROMEG_CALLBACK_1(GlobalMenuBarX11, void, OnItemActivated, DbusmenuMenuitem*,
                     unsigned int);
  CHROMEG_CALLBACK_0(GlobalMenuBarX11, void, OnSubMenuShow, DbusmenuMenuitem*);
    
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
    
    // Sets flags necessary for recognition in the training mode.
// Opens and returns the pointer to the output file.
FILE *Tesseract::init_recog_training(const STRING &fname) {
  if (tessedit_ambigs_training) {
    tessedit_tess_adaption_mode.set_value(0);    // turn off adaption
    tessedit_enable_doc_dict.set_value(0);       // turn off document dictionary
    // Explore all segmentations.
    getDict().stopper_no_acceptable_choices.set_value(1);
  }
    }
    
      BlamerBundle *bb0 = NULL;
  BlamerBundle *bb1 = NULL;
  WERD_RES *prefix = NULL;
  WERD_RES *core = NULL;
  WERD_RES *suffix = NULL;
  if (num_chopped_leading > 0) {
    prefix = new WERD_RES(*word);
    split_word(prefix, num_chopped_leading, &core, &bb0);
  } else {
    core = new WERD_RES(*word);
  }
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == NULL) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (inT16) x, (inT16) (ysize - y - height),
                         (inT16) (x + width), (inT16) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    CCStruct::CCStruct() {}
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(inT64 cost, inT32 steps, const DPPoint* prev,
                             inT32 n, inT32 sig_x, inT64 sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
    
/**********************************************************************
 * operator*
 *
 * Scalar multiply of an FCOORD.
 **********************************************************************/
    
    /// Create a new modifiable buffer that represents the given POD array.
/**
 * @returns A mutable_buffers_1 value equivalent to:
 * @code mutable_buffers_1(
 *     data.data(),
 *     min(data.size() * sizeof(PodType), max_size_in_bytes)); @endcode
 */
template <typename PodType, std::size_t N>
inline mutable_buffers_1 buffer(boost::array<PodType, N>& data,
    std::size_t max_size_in_bytes)
{
  return mutable_buffers_1(
      mutable_buffer(data.c_array(),
        data.size() * sizeof(PodType) < max_size_in_bytes
        ? data.size() * sizeof(PodType) : max_size_in_bytes));
}
    
    #endif // BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP

    
    // Helper class to determine whether or not the current thread is inside an
// invocation of io_service::run() for a specified io_service object.
template <typename Key, typename Value = unsigned char>
class call_stack
{
public:
  // Context class automatically pushes the key/value pair on to the stack.
  class context
    : private noncopyable
  {
  public:
    // Push the key on to the stack.
    explicit context(Key* k)
      : key_(k),
        next_(call_stack<Key, Value>::top_)
    {
      value_ = reinterpret_cast<unsigned char*>(this);
      call_stack<Key, Value>::top_ = this;
    }
    }
    }
    
    template <typename ConstBufferSequence>
class descriptor_write_op_base : public reactor_op
{
public:
  descriptor_write_op_base(int descriptor,
      const ConstBufferSequence& buffers, func_type complete_func)
    : reactor_op(&descriptor_write_op_base::do_perform, complete_func),
      descriptor_(descriptor),
      buffers_(buffers)
  {
  }
    }
    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
using std::function;
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
using boost::function;
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
    // Calls to asio_handler_allocate and asio_handler_deallocate must be made from
// a namespace that does not contain any overloads of these functions. The
// boost_asio_handler_alloc_helpers namespace is defined here for that purpose.
namespace boost_asio_handler_alloc_helpers {
    }
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include <boost/asio/detail/config.hpp>
    
      bool compare_exchange_weak(
      T& v0,
      T v1,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        v0, v1, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      T& v0,
      T v1,
      std::memory_order success,
      std::memory_order failure) noexcept {
    DeterministicSchedule::beforeSharedAccess();
    auto orig = v0;
    bool rv = data.compare_exchange_weak(v0, v1, success, failure);
    FOLLY_TEST_DSCHED_VLOG(this << '.compare_exchange_weak(' << std::hex << orig
                                << ', ' << std::hex << v1 << ') -> ' << rv
                                << ',' << std::hex << v0);
    DeterministicSchedule::afterSharedAccess(rv);
    return rv;
  }
    
    template <template <typename> class Atom>
void run_basic_tests() {
  Futex<Atom> f(0);
    }
    
    
    {  atomic_shared_ptr<foo> asp;
  asp.store(alias);
  a.reset();
  alias.reset();
  auto res1 = asp.load();
  auto res2 = asp.exchange(nullptr);
  EXPECT_EQ(b, res1.get());
  EXPECT_EQ(b, res2.get());
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(0, d_count);
  res1.reset();
  res2.reset();
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(1, d_count);
  delete b;
  EXPECT_EQ(2, c_count);
  EXPECT_EQ(2, d_count);
}
    
    #include <bitset>
    
    
    {  // Check that global flags can still be given after the command
  EXPECT_EQ(
      'running foo\n'
      'foo global-foo 43\n'
      'foo local-foo 44\n'
      'foo arg a\n'
      'foo arg b\n',
      callHelper({'foo', '--global-foo', '43', '--local-foo', '44',
                 'a', 'b'}));
}