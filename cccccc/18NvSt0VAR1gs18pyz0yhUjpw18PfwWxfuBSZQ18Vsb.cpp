
        
        
    {  bool rword_indicates_list_item;
  bool rword_likely_starts_idea;
  bool rword_likely_ends_idea;
};
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
    // A CostFunc that takes the variance of step into account in the cost.
int64_t DPPoint::CostWithVariance(const DPPoint* prev) {
  if (prev == nullptr || prev == this) {
    UpdateIfBetter(0, 1, nullptr, 0, 0, 0);
    return 0;
  }
    }
    
    
    {  // Best available image.
  Pix* pix_;
  // True if the source image is white-on-black.
  bool inverse_;
  // Block the word came from. If not null, block->re_rotation() takes the
  // 'untransformed' coordinates even further back to the original image.
  // Used only on the first DENORM in a chain.
  const BLOCK* block_;
  // Rotation to apply between translation to the origin and scaling.
  const FCOORD* rotation_;
  // Previous transformation in a chain.
  const DENORM* predecessor_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding x-coord. Owned by the DENORM.
  GenericVector<float>* x_map_;
  // Non-linear transformation maps directly from each integer offset from the
  // origin to the corresponding y-coord. Owned by the DENORM.
  GenericVector<float>* y_map_;
  // x-coordinate to be mapped to final_xshift_ in the result.
  float x_origin_;
  // y-coordinate to be mapped to final_yshift_ in the result.
  float y_origin_;
  // Scale factors for x and y coords. Applied to pre-rotation system.
  float x_scale_;
  float y_scale_;
  // Destination coords of the x_origin_ and y_origin_.
  float final_xshift_;
  float final_yshift_;
};
    
      // Removes the MAXIMUM element of the heap. (MIN from a MAX heap.) If entry is
  // not nullptr, the element is copied into *entry, otherwise it is discarded.
  // Time = O(n). Returns false if the heap was already empty.
  bool PopWorst(Pair* entry) {
    int worst_index = IndexOfWorst();
    if (worst_index < 0) return false;  // It cannot be empty!
    // Extract the worst element from the heap, leaving a hole at worst_index.
    if (entry != nullptr)
      *entry = heap_[worst_index];
    int heap_size = heap_.size() - 1;
    if (heap_size > 0) {
      // Sift the hole upwards to match the last element of the heap_
      Pair hole_pair = heap_[heap_size];
      int hole_index = SiftUp(worst_index, hole_pair);
      heap_[hole_index] = hole_pair;
    }
    heap_.truncate(heap_size);
    return true;
  }
    
    // A simple object cache which maps a string to an object of type T.
// Usually, these are expensive objects that are loaded from disk.
// Reference counting is performed, so every Get() needs to be followed later
// by a Free().  Actual deletion is accomplished by DeleteUnusedObjects().
template<typename T>
class ObjectCache {
 public:
  ObjectCache() = default;
  ~ObjectCache() {
    mu_.Lock();
    for (int i = 0; i < cache_.size(); i++) {
      if (cache_[i].count > 0) {
        tprintf('ObjectCache(%p)::~ObjectCache(): WARNING! LEAK! object %p '
                'still has count %d (id %s)\n',
                this, cache_[i].object, cache_[i].count,
                cache_[i].id.string());
      } else {
        delete cache_[i].object;
        cache_[i].object = nullptr;
      }
    }
    mu_.Unlock();
  }
    }
    
    	// ----------------------------------------------------------------------------------------------------
	// initialization of encoding state from a prior encoding using encoding bits
	// [a_uiSourceH,a_uiSourceV] is the location of the block in a_pimageSource
	// a_paucEncodingBits is the place to read the prior encoding
	// a_imageformat is used to determine how to interpret a_paucEncodingBits
	// a_errormetric was used for the prior encoding
	//
	void Block4x4::InitFromEtcEncodingBits(Image::Format a_imageformat,
											unsigned int a_uiSourceH, unsigned int a_uiSourceV,
											unsigned char *a_paucEncodingBits,
											Image *a_pimageSource,
											ErrorMetric a_errormetric)
	{
		Block4x4();
    }
    
    		void CalcBlockError(void);
    
    //  16384 * sqrt(2) * sin(kPi/9) * 2 / 3
static const tran_high_t sinpi_1_9 = 5283;
static const tran_high_t sinpi_2_9 = 9929;
static const tran_high_t sinpi_3_9 = 13377;
static const tran_high_t sinpi_4_9 = 15212;
    
    #define C_SUBFROM( res , a)\
    do {\
            CHECK_OVERFLOW_OP((res).r,-,(a).r)\
            CHECK_OVERFLOW_OP((res).i,-,(a).i)\
            (res).r -= (a).r;  (res).i -= (a).i; \
    }while(0)
#endif /* C_ADD defined */
    
    #define NORM_SCALING 16384
    
    #define EXTEND32(x) EXTEND32_(x, __FILE__, __LINE__)
static OPUS_INLINE int EXTEND32_(int x, char *file, int line)
{
   int res;
   if (!VERIFY_SHORT(x))
   {
      fprintf (stderr, 'EXTEND32: input is not short: %d in %s: line %d\n', x, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = x;
   celt_mips++;
   return res;
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
    
    /* Adds two signed 32-bit values in a way that can overflow, while not relying on undefined behaviour
   (just standard two's complement implementation-specific behaviour) */
#define silk_ADD32_ovflw(a, b)              ((opus_int32)((opus_uint32)(a) + (opus_uint32)(b)))
/* Subtractss two signed 32-bit values in a way that can overflow, while not relying on undefined behaviour
   (just standard two's complement implementation-specific behaviour) */
#define silk_SUB32_ovflw(a, b)              ((opus_int32)((opus_uint32)(a) - (opus_uint32)(b)))
    
        UBool         retVal  = FALSE;
    RegexPattern *pat     = NULL;
    RegexMatcher *matcher = NULL;
    
    #endif // __SCRIPTSET_H__

    
    void SearchIterator::setAttribute(USearchAttribute       attribute,
                                  USearchAttributeValue  value,
                                  UErrorCode            &status)
{
    if (U_SUCCESS(status)) {
        switch (attribute)
        {
        case USEARCH_OVERLAP :
            m_search_->isOverlap = (value == USEARCH_ON ? TRUE : FALSE);
            break;
        case USEARCH_CANONICAL_MATCH :
            m_search_->isCanonicalMatch = (value == USEARCH_ON ? TRUE : FALSE);
            break;
        case USEARCH_ELEMENT_COMPARISON :
            if (value == USEARCH_PATTERN_BASE_WEIGHT_IS_WILDCARD || value == USEARCH_ANY_BASE_WEIGHT_IS_WILDCARD) {
                m_search_->elementComparisonType = (int16_t)value;
            } else {
                m_search_->elementComparisonType = 0;
            }
            break;
        default:
            status = U_ILLEGAL_ARGUMENT_ERROR;
        }
    }
    if (value == USEARCH_ATTRIBUTE_VALUE_COUNT) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
    }
}
    
    U_NAMESPACE_END
    
    
//------------------------------------------------------------------------------
//
//   smpdtfmt_cleanup     Memory cleanup function, free/delete all
//                      cached memory.  Called by ICU's u_cleanup() function.
//
//------------------------------------------------------------------------------
UBool
SimpleDateFormatStaticSets::cleanup(void)
{
    delete gStaticSets;
    gStaticSets = NULL;
    gSimpleDateFormatStaticSetsInitOnce.reset();
    return TRUE;
}