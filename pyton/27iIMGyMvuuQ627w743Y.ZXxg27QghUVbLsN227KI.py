
        
        
class RequestStatus(Enum):
    
            The shuffle/sort step of MapReduce will then do a
        distributed sort on the keys, resulting in:
    
        def append_to_front(self, node):
        ...
    
        # Test that writing over the input data works predictably
    for mode in ['torch', 'tf']:
        x = np.random.uniform(0, 255, (2, 10, 10, 3))
        xint = x.astype('int')
        x2 = utils.preprocess_input(x, mode=mode)
        xint2 = utils.preprocess_input(xint)
        assert_allclose(x, x2)
        assert xint.astype('float').max() != xint2.max()
    # Caffe mode works differently from the others
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int')
    x2 = utils.preprocess_input(x, data_format='channels_last', mode='caffe')
    xint2 = utils.preprocess_input(xint)
    assert_allclose(x, x2[..., ::-1])
    assert xint.astype('float').max() != xint2.max()
    
    model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          verbose=1,
          validation_data=(x_test, y_test))
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    
def sparse_categorical_crossentropy(y_true, y_pred):
    return K.sparse_categorical_crossentropy(y_true, y_pred)
    
    Originally created for this issue:
https://github.com/scrapy/scrapy/issues/606
    
        def set_crawler(self, crawler):
        assert not hasattr(self, '_crawler'), 'crawler already set'
        self._crawler = crawler
    
    
def _import_file(filepath):
    abspath = os.path.abspath(filepath)
    dirname, file = os.path.split(abspath)
    fname, fext = os.path.splitext(file)
    if fext != '.py':
        raise ValueError('Not a Python source file: %s' % abspath)
    if dirname:
        sys.path = [dirname] + sys.path
    try:
        module = import_module(fname)
    finally:
        if dirname:
            sys.path.pop(0)
    return module
    
            def creatorForNetloc(self, hostname, port):
            return ScrapyClientTLSOptions(hostname.decode('ascii'), self.getContext())
    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']
    
            # XXX: Google parses at least first 100k bytes; scrapy's redirect
        # middleware parses first 4k. 4k turns out to be insufficient
        # for this middleware, and parsing 100k could be slow.
        # We use something in between (32K) by default.
        self.lookup_bytes = settings.getint('AJAXCRAWL_MAXSIZE', 32768)
    
    import logging
import numpy as np
    
        def blend(self, mask):
        ''' Blur mask if requested '''
        logger.trace('Blending mask')
        mask = BlurMask(self.config['type'],
                        mask,
                        self.config['radius'],
                        self.config['passes']).blurred
        return mask

    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
            # Check that ref_vid is a video when it needs to be
        if self.args.action in self._actions_req_ref_video:
            if self.ref_vid.is_type('none'):
                raise ValueError('The file chosen as the reference video is '
                                 'not a video, either leave the field blank '
                                 'or type 'None': '
                                 '{}'.format(self.ref_vid.path))
        elif self.args.action in self._actions_can_use_ref_video:
            if self.ref_vid.is_type('none'):
                logger.warning('Warning: no reference video was supplied, even though '
                               'one may be used with the chosen action. If this is '
                               'intentional then ignore this warning.')
    
        def draw_black_image(self):
        ''' Change image to black at correct dimensions '''
        logger.trace('Drawing black image')
        height, width = self.image.shape[:2]
        self.image = np.zeros((height, width, 3), np.uint8)