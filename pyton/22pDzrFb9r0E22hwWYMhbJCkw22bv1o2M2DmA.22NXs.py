
        
        
class CallableChoiceIterator:
    def __init__(self, choices_func):
        self.choices_func = choices_func
    
        def as_postgresql(self, compiler, connection, **extra_context):
        # Cast FloatField to DecimalField as PostgreSQL doesn't support the
        # following function signatures:
        # - LOG(double, double)
        # - MOD(double, double)
        output_field = DecimalField(decimal_places=sys.float_info.dig, max_digits=1000)
        clone = self.copy()
        clone.set_source_expressions([
            Cast(expression, output_field) if isinstance(expression.output_field, FloatField)
            else expression for expression in self.get_source_expressions()
        ])
        return clone.as_sql(compiler, connection, **extra_context)
    
        def test_filtered_aggregate_ref_annotation(self):
        aggs = Author.objects.annotate(
            double_age=F('age') * 2,
        ).aggregate(
            cnt=Count('pk', filter=Q(double_age__gt=100)),
        )
        self.assertEqual(aggs['cnt'], 2)
    
        def test_version_dev_tuple(self):
        expect = ('1.2.3dev', 1, 2, 3)
        ops = FakePostGISOperations(expect[0])
        actual = ops.postgis_version_tuple()
        self.assertEqual(expect, actual)
    
        # Copy any attributes that a decorator adds to the function it decorates.
    for dec in decorators:
        _update_method_wrapper(_wrapper, dec)
    # Preserve any existing attributes of 'method', including the name.
    update_wrapper(_wrapper, method)
    return _wrapper
    
            # Making sure we get a valid pointer to the OGR Driver
        if not driver:
            raise GDALException('Could not initialize GDAL/OGR Driver on input: %s' % dr_input)
        self.ptr = driver
    
            if size[0] > self.width or size[1] > self.height:
            raise ValueError('Size is larger than raster.')
    
        @property
    def extent(self):
        '''
        Return the extent as a 4-tuple (xmin, ymin, xmax, ymax).
        '''
        # Calculate boundary values based on scale and size
        xval = self.origin.x + self.scale.x * self.width
        yval = self.origin.y + self.scale.y * self.height
        # Calculate min and max values
        xmin = min(xval, self.origin.x)
        xmax = max(xval, self.origin.x)
        ymin = min(yval, self.origin.y)
        ymax = max(yval, self.origin.y)
    
        def contains(self, x):
        if isinstance(x, list):
            x = np.array(x)  # Promote list to array for contains check
        return ((x==0) | (x==1)).all()
    
            # Flag to payout 1.5 on a 'natural' blackjack win, like casino rules
        # Ref: http://www.bicyclecards.com/how-to-play/blackjack/
        self.natural = natural
        # Start the first game
        self.reset()
    
            '''
        nvec: vector of counts of each categorical variable
        '''
        assert (np.array(nvec) > 0).all(), 'nvec (counts) have to be positive'
        self.nvec = np.asarray(nvec, dtype=np.int64)
    
        def _get_obs(self, pos=None):
        if pos is None:
            pos = self.read_head_position
        if pos < 0:
            return self.base
        if isinstance(pos, np.ndarray):
            pos = pos.item()
        try:
            return self.input_data[pos]
        except IndexError:
            return self.base
    
            logger.debug('Starting ffmpeg with '%s'', ' '.join(self.cmdline))
        if hasattr(os,'setsid'): #setsid not present on Windows
            self.proc = subprocess.Popen(self.cmdline, stdin=subprocess.PIPE, preexec_fn=os.setsid)
        else:
            self.proc = subprocess.Popen(self.cmdline, stdin=subprocess.PIPE)