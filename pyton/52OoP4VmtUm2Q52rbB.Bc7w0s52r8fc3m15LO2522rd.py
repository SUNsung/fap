
        
        import logging
import os
import sys
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
    
_DEFAULTS = {
    'type': {
        'default': 'normalized',
        'info': 'The type of blending to use:'
                '\n\t gaussian: Blend with Gaussian filter. Slower, but often better than '
                'Normalized'
                '\n\t normalized: Blend with Normalized box filter. Faster than Gaussian'
                '\n\t none: Don't perform blending',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['gaussian', 'normalized', 'none'],
        'gui_radio': True,
        'fixed': True,
    },
    'radius': {
        'default': 3.0,
        'info': 'Radius dictates how much blending should occur.\nThis figure is set as a '
                'percentage of the mask diameter to give the radius in pixels. Eg: for a mask '
                'with diameter 200px, a percentage of 6% would give a final radius of 3px.\n'
                'Higher percentage means more blending.',
        'datatype': float,
        'rounding': 1,
        'min_max': (0.1, 25.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'passes': {
        'default': 4,
        'info': 'The number of passes to perform. Additional passes of the blending algorithm '
                'can improve smoothing at a time cost. This is more useful for 'box' type '
                'blending.\nAdditional passes have exponentially less effect so it's not '
                'worth setting this too high.',
        'datatype': int,
        'rounding': 1,
        'min_max': (1, 8),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'erosion': {
        'default': 0.0,
        'info': 'Erosion kernel size as a percentage of the mask radius area.\nPositive '
                'values apply erosion which reduces the size of the swapped area.\nNegative '
                'values apply dilation which increases the swapped area.',
        'datatype': float,
        'rounding': 1,
        'min_max': (-100.0, 100.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
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
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def pre_encode(self, image):
        logger.trace('Pre-encoding image')
        fmt = self.format_dict.get(self.config['format'], None)
        fmt = self.config['format'].upper() if fmt is None else fmt
        encoded = BytesIO()
        rgb = [2, 1, 0]
        if image.shape[2] == 4:
            rgb.append(3)
        out_image = Image.fromarray(image[..., rgb])
        out_image.save(encoded, fmt, **self.kwargs)
        encoded.seek(0)
        return encoded
    
        return d_xs
    
        def sorted_similarity(self, predictions, method='ward'):
        ''' Sort a matrix of predictions by similarity Adapted from:
            https://gmarti.gitlab.io/ml/2017/09/07/how-to-sort-distance-matrix.html
        input:
            - predictions is a stacked matrix of vgg_face predictions shape: (x, 4096)
            - method = ['ward','single','average','complete']
        output:
            - result_order is a list of indices with the order implied by the hierarhical tree
    
            # f7u12, this does not work without extensive workaround
        data = [
            [datetime(2001, 1, 5), np.nan, datetime(2001, 1, 2)],
            [datetime(2000, 1, 2), datetime(2000, 1, 3), datetime(2000, 1, 1)],
        ]
        df = DataFrame(data)
    
            smaller_frame = frame.dropna()
        assert_series_equal(frame['foo'], original)
        inp_frame1.dropna(inplace=True)
    
    
def test_constructor_nonhashable_names():
    # GH 20527
    levels = [[1, 2], ['one', 'two']]
    codes = [[0, 0, 1, 1], [0, 1, 0, 1]]
    names = (['foo'], ['bar'])
    msg = r'MultiIndex\.name must be a hashable type'
    with pytest.raises(TypeError, match=msg):
        MultiIndex(levels=levels, codes=codes, names=names)
    
            result = idx.shift(np.array([1, -2, 3, -4]))
        expected = PeriodIndex(
            ['2011-02', '2010-12', 'NaT', '2010-12'], freq='M', name='idx'
        )
        tm.assert_index_equal(result, expected)
    
        def __call__(self, text, **kargs):
        words = jieba.tokenize(text, mode='search')
        token = Token()
        for (w, start_pos, stop_pos) in words:
            if not accepted_chars.match(w) and len(w) <= 1:
                continue
            token.original = token.text = w
            token.pos = start_pos
            token.startchar = start_pos
            token.endchar = stop_pos
            yield token
    
            prev_states_expect_next = set(
            (y for x in prev_states for y in trans_p[x].keys()))
        obs_states = set(
            states.get(obs[t], all_states)) & prev_states_expect_next
    
    file_name = args[0]
    
    count_vect = CountVectorizer()
docs = []
    
        def testTokenize_NOHMM(self):
        for content in test_contents:
            result = jieba.tokenize(content,HMM=False)
            assert isinstance(result, types.GeneratorType), 'Test Tokenize Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Tokenize error on content: %s' % content
            for tk in result:
                print('word %s\t\t start: %d \t\t end:%d' % (tk[0],tk[1],tk[2]), file=sys.stderr)
        print('testTokenize_NOHMM', file=sys.stderr)