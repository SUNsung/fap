
        
        
def assertGreaterEqual(self, got, expected, msg=None):
    if not (got >= expected):
        if msg is None:
            msg = '%r not greater than or equal to %r' % (got, expected)
        self.assertTrue(got >= expected, msg)
    
    
def _download_restricted(url, filename, age):
    ''' Returns true if the file has been downloaded '''
    
    
if __name__ == '__main__':
    unittest.main()

    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
        def _real_extract(self, url):
        webpage = self._download_webpage(url, url_basename(url))
        cnn_url = self._html_search_regex(r'data-url='(.+?)'', webpage, 'cnn url')
        return {
            '_type': 'url',
            'url': cnn_url,
            'ie_key': CNNIE.ie_key(),
        }
    
    from mrjob.job import MRJob
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
    
class PagesDataStore(object):
    
        class Plugin(AuthPlugin):
        auth_type = 'test-require-false'
        auth_require = False
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        '''
)

    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
        def test_verbose_implies_all(self, httpbin):
        r = http('--verbose', '--follow', httpbin + '/redirect/1')
        assert 'GET /redirect/1 HTTP/1.1' in r
        assert 'HTTP/1.1 302 FOUND' in r
        assert 'GET /get HTTP/1.1' in r
        assert HTTP_OK in r
    
        The host identifier may be a hostname (qualified or not), an IPv4 address,
    or an IPv6 address. If allow_ranges is True, then any of those may contain
    [x:y] range specifications, e.g. foo[1:3] or foo[0:5]-bar[x-z].
    
        def on_open_shell(self):
        try:
            self._exec_cli_command('screen-length 0 temporary')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        text = html.remove_tags_with_content(text, ('script', 'noscript'))
    text = html.replace_entities(text)
    text = html.remove_comments(text)
    return _ajax_crawlable_re.search(text) is not None

    
    
class CookiesMiddleware(object):
    '''This middleware enables working with sites that need cookies'''
    
        def process_request(self, request, spider):
        for k, v in self._headers:
            request.headers.setdefault(k, v)

    
        def __init__(self, path=None, debug=False):
        self.file = None
        self.fingerprints = set()
        self.logdupes = True
        self.debug = debug
        self.logger = logging.getLogger(__name__)
        if path:
            self.file = open(os.path.join(path, 'requests.seen'), 'a+')
            self.file.seek(0)
            self.fingerprints.update(x.rstrip() for x in self.file)
    
        if results.overwrite and os.path.exists(output_directory):
        shutil.rmtree(output_directory)
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: a diagnostic IsAllowed() ONLY if NO filters match it
    for filterMatches in self._filters:
      if filterMatches( diagnostic ):
        return False
    
    
def RunFlake8():
  print( 'Running flake8' )
  subprocess.check_call( [
    sys.executable, '-m', 'flake8', p.join( DIR_OF_THIS_SCRIPT, 'python' )
  ] )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )
    
    
class CommandRequest( BaseRequest ):
  def __init__( self, arguments, completer_target = None, extra_data = None ):
    super( CommandRequest, self ).__init__()
    self._arguments = _EnsureBackwardsCompatibility( arguments )
    self._command = arguments and arguments[ 0 ]
    self._completer_target = ( completer_target if completer_target
                               else 'filetype_default' )
    self._extra_data = extra_data
    self._response = None