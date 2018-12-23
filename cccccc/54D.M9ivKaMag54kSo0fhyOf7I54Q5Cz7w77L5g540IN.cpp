
        
          MutableArrayRef<Type> getReplacementTypes() {
    return MutableArrayRef<Type>(getTrailingObjects<Type>(),
                                 getNumReplacementTypes());
  }
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
    void swift::printOpaquePrefixMap(raw_ostream &out, void *_root,
                         void (*printNodeData)(raw_ostream &out, void *node)) {
  auto root = reinterpret_cast<Node*>(_root);
  if (!root) {
    out << '(empty)\n';
    return;
  }
  TreePrinter(out, *printNodeData).print(root, ChildKind::Root);
}
    
    #include 'swift/Demangling/Demangle.h'
#include 'swift/Demangling/Demangler.h'
#include <cstdio>