
        
        // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    #include <string>
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'ui/gfx/point.h'
#include 'vector'
#include 'gtk/gtk.h'
    
    #include 'base/logging.h'
#include 'base/strings/string_util.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
    
      std::string key;
  std::string modifiers;
  option.GetString('key',&key);
  option.GetString('modifiers',&modifiers);
    
     protected:
  ~NwAppCrashBrowserFunction() override {}
    
      for(auto& data : params->data) {
    if (!writer->Write(data)) {
      *error = writer->error();
      writer->Reset();
      return false;
    }
  }
    
    ExtensionFunction::ResponseAction
NwObjCallObjectMethodAsyncFunction::Run() {
  EXTENSION_FUNCTION_VALIDATE(args_);
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
        void Canny3x3L2(const Size2D &size,
                    const u8 * srcBase, ptrdiff_t srcStride,
                    u8 * dstBase, ptrdiff_t dstStride,
                    f64 low_thresh, f64 high_thresh,
                    Margin borderMargin);
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
                l = l18u;
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
    
    {    func(size, srcBase, srcStride, dstBase, dstStride);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)shift;
#endif
}
    
                    vSum_0_4 = vmlaq_u16(vSum_0_4, vSum_4_8, vc4u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vSum_5_9, vc4u16);
                vSum_2_6 = vmlaq_u16(vSum_2_6, vSum_6_10, vc4u16);
                vSum_3_7 = vmlaq_u16(vSum_3_7, vSum_7_11, vc4u16);
    
    namespace CAROTENE_NS {
    }
    
        static void Clear(const nnvm::NodePtr& node) {
      if (node == nullptr || node->info.empty()) return;
      AGInfo& info = Get(node);
      if (info.grad_req != kNullOp) return;
      node->info.clear();
    }
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
    
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Prototxt' << value <<' more than a layer';
    caffe::LayerParameter *layer_param = new caffe::LayerParameter(net_param.layer(0));
    this->Get(head) = (*layer_param);
  }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_op.cc
 * \brief caffe operator
 * \author Haoran Wang
*/
#include './caffe_op-inl.h'
namespace mxnet {
namespace op {
    }
    }
    
    /*!
 *  Copyright (c) 2016 by Contributors
 * \file cv_api.h
 * \brief C API for opencv
 * \author Junyuan Xie
 */
#include <dmlc/base.h>
#include <mxnet/base.h>
#include <mxnet/ndarray.h>
#include <opencv2/opencv.hpp>
#include 'cv_api.h'
#include '../../src/c_api/c_api_common.h'
    
      std::vector<std::thread> workers;
  for (auto worker = size_t{0}; worker < num_threads; ++worker) {
    workers.push_back(std::thread([&] {
      try {
        hphp_thread_init();
        hphp_session_init(Treadmill::SessionKind::HHBBC);
        SCOPE_EXIT {
          hphp_context_exit();
          hphp_session_exit();
          hphp_thread_exit();
        };
    }
    }
    }
    
    void Assembler::cmpli(uint16_t bf, bool l, const Reg64& ra, Immed imm) {
  assert(imm.fits(HPHP::sz::word) && 'Immediate is too big');
  EmitDForm(10, rn((bf << 2) | (uint16_t)l), rn(ra), imm.w());
}
    
    const StaticString
  s_wrapper_type('wrapper_type'),
  s_stream_type('stream_type'),
  s_mode('mode'),
  s_unread_bytes('unread_bytes'),
  s_seekable('seekable'),
  s_timed_out('timed_out'),
  s_blocked('blocked'),
  s_eof('eof'),
  s_plainfile('plainfile'),
  s_dir('dir'),
  s_r('r');
    
    #endif

    
      bool valid() const { return !isClosed(); }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    struct storage128_t
{
    mars_boost::uint64_t data[2];
    }