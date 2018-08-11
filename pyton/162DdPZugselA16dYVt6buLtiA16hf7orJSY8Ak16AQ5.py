
        
            def remove_from_tail(self):
        pass
    
        def can_fit_in_spot(self, spot):
        return True
    
        def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
    
class Person(object):
    
        def __init__(self, msg, with_headers=True, with_body=True,
                 on_body_chunk_downloaded=None):
        '''
        :param msg: a :class:`models.HTTPMessage` subclass
        :param with_headers: if `True`, headers will be included
        :param with_body: if `True`, body will be included
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
    
@pytest.mark.parametrize('ssl_version', SSL_VERSION_ARG_MAPPING.keys())
def test_ssl_version(httpbin_secure, ssl_version):
    try:
        r = http(
            '--ssl', ssl_version,
            httpbin_secure + '/get'
        )
        assert HTTP_OK in r
    except SSLError as e:
        if ssl_version == 'ssl3':
            # pytest-httpbin doesn't support ssl3
            assert 'SSLV3_ALERT_HANDSHAKE_FAILURE' in str(e)
        else:
            raise
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
                c_bar = plt.bar(xvals, build_time[alg] - bottom,
                            width, bottom, color='r')
            q_bar = plt.bar(xvals, query_time[alg],
                            width, build_time[alg], color='b')
    
        print('============================================')
    print('Warning: this is going to take a looong time')
    print('============================================')
    
    REVISION_CMD = 'git rev-parse --short HEAD'
    
        text_lang_folder = os.path.join(text_folder, lang)
    if not os.path.exists(text_lang_folder):
        os.makedirs(text_lang_folder)
    
    First example
-------------
The first example illustrates how robust covariance estimation can help
concentrating on a relevant cluster when another one exists. Here, many
observations are confounded into one and break down the empirical covariance
estimation.
Of course, some screening tools would have pointed out the presence of two
clusters (Support Vector Machines, Gaussian Mixture Models, univariate
outlier detection, ...). But had it been a high-dimensional example, none
of these could be applied that easily.
    
        def set_surface(self, surface):
        self.surface = surface
    
    acc_clf1, acc_clf2 = [], []
n_features_range = range(1, n_features_max + 1, step)
for n_features in n_features_range:
    score_clf1, score_clf2 = 0, 0
    for _ in range(n_averages):
        X, y = generate_data(n_train, n_features)
    
        LOGIN_ERROR = HTTPError('401 Client Error: Unauthorized for url: ...')
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        @staticmethod
    def _compute_record_name(domain, full_record_name):
        # The domain, from DigitalOcean's point of view, is automatically appended.
        return full_record_name.rpartition('.' + domain.name)[0]

    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
    
# -- Options for manual page output ---------------------------------------
    
        PATTERN = '''import_from< 'from' module_name='__future__' 'import' any >'''
    
    
class AuthLogoutHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    def get(self):
        self.clear_cookie('fbdemo_user')
        self.redirect(self.get_argument('next', '/'))
    
    
def run():
    io_loop = IOLoop(make_current=True)
    app = Application([('/', RootHandler)])
    port = random.randrange(options.min_port, options.max_port)
    app.listen(port, address='127.0.0.1')
    signal.signal(signal.SIGCHLD, handle_sigchld)
    args = ['ab']
    args.extend(['-n', str(options.n)])
    args.extend(['-c', str(options.c)])
    if options.keepalive:
        args.append('-k')
    if options.quiet:
        # just stops the progress messages printed to stderr
        args.append('-q')
    args.append('http://127.0.0.1:%d/' % port)
    subprocess.Popen(args)
    io_loop.start()
    io_loop.close()
    io_loop.clear_current()
    
        logging.warning('Starting fetch with simple client')
    simple_client = SimpleAsyncHTTPClient()
    simple_client.fetch('http://localhost:%d/' % options.port,
                        callback=callback)
    IOLoop.current().start()
    
    
def im_detect_bbox_aspect_ratio(
    model, im, aspect_ratio, box_proposals=None, hflip=False
):
    '''Computes bbox detections at the given width-relative aspect ratio.
    Returns predictions in the original image space.
    '''
    # Compute predictions on the transformed image
    im_ar = image_utils.aspect_ratio_rel(im, aspect_ratio)
    
        if upsample_heatmap:
        blob_name = 'kps_score_lowres'
    else:
        blob_name = 'kps_score'
    
        optim.build_data_parallel_model(model, _single_gpu_build_func)
    return model
    
    '''RetinaNet model heads and losses. See: https://arxiv.org/abs/1708.02002.'''