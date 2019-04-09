
        
                    DEPENDENCY_PROPERTY_ATTACHED_WITH_CALLBACK(Platform::String^, Character);
            DEPENDENCY_PROPERTY_ATTACHED_WITH_CALLBACK(MyVirtualKey, VirtualKey);
            DEPENDENCY_PROPERTY_ATTACHED_WITH_CALLBACK(MyVirtualKey, VirtualKeyControlChord);
            DEPENDENCY_PROPERTY_ATTACHED_WITH_CALLBACK(MyVirtualKey, VirtualKeyShiftChord);
            DEPENDENCY_PROPERTY_ATTACHED_WITH_CALLBACK(MyVirtualKey, VirtualKeyAltChord);
            DEPENDENCY_PROPERTY_ATTACHED_WITH_CALLBACK(MyVirtualKey, VirtualKeyControlShiftChord);
            DEPENDENCY_PROPERTY_ATTACHED_WITH_CALLBACK(MyVirtualKey, VirtualKeyInverseChord);
            DEPENDENCY_PROPERTY_ATTACHED_WITH_CALLBACK(MyVirtualKey, VirtualKeyControlInverseChord);
    
        // RAII wrapper that automatically sends the Stop event when the class gets destructed.
    class TraceActivity
    {
    public:
        TraceActivity() :
            m_channel(nullptr),
            m_activity(nullptr),
            m_fields(nullptr)
        { }
    }