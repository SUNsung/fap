
        
        HINSTANCE g_hInst = NULL;
D3D_DRIVER_TYPE g_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL g_featureLevel = D3D_FEATURE_LEVEL_11_0;
ID3D11Device* g_pd3dDevice = NULL;
ID3D11DeviceContext* g_pImmediateContext = NULL;
IDXGISwapChain* g_pSwapChain = NULL;
    
    CvRect cvGetValidDisparityROI( CvRect roi1, CvRect roi2, int minDisparity,
                              int numberOfDisparities, int SADWindowSize )
{
    return (CvRect)cv::getValidDisparityROI( roi1, roi2, minDisparity,
                                            numberOfDisparities, SADWindowSize );
}
    
        // version that calls dls 3 times, to avoid Cayley singularity
    for (int i = 0; i < 3; ++i)
    {
        // Make a random rotation
        cv::Mat pp = R_[i] * ( p - cv::repeat(mn, 1, p.cols) );
    }
    
    void CV_ModelEstimator2_Test::get_test_array_types_and_sizes( int /*test_case_idx*/,
                                                              vector<vector<Size> > &sizes, vector<vector<int> > &types )
{
    RNG &rng = ts->get_rng();
    checkPartialSubsets = (cvtest::randInt(rng) % 2 == 0);
    }
    
    #endif /* OPENCV_CUDA_WARP_REDUCE_HPP__ */

    
    CV_EXPORTS_W void max(InputArray src1, Scalar src2, OutputArray dst);
    
    #include <set>
    
      bool generate_in_pb2_grpc;
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
  signal(SIGINT, sigint_handler);
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/python/python_generator.h>
    
    
    
     public: // Insert/Update
  /// Insert value before/after pivot in (list: key). Return the length.
  /// May throw RedisListException
  int InsertBefore(const std::string& key, const std::string& pivot,
                   const std::string& value);
  int InsertAfter(const std::string& key, const std::string& pivot,
                  const std::string& value);
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
    void SyncPoint::LoadDependency(const std::vector<SyncPointPair>& dependencies) {
  impl_->LoadDependency(dependencies);
}
    
    
    {  m_jcreate_compaction_filter_methodid =
      AbstractCompactionFilterFactoryJni::getCreateCompactionFilterMethodId(env);
  if(m_jcreate_compaction_filter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}