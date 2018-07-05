
        
        
    {  if (!args_->GetSize())
    return false;
  base::Value* spec = NULL;
  EXTENSION_FUNCTION_VALIDATE(args_->Get(0, &spec) && spec);
  if (!spec->is_dict())
    return false;
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(spec);
  bool auto_print;
  std::string printer_name, pdf_path;
  if (dict->GetBoolean('autoprint', &auto_print))
    chrome::NWPrintSetCustomPrinting(auto_print);
  if (dict->GetString('printer', &printer_name))
    chrome::NWPrintSetDefaultPrinter(printer_name);
  if (dict->GetString('pdf_path', &pdf_path))
    chrome::NWPrintSetPDFPath(base::FilePath::FromUTF8Unsafe(pdf_path));
  chrome::NWPrintSetOptions(dict);
  return true;
}
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    void Menu::OnMenuClosed() {
  CHECK(!message_loop_quit_.is_null());
  message_loop_quit_.Run();
  
#if !defined(OS_WIN)
  // Ask PlatformEventSource to stop dispatching
  // events in this message loop
  // iteration. We want our menu's loop to return
  // before the next event.
  if (ui::PlatformEventSource::GetInstance())
    ui::PlatformEventSource::GetInstance()->StopCurrentEventStream();
#endif
}
    
    
    {
} // namespace extensions
#endif

    
      vector<int64_t> sizes = {2, 2};
  tensor2->resize(sizes);
  tensor2->fill(4);
  tensor->add(*tensor2, 1);
  assert(tensor->nDim() == 2);
    
      void allGather(std::vector<at::Tensor>& output,
                 std::vector<at::Tensor>& input,
                 THDGroup group_id = THDGroupWORLD) override;
  void allGather(std::vector<at::Tensor>& output, at::Tensor& input,
                 THDGroup group_id = THDGroupWORLD) override;
  void gather(std::vector<at::Tensor>& output, at::Tensor& input,
              rank_type dst_rank, THDGroup group_id = THDGroupWORLD) override;
  void scatter(std::vector<at::Tensor>& input, at::Tensor& output,
               rank_type src_rank, THDGroup group_id = THDGroupWORLD) override;
  void allReduce(std::vector<at::Tensor>& data,
                 THDReduceOp operation,
                 THDGroup group_id = THDGroupWORLD) override;
  void allReduce(at::Tensor& data, THDReduceOp operation,
                 THDGroup group_id = THDGroupWORLD) override;
  void reduce(std::vector<at::Tensor>& data,
              THDReduceOp operation,
              rank_type dstRank,
              THDGroup group_id = THDGroupWORLD) override;
  void reduce(at::Tensor& data, THDReduceOp operation, rank_type dst_rank,
              THDGroup group_id = THDGroupWORLD) override;
  void broadcast(std::vector<at::Tensor>& data,
                 rank_type srcRank,
                 THDGroup group_id = THDGroupWORLD) override;
  void broadcast(at::Tensor& data, rank_type src_id,
                 THDGroup group_id = THDGroupWORLD) override;
  void send(Scalar& data, rank_type dst_id) override;
  void send(at::Tensor& data, rank_type dst_id) override;
  void receive(Scalar& data, rank_type src_id) override;
  rank_type receive(at::Tensor& data) override;
  void receive(at::Tensor& data, rank_type src_id) override;
  RequestGloo* isend(at::Tensor& data, rank_type dst_rank) override;
  RequestGloo* ireceive(at::Tensor& data, rank_type src_rank) override;
    
      masterCommandChannel->sendMessage(
    packMessage(Functions::tensorSyev, re, rv, a, jobz[0], uplo[0]),
    THDState::s_current_worker
  );
    
    void THDTensor_(bernoulli_DoubleTensor)(THDTensor *self, THDGenerator *_generator,
                                        THDDoubleTensor *p) {
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorBernoulli_DoubleTensor, self, _generator, p),
    THDState::s_current_worker
  );
}
    
    static inline uint16_t decodeUInt16BE(const uint8_t *data) {
  return (data[1]<<0) | (data[0]<<8);
}
    
    template <typename TensorDst>
void THDPInsertCopyFunctionFromMaster(
  THPCopyList& copyList,
  void (*copyFunc)(TensorDst *x, THDTensorDescriptor* z),
  PyTypeObject *srcType)
{
  auto wrapper = [copyFunc](PyObject* dst_, PyObject* src_) {
    TensorDst* dst = THPTypeInfo<TensorDst>::cdata(dst_);
    }
    }
    
    PowerIphone::~PowerIphone() {
	// TODO Auto-generated destructor stub
}

    
    	virtual Error put_data(const uint8_t *p_data, int p_bytes);
	virtual Error put_partial_data(const uint8_t *p_data, int p_bytes, int &r_sent);
    
    void WebSocketClient::set_verify_ssl_enabled(bool p_verify_ssl) {
    }
    
    	GodotContactPairContactResultCallback(btCollisionObject *p_self_object, Vector3 *p_results, int p_resultMax, const Set<RID> *p_exclude) :
			m_self_object(p_self_object),
			m_results(p_results),
			m_exclude(p_exclude),
			m_resultMax(p_resultMax),
			m_count(0) {}
    
      /// Get the local endpoint of the acceptor.
  /**
   * This function is used to obtain the locally bound endpoint of the acceptor.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @returns An object that represents the local endpoint of the acceptor.
   * Returns a default-constructed endpoint object if an error occurred and the
   * error handler did not throw an exception.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::system::error_code ec;
   * boost::asio::ip::tcp::endpoint endpoint = acceptor.local_endpoint(ec);
   * if (ec)
   * {
   *   // An error occurred.
   * }
   * @endcode
   */
  endpoint_type local_endpoint(boost::system::error_code& ec) const
  {
    return this->get_service().local_endpoint(this->get_implementation(), ec);
  }
    
    #endif // BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP

    
    #ifndef BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
#define BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
    
      // Consume multiple bytes from the beginning of the buffer.
  void consume(size_type count)
  {
    BOOST_ASIO_ASSERT(begin_offset_ + count <= end_offset_);
    begin_offset_ += count;
    if (empty())
      clear();
  }
    
      descriptor_write_op(int descriptor,
      const ConstBufferSequence& buffers, Handler& handler)
    : descriptor_write_op_base<ConstBufferSequence>(
        descriptor, buffers, &descriptor_write_op::do_complete),
      handler_(BOOST_ASIO_MOVE_CAST(Handler)(handler))
  {
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP

    
    // Calls to asio_handler_allocate and asio_handler_deallocate must be made from
// a namespace that does not contain any overloads of these functions. The
// boost_asio_handler_alloc_helpers namespace is defined here for that purpose.
namespace boost_asio_handler_alloc_helpers {
    }
    
    #include <boost/asio/detail/config.hpp>
#include <list>
#include <utility>
#include <boost/asio/detail/assert.hpp>
#include <boost/asio/detail/noncopyable.hpp>
    
    void Config::setPointScaleFactor(float pixelsInPoint)
{
    YGConfigSetPointScaleFactor(m_config, pixelsInPoint);
}
    
    void Node::setFlexBasis(double flexBasis)
{
    YGNodeStyleSetFlexBasis(m_node, flexBasis);
}