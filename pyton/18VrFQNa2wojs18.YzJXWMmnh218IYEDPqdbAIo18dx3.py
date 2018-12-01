    new_release = releaser.create_release(
        version, name='youtube-dl %s' % version, body=body)
    release_id = new_release['id']
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
        with io.open(README_FILE, encoding='utf-8') as f:
        readme = f.read()
    
    for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
        def test_format_note(self):
        ydl = YoutubeDL()
        self.assertEqual(ydl._format_note({}), '')
        assertRegexpMatches(self, ydl._format_note({
            'vbr': 10,
        }), r'^\s*10k$')
        assertRegexpMatches(self, ydl._format_note({
            'fps': 30,
        }), r'^30fps$')
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
            params = get_params(test_case.get('params', {}))
        params['outtmpl'] = tname + '_' + params['outtmpl']
        if is_playlist and 'playlist' not in test_case:
            params.setdefault('extract_flat', 'in_playlist')
            params.setdefault('skip_download', True)
    
        def test_cmdline_umlauts(self):
        p = subprocess.Popen(
            [sys.executable, 'youtube_dl/__main__.py', encodeArgument('ä'), '--version'],
            cwd=rootDir, stdout=_DEV_NULL, stderr=subprocess.PIPE)
        _, stderr = p.communicate()
        self.assertFalse(stderr)
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        def get_headers(self):
        '''Return the headers' bytes.'''
        return self.msg.headers.encode('utf8')
    
        # If both `auth_parse` and `prompt_password` are set to `True`,
    # and the value of `-a` lacks the password part,
    # then the user will be prompted to type the password in.
    prompt_password = True
    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_unicode_form_item(httpbin):
    r = http('--form', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['form'] == {'test': UNICODE}
    
        def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        def load(self):
        try:
            data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            data = None
    
        def create_model_instance(self, data):
        '''
        Return a new instance of the session model object, which represents the
        current session state. Intended to be used for saving the session data
        to the database.
        '''
        return self.model(
            session_key=self._get_or_create_session_key(),
            session_data=self.encode(data),
            expire_date=self.get_expiry_date(),
        )
    
    
class ConnectionHandler:
    def __init__(self, databases=None):
        '''
        databases is an optional dictionary of database definitions (structured
        like settings.DATABASES).
        '''
        self._databases = databases
        self._connections = local()
    
        def parse(self, response):
        for link in self.link_extractor.extract_links(response):
            yield scrapy.Request(link.url, callback=self.parse)

    
            writeln(self.separator2)
        writeln('Ran %d contract%s in %.3fs' % (run, plural, stop - start))
        writeln()
    
            editor = self.settings['EDITOR']
        try:
            spidercls = self.crawler_process.spider_loader.load(args[0])
        except KeyError:
            return self._err('Spider not found: %s' % args[0])
    
        def process_request_meta(self, opts):
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
            spidercls = DefaultSpider
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        elif url:
            spidercls = spidercls_for_request(spider_loader, Request(url),
                                              spidercls, log_multiple=True)
    
    from scrapy import twisted_version
    
    
class DownloadHandlers(object):
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        def __init__(self, hass, flash_briefings):
        '''Initialize Alexa view.'''
        super().__init__()
        self.flash_briefings = copy.deepcopy(flash_briefings)
        template.attach(hass, self.flash_briefings)
    
            # Without a home_id, we fetched an URL where the mobile devices can be
        # found under the mobileDevices key.
        if 'mobileDevices' in tado_json:
            tado_json = tado_json['mobileDevices']
    
    _DEVICES_REGEX = re.compile(
    r'(?P<mac>(([0-9a-f]{2}[:-]){5}([0-9a-f]{2})))\s'
    r'(?P<ip>([0-9]{1,3}[\.]){3}[0-9]{1,3})\s+'
    r'(?P<status>([^\s]+))\s+'
    r'(?P<type>([^\s]+))\s+'
    r'(?P<intf>([^\s]+))\s+'
    r'(?P<hwintf>([^\s]+))\s+'
    r'(?P<host>([^\s]+))')
    
    
CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({cv.slug: GRAPH_SCHEMA})
}, extra=vol.ALLOW_EXTRA)