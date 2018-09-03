
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
        # test that the user was inserted into the database
    with app.app_context():
        assert get_db().execute(
            'select * from user where username = 'a'',
        ).fetchone() is not None
    
    from werkzeug.local import LocalProxy
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    import httpie
    
        try:  # bad ANSIBLE_CONFIG or config options can force ugly stacktrace
        import ansible.constants as C
        from ansible.utils.display import Display
    except AnsibleOptionsError as e:
        display.error(to_text(e), wrap_text=False)
        sys.exit(5)
    
        Returns: Dict of Host vars if found else None
    '''
    try:
        result = api.Command.host_show(u(host))['result']
        if 'usercertificate' in result:
            del result['usercertificate']
        return json.dumps(result, indent=1)
    except errors.NotFound as e:
        return {}
    
        for config_file in CONFIG_FILES:
        if os.path.exists(config_file):
            break
    else:
        sys.stdout.write('unable to locate config file at /etc/ansible/infoblox.yaml\n')
        sys.exit(-1)
    
    if ANSIBLE_TEST_PATH not in sys.path:
    sys.path.insert(0, ANSIBLE_TEST_PATH)
    
    
def is_ok(ip=None):
    if not ip:
        return IPv4.is_ok() or IPv6.is_ok()
    elif '.' in ip:
        return IPv4.is_ok()
    else:
        return IPv6.is_ok()
    
    
# called by launcher/module/stop
def terminate():
    global ready, proxy_server
    
    EOF = -1
    
    HSTS_ARGS = ['\'max-age=31536000\'', ' ', 'always']
    
        def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
            from acme.messages import Registration
        self.reg = Registration(key=key, contact=contact, agreement=agreement)
        self.reg_none = Registration()
    
    
def unique_id():
    ''' Returns an unique id to be used as a VirtualHost identifier'''
    return binascii.hexlify(os.urandom(16)).decode('utf-8')

    
            # This is in an IfDefine
        self.assertTrue('ssl_module' in self.parser.modules)
        self.assertTrue('mod_ssl.c' in self.parser.modules)
    
        def test_perform0(self):
        resp = self.sni.perform()
        self.assertEqual(len(resp), 0)