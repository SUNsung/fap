
        
            TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    void DBIter::FindNextUserEntry(bool skipping, std::string* skip) {
  // Loop until we hit an acceptable entry to yield
  assert(iter_->Valid());
  assert(direction_ == kForward);
  do {
    ParsedInternalKey ikey;
    if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
      switch (ikey.type) {
        case kTypeDeletion:
          // Arrange to skip all upcoming entries for this key since
          // they are hidden by this deletion.
          SaveKey(ikey.user_key, skip);
          skipping = true;
          break;
        case kTypeValue:
          if (skipping &&
              user_comparator_->Compare(ikey.user_key, *skip) <= 0) {
            // Entry hidden
          } else {
            valid_ = true;
            saved_key_.clear();
            return;
          }
          break;
      }
    }
    iter_->Next();
  } while (iter_->Valid());
  saved_key_.clear();
  valid_ = false;
}
    
     private:
  // We construct a char array of the form:
  //    klength  varint32               <-- start_
  //    userkey  char[klength]          <-- kstart_
  //    tag      uint64
  //                                    <-- end_
  // The array is a suitable MemTable key.
  // The suffix starting with 'userkey' can be used as an InternalKey.
  const char* start_;
  const char* kstart_;
  const char* end_;
  char space_[200];      // Avoid allocation for short keys
    
    Status DumpDescriptor(Env* env, const std::string& fname, WritableFile* dst) {
  return PrintLogContents(env, fname, VersionEditPrinter, dst);
}
    
    // Return the name of a temporary file owned by the db named 'dbname'.
// The result will be prefixed with 'dbname'.
extern std::string TempFileName(const std::string& dbname, uint64_t number);
    
    void VersionEdit::Clear() {
  comparator_.clear();
  log_number_ = 0;
  prev_log_number_ = 0;
  last_sequence_ = 0;
  next_file_number_ = 0;
  has_comparator_ = false;
  has_log_number_ = false;
  has_prev_log_number_ = false;
  has_next_file_number_ = false;
  has_last_sequence_ = false;
  deleted_files_.clear();
  new_files_.clear();
}
    
      // Return the name of this policy.  Note that if the filter encoding
  // changes in an incompatible way, the name returned by this method
  // must be changed.  Otherwise, old incompatible filters may be
  // passed to methods of this type.
  virtual const char* Name() const = 0;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12>
internal::ValueArray12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
    T12> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12) {
  return internal::ValueArray12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12);
}
    
    // Overload for C arrays.  Multi-dimensional arrays are printed
// properly.
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(HasNewFatalFailureHelper);
};
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
      // Returns true iff n is a prime number.
  virtual bool IsPrime(int n) const = 0;
    
    #include 'sample1.h'
    
    
    { private:
  static int allocated_;
};
    
      /// Return true if we are processing the full image.
  bool IsFullImage() const {
    return rect_left_ == 0 && rect_top_ == 0 &&
           rect_width_ == image_width_ && rect_height_ == image_height_;
  }
    
    // Converts a utf-8 string to a vector of unicodes.
// Returns an empty vector if the input contains invalid UTF-8.
/* static */
std::vector<char32> UNICHAR::UTF8ToUTF32(const char* utf8_str) {
  const int utf8_length = strlen(utf8_str);
  std::vector<char32> unicodes;
  unicodes.reserve(utf8_length);
  const_iterator end_it(end(utf8_str, utf8_length));
  for (const_iterator it(begin(utf8_str, utf8_length)); it != end_it; ++it) {
    if (it.is_legal()) {
      unicodes.push_back(*it);
    } else {
      unicodes.clear();
      return unicodes;
    }
  }
  return unicodes;
}
    
    void IntFeatureMap::Clear() {
  for (int dir = 0; dir < kNumOffsetMaps; ++dir) {
    delete [] offset_plus_[dir];
    delete [] offset_minus_[dir];
    offset_plus_[dir] = nullptr;
    offset_minus_[dir] = nullptr;
  }
}
    
      // Runs a hierarchical agglomerative clustering to merge shapes in the given
  // shape_table, while satisfying the given constraints:
  // * End with at least min_shapes left in shape_table,
  // * No shape shall have more than max_shape_unichars in it,
  // * Don't merge shapes where the distance between them exceeds max_dist.
  void ClusterShapes(int min_shapes, int max_shape_unichars,
                     float max_dist, ShapeTable* shape_table);
    
    #endif  // TESSERACT_CLASSIFY_SAMPLEITERATOR_H_

    
     private:
  // Computes matrix.vector v = Wu.
  // u is of size starts.back()+extents.back() and the output v is of size
  // starts.size().
  // The weight matrix w, is of size starts.size()xMAX(extents)+add_bias_fwd.
  // If add_bias_fwd, an extra element at the end of w[i] is the bias weight
  // and is added to v[i].
  static void MatrixDotVectorInternal(const GENERIC_2D_ARRAY<double>& w,
                                      bool add_bias_fwd, bool skip_bias_back,
                                      const double* u, double* v);
    
    // The CCNonTextDetect class contains grid-based operations on blobs to create
// a full-resolution image mask analogous yet complementary to
// pixGenHalftoneMask as it is better at line-drawings, graphs and charts.
class CCNonTextDetect : public BlobGrid {
 public:
  CCNonTextDetect(int gridsize, const ICOORD& bleft, const ICOORD& tright);
  virtual ~CCNonTextDetect();
    }
    
    #endif

    
      // Returns true if the blob appears to be outside of a horizontal textline.
  // Such blobs are potentially diacritics (even if large in Thai) and should
  // be kept away from initial textline finding.
  bool BoxOutOfHTextline(const TBOX& box, const DENORM* denorm,
                        bool debug) const;
    
      // Memory management
  // Note: only destructible (non-default) streams are ref counted
  bool CUDAStream_retain(CUDAStreamInternals* ptr) {
    AT_ASSERT(ptr);
    if (ptr->is_destructible) return(++ptr->refcount > 1);
    return true;
  }
    
    struct DynamicCUDAInterfaceSetter {
  DynamicCUDAInterfaceSetter() {
    using at::detail::DynamicCUDAInterface;
    DynamicCUDAInterface::set_device = set_device;
    DynamicCUDAInterface::get_device = get_device;
    DynamicCUDAInterface::unchecked_set_device = unchecked_set_device;
  }
};
    
    
    {  auto dataType = getCudnnDataType(*theta);
  SpatialTransformerDescriptor desc;
  setSamplerDescriptor(desc, dataType, N, C, H, W);
  AT_CUDNN_CHECK(cudnnSpatialTfGridGeneratorForward(getCudnnHandle(), desc.desc(),
                                                 theta->data_ptr(),
                                                 grid_t.data_ptr()));
  return grid_t;
}
    
    #endif

    
    bool ProcessScan(const uint8_t* data, const size_t len,
                 const std::vector<HuffmanTableEntry>& dc_huff_lut,
                 const std::vector<HuffmanTableEntry>& ac_huff_lut,
                 uint16_t scan_progression[kMaxComponents][kDCTBlockSize],
                 bool is_progressive,
                 size_t* pos,
                 JPEGData* jpg) {
  if (!ProcessSOS(data, len, pos, jpg)) {
    return false;
  }
  JPEGScanInfo* scan_info = &jpg->scan_info.back();
  bool is_interleaved = (scan_info->components.size() > 1);
  int MCUs_per_row;
  int MCU_rows;
  if (is_interleaved) {
    MCUs_per_row = jpg->MCU_cols;
    MCU_rows = jpg->MCU_rows;
  } else {
    const JPEGComponent& c = jpg->components[scan_info->components[0].comp_idx];
    MCUs_per_row =
        DivCeil(jpg->width * c.h_samp_factor, 8 * jpg->max_h_samp_factor);
    MCU_rows =
        DivCeil(jpg->height * c.v_samp_factor, 8 * jpg->max_v_samp_factor);
  }
  coeff_t last_dc_coeff[kMaxComponents] = {0};
  BitReaderState br(data, len, *pos);
  int restarts_to_go = jpg->restart_interval;
  int next_restart_marker = 0;
  int eobrun = -1;
  int block_scan_index = 0;
  const int Al = is_progressive ? scan_info->Al : 0;
  const int Ah = is_progressive ? scan_info->Ah : 0;
  const int Ss = is_progressive ? scan_info->Ss : 0;
  const int Se = is_progressive ? scan_info->Se : 63;
  const uint16_t scan_bitmask = Ah == 0 ? (0xffff << Al) : (1u << Al);
  const uint16_t refinement_bitmask = (1 << Al) - 1;
  for (size_t i = 0; i < scan_info->components.size(); ++i) {
    int comp_idx = scan_info->components[i].comp_idx;
    for (int k = Ss; k <= Se; ++k) {
      if (scan_progression[comp_idx][k] & scan_bitmask) {
        fprintf(stderr, 'Overlapping scans: component=%d k=%d prev_mask=%d '
                'cur_mask=%d\n', comp_idx, k, scan_progression[i][k],
                scan_bitmask);
        jpg->error = JPEG_OVERLAPPING_SCANS;
        return false;
      }
      if (scan_progression[comp_idx][k] & refinement_bitmask) {
        fprintf(stderr, 'Invalid scan order, a more refined scan was already '
                'done: component=%d k=%d prev_mask=%d cur_mask=%d\n', comp_idx,
                k, scan_progression[i][k], scan_bitmask);
        jpg->error = JPEG_INVALID_SCAN_ORDER;
        return false;
      }
      scan_progression[comp_idx][k] |= scan_bitmask;
    }
  }
  if (Al > 10) {
    fprintf(stderr, 'Scan parameter Al=%d is not supported in guetzli.\n', Al);
    jpg->error = JPEG_NON_REPRESENTABLE_AC_COEFF;
    return false;
  }
  for (int mcu_y = 0; mcu_y < MCU_rows; ++mcu_y) {
    for (int mcu_x = 0; mcu_x < MCUs_per_row; ++mcu_x) {
      // Handle the restart intervals.
      if (jpg->restart_interval > 0) {
        if (restarts_to_go == 0) {
          if (ProcessRestart(data, len,
                             &next_restart_marker, &br, jpg)) {
            restarts_to_go = jpg->restart_interval;
            memset(last_dc_coeff, 0, sizeof(last_dc_coeff));
            if (eobrun > 0) {
              fprintf(stderr, 'End-of-block run too long.\n');
              jpg->error = JPEG_EOB_RUN_TOO_LONG;
              return false;
            }
            eobrun = -1;   // fresh start
          } else {
            return false;
          }
        }
        --restarts_to_go;
      }
      // Decode one MCU.
      for (size_t i = 0; i < scan_info->components.size(); ++i) {
        JPEGComponentScanInfo* si = &scan_info->components[i];
        JPEGComponent* c = &jpg->components[si->comp_idx];
        const HuffmanTableEntry* dc_lut =
            &dc_huff_lut[si->dc_tbl_idx * kJpegHuffmanLutSize];
        const HuffmanTableEntry* ac_lut =
            &ac_huff_lut[si->ac_tbl_idx * kJpegHuffmanLutSize];
        int nblocks_y = is_interleaved ? c->v_samp_factor : 1;
        int nblocks_x = is_interleaved ? c->h_samp_factor : 1;
        for (int iy = 0; iy < nblocks_y; ++iy) {
          for (int ix = 0; ix < nblocks_x; ++ix) {
            int block_y = mcu_y * nblocks_y + iy;
            int block_x = mcu_x * nblocks_x + ix;
            int block_idx = block_y * c->width_in_blocks + block_x;
            coeff_t* coeffs = &c->coeffs[block_idx * kDCTBlockSize];
            if (Ah == 0) {
              if (!DecodeDCTBlock(dc_lut, ac_lut, Ss, Se, Al, &eobrun, &br, jpg,
                                  &last_dc_coeff[si->comp_idx], coeffs)) {
                return false;
              }
            } else {
              if (!RefineDCTBlock(ac_lut, Ss, Se, Al,
                                  &eobrun, &br, jpg, coeffs)) {
                return false;
              }
            }
            ++block_scan_index;
          }
        }
      }
    }
  }
  if (eobrun > 0) {
    fprintf(stderr, 'End-of-block run too long.\n');
    jpg->error = JPEG_EOB_RUN_TOO_LONG;
    return false;
  }
  if (!br.FinishStream(pos)) {
    jpg->error = JPEG_INVALID_SCAN;
    return false;
  }
  if (*pos > len) {
    fprintf(stderr, 'Unexpected end of file during scan. pos=%d len=%d\n',
            static_cast<int>(*pos), static_cast<int>(len));
    jpg->error = JPEG_UNEXPECTED_EOF;
    return false;
  }
  return true;
}
    
    // Writes a string using the out callback.
inline bool JPEGWrite(JPEGOutput out, const std::string& s) {
  const uint8_t* data = reinterpret_cast<const uint8_t*>(&s[0]);
  return JPEGWrite(out, data, s.size());
}
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    // Entropy encoding (Huffman) utilities.
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    namespace guetzli {
    }
    
    #include 'guetzli/gamma_correct.h'
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    namespace guetzli {
    }
    
      // Make a local copy of the input bit length histogram.
  int count[kJpegHuffmanMaxBitLength + 1] = { 0 };
  int total_count = 0;
  for (len = 1; len <= kJpegHuffmanMaxBitLength; ++len) {
    count[len] = count_in[len];
    total_count += count[len];
  }
    
      void ToLinearRGB(std::vector<std::vector<float> >* rgb) const;
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    #include 'dumpcrash_stack.h'
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    class Test_Spy_Sample {
  public:
    Test_Spy_Sample();
    ~Test_Spy_Sample();
    }
    
    #include 'comm/debugger/spy.inl'
    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
    
    ScopeJEnv::ScopeJEnv(JavaVM* jvm, jint _capacity)
    : vm_(jvm), env_(NULL), we_attach_(false), status_(0) {
    ASSERT(jvm);
    do {
        env_ = (JNIEnv*)pthread_getspecific(g_env_key);
        
        if (NULL != env_) {
            break;
        }
        
        status_ = vm_->GetEnv((void**) &env_, JNI_VERSION_1_6);
    }
    }
    
        ~ScopedJstring();