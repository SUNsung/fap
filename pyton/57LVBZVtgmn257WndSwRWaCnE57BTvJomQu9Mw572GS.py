
        
        
def build_output_stream(args, env, request, response, output_options):
    '''Build and return a chain of iterators over the `request`-`response`
    exchange each of which yields `bytes` chunks.
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
class ProgressReporterThread(threading.Thread):
    '''
    Reports download progress based on its status.
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        '''
)
positional.add_argument(
    'items',
    metavar='REQUEST_ITEM',
    nargs=ZERO_OR_MORE,
    default=None,
    type=KeyValueArgType(*SEP_GROUP_ALL_ITEMS),
    help=r'''
    Optional key-value pairs to be included in the request. The separator used
    determines the type:
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
    
ENTRY_POINT_NAMES = [
    'httpie.plugins.auth.v1',
    'httpie.plugins.formatter.v1',
    'httpie.plugins.converter.v1',
    'httpie.plugins.transport.v1',
]
    
        def write(self, content):
        self.fd.write(content + '\r\n')
        self.fd.flush()
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
    
    def skip(self):
        '''
        Instruct the lexer to skip creating a token for current lexer rule
        and look for another token.  nextToken() knows to keep looking when
        a lexer rule finishes with token set to SKIP_TOKEN.  Recall that
        if token==null at end of any token rule, it creates one for you
        and emits it.
        '''
        
        self._state.token = SKIP_TOKEN
    
            Terence implemented packed table initializers, because Java has a
        size restriction on .class files and the lookup tables can grow
        pretty large. The generated JavaLexer.java of the Java.g example
        would be about 15MB with uncompressed array initializers.
    
        Snippets without code (only comments) or containing lines starting with ??? should not yeld files,
    but the counter for naming snippets should still increment.
    '''
    parser = argparse.ArgumentParser(description='Split md file into plain text and code blocks')
    parser.add_argument('sourcefile',
                        help='which file to read')
    parser.add_argument('targetfile',
                        help='where to put plain text')
    parser.add_argument('codedir',
                        help='where to put codeblocks')
    args = parser.parse_args()