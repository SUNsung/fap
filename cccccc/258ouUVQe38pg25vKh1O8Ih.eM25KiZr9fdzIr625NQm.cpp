
        
        // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    
    {  int result = 0;
  RenderThread::Get()->Send(new ShellViewHostMsg_AllocateId(
      routing_id,
      &result));
  return scope.Escape(v8::Integer::New(isolate, result));
}
    
    void Clipboard::Clear() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
}
    
      option.GetString('type', &type_);
  option.GetString('label', &label_);
  option.GetString('tooltip', &tooltip_);
  option.GetBoolean('checked', &is_checked_);
  option.GetBoolean('enabled', &is_enabled_);
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodAsync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodAsyncFunction);
};
    
    class b2Triangle{
public:
	float* x;
    float* y;
	b2Triangle();
	b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3);
	~b2Triangle();
	bool IsInside(float32 _x, float32 _y);
	void Set(const b2Triangle& toMe);
    }
    
    				
					// for RGB8A1, set source alpha to 0.0 or 1.0
					// set punch through flag
					if (imageformat == Image::Format::RGB8A1 ||
						imageformat == Image::Format::SRGB8A1)
					{
						if (m_afrgbaSource[uiPixel].fA >= 0.5f)
						{
							m_afrgbaSource[uiPixel].fA = 1.0f;
						}
						else
						{
							m_afrgbaSource[uiPixel].fA = 0.0f;
							m_boolPunchThroughPixels = true;
						}
					}
    
    
    {	};
    
      THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/
    
    #   define C_FIXDIV(c,div) \
        do {    DIVSCALAR( (c).r , div);  \
                DIVSCALAR( (c).i  , div); }while (0)
    
    #define SHR16(a, shift) SHR16_(a, shift, __FILE__, __LINE__)
static OPUS_INLINE short SHR16_(int a, int shift, char *file, int line)
{
   int res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(shift))
   {
      fprintf (stderr, 'SHR16: inputs are not short: %d >> %d in %s: line %d\n', a, shift, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a>>shift;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'SHR16: output is not short: %d in %s: line %d\n', res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips++;
   return res;
}
#define SHL16(a, shift) SHL16_(a, shift, __FILE__, __LINE__)
static OPUS_INLINE short SHL16_(int a, int shift, char *file, int line)
{
   int res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(shift))
   {
      fprintf (stderr, 'SHL16: inputs are not short: %d %d in %s: line %d\n', a, shift, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a<<shift;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'SHL16: output is not short: %d in %s: line %d\n', res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips++;
   return res;
}
    
    /* (a32 * b32) >> 16 */
#undef silk_SMULWW
static OPUS_INLINE opus_int32 silk_SMULWW_armv4(opus_int32 a, opus_int32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
    '#silk_SMULWW\n\t'
    'smull %0, %1, %2, %3\n\t'
    : '=&r'(rd_lo), '=&r'(rd_hi)
    : '%r'(a), 'r'(b)
  );
  return (rd_hi<<16)+(rd_lo>>16);
}
#define silk_SMULWW(a, b) (silk_SMULWW_armv4(a, b))