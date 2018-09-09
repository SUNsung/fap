
        
        
    {}  // namespace internal
    
      // Appends the TestPartResult object to the TestPartResultArray
  // received in the constructor.
  //
  // This method is from the TestPartResultReporterInterface
  // interface.
  virtual void ReportTestPartResult(const TestPartResult& result);
 private:
  void Init();
    
    // FilePath - a class for file and directory pathname manipulation which
// handles platform-specific conventions (like the pathname separator).
// Used for helper functions for naming files in a directory for xml output.
// Except for Set methods, all methods are const or static, which provides an
// 'immutable value object' -- useful for peace of mind.
// A FilePath with a value ending in a path separator ('like/this/') represents
// a directory, otherwise it is assumed to represent a file. In either case,
// it may or may not represent an actual file or directory in the file system.
// Names are NOT checked for syntax correctness -- no checking for illegal
// characters, malformed paths, etc.
    
    #ifndef GTEST_SAMPLES_PRIME_TABLES_H_
#define GTEST_SAMPLES_PRIME_TABLES_H_
    
    
#endif  // GTEST_SAMPLES_SAMPLE2_H_

    
    // Tests the copy c'tor.
TEST(MyString, CopyConstructor) {
  const MyString s1(kHelloString);
  const MyString s2 = s1;
  EXPECT_EQ(0, strcmp(s2.c_string(), kHelloString));
}
    
    	DefaultIdentifierActions actions[VS::SHADER_MAX];
    
    
    {	vsyslog(p_err ? LOG_ERR : LOG_INFO, p_format, p_list);
}
    
    
    {	TCPServerPosix();
	~TCPServerPosix();
};
    
    Error MutexWindows::try_lock() {
    }
    
    #ifdef WINDOWS_USE_MUTEX
	HANDLE mutex;
#else
	CRITICAL_SECTION mutex;
#endif
    
    	if (bind(sock, (struct sockaddr *)&addr, addr_size) == -1) {
		close();
		return ERR_UNAVAILABLE;
	}
    
            ValidateType<T>(dict, typeValue, currentVersion);
    
        /*virtual*/ void Value::CopyFrom(const Value& source)
    {
        // TODO: Check if this is a derived type and throw an exception in that case
        Data()->CopyFrom(*source.Data());
        if ((Mask() == nullptr) && (source.Mask() != nullptr))
            InvalidArgument('Value::CopyFrom: Invalid source object; Cannot copy a Value with a mask into 'this' Value which does not have a mask.');
    }
    
                    if (outputRank == SentinelValueForInferParamInitRank)
                    outputRank = DefaultParamInitOutputRank;
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
            if (::WaitForSingleObject(m_handle, wait ? INFINITE : 0) != WAIT_OBJECT_0)
        {
            // failed to acquire
            int rc = ::CloseHandle(m_handle);
            if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
            {
                RuntimeError('Acquire: Handler close failure with error code %d', ::GetLastError());
            }
            m_handle = NULL;
            return false;
        }
    
    
    {    bool IsRandomizationDisabled() const
    {
        return randomizationrange == randomizeDisable;
    }
};
    
            // Construct matrices for further computation.
        const Matrix<ElemType>& gains = Input(0)->ValueFor(fr);
        const Matrix<ElemType>& preds = Input(1)->ValueFor(fr);
        const Matrix<ElemType>& queryIds = Input(2)->ValueFor(fr);