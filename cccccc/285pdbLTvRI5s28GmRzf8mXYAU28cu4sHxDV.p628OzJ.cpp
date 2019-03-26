
        
                // before version 1, there was no distributed state per se. Instead, the external state
        // contained a dictionary of worker-specific external states.
        if (version == 0)
        {
            auto key = externalState.Contains(localWorkerId) ? localWorkerId : mainWorkerId;
            return externalState[key].Value<Dictionary>();
        }
    
    void DataReader::CopyMBLayoutTo(MBLayoutPtr pMBLayout)
{
    // BUGBUG: This copies all data reader's layout info on top of each other, keeping only the last one; likely not what was intended.
    for (size_t i = 0; i < m_ioNames.size(); i++)
        m_dataReaders[m_ioNames[i]]->CopyMBLayoutTo(pMBLayout);
}
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
    class ScopeTimer
{
    Timer m_aggregateTimer;
    size_t m_verbosity;
    std::string m_message;
    }
    
    #include 'LinearAlgebraNodes.h'