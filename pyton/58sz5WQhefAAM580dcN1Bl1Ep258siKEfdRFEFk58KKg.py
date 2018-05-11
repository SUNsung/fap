
        
        
    {        Generic:                   '#000000',        # class: 'g'
        Generic.Deleted:           '#a40000',        # class: 'gd'
        Generic.Emph:              'italic #000000', # class: 'ge'
        Generic.Error:             '#ef2929',        # class: 'gr'
        Generic.Heading:           'bold #000080',   # class: 'gh'
        Generic.Inserted:          '#00A000',        # class: 'gi'
        Generic.Output:            '#888',           # class: 'go'
        Generic.Prompt:            '#745334',        # class: 'gp'
        Generic.Strong:            'bold #000000',   # class: 'gs'
        Generic.Subheading:        'bold #800080',   # class: 'gu'
        Generic.Traceback:         'bold #a40000',   # class: 'gt'
    }

    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def __repr__(self):
        return '<Response [%s]>' % (self.status_code)
    
        def __iter__(self):
        return (casedkey for casedkey, mappedvalue in self._store.values())
    
        def __call__(self, r):
        # Initialize per-thread state, if needed
        self.init_per_thread_state()
        # If we have a saved nonce, skip the 401
        if self._thread_local.last_nonce:
            r.headers['Authorization'] = self.build_digest_header(r.method, r.url)
        try:
            self._thread_local.pos = r.body.tell()
        except AttributeError:
            # In the case of HTTPDigestAuth being reused and the body of
            # the previous request was a file-like object, pos has the
            # file position of the previous body. Ensure it's set to
            # None.
            self._thread_local.pos = None
        r.register_hook('response', self.handle_401)
        r.register_hook('response', self.handle_redirect)
        self._thread_local.num_401_calls = 1
    
    Some codes have multiple names, and both upper- and lower-case versions of
the names are allowed. For example, ``codes.ok``, ``codes.OK``, and
``codes.okay`` all correspond to the HTTP status code 200.
'''
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            '<http:/.../front.jpeg>; rel=front; type='image/jpeg'',
            [{'url': 'http:/.../front.jpeg', 'rel': 'front', 'type': 'image/jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>',
            [{'url': 'http:/.../front.jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>;',
            [{'url': 'http:/.../front.jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>; type='image/jpeg',<http://.../back.jpeg>;',
            [
                {'url': 'http:/.../front.jpeg', 'type': 'image/jpeg'},
                {'url': 'http://.../back.jpeg'}
            ]
        ),
        (
            '',
            []
        ),
    ))
def test_parse_header_links(value, expected):
    assert parse_header_links(value) == expected
    
        with server as (host, port):
        url = u'http://{0}:{1}'.format(host, port)
        r = requests.get(url=url, allow_redirects=True)
        assert r.status_code == 200
        assert len(r.history) == 1
        assert r.history[0].status_code == 301
        assert redirect_request[0].startswith(b'GET /' + expected_path + b' HTTP/1.1')
        assert r.url == u'{0}/{1}'.format(url, expected_path.decode('ascii'))
    
            super(HTTPAdapter, self).__init__()
    
    label = r'''
    (?:[\w]|{range})                    # Starts with an alphanumeric or a range
    (?:[\w_-]|{range})*                 # Then zero or more of the same or [_-]
    (?<![_-])                           # ...as long as it didn't end with [_-]
'''.format(range=alphanumeric_range)
    
    
# Pure Python version of correctly-rounded integer-to-float conversion.
def int_to_float(n):
    '''
    Correctly-rounded integer-to-float conversion.
    
                for d in DequeWithBadIter('abc'), DequeWithBadIter('abc', 2):
                self.assertRaises(TypeError, pickle.dumps, d, proto)
    
    
class DOMBuilder:
    entityResolver = None
    errorHandler = None
    filter = None
    
            a = 0
        b = 2 * sys.maxsize
        expected_len = b - a
        x = range(a, b)
        self.assertIn(a, x)
        self.assertNotIn(b, x)
        self.assertRaises(OverflowError, len, x)
        self.assertTrue(x)
        self.assertEqual(_range_len(x), expected_len)
        self.assertEqual(x[0], a)
        idx = sys.maxsize+1
        self.assertEqual(x[idx], a+idx)
        self.assertEqual(x[idx:idx+1][0], a+idx)
        with self.assertRaises(IndexError):
            x[-expected_len-1]
        with self.assertRaises(IndexError):
            x[expected_len]
    
    print 'JS_OUTPUTS := ' + ' '.join(outputs)
print 'DEFS_SUCCESS := 1'

    
        # don't put action arguments onto c automatically
    config['pylons.c_attach_args'] = False
    
            # How many characters to chop off the end of the hostname before
        # we start looking at subdomains
        ignored_suffix_len = len(g.domain)
    
        @require_oauth2_scope('read')
    @validate(
        user=VAccountByName('username'),
    )
    @api_doc(
        section=api_section.users,
        uri='/api/v1/user/{username}/trophies',
    )
    def GET_usertrophies(self, user):
        '''Return a list of trophies for the a given user.'''
        return self.api_wrapper(get_usertrophies(user))