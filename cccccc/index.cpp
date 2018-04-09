
        
        /* static */ Config * Config::create(void)
{
    return new Config();
}
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
    class ProgramLocation {
public:
  ProgramLocation() : m_functionName('Unspecified'), m_fileName('Unspecified'), m_lineNumber(0) {}
    }
    
    private:
  void initialize() {
    int ret = pthread_key_create(&m_key, m_cleanup);
    if (ret != 0) {
      const char *msg = '(unknown error)';
      switch (ret) {
      case EAGAIN:
        msg = 'PTHREAD_KEYS_MAX (1024) is exceeded';
        break;
      case ENOMEM:
        msg = 'Out-of-memory';
        break;
      }
      (void) msg;
      FBASSERTMSGF(0, 'pthread_key_create failed: %d %s', ret, msg);
    }
  }