
        
            /*
        Calculation of Sobel operator
        NOTE: the function cannot operate inplace
    */
    bool isSobel3x3Supported(const Size2D &size, BORDER_MODE border, s32 dx, s32 dy, Margin borderMargin = Margin());
    void Sobel3x3(const Size2D &size,
                  const u8 * srcBase, ptrdiff_t srcStride,
                  s16 * dstBase, ptrdiff_t dstStride,
                  s32 dx, s32 dy,
                  BORDER_MODE border, u8 borderValue, Margin borderMargin = Margin());
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        typename internal::VecTraits<T>::vec64 v_min = internal::vmin(v_src0, v_src1);
        typename internal::VecTraits<T>::vec64 v_max = internal::vmax(v_src0, v_src1);
        v_dst = internal::vqsub(v_max, v_min);
    }
    
    
    {            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            int16x8_t v_src = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src + j)));
            int16x8_t v_dst = vld1q_s16(dst + j);
            int16x4_t v_srclo = vget_low_s16(v_src), v_srchi = vget_high_s16(v_src);
            v_dst = vcombine_s16(vqmovn_s32(vaddw_s16(vmull_s16(v_srclo, v_srclo), vget_low_s16(v_dst))),
                                 vqmovn_s32(vaddw_s16(vmull_s16(v_srchi, v_srchi), vget_high_s16(v_dst))));
            vst1q_s16(dst + j, v_dst);
        }
    
    
    {
    {
    {            for (; j < size.width; j++)
                dst[j] = (s16)((s32)src0[j] + (s32)src1[j]);
        }
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
                int16x8_t tail02 = vreinterpretq_s16_u16(vaddl_u8(tail2, tail0));
            int16x8_t tail1x2 = vreinterpretq_s16_u16(vshll_n_u8(tail1, 1));
            int16x8_t taildx = vreinterpretq_s16_u16(vsubl_u8(tail2, tail0));
            int16x8_t taildy = vqaddq_s16(tail02, tail1x2);
    
             float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
         float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
         float32x4_t vline3_f32 = vcvtq_f32_s32(vline3_s32);
         float32x4_t vline4_f32 = vcvtq_f32_s32(vline4_s32);
    
                vec128 v_src = vld3q(src + js), v_dst;
            v_src.val[0] = vrev64q(v_src.val[0]);
            v_src.val[1] = vrev64q(v_src.val[1]);
            v_src.val[2] = vrev64q(v_src.val[2]);
    
    #endif  // TESSERACT_CCSTRUCT_DEBUGPIXA_H_

    
      // Adds a new point. Takes a copy - the pt doesn't need to stay in scope.
  // Add must be called on points in sequence along the line.
  void Add(const ICOORD& pt);
  // Associates a half-width with the given point if a point overlaps the
  // previous point by more than half the width, and its distance is further
  // than the previous point, then the more distant point is ignored in the
  // distance calculation. Useful for ignoring i dots and other diacritics.
  void Add(const ICOORD& pt, int halfwidth);
    
    class DLLSYM DIR128
{
  public:
    DIR128() = default;
    }
    
    #ifndef TESSERACT_CCMAIN_OTSUTHR_H_
#define TESSERACT_CCMAIN_OTSUTHR_H_
    
      void set_flag(REJ_FLAGS rej_flag) {
    if (rej_flag < 16)
      flags1.turn_on_bit (rej_flag);
    else
      flags2.turn_on_bit (rej_flag - 16);
  }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_common.h
 * \brief Common functions for caffeOp and caffeLoss symbols
 * \author Haoran Wang
*/
    
    
    
        info = MXNET_LAPACK_posv<DType>(MXNET_LAPACK_ROW_MAJOR, 'U',
      k, out.size(1), hadamard_prod.dptr_, hadamard_prod.stride_,
      out.dptr_, out.stride_);
  } else {
    Tensor<cpu, 2, DType> kr(Shape2(out.size(1), out.size(0)));
    AllocSpace(&kr);
    khatri_rao(kr, ts_arr);
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file cudnn_spatial_transformer-inl.h
 * \brief
 * \author Wei Wu
*/
#ifndef MXNET_OPERATOR_CUDNN_SPATIAL_TRANSFORMER_INL_H_
#define MXNET_OPERATOR_CUDNN_SPATIAL_TRANSFORMER_INL_H_
    
        ListNode* curNode = head;
    while(curNode != NULL){
        cout << curNode->val;
        if(curNode->next != NULL)
            cout << ' -> ';
        curNode = curNode->next;
    }
    
            int count[3] = {0};
        for(int i = 0 ; i < nums.size() ; i ++){
            assert(nums[i] >= 0 && nums[i] <= 2);
            count[nums[i]] ++;
        }
    
                cur = stack.top();
            stack.pop();
            res.push_back(cur->val);
            cur = cur->right;
    
    using namespace std;
    
                int new_level_num = 0;
            vector<int> level;
            for(int i = 0; i < level_num; i ++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
    }
    
    // Classic Non-Recursive algorithm for preorder traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
            TreeNode* cur = root;
        while(cur != NULL){
            if(cur->left == NULL){
                res.push_back(cur->val);
                cur = cur->right;
            }
            else{
                TreeNode* prev = cur->left;
                while(prev->right != NULL && prev->right != cur)
                    prev = prev->right;
    }
    }
    
    
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    int main(int, char**)
{
    // Setup Allegro
    al_init();
    al_install_keyboard();
    al_install_mouse();
    al_init_primitives_addon();
    al_set_new_display_flags(ALLEGRO_RESIZABLE);
    ALLEGRO_DISPLAY* display = al_create_display(1280, 720);
    al_set_window_title(display, 'Dear ImGui Allegro 5 example');
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_mouse_event_source());
    }
    
    
    {    return 0;
}

    
    // The data is first compressed with stb_compress() to reduce source code size,
// then encoded in Base85 to fit in a string so we can fit roughly 4 bytes of compressed data into 5 bytes of source code (suggested by @mmalex)
// (If we used 32-bits constants it would require take 11 bytes of source code to encode 4 bytes, and be endianness dependent)
// Note that even with compression, the output array is likely to be bigger than the binary file..
// Load compressed TTF fonts with ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF()
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);