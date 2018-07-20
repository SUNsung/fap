bool Reader::readObject(Token& tokenStart) {
  Token tokenName;
  std::string name;
  Value init(objectValue);
  currentValue().swapPayload(init);
  currentValue().setOffsetStart(tokenStart.start_ - begin_);
  while (readToken(tokenName)) {
    bool initialTokenOk = true;
    while (tokenName.type_ == tokenComment && initialTokenOk)
      initialTokenOk = readToken(tokenName);
    if (!initialTokenOk)
      break;
    if (tokenName.type_ == tokenObjectEnd && name.empty()) // empty object
      return true;
    name = '';
    if (tokenName.type_ == tokenString) {
      if (!decodeString(tokenName, name))
        return recoverFromError(tokenObjectEnd);
    } else if (tokenName.type_ == tokenNumber && features_.allowNumericKeys_) {
      Value numberName;
      if (!decodeNumber(tokenName, numberName))
        return recoverFromError(tokenObjectEnd);
      name = numberName.asString();
    } else {
      break;
    }
    }
    }
    
    namespace file_descriptor {
PyObject* NewFileMessageTypesByName(const FileDescriptor* descriptor);
    }
    
    #include <Python.h>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
    class GeneratorFactory {
 public:
  GeneratorFactory();
  virtual ~GeneratorFactory();
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15>
internal::ValueArray15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8,
    T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15) {
  return internal::ValueArray15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12,
      v13, v14, v15);
}
    
    
    {  // Assuming T is defined in namespace foo, in the next statement,
  // the compiler will consider all of:
  //
  //   1. foo::operator<< (thanks to Koenig look-up),
  //   2. ::operator<< (as the current namespace is enclosed in ::),
  //   3. testing::internal2::operator<< (thanks to the using statement above).
  //
  // The operator<< whose type matches T best will be picked.
  //
  // We deliberately allow #2 to be a candidate, as sometimes it's
  // impossible to define #1 (e.g. when foo is ::std, defining
  // anything in it is undefined behavior unless you are a compiler
  // vendor.).
  *os << value;
}
    
    // Implements typed tests.
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    void freeifaddrs(struct ifaddrs* addrs) {
	struct ifaddrs* last = NULL;
	struct ifaddrs* cursor = addrs;
	while (cursor) {
		delete[] cursor->ifa_name;
		delete cursor->ifa_addr;
		delete cursor->ifa_netmask;
		last = cursor;
		cursor = cursor->ifa_next;
		delete last;
	}
}

    
    PowerIphone::~PowerIphone() {
	// TODO Auto-generated destructor stub
}

    
    #include 'core/error_list.h'
#include 'websocket_multiplayer.h'
#include 'websocket_peer.h'
    
    protected:
	void _notification(int p_what);
	static void _bind_methods();
    
    
#ifndef PCFREAD_H_
#define PCFREAD_H_
    
    
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
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
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    #undef MULT16_32_Q15
static inline int MULT16_32_Q15(int a, int b)
{
    int c;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (c): 'i' (15));
    return c;
}
    
    #undef    silk_ADD_LSHIFT
static OPUS_INLINE opus_int32 silk_ADD_LSHIFT(opus_int32 a, opus_int32 b, opus_int32 shift){
    opus_int32 ret;
    ops_count += 1;
    ret = a + (b << shift);
    return ret;                /* shift >= 0*/
}
#undef    silk_ADD_LSHIFT32
static OPUS_INLINE opus_int32 silk_ADD_LSHIFT32(opus_int32 a, opus_int32 b, opus_int32 shift){
    opus_int32 ret;
    ops_count += 1;
    ret = a + (b << shift);
    return ret;                /* shift >= 0*/
}
#undef    silk_ADD_LSHIFT_uint
static OPUS_INLINE opus_uint32 silk_ADD_LSHIFT_uint(opus_uint32 a, opus_uint32 b, opus_int32 shift){
    opus_uint32 ret;
    ops_count += 1;
    ret = a + (b << shift);
    return ret;                /* shift >= 0*/
}
#undef    silk_ADD_RSHIFT
static OPUS_INLINE opus_int32 silk_ADD_RSHIFT(opus_int32 a, opus_int32 b, opus_int32 shift){
    opus_int32 ret;
    ops_count += 1;
    ret = a + (b >> shift);
    return ret;                /* shift  > 0*/
}
#undef    silk_ADD_RSHIFT32
static OPUS_INLINE opus_int32 silk_ADD_RSHIFT32(opus_int32 a, opus_int32 b, opus_int32 shift){
    opus_int32 ret;
    ops_count += 1;
    ret = a + (b >> shift);
    return ret;                /* shift  > 0*/
}
#undef    silk_ADD_RSHIFT_uint
static OPUS_INLINE opus_uint32 silk_ADD_RSHIFT_uint(opus_uint32 a, opus_uint32 b, opus_int32 shift){
    opus_uint32 ret;
    ops_count += 1;
    ret = a + (b >> shift);
    return ret;                /* shift  > 0*/
}
#undef    silk_SUB_LSHIFT32
static OPUS_INLINE opus_int32 silk_SUB_LSHIFT32(opus_int32 a, opus_int32 b, opus_int32 shift){
    opus_int32 ret;
    ops_count += 1;
    ret = a - (b << shift);
    return ret;                /* shift >= 0*/
}
#undef    silk_SUB_RSHIFT32
static OPUS_INLINE opus_int32 silk_SUB_RSHIFT32(opus_int32 a, opus_int32 b, opus_int32 shift){
    opus_int32 ret;
    ops_count += 1;
    ret = a - (b >> shift);
    return ret;                /* shift  > 0*/
}
    
    // Builds a JPEG-style huffman code from the given bit depths.
void BuildHuffmanCode(uint8_t* depth, int* counts, int* values) {
  for (int i = 0; i < JpegHistogram::kSize; ++i) {
    if (depth[i] > 0) {
      ++counts[depth[i]];
    }
  }
  int offset[kJpegHuffmanMaxBitLength + 1] = { 0 };
  for (int i = 1; i <= kJpegHuffmanMaxBitLength; ++i) {
    offset[i] = offset[i - 1] + counts[i - 1];
  }
  for (int i = 0; i < JpegHistogram::kSize; ++i) {
    if (depth[i] > 0) {
      values[offset[depth[i]]++] = i;
    }
  }
}
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_