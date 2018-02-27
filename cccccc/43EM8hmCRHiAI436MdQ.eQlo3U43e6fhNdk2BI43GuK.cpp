
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // ResourceOpKernel<T> is a virtual base class for resource op implementing
// interface type T. The inherited op looks up the resource name (determined by
// ContainerInfo), and creates a new resource if necessary.
//
// Requirements:
//  - Op must be marked as stateful.
//  - Op must have `container` and `shared_name` attributes. Empty `container`
//  means using the default container. Empty `shared_name` means private
//  resource.
//  - Subclass must override CreateResource().
//  - Subclass is encouraged to override VerifyResource().
template <typename T>
class ResourceOpKernel : public OpKernel {
 public:
  explicit ResourceOpKernel(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context,
                   context->allocate_persistent(DT_STRING, TensorShape({2}),
                                                &handle_, nullptr));
  }
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      double ComputeDualLoss(const double current_dual, const double example_label,
                         const double example_weight) const final {
    // For binary classification, there are 2 conjugate functions, one per
    // label value (-1 and 1).
    const double y_alpha = current_dual * example_label;  // y \alpha
    if (y_alpha < 0 || y_alpha > 1.0) {
      return std::numeric_limits<double>::max();
    }
    return (-y_alpha + 0.5 * gamma * current_dual * current_dual) *
           example_weight;
  }
    
    class Diagnostician {
 public:
  // Logs diagnostic information when CUDA appears to be misconfigured (e.g. is
  // not initializing).
  //
  // Note: if we're running on a machine that has no GPUs, we don't want to
  // produce very much log spew beyond saying, 'looks like there's no CUDA
  // kernel
  // module running'.
  //
  // Note: we use non-Google-File:: API here because we may be called before
  // InitGoogle has completed.
  static void LogDiagnosticInformation();
    }
    
    #ifndef TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_
#define TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_
    
    
    { private:
  enum { kBufferSize = 256 << 10 /* 256 kB */ };
  const int skip_header_lines_;
  Env* const env_;
  int64 line_number_;
  std::unique_ptr<RandomAccessFile> file_;  // must outlive input_buffer_
  std::unique_ptr<io::InputBuffer> input_buffer_;
};
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
    
    {  // Convert from content coordinates to window coordinates.
  // This code copied from chrome_web_contents_view_delegate_views.cc
  aura::Window* target_window = GetActiveNativeView(rfh);
  aura::Window* root_window = target_window->GetRootWindow();
  views::Widget* top_level_widget =
    views::Widget::GetTopLevelWidgetForNativeView(target_window);
  aura::client::ScreenPositionClient* screen_position_client =
        aura::client::GetScreenPositionClient(root_window);
  if (screen_position_client) {
    screen_position_client->ConvertPointToScreen(target_window,
             &screen_point);
  }
  set_delay_destruction(true);
  menu_runner_.reset(new views::MenuRunner(menu_model_.get(), views::MenuRunner::CONTEXT_MENU,
                                           base::Bind(&Menu::OnMenuClosed, base::Unretained(this))));
  menu_runner_->RunMenuAt(top_level_widget,
                       nullptr,
                       gfx::Rect(screen_point, gfx::Size()),
                       views::MENU_ANCHOR_TOPRIGHT,
                       ui::MENU_SOURCE_NONE);
  // It is possible for the same MenuMessageLoopAura to start a nested
  // message-loop while it is already running a nested loop. So make
  // sure the quit-closure gets reset to the outer loop's quit-closure
  // once the innermost loop terminates.
  {
    base::AutoReset<base::Closure> reset_quit_closure(&message_loop_quit_,
                                                      base::Closure());
  
    base::MessageLoop* loop = base::MessageLoop::current();
    base::MessageLoop::ScopedNestableTaskAllower allow(loop);
    base::RunLoop run_loop;
    message_loop_quit_ = run_loop.QuitClosure();
  
    run_loop.Run();
  }
  set_delay_destruction(false);
  if (pending_destruction())
    object_manager_->OnDeallocateObject(id_);
}
    
    
    {            size_t stFrame = 0;
            for (size_t iUtt = 0; iUtt < extraMaps.size(); iUtt++)
            {
                size_t numFramesInThisUtterance = lattices[iUtt]->getnumframes();
                size_t iParallelSeq = extraMaps[iUtt]; // i-th utterance belongs to iParallelSeq-th parallel sequence
                if (iParallelSeq >= parallelSeqStId && iParallelSeq < parallelSeqEnId)
                {
                    // this utterance has been selected
                    decimatedLattices->push_back(lattices[iUtt]);
                    decimatedBoundaryPtr->insert(decimatedBoundaryPtr->end(), boundaries.begin() + stFrame, boundaries.begin() + stFrame + numFramesInThisUtterance);
                    decimatedUidPtr->insert(decimatedUidPtr->end(), uids.begin() + stFrame, uids.begin() + stFrame + numFramesInThisUtterance);
                    decimatedExtraMapPtr->push_back(extraMaps[iUtt] - parallelSeqStId);
                }
                stFrame += numFramesInThisUtterance;
            }
        }
    
    #include 'stdafx.h'
#include 'Basics.h'
#include 'Actions.h'
#include 'ComputationNetwork.h'
#include 'ComputationNode.h'
#include 'DataReader.h'
#include 'DataWriter.h'
#include 'SimpleNetworkBuilder.h'
#include 'Config.h'
#include 'ScriptableObjects.h'
    
    #pragma once
    
    struct SourceFile // content of one source file  (only in this header because TextLocation's private member uses it)
{
    /*const*/ wstring path;                     // where it came from
    /*const*/ vector<wstring> lines;            // source code lines
    SourceFile(wstring location, wstring text); // from string, e.g. command line
    SourceFile(wstring path);                   // from file
};
    
    // type of data in this section
enum SectionType
{
    sectionTypeNull = 0,
    sectionTypeFile = 1,          // file header
    sectionTypeData = 2,          // data section
    sectionTypeLabel = 3,         // label data
    sectionTypeLabelMapping = 4,  // label mapping table (array of strings)
    sectionTypeStats = 5,         // data statistics
    sectionTypeCategoryLabel = 6, // labels in category format (float type, all zeros with a single 1.0 per column)
    sectionTypeMax
};
    
    
    {public:
    inline array_ref(_T* ptr, size_t size) throw()
        : data(ptr), n(size)
    {
    }
    inline array_ref() throw()
        : data(NULL), n(0)
    {
    } // in case we have a vector of this
    inline _T& operator[](size_t i) throw()
    {
        check_index(i);
        return data[i];
    }
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return n;
    }
    inline _T* begin()
    {
        return data;
    }
    inline _T* end()
    {
        return data + n;
    }
    inline void resize(size_t sz)
    {
        sz;
        assert(n == sz);
    } // allow compatibility with some functions
    // construct from other vector types
    template <class _V>
    inline array_ref(_V& v)
        : data(v.size() > 0 ? &v[0] : NULL), n((size_t) v.size())
    {
    }
};
    
        float4 operator>=(const float4& other) const
    {
        return _mm_cmpge_ps(v, other);
    }
    float4 operator<=(const float4& other) const
    {
        return _mm_cmple_ps(v, other);
    }
    
    static bool got_sigint = false;
    
            // The actual processing.
        std::string prefix('Hello ');
        reply_.set_message(prefix + request_.name());
    
    #include <iostream>
#include <memory>
#include <string>