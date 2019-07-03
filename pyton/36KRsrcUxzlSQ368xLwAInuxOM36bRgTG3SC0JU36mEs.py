
        
        
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
    from .theplatform import theplatform_download_by_pid
    
        print_info(site_info, title, 'm3u8', float('inf'))
    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)
    
        stream_types = [
        {'id': 'video'},
        {'id': 'audio'},
        {'id': 'slides'}
    ]
    
    
class Fixed(jose.Field):
    '''Fixed field.'''
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it
    
    
UPDATED_MOD_SSL_CONF_DIGEST = '.updated-options-ssl-apache-conf-digest.txt'
'''Name of the hash of the updated or informed mod_ssl_conf as saved in `IConfig.config_dir`.'''
    
    
Examples
--------
    
    
# -- Options for HTML output ----------------------------------------------
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
    # If false, no index is generated.
#
# html_use_index = True
    
    from packaging.version import Version
    
    
class PackValueError(PackException, ValueError):
    pass

    
    
def test_exceeding_unpacker_read_size():
    dumpf = io.BytesIO()
    
    define('port', default=8888)
define('num_chunks', default=1000)
define('chunk_size', default=2048)
    
    if os.name == 'nt':
    from tornado.platform.windows import set_close_exec
else:
    from tornado.platform.posix import set_close_exec
    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.
    
    
class GoogleLoginHandler(RequestHandler, GoogleOAuth2Mixin):
    def initialize(self, test):
        self.test = test
        self._OAUTH_REDIRECT_URI = test.get_url('/client/login')
        self._OAUTH_AUTHORIZE_URL = test.get_url('/google/oauth2/authorize')
        self._OAUTH_ACCESS_TOKEN_URL = test.get_url('/google/oauth2/token')