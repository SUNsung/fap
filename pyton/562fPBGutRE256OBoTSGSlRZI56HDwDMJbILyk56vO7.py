
        
                series = source.get('format')
        season_number = int_or_none(self._search_regex(
            r'staffel-(\d+)', url, 'season number', default=None))
        episode_number = int_or_none(self._search_regex(
            r'episode-(\d+)', url, 'episode number', default=None))
    
            subheading = video.get('subheading')
        if subheading:
            title += ' - %s' % subheading
    
                    for caption in asset.get('caption_metadata', []):
                    caption_url = caption.get('source_url')
                    if not caption_url:
                        continue
                    subtitles.setdefault(caption.get('language', 'en'), []).append({
                        'url': caption_url,
                        'ext': determine_ext(caption_url, 'vtt'),
                    })
            elif asset.get('type') == 'image':
                asset_location = asset.get('location')
                if not asset_location:
                    continue
                thumbnails.append({
                    'url': asset_location,
                    'width': int_or_none(asset.get('width')),
                    'height': int_or_none(asset.get('height')),
                })
        self._sort_formats(formats)
    
    secret_msg = b'Secret message goes here'
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
        def test_cache(self):
        ydl = FakeYDL({
            'cachedir': self.test_dir,
        })
        c = Cache(ydl)
        obj = {'x': 1, 'y': ['ä', '\\a', True]}
        self.assertEqual(c.load('test_cache', 'k.'), None)
        c.store('test_cache', 'k.', obj)
        self.assertEqual(c.load('test_cache', 'k2'), None)
        self.assertFalse(_is_empty(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), obj)
        self.assertEqual(c.load('test_cache', 'y'), None)
        self.assertEqual(c.load('test_cache2', 'k.'), None)
        c.remove()
        self.assertFalse(os.path.exists(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), None)
    
        def test_guess_when_method_set_but_invalid_and_item_exists(self):
        self.parser.args = argparse.Namespace()
        self.parser.args.method = 'http://example.com/'
        self.parser.args.url = 'new_item=a'
        self.parser.args.items = [
            KeyValue(
                key='old_item', value='b', sep='=', orig='old_item=b')
        ]
        self.parser.args.ignore_stdin = False
    
        Exceptions are propagated.
    
    
PACKAGES = [
    'httpie',
    'Pygments',
    'requests',
    'certifi',
    'urllib3',
    'idna',
    'chardet',
    'PySocks',
]
    
        '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
        @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
        Assumes `from __future__ import division`.
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
                ret[i, :] = i_label, i_score
    
    
def selu(x):
    '''缩放型指数线性单元'''
    alpha = 1.6732632423543772848170429916717
    scale = 1.0507009873554804934193349852946
    o = tf.nn.elu(x)
    return scale * tf.where(x > 0, o, alpha * o)

    
    References:
    https://github.com/philipperemy/keras-attention-mechanism
'''
    
        return o
    
            # u_tilde(u~): context to question attended query vectors
        u_tilde = tf.matmul(softmax(S), u)  # [N, T, d]
    
    SPLIT_LINE = '-----------'
    
    
class RFC3339Field(jose.Field):
    '''RFC3339 field encoder/decoder.
    
        def test_get_sni_addr(self):
        from certbot_apache.obj import Addr
        self.assertEqual(
            self.addr.get_sni_addr('443'), Addr.fromstring('*:443'))
        self.assertEqual(
            self.addr.get_sni_addr('225'), Addr.fromstring('*:225'))
        self.assertEqual(
            self.addr1.get_sni_addr('443'), Addr.fromstring('127.0.0.1'))
    
    
class IntegrationTestsContext(certbot_context.IntegrationTestsContext):
    '''General fixture describing a certbot-nginx integration tests context'''
    def __init__(self, request):
        super(IntegrationTestsContext, self).__init__(request)
    
        command = [
        'certbot',
        '--server', directory_url,
        '--no-verify-ssl',
        '--http-01-port', str(http_01_port),
        '--https-port', str(tls_alpn_01_port),
        '--manual-public-ip-logging-ok',
        '--config-dir', config_dir,
        '--work-dir', os.path.join(workspace, 'work'),
        '--logs-dir', os.path.join(workspace, 'logs'),
        '--non-interactive',
        '--no-redirect',
        '--agree-tos',
        '--register-unsafely-without-email',
        '--debug',
        '-vv'
    ]
    
    # Windows
if os.name == 'nt':
    import msvcrt  # pylint: disable=import-error
    
        # incorporate derivatives flowing through the checkpointed nodes
    checkpoints_sorted_lists = tf_toposort(checkpoints, within_ops=fwd_ops)
    for ts in checkpoints_sorted_lists[::-1]:
        debug_print('Processing list {}'.format(ts))
        checkpoints_other = [r for r in checkpoints if r not in ts]
        checkpoints_disconnected_other = [checkpoints_disconnected[r] for r in checkpoints_other]
    
            r_jaw = (self.landmarks[0:9], self.landmarks[17:18])
        l_jaw = (self.landmarks[8:17], self.landmarks[26:27])
        r_cheek = (self.landmarks[17:20], self.landmarks[8:9])
        l_cheek = (self.landmarks[24:27], self.landmarks[8:9])
        nose_ridge = (self.landmarks[19:25], self.landmarks[8:9],)
        r_eye = (self.landmarks[17:22],
                 self.landmarks[27:28],
                 self.landmarks[31:36],
                 self.landmarks[8:9])
        l_eye = (self.landmarks[22:27],
                 self.landmarks[27:28],
                 self.landmarks[31:36],
                 self.landmarks[8:9])
        nose = (self.landmarks[27:31], self.landmarks[31:36])
        parts = [r_jaw, l_jaw, r_cheek, l_cheek, nose_ridge, r_eye, l_eye, nose]
    
        def load_module(self, filename, module_path, plugin_type):
        ''' Load the defaults module and add defaults '''
        logger.debug('Adding defaults: (filename: %s, module_path: %s, plugin_type: %s',
                     filename, module_path, plugin_type)
        module = os.path.splitext(filename)[0]
        section = '.'.join((plugin_type, module.replace('_defaults', '')))
        logger.debug('Importing defaults module: %s.%s', module_path, module)
        mod = import_module('{}.{}'.format(module_path, module))
        self.add_section(title=section, info=mod._HELPTEXT)  # pylint:disable=protected-access
        for key, val in mod._DEFAULTS.items():  # pylint:disable=protected-access
            self.add_item(section=section, title=key, **val)
        logger.debug('Added defaults: %s', section)

    
        def set_config(self, configfile, config):
        ''' Set the config to either global config or passed in config '''
        section = '.'.join(self.__module__.split('.')[-2:])
        if config is None:
            retval = get_config(section, configfile)
        else:
            config.section = section
            retval = config.config_dict
            config.section = None
        logger.debug('Config: %s', retval)
        return retval
    
            mask = BlurMask(self.config['type'],
                        mask,
                        self.config['radius'],
                        self.config['passes']).blurred
        logger.debug('Built box mask. Shape: %s', mask.shape)
        return mask
    
        def set_config(self, configfile, config):
        ''' Set the config to either global config or passed in config '''
        section = '.'.join(self.__module__.split('.')[-2:])
        if config is None:
            logger.debug('Loading base config')
            retval = get_config(section, configfile=configfile)
        else:
            logger.debug('Loading passed in config')
            config.section = section
            retval = config.config_dict
            config.section = None
        logger.debug('Config: %s', retval)
        return retval
    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def get_save_kwargs(self):
        ''' Return the save parameters for the file format '''
        filetype = self.config['format']
        kwargs = dict()
        if filetype in ('gif', 'jpg', 'png'):
            kwargs['optimize'] = self.config['optimize']
        if filetype == 'gif':
            kwargs['interlace'] = self.config['gif_interlace']
        if filetype == 'png':
            kwargs['compress_level'] = self.config['png_compress_level']
        if filetype == 'tif':
            kwargs['compression'] = self.config['tif_compression']
        logger.debug(kwargs)
        return kwargs