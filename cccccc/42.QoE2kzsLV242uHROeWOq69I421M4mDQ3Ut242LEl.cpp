
        
            secp256k1_context_set_error_callback(tctx, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(tctx, counting_illegal_callback_fn, &ecount);
    CHECK(secp256k1_ec_pubkey_create(tctx, &point, s_one) == 1);
    
    void test_ecdsa_recovery_end_to_end(void) {
    unsigned char extra[32] = {0x00};
    unsigned char privkey[32];
    unsigned char message[32];
    secp256k1_ecdsa_signature signature[5];
    secp256k1_ecdsa_recoverable_signature rsignature[5];
    unsigned char sig[74];
    secp256k1_pubkey pubkey;
    secp256k1_pubkey recpubkey;
    int recid = 0;
    }
    
    makeCommaSepLists('#define TINYFORMAT_ARGTYPES_%(j)d %(list)s',
                  'class T%(i)d')
    
    const UniValue& UniValue::get_array() const
{
    if (typ != VARR)
        throw std::runtime_error('JSON value is not an array as expected');
    return *this;
}
    
        int64_t vi64 = -82;
    UniValue v5(vi64);
    BOOST_CHECK(v5.isNum());
    BOOST_CHECK_EQUAL(v5.getValStr(), '-82');
    
    void add(const Size2D &size,
         const u8 * src0Base, ptrdiff_t src0Stride,
         const s16 * src1Base, ptrdiff_t src1Stride,
         s16 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    namespace CAROTENE_NS {
    }
    
    #define SPLIT_ASM2(sgn, bits) __asm__ ( \
                                          'vld2.' #bits ' {d0, d2}, [%[in0]]            \n\t' \
                                          'vld2.' #bits ' {d1, d3}, [%[in1]]            \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL2(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3' \
                                      );
#define SPLIT_ASM3(sgn, bits) __asm__ ( \
                                          'vld3.' #bits ' {d0, d2, d4}, [%[in0]]        \n\t' \
                                          'vld3.' #bits ' {d1, d3, d5}, [%[in1]]        \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          'vst1.' #bits ' {d4-d5}, [%[out2]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), [out2] 'r' (dst2 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL3(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5' \
                                      );
#define SPLIT_ASM4(sgn, bits) __asm__ ( \
                                          'vld4.' #bits ' {d0, d2, d4, d6}, [%[in0]]    \n\t' \
                                          'vld4.' #bits ' {d1, d3, d5, d7}, [%[in1]]    \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          'vst1.' #bits ' {d4-d5}, [%[out2]]            \n\t' \
                                          'vst1.' #bits ' {d6-d7}, [%[out3]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), [out2] 'r' (dst2 + dj), [out3] 'r' (dst3 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL4(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                      );
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0, const typename internal::VecTraits<T>::vec64 & v_src1,
              typename internal::VecTraits<T>::unsign::vec64 & v_dst) const
    {
        v_dst = internal::vcge(v_src0, v_src1);
    }
    
    #ifdef CAROTENE_NEON
#include <arm_neon.h>
#include 'intrinsics.hpp'
#endif
    
    template <>
void rshiftConst<0>(const Size2D &size,
                    const s16 * srcBase, ptrdiff_t srcStride,
                    u8 * dstBase, ptrdiff_t dstStride,
                    CONVERT_POLICY cpolicy)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
            while(i + 16 <= size.width)
        {
            size_t lim = std::min(i + DOT_UINT_BLOCKSIZE, size.width) - 16;
    }
    
    
    {		PathCombine(userConEmuCfgPath, userConfigDirPath, L'user-ConEmu.xml');
	}
	else // '/c [path]' was specified and 'vendor/ConEmu.xml.default' config exists, copy Cmder 'vendor/ConEmu.xml.default' file to '[user specified path]/config/user_ConEmu.xml'.
	{
		if ( ! CopyFile(defaultCfgPath, userCfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy vendor/ConEmu.xml.default file to [user specified path]/config/user_ConEmu.xml! Access Denied.'
				: L'Failed to copy vendor/ConEmu.xml.default file to [user specified path]/config/user_ConEmu.xml!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
		PathCombine(userConEmuCfgPath, userConfigDirPath, L'user-ConEmu.xml');
	}
    
    /// BFS
/// No need to store level information in the queue :-)
///
/// Time Complexity: O(n), where n is the number of nodes in the tree
/// Space Complexity: O(n)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    }
    }
    
            while(!output.empty()){
            res.push_back((output.top())->val);
            output.pop();
        }