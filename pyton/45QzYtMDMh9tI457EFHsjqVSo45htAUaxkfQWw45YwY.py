
        
        
def test_logout(client, auth):
    auth.login()
    
    
def test_get_close_db(app):
    with app.app_context():
        db = get_db()
        assert db is get_db()
    
    
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
    
def _find_app():
    top = _app_ctx_stack.top
    if top is None:
        raise RuntimeError(_app_ctx_err_msg)
    return top.app
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
    
class Environment(BaseEnvironment):
    '''Works like a regular Jinja2 environment but has some additional
    knowledge of how Flask's blueprint works so that it can prepend the
    name of the blueprint to referenced templates if necessary.
    '''
    
        paths = []
    for fname in files:
        paths.append(get_file(fname,
                              origin=base + fname,
                              cache_subdir=dirname))
    
    
# Aliases.
    
        y = np.array(y, dtype='int')
    input_shape = y.shape
    if input_shape and input_shape[-1] == 1 and len(input_shape) > 1:
        input_shape = tuple(input_shape[:-1])
    y = y.ravel()
    if not num_classes:
        num_classes = np.max(y) + 1
    n = y.shape[0]
    categorical = np.zeros((n, num_classes), dtype=dtype)
    categorical[np.arange(n), y] = 1
    output_shape = input_shape + (num_classes,)
    categorical = np.reshape(categorical, output_shape)
    return categorical
    
        E.g. if your `batch_size` is 64 and you use `gpus=2`,
    then we will divide the input into 2 sub-batches of 32 samples,
    process each sub-batch on one GPU, then return the full
    batch of 64 processed samples.
    
    model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          verbose=1,
          validation_data=(x_test, y_test))
    
        return out
    
        def test_copy(self):
        copy = self.case_insensitive_dict.copy()
        assert copy is not self.case_insensitive_dict
        assert copy == self.case_insensitive_dict
    
        return {
        'platform': platform_info,
        'implementation': implementation_info,
        'system_ssl': system_ssl_info,
        'using_pyopenssl': pyopenssl is not None,
        'pyOpenSSL': pyopenssl_info,
        'urllib3': urllib3_info,
        'chardet': chardet_info,
        'cryptography': cryptography_info,
        'idna': idna_info,
        'requests': {
            'version': requests_version,
        },
    }
    
                # Look for requests environment configuration and be compatible
            # with cURL.
            if verify is True or verify is None:
                verify = (os.environ.get('REQUESTS_CA_BUNDLE') or
                          os.environ.get('CURL_CA_BUNDLE'))
    
        :param value: the header value to unquote.
    :rtype: str
    '''
    if value and value[0] == value[-1] == ''':
        # this is not the real unquoting, but fixing this so that the
        # RFC is met will result in bugs with internet explorer and
        # probably some other browsers as well.  IE for example is
        # uploading files with 'C:\foo\bar.txt' as filename
        value = value[1:-1]
    
        Code is a simple port of what is already in the /scripts directory
    
            cert.sign(CertUtil.ca_privatekey, CertUtil.ca_digest)
    
            if response.status not in self.config.check_ip_accept_status:
            return False
    
    
#try:
#    from code.default.gae_proxy.local.config import config
#except:
#    from code.default.gae_proxy.local.config import config
from config import config
    
        if __password__ and __password__ != kwargs.get('password', ''):
        start_response('403 Forbidden', [('Content-Type', 'text/html')])
        yield message_html('403 Wrong password', 'Wrong password(%r)' % kwargs.get('password', ''), 'GoAgent proxy.ini password is wrong!')
        raise StopIteration
    
        def __init__(self, child_parts):
        self.child_parts = child_parts
        if child_parts:
            self.successor = _make_selector(child_parts)
            self.dironly = True
        else:
            self.successor = _TerminatingSelector()
            self.dironly = False
    
        for type, token, start, end, line in token_generator:
        if type == ENDMARKER:
            break
        # Ignore the new line on the last line if the input lacks one
        if missing_trailing_nl and type == NEWLINE and end[0] == num_lines:
            continue
        type = tok_name[type]
        result.append(f'    {type:10} {token!r:13} {start} {end}')
    
        @bigmemtest(size=_4G + 100, memuse=2)
    def testCompress4G(self, size):
        # 'Test BZ2Compressor.compress()/flush() with >4GiB input'
        bz2c = BZ2Compressor()
        data = b'x' * size
        try:
            compressed = bz2c.compress(data)
            compressed += bz2c.flush()
        finally:
            data = None  # Release memory
        data = bz2.decompress(compressed)
        try:
            self.assertEqual(len(data), size)
            self.assertEqual(len(data.strip(b'x')), 0)
        finally:
            data = None
    
        def __str__(self):
        return self.state
    
    *What does this example do?
The code shows a way to localize words in two languages: English and
Greek. 'getLocalizer' is the factory method that constructs a
localizer depending on the language chosen. The localizer object will
be an instance from a different class according to the language
localized. However, the main code does not have to worry about which
localizer will be instantiated, since the method 'get' will be called
in the same way independently of the language.
    
    
if __name__ == '__main__':
    main()
    
    
class Prototype(object):
    
    
# example of graph usage
graph = {'A': ['B', 'C'], 'B': ['C', 'D'], 'C': ['D'], 'D': ['C'], 'E': ['F'], 'F': ['C']}
    
        def on_switchover(self):
        super(Standby, self).on_switchover()  # message ignored
        self._hsm._next_state('active')
    
    
class TabletView(object):
    def show_index_page(self):
        print('Displaying tablet index page')
    
    
class Proxy:
    def __init__(self):
        self.busy = 'No'
        self.sales = None
    
        def test_parents(self):
        for _ in range(2):
            self.assertEqual(self.John.parents, 'Father and mother')
        self.assertEqual(self.John.call_count2, 1)

    
        def test_car_adapter_shall_make_loud_noise(self):
        car = Car()
        car_adapter = Adapter(car, make_noise=car.make_noise)
        noise = car_adapter.make_noise(1)
        expected_noise = 'vroom!'
        self.assertEqual(noise, expected_noise)
    
        result = False
    try:
        ret = urlopen(url, timeout=2)
        result = (ret.code == 200)
    except HTTPError as e:
        print(e, file=sys.stderr)
    except URLError as e:
        print(e, file=sys.stderr)
    except timeout as e:
        print(e, file=sys.stderr)
    except Exception as e:
        print(e, file=sys.stderr)
    
    
class BufferFull(UnpackException):
    pass
    
    
def testSimpleValue():
    check(b'\x93\xc0\xc2\xc3', (None, False, True, ))
    
            exp1 = '''Series([], dtype: timedelta64[ns])'''
    
    
def test_setitem_callable():
    # GH 12533
    s = pd.Series([1, 2, 3, 4], index=list('ABCD'))
    s[lambda x: 'A'] = -1
    tm.assert_series_equal(s, pd.Series([-1, 2, 3, 4], index=list('ABCD')))