
        
            // construct the multiplication matrix via schur compliment of the Macaulay
    // matrix
    Mtilde = M2_1 - M2_5.t()*M2_4;
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    #define CUSTOM_FUNCTION_ID 1000
    
    
    {  template <typename Tuple>
  static void TersePrintPrefixToStrings(const Tuple& t, Strings* strings) {
    ::std::stringstream ss;
    UniversalTersePrint(::std::tr1::get<0>(t), &ss);
    strings->push_back(ss.str());
  }
};
    
    
    {}  // namespace testing
    
    // Makes sure this header is not included before gtest.h.
#ifndef GTEST_INCLUDE_GTEST_GTEST_H_
# error Do not include gtest_pred_impl.h directly.  Include gtest.h instead.
#endif  // GTEST_INCLUDE_GTEST_GTEST_H_
    
    // This generic version is used when k is 0.
template <typename T, typename U>
inline void CopyArray(const T& from, U* to) { *to = from; }
    
    // scripts/fuse_gtest.py depends on gtest's own header being #included
// *unconditionally*.  Therefore these #includes cannot be moved
// inside #if GTEST_HAS_PARAM_TEST.
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-linked_ptr.h'
#include 'gtest/internal/gtest-port.h'
#include 'gtest/gtest-printers.h'
    
    
]]
    
    
    {  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}
    
    	GetModuleFileName(NULL, exePath, sizeof(exePath));
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    SEXP XGDMatrixCreateFromCSC_R(SEXP indptr,
                              SEXP indices,
                              SEXP data,
                              SEXP num_row) {
  SEXP ret;
  R_API_BEGIN();
  const int *p_indptr = INTEGER(indptr);
  const int *p_indices = INTEGER(indices);
  const double *p_data = REAL(data);
  size_t nindptr = static_cast<size_t>(length(indptr));
  size_t ndata = static_cast<size_t>(length(data));
  size_t nrow = static_cast<size_t>(INTEGER(num_row)[0]);
  std::vector<size_t> col_ptr_(nindptr);
  std::vector<unsigned> indices_(ndata);
  std::vector<float> data_(ndata);
    }
    
    
    {
    {
    {      CHECK_EQ(jenv->GetArrayLength(jindex), max_elem)
          << 'batch.index.length must equal batch.offset.back()';
      CHECK_EQ(jenv->GetArrayLength(jvalue), max_elem)
          << 'batch.index.length must equal batch.offset.back()';
      // cbatch is ready
      CHECK_EQ((*set_function)(set_function_handle, cbatch), 0)
          << XGBGetLastError();
      // release the elements.
      jenv->ReleaseLongArrayElements(
          joffset, reinterpret_cast<jlong *>(cbatch.offset), 0);
      jenv->DeleteLocalRef(joffset);
      if (jlabel != nullptr) {
        jenv->ReleaseFloatArrayElements(jlabel, cbatch.label, 0);
        jenv->DeleteLocalRef(jlabel);
      }
      if (jweight != nullptr) {
        jenv->ReleaseFloatArrayElements(jweight, cbatch.weight, 0);
        jenv->DeleteLocalRef(jweight);
      }
      jenv->ReleaseIntArrayElements(jindex, (jint*) cbatch.index, 0);
      jenv->DeleteLocalRef(jindex);
      jenv->ReleaseFloatArrayElements(jvalue, cbatch.value, 0);
      jenv->DeleteLocalRef(jvalue);
      jenv->DeleteLocalRef(batch);
      jenv->DeleteLocalRef(batchClass);
      ret_value = 1;
    } else {
      ret_value = 0;
    }
    jenv->DeleteLocalRef(iterClass);
    // only detach if it is a async call.
    if (jni_status == JNI_EDETACHED) {
      global_jvm->DetachCurrentThread();
    }
    return ret_value;
  } catch(dmlc::Error e) {
    // only detach if it is a async call.
    if (jni_status == JNI_EDETACHED) {
      global_jvm->DetachCurrentThread();
    }
    LOG(FATAL) << e.what();
    return -1;
  }
}
    
    struct GLFWwindow;
    
            ID3D10Texture2D *pTexture = NULL;
        D3D10_SUBRESOURCE_DATA subResource;
        subResource.pSysMem = pixels;
        subResource.SysMemPitch = desc.Width * 4;
        subResource.SysMemSlicePitch = 0;
        g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);
    
        // Destroy old Framebuffer:
    for (uint32_t i = 0; i < g_BackBufferCount; i++)
        if (g_BackBufferView[i])
            vkDestroyImageView(g_Device, g_BackBufferView[i], g_Allocator);
    for (uint32_t i = 0; i < g_BackBufferCount; i++)
        if (g_Framebuffer[i])
            vkDestroyFramebuffer(g_Device, g_Framebuffer[i], g_Allocator);
    if (g_RenderPass)
        vkDestroyRenderPass(g_Device, g_RenderPass, g_Allocator);
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
    
    MATCHER_P(BufMatches, expected, '') {
  folly::IOBufEqualTo eq;
  return eq(*arg, *expected);
}
    
    #include <folly/ConstexprMath.h>
#include <folly/Portability.h>
#include <folly/Range.h>
#include <folly/Utility.h>
#include <folly/lang/Exception.h>
#include <folly/lang/Ordering.h>
#include <folly/portability/Constexpr.h>
    
    TEST_F(OrderingTest, ordering) {
  EXPECT_EQ(-1, int(ordering::lt));
  EXPECT_EQ(0, int(ordering::eq));
  EXPECT_EQ(+1, int(ordering::gt));
}
    
    namespace folly {
    }
    
      T take() override {
    T item;
    while (!queue_.try_dequeue(item)) {
      sem_.wait();
    }
    return item;
  }
    
    namespace folly {
    }
    
    // Configure folly to enable INFO+ messages, and everything else to
// enable WARNING+.
//
// Set the default log handler to log asynchronously by default.
FOLLY_INIT_LOGGING_CONFIG('.=WARNING,folly=INFO; default:async=true');