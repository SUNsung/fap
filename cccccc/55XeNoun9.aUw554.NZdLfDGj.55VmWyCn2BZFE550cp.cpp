
        
          /// Gets the non-blocking mode of the acceptor.
  /**
   * @returns @c true if the acceptor's synchronous operations will fail with
   * boost::asio::error::would_block if they are unable to perform the requested
   * operation immediately. If @c false, synchronous operations will block
   * until complete.
   *
   * @note The non-blocking mode has no effect on the behaviour of asynchronous
   * operations. Asynchronous operations will never fail with the error
   * boost::asio::error::would_block.
   */
  bool non_blocking() const
  {
    return this->get_service().non_blocking(this->get_implementation());
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #include <boost/asio/detail/config.hpp>
#include <boost/asio/buffer.hpp>
#include <boost/asio/detail/array_fwd.hpp>
#include <boost/asio/detail/socket_types.hpp>
    
    #include <boost/asio/detail/addressof.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_sequence_adapter.hpp>
#include <boost/asio/detail/descriptor_ops.hpp>
#include <boost/asio/detail/fenced_block.hpp>
#include <boost/asio/detail/reactor_op.hpp>
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
    // Calls to asio_handler_allocate and asio_handler_deallocate must be made from
// a namespace that does not contain any overloads of these functions. The
// boost_asio_handler_alloc_helpers namespace is defined here for that purpose.
namespace boost_asio_handler_alloc_helpers {
    }
    
      // Remove the descriptor from /dev/poll. Since this function is only called
  // during a fork, we can apply the change immediately.
  ::pollfd ev = { 0, 0, 0 };
  ev.fd = descriptor;
  ev.events = POLLREMOVE;
  ev.revents = 0;
  ::write(dev_poll_fd_, &ev, sizeof(ev));
    
    
    {    // Restore modified DX state
    ctx->RSSetScissorRects(old.ScissorRectsCount, old.ScissorRects);
    ctx->RSSetViewports(old.ViewportsCount, old.Viewports);
    ctx->RSSetState(old.RS); if (old.RS) old.RS->Release();
    ctx->OMSetBlendState(old.BlendState, old.BlendFactor, old.SampleMask); if (old.BlendState) old.BlendState->Release();
    ctx->OMSetDepthStencilState(old.DepthStencilState, old.StencilRef); if (old.DepthStencilState) old.DepthStencilState->Release();
    ctx->PSSetShaderResources(0, 1, &old.PSShaderResource); if (old.PSShaderResource) old.PSShaderResource->Release();
    ctx->PSSetSamplers(0, 1, &old.PSSampler); if (old.PSSampler) old.PSSampler->Release();
    ctx->PSSetShader(old.PS); if (old.PS) old.PS->Release();
    ctx->VSSetShader(old.VS); if (old.VS) old.VS->Release();
    ctx->VSSetConstantBuffers(0, 1, &old.VSConstantBuffer); if (old.VSConstantBuffer) old.VSConstantBuffer->Release();
    ctx->IASetPrimitiveTopology(old.PrimitiveTopology);
    ctx->IASetIndexBuffer(old.IndexBuffer, old.IndexBufferFormat, old.IndexBufferOffset); if (old.IndexBuffer) old.IndexBuffer->Release();
    ctx->IASetVertexBuffers(0, 1, &old.VertexBuffer, &old.VertexBufferStride, &old.VertexBufferOffset); if (old.VertexBuffer) old.VertexBuffer->Release();
    ctx->IASetInputLayout(old.InputLayout); if (old.InputLayout) old.InputLayout->Release();
}
    
                ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    struct Value
{
    static Value fromYGValue(YGValue const & ygValue)
    {
        return Value(static_cast<int>(ygValue.unit), ygValue.value);
    }
    }
    
    /* static */ void Config::destroy(Config * node)
{
    delete node;
}
    
        friend class Node;
    
    
#ifdef LOG_TAG
# define ALOGV(...) ::facebook::alog::logv(LOG_TAG, __VA_ARGS__)
# define ALOGD(...) ::facebook::alog::logd(LOG_TAG, __VA_ARGS__)
# define ALOGI(...) ::facebook::alog::logi(LOG_TAG, __VA_ARGS__)
# define ALOGW(...) ::facebook::alog::logw(LOG_TAG, __VA_ARGS__)
# define ALOGE(...) ::facebook::alog::loge(LOG_TAG, __VA_ARGS__)
# define ALOGF(...) ::facebook::alog::logf(LOG_TAG, __VA_ARGS__)
#endif
    
    // Reference counting smart pointer. This is designed to work with the
// Countable class or other implementations in the future. It is designed in a
// way to be both efficient and difficult to misuse. Typical usage is very
// simple once you learn the patterns (and the compiler will help!):
//
// By default, the internal pointer is null.
//   RefPtr<Foo> ref;
//
// Object creation requires explicit construction:
//   RefPtr<Foo> ref = createNew<Foo>(...);
//
// Or if the constructor is not public:
//   RefPtr<Foo> ref = adoptRef(new Foo(...));
//
// But you can implicitly create from nullptr:
//   RefPtr<Foo> maybeRef = cond ? ref : nullptr;
//
// Move/Copy Construction/Assignment are straightforward:
//   RefPtr<Foo> ref2 = ref;
//   ref = std::move(ref2);
//
// Destruction automatically drops the RefPtr's reference as expected.
//
// Upcasting is implicit but downcasting requires an explicit cast:
//   struct Bar : public Foo {};
//   RefPtr<Bar> barRef = static_cast<RefPtr<Bar>>(ref);
//   ref = barRef;
//
template <class T>
class RefPtr {
public:
  constexpr RefPtr() :
    m_ptr(nullptr)
  {}
    }
    
    
    {    /* Try all next moves from the current coordinate x, y */
    for (k = 0; k < 8; k++)
    {
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol))
        {
            sol[next_x][next_y] = movei;
            if (solveKTUtil(next_x, next_y, movei + 1, sol,
                            xMove, yMove) == true)
                return true;
            else
                sol[next_x][next_y] = -1; // backtracking
        }
    }
    return false;
}
    
        //check that left diagonal to the current cell should not have queen
    int p = row, q = column;
    while (p >= 0 && q >= 0)
    {
        if (board[p][q] == 'Q')
            return false;
        p--; q--;
    }