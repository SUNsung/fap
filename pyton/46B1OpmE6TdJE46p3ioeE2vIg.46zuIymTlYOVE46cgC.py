
        
        
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    
class TestDownloads:
    # TODO: more tests
    
    
def test_headers_unset(httpbin_both):
    r = http('GET', httpbin_both + '/headers')
    assert 'Accept' in r.json['headers']  # default Accept present
    
    \note Please be warned that the line numbers in the API documentation do not
match the real locations in the source code of the package. This is an
unintended artifact of doxygen, which I could only convince to use the
correct module names by concatenating all files from the package into a single
module file...
    
            self.expecting = expecting
        
    
                t = self.tokenSource.nextToken()
       
        # leave p pointing at first token on channel
        self.p = 0
        self.p = self.skipOffTokenChannels(self.p)
    
        '''
    
    def __init__(self, type=None, channel=DEFAULT_CHANNEL, text=None,
                 input=None, start=None, stop=None, oldToken=None):
        Token.__init__(self)
        
        if oldToken is not None:
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            self.index = oldToken.index
            self._text = oldToken._text
            if isinstance(oldToken, CommonToken):
                self.input = oldToken.input
                self.start = oldToken.start
                self.stop = oldToken.stop
            
        else:
            self.type = type
            self.input = input
            self.charPositionInLine = -1 # set to invalid position
            self.line = 0
            self.channel = channel
            
	    #What token number is this from 0..n-1 tokens; < 0 implies invalid index
            self.index = -1
            
            # We need to be able to change the text once in a while.  If
            # this is non-null, then getText should return this.  Note that
            # start/stop are not affected by changing this.
            self._text = text
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
    	# Track the line at which the error occurred in case this is
	# generated from a lexer.  We need to track this since the
        # unexpected char doesn't carry the line info.
        self.line = None
    
    def is_inside_code(line, indent_depth):
    return is_code(line, indent_depth) > 0 or line.strip() == ''
    
      cppvar = GetHeaderGuardCPPVariable(filename)