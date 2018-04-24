
        
            def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return HTTPBasicAuth(username, password)
    
        def __getattr__(self, item):
        return self[item]
    
    
def load_json_preserve_order(s):
    return json.loads(s, object_pairs_hook=OrderedDict)
    
    from httpie.compat import urlsplit
from httpie.config import BaseConfigDict, DEFAULT_CONFIG_DIR
from httpie.plugins import plugin_manager
    
    
class MissingNonceTest(unittest.TestCase):
    '''Tests for acme.errors.MissingNonce.'''
    
    # If true, keep warnings as 'system message' paragraphs in the built documents.
#keep_warnings = False
    
    
def huaban_download_board(url, output_dir, **kwargs):
    kwargs['merge'] = False
    board = extract_board_data(url)
    output_dir = os.path.join(output_dir, board.title)
    print_info(site_info, board.title, 'jpg', float('Inf'))
    for pin in board.pins:
        download_urls([pin.url], pin.id, pin.ext, float('Inf'),
                      output_dir=output_dir, faker=True, **kwargs)
    
    site = Infoq()
download = site.download_by_url
download_playlist = site.download_by_url

    
            self.title = match1(content,
                            r'setup\[\'title\'\] = '([^']+)';')
    
    import os
import mimetypes
    
        def current_loid_obj(self):
        return self.stacked_proxy_safe_get(c, 'loid')
    
    
class APIv1GoldController(OAuth2OnlyController):
    def _gift_using_creddits(self, recipient, months=1, thing_fullname=None,
            proxying_for=None):
        with creddits_lock(c.user):
            if not c.user.employee and c.user.gold_creddits < months:
                err = RedditError('INSUFFICIENT_CREDDITS')
                self.on_validation_error(err)