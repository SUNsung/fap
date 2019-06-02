
        
          // Finally, add the generic parameters from the requirement.
  for (auto genericParam : reqSig->getGenericParams().slice(1)) {
    // The only depth that makes sense is depth == 1, the generic parameters
    // of the requirement itself. Anything else is from invalid code.
    if (genericParam->getDepth() != 1) {
      return;
    }
    }
    
    void CacheImpl::releaseValue(void *Value) {
  cache_release_value(static_cast<cache_t*>(Impl), Value);
}
    
      Begin = new char[capacity];
  EndOfAllocation = Begin + capacity;
  End = Begin + oldSize + needed;
  std::memcpy(Begin, oldBegin, oldSize);
    
    void swift::printOpaquePrefixMap(raw_ostream &out, void *_root,
                         void (*printNodeData)(raw_ostream &out, void *node)) {
  auto root = reinterpret_cast<Node*>(_root);
  if (!root) {
    out << '(empty)\n';
    return;
  }
  TreePrinter(out, *printNodeData).print(root, ChildKind::Root);
}
    
    
void ClangDiagnosticConsumer::HandleDiagnostic(
    clang::DiagnosticsEngine::Level clangDiagLevel,
    const clang::Diagnostic &clangDiag) {
  // Handle the module-not-found diagnostic specially if it's a top-level module
  // we're looking for.
  if (clangDiag.getID() == clang::diag::err_module_not_found &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    return;
  }
    }
    
    
    { protected:
  int n_ = 0;
  std::mutex m_;
  std::condition_variable cv_;
};
    
    
    {} // namespace
    
    OPERATOR_SCHEMA(FindDuplicateElements)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
The *FindDuplicateElements* op takes a single 1-D tensor *data* as input and returns a single 1-D output tensor *indices*. The output tensor contains the indices of the duplicate elements of the input, excluding the first occurrences. If all elements of *data* are unique, *indices* will be empty.
    
    template <typename T, class Context>
class BernoulliJSDOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
    struct SrcPos {
  bool operator==(SrcPos o) const {
    return line == o.line && col == o.col;
  }
  bool operator!=(SrcPos o) const { return !(*this == o); }
    }
    
      // The HHIRLICM runtime option is all capitals, so separation
  // cannot be determined. Special case it.
  boost::replace_first(out, 'hhirlicm', 'hhir_licm');
  // The HHVM ini option becomes the standard PHP option.
  boost::replace_first(out,
                       'hhvm.server.upload.max_file_uploads',
                       'max_file_uploads');
  // Make sure IPv6 or IPv4 are handled correctly
  boost::replace_first(out, '_i_pv', '_ipv');
  boost::replace_first(out, '.i_pv', '.ipv');
  // urls are special too. Let's not have 'ur_ls'
  boost::replace_first(out, '_ur_ls', '_urls');
  boost::replace_first(out, '.ur_ls', '.urls');
  // No use of Eval in our ini strings
  boost::replace_first(out, '.eval.', '.');
  boost::replace_first(out, '.my_sql.', '.mysql.');
  boost::replace_first(out, '.enable_hip_hop_syntax', '.force_hh');
    
    
    {    assertx(data == comma || data == semi);
    // eat parameters, and figure out if we have ';base64'
    while (semi && (data == semi)) {
      data++;
      meta_len--;
      char* equals = (char*)memchr(data, '=', meta_len);
      semi = (char*)memchr(data, ';', meta_len);
      if (!equals || (semi && semi < data)) {
        // no equals, so either 'base64' or its bad
        if (meta_len != sizeof('base64') - 1 ||
            memcmp(data, 'base64', sizeof('base64')-1)) {
          raise_warning('rfc2396: invalid parameter');
          return nullptr;
        }
        // it's 'base64', we're done
        base64 = true;
        meta_len -= sizeof('base64') - 1;
        data += sizeof('base64') - 1;
        break;
      }
      // there's a parameter
      if (semi) {
        meta_len -= semi - data + 1;
        data = semi;
      } /* else, we're done with meta */
    }
  }
  data = comma + 1;
  data_len -= 1;
  String decoded;
    
    #include 'hphp/runtime/base/directory.h'