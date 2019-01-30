
        
            This could be extended by having nested blocks, sorting them recursively
    and flattening the end structure into a list of lines. Revision 2 maybe ^.^.
'''
    
    
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('', '', b'Username is required.'),
    ('a', '', b'Password is required.'),
    ('test', 'test', b'already registered'),
))
def test_register_validate_input(client, username, password, message):
    response = client.post(
        '/auth/register',
        data={'username': username, 'password': password}
    )
    assert message in response.data
    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
    
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
        @app.route('/')
    def index():
        with flask._app_ctx_stack.top:
            with flask._request_ctx_stack.top:
                pass
        env = flask._request_ctx_stack.top.request.environ
        assert env['werkzeug.request'] is not None
        return u''
    
    
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
        def add_options(self, parser):
        '''
        Populate option parse with options available for this command
        '''
        group = OptionGroup(parser, 'Global Options')
        group.add_option('--logfile', metavar='FILE',
            help='log file. if omitted stderr will be used')
        group.add_option('-L', '--loglevel', metavar='LEVEL', default=None,
            help='log level (default: %s)' % self.settings['LOG_LEVEL'])
        group.add_option('--nolog', action='store_true',
            help='disable logging completely')
        group.add_option('--profile', metavar='FILE', default=None,
            help='write python cProfile stats to FILE')
        group.add_option('--pidfile', metavar='FILE',
            help='write process ID to FILE')
        group.add_option('-s', '--set', action='append', default=[], metavar='NAME=VALUE',
            help='set/override setting (may be repeated)')
        group.add_option('--pdb', action='store_true', help='enable pdb on failure')
    
    
class Command(ScrapyCommand):
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
            self.crawler_process.crawl(spidercls, **opts.spargs)
        self.crawler_process.start()
    
        def _build_response(self, body, request):
        request.meta['download_latency'] = self.headers_time-self.start_time
        status = int(self.status)
        headers = Headers(self.response_headers)
        respcls = responsetypes.from_args(headers=headers, url=self._url)
        return respcls(url=self._url, status=status, headers=headers, body=body)
    
        def test_decode(self):
        self.assertEqual('x', self.field.decode('x'))
    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
    # Custom sidebar templates, maps document names to template names.
#html_sidebars = {}
    
            '''
        error_files = self.aug.match('/augeas//error')
    
    from certbot import errors