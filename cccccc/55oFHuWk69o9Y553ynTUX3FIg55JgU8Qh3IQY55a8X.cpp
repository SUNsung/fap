
        
        #include 'b2Triangle.h'
    
    			a_pMipmapImages[mip].paucEncodingBits = std::shared_ptr<unsigned char>(image.GetEncodingBits(), [](unsigned char *p) { delete[] p; });
			a_pMipmapImages[mip].uiEncodingBitsBytes = image.GetEncodingBitsBytes();
			a_pMipmapImages[mip].uiExtendedWidth = image.GetExtendedWidth();
			a_pMipmapImages[mip].uiExtendedHeight = image.GetExtendedHeight();
    
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
		RawImage* a_pMipmaps,
		int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    		m_sourcealphamix = SourceAlphaMix::UNKNOWN;
		m_boolBorderPixels = false;
		m_boolPunchThroughPixels = false;
    
    
    {	};
    
    
  /* an auxiliary macro to decode a UTF-8 character -- since we only use */
  /* hard-coded, self-converted data, no error checking is performed     */
#define GET_UTF8_CHAR( ch, p )                      \
          do                                        \
          {                                         \
            ch = (unsigned char)*p++;               \
            if ( ch >= 0x80 )                       \
            {                                       \
              FT_UInt  len_;                        \
                                                    \
                                                    \
              if ( ch < 0xE0 )                      \
              {                                     \
                len_ = 1;                           \
                ch  &= 0x1F;                        \
              }                                     \
              else if ( ch < 0xF0 )                 \
              {                                     \
                len_ = 2;                           \
                ch  &= 0x0F;                        \
              }                                     \
              else                                  \
              {                                     \
                len_ = 3;                           \
                ch  &= 0x07;                        \
              }                                     \
                                                    \
              for ( ; len_ > 0; len_-- )            \
                ch = ( ch << 6 ) | ( *p++ & 0x3F ); \
            }                                       \
          } while ( 0 )
    
            if (m_UsingPolyTree) FixupFirstLefts2(outRec2, outRec1);
    
    
    {  friend inline bool operator== (const IntPoint& a, const IntPoint& b)
  {
    return a.X == b.X && a.Y == b.Y;
  }
  friend inline bool operator!= (const IntPoint& a, const IntPoint& b)
  {
    return a.X != b.X  || a.Y != b.Y; 
  }
};
//------------------------------------------------------------------------------
    
    int opus_fft_alloc_arm_neon(kiss_fft_state *st);
void opus_fft_free_arm_neon(kiss_fft_state *st);
    
    /** 16x32 multiply, followed by a 16-bit shift right and 32-bit add.
    Result fits in 32 bits. */
#undef MAC16_32_Q16
#define MAC16_32_Q16(c, a, b) ADD32(c, MULT16_32_Q16(a, b))
    
    #endif /* OPUS_ARM_INLINE_MEDIA */
    
    /** Add two 16-bit values */
#define ADD16(a,b) ((opus_val16)((opus_val16)(a)+(opus_val16)(b)))
/** Subtract two 16-bit values */
#define SUB16(a,b) ((opus_val16)(a)-(opus_val16)(b))
/** Add two 32-bit values */
#define ADD32(a,b) ((opus_val32)(a)+(opus_val32)(b))
/** Subtract two 32-bit values */
#define SUB32(a,b) ((opus_val32)(a)-(opus_val32)(b))
    
    /*!
 * Initialize/reset the resampler state for a given pair of input/output sampling rates
*/
opus_int silk_resampler_init(
    silk_resampler_state_struct *S,                 /* I/O  Resampler state                                             */
    opus_int32                  Fs_Hz_in,           /* I    Input sampling rate (Hz)                                    */
    opus_int32                  Fs_Hz_out,          /* I    Output sampling rate (Hz)                                   */
    opus_int                    forEnc              /* I    If 1: encoder; if 0: decoder                                */
);
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
    
    { private:
  // default chunk size.
  static const size_t kChunkSize = 64 << 10UL;
  // maximum chunk size.
  static const size_t kMaxChunk = 128;
  // bool whether use hc
  bool use_lz4_hc_;
  // number of threads
  int nthread_;
  // number of writing threads
  int nthread_write_;
  // raw bytes
  size_t raw_bytes_, raw_bytes_index_, raw_bytes_value_;
  // encoded bytes
  size_t encoded_bytes_index_, encoded_bytes_value_;
  /*! \brief minimum index value */
  uint32_t min_index_;
  /*! \brief external memory column offset */
  std::vector<size_t> disk_offset_;
  // internal index
  CompressArray<StorageIndex> index_;
  // value set.
  CompressArray<bst_float> value_;
};
    
    using namespace std;
    
    using namespace std;
    
    // Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    }
    }
    
    #include <iostream>
#include <vector>
#include <cassert>
    
    
    {            res[level].push_back(node->val);
            if(node->left)
                q.push(make_pair(node->left, level + 1 ));
            if(node->right)
                q.push(make_pair(node->right, level + 1 ));
        }
    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
                stack.push(Command('print', command.node));
            }
        }
        return res;
    }
};
    
            vector<int> res;
        if(root == NULL)
            return res;