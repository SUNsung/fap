
        
        print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    from youtube_dl.extractor import (
    FacebookIE,
    gen_extractors,
    YoutubeIE,
)
    
    
class TestMultipleSocks(unittest.TestCase):
    @staticmethod
    def _check_params(attrs):
        params = get_params()
        for attr in attrs:
            if attr not in params:
                print('Missing %s. Skipping.' % attr)
                return
        return params
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
            title = self._html_search_regex(r'<title>(.*?)</title>', webpage, 'title')
        description = self._html_search_regex(
            r'<div class='description'[^>]*>([^<]+)</div>', webpage, 'description', fatal=False)
        thumbnail = self._html_search_regex(
            r'preview_url\s*:\s*\'(.*?)\'', webpage, 'thumbnail', fatal=False)
    
        _CONFIG = {
        # http://edition.cnn.com/.element/apps/cvp/3.0/cfg/spider/cnn/expansion/config.xml
        'edition': {
            'data_src': 'http://edition.cnn.com/video/data/3.0/video/%s/index.xml',
            'media_src': 'http://pmd.cdn.turner.com/cnn/big',
        },
        # http://money.cnn.com/.element/apps/cvp2/cfg/config.xml
        'money': {
            'data_src': 'http://money.cnn.com/video/data/4.0/video/%s.xml',
            'media_src': 'http://ht3.cdn.turner.com/money/big',
        },
    }
    
            json_url = (
            'http://static.videos.gouv.fr/brightcovehub/export/json/%s' %
            video_id)
        info = self._download_json(json_url, title, 'Downloading JSON config')
        video_url = info['renditions'][0]['url']
    
            from certbot_dns_dnsimple.dns_dnsimple import Authenticator
    
            raise errors.PluginError('Unable to determine base domain for {0} using names: {1}.'
                                 .format(domain_name, domain_name_guesses))
    
    # If true, `todo` and `todoList` produce output, else they produce nothing.
todo_include_todos = True
    
        def get_all_names_answer(self):
        '''Returns the set of domain names that the plugin should find'''
        if self._all_names:
            return self._all_names
        else:
            raise errors.Error('No configuration file loaded')
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_bad_max_age(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security': 'max-age=not-an-int'})
        self.assertFalse(self.validator.hsts('test.com'))
    
    # If true, 'Created using Sphinx' is shown in the HTML footer. Default is True.
#html_show_sphinx = True