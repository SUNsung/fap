
        
        void ThreadLocalStorage::set_value(void *p_value) const {
	pimpl->set_value(p_value);
}
    
    
    {	switch (mono_method_get_flags(prop_method, NULL) & MONO_METHOD_ATTR_ACCESS_MASK) {
		case MONO_METHOD_ATTR_PRIVATE:
			return GDMonoClassMember::PRIVATE;
		case MONO_METHOD_ATTR_FAM_AND_ASSEM:
			return GDMonoClassMember::PROTECTED_AND_INTERNAL;
		case MONO_METHOD_ATTR_ASSEM:
			return GDMonoClassMember::INTERNAL;
		case MONO_METHOD_ATTR_FAMILY:
			return GDMonoClassMember::PROTECTED;
		case MONO_METHOD_ATTR_PUBLIC:
			return GDMonoClassMember::PUBLIC;
		default:
			ERR_FAIL_V(GDMonoClassMember::PRIVATE);
	}
}
    
    	friend class SoftBody;
    
    
    {	return node;
}
    
    
    {    if (options->Has(String::NewSymbol('target_path_id')) ||
        options->Get(String::NewSymbol('target_path_id'))->IsInt32()) {
      target_path_id = (int)(options->Get(
          String::NewSymbol('target_path_id'))->ToInt32()->Value());
    }
  }
    
    
    {    // Internal fields
    rocksdb::Options options_;
    rocksdb::Status status_;
    rocksdb::DB* db_;
    std::unordered_map<std::string, rocksdb::ColumnFamilyHandle*>
        columnFamilies_;
};
    
    #ifndef JAVA_ROCKSJNI_COMPACTION_FILTER_FACTORY_JNICALLBACK_H_
#define JAVA_ROCKSJNI_COMPACTION_FILTER_FACTORY_JNICALLBACK_H_