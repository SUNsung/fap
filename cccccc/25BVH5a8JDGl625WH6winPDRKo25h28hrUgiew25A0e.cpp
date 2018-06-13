
        
        // Create a Shell and returns its routing id.
IPC_SYNC_MESSAGE_ROUTED2_1(ShellViewHostMsg_CreateShell,
                           std::string /* url */,
                           base::DictionaryValue /* manifest */,
                           int /* result */)
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
     private:
  void SetText(std::string& text);
  std::string GetText();
  void Clear();
    
    
#include 'base/basictypes.h'
    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
    
    {  // Send event.
  base::ListValue args;
  object_manager()->SendEvent(this, 'click', args);
}
    
    NwObjCallObjectMethodAsyncFunction::NwObjCallObjectMethodAsyncFunction() {
}
    
    class NwObjCreateFunction : public NWSyncExtensionFunction {
 public:
  NwObjCreateFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        void InitMPI(const MPIWrapperPtr& mpi)
    {
        m_mpi = mpi;
    }
    
        bool useParallelTrain = (m_mpi != nullptr);
    bool useDistributedMBReading = useParallelTrain && m_enableDistributedMBReading && dataReader->SupportsDistributedMBRead();
    size_t totalEpochSize = bnNodes.size() * mbSize * iters;
    
        // SaveData - save data in the file/files
    // recordStart - Starting record number
    // matricies - a map of section name (section:subsection) to data pointer. Data sepcifications from config file will be used to determine where and how to save data
    // numRecords - number of records we are saving, can be zero if not applicable
    // datasetSize - size of the dataset (in records)
    // byteVariableSized - for variable sized data, size of current block to be written, zero when not used, or ignored if not variable sized data
    virtual bool SaveData(size_t recordStart, const std::map<std::wstring, void*, nocase_compare>& matrices, size_t numRecords, size_t datasetSize, size_t byteVariableSized = 0);
    
        // call SetStepOffset() at start of a multi-epoch training to set the index of the first epoch in that training
    // This value is added to the local epoch index in TraceProgress().
    static void SetStepOffset(size_t currentStepOffset)
    {
        GetStaticInstance().m_currentStepOffset = currentStepOffset;
    }
    
        // construct from a single float, copy to all components
    float4(float f)
        : v(_mm_load1_ps(&f))
    {
    }
    // float4 (float f) : v (_mm_set_ss (f)) {}  // code seems more complex than _mm_load1_ps()