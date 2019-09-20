
        
                video_info = self._download_json(
            'http://feeds.cbsn.cbsnews.com/rundown/story', display_id, query={
                'device': 'desktop',
                'dvr_slug': display_id,
            })
    
        def _real_extract(self, url):
        show_id, season_id, video_id = re.match(self._VALID_URL, url).groups()
        response = self._download_json(
            'https://www.vvvvid.it/vvvvid/ondemand/%s/season/%s' % (show_id, season_id),
            video_id, headers=self.geo_verification_headers(), query={
                'conn_id': self._conn_id,
            })
        if response['result'] == 'error':
            raise ExtractorError('%s said: %s' % (
                self.IE_NAME, response['message']), expected=True)
    
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
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        infile, outfile = args
    
    ie_template = '''
class {name}({bases}):
    _VALID_URL = {valid_url!r}
    _module = '{module}'
'''
    
        template = template.replace('{{fileopts}}', '|'.join(fileopts))
    template = template.replace('{{diropts}}', '|'.join(diropts))
    template = template.replace('{{flags}}', ' '.join(flags))
    
    
PY36_PLUS = (sys.version_info.major >= 3) and (sys.version_info.minor >= 6)
    
            self.mwman._add_middleware(InvalidProcessResponseMiddleware())
        download_func = mock.MagicMock()
        dfd = self.mwman.download(download_func, req, self.spider)
        results = []
        dfd.addBoth(results.append)
        self.assertIsInstance(results[0], Failure)
        self.assertIsInstance(results[0].value, _InvalidOutput)
    
    class DontCloseSpider(Exception):
    '''Request the spider not to be closed yet'''
    pass
    
        @defer.inlineCallbacks
    def test_generator_output_chain(self):
        '''
        (4) An exception from a middleware's process_spider_output method should be sent
        to the process_spider_exception method from the next middleware in the chain.
        The result of the recovery by the process_spider_exception method should be handled
        by the process_spider_output method from the next middleware.
        The final item count should be 2 (one from the spider callback and one from the
        process_spider_exception chain)
        '''
        log4 = yield self.crawl_log(GeneratorOutputChainSpider)
        self.assertIn(''item_scraped_count': 2', str(log4))
        self.assertIn('GeneratorRecoverMiddleware.process_spider_exception: LookupError caught', str(log4))
        self.assertIn('GeneratorDoNothingAfterFailureMiddleware.process_spider_exception: LookupError caught', str(log4))
        self.assertNotIn('GeneratorFailMiddleware.process_spider_exception: LookupError caught', str(log4))
        self.assertNotIn('GeneratorDoNothingAfterRecoveryMiddleware.process_spider_exception: LookupError caught', str(log4))
        item_from_callback = {'processed': [
            'parse-first-item',
            'GeneratorFailMiddleware.process_spider_output',
            'GeneratorDoNothingAfterFailureMiddleware.process_spider_output',
            'GeneratorRecoverMiddleware.process_spider_output',
            'GeneratorDoNothingAfterRecoveryMiddleware.process_spider_output']}
        item_recovered = {'processed': [
            'GeneratorRecoverMiddleware.process_spider_exception',
            'GeneratorDoNothingAfterRecoveryMiddleware.process_spider_output']}
        self.assertIn(str(item_from_callback), str(log4))
        self.assertIn(str(item_recovered), str(log4))
        self.assertNotIn('parse-second-item', str(log4))
    
        def extract_links(self, response):
        # wrapper needed to allow to work directly with text
        links = self._extract_links(response.body, response.url, response.encoding)
        links = self._process_links(links)
        return links
    
        formatter = logging.Formatter(
        fmt=settings.get('LOG_FORMAT'),
        datefmt=settings.get('LOG_DATEFORMAT')
    )
    handler.setFormatter(formatter)
    handler.setLevel(settings.get('LOG_LEVEL'))
    if settings.getbool('LOG_SHORT_NAMES'):
        handler.addFilter(TopLevelFormatter(['scrapy']))
    return handler
    
        @defer.inlineCallbacks
    def test_redirect(self):
        _, out, _ = yield self.execute([self.url('/redirect'), '-c', 'response.url'])
        assert out.strip().endswith(b'/redirected')
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
        # tokens_list = get_all_subset(tokens)
    # for tokens in tokens_list:
    #     ret[tokens] = search_tokens(tokens, inverse_index, word_freq)
    
    
def elu(x):
    '''指数线性单元'''
    return tf.nn.elu(x)
    
        Args:
        x:
        c_embed_size:
        share_cnn_weights:
        name:
        reuse:
    
        with tf.variable_scope(name or 'attention_flow', reuse=reuse):
        h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])  # [N, T, J, d]
        u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])  # [N, T, J, d]
        hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
        h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
        W_s = get_w([3 * d, 1])  # [3d, 1]
    
        def get_mask(self, detected_face, predicted_mask):
        ''' Return the mask from lib/model/masks and intersect with box '''
        if self.mask_type == 'none':
            # Return a dummy mask if not using a mask
            mask = np.ones_like(self.dummy[:, :, 1])
        elif self.mask_type == 'predicted':
            mask = predicted_mask
        else:
            landmarks = detected_face.reference_landmarks
            mask = getattr(model_masks, self.mask_type)(landmarks, self.dummy, channels=1).mask
        np.nan_to_num(mask, copy=False)
        np.clip(mask, 0.0, 1.0, out=mask)
        return mask
    
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
    
        def call(self, inputs, mask=None):
        input_shape = K.int_shape(inputs)
        if len(input_shape) != 4 and len(input_shape) != 2:
            raise ValueError('Inputs should have rank ' +
                             str(4) + ' or ' + str(2) +
                             '; Received input shape:', str(input_shape))
    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
        @classmethod
    def unmarshal(cls, input_string):
        return json.loads(input_string)