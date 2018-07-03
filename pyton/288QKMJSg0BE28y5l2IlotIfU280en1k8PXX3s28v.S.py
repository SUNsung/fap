
        
            styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
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
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
            # Test for int
        with pytest.raises(InvalidHeader) as excinfo:
            r = requests.get(httpbin('get'), headers=headers_int)
        assert 'foo' in str(excinfo.value)
        # Test for dict
        with pytest.raises(InvalidHeader) as excinfo:
            r = requests.get(httpbin('get'), headers=headers_dict)
        assert 'bar' in str(excinfo.value)
        # Test for list
        with pytest.raises(InvalidHeader) as excinfo:
            r = requests.get(httpbin('get'), headers=headers_list)
        assert 'baz' in str(excinfo.value)
    
    
@pytest.mark.parametrize(
    'url, expected', (
            ('http://192.168.0.1:5000/', True),
            ('http://192.168.0.1/', True),
            ('http://172.16.1.1/', True),
            ('http://172.16.1.1:5000/', True),
            ('http://localhost.localdomain:5000/v1.0/', True),
            ('http://google.com:6000/', True),
            ('http://172.16.1.12/', False),
            ('http://172.16.1.12:5000/', False),
            ('http://google.com:5000/v1.0/', False),
    ))
def test_should_bypass_proxies(url, expected, monkeypatch):
    '''Tests for function should_bypass_proxies to check if proxy
    can be bypassed or not
    '''
    monkeypatch.setenv('no_proxy', '192.168.0.0/24,127.0.0.1,localhost.localdomain,172.16.1.1, google.com:6000')
    monkeypatch.setenv('NO_PROXY', '192.168.0.0/24,127.0.0.1,localhost.localdomain,172.16.1.1, google.com:6000')
    assert should_bypass_proxies(url, no_proxy=None) == expected
    
        text_302 = (b'HTTP/1.1 302 FOUND\r\n'
                b'Content-Length: 0\r\n'
                b'Location: /\r\n\r\n')
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    # Backwards compat only
try:
    from hashlib import md5 as _md5
except ImportError:
    try:
        from md5 import md5 as _md5
    except ImportError:
        # Assume we're running in FIPS mode here
        _md5 = None
    
    ipv4_component = r'''
    (?:
        [01]?[0-9]{{1,2}}|              # 0..199
        2[0-4][0-9]|                    # 200..249
        25[0-5]|                        # 250..255
        {range}                         # or a numeric range
    )
'''.format(range=numeric_range)
    
            expected = {
            'name': 'myhealthcheck',
            'checkIntervalSec': 5,
            'port': 443,
            'unhealthyThreshold': 2,
            'healthyThreshold': 2,
            'host': '',
            'timeoutSec': 5,
            'requestPath': '/'}
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
        terminal_stdout_re = [
        re.compile(br'[\r\n]?[\w+\-\.:\/\[\]]+(?:\([^\)]+\)){,3}(?:>|#) ?$'),
        re.compile(br'\@[\w\-\.]+:\S+?[>#\$] ?$')
    ]
    
    
def get_group_vars(groups):
    
        if WSAAddressToStringA(
            ctypes.byref(addr),
            addr_size,
            None,
            ip_string,
            ctypes.byref(ip_string_size)
    ) != 0:
        raise socket.error(ctypes.FormatError())
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
            1. error occurs
        2. enter recovery mode, report error
        3. consume until token found in resynch set
        4. try to resume parsing
        5. next match() will reset errorRecovery mode
    
            Terence implemented packed table initializers, because Java has a
        size restriction on .class files and the lookup tables can grow
        pretty large. The generated JavaLexer.java of the Java.g example
        would be about 15MB with uncompressed array initializers.
    
            return abs_cert_path, abs_chain_path, abs_fullchain_path
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_wrong_redirect_code(self, mock_get_request):
        mock_get_request.return_value = create_response(
            303, {'location': 'https://test.com'})
        self.assertFalse(self.validator.redirect('test.com'))
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    _FUTURE_STATES = [
    PENDING,
    RUNNING,
    CANCELLED,
    CANCELLED_AND_NOTIFIED,
    FINISHED
]
    
        # Create and fill-in the class template
    numfields = len(field_names)
    argtxt = repr(field_names).replace(''', '')[1:-1]   # tuple repr without parens or quotes
    reprtxt = ', '.join('%s=%%r' % name for name in field_names)
    dicttxt = ', '.join('%r: t[%d]' % (name, pos) for pos, name in enumerate(field_names))
    template = '''class %(typename)s(tuple):
        '%(typename)s(%(argtxt)s)' \n
        __slots__ = () \n
        _fields = %(field_names)r \n
        def __new__(_cls, %(argtxt)s):
            return _tuple.__new__(_cls, (%(argtxt)s)) \n
        @classmethod
        def _make(cls, iterable, new=tuple.__new__, len=len):
            'Make a new %(typename)s object from a sequence or iterable'
            result = new(cls, iterable)
            if len(result) != %(numfields)d:
                raise TypeError('Expected %(numfields)d arguments, got %%d' %% len(result))
            return result \n
        def __repr__(self):
            return '%(typename)s(%(reprtxt)s)' %% self \n
        def _asdict(t):
            'Return a new dict which maps field names to their values'
            return {%(dicttxt)s} \n
        def _replace(_self, **kwds):
            'Return a new %(typename)s object replacing specified fields with new values'
            result = _self._make(map(kwds.pop, %(field_names)r, _self))
            if kwds:
                raise ValueError('Got unexpected field names: %%r' %% kwds.keys())
            return result \n
        def __getnewargs__(self):
            return tuple(self) \n\n''' % locals()
    for i, name in enumerate(field_names):
        template += '        %s = _property(_itemgetter(%d))\n' % (name, i)
    
    URLS = ['http://www.google.com/',
        'http://www.apple.com/',
        'http://www.ibm.com',
        'http://www.thisurlprobablydoesnotexist.com',
        'http://www.slashdot.org/',
        'http://www.python.org/',
        'http://www.bing.com/',
        'http://www.facebook.com/',
        'http://www.yahoo.com/',
        'http://www.youtube.com/',
        'http://www.blogger.com/']
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa