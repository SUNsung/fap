
        
        #ifndef TENSORFLOW_DEBUGGER_STATE_IMPL_H_
#define TENSORFLOW_DEBUGGER_STATE_IMPL_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/common_runtime/device.h'
#include 'tensorflow/core/framework/device_base.h'
    
    
    {    EXPECT_NE(a_1_1.get(), d_4_2.get());
    EXPECT_NE(a_1_1.get(), e_5_2.get());
    EXPECT_NE(d_4_1.get(), e_5_2.get());
  }
    
        NodeDef* const_node1 = graph_def.add_node();
    const_node1->set_name('const_node1');
    const_node1->set_op('Const');
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Status TanhGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      {{'y'}, 'Tanh', {'x'}},
      {{'y2'}, 'Square', {'y'}, {}, {'dy'}},
      FDH::Const('const', 1.0f),
      {{'one'}, 'Cast', {'const'}, {{'SrcT', DT_FLOAT}, {'DstT', '$T'}}},
      {{'a'}, 'Sub', {'one', 'y2'}},
      {{'dx'}, 'Mul', {'dy', 'a'}},           // dy * (1 - y*y)
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Tanh', TanhGrad);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
========================================================================
(END LICENSE TEXT)
    
    #include <google/protobuf/pyext/descriptor_database.h>
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    void ImmutableLazyMessageOneofFieldGenerator::
GenerateSerializationCode(io::Printer* printer) const {
  // Do not de-serialize lazy fields.
  printer->Print(variables_,
    'if ($has_oneof_case_message$) {\n'
    '  output.writeBytes(\n'
    '      $number$, (($lazy_type$) $oneof_name$_).toByteString());\n'
    '}\n');
}
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
        HHVM_FE(fb_setprofile);
    HHVM_FE(xhprof_frame_begin);
    HHVM_FE(xhprof_frame_end);
    HHVM_FE(xhprof_enable);
    HHVM_FE(xhprof_disable);
    HHVM_FE(xhprof_network_enable);
    HHVM_FE(xhprof_network_disable);
    HHVM_FE(xhprof_sample_enable);
    HHVM_FE(xhprof_sample_disable);
    
    #ifdef FACEBOOK
  uint64_t time;
  if (!fb_perf_get_thread_cputime_ns(&time)) {
    return time + s_extra_request_nanoseconds;
  }
#endif
    
    void Vunit::freeScratchBlock(Vlabel l) {
  // This will leak blocks if anything's been added since the corresponding
  // call to makeScratchBlock(), but it's harmless.
  if (l == blocks.size() - 1) blocks.pop_back();
}
    
      // set interleave for early code. we'll then force interleave for a few
  // regions, and switch to local for the threads
  numa_set_interleave_mask(numa_all_nodes_ptr);
    
      resourceInfo = FindResource(moduleHandle, section, RT_RCDATA);
  if (!resourceInfo) {
    return false;
  }
    
      typedef std::function<void(pid_t)> LostChildHandler;
  static void SetLostChildHandler(const LostChildHandler& handler);
    
    #include 'hphp/runtime/ext/curl/curl-share-resource.h'
#include 'hphp/runtime/ext/curl/curl-resource.h'
#include 'hphp/runtime/base/builtin-functions.h'
    
    
    {  CurlShareResource();
  ~CurlShareResource() { close(); }
  void close();
  bool setOption(int option, const Variant& value);
  static bool isLongOption(long option);
  bool setLongOption(long option, long value);
  CURLcode attachToCurlHandle(CURL *cp);
 private:
  CURLSH* m_share;
  // CURLSH is a typedef to void
  TYPE_SCAN_IGNORE_FIELD(m_share);
};
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
      // In order to find the start of the (post guard) prologue after
  // possibly relocating the code, we add a watchpoint that points to
  // &unit.prologueStart. In some situations (eg tc-relocate) we will
  // relocate the code again - but at that point, unit has gone (and
  // tc-relocate tracks the start of the prologue for itself). So we
  // need to remove it here, to prevent wild writes to dead stack
  // locations.
  auto it = std::find_if(fixups.watchpoints.begin(), fixups.watchpoints.end(),
                         [&] (TCA* p) { return p == &unit.prologueStart; });
  assertx(it != fixups.watchpoints.end());
  fixups.watchpoints.erase(it);
    
    template<typename DType>
inline void CompressArray<DType>::InitCompressChunks(
    const std::vector<bst_uint>& chunk_ptr) {
  raw_chunks_ = chunk_ptr;
  CHECK_GE(raw_chunks_.size(), 2);
  out_buffer_.resize(raw_chunks_.size() - 1);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    out_buffer_[i].resize(raw_chunks_[i + 1] - raw_chunks_[i]);
  }
}
    
      EXPECT_ANY_THROW(xgboost::Metric::Create('error@abc'));
  delete metric;
  metric = xgboost::Metric::Create('error@0.5f');
  EXPECT_STREQ(metric->Name(), 'error');
    
    SEXP XGDMatrixGetInfo_R(SEXP handle, SEXP field) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const float *res;
  CHECK_CALL(XGDMatrixGetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                 &olen,
                                 &res));
  ret = PROTECT(allocVector(REALSXP, olen));
  for (size_t i = 0; i < olen; ++i) {
    REAL(ret)[i] = res[i];
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterSetParam
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterSetParam
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jstring jname, jstring jvalue) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  const char* name = jenv->GetStringUTFChars(jname, 0);
  const char* value = jenv->GetStringUTFChars(jvalue, 0);
  int ret = XGBoosterSetParam(handle, name, value);
  //release
  if (name) jenv->ReleaseStringUTFChars(jname, name);
  if (value) jenv->ReleaseStringUTFChars(jvalue, value);
  return ret;
}
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    namespace xgboost {
namespace linear {
    }
    }
    
        // Create the pixel shader
    {
        static const char* pixelShader =
            'struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            sampler sampler0;\
            Texture2D texture0;\
            \
            float4 main(PS_INPUT input) : SV_Target\
            {\
            float4 out_col = input.col * texture0.Sample(sampler0, input.uv); \
            return out_col; \
            }';
    }
    
    
    {        D3DCompile(pixelShader, strlen(pixelShader), NULL, NULL, NULL, 'main', 'ps_4_0', 0, 0, &g_pPixelShaderBlob, NULL);
        if (g_pPixelShaderBlob == NULL)  // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreatePixelShader((DWORD*)g_pPixelShaderBlob->GetBufferPointer(), g_pPixelShaderBlob->GetBufferSize(), NULL, &g_pPixelShader) != S_OK)
            return false;
    }
    
    
    {    return true;
}
    
            const float ascent = font_face.Info.Ascender;
        const float descent = font_face.Info.Descender;
        ImFontAtlasBuildSetupFont(atlas, dst_font, &cfg, ascent, descent);
        const float off_x = cfg.GlyphOffset.x;
        const float off_y = cfg.GlyphOffset.y + (float)(int)(dst_font->Ascent + 0.5f);
    
    TEST_F(OrderingTest, compare_less_equal) {
  compare_less_equal<OddCompare<int>> op;
  EXPECT_FALSE(op(3, 4));
  EXPECT_TRUE(op(3, 3));
  EXPECT_TRUE(op(4, 3));
}
    
      static F14Chunk* emptyInstance() {
    auto rv = static_cast<F14Chunk*>(static_cast<void*>(&kEmptyTagVector));
    FOLLY_SAFE_DCHECK(
        !rv->occupied(0) && rv->chunk0Capacity() == 0 &&
            rv->outboundOverflowCount() == 0,
        '');
    return rv;
  }
    
    
    {/// Sugar for the most common case
template <class Collection, class T, class F>
auto unorderedReduce(Collection&& c, T&& initial, F&& func)
    -> decltype(unorderedReduce(c.begin(), c.end(), std::forward<T>(initial),
                std::forward<F>(func))) {
  return unorderedReduce(
      c.begin(),
      c.end(),
      std::forward<T>(initial),
      std::forward<F>(func));
}
} // namespace folly

    
      std::vector<std::thread> ts;
  boost::barrier barrier(ps.size() + 1);
  for (size_t i = 0; i < ps.size(); i++) {
    ts.emplace_back([&ps, &barrier, i]() {
      barrier.wait();
      if (i == (ps.size()/2)) {
        ps[i].setException(eggs);
      } else {
        ps[i].setValue(i);
      }
    });
  }
    
    /**
 * Finds the first occurrence of needle in haystack. The algorithm is on
 * average faster than O(haystack.size() * needle.size()) but not as fast
 * as Boyer-Moore. On the upside, it does not do any upfront
 * preprocessing and does not allocate memory.
 */
template <
    class Iter,
    class Comp = std::equal_to<typename Range<Iter>::value_type>>
inline size_t
qfind(const Range<Iter>& haystack, const Range<Iter>& needle, Comp eq = Comp());