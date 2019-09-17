
        
        
class BitChuteIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?bitchute\.com/(?:video|embed|torrent/[^/]+)/(?P<id>[^/?#&]+)'
    _TESTS = [{
        'url': 'https://www.bitchute.com/video/szoMrox2JEI/',
        'md5': '66c4a70e6bfc40dcb6be3eb1d74939eb',
        'info_dict': {
            'id': 'szoMrox2JEI',
            'ext': 'mp4',
            'title': 'Fuck bitches get money',
            'description': 'md5:3f21f6fb5b1d17c3dee9cf6b5fe60b3a',
            'thumbnail': r're:^https?://.*\.jpg$',
            'uploader': 'Victoria X Rave',
        },
    }, {
        'url': 'https://www.bitchute.com/embed/lbb5G1hjPhw/',
        'only_matching': True,
    }, {
        'url': 'https://www.bitchute.com/torrent/Zee5BE49045h/szoMrox2JEI.webtorrent',
        'only_matching': True,
    }]
    
            description = source.get('description')
        thumbnail = url_or_none(source.get('poster'))
        timestamp = unified_timestamp(source.get('previewStart'))
        duration = parse_duration(source.get('length'))
    
    
class SouthParkIE(MTVServicesInfoExtractor):
    IE_NAME = 'southpark.cc.com'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southpark\.cc\.com/(?:clips|(?:full-)?episodes|collections)/(?P<id>.+?)(\?|#|$))'
    
        def _real_extract(self, url):
        content_id = self._match_id(url)
        return self._extract_video_info(content_id)

    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    
def get_new_command(command):
    pgr = command.script_parts[-1]
    
    
def archlinux_env():
    if utils.which('yay'):
        pacman = 'yay'
    elif utils.which('yaourt'):
        pacman = 'yaourt'
    elif utils.which('pacman'):
        pacman = 'sudo pacman'
    else:
        return False, None
    
        def test_get_version_error(self, shell, Popen):
        Popen.return_value.stdout.read.side_effect = RuntimeError
        with pytest.raises(RuntimeError):
            shell._get_version()
        assert Popen.call_args[0][0] == ['powershell.exe', '$PSVersionTable.PSVersion']

    
        def test_get_version_error(self, shell, Popen):
        Popen.return_value.stdout.read.side_effect = OSError
        with pytest.raises(OSError):
            shell._get_version()
        assert Popen.call_args[0][0] == ['zsh', '-c', 'echo $ZSH_VERSION']

    
    
no_suggestions = '''\
az provider: error: the following arguments are required: _subcommand
usage: az provider [-h] {list,show,register,unregister,operation} ...
'''
    
        return app

    
        def check(self, value):
        return (
            isinstance(value, dict)
            and len(value) == 1
            and next(iter(value)) in self.serializer.tags
        )
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
                # Since we have to open a new request context for the session
            # handling we want to make sure that we hide out own context
            # from the caller.  By pushing the original request context
            # (or None) on top of this and popping it we get exactly that
            # behavior.  It's important to not use the push and pop
            # methods of the actual request context object since that would
            # mean that cleanup handlers are called
            _request_ctx_stack.push(outer_reqctx)
            try:
                yield sess
            finally:
                _request_ctx_stack.pop()
    
            class CounterAPI(MethodView):
            def get(self):
                return session.get('counter', 0)
    
        @property
    def blueprint(self):
        '''The name of the current blueprint'''
        if self.url_rule and '.' in self.url_rule.endpoint:
            return self.url_rule.endpoint.rsplit('.', 1)[0]
    
        @blue.route('/function')
    def blue_func_test():
        raise MyFunctionException()
    
        # SSLContext
    if sys.version_info < (2, 7, 9):
        ssl_context = object()
    else:
        ssl_context = ssl.SSLContext(ssl.PROTOCOL_SSLv23)
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
    
# XXX: move it to w3lib?
_ajax_crawlable_re = re.compile(six.u(r'<meta\s+name=['\']fragment['\']\s+content=['\']!['\']/?>'))
def _has_ajaxcrawlable_meta(text):
    '''
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment'  content='!'/></head><body></body></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment' content='!'></head></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><!--<meta name='fragment'  content='!'/>--></head><body></body></html>')
    False
    >>> _has_ajaxcrawlable_meta('<html></html>')
    False
    '''
    
        def __init__(self):
        self._formats = {
            'tar': self._is_tar,
            'zip': self._is_zip,
            'gz': self._is_gzip,
            'bz2': self._is_bzip2
        }
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings.getfloat('DOWNLOAD_TIMEOUT'))
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
            return response
    
        Args:
        x(tf.Tensor):
        n_unit_ls(list of int):
        act_fn:
        name(str):
    '''
    # n_layer = len(n_unit_list)
    name = name or 'dense'
    for i, n_unit in enumerate(n_unit_ls):
        x = dense(x, n_unit, act_fn=act_fn, name='{}-{}'.format(name, i))
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
    This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
'''
    
        # check that we have some nodes to checkpoint
    if not checkpoints:
        raise Exception('no checkpoints nodes found or given as input! ')
    
                    var_x = K.reshape(inputs, (batch_size,
                                           height,
                                           width,
                                           self.group,
                                           channels // self.group))
                mean = K.mean(var_x, axis=[1, 2, 4], keepdims=True)
                std = K.sqrt(K.var(var_x, axis=[1, 2, 4], keepdims=True) + self.epsilon)
                var_x = (var_x - mean) / std
    
            the output mask will be <mask_type>.mask
        channels: 1, 3 or 4:
                    1 - Returns a single channel mask
                    3 - Returns a 3 channel mask
                    4 - Returns the original image with the mask in the alpha channel '''
    
        def set_defaults(self):
        ''' Set the default values for config '''
        logger.debug('Setting defaults')
        current_dir = os.path.dirname(__file__)
        for dirpath, _, filenames in os.walk(current_dir):
            default_files = [fname for fname in filenames if fname.endswith('_defaults.py')]
            if not default_files:
                continue
            base_path = os.path.dirname(os.path.realpath(sys.argv[0]))
            import_path = '.'.join(full_path_split(dirpath.replace(base_path, ''))[1:])
            plugin_type = import_path.split('.')[-1]
            for filename in default_files:
                self.load_module(filename, import_path, plugin_type)
    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
            insertion = np.rint(new_face[y_crop, x_crop] * 255.0).astype('uint8')
        insertion_mask = np.rint(raw_mask[y_crop, x_crop] * 255.0).astype('uint8')
        insertion_mask[insertion_mask != 0] = 255
        prior = np.rint(np.pad(old_face * 255.0,
                               ((height, height), (width, width), (0, 0)),
                               'constant')).astype('uint8')