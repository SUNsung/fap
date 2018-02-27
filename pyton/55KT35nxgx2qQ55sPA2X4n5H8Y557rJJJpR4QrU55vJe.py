
        
        
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
        def log_error(msg, *args, **kwargs):
        msg = msg % args
        level = kwargs.get('level', 'error')
        assert level in ['error', 'warning']
        env.stderr.write('\nhttp: %s: %s\n' % (level, msg))
    
        return lexer
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
    
def check_alphabetical(lines):
    '''
    checks if all entries per section are in alphabetical order based in entry title
    '''
    sections = {}
    section_line_num = {}
    for line_num, line in enumerate(lines):
        if line.startswith(anchor):
            category = line.split(anchor)[1].strip()
            sections[category] = []
            section_line_num[category] = line_num
            continue
        if not line.startswith('|') or line.startswith('|---'):
            continue
        title = [x.strip() for x in line.split('|')[1:-1]][0].upper()
        sections[category].append(title)
    
    # Custom sidebar templates, maps document names to template names.
html_sidebars = {
    'index': [
        'sidebarintro.html',
        'sourcelink.html',
        'searchbox.html'
    ],
    '**': [
        'sidebarlogo.html',
        'localtoc.html',
        'relations.html',
        'sourcelink.html',
        'searchbox.html'
    ]
}
    
        return inner
    
            self.wait_to_close_event = wait_to_close_event
        self.ready_event = threading.Event()
        self.stop_event = threading.Event()
    
        def test_repr(self):
        assert repr(self.case_insensitive_dict) == '{'Accept': 'application/json'}'
    
    
def _check_cryptography(cryptography_version):
    # cryptography < 1.3.4
    try:
        cryptography_version = list(map(int, cryptography_version.split('.')))
    except ValueError:
        return
    
    
class ChunkedEncodingError(RequestException):
    '''The server declared chunked encoding but sent an invalid chunk.'''
    
    
def test_digestauth_401_only_sent_once():
    '''Ensure we correctly respond to a 401 challenge once, and then
    stop responding if challenged again.
    '''
    text_401 = (b'HTTP/1.1 401 UNAUTHORIZED\r\n'
                b'Content-Length: 0\r\n'
                b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                b', opaque='372825293d1c26955496c80ed6426e9e', '
                b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
    
class Level(object):
    
        def __init__(self, categorizer):
        self.categorizer = categorizer
        ...
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
    
class UserGraphService(object):
    
            #out = subprocess.check_output(cmd, startupinfo=startupinfo)
        process = subprocess.Popen(cmd, stdout=subprocess.PIPE, startupinfo=startupinfo)
        out, unused_err = process.communicate()
        retcode = process.poll()
        if retcode:
            return out + '\n retcode:%s\n unused_err:%s\n' % (retcode, unused_err)
    except Exception as e:
        out = 'Exception:%r' % e
    
        def open_log(self):
        if os.path.isfile(self.log_path):
            with open(self.log_path, 'r') as fd:
                lines = fd.readlines()
                line_num = len(lines)
            if line_num >= self.max_lines_per_log_file:
                self.roll_log()
    
    \note Please be warned that the line numbers in the API documentation do not
match the real locations in the source code of the package. This is an
unintended artifact of doxygen, which I could only convince to use the
correct module names by concatenating all files from the package into a single
module file...
    
      user_options_store.SetAll( base.BuildServerConf() )
    
    from concurrent.futures import _base
    
        sqrt_n = int(math.floor(math.sqrt(n)))
    for i in range(3, sqrt_n + 1, 2):
        if n % i == 0:
            return False
    return True
    
    from ycm.client.base_request import ( BaseRequest, BuildRequestData,
                                      HandleServerException )
    
    
  def Start( self ):
    with HandleServerException( display = False ):
      self.PostDataToHandler( {}, 'shutdown', TIMEOUT_SECONDS )
    
    
def KeywordsFromSyntaxListOutput_PhpSyntax_ContainsPreProc_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput(
                   ContentsOfTestFile( 'php_syntax' ) ),
               has_items( 'skip', 'function' ) )