
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
    
def test_auth_plugin_require_auth_false(httpbin):
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
    
class HTTPResponse(HTTPMessage):
    '''A :class:`requests.models.Response` wrapper.'''
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
            if (not isinstance(args, list) and args.output_file and
                args.output_file_specified):
            args.output_file.close()
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
        def test_cert_and_key(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', CLIENT_CERT,
                 '--cert-key', CLIENT_KEY)
        assert HTTP_OK in r
    
        if is_pypy and is_py27:
        # Manually set keys when initialized with an iterable as PyPy
        # doesn't call __setitem__ in such case (pypy3 does).
        def __init__(self, *args, **kwargs):
            if len(args) == 1 and isinstance(args[0], Iterable):
                super(RequestItemsDict, self).__init__(**kwargs)
                for k, v in args[0]:
                    self[k] = v
            else:
                super(RequestItemsDict, self).__init__(*args, **kwargs)
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
            # host:port => host_port
        hostname = hostname.replace(':', '_')
        path = os.path.join(config_dir,
                            SESSIONS_DIR_NAME,
                            hostname,
                            session_name + '.json')
    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
        default_settings = {
        'LOG_LEVEL': 'INFO',
        'LOGSTATS_INTERVAL': 1,
        'CLOSESPIDER_TIMEOUT': 10,
    }
    
            request.callback = cb_wrapper
        request.errback = eb_wrapper
    
        name = 'scrapes'
    
        def add_link_to_crawl(self, url):
        '''Add the given link to `links_to_crawl`.'''
        pass
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...
    
        def reject_friend_request(self, from_user_id, to_user_id):
        pass
    
        def __init__(self, template_categories_to_budget_map):
        self.categories_to_budget_map = template_categories_to_budget_map
    
            self.assertFalse(self.addr_defined.conflicts(self.addr1))
        self.assertFalse(self.addr_defined.conflicts(self.addr2))
        self.assertFalse(self.addr_defined.conflicts(self.addr))
        self.assertFalse(self.addr_defined.conflicts(self.addr_default))
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_success(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.return_value = cert
        self.assertTrue(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
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
    
        # Implement all methods from IInstaller, remembering to add
    # 'self' as first argument, e.g. def get_all_names(self)...

    
                RuleRouter([
                ('/handler', Target),
            ])
    
    import array
import atexit
import os
import re
import sys
import zlib
    
        def test_nonblocking_get_exception(self):
        q = queues.Queue()
        self.assertRaises(queues.QueueEmpty, q.get_nowait)
    
        def test_twitter_show_user_legacy(self):
        response = self.fetch('/legacy/twitter/client/show_user?name=somebody')
        response.rethrow()
        self.assertEqual(json_decode(response.body),
                         {'name': 'Somebody', 'screen_name': 'somebody'})
    
    
class RequestProxyTest(unittest.TestCase):
    def test_request_set(self):
        proxy = _RequestProxy(HTTPRequest('http://example.com/',
                                          user_agent='foo'),
                              dict())
        self.assertEqual(proxy.user_agent, 'foo')
    
            result = yield self.resolver.resolve('google.com', 80, socket.AF_INET6)
        self.assertIn((socket.AF_INET6, ('2a02:6b8:7c:40c:c51e:495f:e23a:3', 80, 0, 0)), result)