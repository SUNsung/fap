
        
        HINSTANCE g_hInst = NULL;
D3D_DRIVER_TYPE g_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL g_featureLevel = D3D_FEATURE_LEVEL_11_0;
ID3D11Device* g_pd3dDevice = NULL;
ID3D11DeviceContext* g_pImmediateContext = NULL;
IDXGISwapChain* g_pSwapChain = NULL;
    
    
    {
    {
    {
    {                        const float eps = 1e-4f;
                        //TODO: perhaps it is better to normalize the cross product by norms of the tangent vectors
                        if (fabs(tangentVector_1.cross(tangentVector_2)) < eps)
                        {
                            isGeneralPosition = false;
                        }
                    }
                }
            }
        }
        while(!isGeneralPosition);
    }
    else
    {
        //create points in a degenerate position (there are at least 3 points belonging to the same line)
    
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
    
    CV_EXPORTS_W void compare(InputArray src1, Scalar src2, OutputArray dst, int cmpop);
    
    #include 'test/core/util/test_config.h'
#include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
      // Return the current qps (i.e query count divided by the time since this
  // QpsGauge object created (or Reset() was called))
  long Get();
    
    namespace grpc {
    }
    
    #include 'test/cpp/util/test_credentials_provider.h'