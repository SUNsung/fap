
        
            See also `test_auth_plugins.py`
    
        Assumes `from __future__ import division`.
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        def test_POST_form_auto_Content_Type(self, httpbin):
        r = http('--form', 'POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Content-Type': 'application/x-www-form-urlencoded' in r
    
        def test_download_interrupted(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 5}
        ))
        downloader.chunk_downloaded(b'1234')
        downloader.finish()
        assert downloader.interrupted

    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        if num in lowPrimes:
        return True
    
    
class DoubleHash(HashTable):
    '''
        Hash Table example with open addressing and Double Hash
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
    

    
    try:
	raw_input		#Python 2
except NameError:
	raw_input = input	#Python 3
    
            '''
        this section is to check that the inputs conform to our dimensionality constraints
        '''
        if X.ndim != 1:
            print('Error: Input data set must be one dimensional')
            return
        if len(X) != len(y):
            print('Error: X and y have different lengths')
            return
        if y.ndim != 1:
            print('Error: Data set labels must be one dimensional')
            return
    
            a *= a
        b >>= 1
    
    
class BufferFull(UnpackException):
    pass
    
        def test_frame_tz_localize(self):
        rng = date_range('1/1/2011', periods=100, freq='H')
    
    
def testUnsignedInt():
    check(b'\x99\xcc\x00\xcc\x80\xcc\xff\xcd\x00\x00\xcd\x80\x00'
          b'\xcd\xff\xff\xce\x00\x00\x00\x00\xce\x80\x00\x00\x00'
          b'\xce\xff\xff\xff\xff',
          (0,
           128,
           255,
           0,
           32768,
           65535,
           0,
           2147483648,
           4294967295, ), )
    
        def testPackUTF32(self):
        test_data = [
            compat.u(''),
            compat.u('abcd'),
            [compat.u('defgh')],
            compat.u('Русский текст'),
        ]
        for td in test_data:
            re = unpackb(
                packb(td, encoding='utf-32'), use_list=1, encoding='utf-32')
            assert re == td
    
        NUMBER_OF_STRINGS = 6
    read_size = 16
    
        def put_string(self, col, row, s=None, color=None, background=None):
        '''
        Put string <s> with foreground color <color> and background color <background>
        ad <col>, <row>
        '''
        for i, c in enumerate(s):
            self.put_point(col+i, row, c, color=color, background=background)
    
        >>> rewrite_editor_section_name('js')
    'js'
    >>> rewrite_editor_section_name('vscode:js')
    'js'
    '''
    if ':' not in section_name:
        return section_name
    
        def __init__(self):
        self.intervals = ['min', 'hour', 'day']
    
    import requests