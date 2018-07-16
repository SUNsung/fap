
        
        #ifndef ATOM_BROWSER_UI_X_EVENT_DISABLER_H_
#define ATOM_BROWSER_UI_X_EVENT_DISABLER_H_
    
    bool IsUnresponsiveEventSuppressed() {
  return g_suppress_level > 0;
}
    
    #endif  // ATOM_COMMON_DRAGGABLE_REGION_H_

    
    namespace chrome {
    }
    
      // Returns the bounds with its size clamped to the min/max size.
  gfx::Size ClampSize(gfx::Size size) const;
    
    #endif  // ATOM_COMMON_COLOR_UTIL_H_

    
    void projectPoints(cv::InputArray objectPoints, cv::OutputArray imagePoints,
                   cv::InputArray _rvec,cv::InputArray _tvec,
                   const IntrinsicParams& param, cv::OutputArray jacobian);
    
                template<typename T>
            static __device__ __forceinline__ T atomicMin(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count = ::min(*address, val);
                do
                {
                    *address = count;
                } while (*address > count);
    }
    
    /** @file
 * @deprecated Use @ref cudev instead.
 */
    
    
    {}