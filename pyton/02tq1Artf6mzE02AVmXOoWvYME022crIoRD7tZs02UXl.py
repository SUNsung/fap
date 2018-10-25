
        
        ssl.add_argument(
    '--cert-key',
    default=None,
    type=readable_file_arg,
    help='''
    The private key to use with SSL. Only needed if --cert is given and the
    certificate file does not contain the private key.
    
    try:
    # https://urllib3.readthedocs.io/en/latest/security.html
    # noinspection PyPackageRequirements
    import urllib3
    urllib3.disable_warnings()
except (ImportError, AttributeError):
    # In some rare cases, the user may have an old version of the requests
    # or urllib3, and there is no method called 'disable_warnings.' In these
    # cases, we don't need to call the method.
    # They may get some noisy output but execution shouldn't die. Move on.
    pass
    
    from httpie.compat import is_windows
from httpie.plugins import FormatterPlugin
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_binary_included_and_correct_when_suitable(self):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', self.url, env=env)
        assert r == self.bindata

    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def test_GET_with_data_auto_JSON_headers(self, httpbin):
        # JSON headers should automatically be set also for GET with data.
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
    
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

    
    
def get_setting_target(node):
    # target nodes are placed next to the node in the doc tree
    return node.parent[node.parent.index(node) + 1]
    
            parser.add_option_group(group)
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
    from scrapy.utils.spider import iter_spider_classes
from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
from scrapy.utils.conf import arglist_to_dict
from scrapy.utils.python import without_none_values
    
            spider_loader = self.crawler_process.spider_loader
    
    import logging
from twisted.internet import defer
import six
from scrapy.exceptions import NotSupported, NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.misc import load_object
from scrapy.utils.python import without_none_values
from scrapy import signals
    
        CODE_MAPPING = {
        '550': 404,
        'default': 503,
    }
    
        entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
            elif stream_id == []:
            print('streams:             # Available quality and codecs')
            # Print DASH streams
            if self.dash_streams:
                print('    [ DASH ] %s' % ('_' * 36))
                itags = sorted(self.dash_streams,
                               key=lambda i: -self.dash_streams[i]['size'])
                for stream in itags:
                    self.p_stream(stream)
            # Print all other available streams
            print('    [ DEFAULT ] %s' % ('_' * 33))
            for stream in self.streams_sorted:
                self.p_stream(stream['id'] if 'id' in stream else stream['itag'])
    
        #first call the main parasing API
    info = json.loads(get_content('http://www.acfun.cn/video/getVideo.aspx?id=' + vid))
    
    __all__ = ['facebook_download']
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
        def gethomedir(self, username):
        if 'HOME' in os.environ:
            userhome = os.environ['HOME']
        elif 'USERPROFILE' in os.environ:
            userhome = os.environ['USERPROFILE']
        elif 'HOMEPATH' in os.environ:
            try:
                drv = os.environ['HOMEDRIVE']
            except KeyError:
                drv = ''
            userhome = drv + os.environ['HOMEPATH']
        else:
            raise RuntimeError('Can't determine home directory')
    
            self.assertEqual(posixpath.split(b'/foo/bar'), (b'/foo', b'bar'))
        self.assertEqual(posixpath.split(b'/'), (b'/', b''))
        self.assertEqual(posixpath.split(b'foo'), (b'', b'foo'))
        self.assertEqual(posixpath.split(b'////foo'), (b'////', b'foo'))
        self.assertEqual(posixpath.split(b'//foo//bar'), (b'//foo', b'bar'))
    
    
def contents(package: Package) -> Iterable[str]:
    '''Return an iterable of entries in 'package'.
    
    # Send the message via local SMTP server.
with smtplib.SMTP('localhost') as s:
    s.send_message(msg)

    
    # Import the email modules we'll need
from email import policy
from email.parser import BytesParser
    
            print('Ordered results using pool.apply_async():')
        for r in results:
            print('\t', r.get())
        print()
    
        new_filter = DiagnosticFilter( spec )
    self._cache[ cache_key ] = new_filter
    return new_filter
    
    # The default options which are only relevant to the client, not the server and
# thus are not part of default_options.json, but are required for a working
# YouCompleteMe object.
DEFAULT_CLIENT_OPTIONS = {
  'g:ycm_server_python_interpreter': '',
  'g:ycm_log_level': 'info',
  'g:ycm_keep_logfiles': 0,
  'g:ycm_extra_conf_vim_data': [],
  'g:ycm_show_diagnostics_ui': 1,
  'g:ycm_echo_current_diagnostic': 1,
  'g:ycm_enable_diagnostic_signs': 1,
  'g:ycm_enable_diagnostic_highlighting': 0,
  'g:ycm_always_populate_location_list': 0,
}
    
      eq_( len( results ), len( expected_results ) )
  for result, expected_result in zip( results, expected_results ):
    assert_that( result, expected_result )

    
    DIR_OF_THIS_SCRIPT = p.dirname( p.abspath( __file__ ) )
DIR_OF_THIRD_PARTY = p.join( DIR_OF_THIS_SCRIPT, 'third_party' )
DIR_OF_YCMD_THIRD_PARTY = p.join( DIR_OF_THIRD_PARTY, 'ycmd', 'third_party' )