
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
        @property
    def id_for_label(self):
        return 'id_%s_%s' % (self.data['name'], self.data['index'])
    
    
@functools.lru_cache()
def get_default_renderer():
    renderer_class = import_string(settings.FORM_RENDERER)
    return renderer_class()
    
        data = response.content
    response_headers = response.headers
    if 'content-encoding' not in response_headers and len(response.content) < URLFETCH_DEFLATE_MAXSIZE and response_headers.get('content-type', '').startswith(('text/', 'application/json', 'application/javascript')):
        if 'gzip' in accept_encoding:
            response_headers['Content-Encoding'] = 'gzip'
            compressobj = zlib.compressobj(zlib.Z_DEFAULT_COMPRESSION, zlib.DEFLATED, -zlib.MAX_WBITS, zlib.DEF_MEM_LEVEL, 0)
            dataio = BytesIO()
            dataio.write('\x1f\x8b\x08\x00\x00\x00\x00\x00\x02\xff')
            dataio.write(compressobj.compress(data))
            dataio.write(compressobj.flush())
            dataio.write(struct.pack('<LL', zlib.crc32(data) & 0xFFFFFFFFL, len(data) & 0xFFFFFFFFL))
            data = dataio.getvalue()
        elif 'deflate' in accept_encoding:
            response_headers['Content-Encoding'] = 'deflate'
            data = zlib.compress(data)[2:-4]
    if data:
         response_headers['Content-Length'] = str(len(data))
    response_headers_data = zlib.compress('\n'.join('%s:%s' % (k.title(), v) for k, v in response_headers.items() if not k.startswith('x-google-')))[2:-4]
    if 'rc4' not in options:
        start_response('200 OK', [('Content-Type', __content_type__)])
        yield struct.pack('!hh', int(response.status_code), len(response_headers_data))+response_headers_data
        yield data
    else:
        start_response('200 OK', [('Content-Type', __content_type__), ('X-GOA-Options', 'rc4')])
        yield struct.pack('!hh', int(response.status_code), len(response_headers_data))
        yield rc4crypt(response_headers_data, __password__)
        yield rc4crypt(data, __password__)
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
            return buf.getvalue()

    
    
class FunctionPropertiesTest(FuncAttrsTest):
    # Include the external setUp method that is common to all tests
    def test_module(self):
        self.assertEqual(self.b.__module__, __name__)
    
        def test_dialog_title(self):
        '''Test about dialog title'''
        self.assertEqual(self.dialog.title(), 'About IDLE')
    
    def handleSlide(slide):
    handleSlideTitle(slide.getElementsByTagName('title')[0])
    handlePoints(slide.getElementsByTagName('point'))
    
            try:
            print(pool.map(f, list(range(10))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.map()')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
    
def testUnsignedInt():
    check(b'\x99\xcc\x00\xcc\x80\xcc\xff\xcd\x00\x00\xcd\x80\x00'
          b'\xcd\xff\xff\xce\x00\x00\x00\x00\xce\x80\x00\x00\x00'
          b'\xce\xff\xff\xff\xff',
          (0,
           128,
           255,
           0,
           32768,
           65535,
           0,
           2147483648,
           4294967295, ), )
    
    
def parse_args(args=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('version', type=str, help='Pandas version (0.23.0)')
    return parser.parse_args(args)
    
    ABCSeries = create_pandas_abc_type('ABCSeries', '_typ', ('series', ))
ABCDataFrame = create_pandas_abc_type('ABCDataFrame', '_typ', ('dataframe', ))
ABCSparseDataFrame = create_pandas_abc_type('ABCSparseDataFrame', '_subtyp',
                                            ('sparse_frame', ))
ABCPanel = create_pandas_abc_type('ABCPanel', '_typ', ('panel',))
ABCSparseSeries = create_pandas_abc_type('ABCSparseSeries', '_subtyp',
                                         ('sparse_series',
                                          'sparse_time_series'))
ABCSparseArray = create_pandas_abc_type('ABCSparseArray', '_subtyp',
                                        ('sparse_array', 'sparse_series'))
ABCCategorical = create_pandas_abc_type('ABCCategorical', '_typ',
                                        ('categorical'))
ABCDatetimeArray = create_pandas_abc_type('ABCDatetimeArray', '_typ',
                                          ('datetimearray'))
ABCTimedeltaArray = create_pandas_abc_type('ABCTimedeltaArray', '_typ',
                                           ('timedeltaarray'))
ABCPeriodArray = create_pandas_abc_type('ABCPeriodArray', '_typ',
                                        ('periodarray', ))
ABCPeriod = create_pandas_abc_type('ABCPeriod', '_typ', ('period', ))
ABCDateOffset = create_pandas_abc_type('ABCDateOffset', '_typ',
                                       ('dateoffset',))
ABCInterval = create_pandas_abc_type('ABCInterval', '_typ', ('interval', ))
ABCExtensionArray = create_pandas_abc_type('ABCExtensionArray', '_typ',
                                           ('extension',
                                            'categorical',
                                            'periodarray',
                                            'datetimearray',
                                            'timedeltaarray',
                                            ))
ABCPandasArray = create_pandas_abc_type('ABCPandasArray',
                                        '_typ',
                                        ('npy_extension',))
    
    from pandas import DataFrame, MultiIndex
from pandas.util import testing as tm
    
    
@pytest.mark.parametrize('pct,exp', [
    (False, [3., 3., 3., 3., 3.]),
    (True, [.6, .6, .6, .6, .6])])
def test_rank_resets_each_group(pct, exp):
    df = DataFrame(
        {'key': ['a', 'a', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'b'],
         'val': [1] * 10}
    )
    result = df.groupby('key').rank(pct=pct)
    exp_df = DataFrame(exp * 2, columns=['val'])
    tm.assert_frame_equal(result, exp_df)
    
    
def test_bin32():
    header = b'\xc6'
    data = b'x' * 65536
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 5
    assert b[0:1] == header
    assert b[1:5] == b'\x00\x01\x00\x00'
    assert b[5:] == data
    assert unpackb(b) == data
    
    
class TrainingDataGenerator():
    ''' Generate training data for models '''
    def __init__(self, model_input_size, model_output_size, training_opts):
        logger.debug('Initializing %s: (model_input_size: %s, model_output_shape: %s, '
                     'training_opts: %s, landmarks: %s)',
                     self.__class__.__name__, model_input_size, model_output_size,
                     {key: val for key, val in training_opts.items() if key != 'landmarks'},
                     bool(training_opts.get('landmarks', None)))
        self.batchsize = 0
        self.model_input_size = model_input_size
        self.model_output_size = model_output_size
        self.training_opts = training_opts
        self.mask_class = self.set_mask_class()
        self.landmarks = self.training_opts.get('landmarks', None)
        self._nearest_landmarks = None
        self.processing = ImageManipulation(model_input_size,
                                            model_output_size,
                                            training_opts.get('coverage_ratio', 0.625))
        logger.debug('Initialized %s', self.__class__.__name__)
    
        def run(self, old_face, new_face, raw_mask):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing color adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(old_face, new_face, raw_mask)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed color adjustment')
        return new_face

    
            return blended.astype('float32') / 255.0

    
        def process(self, detected_face, predicted_mask=None):
        ''' Return mask and perform processing '''
        mask = self.get_mask(detected_face, predicted_mask)
        raw_mask = mask.copy()
        if not self.skip and self.do_erode:
            mask = self.erode(mask)
        if not self.skip and self.do_blend:
            mask = self.blend(mask)
        raw_mask = np.expand_dims(raw_mask, axis=-1) if raw_mask.ndim != 3 else raw_mask
        mask = np.expand_dims(mask, axis=-1) if mask.ndim != 3 else mask
        logger.trace('mask shape: %s, raw_mask shape: %s', mask.shape, raw_mask.shape)
        return mask, raw_mask
    
        def process(self, new_face):
        ''' Override for specific scaling adjustment process '''
        raise NotImplementedError
    
    
class Config(FaceswapConfig):
    ''' Config File for Models '''
    # pylint: disable=too-many-statements
    def set_defaults(self):
        ''' Set the default values for config '''
        logger.debug('Setting defaults')
        # << GLOBAL OPTIONS >> #
        section = 'global'
        self.add_section(title=section,
                         info='Options that apply to all models' + ADDITIONAL_INFO)
        self.add_item(
            section=section, title='icnr_init', datatype=bool, default=False,
            info='Use ICNR Kernel Initializer for upscaling.\nThis can help reduce the '
                 ''checkerboard effect' when upscaling the image.')
        self.add_item(
            section=section, title='subpixel_upscaling', datatype=bool, default=False,
            info='Use subpixel upscaling rather than pixel shuffler.\n'
                 'Might increase speed at cost of VRAM')
        self.add_item(
            section=section, title='reflect_padding', datatype=bool, default=False,
            info='Use reflect padding rather than zero padding. Only enable this option if the '
                 'model you are training has a distinct line appearing around the edge of the '
                 'swap area.')
        self.add_item(
            section=section, title='dssim_loss', datatype=bool, default=True,
            info='Use DSSIM for Loss rather than Mean Absolute Error\n'
                 'May increase overall quality.')
        self.add_item(
            section=section, title='penalized_mask_loss', datatype=bool, default=True,
            info='If using a mask, This penalizes the loss for the masked area, to give higher '
                 'priority to the face area. \nShould increase overall quality and speed up '
                 'training. This should probably be left at True')
    
        def load_models(self, swapped):
        ''' Load models from file '''
        logger.debug('Load model: (swapped: %s)', swapped)
    
        def draw_landmarks(self, color_id=3, radius=1):
        ''' Draw the facial landmarks '''
        color = self.colors[color_id]
        for alignment in self.alignments:
            landmarks = alignment['landmarksXY']
            logger.trace('Drawing Landmarks: (landmarks: %s, color: %s, radius: %s)',
                         landmarks, color, radius)
            for (pos_x, pos_y) in landmarks:
                cv2.circle(self.image,  # pylint: disable=no-member
                           (pos_x, pos_y),
                           radius,
                           color,
                           -1)