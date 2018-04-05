
        
            def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
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

    
        def convert(self, content_bytes):
        raise NotImplementedError
    
        ''')
)
positional.add_argument(
    'method',
    metavar='METHOD',
    nargs=OPTIONAL,
    default=None,
    help='''
    The HTTP method to be used for the request (GET, POST, PUT, DELETE, ...).
    
        def test_self_signed_server_cert_by_default_raises_ssl_error(
            self,
            httpbin_secure_untrusted):
        with pytest.raises(SSLError):
            http(httpbin_secure_untrusted.url + '/get')
    
    # TODO: ensure that history changes.

    
    
class TextTestResult(_TextTestResult):
    def printSummary(self, start, stop):
        write = self.stream.write
        writeln = self.stream.writeln
    
    
class Command(ScrapyCommand):
    
        def post_process(self, output):
        for x in output:
            if isinstance(x, (BaseItem, dict)):
                for arg in self.args:
                    if not arg in x:
                        raise ContractFail(''%s' field is missing' % arg)

    
        def copy_certs_and_keys(self, cert_path, key_path, chain_path=None):
        '''Copies certs and keys into the temporary directory'''
        cert_and_key_dir = os.path.join(self._temp_dir, 'certs_and_keys')
        if not os.path.isdir(cert_and_key_dir):
            os.mkdir(cert_and_key_dir)
    
        @mock.patch('certbot.display.enhancements.util')
    def test_redirect(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call('redirect'))
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_everything_fails(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        proc.communicate.side_effect = OSError('What we have here is a '
                                               'failure to communicate.')
        self.assertFalse(notify('Goose', 'auntrhody@example.com',
                                'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
    from certbot import interfaces
from certbot.plugins import common
    
    from babel.messages.pofile import read_po
    
        def __init__(self, rules=None):
        '''Constructs a router from an ordered list of rules::
    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.
    
        def test_failed_setup(self):
        self.http_client = self.create_client(max_clients=1)
        for i in range(5):
            response = self.fetch(u'/ユニコード')
            self.assertIsNot(response.error, None)

    
    # Increasing --n without --keepalive will eventually run into problems
# due to TIME_WAIT sockets
define('n', type=int, default=15000)
define('c', type=int, default=25)
define('keepalive', type=bool, default=False)
define('quiet', type=bool, default=False)
    
    
def main():
    base_cmd = [
        sys.executable, '-m', 'timeit', '-s',
        'from stack_context_benchmark import StackBenchmark, ExceptionBenchmark']
    cmds = [
        'StackBenchmark().enter_exit(50)',
        'StackBenchmark().call_wrapped(50)',
        'StackBenchmark().enter_exit(500)',
        'StackBenchmark().call_wrapped(500)',
    
    
class ComposeHandler(BaseHandler):
    @tornado.web.authenticated
    def get(self):
        id = self.get_argument('id', None)
        entry = None
        if id:
            entry = self.db.get('SELECT * FROM entries WHERE id = %s', int(id))
        self.render('compose.html', entry=entry)
    
        def wait_for_messages(self, cursor=None):
        # Construct a Future to return to our caller.  This allows
        # wait_for_messages to be yielded from a coroutine even though
        # it is not a coroutine itself.  We will set the result of the
        # Future when results are available.
        result_future = Future()
        if cursor:
            new_count = 0
            for msg in reversed(self.cache):
                if msg['id'] == cursor:
                    break
                new_count += 1
            if new_count:
                result_future.set_result(self.cache[-new_count:])
                return result_future
        self.waiters.add(result_future)
        return result_future