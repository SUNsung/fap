
        
        // Computes part of matrix.vector v = Wu. Computes N=8 results.
// For details see PartialMatrixDotVector64 with N=8.
static void PartialMatrixDotVector8(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, num_out, v);
}
#else
namespace tesseract {
#endif  // __AVX2__
    }
    
    namespace tesseract {
    }
    
    #include <cstdint>  // for int16_t
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    
    {
/**
 * @name tess_add_doc_word
 *
 * Add the given word to the document dictionary
 */
void Tesseract::tess_add_doc_word(WERD_CHOICE *word_choice) {
  getDict().add_document_word(*word_choice);
}
}  // namespace tesseract

    
    /**********************************************************************
 * recog_word
 *
 * Convert the word to tess form and pass it to the tess segmenter.
 * Convert the output back to editor form.
 **********************************************************************/
namespace tesseract {
void Tesseract::recog_word(WERD_RES *word) {
  if (wordrec_skip_no_truth_words && (word->blamer_bundle == nullptr ||
      word->blamer_bundle->incorrect_result_reason() == IRR_NO_TRUTH)) {
    if (classify_debug_level) tprintf('No truth for word - skipping\n');
    word->tess_failed = true;
    return;
  }
  ASSERT_HOST(!word->chopped_word->blobs.empty());
  recog_word_recursive(word);
  word->SetupBoxWord();
  if (word->best_choice->length() != word->box_word->length()) {
    tprintf('recog_word ASSERT FAIL String:\'%s\'; '
            'Strlen=%d; #Blobs=%d\n',
            word->best_choice->debug_string().string(),
            word->best_choice->length(), word->box_word->length());
  }
  ASSERT_HOST(word->best_choice->length() == word->box_word->length());
  // Check that the ratings matrix size matches the sum of all the
  // segmentation states.
  if (!word->StatesAllValid()) {
    tprintf('Not all words have valid states relative to ratings matrix!!');
    word->DebugWordChoices(true, nullptr);
    ASSERT_HOST(word->StatesAllValid());
  }
  if (tessedit_override_permuter) {
    /* Override the permuter type if a straight dictionary check disagrees. */
    uint8_t perm_type = word->best_choice->permuter();
    if ((perm_type != SYSTEM_DAWG_PERM) &&
        (perm_type != FREQ_DAWG_PERM) && (perm_type != USER_DAWG_PERM)) {
      uint8_t real_dict_perm_type = dict_word(*word->best_choice);
      if (((real_dict_perm_type == SYSTEM_DAWG_PERM) ||
           (real_dict_perm_type == FREQ_DAWG_PERM) ||
           (real_dict_perm_type == USER_DAWG_PERM)) &&
          (alpha_count(word->best_choice->unichar_string().string(),
                       word->best_choice->unichar_lengths().string()) > 0)) {
        word->best_choice->set_permuter(real_dict_perm_type);  // use dict perm
      }
    }
    if (tessedit_rejection_debug &&
        perm_type != word->best_choice->permuter()) {
      tprintf('Permuter Type Flipped from %d to %d\n',
              perm_type, word->best_choice->permuter());
    }
  }
  // Factored out from control.cpp
  ASSERT_HOST((word->best_choice == nullptr) == (word->raw_choice == nullptr));
  if (word->best_choice == nullptr || word->best_choice->length() == 0 ||
      static_cast<int>(strspn(word->best_choice->unichar_string().string(),
                              ' ')) == word->best_choice->length()) {
    word->tess_failed = true;
    word->reject_map.initialise(word->box_word->length());
    word->reject_map.rej_word_tess_failure();
  } else {
    word->tess_failed = false;
  }
}
    }
    
      /// Threshold the rectangle, taking everything except the src_pix
  /// from the class, using thresholds/hi_values to the output pix.
  /// NOTE that num_channels is the size of the thresholds and hi_values
  // arrays and also the bytes per pixel in src_pix.
  void ThresholdRectToPix(Pix* src_pix, int num_channels,
                          const int* thresholds, const int* hi_values,
                          Pix** pix) const;
    
    #include <iterator>
#include <boost/type_traits/is_convertible.hpp>
#include <boost/type_traits/is_pointer.hpp>
    
    #ifdef __cplusplus
#  include <boost/cstdint.hpp>
#endif
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_wild()
{
   if(position == last) 
      return false;
   if(is_separator(*position) && ((match_any_mask & static_cast<const re_dot*>(pstate)->mask) == 0))
      return false;
   if((*position == char_type(0)) && (m_match_flags & match_not_dot_null))
      return false;
   pstate = pstate->next.p;
   ++position;
   return true;
}
    
       // find out which of these two alternatives we need to take:
   if(position == last)
   {
      take_first = jmp->can_be_null & mask_take;
      take_second = jmp->can_be_null & mask_skip;
   }
   else
   {
      take_first = can_start(*position, jmp->_map, (unsigned char)mask_take);
      take_second = can_start(*position, jmp->_map, (unsigned char)mask_skip);
  }
    
    //
// provide std lib proposal compatible constants:
//
namespace regex_constants{
    }
    
    
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1, class Traits2>
inline std::size_t regex_split(OutputIterator out,
                   std::basic_string<charT, Traits1, Alloc1>& s, 
                   const basic_regex<charT, Traits2>& e,
                   match_flag_type flags = match_default)
{
   return regex_split(out, s, e, flags, UINT_MAX);
}
    
    #ifndef BOOST_REGEX_V4_REGEX_TOKEN_ITERATOR_HPP
#define BOOST_REGEX_V4_REGEX_TOKEN_ITERATOR_HPP