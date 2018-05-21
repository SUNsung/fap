
        
        from youtube_dl.compat import (
    compat_print,
    compat_urllib_request,
)
from youtube_dl.utils import format_bytes
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
            webpage = self._download_webpage(url, playlist_id)
        title = self._html_search_regex(
            r'<h1 class='playlist-name'[^>]*?>(.*?)</h1>', webpage, 'title')
        description = self._html_search_regex(
            r'<p class='excerpt'[^>]*?>(.*?)</p>',
            webpage, 'description', fatal=False)
        urls = re.findall(
            r'<li class='lecture-preview'>\s*?<a target='_blank' href='([^']+)'>',
            webpage)
        entries = [self.url_result(u) for u in urls]
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
def test_unicode_headers_verbose(httpbin):
    # httpbin doesn't interpret utf8 headers
    r = http('--verbose', httpbin.url + '/headers', u'Test:%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
            if args.console_logs:
            path = os.path.join(output_dir, '%s/console.log' % job_number)
            url = 'https://api.shippable.com/jobs/%s/consoles?download=true' % job_id
            download(args, headers, path, url, is_json=False)
    
            # global, resource
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/global/urlMaps'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertTrue('global' in actual)
        self.assertTrue(actual['global'])
        self.assertEquals('urlMaps', actual['resource_name'])
    
        def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
        def test_same_server(self):
        from certbot_apache.obj import VirtualHost
        no_name1 = VirtualHost(
            'fp', 'vhp', set([self.addr1]), False, False, None)
        no_name2 = VirtualHost(
            'fp', 'vhp', set([self.addr2]), False, False, None)
        no_name3 = VirtualHost(
            'fp', 'vhp', set([self.addr_default]),
            False, False, None)
        no_name4 = VirtualHost(
            'fp', 'vhp', set([self.addr2, self.addr_default]),
            False, False, None)
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
sys.path.insert(0, os.path.abspath(os.path.join(here, '..')))
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_success(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.return_value = cert
        self.assertTrue(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    
class AskTest(unittest.TestCase):
    '''Test the ask method.'''
    def setUp(self):
        logging.disable(logging.CRITICAL)