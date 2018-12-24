
        
        /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
    #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    
    {  for (std::map<int, ParamContent*>::iterator iter = vcMap.begin();
                                          iter != vcMap.end();
                                          ++iter) {
    ParamContent* cur = iter->second;
    if (!changes_only || cur->HasChanged()) {
      fprintf(fp, '%-25s   %-12s   # %s\n',
              cur->GetName(), cur->GetValue().string(), cur->GetDescription());
    }
  }
  fclose(fp);
}
#endif // GRAPHICS_DISABLED

    
      // Construct the cartesian product of the best_choices of word(1) and word2.
  WERD_CHOICE_LIST joined_choices;
  WERD_CHOICE_IT jc_it(&joined_choices);
  WERD_CHOICE_IT bc1_it(&word->best_choices);
  WERD_CHOICE_IT bc2_it(&word2->best_choices);
  int num_word1_choices = word->best_choices.length();
  int total_joined_choices = num_word1_choices;
  // Nota Bene: For the main loop here, we operate only on the 2nd and greater
  // word2 choices, and put them in the joined_choices list. The 1st word2
  // choice gets added to the original word1 choices in-place after we have
  // finished with them.
  int bc2_index = 1;
  for (bc2_it.forward(); !bc2_it.at_first(); bc2_it.forward(), ++bc2_index) {
    if (total_joined_choices >= kTooManyAltChoices &&
        bc2_index > kAltsPerPiece)
      break;
    int bc1_index = 0;
    for (bc1_it.move_to_first(); bc1_index < num_word1_choices;
        ++bc1_index, bc1_it.forward()) {
      if (total_joined_choices >= kTooManyAltChoices &&
          bc1_index > kAltsPerPiece)
        break;
      WERD_CHOICE *wc = new WERD_CHOICE(*bc1_it.data());
      *wc += *bc2_it.data();
      jc_it.add_after_then_move(wc);
      ++total_joined_choices;
    }
  }
  // Now that we've filled in as many alternates as we want, paste the best
  // choice for word2 onto the original word alt_choices.
  bc1_it.move_to_first();
  bc2_it.move_to_first();
  for (bc1_it.mark_cycle_pt(); !bc1_it.cycled_list(); bc1_it.forward()) {
    *bc1_it.data() += *bc2_it.data();
  }
  bc1_it.move_to_last();
  bc1_it.add_list_after(&joined_choices);
    
    // Class to hold an array of bounding boxes for an output word and
// the bounding box of the whole word.
class BoxWord {
 public:
  BoxWord();
  explicit BoxWord(const BoxWord& src);
  ~BoxWord() = default;
    }
    
          case kLastType:
        if (!in_fragmented_record) {
          ReportCorruption(fragment.size(),
                           'missing start of fragmented record(2)');
        } else {
          scratch->append(fragment.data(), fragment.size());
          *record = Slice(*scratch);
          last_record_offset_ = prospective_record_offset;
          return true;
        }
        break;
    
      Status AddRecord(const Slice& slice);
    
    
    {}  // namespace leveldb
    
    class SnapshotList {
 public:
  SnapshotList() : head_(0) {
    head_.prev_ = &head_;
    head_.next_ = &head_;
  }
    }