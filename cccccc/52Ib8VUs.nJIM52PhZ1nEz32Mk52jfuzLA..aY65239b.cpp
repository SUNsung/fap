
        
        /**
	@author AndreaCatania
*/
    
    	free_list = &allocs[0];
    
    	// Check for machine-specific then user config source file.
	PathCombine(cpuCfgPath, userConfigDirPath, L'ConEmu-%COMPUTERNAME%.xml');
	ExpandEnvironmentStrings(cpuCfgPath, cpuCfgPath, sizeof(cpuCfgPath) / sizeof(cpuCfgPath[0]));
    
    Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
    
    {  for (int run = 0; run < 2; run++) {
    for (int i = 0; i < 1000; i++) {
      char buf[100];
      snprintf(buf, sizeof(buf), '[%d]', i*10);
      ASSERT_OK(Put(buf, buf));
    }
    Compact('[0]', '[1000000]');
  }
}
    
    class FileNameTest { };
    
    namespace leveldb {
namespace log {
    }
    }
    
        // Open the log file
    std::string logname = LogFileName(dbname_, log);
    SequentialFile* lfile;
    Status status = env_->NewSequentialFile(logname, &lfile);
    if (!status.ok()) {
      return status;
    }