
        
        
    {
    {}
}
    
    
size_t  SimpleShortPackLength(size_t _datalen) {
    return SimplePackLength<uint16_t>(_datalen);
}
    
    
class ServiceBase;
typedef std::map<std::string, ServiceBase*> TServicesMap;
    
      private:
    virtual void __OnAttach(const char* _key) = 0;
    virtual void __OnDetach(const char* _key) = 0;
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}