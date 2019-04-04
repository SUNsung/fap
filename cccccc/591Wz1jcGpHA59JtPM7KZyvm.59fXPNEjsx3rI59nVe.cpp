
        
        namespace caffe2 {
namespace {
    }
    }
    
    namespace caffe2 {
    }
    
    namespace caffe2 {
    }
    
    
    {}  // namespace mxnet
    
    #include <caffe/layer.hpp>
#include <caffe/blob.hpp>
#include <caffe/layer_factory.hpp>
    
    void SerializeCommandVisitor::Visit(_In_ CUnaryCommand &unaryCmd)
{
    auto cmds = unaryCmd.GetCommands();
    unsigned int cmdSize;
    cmds->GetSize(&cmdSize);
    m_dataWriter->WriteUInt32(cmdSize);
    for (unsigned int j = 0; j < cmdSize; ++j)
    {
        int eachOpndcmd;
        cmds->GetAt(j, &eachOpndcmd);
        m_dataWriter->WriteInt32(eachOpndcmd);
    }
}
    
            Platform::String^ m_openMemoryFlyoutAutomationName;
        Platform::String^ m_closeMemoryFlyoutAutomationName;
        Platform::String^ m_openHistoryFlyoutAutomationName;
        Platform::String^ m_closeHistoryFlyoutAutomationName;
    
            void UnregisterEventHandlers();