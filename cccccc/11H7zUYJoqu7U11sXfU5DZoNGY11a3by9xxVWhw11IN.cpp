
        
        #include <google/protobuf/compiler/objectivec/objectivec_file.h>
#include <google/protobuf/compiler/objectivec/objectivec_enum.h>
#include <google/protobuf/compiler/objectivec/objectivec_extension.h>
#include <google/protobuf/compiler/objectivec/objectivec_message.h>
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/stubs/stl_util.h>
#include <google/protobuf/stubs/strutil.h>
#include <algorithm> // std::find()
#include <iostream>
#include <sstream>
    
    void MapLiteTestUtil::SetMapFields(unittest::TestMapLite* message) {
  MapTestUtilImpl::SetMapFields<unittest::MapEnumLite,
                                unittest::MAP_ENUM_BAR_LITE,
                                unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
            virtual Dictionary GetCheckpointState() const override;
        virtual void RestoreFromCheckpoint(const Dictionary& checkpoint) override;
    
    
    {        return std::tuple<ElementType *, SparseIndexType *, SparseIndexType *, size_t, size_t, size_t>(reinterpret_cast<ElementType*>(blockValues), blockId2Col, col2BlockId, numBlocks, numRows, numCols);
    }
    
            size_t numSequences = oneHotSequences.size();
        NDShape valueDataShape = sampleShape.AppendShape({ maxSequenceLength, numSequences });
        size_t numCSCCols = valueDataShape.SubShape(1).TotalSize() + 1;
        std::vector<SparseIndexType> colStarts(numCSCCols);
        std::vector<ElementType> nonZeroValues;
        std::vector<SparseIndexType> rowIndices;
        for (size_t i = 0; i < numSequences; ++i)
        {
            size_t currentSequenceNumCols = oneHotSequences[i].size();
            size_t j = 0;
            for (; j < currentSequenceNumCols; ++j)
            {
                colStarts[(i * maxSequenceNumCols) + j] = (SparseIndexType)nonZeroValues.size();
                size_t oneHotIdx = oneHotSequences[i][j];
                if ((oneHotIdx & OneHotSkip) == OneHotSkip) // note that OneHotSkip used to be (size_t)-1, and later changed to (uint32_t)-1. Both are supported
                {
                    nonZeroValues.push_back(0);
                    rowIndices.push_back(0);
                }
                else
                {
                    nonZeroValues.push_back(1);
                    if (oneHotIdx >= dimension)
                        InvalidArgument('Value::Create: one-hot index value (%zu) exceeds vocabulary size (%zu).', oneHotSequences[i][j], dimension);
                    rowIndices.push_back((SparseIndexType)(oneHotSequences[i][j]));
                }
            }
    }
    
    // process the special-nodes parameters
void ComputationNetwork::ProcessSpecialNodes(const ScriptableObjects::IConfigRecord& config, std::deque<ComputationNodeBasePtr>& workList)
{
    for (let& id : config.GetMemberIds())
    {
        let pos = id.find(L'Nodes');
        if (pos == wstring::npos || pos != id.size() - 5)  // special node name = node-group name + L'Nodes'
            continue;
        let nodeGroup = id.substr(0, id.size() - 5);
        if (nodeGroupNames.find(nodeGroup) == nodeGroupNames.end())
            continue;
    }
    }
    
        virtual void /*ComputationNodeNonLooping::*/ ForwardPropNonLooping() override
    {
        FrameRange fr(InputRef(0).GetMBLayout());
        InputRef(0).ValueFor(fr).VectorMax(*m_maxIndexes0, *m_maxValues, true);
        InputRef(1).ValueFor(fr).VectorMax(*m_maxIndexes1, *m_maxValues, true, m_topK);
        MaskMissingColumnsToZero(*m_maxIndexes0, InputRef(0).GetMBLayout(), fr);
        MaskMissingColumnsToZero(*m_maxIndexes1, InputRef(1).GetMBLayout(), fr);
        Value().AssignNumOfDiff(*m_maxIndexes0, *m_maxIndexes1, m_topK > 1);
#if NANCHECK
        Value().HasNan('ClassificationError');
#endif
#if DUMPOUTPUT
        Value().Print('ClassificationErrorNode');
#endif
    }