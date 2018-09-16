
        
        Q_SIGNALS:
    void valueChanged();
    
        secp256k1_context_set_error_callback(tctx, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(tctx, counting_illegal_callback_fn, &ecount);
    CHECK(secp256k1_ec_pubkey_create(tctx, &point, s_one) == 1);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34>
internal::ValueArray34<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5,
    T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14,
    T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22,
    T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30,
    T31 v31, T32 v32, T33 v33, T34 v34) {
  return internal::ValueArray34<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34>(v1, v2, v3, v4, v5, v6, v7,
      v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22,
      v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
}
    
    
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT4.
// Don't use this in your code.
#define GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, #v4, v1, v2, v3, v4), \
                on_failure)
    
      // A helper class that aborts a death test when it's deleted.
  class ReturnSentinel {
   public:
    explicit ReturnSentinel(DeathTest* test) : test_(test) { }
    ~ReturnSentinel() { test_->Abort(TEST_ENCOUNTERED_RETURN_STATEMENT); }
   private:
    DeathTest* const test_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(ReturnSentinel);
  } GTEST_ATTRIBUTE_UNUSED_;
    
    // A simple Linear Congruential Generator for generating random
// numbers with a uniform distribution.  Unlike rand() and srand(), it
// doesn't use global state (and therefore can't interfere with user
// code).  Unlike rand_r(), it's portable.  An LCG isn't very random,
// but it's good enough for our purposes.
class GTEST_API_ Random {
 public:
  static const UInt32 kMaxRange = 1u << 31;
    }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9>
struct Templates9 {
  typedef TemplateSel<T1> Head;
  typedef Templates8<T2, T3, T4, T5, T6, T7, T8, T9> Tail;
};
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
    
    // This should fail when the --check_for_leaks command line flag is
// specified.
TEST(ListenersTest, LeaksWater) {
  Water* water = new Water;
  EXPECT_TRUE(water != NULL);
}
    
      // Applies a function/functor on each element of the queue, and
  // returns the result in a new queue.  The original queue is not
  // affected.
  template <typename F>
  Queue* Map(F function) const {
    Queue* new_queue = new Queue();
    for (const QueueNode<E>* node = head_; node != NULL; node = node->next_) {
      new_queue->Enqueue(function(node->element()));
    }
    }
    
    namespace boost{
    }
    
    class BOOST_REGEX_DECL mapfile
{
   typedef char* pointer;
   std::FILE* hfile;
   long int _size;
   pointer* _first;
   pointer* _last;
   mutable std::list<pointer*> condemed;
   enum sizes
   {
      buf_size = 4096
   };
   void lock(pointer* node)const;
   void unlock(pointer* node)const;
public:
    }
    
    #  ifndef BOOST_REGEX_INSTANTIATE
#     ifdef __GNUC__
#        define template __extension__ extern template
#     else
#        if BOOST_MSVC > 1310
#           define BOOST_REGEX_TEMPLATE_DECL
#        endif
#        define template extern template
#     endif
#  endif
    
    
    {} // namespace boost
    
    #include <boost/shared_ptr.hpp>
    
    #ifdef BOOST_MSVC
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    #include 'guetzli/stats.h'
    
    #include 'guetzli/jpeg_data.h'
    
    namespace guetzli {
    }
    
    bool JPEGData::Is420() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 2 &&
          max_v_samp_factor == 2 &&
          components[0].h_samp_factor == 2 &&
          components[0].v_samp_factor == 2 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
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
    
    namespace guetzli {
    }
    
    // Reads the DRI marker and saved the restart interval into *jpg.
bool ProcessDRI(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  if (jpg->restart_interval > 0) {
    fprintf(stderr, 'Duplicate DRI marker.\n');
    jpg->error = JPEG_DUPLICATE_DRI;
    return false;
  }
  const size_t start_pos = *pos;
  VERIFY_LEN(4);
  size_t marker_len = ReadUint16(data, pos);
  int restart_interval = ReadUint16(data, pos);
  jpg->restart_interval = restart_interval;
  VERIFY_MARKER_END();
  return true;
}
    
    void EncodeDCTBlockSequential(const coeff_t* coeffs,
                              const HuffmanCodeTable& dc_huff,
                              const HuffmanCodeTable& ac_huff,
                              coeff_t* last_dc_coeff,
                              BitWriter* bw) {
  coeff_t temp2;
  coeff_t temp;
  temp2 = coeffs[0];
  temp = temp2 - *last_dc_coeff;
  *last_dc_coeff = temp2;
  temp2 = temp;
  if (temp < 0) {
    temp = -temp;
    temp2--;
  }
  int nbits = Log2Floor(temp) + 1;
  bw->WriteBits(dc_huff.depth[nbits], dc_huff.code[nbits]);
  if (nbits > 0) {
    bw->WriteBits(nbits, temp2 & ((1 << nbits) - 1));
  }
  int r = 0;
  for (int k = 1; k < 64; ++k) {
    if ((temp = coeffs[kJPEGNaturalOrder[k]]) == 0) {
      r++;
      continue;
    }
    if (temp < 0) {
      temp = -temp;
      temp2 = ~temp;
    } else {
      temp2 = temp;
    }
    while (r > 15) {
      bw->WriteBits(ac_huff.depth[0xf0], ac_huff.code[0xf0]);
      r -= 16;
    }
    int nbits = Log2FloorNonZero(temp) + 1;
    int symbol = (r << 4) + nbits;
    bw->WriteBits(ac_huff.depth[symbol], ac_huff.code[symbol]);
    bw->WriteBits(nbits, temp2 & ((1 << nbits) - 1));
    r = 0;
  }
  if (r > 0) {
    bw->WriteBits(ac_huff.depth[0], ac_huff.code[0]);
  }
}
    
      JpegHistogram() { Clear(); }
  void Clear() {
    memset(counts, 0, sizeof(counts));
    counts[kSize - 1] = 1;
  }
  void Add(int symbol) {
    counts[symbol] += 2;
  }
  void Add(int symbol, int weight) {
    counts[symbol] += 2 * weight;
  }
  void AddHistogram(const JpegHistogram& other) {
    for (int i = 0; i + 1 < kSize; ++i) {
      counts[i] += other.counts[i];
    }
    counts[kSize - 1] = 1;
  }
  int NumSymbols() const {
    int n = 0;
    for (int i = 0; i + 1 < kSize; ++i) {
      n += (counts[i] > 0 ? 1 : 0);
    }
    return n;
  }