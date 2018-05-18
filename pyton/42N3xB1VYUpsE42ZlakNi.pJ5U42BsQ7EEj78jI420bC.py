
        
            Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
    # Dynamic inventory script which lets you use nodes discovered by Canonical's
# Landscape (http://www.ubuntu.com/management/landscape-features).
#
# Requires the `landscape_api` Python module
# See:
#   - https://landscape.canonical.com/static/doc/api/api-client-package.html
#   - https://landscape.canonical.com/static/doc/api/python-api.html
#
# Environment variables
# ---------------------
#   - `LANDSCAPE_API_URI`
#   - `LANDSCAPE_API_KEY`
#   - `LANDSCAPE_API_SECRET`
#   - `LANDSCAPE_API_SSL_CA_FILE` (optional)
    
        parser.add_argument('--job-number',
                        metavar='N',
                        action='append',
                        type=int,
                        help='limit downloads to the given job number')
    
        terminal_stderr_re = [
        re.compile(r'% ?Error: '),
        re.compile(r'^% \w+', re.M),
        re.compile(r'% ?Bad secret'),
        re.compile(r'invalid input', re.I),
        re.compile(r'(?:incomplete|ambiguous) command', re.I),
        re.compile(r'connection timed out', re.I),
        re.compile(r'[^\r\n]+ not found', re.I),
        re.compile(r''[^']' +returned error code: ?\d+'),
        re.compile(r'syntax error'),
        re.compile(r'unknown command'),
        re.compile(r'Error\[\d+\]: ', re.I),
        re.compile(r'Error:', re.I)
    ]
    
        def test_max_delay(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=60)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 60])
    
    from ..models import Model
from ..layers import Flatten
from ..layers import Dense
from ..layers import Input
from ..layers import Conv2D
from ..layers import MaxPooling2D
from ..layers import GlobalAveragePooling2D
from ..layers import GlobalMaxPooling2D
from ..engine import get_source_inputs
from ..utils import layer_utils
from ..utils.data_utils import get_file
from .. import backend as K
from .imagenet_utils import decode_predictions
from .imagenet_utils import preprocess_input
from .imagenet_utils import _obtain_input_shape
    
        # Returns
        A Keras model instance.
    
        # test stacked bidirectional layers
    model = keras.Sequential()
    model.add(keras.layers.Bidirectional(rnn(output_dim,
                                             return_sequences=True),
                                         merge_mode=mode,
                                         input_shape=(None, dim)))
    model.add(keras.layers.Bidirectional(rnn(output_dim), merge_mode=mode))
    model.compile(loss='mse', optimizer='sgd')
    model.fit(x, y, epochs=1, batch_size=1)
    
        # Load the manually-saved binary data, and make sure the model is intact.
    with h5py.File(fname, mode='r') as h5file:
        loaded_model = load_model(h5file)
        out2 = loaded_model.predict(x)
    
        filename = os.path.join(model_name, 'digits_over_latent.png')
    # display a 30x30 2D manifold of digits
    n = 30
    digit_size = 28
    figure = np.zeros((digit_size * n, digit_size * n))
    # linearly spaced coordinates corresponding to the 2D plot
    # of digit classes in the latent space
    grid_x = np.linspace(-4, 4, n)
    grid_y = np.linspace(-4, 4, n)[::-1]
    
    import numpy as np
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.preprocessing.text import Tokenizer
    
            try:
            spidercls = self.crawler_process.spider_loader.load(name)
        except KeyError:
            pass
        else:
            # if spider already exists and not --force then halt
            if not opts.force:
                print('Spider %r already exists in module:' % name)
                print('  %s' % spidercls.__module__)
                return
        template_file = self._find_template(opts.template)
        if template_file:
            self._genspider(module, name, domain, opts.template, template_file)
            if opts.edit:
                self.exitcode = os.system('scrapy edit '%s'' % name)
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
        def __init__(self, pin_json):
        img_file = pin_json['file']
        self.id = str(pin_json['pin_id'])
        self.url = urlparse.urljoin(self.host, img_file['key'])
        self.ext = img_file['type'].split('/')[-1]
    
    
    
    #----------------------------------------------------------------------
def showroom_get_roomid_by_room_url_key(room_url_key):
    '''str->str'''
    fake_headers_mobile = {
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
        'Accept-Charset': 'UTF-8,*;q=0.5',
        'Accept-Encoding': 'gzip,deflate,sdch',
        'Accept-Language': 'en-US,en;q=0.8',
        'User-Agent': 'Mozilla/5.0 (Linux; Android 4.4.2; Nexus 4 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/34.0.1847.114 Mobile Safari/537.36'
    }
    webpage_url = 'https://www.showroom-live.com/' + room_url_key
    html = get_content(webpage_url, headers = fake_headers_mobile)
    roomid = match1(html, r'room\?room_id\=(\d+)')
    assert roomid
    return roomid
    
            def accept_callback(conn, addr):
            self.server_stream = IOStream(conn)
            self.addCleanup(self.server_stream.close)
            event.set()
    
    
@unittest.skipIf(pycurl is None, 'pycurl module not present')
class CurlHTTPClientTestCase(AsyncHTTPTestCase):
    def setUp(self):
        super(CurlHTTPClientTestCase, self).setUp()
        self.http_client = self.create_client()
    
        def test_multiple_errors(self):
        with ignore_deprecation():
            def fail(message):
                raise Exception(message)
            self.io_loop.add_callback(lambda: fail('error one'))
            self.io_loop.add_callback(lambda: fail('error two'))
            # The first error gets raised; the second gets logged.
            with ExpectLog(app_log, 'multiple unhandled exceptions'):
                with self.assertRaises(Exception) as cm:
                    self.wait()
            self.assertEqual(str(cm.exception), 'error one')
    
    plugins = PluginLoader()
print 'PLUGINS := ' + ' '.join(plugin.name for plugin in plugins
                               if plugin.needs_static_build)
    
    def set_extension(environ, ext):
    environ['extension'] = ext
    environ['render_style'], environ['content_type'] = extension_mapping[ext]

    
        def has_gold(self, user):
        if not user:
            return False
    
        @require_oauth2_scope('mysubreddits')
    @validate(
        VUser(),
        friend_rel=VFriendOfMine('username'),
    )
    @api_doc(api_section.users, uri='/api/v1/me/friends/{username}')
    def GET_friends(self, friend_rel):
        '''Get information about a specific 'friend', such as notes.'''
        rel_view = FriendTableItem(friend_rel)
        return self.api_wrapper(FriendTableItemJsonTemplate().data(rel_view))
    
            Responds with a 120x50 `image/png` which should be displayed
        to the user.