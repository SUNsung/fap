
        
        
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
        @classmethod
    def supports(cls, mime):
        raise NotImplementedError
    
    
# noinspection PyAbstractClass
class BuiltinAuthPlugin(AuthPlugin):
    
        '''
)
output_options.add_argument(
    '--history-print', '-P',
    dest='output_options_history',
    metavar='WHAT',
    help='''
    The same as --print, -p but applies only to intermediary requests/responses
    (such as redirects) when their inclusion is enabled with --all. If this
    options is not specified, then they are formatted the same way as the final
    response.
    
    from pylons import tmpl_context as c