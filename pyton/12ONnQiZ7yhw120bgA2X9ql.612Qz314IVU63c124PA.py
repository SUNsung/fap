
        
            def get_erosion_kernel(self, mask):
        ''' Get the erosion kernel '''
        erosion_ratio = self.config['erosion'] / 100
        mask_radius = np.sqrt(np.sum(mask)) / 2
        kernel_size = max(1, int(abs(erosion_ratio * mask_radius)))
        erosion_kernel = cv2.getStructuringElement(  # pylint: disable=no-member
            cv2.MORPH_ELLIPSE,  # pylint: disable=no-member
            (kernel_size, kernel_size))
        logger.trace('erosion_kernel shape: %s', erosion_kernel.shape)
        return erosion_kernel
    
    
class Adjustment():
    ''' Parent class for scaling adjustments '''
    def __init__(self, configfile=None, config=None):
        logger.debug('Initializing %s: (configfile: %s, config: %s)',
                     self.__class__.__name__, configfile, config)
        self.config = self.set_config(configfile, config)
        logger.debug('config: %s', self.config)
        logger.debug('Initialized %s', self.__class__.__name__)
    
        def build(self, input_shape):
        self.input_spec = [InputSpec(shape=input_shape)]
        shape = [1 for _ in input_shape]
        if self.data_format == 'channels_last':
            channel_axis = -1
            shape[channel_axis] = input_shape[channel_axis]
        elif self.data_format == 'channels_first':
            channel_axis = 1
            shape[channel_axis] = input_shape[channel_axis]
        # for i in self.axis:
        #    shape[i] = input_shape[i]
        self.gamma = self.add_weight(shape=shape,
                                     initializer=self.gamma_init,
                                     regularizer=self.gamma_regularizer,
                                     name='gamma')
        self.beta = self.add_weight(shape=shape,
                                    initializer=self.beta_init,
                                    regularizer=self.beta_regularizer,
                                    name='beta')
        self.built = True
    
    
class Color(Adjustment):
    ''' Seamless clone the swapped face into the old face with cv2
        NB: This probably isn't the best place for this, but it doesn't work well and
        and does not have a natural home, so here for now.
    '''
    
    
# ----------------------------------------------------------------------------
# period_array
    
            df = DataFrame({'A': [2.0, 1, datetime(2006, 1, 1), None]})
        result = df['A']
        expected = Series(
            np.asarray([2.0, 1, datetime(2006, 1, 1), None], np.object_), name='A'
        )
        assert_series_equal(result, expected)
    
        def test_dtypes_gh8722(self, float_string_frame):
        float_string_frame['bool'] = float_string_frame['A'] > 0
        result = float_string_frame.dtypes
        expected = Series(
            {k: v.dtype for k, v in float_string_frame.items()}, index=result.index
        )
        assert_series_equal(result, expected)
    
        def test_interp_inplace(self):
        df = DataFrame({'a': [1.0, 2.0, np.nan, 4.0]})
        expected = DataFrame({'a': [1.0, 2.0, 3.0, 4.0]})
        result = df.copy()
        result['a'].interpolate(inplace=True)
        assert_frame_equal(result, expected)
    
            # sort descending with na first
        result = df.sort_values(
            by=column_name, ascending=False, na_position=na_position_first
        )
        expected = DataFrame(
            {
                column_name: Categorical(
                    list_of_nans + reversed_categories,
                    categories=categories,
                    ordered=True,
                )
            },
            index=reversed_na_indices + reversed_category_indices,
        )
    
        major_codes = np.array([0, 0, 1, 2, 3, 3])
    minor_codes = np.array([0, 1, 0, 1, 0, 1])
    
            rng7 = pd.period_range('2003-01-01', freq='A', periods=5)
        other7 = pd.period_range('1998-01-01', freq='A', periods=8)
        expected7 = pd.PeriodIndex(
            [
                '2003',
                '2004',
                '2005',
                '2006',
                '2007',
                '1998',
                '1999',
                '2000',
                '2001',
                '2002',
            ],
            freq='A',
        )
    
            with pd.option_context('display.width', 300):
            for idx, expected in zip(
                [idx1, idx2, idx3, idx4, idx5], [exp1, exp2, exp3, exp4, exp5]
            ):
                result = repr(pd.Series(idx))
                assert result == expected
    
            def connection_ready(sock, fd, events):
            while True:
                try:
                    connection, address = sock.accept()
                except BlockingIOError:
                    return
                connection.setblocking(0)
                io_loop = tornado.ioloop.IOLoop.current()
                io_loop.spawn_callback(handle_connection, connection, address)