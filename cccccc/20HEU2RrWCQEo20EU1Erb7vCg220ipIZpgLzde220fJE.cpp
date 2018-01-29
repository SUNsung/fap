
        
        
    {  // Set up scripts on all of the words that did not get sent to
  // ambigs_classify_and_output.  They all should have, but if all the
  // werd_res's don't get uch_sets, tesseract will crash when you try
  // to iterate over them. :-(
  int total_words = 0;
  for (page_res_it.restart_page(); page_res_it.block() != NULL;
       page_res_it.forward()) {
    if (page_res_it.word()) {
      if (page_res_it.word()->uch_set == NULL)
        page_res_it.word()->SetupFake(unicharset);
      total_words++;
    }
  }
  if (examined_words < 0.85 * total_words) {
    tprintf('TODO(antonova): clean up recog_training_segmented; '
            ' It examined only a small fraction of the ambigs image.\n');
  }
  tprintf('recog_training_segmented: examined %d / %d words.\n',
          examined_words, total_words);
}
    
    
    {  if (word->word->flag(W_DONT_CHOP)) {
    saved_enable_assoc = wordrec_enable_assoc;
    saved_chop_enable = chop_enable;
    wordrec_enable_assoc.set_value(0);
    chop_enable.set_value(0);
  }
  if (pass_n == 1)
    set_pass1();
  else
    set_pass2();
  recog_word(word);
  if (word->best_choice == NULL)
    word->SetupFake(*word->uch_set);
  if (word->word->flag(W_DONT_CHOP)) {
    wordrec_enable_assoc.set_value(saved_enable_assoc);
    chop_enable.set_value(saved_chop_enable);
  }
}
    
      // If a blob with the same bounding box as one of the truth character
  // bounding boxes is not classified as the corresponding truth character
  // blames character classifier for incorrect answer.
  void BlameClassifier(const UNICHARSET& unicharset,
                       const TBOX& blob_box,
                       const BLOB_CHOICE_LIST& choices,
                       bool debug);
    
    // The number of points to consider at each end.
const int kNumEndPoints = 3;
// The minimum number of points at which to switch to number of points
// for badly fitted lines.
// To ensure a sensible error metric, kMinPointsForErrorCount should be at
// least kMaxRealDistance / (1 - %ile) where %ile is the fractile used in
// ComputeUpperQuartileError.
const int kMinPointsForErrorCount = 16;
// The maximum real distance to use before switching to number of
// mis-fitted points, which will get square-rooted for true distance.
const int kMaxRealDistance = 2.0;
    
    
    {  result.xcoord = -src.ycoord;
  result.ycoord = src.xcoord;
  return result;
}
    
    static void MissingExternalApiFunction(const char *FnName) {
  Printf('ERROR: %s is not defined. Exiting.\n'
         'Did you use -fsanitize-coverage=... to build your code?\n',
         FnName);
  exit(1);
}
    
    
    {  // Execute the inner process untill it passes.
  // Every inner process should execute at least one input.
  std::string BaseCmd = CloneArgsWithoutX(Args, 'keep-all-flags');
  for (size_t i = 1; i <= AllFiles.size(); i++) {
    Printf('MERGE-OUTER: attempt %zd\n', i);
    auto ExitCode =
        ExecuteCommand(BaseCmd + ' -merge_control_file=' + CFPath);
    if (!ExitCode) {
      Printf('MERGE-OUTER: succesfull in %zd attempt(s)\n', i);
      break;
    }
  }
  // Read the control file and do the merge.
  Merger M;
  std::ifstream IF(CFPath);
  M.ParseOrExit(IF, true);
  IF.close();
  std::vector<std::string> NewFiles;
  size_t NumNewFeatures = M.Merge(&NewFiles);
  Printf('MERGE-OUTER: %zd new files with %zd new features added\n',
         NewFiles.size(), NumNewFeatures);
  for (auto &F: NewFiles)
    WriteToOutputCorpus(FileToVector(F));
  // We are done, delete the control file.
  RemoveFile(CFPath);
}
    
    MutationDispatcher::MutationDispatcher(Random &Rand,
                                       const FuzzingOptions &Options)
    : Rand(Rand), Options(Options) {
  DefaultMutators.insert(
      DefaultMutators.begin(),
      {
          {&MutationDispatcher::Mutate_EraseBytes, 'EraseBytes'},
          {&MutationDispatcher::Mutate_InsertByte, 'InsertByte'},
          {&MutationDispatcher::Mutate_InsertRepeatedBytes,
           'InsertRepeatedBytes'},
          {&MutationDispatcher::Mutate_ChangeByte, 'ChangeByte'},
          {&MutationDispatcher::Mutate_ChangeBit, 'ChangeBit'},
          {&MutationDispatcher::Mutate_ShuffleBytes, 'ShuffleBytes'},
          {&MutationDispatcher::Mutate_ChangeASCIIInteger, 'ChangeASCIIInt'},
          {&MutationDispatcher::Mutate_ChangeBinaryInteger, 'ChangeBinInt'},
          {&MutationDispatcher::Mutate_CopyPart, 'CopyPart'},
          {&MutationDispatcher::Mutate_CrossOver, 'CrossOver'},
          {&MutationDispatcher::Mutate_AddWordFromManualDictionary,
           'ManualDict'},
          {&MutationDispatcher::Mutate_AddWordFromTemporaryAutoDictionary,
           'TempAutoDict'},
          {&MutationDispatcher::Mutate_AddWordFromPersistentAutoDictionary,
           'PersAutoDict'},
      });
  if(Options.UseCmp)
    DefaultMutators.push_back(
        {&MutationDispatcher::Mutate_AddWordFromTORC, 'CMP'});
    }
    
      void SetCorpus(const InputCorpus *Corpus) { this->Corpus = Corpus; }