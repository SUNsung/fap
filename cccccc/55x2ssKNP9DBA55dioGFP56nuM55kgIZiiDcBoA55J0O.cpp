
        
        bool dls::compute_pose(cv::Mat& R, cv::Mat& t)
{
    }
    
            // cross two lines
        Point2f origin1 = quad_corners[0];
        Point2f dir1 = quad_corners[1] - quad_corners[0];
        Point2f origin2 = quad_corners[2];
        Point2f dir2 = quad_corners[3] - quad_corners[2];
        double angle = acos(dir1.dot(dir2)/(norm(dir1)*norm(dir2)));
        if(cvIsNaN(angle) || cvIsInf(angle) || angle < 0.5 || angle > CV_PI - 0.5) continue;
    
    // Returns a new x-height maximally compatible with the result in word_res.
// See comment above for overall algorithm.
float Tesseract::ComputeCompatibleXheight(WERD_RES *word_res,
                                          float* baseline_shift) {
  STATS top_stats(0, MAX_UINT8);
  STATS shift_stats(-MAX_UINT8, MAX_UINT8);
  int bottom_shift = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  do {
    top_stats.clear();
    shift_stats.clear();
    for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
      TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
      UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
      if (unicharset.get_isalpha(class_id) ||
          unicharset.get_isdigit(class_id)) {
        int top = blob->bounding_box().top() + bottom_shift;
        // Clip the top to the limit of normalized feature space.
        if (top >= INT_FEAT_RANGE)
          top = INT_FEAT_RANGE - 1;
        int bottom = blob->bounding_box().bottom() + bottom_shift;
        int min_bottom, max_bottom, min_top, max_top;
        unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                  &min_top, &max_top);
        // Chars with a wild top range would mess up the result so ignore them.
        if (max_top - min_top > kMaxCharTopRange)
          continue;
        int misfit_dist = MAX((min_top - x_ht_acceptance_tolerance) - top,
                            top - (max_top + x_ht_acceptance_tolerance));
        int height = top - kBlnBaselineOffset;
        if (debug_x_ht_level >= 2) {
          tprintf('Class %s: height=%d, bottom=%d,%d top=%d,%d, actual=%d,%d: ',
                  unicharset.id_to_unichar(class_id),
                  height, min_bottom, max_bottom, min_top, max_top,
                  bottom, top);
        }
        // Use only chars that fit in the expected bottom range, and where
        // the range of tops is sensibly near the xheight.
        if (min_bottom <= bottom + x_ht_acceptance_tolerance &&
            bottom - x_ht_acceptance_tolerance <= max_bottom &&
            min_top > kBlnBaselineOffset &&
            max_top - kBlnBaselineOffset >= kBlnXHeight &&
            misfit_dist > 0) {
          // Compute the x-height position using proportionality between the
          // actual height and expected height.
          int min_xht = DivRounded(height * kBlnXHeight,
                                   max_top - kBlnBaselineOffset);
          int max_xht = DivRounded(height * kBlnXHeight,
                                   min_top - kBlnBaselineOffset);
          if (debug_x_ht_level >= 2) {
            tprintf(' xht range min=%d, max=%d\n', min_xht, max_xht);
          }
          // The range of expected heights gets a vote equal to the distance
          // of the actual top from the expected top.
          for (int y = min_xht; y <= max_xht; ++y)
            top_stats.add(y, misfit_dist);
        } else if ((min_bottom > bottom + x_ht_acceptance_tolerance ||
                    bottom - x_ht_acceptance_tolerance > max_bottom) &&
                   bottom_shift == 0) {
          // Get the range of required bottom shift.
          int min_shift = min_bottom - bottom;
          int max_shift = max_bottom - bottom;
          if (debug_x_ht_level >= 2) {
            tprintf(' bottom shift min=%d, max=%d\n', min_shift, max_shift);
          }
          // The range of expected shifts gets a vote equal to the min distance
          // of the actual bottom from the expected bottom, spread over the
          // range of its acceptance.
          int misfit_weight = abs(min_shift);
          if (max_shift > min_shift)
            misfit_weight /= max_shift - min_shift;
          for (int y = min_shift; y <= max_shift; ++y)
            shift_stats.add(y, misfit_weight);
        } else {
          if (bottom_shift == 0) {
            // Things with bottoms that are already ok need to say so, on the
            // 1st iteration only.
            shift_stats.add(0, kBlnBaselineOffset);
          }
          if (debug_x_ht_level >= 2) {
            tprintf(' already OK\n');
          }
        }
      }
    }
    if (shift_stats.get_total() > top_stats.get_total()) {
      bottom_shift = IntCastRounded(shift_stats.median());
      if (debug_x_ht_level >= 2) {
        tprintf('Applying bottom shift=%d\n', bottom_shift);
      }
    }
  } while (bottom_shift != 0 &&
           top_stats.get_total() < shift_stats.get_total());
  // Baseline shift is opposite sign to the bottom shift.
  *baseline_shift = -bottom_shift / word_res->denorm.y_scale();
  if (debug_x_ht_level >= 2) {
    tprintf('baseline shift=%g\n', *baseline_shift);
  }
  if (top_stats.get_total() == 0)
    return bottom_shift != 0 ? word_res->x_height : 0.0f;
  // The new xheight is just the median vote, which is then scaled out
  // of BLN space back to pixel space to get the x-height in pixel space.
  float new_xht = top_stats.median();
  if (debug_x_ht_level >= 2) {
    tprintf('Median xht=%f\n', new_xht);
    tprintf('Mode20:A: New x-height = %f (norm), %f (orig)\n',
            new_xht, new_xht / word_res->denorm.y_scale());
  }
  // The xheight must change by at least x_ht_min_change to be used.
  if (fabs(new_xht - kBlnXHeight) >= x_ht_min_change)
    return new_xht / word_res->denorm.y_scale();
  else
    return bottom_shift != 0 ? word_res->x_height : 0.0f;
}
    
    extern BLOCK_LIST *current_block_list;
extern STRING_VAR_H (editor_image_win_name, 'EditorImage',
'Editor image window name');
extern INT_VAR_H (editor_image_xpos, 590, 'Editor image X Pos');
extern INT_VAR_H (editor_image_ypos, 10, 'Editor image Y Pos');
extern INT_VAR_H (editor_image_height, 680, 'Editor image height');
extern INT_VAR_H (editor_image_width, 655, 'Editor image width');
extern INT_VAR_H (editor_image_word_bb_color, BLUE,
'Word bounding box colour');
extern INT_VAR_H (editor_image_blob_bb_color, YELLOW,
'Blob bounding box colour');
extern INT_VAR_H (editor_image_text_color, WHITE, 'Correct text colour');
extern STRING_VAR_H (editor_dbwin_name, 'EditorDBWin',
'Editor debug window name');
extern INT_VAR_H (editor_dbwin_xpos, 50, 'Editor debug window X Pos');
extern INT_VAR_H (editor_dbwin_ypos, 500, 'Editor debug window Y Pos');
extern INT_VAR_H (editor_dbwin_height, 24, 'Editor debug window height');
extern INT_VAR_H (editor_dbwin_width, 80, 'Editor debug window width');
extern STRING_VAR_H (editor_word_name, 'BlnWords',
'BL normalised word window');
extern INT_VAR_H (editor_word_xpos, 60, 'Word window X Pos');
extern INT_VAR_H (editor_word_ypos, 510, 'Word window Y Pos');
extern INT_VAR_H (editor_word_height, 240, 'Word window height');
extern INT_VAR_H (editor_word_width, 655, 'Word window width');
extern double_VAR_H (editor_smd_scale_factor, 1.0, 'Scaling for smd image');
    
      // Returns true if the provided word_choice is correct.
  bool ChoiceIsCorrect(const WERD_CHOICE* word_choice) const;
    
    double LLSQ::m() const {  // get gradient
  double covar = covariance();
  double x_var = x_variance();
  if (x_var != 0.0)
    return covar / x_var;
  else
    return 0.0;                    // too little
}
    
    // Free allocated memory and clear pointers.
void DENORM::Clear() {
  if (x_map_ != NULL) {
    delete x_map_;
    x_map_ = NULL;
  }
  if (y_map_ != NULL) {
    delete y_map_;
    y_map_ = NULL;
  }
  if (rotation_ != NULL) {
    delete rotation_;
    rotation_ = NULL;
  }
}
    
      /**
   * set space size etc.
   * @param prop proportional
   * @param kern inter char size
   * @param space inter word size
   * @param ch_pitch pitch if fixed
   */
  void set_stats(BOOL8 prop,
                 inT16 kern,
                 inT16 space,
                 inT16 ch_pitch) {
    proportional = prop;
    kerning = (inT8) kern;
    spacing = space;
    pitch = ch_pitch;
  }
  /// set char size
  void set_xheight(inT32 height) {
    xheight = height;
  }
  /// set font class
  void set_font_class(inT16 font) {
    font_class = font;
  }
  /// return proportional
  BOOL8 prop() const {
    return proportional;
  }
  bool right_to_left() const {
    return right_to_left_;
  }
  void set_right_to_left(bool value) {
    right_to_left_ = value;
  }
  /// return pitch
  inT32 fixed_pitch() const {
    return pitch;
  }
  /// return kerning
  inT16 kern() const {
    return kerning;
  }
  /// return font class
  inT16 font() const {
    return font_class;
  }
  /// return spacing
  inT16 space() const {
    return spacing;
  }
  /// return filename
  const char *name() const {
    return filename.string ();
  }
  /// return xheight
  inT32 x_height() const {
    return xheight;
  }
  float cell_over_xheight() const {
    return cell_over_xheight_;
  }
  void set_cell_over_xheight(float ratio) {
    cell_over_xheight_ = ratio;
  }
  /// get rows
  ROW_LIST *row_list() {
    return &rows;
  }
  // Compute the margins between the edges of each row and this block's
  // polyblock, and store the results in the rows.
  void compute_row_margins();
    
    void idct_4x4(const jpgd_block_t* pSrc_ptr, uint8* pDst_ptr)
{
  int temp[64];
  int* pTemp = temp;
  const jpgd_block_t* pSrc = pSrc_ptr;
    }
    
      public:
    jpeg_decoder_mem_stream() : m_pSrc_data(NULL), m_ofs(0), m_size(0) { }
    jpeg_decoder_mem_stream(const uint8 *pSrc_data, uint size) : m_pSrc_data(pSrc_data), m_ofs(0), m_size(size) { }
    
    static const vorbis_residue_template _res_8u_0[]={
  {1,0,32,  &_residue_44_low_un,
   &_huff_book__8u0__single,&_huff_book__8u0__single,
   &_resbook_8u_0,&_resbook_8u_0},
};
static const vorbis_residue_template _res_8u_1[]={
  {1,0,32,  &_residue_44_mid_un,
   &_huff_book__8u1__single,&_huff_book__8u1__single,
   &_resbook_8u_1,&_resbook_8u_1},
};
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    #undef MULT16_32_Q15_ADD
static inline int MULT16_32_Q15_ADD(int a, int b, int c, int d) {
    int m;
    asm volatile('MULT $ac1, %0, %1' : : 'r' ((int)a), 'r' ((int)b));
    asm volatile('madd $ac1, %0, %1' : : 'r' ((int)c), 'r' ((int)d));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (m): 'i' (15));
    return m;
}
    
    /*gcc appears to emit MOVDQA's to load the argument of an _mm_cvtepi8_epi32()
  or _mm_cvtepi16_epi32() when optimizations are disabled, even though the
  actual PMOVSXWD instruction takes an m32 or m64. Unlike a normal memory
  reference, these require 16-byte alignment and load a full 16 bytes (instead
  of 4 or 8), possibly reading out of bounds.
    
    #undef silk_SMULWB
static OPUS_INLINE opus_int32 silk_SMULWB(opus_int32 a32, opus_int32 b32){
    opus_int32 ret;
    ops_count += 5;
    ret = (a32 >> 16) * (opus_int32)((opus_int16)b32) + (((a32 & 0x0000FFFF) * (opus_int32)((opus_int16)b32)) >> 16);
    return ret;
}
#undef    silk_SMLAWB
static OPUS_INLINE opus_int32 silk_SMLAWB(opus_int32 a32, opus_int32 b32, opus_int32 c32){
    opus_int32 ret;
    ops_count += 5;
    ret = ((a32) + ((((b32) >> 16) * (opus_int32)((opus_int16)(c32))) + ((((b32) & 0x0000FFFF) * (opus_int32)((opus_int16)(c32))) >> 16)));
    return ret;
}
    
    namespace xgboost {
    }
    
      flatbuffers::FlatBufferBuilder builder;
  auto name = builder.CreateString('Dog');
  auto sound = builder.CreateString('Bark');
  auto animal_buffer = sample::CreateAnimal(builder, name, sound);
  builder.Finish(animal_buffer);
    
    #endif  // GRPC_INTERNAL_COMPILER_CPP_GENERATOR_H

    
    namespace MyGame {
namespace Example {
    }
    }
    
      if (service->method_count() > 0) {
    printer->Print(*vars,
                   'static const char* $prefix$$Service$_method_names[] = {\n');
    for (int i = 0; i < service->method_count(); ++i) {
      (*vars)['Method'] = service->method(i).get()->name();
      printer->Print(*vars, '  \'/$Package$$Service$/$Method$\',\n');
    }
    printer->Print(*vars, '};\n\n');
  }
    
    namespace grpc_java_generator {
struct Parameters {
  //        //Defines the custom parameter types for methods
  //        //eg: flatbuffers uses flatbuffers.Builder as input for the client
  //        and output for the server grpc::string custom_method_io_type;
    }
    }
    
    // Track the server instance, so we can terminate it later.
grpc::Server *server_instance = nullptr;
// Mutex to protec this variable.
std::mutex wait_for_server;
std::condition_variable server_instance_cv;
    
      // Second, serialize the rest of the objects needed by the Monster.
  auto position = Vec3(1.0f, 2.0f, 3.0f);
    
      bool generate() {
    code_.Clear();
    code_ += '{';
    code_ += '  \'$schema\': \'http://json-schema.org/draft-04/schema#\',';
    code_ += '  \'definitions\': {';
    for (auto e = parser_.enums_.vec.cbegin(); e != parser_.enums_.vec.cend();
         ++e) {
      code_ += '    \'' + GenFullName(*e) + '\' : {';
      code_ += '      ' + GenType('string') + ',';
      std::string enumdef('      \'enum\': [');
      for (auto enum_value = (*e)->vals.vec.begin();
           enum_value != (*e)->vals.vec.end(); ++enum_value) {
        enumdef.append('\'' + (*enum_value)->name + '\'');
        if (*enum_value != (*e)->vals.vec.back()) { enumdef.append(', '); }
      }
      enumdef.append(']');
      code_ += enumdef;
      code_ += '    },';  // close type
    }
    for (auto s = parser_.structs_.vec.cbegin();
         s != parser_.structs_.vec.cend(); ++s) {
      const auto &structure = *s;
      code_ += '    \'' + GenFullName(structure) + '\' : {';
      code_ += '      ' + GenType('object') + ',';
      std::string comment;
      const auto &comment_lines = structure->doc_comment;
      for (auto comment_line = comment_lines.cbegin();
           comment_line != comment_lines.cend(); ++comment_line) {
        comment.append(*comment_line);
      }
      if (comment.size() > 0) {
        code_ += '      \'description\' : \'' + comment + '\',';
      }
      code_ += '      \'properties\' : {';
    }
    }
    }
    }
    }
    }
    
      ~Message() { grpc_slice_unref(slice_); }