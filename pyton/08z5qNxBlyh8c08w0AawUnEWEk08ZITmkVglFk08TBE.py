
        
        
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
def test_unicode_raw_json_item_verbose(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
    
def test_compress_skip_negative_ratio(httpbin_both):
    r = http(
        '--compress',
        httpbin_both + '/post',
        'foo=bar',
    )
    assert HTTP_OK in r
    assert 'Content-Encoding' not in r.json['headers']
    assert r.json['json'] == {'foo': 'bar'}
    
    
def get_package_meta(package_name):
    api_url = f'https://pypi.python.org/pypi/{package_name}/json'
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
        raise RuntimeError(f'{package_name}: download not found: {resp}')
    
        @staticmethod
    def get_converter(mime: str) -> Optional[ConverterPlugin]:
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        # Optional short description. Will be be shown in the help
    # under --auth-type.
    description = None
    
            account_number = match1(html, r'data-account='(\d+)'')
    
            if self.tree.find('result').text != '1':
            log.wtf('API result says failed!')
            raise 
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
    from ..common import *
import json
    
        def prepare(self, **kwargs):
        if re.search(r'imgur\.com/a/', self.url):
            # album
            content = get_content(self.url)
            album = match1(content, r'album\s*:\s*({.*}),') or \
                    match1(content, r'image\s*:\s*({.*}),')
            album = json.loads(album)
            count = album['album_images']['count']
            images = album['album_images']['images']
            ext = images[0]['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (i['hash'], ext)
                            for i in images],
                    'size': sum([i['size'] for i in images]),
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (i['hash'], '.jpg')
                            for i in images],
                    'container': 'jpg'
                }
            }
            self.title = album['title']
    
        def test_selector(self):
        # Selector
        self.check_tokenize('import sys, time\nx = sys.modules['time'].time()', '''\
    NAME       'import'      (1, 0) (1, 6)
    NAME       'sys'         (1, 7) (1, 10)
    OP         ','           (1, 10) (1, 11)
    NAME       'time'        (1, 12) (1, 16)
    NEWLINE    '\\n'          (1, 16) (1, 17)
    NAME       'x'           (2, 0) (2, 1)
    OP         '='           (2, 2) (2, 3)
    NAME       'sys'         (2, 4) (2, 7)
    OP         '.'           (2, 7) (2, 8)
    NAME       'modules'     (2, 8) (2, 15)
    OP         '['           (2, 15) (2, 16)
    STRING     ''time''      (2, 16) (2, 22)
    OP         ']'           (2, 22) (2, 23)
    OP         '.'           (2, 23) (2, 24)
    NAME       'time'        (2, 24) (2, 28)
    OP         '('           (2, 28) (2, 29)
    OP         ')'           (2, 29) (2, 30)
    ''')
    
        class CPicklerHookTests(AbstractHookTests):
        class CustomCPicklerClass(_pickle.Pickler, AbstractCustomPicklerClass):
            pass
        pickler_class = CustomCPicklerClass
    
    # split_quoted ()
    
        if os.name != 'posix' or not hasattr(os, 'uname'):
        # XXX what about the architecture? NT is Intel or Alpha
        return sys.platform
    
        # OpenSSL fails to build with Xcode 2.5 (on OS X 10.4).
    # If we are building on a 10.4.x or earlier system,
    # unilaterally disable assembly code building to avoid the problem.
    no_asm = int(platform.release().split('.')[0]) < 9
    
    '''
    
    # line 39
def manyargs(arg1, arg2,
arg3, arg4): pass
    
    
def softmax(x, axis=-1):
    '''
    Examples:
        n_dim = x.get_shape().ndims
        assert n_dim >= 2
    
                with tf.Session() as sess:
                tf.global_variables_initializer().run()
                o_val = o.eval()
            ```
    '''
    n_input = int(x.get_shape()[-1])
    if n_step is None:
        n_step = int(x.get_shape()[-2])  # 这种写法，不兼容 keras.layers.LSTM，此时需要手工传入 n_step
    
    References:
    tensorlayer.layers.DenseLayer
    keras.layers.Dense
'''
import tensorflow as tf
    
    from gym import utils
from gym.envs.toy_text import discrete
    
        def reset_model(self):
        c = 0.01
        self.set_state(
            self.init_qpos + self.np_random.uniform(low=-c, high=c, size=self.model.nq),
            self.init_qvel + self.np_random.uniform(low=-c, high=c, size=self.model.nv,)
        )
        return self._get_obs()
    
    def error(msg, *args):
    if MIN_LEVEL <= ERROR:
        print(colorize('%s: %s'%('ERROR', msg % args), 'red'))
    
    An episode ends when:
    - The agent writes the full target string to the output tape.
    - The agent writes an incorrect character.
    - The agent runs out the time limit. (Which is fairly conservative.)
    
            if self.viewer is None:
            self.viewer = rendering.Viewer(500,500)
            bound = self.LINK_LENGTH_1 + self.LINK_LENGTH_2 + 0.2  # 2.2 for default
            self.viewer.set_bounds(-bound,bound,-bound,bound)
    
        def reset(self):
        self.digit_x = self.np_random.randint(low=FIELD_W//5, high=FIELD_W//5*4)
        self.digit_y = self.np_random.randint(low=FIELD_H//5, high=FIELD_H//5*4)
        self.color_bg = self.random_color() if self.use_random_colors else color_black
        self.step_n = 0
        while 1:
            self.color_digit = self.random_color() if self.use_random_colors else color_white
            if np.linalg.norm(self.color_digit - self.color_bg) < 50: continue
            break
        self.digit = -1
        return self.step(0)[0]
    
        if env.continuous:
        a = np.array( [hover_todo*20 - 1, -angle_todo*20] )
        a = np.clip(a, -1, +1)
    else:
        a = 0
        if hover_todo > np.abs(angle_todo) and hover_todo > 0.05: a = 2
        elif angle_todo < -0.05: a = 3
        elif angle_todo > +0.05: a = 1
    return a