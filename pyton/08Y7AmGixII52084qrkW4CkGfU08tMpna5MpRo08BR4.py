
        
        
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
        return inner
    
        def test_binary_stdin(self, httpbin):
        with open(BIN_FILE_PATH, 'rb') as stdin:
            env = MockEnvironment(
                stdin=stdin,
                stdin_isatty=False,
                stdout_isatty=False
            )
            r = http('--print=B', 'POST', httpbin.url + '/post', env=env)
            assert r == BIN_FILE_CONTENT
    
        def test_implicit_POST_stdin(self, httpbin):
        with open(FILE_PATH) as f:
            env = MockEnvironment(stdin_isatty=False, stdin=f)
            r = http('--form', httpbin.url + '/post', env=env)
        assert HTTP_OK in r
    
    
def load_rsa_private_key(*names):
    '''Load RSA private key.'''
    loader = _guess_loader(names[-1], serialization.load_pem_private_key,
                           serialization.load_der_private_key)
    return jose.ComparableRSAKey(loader(
        load_vector(*names), password=None, backend=default_backend()))
    
    from acme import client
from acme import messages
    
        :param str filepath: Path of file to parse
    :param str varname: Name of the variable
    
            '''
        super(AugeasConfigurator, self).recovery_routine()
        # Need to reload configuration after these changes take effect
        self.aug.load()
    
    UIR_ARGS = ['always', 'set', 'Content-Security-Policy',
            'upgrade-insecure-requests']
    
        def test_rollback_error(self):
        self.config.reverter.rollback_checkpoints = mock.Mock(
            side_effect=errors.ReverterError)
        self.assertRaises(errors.PluginError, self.config.rollback_checkpoints)
    
        def test_load_modules(self):
        '''If only first is found, there is bad variable parsing.'''
        self.assertTrue('status_module' in self.parser.modules)
        self.assertTrue('mod_status.c' in self.parser.modules)
    
            self.assertEqual(
            len(self.sni.configurator.parser.find_dir(
                'Include', self.sni.challenge_conf)),
            1)
        self.assertEqual(len(sni_responses), 2)
        for i in xrange(2):
            self.assertEqual(sni_responses[i], acme_responses[i])
    
        def perform(self):
        '''Perform a TLS-SNI-01 challenge.'''
        if not self.achalls:
            return []
        # Save any changes to the configuration as a precaution
        # About to make temporary changes to the config
        self.configurator.save('Changes before challenge setup', True)
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
        if re.match(re_str, url):
        html = get_content(url)
        title = match1(html, r'<title>(.+)丨(.+)</title>')  #title
        
        # player loaded via internal iframe
        frame_url = re.search(r'<iframe src=\'(.+?)\'', html).group(1)
        logging.debug('dilidili_download: %s' % frame_url)
        
        #https://player.005.tv:60000/?vid=a8760f03fd:a04808d307&v=yun&sign=a68f8110cacd892bc5b094c8e5348432
        html = get_content(frame_url, headers=headers, decoded=False).decode('utf-8')
        
        match = re.search(r'(.+?)var video =(.+?);', html)
        vid = match1(html, r'var vid='(.+)'')
        hd2 = match1(html, r'var hd2='(.+)'')
        typ = match1(html, r'var typ='(.+)'')
        sign = match1(html, r'var sign='(.+)'')
        tmsign = match1(html, r'tmsign=([A-Za-z0-9]+)')
        ulk =  match1(html, r'var ulk='(.+)'')
    
    from ..common import *
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(urls, title, ext, size, output_dir, merge=False)
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
      CheckCall( [ sys.executable, build_file ] + sys.argv[ 1: ] )
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    
  def Poll( self, diagnostics_handler ):
    '''This should be called regularly to check for new messages in this buffer.
    Returns True if Poll should be called again in a while. Returns False when
    the completer or server indicated that further polling should not be done
    for the requested file.'''
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def _ConvertDiagListToDict( self ):
    self._line_to_diags = defaultdict( list )
    for diag in self._diagnostics:
      location = diag[ 'location' ]
      bufnr = vimsupport.GetBufferNumberForFilename( location[ 'filepath' ] )
      if bufnr == self._bufnr:
        line_number = location[ 'line_num' ]
        self._line_to_diags[ line_number ].append( diag )
    
      # On UNIX platforms, we use sys.executable as the Python interpreter path.
  # We cannot use sys.executable on Windows because for unknown reasons, it
  # returns the Vim executable. Instead, we use sys.exec_prefix to deduce the
  # interpreter path.
  python_interpreter = ( WIN_PYTHON_PATH if utils.OnWindows() else
                         sys.executable )
  if _EndsWithPython( python_interpreter ):
    return python_interpreter
    
      post_vim_message.assert_has_exact_calls( [
    call( 'On the first day of Christmas, my VimScript gave to me',
          warning=False,
          truncate=True ),
    call( 'A test file in a Command-T', warning=False, truncate=True ),
    call( 'On the second day of Christmas, my VimScript gave to me',
          warning=False,
          truncate=True ),
    call( 'Two popup menus, and a test file in a Command-T',
          warning=False,
          truncate=True ),
  ] )

    
    
def KeywordsFromSyntaxListOutput_StatementHierarchy_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
baa xxx foo bar
        links to Foo
Foo xxx zoo goo
        links to Bar
Bar xxx qux moo
        links to Statement''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo', 'qux', 'moo' ) )
    
    from concurrent.futures import _base
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._static_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
        def __repr__(self):
        return '<%s: %r>' % (self.__class__.__name__, self.value)
    
    
class NotSpecification(CompositeSpecification):
    _wrapped = Specification()
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' %
              (self.stations[self.pos], self.name))
    
    *What does this example do?
This particular implementation abstracts the creation of a pet and
does so depending on the factory we chose (Dog or Cat, or random_animal)
This works because both Dog/Cat and random_animal respect a common
interface (callable for creation and .speak()).
Now my application can create pets abstractly and decide later,
based on my own criteria, dogs over cats.
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''