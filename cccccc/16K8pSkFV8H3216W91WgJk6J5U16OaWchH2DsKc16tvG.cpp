
        
        // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    // static
void App::Call(const std::string& method,
               const base::ListValue& arguments) {
  if (method == 'Quit') {
    Quit();
  } else if (method == 'CloseAllWindows') {
    CloseAllWindows();
  } else if (method == 'CrashBrowser') {
    int* ptr = NULL;
    *ptr = 1;
  } else {
    NOTREACHED() << 'Calling unknown method ' << method << ' of App.';
  }
}
    
      virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    
    {}  // namespace nw
    
    void Menu::Popup(int x, int y, content::Shell* shell) {
  GdkEventButton* event = NULL; //FIXME: shell->web_contents()->GetRenderWidgetHostView()->GetLastMouseDown();
  uint32_t triggering_event_time = event ? event->time : GDK_CURRENT_TIME;
  gfx::Point point;
  if (!event) {
    // gfx::Rect bounds = shell->web_contents()->GetRenderWidgetHostView()->GetViewBounds();
    // point = gfx::Point(x + bounds.x(), y + bounds.y());
    DVLOG(1) << 'no last mouse down event';
    point = gfx::Point(x, y);
  }else
    point = gfx::Point(event->x_root, event->y_root);
    }
    
    namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    #include <google/protobuf/stubs/common.h>
namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    #include <string>
    
    #include <map>
#include <string>
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* context,
                string* error) const;
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    #include <THPP/Type.hpp>
    
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
    
    #endif

    
    
    
      masterCommandChannel->sendMessage(
    packMessage(Functions::tensorPstrf, ra, rpiv, a, uplo[0], tol),
    THDState::s_current_worker
  );
    
    namespace leveldb {
    }
    
    static void Usage() {
  fprintf(
      stderr,
      'Usage: leveldbutil command...\n'
      '   dump files...         -- dump contents of specified files\n'
      );
}
    
    #endif  // STORAGE_LEVELDB_TABLE_BLOCK_BUILDER_H_

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    #endif // BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP

    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
using std::function;
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
using boost::function;
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
    
    {private:
  static void barrier()
  {
#if defined(__ARM_ARCH_4__) \
    || defined(__ARM_ARCH_4T__) \
    || defined(__ARM_ARCH_5__) \
    || defined(__ARM_ARCH_5E__) \
    || defined(__ARM_ARCH_5T__) \
    || defined(__ARM_ARCH_5TE__) \
    || defined(__ARM_ARCH_5TEJ__) \
    || defined(__ARM_ARCH_6__) \
    || defined(__ARM_ARCH_6J__) \
    || defined(__ARM_ARCH_6K__) \
    || defined(__ARM_ARCH_6Z__) \
    || defined(__ARM_ARCH_6ZK__) \
    || defined(__ARM_ARCH_6T2__)
# if defined(__thumb__)
    // This is just a placeholder and almost certainly not sufficient.
    __asm__ __volatile__ ('' : : : 'memory');
# else // defined(__thumb__)
    int a = 0, b = 0;
    __asm__ __volatile__ ('swp %0, %1, [%2]'
        : '=&r'(a) : 'r'(1), 'r'(&b) : 'memory', 'cc');
# endif // defined(__thumb__)
#else
    // ARMv7 and later.
    __asm__ __volatile__ ('dmb' : : : 'memory');
#endif
  }
};
    
    template <typename Function, typename Context>
inline void invoke(const Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
    #define YG_NODE_STYLE_EDGE_PROPERTY(type, name, paramName)    \
  WIN_EXPORT void YGNodeStyleSet##name(const YGNodeRef node,  \
                                       const YGEdge edge,     \
                                       const type paramName); \
  WIN_EXPORT type YGNodeStyleGet##name(const YGNodeRef node, const YGEdge edge);
    
    struct Value
{
    static Value fromYGValue(YGValue const & ygValue)
    {
        return Value(static_cast<int>(ygValue.unit), ygValue.value);
    }
    }
    
    void Node::setJustifyContent(int justifyContent)
{
    YGNodeStyleSetJustifyContent(m_node, static_cast<YGJustify>(justifyContent));
}
    
    struct Size
{
    double width;
    double height;
    }
    
    
    {} // namespace facebook

    
    
    {}

    
    #pragma once
#include <fb/assert.h>
#include <utility>