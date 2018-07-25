
        
            UINT createDeviceFlags = 0;
    
    void ComputeExtrinsicRefine(const Mat& imagePoints, const Mat& objectPoints, Mat& rvec,
                            Mat&  tvec, Mat& J, const int MaxIter,
                            const IntrinsicParams& param, const double thresh_cond);
CV_EXPORTS Mat ComputeHomography(Mat m, Mat M);
    
            // cross two lines
        Point2f origin1 = quad_corners[0];
        Point2f dir1 = quad_corners[1] - quad_corners[0];
        Point2f origin2 = quad_corners[2];
        Point2f dir2 = quad_corners[3] - quad_corners[2];
        double angle = acos(dir1.dot(dir2)/(norm(dir1)*norm(dir2)));
        if(cvIsNaN(angle) || cvIsInf(angle) || angle < 0.5 || angle > CV_PI - 0.5) continue;
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdFft.Runtime.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
    void cv::cuda::flip(InputArray _src, OutputArray _dst, int flipCode, Stream& stream)
{
    typedef void (*func_t)(const GpuMat& src, GpuMat& dst, int flipCode, cudaStream_t stream);
    static const func_t funcs[6][4] =
    {
        {NppMirror<CV_8U, nppiMirror_8u_C1R>::call, 0, NppMirror<CV_8U, nppiMirror_8u_C3R>::call, NppMirror<CV_8U, nppiMirror_8u_C4R>::call},
        {0,0,0,0},
        {NppMirror<CV_16U, nppiMirror_16u_C1R>::call, 0, NppMirror<CV_16U, nppiMirror_16u_C3R>::call, NppMirror<CV_16U, nppiMirror_16u_C4R>::call},
        {0,0,0,0},
        {NppMirror<CV_32S, nppiMirror_32s_C1R>::call, 0, NppMirror<CV_32S, nppiMirror_32s_C3R>::call, NppMirror<CV_32S, nppiMirror_32s_C4R>::call},
        {NppMirror<CV_32F, nppiMirror_32f_C1R>::call, 0, NppMirror<CV_32F, nppiMirror_32f_C3R>::call, NppMirror<CV_32F, nppiMirror_32f_C4R>::call}
    };
    }