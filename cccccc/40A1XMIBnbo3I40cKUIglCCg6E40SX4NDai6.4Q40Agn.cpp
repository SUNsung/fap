
        
          /// Emit a partial application of an Objective-C method to its 'self'
  /// argument.
  void emitObjCPartialApplication(IRGenFunction &IGF,
                                  ObjCMethod method,
                                  CanSILFunctionType origType,
                                  CanSILFunctionType partialAppliedType,
                                  llvm::Value *self,
                                  SILType selfType,
                                  Explosion &out);
    
    
    {  static bool classof(const MarkupASTNode *N) {
    return N->getKind() == ASTNodeKind::CodeBlock;
  }
};
    
    struct IndexRelation {
  const Decl *decl;
  SymbolInfo symInfo;
  SymbolRoleSet roles = SymbolRoleSet(0);
    }
    
    namespace testing {
    }
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
     private:
  class Iterator : public ParamIteratorInterface<ParamType> {
   public:
    Iterator(const ParamGeneratorInterface<ParamType>* base,
      const ParamGenerator<T1>& g1,
      const typename ParamGenerator<T1>::iterator& current1,
      const ParamGenerator<T2>& g2,
      const typename ParamGenerator<T2>::iterator& current2,
      const ParamGenerator<T3>& g3,
      const typename ParamGenerator<T3>::iterator& current3,
      const ParamGenerator<T4>& g4,
      const typename ParamGenerator<T4>::iterator& current4,
      const ParamGenerator<T5>& g5,
      const typename ParamGenerator<T5>::iterator& current5)
        : base_(base),
          begin1_(g1.begin()), end1_(g1.end()), current1_(current1),
          begin2_(g2.begin()), end2_(g2.end()), current2_(current2),
          begin3_(g3.begin()), end3_(g3.end()), current3_(current3),
          begin4_(g4.begin()), end4_(g4.end()), current4_(current4),
          begin5_(g5.begin()), end5_(g5.end()), current5_(current5)    {
      ComputeCurrentValue();
    }
    virtual ~Iterator() {}
    }
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
    
    {    // You can generate a failure in any event handler except
    // OnTestPartResult. Just use an appropriate Google Test assertion to do
    // it.
    EXPECT_LE(difference, 0) << 'Leaked ' << difference << ' unit(s) of Water!';
  }
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsShapeEdgePolygon_getPointsCount'', nullptr);
        return 0;
    }
#endif
    
    
    {    delete[] glVertices;
}
    
        virtual void DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color);
    
    
    {
    {				prevBody = body;
			}
		}
    
    			bd.position.Set(230.0f, 0.5f);
			body = m_world->CreateBody(&bd);
			body->CreateFixture(&box, 0.5f);