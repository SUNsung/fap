
        
        # define TYPED_TEST(CaseName, TestName) \
  template <typename gtest_TypeParam_> \
  class GTEST_TEST_CLASS_NAME_(CaseName, TestName) \
      : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  bool gtest_##CaseName##_##TestName##_registered_ GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTest< \
          CaseName, \
          ::testing::internal::TemplateSel< \
              GTEST_TEST_CLASS_NAME_(CaseName, TestName)>, \
          GTEST_TYPE_PARAMS_(CaseName)>::Register(\
              '', #CaseName, #TestName, 0); \
  template <typename gtest_TypeParam_> \
  void GTEST_TEST_CLASS_NAME_(CaseName, TestName)<gtest_TypeParam_>::TestBody()
    
      void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }
    
    #include <string.h>
    
    	// ----------------------------------------------------------------------------------------------------
	// calculate the error between the source pixel and the decoded pixel
	// the error amount is base on the error metric
	//
	float Block4x4Encoding::CalcPixelError(ColorFloatRGBA a_frgbaDecodedColor, float a_fDecodedAlpha,
											ColorFloatRGBA a_frgbaSourcePixel)
	{
    }
    
    		typedef struct
		{
			unsigned base : 8;
			unsigned table : 4;
			unsigned multiplier : 4;
			unsigned selectors0 : 8;
			unsigned selectors1 : 8;
			unsigned selectors2 : 8;
			unsigned selectors3 : 8;
			unsigned selectors4 : 8;
			unsigned selectors5 : 8;
		} Data;
    
    #else  /* not FIXED_POINT*/
    
    #define MIN16(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum 16-bit value.   */
#define MAX16(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum 16-bit value.   */
#define MIN32(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum 32-bit value.   */
#define MAX32(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum 32-bit value.   */
#define IMIN(a,b) ((a) < (b) ? (a) : (b))   /**< Minimum int value.   */
#define IMAX(a,b) ((a) > (b) ? (a) : (b))   /**< Maximum int value.   */
#define UADD32(a,b) ((a)+(b))
#define USUB32(a,b) ((a)-(b))
    
    #define opus_fft(_st, _fin, _fout, arch) \
   ((void)(arch), opus_fft_neon(_st, _fin, _fout))
    
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
    
    
    {  CacheBench* cache_bench_;
};
    
    
    {}  // namespace rocksdb

    
      // Start a transaction
  Transaction* txn = txn_db->BeginTransaction(write_options);
  assert(txn);
    
      // Commit transaction
  s = txn->Commit();
  assert(s.ok());
  delete txn;
    
    // Take a string representation of option names and  values, apply them into the
// base_options, and return the new options as a result. The string has the
// following format:
//   'write_buffer_size=1024;max_write_buffer_number=2'
// Nested options config is also possible. For example, you can define
// BlockBasedTableOptions as part of the string for block-based table factory:
//   'write_buffer_size=1024;block_based_table_factory={block_size=4k};'
//   'max_write_buffer_num=2'
Status GetColumnFamilyOptionsFromString(
    const ColumnFamilyOptions& base_options,
    const std::string& opts_str,
    ColumnFamilyOptions* new_options);
    
      // The name of the column family where the thread is currently
  // It would be set to empty string if the thread does not involve
  // in any column family.
  const std::string cf_name;