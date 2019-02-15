
        
          // Next, add requirements.
  if (covariantSelf) {
    auto paramTy = GenericTypeParamType::get(/*depth=*/0, /*index=*/0, ctx);
    Requirement reqt(RequirementKind::Superclass, paramTy, substConcreteType);
    builder.addRequirement(reqt, source, nullptr);
  }
    
    void SILLayout::Profile(llvm::FoldingSetNodeID &id,
                        CanGenericSignature Generics,
                        ArrayRef<SILField> Fields) {
  id.AddPointer(Generics.getPointer());
  for (auto &field : Fields) {
    id.AddPointer(field.getLoweredType().getPointer());
    id.AddBoolean(field.isMutable());
  }
}

    
    #if defined(__APPLE__)
#include 'Darwin/Cache-Mac.cpp'
#else
    
        // Try adding an 'e' and look for that as a verb.
    if (possibleVerb.back() != 'e') {
      SmallString<16> possibleVerbWithE;
      possibleVerbWithE += possibleVerb;
      possibleVerbWithE += 'e';
      if (getPartOfSpeech(possibleVerbWithE) == PartOfSpeech::Verb)
        return PartOfSpeech::Gerund;
    }
    
    /// Maintain a set of known CF types.
static bool isKnownCFTypeName(StringRef name) {
  return std::binary_search(KnownCFTypes, KnownCFTypes + NumKnownCFTypes,
                            name, SortByLengthComparator());
}