
        
        
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
    
class TestMultipleSocks(unittest.TestCase):
    @staticmethod
    def _check_params(attrs):
        params = get_params()
        for attr in attrs:
            if attr not in params:
                print('Missing %s. Skipping.' % attr)
                return
        return params
    
            swf_class = swfi.extract_class(test_id)
        func = swfi.extract_function(swf_class, 'main')
        res = func(input_args)
        self.assertEqual(res, output)
    
            return self._extract_nuevo(
            'http://www.anitube.se/nuevo/econfig.php?key=%s' % key, video_id)

    
        def _real_extract(self, url):
        mobj = re.match(self._VALID_URL, url)
        video_id = mobj.group('id')
    
        def _real_extract(self, url):
        video_id = self._match_id(url)
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
    
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
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
    '''
requests.compat
~~~~~~~~~~~~~~~
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-apache', u'certbot-apache Documentation',
     [author], 1)
]
    
    
class RedirectTest(unittest.TestCase):
    '''Test the redirect_by_default method.'''
    @classmethod
    def _call(cls):
        from certbot.display.enhancements import redirect_by_default
        return redirect_by_default()
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
    
MINIMUM = 80
    
    
from __future__ import absolute_import, division, print_function
from datetime import timedelta
from random import random
    
    
class BaseRequestHandler(web.RequestHandler):
    SUPPORTED_METHODS = ('PUT', 'GET', 'DELETE')