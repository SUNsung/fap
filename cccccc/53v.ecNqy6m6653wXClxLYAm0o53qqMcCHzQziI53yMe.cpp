
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  EXPECT_EQ(status(), param.expected_status);
}
    
    #include 'tensorflow/core/kernels/loss.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/core/status.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/stream_executor/platform/port.h'
#include <tuple>
    
      ExpectSuccess(Builder().Input(FakeInput({DT_STRING, DT_INT32})),
                {DT_STRING, DT_INT32}, {}, R'proto(
      op: 'TypeList' input: ['a', 'a:1']
      attr { key: 'T' value { list { type: [DT_STRING, DT_INT32] } } }
      )proto');
    
    string VersionedComputationHandle::ToString() const {
  return tensorflow::strings::StrCat(handle.handle(), ':v', version);
}
    
          // data_flat index
      int32 idx = 0;
      // sum of indices_inputs[i].NumElements() for compute indicies_flat value.
      int32 base_size = 0;
      for (int i = 0; i < indices_inputs.size(); ++i) {
        auto indices_vec = indices_inputs[i].flat<int32>();
        auto data_ptr_base = data_inputs[i].template flat<T>().data();
        for (int j = 0; j < indices_vec.size(); ++j) {
          // indices_flat's indices represent the indices of output.
          // indices_flat's values represent the indices of input_data where the
          // data located.
          indices_flat.Set(indices_vec(j), base_size + j);
          data_flat.Set(
              idx, const_cast<T*>(reinterpret_cast<const T*>(data_ptr_base) +
                                  j * slice_size));
          ++idx;
        }
        base_size += indices_vec.size();
      }
      OP_REQUIRES_OK(c, indices_flat.Finalize());
      OP_REQUIRES_OK(c, data_flat.Finalize());
    
    
    {    EXPECT_NE(a_1_1.get(), d_4_2.get());
    EXPECT_NE(a_1_1.get(), e_5_2.get());
    EXPECT_NE(d_4_1.get(), e_5_2.get());
  }
    
    #endif // SWIFT_INDEX_INDEXRECORD_H

    
      ArrayRef<MarkupASTNode *> getChildren() {
    return {getTrailingObjects<MarkupASTNode *>(), NumChildren};
  }
    
    #include 'swift/AST/Type.h'
#include 'llvm/ADT/ArrayRef.h'
#include 'llvm/ADT/Optional.h'
    
      static v8::Handle<v8::Object> GetObjectRegistry();
  static v8::Handle<v8::Value> GetWindowId(blink::WebFrame* frame);
  static void ZoomLevelChanged(blink::WebView* web_view);
  static void willHandleNavigationPolicy(
    content::RenderView* rv,
    blink::WebFrame* frame,
    const blink::WebURLRequest& request,
    blink::WebNavigationPolicy* policy,
    blink::WebString* manifest);
    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return;
  item->OnClick();
}
    
    #ifndef CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_
#define CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_
    
      for(auto* item: menu_items_) {
    item->RemoveKeys();
  }
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    struct RepoAuthType;
struct StringData;
    
    #include 'hphp/runtime/vm/jit/types.h'
#include 'hphp/runtime/vm/jit/containers.h'
#include 'hphp/runtime/vm/jit/vasm.h'
#include 'hphp/runtime/vm/jit/vasm-data.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
    NormalizedInstruction::NormalizedInstruction() { }
    
    /*
 * A NormalizedInstruction contains information about a decoded bytecode
 * instruction, including the unit it lives in, decoded immediates, and a few
 * flags of interest the various parts of the jit.
 */
struct NormalizedInstruction {
  SrcKey source;
  const Func* funcd; // The Func in the topmost AR on the stack. Guaranteed to
                     // be accurate. Don't guess about this. Note that this is
                     // *not* the function whose body the NI belongs to.
                     // Note that for an FPush* may be set to the (statically
                     // known Func* that /this/ instruction is pushing)
  const Unit* m_unit;
    }
    
      // We rebuild a variant type here because using boosts fails on opensource
  // builds because it at some point requires a copy construction.
  // This vector has one entry per prologue/translation stored in the two
  // vectors above, and it encodes the order in which they should be published.
  std::vector<Kind> order;
    
    static int set_addresses(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* data,
		  size_t len) {
	if (msg->ifa_family == AF_INET) {
		sockaddr_in* sa = new sockaddr_in;
		sa->sin_family = AF_INET;
		memcpy(&sa->sin_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else if (msg->ifa_family == AF_INET6) {
		sockaddr_in6* sa = new sockaddr_in6;
		sa->sin6_family = AF_INET6;
		sa->sin6_scope_id = msg->ifa_index;
		memcpy(&sa->sin6_addr, data, len);
		ifaddr->ifa_addr = reinterpret_cast<sockaddr*>(sa);
	} else {
		return -1;
	}
	return 0;
}
    
      &_huff_book_line_128x11_0sub0,
  &_huff_book_line_128x11_1sub0,
  &_huff_book_line_128x11_1sub1,
  &_huff_book_line_128x11_2sub1,
  &_huff_book_line_128x11_2sub2,
  &_huff_book_line_128x11_2sub3,
  &_huff_book_line_128x11_3sub1,
  &_huff_book_line_128x11_3sub2,
  &_huff_book_line_128x11_3sub3,
};
static const static_codebook*const _floor_128x17_books[]={
  &_huff_book_line_128x17_class1,
  &_huff_book_line_128x17_class2,
  &_huff_book_line_128x17_class3,
    
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
    
    #undef MULT16_16_Q15_ADD
static inline int MULT16_16_Q15_ADD(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('madd $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
    # if defined(OPUS_HAVE_RTCD)
int opus_select_arch(void);
# endif
    
    static OPUS_INLINE opus_int64 silk_SaveCount(){
    return(ops_count);
}
    
    #include <fb/visibility.h>
    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
        void setExperimentalFeatureEnabled(int feature, bool enabled);
    void setPointScaleFactor(float pixelsInPoint);
 
 public: // Getters
    
    
    {  // There are subtle issues with calling the next functions directly. It is
  // much better to always use a ThreadScope to manage attaching/detaching for
  // you.
  FBEXPORT static JNIEnv* ensureCurrentThreadIsAttached();
  FBEXPORT static void detachCurrentThread();
};
    
      void reset() {
    unrefIfNecessary(m_ptr);
    m_ptr = nullptr;
  }
    
      template <typename ...Args>
  void initialize(Args&&... arguments) {
    FBASSERT(!m_instance);
    m_instance = new T(std::forward<Args>(arguments)...);
  }