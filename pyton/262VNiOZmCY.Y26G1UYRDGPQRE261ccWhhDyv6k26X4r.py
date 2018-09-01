
        
            # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
        @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
        # The URL prefix the adapter should be mount to.
    prefix = None
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
        def test_CRLF_formatted_request(self, httpbin):
        r = http('--pretty=format', '--print=HB', 'GET', httpbin.url + '/get')
        self._validate_crlf(r)

    
        if Search(r'\s:\s*\w+[({]', line):
      # A lone colon tend to indicate the start of a constructor
      # initializer list.  It could also be a ternary operator, which
      # also tend to appear in constructor initializer lists as
      # opposed to parameter lists.
      return True
    if Search(r'\}\s*,\s*$', line):
      # A closing brace followed by a comma is probably the end of a
      # brace-initialized member in constructor initializer list.
      return True
    if Search(r'[{};]\s*$', line):
      # Found one of the following:
      # - A closing brace or semicolon, probably the end of the previous
      #   function.
      # - An opening brace, probably the start of current class or namespace.
      #
      # Current line is probably not inside an initializer list since
      # we saw one of those things without seeing the starting colon.
      return False