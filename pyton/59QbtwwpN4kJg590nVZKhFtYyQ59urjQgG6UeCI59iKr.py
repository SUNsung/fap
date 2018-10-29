
        
            # register the database commands
    from flaskr import db
    db.init_app(app)
    
            if error is None:
            # the name is available, store it in the database and go to
            # the login page
            db.execute(
                'INSERT INTO user (username, password) VALUES (?, ?)',
                (username, generate_password_hash(password))
            )
            db.commit()
            return redirect(url_for('auth.login'))
    
            .. versionadded:: 0.5
        '''
        return self.static_folder is not None
    
        def setdefault(self, key, default=None):
        self.accessed = True
        return super(SecureCookieSession, self).setdefault(key, default)
    
        def __exit__(self, exc_type, exc_value, traceback):
        self.proc.kill()
        self.proc.wait()
        time.sleep(0.2)
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
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
    
        def print_items(self, lvl=None, colour=True):
        if lvl is None:
            items = [item for lst in self.items.values() for item in lst]
        else:
            items = self.items.get(lvl, [])
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
        def short_desc(self):
        return 'Print Scrapy version'
    
    The matching from server ftp command return codes to html response codes is defined in the
CODE_MAPPING attribute of the handler class. The key 'default' is used for any code
that is not explicitly present among the map keys. You may need to overwrite this
mapping if want a different behaviour than default.
    
            pemfile = '/etc/ssl/certs/CA.pem'
        new_certfile = '/usr/local/share/ca-certificates/CA.crt'
        if not os.path.exists(pemfile) or not CertUtil.file_is_same(certfile, new_certfile):
            if os.system('cp '%s' '%s' && update-ca-certificates' % (certfile, new_certfile)) != 0:
                xlog.warning('install root certificate failed, Please run as administrator/root/sudo')
    
        if len(sys.argv) > 2:
        top_domain = sys.argv[2]
    else:
        top_domain = None
    
        CertUtil.init_ca()
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
            self.error(nvae)
        raise nvae
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def test_decode_wrong(self):
        self.assertRaises(jose.DeserializationError, self.field.decode, 'y')
    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
    # generate_private_key requires cryptography>=0.5
key = jose.JWKRSA(key=rsa.generate_private_key(
    public_exponent=65537,
    key_size=BITS,
    backend=default_backend()))
acme = client.Client(DIRECTORY_URL, key)
    
        @mock.patch('certbot_apache.display_ops.display_util')
    @certbot_util.patch_get_utility()
    @mock.patch('certbot_apache.display_ops.logger')
    def test_small_display(self, mock_logger, mock_util, mock_display_util):
        mock_display_util.WIDTH = 20
        mock_util().menu.return_value = (display_util.OK, 0)
        self._call(self.vhosts)
    
    import mock
    
        def perform(self):
        '''Perform a TLS-SNI-01 challenge.'''
        if not self.achalls:
            return []
        # Save any changes to the configuration as a precaution
        # About to make temporary changes to the config
        self.configurator.save('Changes before challenge setup', True)
    
    # If true, 'Created using Sphinx' is shown in the HTML footer. Default is True.
#html_show_sphinx = True
    
        def test_realpath(self):
        self.assertIn('foo', self.pathmodule.realpath('foo'))
        with warnings.catch_warnings():
            warnings.simplefilter('ignore', DeprecationWarning)
            self.assertIn(b'foo', self.pathmodule.realpath(b'foo'))
    
            self.assertEqual(posixpath.normpath(b''), b'.')
        self.assertEqual(posixpath.normpath(b'/'), b'/')
        self.assertEqual(posixpath.normpath(b'//'), b'//')
        self.assertEqual(posixpath.normpath(b'///'), b'/')
        self.assertEqual(posixpath.normpath(b'///foo/.//bar//'), b'/foo/bar')
        self.assertEqual(posixpath.normpath(b'///foo/.//bar//.//..//.//baz'),
                         b'/foo/baz')
        self.assertEqual(posixpath.normpath(b'///..//./foo/.//bar'),
                         b'/foo/bar')
    
            base_var_dict = {
            'LANG': '',
            'LC_CTYPE': '',
            'LC_ALL': '',
            'PYTHONCOERCECLOCALE': '',
        }
        base_var_dict.update(extra_vars)
        if coerce_c_locale is not None:
            base_var_dict['PYTHONCOERCECLOCALE'] = coerce_c_locale
    
            opts = get_xoptions()
        self.assertEqual(opts, {})
    
        def test_initialize_twice(self):
        '''
        bpo-33932: Calling Py_Initialize() twice should do nothing (and not
        crash!).
        '''
        out, err = self.run_embedded_interpreter('initialize_twice')
        self.assertEqual(out, '')
        self.assertEqual(err, '')
    
            out = self.get_output('-X', 'utf8', '-c', code,
                              PYTHONIOENCODING='')
        self.assertEqual(out.splitlines(),
                         ['stdin: utf-8/surrogateescape',
                          'stdout: utf-8/surrogateescape',
                          'stderr: utf-8/backslashreplace'])
    
    --Pepé
''')
    
    if __name__ == '__main__':
    freeze_support()
    test()
