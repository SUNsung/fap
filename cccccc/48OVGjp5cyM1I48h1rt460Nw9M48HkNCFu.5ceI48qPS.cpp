
        
        
    { private:
  std::unordered_set<string> debug_urls_;
};
    
    
    {
    {}  // namespace functor
}  // namespace tensorflow
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    namespace internal {
template <typename T>
struct functor_traits<scalar_sigmoid_fast_derivative_op<T> > {
  enum {
    Cost = NumTraits<T>::AddCost * 2 + NumTraits<T>::MulCost,
    PacketAccess = packet_traits<T>::HasAdd && packet_traits<T>::HasMul &&
                   packet_traits<T>::HasNegate
  };
};
}  // namespace internal
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace tensorflow {
#define REGISTER_COMPLEX(D, R, C)                         \
  REGISTER_KERNEL_BUILDER(Name('Angle')                   \
                              .Device(DEVICE_##D)         \
                              .TypeConstraint<C>('T')     \
                              .TypeConstraint<R>('Tout'), \
                          UnaryOp<D##Device, functor::get_angle<C>>);
    }
    
    namespace tensorflow {
namespace functor {
DEFINE_UNARY2(get_angle, complex64, complex128);
}  // namespace functor
}  // namespace tensorflow
    
      Tensor indices;
  Tensor scores;
  GetTopLabels(outputs, how_many_labels, &indices, &scores);
  tensorflow::TTypes<float>::Flat scores_flat = scores.flat<float>();
  tensorflow::TTypes<int32>::Flat indices_flat = indices.flat<int32>();
  for (int pos = 0; pos < how_many_labels; ++pos) {
    const int label_index = indices_flat(pos);
    const float score = scores_flat(pos);
    LOG(INFO) << labels_list[label_index] << ' (' << label_index
              << '): ' << score;
  }
    
    namespace base {
class FilePath;
}
    
    bool IsUnresponsiveEventSuppressed() {
  return g_suppress_level > 0;
}
    
    // Wrapper used to keep track of the lifetime of a WebContents.
// Lives on the UI thread.
class PrintingUIWebContentsObserver : public content::WebContentsObserver {
 public:
  explicit PrintingUIWebContentsObserver(content::WebContents* web_contents);
    }
    
    #ifndef ATOM_BROWSER_API_ATOM_API_NET_H_
#define ATOM_BROWSER_API_ATOM_API_NET_H_
    
        // Setup style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
                ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    #undef STB_TEXTEDIT_STRING
#undef STB_TEXTEDIT_CHARTYPE
#define STB_TEXTEDIT_STRING             ImGuiTextEditState
#define STB_TEXTEDIT_CHARTYPE           ImWchar
#define STB_TEXTEDIT_GETWIDTH_NEWLINE   -1.0f
#include 'stb_textedit.h'
    
                // Bullet
            ImGui::Button('Button##3');
            ImGui::SameLine(0.0f, spacing);
            ImGui::BulletText('Bullet text');
    
        // Update OS mouse position
    ImGui_ImplWin32_UpdateMousePos();
    
    void AbstractOptionHandler::setCumulative(bool f)
{
  updateFlags(FLAG_CUMULATIVE, f);
}
    
    namespace aria2 {
    }
    
      /**
   * Removes current announce URL from its group and inserts it before the
   * first element of the group.
   * The internal announce group pointer points to the first element of the
   * first group after this call.
   */
  void announceSuccess();
    
    #endif // DOWNLOAD_EVENT_LISTENER_H

    
    namespace aria2 {
    }