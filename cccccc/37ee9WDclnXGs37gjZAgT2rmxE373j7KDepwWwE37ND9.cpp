
        
        // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
     private:
  const FileDescriptor* file_;
    
    #include <string>
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
        // return a reasonable initial learning rate based on the initial mbsize
    double SearchForBestLearnRate(ComputationNetworkPtr net,
                                  ComputationNetworkPtr refNet,
                                  const ComputationNodeBasePtr& refNode, const int epochNumber,
                                  const double curLearnRate,
                                  IDataReader* trainSetDataReader,
                                  const std::vector<ComputationNodeBasePtr>& featureNodes,
                                  const std::vector<ComputationNodeBasePtr>& labelNodes,
                                  const std::vector<ComputationNodeBasePtr>& criterionNodes,
                                  const std::vector<ComputationNodeBasePtr>& evaluationNodes,
                                  StreamMinibatchInputs* inputMatrices,
                                  const std::list<ComputationNodeBasePtr>& learnableNodes,
                                  std::list<Matrix<ElemType>>& smoothedGradients, std::vector<double> smoothedCounts,
                                  const bool learnRateInitialized,
                                  const double largestPrevLearnRatePerSample);
    
    enum LabelKind
{
    labelNone = 0,       // no labels to worry about
    labelCategory = 1,   // category labels, creates mapping tables
    labelRegression = 2, // regression labels
    labelOther = 3,      // some other type of label
};
    
        // ProcessPassNDLScript - Process a pass of the NDL script
    // script - NDL Script to process
    // ndlPass - complete processing for this pass, all passes if ndlPassAll
    // skipThrough - for iterative processing, skip through this node in the script (used for in-line MEL processing)
    // fullValidate - validate as a complete network? (false if this might be a snippet of a full network)
    // returns: last NDL node processed
    NDLNode<ElemType>* ProcessPassNDLScript(NDLScript<ElemType>* script, NDLPass ndlPass, NDLNode<ElemType>* skipThrough = nullptr, bool fullValidate = false, const std::wstring& dumpFileName = L'')
    {
        if (ndlPass == ndlPassFinal)
        {
            // make sure to clear the caches so we pick up the new nodes
            m_net->InvalidateCompiledNetwork();
            // if requested then dump the nodes
            // Note: This happens on the invalidated network.
            if (dumpFileName != L'')
                m_net->DumpAllNodesToFile(false, true, dumpFileName);
        }
        NDLNodeEvaluatorImpl<ElemType> ndlEvaluator(m_net);
        NDLNode<ElemType>* lastNode = script->Evaluate(ndlEvaluator, L'', ndlPass, skipThrough);
        if (ndlPass == ndlPassResolve)
            SetOutputNodes(script);
        return lastNode;
    }
    
    namespace Microsoft { namespace MSR { namespace BS {
    }
    }
    }
    
    // Trim - trim white space off the start and end of the string
// str - string to trim
// NOTE: if the entire string is empty, then the string will be set to an empty string
void Trim(std::string& str)
{
    auto found = str.find_first_not_of(' \t');
    if (found == npos)
    {
        str.erase(0);
        return;
    }
    str.erase(0, found);
    found = str.find_last_not_of(' \t');
    if (found != npos)
        str.erase(found + 1);
}
    
    public:
    static bool GetTracingFlag()
    {
        return GetStaticInstance().m_tracingFlag;
    }
    
        bool empty() const
    {
#ifndef NONUMLATTICEMMI // TODO:set NUM lattice to null so as to save memory
        if (numlattices.empty() ^ denlattices.empty())
            RuntimeError('latticesource: numerator and denominator lattices must be either both empty or both not empty');
#endif
        return denlattices.empty();
    }