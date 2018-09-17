
        
        
def win_service_handler(stop_event, *args):
    try:
        raise ValueError('Handler called with args ' + repr(args))
        TODO
    except Exception as e:
        tb = traceback.format_exc()
        msg = str(e) + '\n' + tb
        win_service_report_event(service_name, msg, is_error=True)
        raise
    
        params = {
        'data_files': data_files,
    }
    if setuptools_available:
        params['entry_points'] = {'console_scripts': ['youtube-dl = youtube_dl:main']}
    else:
        params['scripts'] = ['bin/youtube-dl']
    
    from test.helper import FakeYDL, expect_dict, expect_value
from youtube_dl.compat import compat_etree_fromstring
from youtube_dl.extractor.common import InfoExtractor
from youtube_dl.extractor import YoutubeIE, get_info_extractor
from youtube_dl.utils import encode_data_uri, strip_jsonp, ExtractorError, RegexNotFoundError
    
        @classmethod
    def default_decoder(cls, value):
        try:
            return pyrfc3339.parse(value)
        except ValueError as error:
            raise jose.DeserializationError(error)
    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
        def test_jwk_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url)
        self.assertEqual(jws.signature.combined.kid, None)
        self.assertEqual(jws.signature.combined.jwk, self.pubkey)
    
        :param str vhost_path: Augeas virtual host path
    
        def test_nested(self):
        self.assertEqual(len(self.parser.find_dir('NESTED_DIRECTIVE')), 3)
        self.assertEqual(
            len(self.parser.find_dir('INVALID_NESTED_DIRECTIVE')), 0)
    
        @certbot_util.patch_get_utility()
    def test_successful_choice(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 3)
        self.assertEqual(self.vhosts[3], self._call(self.vhosts))