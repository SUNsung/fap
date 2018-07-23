
        
            /*virtual*/ void Value::CopyFrom(const Value& source)
    {
        // TODO: Check if this is a derived type and throw an exception in that case
        Data()->CopyFrom(*source.Data());
        if ((Mask() == nullptr) && (source.Mask() != nullptr))
            InvalidArgument('Value::CopyFrom: Invalid source object; Cannot copy a Value with a mask into 'this' Value which does not have a mask.');
    }
    
        inline const_array_ref<msra::math::float4> col4(size_t j) const
    {
        return const_array_ref<msra::math::float4>((const msra::math::float4 *) &p[locate(0, j)], colstride / 4);
    }
    inline msra::math::float4 &float4(size_t i, size_t j)
    {
        return *(msra::math::float4 *) &p[locate(i, j)];
    }
    inline const msra::math::float4 &float4(size_t i, size_t j) const
    {
        return *(const msra::math::float4 *) &p[locate(i, j)];
    }
    operator array_ref<msra::math::float4>()
    {
        return array_ref<msra::math::float4>((msra::math::float4 *) p, colstride / 4 * numcols);
    }
    operator const_array_ref<msra::math::float4>() const
    {
        return const_array_ref<msra::math::float4>((const msra::math::float4 *) p, colstride / 4 * numcols);
    }
    
    // change all nodes that have fromNode as input to have toNode as input instead
void ComputationNetwork::ChangeNodeInputs(ComputationNodeBasePtr fromNode, ComputationNodeBasePtr toNode)
{
    for (auto nodeIter = m_nameToNodeMap.begin(); nodeIter != m_nameToNodeMap.end(); nodeIter++)
    {
        ComputationNodeBasePtr node = nodeIter->second;
        for (int i = 0; i < node->GetNumInputs(); i++)
            if (node->GetInputs()[i] == fromNode)
                node->SetInput(i, toNode);
    }
}
    
    #pragma warning(push)
#pragma warning(disable : 4200) // warning C4200: nonstandard extension used : zero-sized array in struct/union
// Section Header on Disk
struct SectionHeader
{
    WORD wMagic;            // magic number ACE9
    WORD version;           // version number ##.## in hex
    WORD sizeHeader;        // size of this header (rounded up to mappable boundary)
    WORD dataSections;      // number of data sub-sections (for nesting)
    WORD sectionType;       // what is the type of the data in this section
    WORD sectionData;       // type of section (SectionData enum)
    WORD bytesPerElement;   // number of bytes per element, (0 means variable)
    WORD customStructureID; // ID for custom structure
    WORD elementsPerRecord; // number of elements per Record
    WORD flags;             // bit flags, dependent on sectionType
    WORD writtenID;         // unique ID so files written at the same time can be identified
    WORD unusedWords[5];
    size_t elementsCount; // number of total elements stored
    // * section specific data goes below here * //
    WORD labelKind;                                                    // kind of label (LabelKind type)
    WORD labelDim;                                                     // number of possible states for labels (category type)
    char unused[descriptionSize - 18 * sizeof(WORD) - sizeof(size_t)]; // space for future expansion (zero out in current versions)
    char nameDescription[descriptionSize];                             // name and description of section contents in this format (name: description) (string, with extra bytes zeroed out, at least one null terminator required)
    size_t size;                                                       // size of this section (including header)
    size_t sizeAll;                                                    // size of this section (including header and all sub-sections)
    size_t sectionFilePosition[];                                      // sub-section file offsets (if needed), assumed to be in File Position order
};
#pragma warning(pop)
    
    BOOST_FIXTURE_TEST_CASE(MatrixSparsePlusSparse, RandomSeedFixture)
{
    std::mt19937 rng(0);
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    Matrix<float> mAsparse(mAdense.DeepClone());
    }
    
    // understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental CNTK integration
    
    
    {    virtual void ResetState() override
    {
        m_start = 1 - m_start;
    }
};
    
                // copy over the data
            std::vector<ElemType>* data = iter->second;
            size_t index = m_currentRecord * rows;
            size_t numberToCopy = rows * numRecords;
            data->resize(index + numberToCopy);
            ElemType* dataPtr = ((ElemType*)data->data()) + index;
            if (matrix->GetNumElements() > numberToCopy)
                RuntimeError('The output matrix being saved has more data than the numRecords (%d) requested to be saved', (int)numRecords);
    
    /**
 * Symbolicates a stack trace into a given vector
 *
 * @param symbols The vector to receive the output. The vector is cleared and
 * enough room to keep the frames are reserved.
 *
 * @param stackTrace The input stack trace
 */
FBEXPORT void getStackTraceSymbols(std::vector<StackTraceElement>& symbols,
                                   const std::vector<InstructionPointer>& trace);
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
#include <yoga/Yoga.h>
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);