
        
            def iter_body(self):
        # Read the whole body before prettifying it,
        # but bail out immediately if the body is binary.
        converter = None
        body = bytearray()
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME + SEP_CREDENTIALS + PASSWORD,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        def is_new(self):
        return not os.path.exists(self._get_path())
    
    '''
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def short_desc(self):
        return 'Generate new spider using pre-defined templates'
    
    
def _import_file(filepath):
    abspath = os.path.abspath(filepath)
    dirname, file = os.path.split(abspath)
    fname, fext = os.path.splitext(file)
    if fext != '.py':
        raise ValueError('Not a Python source file: %s' % abspath)
    if dirname:
        sys.path = [dirname] + sys.path
    try:
        module = import_module(fname)
    finally:
        if dirname:
            sys.path.pop(0)
    return module
    
            Default OpenSSL method is TLS_METHOD (also called SSLv23_METHOD)
        which allows TLS protocol negotiation.
        '''
        def creatorForNetloc(self, hostname, port):
    
            If it has already been started, stop it. In all cases, close all spiders
        and the downloader.
        '''
        if self.running:
            # Will also close spiders and downloader
            return self.stop()
        elif self.open_spiders:
            # Will also close downloader
            return self._close_all_spiders()
        else:
            return defer.succeed(self.downloader.close())
    
        @classmethod
    def from_crawler(cls, crawler):
        if not crawler.settings.getbool('COOKIES_ENABLED'):
            raise NotConfigured
        return cls(crawler.settings.getbool('COOKIES_DEBUG'))
    
        repository=path
      The top level directory of the repository, used to derive the header
      guard CPP variable. By default, this is determined by searching for a
      path that contains .git, .hg, or .svn. When this flag is specified, the
      given path is used instead. This option allows the header guard CPP
      variable to remain consistent even if members of a team have different
      repository root directories (such as when checking out a subdirectory
      with SVN). In addition, users of non-mainstream version control systems
      can use this flag to ensure readable header guard CPP variables.
    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithoutHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'address': None,
    'port': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseDone( [] ) ) as mock_future:
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, response ) )
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    # A list of ignored prefixes for module index sorting.
#modindex_common_prefix = []
    
    def _filter_by_keyword(answer, keyword, options):
    
            if not cls._repository_url.startswith('https://github.com/'):
            # in this case `fetch` has to be implemented
            # in the distinct adapter subclass
            raise RuntimeError(
                'Do not known how to handle this repository: %s' % cls._repository_url)
    
    _INTERNAL_TOPICS = [
    ':cht.sh',
    ':bash_completion',
    ':emacs',
    ':emacs-ivy',
    ':firstpage',
    ':firstpage-v1',
    ':firstpage-v2',
    ':fish',
    ':help',
    ':intro',
    ':list',
    ':post',
    ':styles',
    ':styles-demo',
    ':vim',
    ':zsh',
    ]
    
            cmd = [CONFIG['path.internal.bin.upstream']] + topic
        proc = Popen(cmd, stdin=open(os.devnull, 'r'), stdout=PIPE, stderr=PIPE)
        answer = proc.communicate()[0].decode('utf-8')
        return answer
    
            # this part should be generalized
        # currently we just remove the name of the adapter from the path
        if topic == self.__section_name:
            return self._starting_page(topic)
    
    Cheatsheets are located in `pages/*/`
Each cheat sheet is a separate file with extension .md
    
        '''
    Connect to the upstream server `CONFIG['upstream.url']` and fetch
    response from it. The response is supposed to have the 'ansi' format.
    If the server does not respond within `CONFIG['upstream.timeout']` seconds,
    or if a connection error occurs, the 'are you offline' banner is displayed.
    
    _REDIS = None
if CONFIG['cache.type'] == 'redis':
    import redis
    _REDIS = redis.StrictRedis(
        host=CONFIG['cache.redis.host'],
        port=CONFIG['cache.redis.port'],
        db=CONFIG['cache.redis.db'])
    
        adptr.save_state(state)
    return True
    
    flags.DEFINE_float('learning_rate', 5e-5, 'The initial learning rate for Adam.')
    
            for token in tokens_b:
          tokens.append(token)
          segment_ids.append(1)
        tokens.append('[SEP]')
        segment_ids.append(1)
    
            if log.log_tier(ctx.options.termlog_verbosity) >= log.log_tier(e.level):
            click.secho(
                e.msg,
                file=outfile,
                fg=dict(error='red', warn='yellow',
                        alert='magenta').get(e.level),
                dim=(e.level == 'debug'),
                err=(e.level == 'error')
            )

    
    
class Reply:
    '''
    Messages sent through a channel are decorated with a 'reply' attribute. This
    object is used to respond to the message through the return channel.
    '''
    def __init__(self, obj):
        self.obj = obj
        # Spawn an event loop in the current thread
        self.q = queue.Queue()