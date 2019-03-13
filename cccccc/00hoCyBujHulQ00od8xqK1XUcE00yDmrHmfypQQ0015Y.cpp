
        
            if (info.bytes > buf.size()) {
      llvm::dbgs() << 'AST section too small.\n';
      return false;
    }
    
      DefaultCacheKey CKey(Key, &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    if (Entry->second == Value)
      return;
    DCache.CBs.keyDestroyCB(Entry->first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry->second, nullptr);
    DCache.Entries.erase(Entry);
  }
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
      struct IndentScope {
    TreePrinter *Printer;
    size_t OldLength;
    IndentScope(TreePrinter *printer, StringRef indent)
        : Printer(printer), OldLength(printer->Indent.size()) {
      Printer->Indent += indent;
    }
    ~IndentScope() { Printer->Indent.resize(OldLength); }
  };
    
    static bool encodeToUTF8(const std::vector<uint32_t> &Scalars,
                         std::string &OutUTF8) {
  for (auto S : Scalars) {
    if (!isValidUnicodeScalar(S)) {
      OutUTF8.clear();
      return false;
    }
    if (S >= 0xD800 && S < 0xD880)
      S -= 0xD800;
    }
    }
    
    void CompileJobAction::anchor() {}
    
    class LLVM_LIBRARY_VISIBILITY Darwin : public ToolChain {
protected:
  InvocationInfo constructInvocation(const InterpretJobAction &job,
                                     const JobContext &context) const override;
  InvocationInfo constructInvocation(const LinkJobAction &job,
                                     const JobContext &context) const override;
    }
    
    int orientation_and_script_detection(STRING& filename,
                                     OSResults*,
                                     tesseract::Tesseract*);
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
    
    {
    {    if (amount[tag.string()] == 1) {
      other->AddChild(vc->GetName(), vc->GetId(), vc->GetValue().string(),
                      vc->GetDescription());
    } else {  // More than one would use this submenu -> create submenu.
      SVMenuNode* sv = mr->AddChild(tag.string());
      if ((amount[tag.string()] <= MAX_ITEMS_IN_SUBMENU) ||
          (amount[tag2.string()] <= 1)) {
        sv->AddChild(vc->GetName(), vc->GetId(),
                     vc->GetValue().string(), vc->GetDescription());
      } else {  // Make subsubmenus.
        SVMenuNode* sv2 = sv->AddChild(tag2.string());
        sv2->AddChild(vc->GetName(), vc->GetId(),
                      vc->GetValue().string(), vc->GetDescription());
      }
    }
  }
  return mr;
}
    
    // Factory to build a BoxWord from a TWERD using the DENORMs on each blob to
// switch back to original image coordinates.
BoxWord* BoxWord::CopyFromNormalized(TWERD* tessword) {
  BoxWord* boxword = new BoxWord();
  // Count the blobs.
  boxword->length_ = tessword->NumBlobs();
  // Allocate memory.
  boxword->boxes_.reserve(boxword->length_);
    }
    
    
    {}  // namespace tesseract