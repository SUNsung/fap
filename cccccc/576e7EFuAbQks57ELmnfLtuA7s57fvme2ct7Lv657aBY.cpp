
        
        namespace Ui {
    class SignVerifyMessageDialog;
}
    
    
    {    /* d = (a0*2) * a3 */
    'leaq (%%r10,%%r10,1),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rbx\n'
    'movq %%rdx,%%rcx\n'
    /* d += (a1*2) * a2 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c = a4 * a4 */
    'movq %%r14,%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* a4 *= 2 */
    'addq %%r14,%%r14\n'
    /* d += a0 * a4 */
    'movq %%r10,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d+= (a1*2) * a3 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a2 * a2 */
    'movq %%r12,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * a0 */
    'movq %%r10,%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a1 * a4 */
    'movq %%r11,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += (a2*2) * a3 */
    'leaq (%%r12,%%r12,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* a0 *= 2 */
    'addq %%r10,%%r10\n'
    /* c += a0 * a1 */
    'movq %%r10,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a2 * a4 */
    'movq %%r12,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a3 * a3 */
    'movq %%r13,%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a0 * a2 (last use of %%r10) */
    'movq %%r10,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0),t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* c += a1 * a1 */
    'movq %%r11,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a3 * a4 */
    'movq %%r13,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rbx only) */
    'shrdq $52,%%rcx,%%rbx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rbx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'D'(r)
: '%rax', '%rbx', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    
static void secp256k1_gej_add_ge(secp256k1_gej *r, const secp256k1_gej *a, const secp256k1_ge *b) {
    /* Operations: 7 mul, 5 sqr, 4 normalize, 21 mul_int/add/negate/cmov */
    static const secp256k1_fe fe_1 = SECP256K1_FE_CONST(0, 0, 0, 0, 0, 0, 0, 1);
    secp256k1_fe zz, u1, u2, s1, s2, t, tt, m, n, q, rr;
    secp256k1_fe m_alt, rr_alt;
    int infinity, degenerate;
    VERIFY_CHECK(!b->infinity);
    VERIFY_CHECK(a->infinity == 0 || a->infinity == 1);
    }
    
    static void secp256k1_hmac_sha256_initialize(secp256k1_hmac_sha256_t *hash, const unsigned char *key, size_t keylen) {
    int n;
    unsigned char rkey[64];
    if (keylen <= 64) {
        memcpy(rkey, key, keylen);
        memset(rkey + keylen, 0, 64 - keylen);
    } else {
        secp256k1_sha256_t sha256;
        secp256k1_sha256_initialize(&sha256);
        secp256k1_sha256_write(&sha256, key, keylen);
        secp256k1_sha256_finalize(&sha256, rkey);
        memset(rkey + 32, 0, 32);
    }
    }
    
        /* Create random point */
    random_scalar_order(&rand);
    secp256k1_scalar_get_b32(s_rand, &rand);
    CHECK(secp256k1_ec_pubkey_create(ctx, &point, s_rand) == 1);
    
    int secp256k1_ecdsa_recoverable_signature_serialize_compact(const secp256k1_context* ctx, unsigned char *output64, int *recid, const secp256k1_ecdsa_recoverable_signature* sig) {
    secp256k1_scalar r, s;
    }
    
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
    
        // C escapes
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\nBaz\\t\' Spam=\'\\rEggs\' Octals=\'\\1a\\11\\17\\18\\81\\377\\378\\400\\2222\' Final=Check', {
            {'Foo', 'Bar\nBaz\t'},
            {'Spam', '\rEggs'},
            {'Octals', '\1a\11\17\1' '881\377\37' '8\40' '0\222' '2'},
            {'Final', 'Check'},
        });
    CheckParseTorReplyMapping(
        'Valid=Mapping Escaped=\'Escape\\\\\'', {
            {'Valid', 'Mapping'},
            {'Escaped', 'Escape\\'},
        });
    CheckParseTorReplyMapping(
        'Valid=Mapping Bare=\'Escape\\\'', {});
    CheckParseTorReplyMapping(
        'OneOctal=\'OneEnd\\1\' TwoOctal=\'TwoEnd\\11\'', {
            {'OneOctal', 'OneEnd\1'},
            {'TwoOctal', 'TwoEnd\11'},
        });
    
    #ifndef BITCOIN_BECH32_H
#define BITCOIN_BECH32_H
    
        j0 = input[0];
    j1 = input[1];
    j2 = input[2];
    j3 = input[3];
    j4 = input[4];
    j5 = input[5];
    j6 = input[6];
    j7 = input[7];
    j8 = input[8];
    j9 = input[9];
    j10 = input[10];
    j11 = input[11];
    j12 = input[12];
    j13 = input[13];
    j14 = input[14];
    j15 = input[15];
    
      /**
   * Moves the iterator to the beginning of the text line.
   * This class implements this functionality by moving it to the zero indexed
   * blob of the first (leftmost) word of the row.
   */
  virtual void RestartRow();
    
    
/**********************************************************************
 * split_word
 *
 * Split a given WERD_RES in place into two smaller words for recognition.
 * split_pt is the index of the first blob to go in the second word.
 * The underlying word is left alone, only the TWERD (and subsequent data)
 * are split up.  orig_blamer_bundle is set to the original blamer bundle,
 * and will now be owned by the caller.  New blamer bundles are forged for the
 * two pieces.
 **********************************************************************/
void Tesseract::split_word(WERD_RES *word,
                           int split_pt,
                           WERD_RES **right_piece,
                           BlamerBundle **orig_blamer_bundle) const {
  ASSERT_HOST(split_pt >0 && split_pt < word->chopped_word->NumBlobs());
    }
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    // Clean up the bounding boxes from the polygonal approximation by
// expanding slightly, then clipping to the blobs from the original_word
// that overlap. If not null, the block provides the inverse rotation.
void BoxWord::ClipToOriginalWord(const BLOCK* block, WERD* original_word) {
  for (int i = 0; i < length_; ++i) {
    TBOX box = boxes_[i];
    // Expand by a single pixel, as the poly approximation error is 1 pixel.
    box = TBOX(box.left() - 1, box.bottom() - 1,
               box.right() + 1, box.top() + 1);
    // Now find the original box that matches.
    TBOX original_box;
    C_BLOB_IT b_it(original_word->cblob_list());
    for (b_it.mark_cycle_pt(); !b_it.cycled_list(); b_it.forward()) {
      TBOX blob_box = b_it.data()->bounding_box();
      if (block != nullptr)
        blob_box.rotate(block->re_rotation());
      if (blob_box.major_overlap(box)) {
        original_box += blob_box;
      }
    }
    if (!original_box.null_box()) {
      if (NearlyEqual<int>(original_box.left(), box.left(), kBoxClipTolerance))
        box.set_left(original_box.left());
      if (NearlyEqual<int>(original_box.right(), box.right(),
                           kBoxClipTolerance))
        box.set_right(original_box.right());
      if (NearlyEqual<int>(original_box.top(), box.top(), kBoxClipTolerance))
        box.set_top(original_box.top());
      if (NearlyEqual<int>(original_box.bottom(), box.bottom(),
                           kBoxClipTolerance))
        box.set_bottom(original_box.bottom());
    }
    original_box = original_word->bounding_box();
    if (block != nullptr)
      original_box.rotate(block->re_rotation());
    boxes_[i] = box.intersection(original_box);
  }
  ComputeBoundingBox();
}
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
      // Adds an element with a weight of 1.
  void add(double x, double y);
  // Adds an element with a specified weight.
  void add(double x, double y, double weight);
  // Adds a whole LLSQ.
  void add(const LLSQ& other);
  // Deletes an element with a weight of 1.
  void remove(double x, double y);
  int32_t count() const {  // no of elements
    return static_cast<int>(total_weight + 0.5);
  }
    
        DIR128 & operator= (         //assign of int16_t
    int16_t value) {               //value to assign
      value %= MODULUS;          //modulo arithmetic
      if (value < 0)
        value += MODULUS;        //done properly
      dir = (int8_t) value;
      return *this;
    }
    int8_t operator- (             //subtraction
      const DIR128 & minus) const//for signed result
    {
                                 //result
      int16_t result = dir - minus.dir;
    }
    
      Pix* pix() const {
    return pix_;
  }
  void set_pix(Pix* pix) {
    pix_ = pix;
  }
  bool inverse() const {
    return inverse_;
  }
  void set_inverse(bool value) {
    inverse_ = value;
  }
  const DENORM* RootDenorm() const {
    if (predecessor_ != nullptr)
      return predecessor_->RootDenorm();
    return this;
  }
  const DENORM* predecessor() const {
    return predecessor_;
  }
  // Accessors - perhaps should not be needed.
  float x_scale() const {
    return x_scale_;
  }
  float y_scale() const {
    return y_scale_;
  }
  const BLOCK* block() const {
    return block_;
  }
  void set_block(const BLOCK* block) {
    block_ = block;
  }
    
    		//Recurse and split on pinch points
		b2Polygon pA,pB;
		b2Polygon pin(xv,yv,vNum);
		if (ResolvePinchPoint(pin,pA,pB)){
			b2Triangle* mergeA = new b2Triangle[pA.nVertices];
			b2Triangle* mergeB = new b2Triangle[pB.nVertices];
			int32 nA = TriangulatePolygon(pA.x,pA.y,pA.nVertices,mergeA);
			int32 nB = TriangulatePolygon(pB.x,pB.y,pB.nVertices,mergeB);
			if (nA==-1 || nB==-1){
				delete[] mergeA;
				delete[] mergeB;
				return -1;
			}
			for (int32 i=0; i<nA; ++i){
				results[i].Set(mergeA[i]);
			}
			for (int32 i=0; i<nB; ++i){
				results[nA+i].Set(mergeB[i]);
			}
			delete[] mergeA;
			delete[] mergeB;
			return (nA+nB);
		}
    
    #ifndef B2_TRIANGLE_H
#define B2_TRIANGLE_H
    
    		inline unsigned int GetSourceH(void)
		{
			return m_uiSourceH;
		}
    
    		inline Mode GetMode(void)
		{
			return m_mode;
		}
    
    	// ----------------------------------------------------------------------------------------------------
	// try version 3 of the degenerate search
	// degenerate encodings use basecolor movement and a subset of the selectors to find useful encodings
	// each subsequent version of the degenerate search uses more basecolor movement and is less likely to
	//		be successfull
	//
	void Block4x4Encoding_ETC1::TryDegenerates3(void)
	{
    }
    
    
#define AF_BLUE_STRINGSET_MAX_LEN  8
    
    #   define C_MUL(m,a,b) \
      do{ (m).r = SUB32(S_MUL((a).r,(b).r) , S_MUL((a).i,(b).i)); \
          (m).i = ADD32(S_MUL((a).r,(b).i) , S_MUL((a).i,(b).r)); }while(0)
    
    void opus_ifft_neon(const kiss_fft_state *st,
                    const kiss_fft_cpx *fin,
                    kiss_fft_cpx *fout);
    
    
    {   if (!VERIFY_INT(a) || !VERIFY_INT(b))
   {
      fprintf (stderr, 'DIV32: inputs are not int/short: %d %d in %s: line %d\n', (int)a, (int)b, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a/b;
   if (!VERIFY_INT(res))
   {
      fprintf (stderr, 'DIV32: output is not int: %d in %s: line %d\n', (int)res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=70;
   return res;
}
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
    namespace leveldb {
namespace log {
    }
    }
    
    TableCache::~TableCache() {
  delete cache_;
}
    
    //////////////////////////////////////////////////////////////////////
    
    
    {
    {}}
    
    
    {
    {}}
    
      /*
   * Create an uncounted array if we can.
   *
   * If this collection is an OuterHandle, then we need to do a full check on
   * this array for things like circularity.  If we're an InnerHandle, someone
   * already checked that, but we want to check for whether it's uncounted to
   * use a better representation.  For the OuterHandle case, we just delegate
   * to APCArray below (which will do the full DataWalker pass).
   */
  if (level == APCHandleLevel::Inner && apcExtension::UseUncounted &&
      !array->empty()) {
    DataWalker walker(DataWalker::LookupFeature::HasObjectOrResource);
    auto const features = walker.traverseData(const_cast<ArrayData*>(array));
    assertx(!features.isCircular);
    if (!features.hasObjectOrResource) {
      auto const makeUncounted = [&] () {
        if (isVectorCollection(obj->collectionType())) {
          return APCArray::MakeUncountedVec(const_cast<ArrayData*>(array));
        }
        return APCArray::MakeUncountedDict(const_cast<ArrayData*>(array));
      };
      return WrapArray(
        { makeUncounted(), getMemSize(array) + sizeof(APCTypedValue) },
        obj->collectionType()
      );
    }
  }
    
      static void SetParsedIni(IniSettingMap &ini, const std::string confStr,
                           const std::string &filename, bool constants_only,
                           bool is_system);
    
    String ArrayDirectory::path() {
  if (!m_it) {
    return empty_string();
  }
    }
    
    
    { private:
  int mkdir_recursive(const String& path, int mode);
};
    
    #include 'hphp/runtime/base/file.h'
    
    
    {}
    
    template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 1, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 1, rate, fillCols);
}
    
    ScriptSet::~ScriptSet() {
}
    
    SharedBreakIterator::~SharedBreakIterator() {
  delete ptr;
}
    
    U_NAMESPACE_BEGIN
    
    #endif  // __SIGNIFICANTDIGITINTERVAL_H__

    
    void
SimpleTimeZone::deleteTransitionRules(void) {
    if (initialRule != NULL) {
        delete initialRule;
    }
    if (firstTransition != NULL) {
        delete firstTransition;
    }
    if (stdRule != NULL) {
        delete stdRule;
    }
    if (dstRule != NULL) {
        delete dstRule;
    }
    clearTransitionRules();
 }
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeMatcher* pointer
 * and return the pointer.
 */
UnicodeMatcher* StringMatcher::toMatcher() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeMatcher *nonconst_base = static_cast<UnicodeMatcher *>(nonconst_this);
  
  return nonconst_base;
}
    
        /**
     * Implement UnicodeFunctor
     * @return a copy of the object.
     */
    virtual UnicodeFunctor* clone() const;
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextMultiline(label, (char*)str->c_str(), str->capacity() + 1, size, flags, InputTextCallback, &cb_user_data);
}

    
    // Usage:
//   binary_to_compressed_c.exe [-base85] [-nocompress] <inputfile> <symbolname>
// Usage example:
//   # binary_to_compressed_c.exe myfont.ttf MyFont > myfont.cpp
//   # binary_to_compressed_c.exe -base85 myfont.ttf MyFont > myfont.cpp
    
    static void ImGui_ImplGlfw_UpdateGamepads()
{
    ImGuiIO& io = ImGui::GetIO();
    memset(io.NavInputs, 0, sizeof(io.NavInputs));
    if ((io.ConfigFlags & ImGuiConfigFlags_NavEnableGamepad) == 0)
        return;
    }
    
    
    {    // Set mouse position
    io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
    POINT pos;
    if (HWND active_window = ::GetForegroundWindow())
        if (active_window == g_hWnd || ::IsChild(active_window, g_hWnd))
            if (::GetCursorPos(&pos) && ::ScreenToClient(g_hWnd, &pos))
                io.MousePos = ImVec2((float)pos.x, (float)pos.y);
}
    
    // finish.
void assembly_builder::visit(unaryop_expr_syntax &node)
{
	if (constexpr_expected == false) {
		// value_result
		node.rhs->accept(*this);
		if (value_result == nullptr) {
			return;
		}
		if (node.op == unaryop::minus) {
			value_result = builder.CreateNeg(value_result);
		}
	}
	else {
		// constexpr
		node.rhs->accept(*this);
		if (value_result == nullptr) {
			return;
		}
		if (node.op == unaryop::minus) {
			const_result = -const_result;
		}
	}
    }
    
            InitializeNativeTarget();
        InitializeNativeTargetAsmPrinter();
        InitializeNativeTargetAsmParser();
        
        for (auto t : runtime->get_runtime_symbols())
            sys::DynamicLibrary::AddSymbol(get<0>(t), get<1>(t));