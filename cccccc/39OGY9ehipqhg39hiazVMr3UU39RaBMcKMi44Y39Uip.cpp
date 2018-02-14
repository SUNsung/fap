
        
        class SILDebuggerClient;
    
      void visitTuplePattern(TuplePattern *P) {
    // We print tuples as '(x, y)'.
    ResultString += '(';
    for (unsigned i = 0, e = P->getNumElements(); i != e; ++i) {
      visit(P->getElement(i).getPattern());
      if (i + 1 != e)
        ResultString += ', ';
    }
    ResultString += ')';
  }
  void visitNamedPattern(NamedPattern *P) {
    ResultString += P->getBoundName().str();
  }
  void visitAnyPattern(AnyPattern *P) {
    ResultString += '_';
  }
  void visitVarPattern(VarPattern *P) {
    visit(P->getSubPattern());
  }
    
        // Quickly see if copy has only one use and that use is a destroy_value. In
    // such a case, we can always eliminate both the copy and the destroy.
    if (auto *Op = CVI->getSingleUse()) {
      if (auto *DVI = dyn_cast<DestroyValueInst>(Op->getUser())) {
        DVI->eraseFromParent();
        CVI->eraseFromParent();
        NumEliminatedInsts += 2;
        continue;
      }
    }
    
        size_t C1Offset = SourceNext - SourceStart;
    ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart, C + 2,
                       llvm::lenientConversion);
    
    /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
    #ifndef SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
#define SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
    
    // Overloads for other simple built-in types.
inline void PrintTo(bool x, ::std::ostream* os) {
  *os << (x ? 'true' : 'false');
}
    
    #define EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter::INTERCEPT_ALL_THREADS, \
          &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // Type-parameterized tests are abstract test patterns parameterized
// by a type.  Compared with typed tests, type-parameterized tests
// allow you to define the test pattern without knowing what the type
// parameters are.  The defined pattern can be instantiated with
// different types any number of times, in any number of translation
// units.
//
// If you are designing an interface or concept, you can define a
// suite of type-parameterized tests to verify properties that any
// valid implementation of the interface/concept should have.  Then,
// each implementation can easily instantiate the test suite to verify
// that it conforms to the requirements, without having to write
// similar tests repeatedly.  Here's an example:
    
    $for j [[
    
      template <GTEST_1_TYPENAMES_(U)>
  tuple& CopyFrom(const GTEST_1_TUPLE_(U)& t) {
    f0_ = t.f0_;
    return *this;
  }
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    #ifdef ANDROID
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}
    
    uv_loop_t *loop;
uv_buf_t upgradeHeader;
uv_buf_t framePack;
    
    #ifdef _WIN32
#pragma comment(lib, 'Ws2_32.lib')
    
    template <bool isServer>
void *Group<isServer>::getUserData() {
    return userData;
}
    
    
    {    }
    
    
    {    // this is not correct, but it works for now
    // think about transfer - should allow one to not delete
    // but in this case it doesn't matter at all
    void close(Loop *loop, void (*cb)(Poll *)) {
        socket->release();
        socket->get_io_service().post([cb, this]() {
            cb(this);
        });
        delete socket;
        socket = nullptr;
    }
};
    
        Poll(const Poll &other) = delete;
    
    
    {    int indices = NodeData::getMemoryBlockIndex(NodeData::preAllocMaxSize) + 1;
    for (int i = 0; i < indices; i++) {
        if (nodeData->preAlloc[i]) {
            delete [] nodeData->preAlloc[i];
        }
    }
    delete [] nodeData->preAlloc;
    delete nodeData->netContext;
    delete nodeData;
    loop->destroy();
}