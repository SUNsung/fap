
        
        
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
    compat_print('total downloads traffic: %s' % format_size(total_bytes))

    
            info_dict = _make_result(list(formats_order), extractor='youtube')
        ydl = YDL({'format': '(bestvideo[ext=none]/bestvideo[ext=webm])+bestaudio'})
        yie = YoutubeIE(ydl)
        yie._sort_formats(info_dict['formats'])
        ydl.process_ie_result(info_dict)
        downloaded_ids = [info['format_id'] for info in ydl.downloaded_info_dicts]
        self.assertEqual(downloaded_ids, ['248+141'])
    
        if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
            if error is None:
            # store the user id in a new session and return to the index
            session.clear()
            session['user_id'] = user['id']
            return redirect(url_for('index'))
    
    
class AuthActions(object):
    def __init__(self, client):
        self._client = client
    
    
def test_init_db_command(runner, monkeypatch):
    class Recorder(object):
        called = False
    
        static_folder = property(
        _get_static_folder, _set_static_folder,
        doc='The absolute path to the configured static folder.'
    )
    del _get_static_folder, _set_static_folder
    
        def should_set_cookie(self, app, session):
        '''Used by session backends to determine if a ``Set-Cookie`` header
        should be set for this session cookie for this response. If the session
        has been modified, the cookie is set. If the session is permanent and
        the ``SESSION_REFRESH_EACH_REQUEST`` config is true, the cookie is
        always set.
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        # Test single image
    x = np.random.uniform(0, 255, (10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
        There are two variants. The default one is based on 1406.1078v3 and
    has reset gate applied to hidden state before matrix multiplication. The
    other one is based on original 1406.1078v1 and has the order reversed.
    
        import matplotlib.pyplot as plt
    fig = plt.figure('scikit-learn OMP vs. LARS benchmark results')
    for i, (label, timings) in enumerate(sorted(six.iteritems(results))):
        ax = fig.add_subplot(1, 2, i+1)
        vmax = max(1 - timings.min(), -1 + timings.max())
        plt.matshow(timings, fignum=False, vmin=1 - vmax, vmax=1 + vmax)
        ax.set_xticklabels([''] + [str(each) for each in samples_range])
        ax.set_yticklabels([''] + [str(each) for each in features_range])
        plt.xlabel('n_samples')
        plt.ylabel('n_features')
        plt.title(label)
    
    
def _linkcode_resolve(domain, info, package, url_fmt, revision):
    '''Determine a link to online source for a class/method/function
    
            if cmd.startswith('#'):
            log.write('%s' % cmd)
            continue
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')
    
                    if self.eot[s] >= 0:
                    #print 'EOT to %d' % self.eot[s]
                    
                    s = self.eot[s]
                    input.consume()
                    continue
    
        @nonce.decoder
    def nonce(value):  # pylint: disable=missing-docstring,no-self-argument
        try:
            return jose.decode_b64jose(value)
        except jose.DeserializationError as error:
            # TODO: custom error
            raise jose.DeserializationError('Invalid nonce: {0}'.format(error))
    
        def test_jwk_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url)
        self.assertEqual(jws.signature.combined.kid, None)
        self.assertEqual(jws.signature.combined.jwk, self.pubkey)
    
    csr = OpenSSL.crypto.load_certificate_request(
    OpenSSL.crypto.FILETYPE_ASN1, pkg_resources.resource_string(
        'acme', os.path.join('testdata', 'csr.der')))
try:
    acme.request_issuance(jose.util.ComparableX509(csr), (authzr,))
except messages.Error as error:
    print ('This script is doomed to fail as no authorization '
           'challenges are ever solved. Error from server: {0}'.format(error))

    
        def test_bad_parse(self):
        # pylint: disable=protected-access
        self.config.parser.parse_file(os.path.join(
            self.config.parser.root, 'conf-available', 'bad_conf_file.conf'))
        self.assertRaises(
            errors.PluginError, self.config.check_parsing_errors, 'httpd.aug')
    
            :returns: All TLS-SNI-01 addresses used
        :rtype: set
    
    # Additional templates that should be rendered to pages, maps page names to
# template names.
#html_additional_pages = {}