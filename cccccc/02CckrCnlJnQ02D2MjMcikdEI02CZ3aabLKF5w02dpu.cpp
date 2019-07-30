
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    private:
    Ui::SignVerifyMessageDialog *ui;
    WalletModel *model;
    const PlatformStyle *platformStyle;
    
    
    {    /* d += a3 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rcx\n'
    'movq %%rdx,%%r15\n'
    /* d += a2 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d = a0 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c = a4 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* d += a4 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a0 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a4 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
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
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a1 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a4 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a2 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a1 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b2 (last use of %%r10 = a0) */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0), t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* d += a4 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rcx only) */
    'shrdq $52,%%r15,%%rcx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rcx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'b'(b), 'D'(r)
: '%rax', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    #include <stdint.h>
#include <string>
#include <vector>
    
    ; ROTATE_ARGS
; Rotate values of symbols a...h
%macro ROTATE_ARGS 0
%xdefine TMP_ h
%xdefine h g
%xdefine g f
%xdefine f e
%xdefine e d
%xdefine d c
%xdefine c b
%xdefine b a
%xdefine a TMP_
%endm
    
    
    {  ASSERT_TRUE(!ParseInternalKey(Slice('bar'), &decoded));
}
    
    @param y_plane input image: 8-bit unsigned 1-channel image @ref CV_8UC1.
@param uv_plane input image: 8-bit unsigned 2-channel image @ref CV_8UC2.
@param prims vector of drawing primitivies
*/
GAPI_EXPORTS void render(cv::Mat& y_plane, cv::Mat& uv_plane , const Prims& prims);
    
        // Marshalling helper for G-types and its Host types. Helps G-API
    // to store G types in internal generic containers for further
    // processing. Implements the following callbacks:
    //
    // * wrap() - converts user-facing G-type into an internal one
    //   for internal storage.
    //   Used when G-API operation is instantiated (G<Kernel>::on(),
    //   etc) during expressing a pipeline. Mostly returns input
    //   value 'as is' except the case when G-type is a template. For
    //   template G-classes, calls custom wrap() from Traits.
    //   The value returned by wrap() is then wrapped into GArg() and
    //   stored in G-API metadata.
    //
    //   Example:
    //   - cv::GMat arguments are passed as-is.
    //   - integers, pointers, STL containers, user types are passed as-is.
    //   - cv::GArray<T> is converted to cv::GArrayU.
    //
    // * wrap_in() / wrap_out() - convert Host type associated with
    //   G-type to internal representation type.
    //
    //   - For 'simple' (non-template) G-types, returns value as-is.
    //     Example: cv::GMat has host type cv::Mat, when user passes a
    //              cv::Mat, system stores it internally as cv::Mat.
    //
    //   - For 'complex' (template) G-types, utilizes custom
    //     wrap_in()/wrap_out() as described in Traits.
    //     Example: cv::GArray<T> has host type std::vector<T>, when
    //              user passes a std::vector<T>, system stores it
    //              internally as VectorRef (with <T> stripped away).
    template<typename T, class Custom = void> struct WrapValue
    {
        static auto wrap(const T& t) ->
            typename std::remove_reference<T>::type
        {
            return static_cast<typename std::remove_reference<T>::type>(t);
        }
    }
    
    
    {    EXPECT_EQ(0, cv::countNonZero(out_mat != out_mat_ocv));
}
    
    #include <algorithm>
#include <iostream>
#include <vector>
    
        std::vector<Point> fpts(3);
    std::vector<Point> tpts(3);
    
    //==================================================================================================
    
        vector<double> desMethCmp;
    Ptr<Feature2D> b;
    
    /** Get global log tag */
CV_EXPORTS cv::utils::logging::LogTag* getGlobalLogTag();
    
    void VideoStreamPlaybackGDNative::play() {
    }
    
    	void set_vertices(const PoolVector<Vector3> &p_vertices);
	PoolVector<Vector3> get_vertices() const;
    
    struct HashMapHasherDefault {
    }
    
    
    {		SafeRefCount refcount;
		Vector<StringName> path;
		Vector<StringName> subpath;
		StringName concatenated_subpath;
		bool absolute;
		bool has_slashes;
		mutable bool hash_cache_valid;
		mutable uint32_t hash_cache;
	};
    
    Mutex *pool_vector_lock = NULL;
    
    	if (snd_device_name_hint(-1, 'rawmidi', &hints) < 0)
		return ERR_CANT_OPEN;
    
    	void lock() const;
	void unlock() const;
    
    #ifdef COREMIDI_ENABLED
    
    	GDCLASS(AudioStreamEditorPlugin, EditorPlugin);
    
    int main() {
  volatile int x = 0;
  emscripten_sleep(1);
  int jmpval = setjmp(buf);
  if (!jmpval) {
    x++;                  // should be properly restored once longjmp jumps back
    first();              // when executed, setjmp returns 1
    printf('skipped\n');  // does not print
  } else if (jmpval == 1) {  // when first() jumps back, setjmp returns 1
    printf('result: %d %d\n', x, jmpval);  // prints
    x++;
    emscripten_sleep(1);
    second();                 // when executed, setjmp returns -1
    emscripten_sleep(1);
  } else if (jmpval == -1) {  // when second() jumps back, setjmp returns -1
    printf('result: %d %d\n', x, jmpval);  // prints
  }
  emscripten_sleep(1);
  finish(x);
}

    
    /* NurbsSampling */
#define GLU_OBJECT_PARAMETRIC_ERROR        100208
#define GLU_OBJECT_PARAMETRIC_ERROR_EXT    100208
#define GLU_OBJECT_PATH_LENGTH             100209
#define GLU_OBJECT_PATH_LENGTH_EXT         100209
#define GLU_PATH_LENGTH                    100215
#define GLU_PARAMETRIC_ERROR               100216
#define GLU_DOMAIN_DISTANCE                100217
    
      // Does this device use tilingPatternFill()?  If this returns false,
  // tiling pattern fills will be reduced to a series of other drawing
  // operations.
  virtual GBool useTilingPatternFill() { return gTrue; }
    
    // A '1' in this array means the character is white space.  A '1' or
// '2' means the character ends a name or command.
static const char specialChars[256] = {
  1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,   // 0x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 1x
  1, 0, 0, 0, 0, 2, 0, 0, 2, 2, 0, 0, 0, 0, 0, 2,   // 2x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0,   // 3x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 4x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0,   // 5x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 6x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0,   // 7x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 8x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 9x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // ax
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // bx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // cx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // dx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // ex
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0    // fx
};
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    
    
    void PreScanOutputDev::paintTransparencyGroup(GfxState *state, double * /*bbox*/)
{
  check(state->getFillColorSpace(), state->getFillColor(),
        state->getFillOpacity(), state->getBlendMode());
}
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
      if (obj->dictLookup('RC', &tmp)->isNum()) {
    repeatCount = tmp.getNum();
  }
  tmp.free();
    
      // parse from a 'Media Play Parameters' dictionary
  void parseMediaPlayParameters(Object* playObj);
  // parse from a 'Media Screen Parameters' dictionary
  void parseMediaScreenParameters(Object* screenObj);
    
      virtual GBool getColor(int x, int y, SplashColorPtr c) { return gFalse; }