Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    // Value types encoded as the last component of internal keys.
// DO NOT CHANGE THESE ENUM VALUES: they are embedded in the on-disk
// data structures.
enum ValueType {
  kTypeDeletion = 0x0,
  kTypeValue = 0x1
};
// kValueTypeForSeek defines the ValueType that should be passed when
// constructing a ParsedInternalKey object for seeking to a particular
// sequence number (since we sort sequence numbers in decreasing order
// and the value type is embedded as the low 8 bits in the sequence
// number in internal keys, we need to use the highest-numbered
// ValueType, not the lowest).
static const ValueType kValueTypeForSeek = kTypeValue;
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    
    {  for (size_t i = 0; i < new_files_.size(); i++) {
    const FileMetaData& f = new_files_[i].second;
    PutVarint32(dst, kNewFile);
    PutVarint32(dst, new_files_[i].first);  // level
    PutVarint64(dst, f.number);
    PutVarint64(dst, f.file_size);
    PutLengthPrefixedSlice(dst, f.smallest.Encode());
    PutLengthPrefixedSlice(dst, f.largest.Encode());
  }
}
    
    #endif  // STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_

    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46, typename T47, typename T48, typename T49, typename T50>
internal::ValueArray50<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
    T44, T45, T46, T47, T48, T49, T50> Values(T1 v1, T2 v2, T3 v3, T4 v4,
    T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13,
    T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21,
    T22 v22, T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29,
    T30 v30, T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37,
    T38 v38, T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45,
    T46 v46, T47 v47, T48 v48, T49 v49, T50 v50) {
  return internal::ValueArray50<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43, T44, T45, T46, T47, T48, T49, T50>(v1, v2, v3, v4,
      v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19,
      v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33,
      v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47,
      v48, v49, v50);
}
    
    #include <iosfwd>
#include <vector>
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-string.h'
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED4.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4>
AssertionResult AssertPred4Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  const char* e3,
                                  const char* e4,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2,
                                  const T3& v3,
                                  const T4& v4) {
  if (pred(v1, v2, v3, v4)) return AssertionSuccess();
    }
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
    template <GTEST_$(k)_TYPENAMES_(T)>
inline GTEST_$(k)_TUPLE_(T) make_tuple($for m, [[const T$m& f$m]]) {
  return GTEST_$(k)_TUPLE_(T)($for m, [[f$m]]);
}
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
    /*The number of extra bits of precision at which to store rate metrics.*/
# define OC_BIT_SCALE  (6)
/*The number of extra bits of precision at which to store RMSE metrics.
  This must be at least half OC_BIT_SCALE (rounded up).*/
# define OC_RMSE_SCALE (5)
/*The number of bins to partition statistics into.*/
# define OC_SAD_BINS   (24)
/*The number of bits of precision to drop from SAD scores to assign them to a
   bin.*/
# define OC_SAD_SHIFT  (9)
    
        60,30,500,    3,18.,  2048
  },
  /* 9: 512 x 17 */
  {
    6,{0,1,1,2,3,3},{2,3,3,3},{0,1,2,2},{-1,0,1,2},
    {{3},{4,5},{-1,6,7,8},{-1,9,10,11}},
    2,{0,512,  46,186,  16,33,65,  93,130,278,
       7,23,39,  55,79,110,  156,232,360},
    
    
    {  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__44u6__long,&_huff_book__44u6__long,
   &_resbook_44u_6,&_resbook_44u_6}
};
    
    static const vorbis_mapping_template _mapres_template_8_stereo[2]={
  { _map_nominal, _res_8s_0 }, /* 0 */
  { _map_nominal, _res_8s_1 }, /* 1 */
};
    
    #elif (defined(_MSC_VER) && _MSC_VER >= 1400) && defined (_M_X64)
        #include <xmmintrin.h>
    
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
    
    bool RefineDCTBlock(const HuffmanTableEntry* ac_huff,
                    int Ss, int Se, int Al,
                    int* eobrun,
                    BitReaderState* br,
                    JPEGData* jpg,
                    coeff_t* coeffs) {
  bool eobrun_allowed = Ss > 0;
  if (Ss == 0) {
    int s = br->ReadBits(1);
    coeff_t dc_coeff = coeffs[0];
    dc_coeff |= s << Al;
    coeffs[0] = dc_coeff;
    ++Ss;
  }
  if (Ss > Se) {
    return true;
  }
  int p1 = 1 << Al;
  int m1 = -(1 << Al);
  int k = Ss;
  int r;
  int s;
  bool in_zero_run = false;
  if (*eobrun <= 0) {
    for (; k <= Se; k++) {
      s = ReadSymbol(ac_huff, br);
      if (s >= kJpegHuffmanAlphabetSize) {
        fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
                s, k);
        jpg->error = JPEG_INVALID_SYMBOL;
        return false;
      }
      r = s >> 4;
      s &= 15;
      if (s) {
        if (s != 1) {
          fprintf(stderr, 'Invalid Huffman symbol %d for AC coefficient %d\n',
                  s, k);
          jpg->error = JPEG_INVALID_SYMBOL;
          return false;
        }
        s = br->ReadBits(1) ? p1 : m1;
        in_zero_run = false;
      } else {
        if (r != 15) {
          *eobrun = 1 << r;
          if (r > 0) {
            if (!eobrun_allowed) {
              fprintf(stderr, 'End-of-block run crossing DC coeff.\n');
              jpg->error = JPEG_EOB_RUN_TOO_LONG;
              return false;
            }
            *eobrun += br->ReadBits(r);
          }
          break;
        }
        in_zero_run = true;
      }
      do {
        coeff_t thiscoef = coeffs[kJPEGNaturalOrder[k]];
        if (thiscoef != 0) {
          if (br->ReadBits(1)) {
            if ((thiscoef & p1) == 0) {
              if (thiscoef >= 0) {
                thiscoef += p1;
              } else {
                thiscoef += m1;
              }
            }
          }
          coeffs[kJPEGNaturalOrder[k]] = thiscoef;
        } else {
          if (--r < 0) {
            break;
          }
        }
        k++;
      } while (k <= Se);
      if (s) {
        if (k > Se) {
          fprintf(stderr, 'Out-of-band coefficient %d band was %d-%d\n',
                  k, Ss, Se);
          jpg->error = JPEG_OUT_OF_BAND_COEFF;
          return false;
        }
        coeffs[kJPEGNaturalOrder[k]] = s;
      }
    }
  }
  if (in_zero_run) {
    fprintf(stderr, 'Extra zero run before end-of-block.\n');
    jpg->error = JPEG_EXTRA_ZERO_RUN;
    return false;
  }
  if (*eobrun > 0) {
    for (; k <= Se; k++) {
      coeff_t thiscoef = coeffs[kJPEGNaturalOrder[k]];
      if (thiscoef != 0) {
        if (br->ReadBits(1)) {
          if ((thiscoef & p1) == 0) {
            if (thiscoef >= 0) {
              thiscoef += p1;
            } else {
              thiscoef += m1;
            }
          }
        }
        coeffs[kJPEGNaturalOrder[k]] = thiscoef;
      }
    }
  }
  --(*eobrun);
  return true;
}
    
    void OutputImageComponent::CopyFromJpegComponent(const JPEGComponent& comp,
                                                 int factor_x, int factor_y,
                                                 const int* quant) {
  Reset(factor_x, factor_y);
  assert(width_in_blocks_ <= comp.width_in_blocks);
  assert(height_in_blocks_ <= comp.height_in_blocks);
  const size_t src_row_size = comp.width_in_blocks * kDCTBlockSize;
  for (int block_y = 0; block_y < height_in_blocks_; ++block_y) {
    const coeff_t* src_coeffs = &comp.coeffs[block_y * src_row_size];
    for (int block_x = 0; block_x < width_in_blocks_; ++block_x) {
      coeff_t block[kDCTBlockSize];
      for (int i = 0; i < kDCTBlockSize; ++i) {
        block[i] = src_coeffs[i] * quant[i];
      }
      SetCoeffBlock(block_x, block_y, block);
      src_coeffs += kDCTBlockSize;
    }
  }
  memcpy(quant_, quant, sizeof(quant_));
}
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg) {
  static const int quant[3 * kDCTBlockSize] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  };
  return EncodeRGBToJpeg(rgb, w, h, quant, jpg);
}
    
    
    {}  // namespace guetzli
    
    template <class Clock>
struct timespec
timeSpecFromTimePoint(time_point<Clock> absTime)
{
  auto epoch = absTime.time_since_epoch();
  if (epoch.count() < 0) {
    // kernel timespec_valid requires non-negative seconds and nanos in [0,1G)
    epoch = Clock::duration::zero();
  }
    }
    
    TEST(AtomicSharedPtr, exchange) {
  atomic_shared_ptr<int> fooptr;
  auto a = make_shared<int>(1);
  fooptr.store(std::move(a));
  auto b = fooptr.exchange(make_shared<int>());
  EXPECT_EQ(*b, 1);
}
    
      /** Functions called infrequently by consumers */
    
    
    {    // multiplying the duration by a floating point doesn't work, grr
    auto extraFrac =
        timeoutVariationFrac / std::numeric_limits<uint64_t>::max() * h;
    auto tics = uint64_t(idleTimeout.count() * (1 + extraFrac));
    return IdleTime(tics);
  }
    
    
    {  // check our own implementation even when the builtin is available
  using seq4 = typename folly::utility_detail::make_seq<5>::template apply<
      folly::integer_sequence<int>,
      folly::integer_sequence<int, 0>>;
  EXPECT_EQ(5, seq4{}.size());
  EXPECT_TRUE((std::is_same<seq4::value_type, int>::value));
  using seq4_expected = folly::integer_sequence<int, 0, 1, 2, 3, 4>;
  EXPECT_TRUE((std::is_same<seq4, seq4_expected>::value));
}
    
    
    {  friend bool operator==(ArchetypeBase const&, ArchetypeBase const&);
  friend bool operator!=(ArchetypeBase const&, ArchetypeBase const&);
  friend bool operator<(ArchetypeBase const&, ArchetypeBase const&);
  friend bool operator<=(ArchetypeBase const&, ArchetypeBase const&);
  friend bool operator>(ArchetypeBase const&, ArchetypeBase const&);
  friend bool operator>=(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator++(ArchetypeBase const&);
  friend Bottom operator++(ArchetypeBase const&, int);
  friend Bottom operator--(ArchetypeBase const&);
  friend Bottom operator--(ArchetypeBase const&, int);
  friend Bottom operator+(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator+=(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator-(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator-=(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator*(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator*=(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator/(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator/=(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator%(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator%=(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator<<(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator<<=(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator>>(ArchetypeBase const&, ArchetypeBase const&);
  friend Bottom operator>>=(ArchetypeBase const&, ArchetypeBase const&);
};
    
    
    { private:
  Iter b_, e_;
};
    
    static int testingGetcpu(unsigned* cpu, unsigned* node, void* /* unused */) {
  if (cpu != nullptr) {
    *cpu = testingCpu;
  }
  if (node != nullptr) {
    *node = testingCpu;
  }
  return 0;
}
#endif
    
    #include <bitset>
    
    #pragma once
#include <deque>
#include <string>
    
    
    {    ++curIdx;
  }
    
     public: // Delete / Remove / Pop / Trim
  /// Trim (list: key) so that it will only contain the indices from start..stop
  /// Returns true on success
  /// May throw RedisListException
  bool Trim(const std::string& key, int32_t start, int32_t stop);
    
      // Considers a candidate file only if it is smaller than the
  // total size accumulated so far.
  for (size_t loop = 0; loop < sorted_runs.size(); loop++) {
    candidate_count = 0;
    }
    
    #else
#include <stdio.h>
    
    char Encode85Byte(unsigned int x) 
{
    x = (x % 85) + 35;
    return (x>='\\') ? x+1 : x;
}
    
        if (ImGui::CollapsingHeader('Layout'))
    {
        if (ImGui::TreeNode('Child regions'))
        {
            static bool disable_mouse_wheel = false;
            static bool disable_menu = false;
            ImGui::Checkbox('Disable Mouse Wheel', &disable_mouse_wheel);
            ImGui::Checkbox('Disable Menu', &disable_menu);
    }
    }
    
            // We ignore blank width at the end of the line (they can be skipped)
        if (line_width + word_width >= wrap_width)
        {
            // Words that cannot possibly fit within an entire line will be cut anywhere.
            if (word_width < wrap_width)
                s = prev_word_end ? prev_word_end : word_end;
            break;
        }
    
    int32 ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData)
{
    // pEvent->m_Button is of type s3ePointerButton and indicates which mouse
    // button was pressed.  For touchscreen this should always have the value
    // S3E_POINTER_BUTTON_SELECT
    s3ePointerEvent* pEvent = (s3ePointerEvent*)SystemData;
    }
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
        ImGui_ImplGlfwGL2_NewFrame();
    }
    
    #include 'imgui.h'
#include 'imgui_impl_glfw_gl3.h'
#include <stdio.h>
#include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions (because it is small). You may use glew/glad/glLoadGen/etc. whatever already works for you.
#include <GLFW/glfw3.h>
    
    
    {    // Create texture sampler
    {
        D3D11_SAMPLER_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
        desc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
        desc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
        desc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
        desc.MipLODBias = 0.f;
        desc.ComparisonFunc = D3D11_COMPARISON_ALWAYS;
        desc.MinLOD = 0.f;
        desc.MaxLOD = 0.f;
        g_pd3dDevice->CreateSamplerState(&desc, &g_pFontSampler);
    }
}