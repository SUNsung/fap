
        
            def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
            for chunk in self.msg.iter_body(self.CHUNK_SIZE):
            if not converter and b'\0' in chunk:
                converter = self.conversion.get_converter(self.mime)
                if not converter:
                    raise BinarySuppressedError()
            body.extend(chunk)
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    
def test_unicode_form_item_verbose(httpbin):
    r = http('--verbose', '--form',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
        def unregister(self, plugin):
        self._plugins.remove(plugin)
    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
        return out
    
    # Set default logging handler to avoid 'No handler found' warnings.
import logging
try:  # Python 2.7+
    from logging import NullHandler
except ImportError:
    class NullHandler(logging.Handler):
        def emit(self, record):
            pass
    
    Some codes have multiple names, and both upper- and lower-case versions of
the names are allowed. For example, ``codes.ok``, ``codes.OK``, and
``codes.okay`` all correspond to the HTTP status code 200.
'''
    
    # The checksum algorithm must match with the algorithm in ShellModule.checksum() method
checksum = secure_hash
checksum_s = secure_hash_s
    
    from __future__ import print_function
    
        'hostname': re.compile(
        r'''^
            {label}                     # We must have at least one label
            (?:\.{label})*              # Followed by zero or more .labels
            $
        '''.format(label=label), re.X | re.I | re.UNICODE
    ),
    
        def test_get_gcp_resource_from_methodId(self):
        input_data = 'compute.urlMaps.list'
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertEqual('urlMaps', actual)
        input_data = None
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertFalse(actual)
        input_data = 666
        actual = GCPUtils.get_gcp_resource_from_methodId(input_data)
        self.assertFalse(actual)
    
        terminal_stderr_re = [
        re.compile(r'% ?Error: '),
        re.compile(r'^% \w+', re.M),
        re.compile(r'% ?Bad secret'),
        re.compile(r'invalid input', re.I),
        re.compile(r'(?:incomplete|ambiguous) command', re.I),
        re.compile(r'connection timed out', re.I),
        re.compile(r'[^\r\n]+ not found', re.I),
        re.compile(r''[^']' +returned error code: ?\d+'),
        re.compile(r'syntax error'),
        re.compile(r'unknown command'),
        re.compile(r'Error\[\d+\]: ', re.I),
        re.compile(r'Error:', re.I)
    ]
    
        def on_open_shell(self):
        try:
            self._exec_cli_command(b'environment no more')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
      base.LoadJsonDefaultsIntoVim()
    
    +----------+     +----------+       +--------+     +-----------+    +---------+
|          |  => | Work Ids |    => |        |  => | Call Q    | => |         |
|          |     +----------+       |        |     +-----------+    |         |
|          |     | ...      |       |        |     | ...       |    |         |
|          |     | 6        |       |        |     | 5, call() |    |         |
|          |     | 7        |       |        |     | ...       |    |         |
| Process  |     | ...      |       | Local  |     +-----------+    | Process |
|  Pool    |     +----------+       | Worker |                      |  #1..n  |
| Executor |                        | Thread |                      |         |
|          |     +----------- +     |        |     +-----------+    |         |
|          | <=> | Work Items | <=> |        | <=  | Result Q  | <= |         |
|          |     +------------+     |        |     +-----------+    |         |
|          |     | 6: call()  |     |        |     | ...       |    |         |
|          |     |    future  |     |        |     | 4, result |    |         |
|          |     | ...        |     |        |     | 3, except |    |         |
+----------+     +------------+     +--------+     +-----------+    +---------+
    
    def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
    
class Benchmark(object):
    def enter_exit(self, count):
        '''Measures the overhead of the nested 'with' statements
        when using many contexts.
        '''
        if count < 0:
            return
        with self.make_context():
            self.enter_exit(count - 1)
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', MainHandler),
            (r'/chatsocket', ChatSocketHandler),
        ]
        settings = dict(
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            xsrf_cookies=True,
        )
        super(Application, self).__init__(handlers, **settings)
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new