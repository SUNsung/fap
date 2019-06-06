
        
        	void EncodeMipmaps(float *a_pafSourceRGBA,
		unsigned int a_uiSourceWidth,
		unsigned int a_uiSourceHeight,
		Image::Format a_format,
		ErrorMetric a_eErrMetric,
		float a_fEffort,
		unsigned int a_uiJobs,
		unsigned int a_uiMaxJobs,
		unsigned int a_uiMaxMipmaps,
		unsigned int a_uiMipFilterFlags,
		RawImage* a_pMipmapImages,
		int *a_piEncodingTime_ms, 
		bool a_bVerboseOutput)
	{
		auto mipWidth = a_uiSourceWidth;
		auto mipHeight = a_uiSourceHeight;
		int totalEncodingTime = 0;
		for(unsigned int mip = 0; mip < a_uiMaxMipmaps && mipWidth >= 1 && mipHeight >= 1; mip++)
		{
			float* pImageData = nullptr;
			float* pMipImage = nullptr;
    }
    }
    
    	protected:
    
    	// pixel indices for different block halves
	const unsigned int Block4x4Encoding_ETC1::s_auiLeftPixelMapping[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	const unsigned int Block4x4Encoding_ETC1::s_auiRightPixelMapping[8] = { 8, 9, 10, 11, 12, 13, 14, 15 };
	const unsigned int Block4x4Encoding_ETC1::s_auiTopPixelMapping[8] = { 0, 1, 4, 5, 8, 9, 12, 13 };
	const unsigned int Block4x4Encoding_ETC1::s_auiBottomPixelMapping[8] = { 2, 3, 6, 7, 10, 11, 14, 15 };
    
    std::ostream& operator <<(std::ostream &s, const IntPoint &p);
std::ostream& operator <<(std::ostream &s, const Path &p);
std::ostream& operator <<(std::ostream &s, const Paths &p);
    
    #ifdef OPUS_ARM_INLINE_MEDIA