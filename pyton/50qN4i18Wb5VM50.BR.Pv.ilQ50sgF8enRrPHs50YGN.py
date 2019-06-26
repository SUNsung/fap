
        
        
def testFixnum():
    check(b'\x92\x93\x00\x40\x7f\x93\xe0\xf0\xff', ((0,
                                                     64,
                                                     127, ),
                                                    (-32,
                                                     -16,
                                                     -1, ), ))
    
        for i, filename in enumerate(files, 1):
        out = str(dest.joinpath(filename))
        link = urllib.request.urljoin(base, filename)
        urllib.request.urlretrieve(link, out)
        print('Downloaded {link} to {out} [{i}/{N}]'.format(
            link=link, out=out, i=i, N=N
        ))
    
    
@pytest.mark.parametrize('ties_method', [
    'average', 'min', 'max', 'first', 'dense'])
@pytest.mark.parametrize('ascending', [True, False])
@pytest.mark.parametrize('na_option', ['keep', 'top', 'bottom'])
@pytest.mark.parametrize('pct', [True, False])
@pytest.mark.parametrize('vals', [
    ['bar', 'bar', 'foo', 'bar', 'baz'],
    ['bar', np.nan, 'foo', np.nan, 'baz']
])
def test_rank_object_raises(ties_method, ascending, na_option,
                            pct, vals):
    df = DataFrame({'key': ['foo'] * 5, 'val': vals})
    
    Libraries are expected to implement a few pytest fixtures to provide data
for the tests. The fixtures may be located in either
    
        ('border-top-style: dotted',
     {'border': {'top': {'style': 'mediumDashDotDot'}}}),
    ('border-top-style: dotted; border-top-width: thin',
     {'border': {'top': {'style': 'dotted'}}}),
    ('border-top-style: dashed',
     {'border': {'top': {'style': 'mediumDashed'}}}),
    ('border-top-style: dashed; border-top-width: thin',
     {'border': {'top': {'style': 'dashed'}}}),
    ('border-top-style: double',
     {'border': {'top': {'style': 'double'}}}),
    # - color
    ('border-style: solid; border-color: #0000ff',
     {'border': {'top': {'style': 'medium', 'color': '0000FF'},
                 'right': {'style': 'medium', 'color': '0000FF'},
                 'bottom': {'style': 'medium', 'color': '0000FF'},
                 'left': {'style': 'medium', 'color': '0000FF'}}}),
    ('border-top-style: double; border-top-color: blue',
     {'border': {'top': {'style': 'double', 'color': '0000FF'}}}),
    ('border-top-style: solid; border-top-color: #06c',
     {'border': {'top': {'style': 'medium', 'color': '0066CC'}}}),
    # ALIGNMENT
    # - horizontal
    ('text-align: center',
     {'alignment': {'horizontal': 'center'}}),
    ('text-align: left',
     {'alignment': {'horizontal': 'left'}}),
    ('text-align: right',
     {'alignment': {'horizontal': 'right'}}),
    ('text-align: justify',
     {'alignment': {'horizontal': 'justify'}}),
    # - vertical
    ('vertical-align: top',
     {'alignment': {'vertical': 'top'}}),
    ('vertical-align: text-top',
     {'alignment': {'vertical': 'top'}}),
    ('vertical-align: middle',
     {'alignment': {'vertical': 'center'}}),
    ('vertical-align: bottom',
     {'alignment': {'vertical': 'bottom'}}),
    ('vertical-align: text-bottom',
     {'alignment': {'vertical': 'bottom'}}),
    # - wrap_text
    ('white-space: nowrap',
     {'alignment': {'wrap_text': False}}),
    ('white-space: pre',
     {'alignment': {'wrap_text': False}}),
    ('white-space: pre-line',
     {'alignment': {'wrap_text': False}}),
    ('white-space: normal',
     {'alignment': {'wrap_text': True}}),
    # NUMBER FORMAT
    ('number-format: 0%',
     {'number_format': {'format_code': '0%'}}),
])
def test_css_to_excel(css, expected):
    convert = CSSToExcelConverter()
    assert expected == convert(css)
    
    
def test_bin16():
    header = b'\xc5'
    data = b'x' * 256
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 3
    assert b[0:1] == header
    assert b[1:3] == b'\x01\x00'
    assert b[3:] == data
    assert unpackb(b) == data
    
    
def test_incorrect_type_array():
    unpacker = Unpacker()
    unpacker.feed(packb(1))
    try:
        unpacker.read_array_header()
        assert 0, 'should raise exception'
    except UnexpectedTypeException:
        assert 1, 'okay'
    
        def __init__(self, image, alignments, original_roi=None):
        logger.debug('Initializing %s: (alignments: %s, original_roi: %s)',
                     self.__class__.__name__, alignments, original_roi)
        self.image = image
        self.alignments = alignments
        self.roi = original_roi
        self.colors = {1: (255, 0, 0),
                       2: (0, 255, 0),
                       3: (0, 0, 255),
                       4: (255, 255, 0),
                       5: (255, 0, 255),
                       6: (0, 255, 255)}
        logger.debug('Initialized %s', self.__class__.__name__)
    
        new_shape = shape[:3] + [int(shape[3] / (scale ** 2))]
    var_x = initializer(new_shape, dtype)
    var_x = tf.transpose(var_x, perm=[2, 0, 1, 3])
    var_x = tf.image.resize_nearest_neighbor(var_x, size=(shape[0] * scale, shape[1] * scale))
    var_x = tf.space_to_depth(var_x, block_size=scale)
    var_x = tf.transpose(var_x, perm=[1, 2, 0, 3])
    return var_x
    
            dest_format = self.get_dest_format()
        if len(self.args.alignments_file) == 1:
            retval = AlignmentData(self.args.alignments_file[0], dest_format)
        else:
            retval = [AlignmentData(a_file, dest_format) for a_file in self.args.alignments_file]
        logger.debug('Alignments: %s', retval)
        return retval
    
            logger.trace('Loaded aligned face: %s', {key: val
                                                 for key, val in self.aligned.items()
                                                 if key != 'face'})