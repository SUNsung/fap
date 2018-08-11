
        
                if isinstance(headers, bytes):
            # Python < 3
            headers = headers.decode('utf8')
        return headers
    
        def format_body(self, content, mime):
        '''Return processed `content`.
    
        The default behaviour is '{default}' (i.e., the response headers and body
    is printed), if standard output is not redirected. If the output is piped
    to another program or to a file, then only the response body is printed
    by default.
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
            # syntax error
        pytest.raises(ContentRangeError, parse, 'beers 100-199/*', 100)
    
    
def test_POST_stdin(httpbin_both):
    with open(FILE_PATH) as f:
        env = MockEnvironment(stdin=f, stdin_isatty=False)
        r = http('--form', 'POST', httpbin_both + '/post', env=env)
    assert HTTP_OK in r
    assert FILE_CONTENT in r
    
        The host identifier may be a hostname (qualified or not), an IPv4 address,
    or an IPv6 address. If allow_ranges is True, then any of those may contain
    [x:y] range specifications, e.g. foo[1:3] or foo[0:5]-bar[x-z].
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
            # in some cases, we may have pre-read the data and then
        # passed it to the load() call for YAML, in which case we
        # want to override the default datasource (which would be
        # '<string>') to the actual filename we read in
        datasource = self._ansible_file_name or node.start_mark.name
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
            # Put the blurred face region back into the frame image
        frame[top:bottom, left:right] = face_image
    
    with open('HISTORY.rst') as history_file:
    history = history_file.read()