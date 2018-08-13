
        
            @value.setter
    def value(self, new_value):
        if 1 <= new_value <= 13:
            self._value = new_value
        else:
            raise ValueError('Invalid card value: {}'.format(new_value))
    
        def extract_url(self, line):
        '''Extract the generated url from the log line.'''
        pass
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
    with io.open('update/releases.atom', 'w', encoding='utf-8') as atom_file:
    atom_file.write(atom_template)

    
    import io
import sys
import re
    
    from test.helper import try_rm
    
            title = self._html_search_regex(r'<title>(.*?)</title>', webpage, 'title')
        description = self._html_search_regex(
            r'<div class='description'[^>]*>([^<]+)</div>', webpage, 'description', fatal=False)
        thumbnail = self._html_search_regex(
            r'preview_url\s*:\s*\'(.*?)\'', webpage, 'thumbnail', fatal=False)
    
    
class C56IE(InfoExtractor):
    _VALID_URL = r'https?://(?:(?:www|player)\.)?56\.com/(?:.+?/)?(?:v_|(?:play_album.+-))(?P<textid>.+?)\.(?:html|swf)'
    IE_NAME = '56.com'
    _TESTS = [{
        'url': 'http://www.56.com/u39/v_OTM0NDA3MTY.html',
        'md5': 'e59995ac63d0457783ea05f93f12a866',
        'info_dict': {
            'id': '93440716',
            'ext': 'flv',
            'title': '网事知多少 第32期：车怒',
            'duration': 283.813,
        },
    }, {
        'url': 'http://www.56.com/u47/v_MTM5NjQ5ODc2.html',
        'md5': '',
        'info_dict': {
            'id': '82247482',
            'title': '爱的诅咒之杜鹃花开',
        },
        'playlist_count': 7,
        'add_ie': ['Sohu'],
    }]
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
    content_type.add_argument(
    '--json', '-j',
    action='store_true',
    help='''
    (default) Data items from the command line are serialized as a JSON object.
    The Content-Type and Accept headers are set to application/json
    (if not specified).
    
    
@pytest.mark.parametrize('ssl_version', SSL_VERSION_ARG_MAPPING.keys())
def test_ssl_version(httpbin_secure, ssl_version):
    try:
        r = http(
            '--ssl', ssl_version,
            httpbin_secure + '/get'
        )
        assert HTTP_OK in r
    except SSLError as e:
        if ssl_version == 'ssl3':
            # pytest-httpbin doesn't support ssl3
            assert 'SSLV3_ALERT_HANDSHAKE_FAILURE' in str(e)
        else:
            raise
    
    
    def setText(self, text):
        '''
        Override the text for this token.  getText() will return this text
        rather than pulling from the buffer.  Note that this does not mean
        that start/stop indexes are not valid.  It means that that input
        was converted to a new string in the token object.
	'''
        self._text = text
    
    
@section Exceptions
    
                else:
                raise RuntimeError('DFA bang!')