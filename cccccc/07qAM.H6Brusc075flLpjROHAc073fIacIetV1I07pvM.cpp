
        
        #if defined(__APPLE__)
#include 'Darwin/Cache-Mac.cpp'
#else
    
    
    {} // end anonymous namespace
    
      bool IsFirstLine = true;
    
    #include 'swift/Demangling/Demangle.h'
#include 'swift/Demangling/Demangler.h'
#include <cstdio>
    
    private:
  bool enforceFilelistExclusion();
  bool readInputFilesFromCommandLine();
  bool readInputFilesFromFilelist();
  bool forAllFilesInFilelist(llvm::opt::Arg const *const pathArg,
                             llvm::function_ref<void(StringRef)> fn);
  bool addFile(StringRef file);
  Optional<std::set<StringRef>> readPrimaryFiles();
    
    #include 'swift/Basic/LLVM.h'
#include 'llvm/ADT/ArrayRef.h'
#include <string>
#include <vector>
    
    namespace Ui {
    class OpenURIDialog;
}
    
        for (recid = 0; recid < 4; recid++) {
        int i;
        int recid2;
        /* (4,4) encoded in DER. */
        unsigned char sigbder[8] = {0x30, 0x06, 0x02, 0x01, 0x04, 0x02, 0x01, 0x04};
        unsigned char sigcder_zr[7] = {0x30, 0x05, 0x02, 0x00, 0x02, 0x01, 0x01};
        unsigned char sigcder_zs[7] = {0x30, 0x05, 0x02, 0x01, 0x01, 0x02, 0x00};
        unsigned char sigbderalt1[39] = {
            0x30, 0x25, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x04, 0x02, 0x01, 0x04,
        };
        unsigned char sigbderalt2[39] = {
            0x30, 0x25, 0x02, 0x01, 0x04, 0x02, 0x20, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
        };
        unsigned char sigbderalt3[40] = {
            0x30, 0x26, 0x02, 0x21, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x01, 0x04,
        };
        unsigned char sigbderalt4[40] = {
            0x30, 0x26, 0x02, 0x01, 0x04, 0x02, 0x21, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
        };
        /* (order + r,4) encoded in DER. */
        unsigned char sigbderlong[40] = {
            0x30, 0x26, 0x02, 0x21, 0x00, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xBA, 0xAE, 0xDC,
            0xE6, 0xAF, 0x48, 0xA0, 0x3B, 0xBF, 0xD2, 0x5E,
            0x8C, 0xD0, 0x36, 0x41, 0x45, 0x02, 0x01, 0x04
        };
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigb64, recid) == 1);
        CHECK(secp256k1_ecdsa_recover(ctx, &pubkeyb, &rsig, msg32) == 1);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbder, sizeof(sigbder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyb) == 1);
        for (recid2 = 0; recid2 < 4; recid2++) {
            secp256k1_pubkey pubkey2b;
            CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sigb64, recid2) == 1);
            CHECK(secp256k1_ecdsa_recover(ctx, &pubkey2b, &rsig, msg32) == 1);
            /* Verifying with (order + r,4) should always fail. */
            CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbderlong, sizeof(sigbderlong)) == 1);
            CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyb) == 0);
        }
        /* DER parsing tests. */
        /* Zero length r/s. */
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder_zr, sizeof(sigcder_zr)) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigcder_zs, sizeof(sigcder_zs)) == 0);
        /* Leading zeros. */
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbderalt1, sizeof(sigbderalt1)) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbderalt2, sizeof(sigbderalt2)) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbderalt3, sizeof(sigbderalt3)) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbderalt4, sizeof(sigbderalt4)) == 0);
        sigbderalt3[4] = 1;
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbderalt3, sizeof(sigbderalt3)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyb) == 0);
        sigbderalt4[7] = 1;
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbderalt4, sizeof(sigbderalt4)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyb) == 0);
        /* Damage signature. */
        sigbder[7]++;
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbder, sizeof(sigbder)) == 1);
        CHECK(secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyb) == 0);
        sigbder[7]--;
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbder, 6) == 0);
        CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbder, sizeof(sigbder) - 1) == 0);
        for(i = 0; i < 8; i++) {
            int c;
            unsigned char orig = sigbder[i];
            /*Try every single-byte change.*/
            for (c = 0; c < 256; c++) {
                if (c == orig ) {
                    continue;
                }
                sigbder[i] = c;
                CHECK(secp256k1_ecdsa_signature_parse_der(ctx, &sig, sigbder, sizeof(sigbder)) == 0 || secp256k1_ecdsa_verify(ctx, &sig, msg32, &pubkeyb) == 0);
            }
            sigbder[i] = orig;
        }
    }
    
    // Bech32 is a string encoding format used in newer address types.
// The output consists of a human-readable part (alphanumeric), a
// separator character (1), and a base32 data section, the last
// 6 characters of which are a checksum.
//
// For more information, see BIP 173.
    
    std::string SSTTableFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'sst');
}
    
    
    {		for (unsigned int uiPixel = 0; uiPixel < PIXELS; uiPixel++)
		{
			m_fError += CalcPixelError(m_afrgbaDecodedColors[uiPixel], m_afDecodedAlphas[uiPixel],
										m_pafrgbaSource[uiPixel]);
		}
		
	}
    
    		m_mode = MODE_ETC1;
		m_boolDiff = m_pencodingbitsRGB8->individual.diff;
		m_boolFlip = m_pencodingbitsRGB8->individual.flip;
		if (m_boolDiff)
		{
			int iR2 = (int)(m_pencodingbitsRGB8->differential.red1 + m_pencodingbitsRGB8->differential.dred2);
			if (iR2 < 0)
			{
				iR2 = 0;
			}
			else if (iR2 > 31)
			{
				iR2 = 31;
			}
    }
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    /** 16x32 multiply, followed by a 16-bit shift right and 32-bit add.
    Result fits in 32 bits. */
#undef MAC16_32_Q16
static OPUS_INLINE opus_val32 MAC16_32_Q16_armv5e(opus_val32 c, opus_val16 a,
 opus_val32 b)
{
  int res;
  __asm__(
      '#MAC16_32_Q16\n\t'
      'smlawb %0, %1, %2, %3;\n'
      : '=r'(res)
      : 'r'(b), 'r'(a), 'r'(c)
  );
  return res;
}
#define MAC16_32_Q16(c, a, b) (MAC16_32_Q16_armv5e(c, a, b))
    
    /** 32-bit arithmetic shift right with rounding-to-nearest instead of rounding down */
#define PSHR32(a,shift) (SHR32((a)+((EXTEND32(1)<<((shift))>>1)),shift))
/** 32-bit arithmetic shift right where the argument can be negative */
#define VSHR32(a, shift) (((shift)>0) ? SHR32(a, shift) : SHL32(a, -(shift)))