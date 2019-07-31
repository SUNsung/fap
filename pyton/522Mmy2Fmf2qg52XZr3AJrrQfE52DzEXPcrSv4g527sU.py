
        
        
def view_with_secure(request):
    'A view that indicates if the request was secure'
    response = HttpResponse()
    response.test_was_secure_request = request.is_secure()
    response.test_server_port = request.META.get('SERVER_PORT', 80)
    return response
    
        def as_oracle(self, compiler, connection, **extra_context):
        if self.output_field.get_internal_type() == 'DurationField':
            expression = self.get_source_expressions()[0]
            options = self._get_repr_options()
            from django.db.backends.oracle.functions import IntervalToSeconds, SecondsToInterval
            return compiler.compile(
                SecondsToInterval(self.__class__(IntervalToSeconds(expression), **options))
            )
        return super().as_sql(compiler, connection, **extra_context)
    
        @property
    def fields(self):
        'Return a list of fields in the Feature.'
        return [
            force_str(
                capi.get_field_name(capi.get_field_defn(self._layer._ldefn, i)),
                self.encoding,
                strings_only=True
            ) for i in range(self.num_fields)
        ]
    
            For raster formats using Persistent Auxiliary Metadata (PAM) services,
        the statistics might be cached in an auxiliary file.
        '''
        # Prepare array with arguments for capi function
        smin, smax, smean, sstd = c_double(), c_double(), c_double(), c_double()
        stats_args = [
            self._ptr, c_int(approximate), byref(smin), byref(smax),
            byref(smean), byref(sstd), c_void_p(), c_void_p(),
        ]
    
    
def source_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/blob/master/' + text
    set_classes(options)
    node = nodes.reference(rawtext, text, refuri=ref, **options)
    return [node], []
    
            # Broken links can't be fixed and
        # I am not sure what do with the local ones.
        if errortype.lower() in ['broken', 'local']:
            print('Not Fixed: ' + line)
        else:
            # If this is a new file
            if newfilename != _filename:
    
        scrapy runspider qpsclient.py --loglevel=INFO --set RANDOMIZE_DOWNLOAD_DELAY=0 --set CONCURRENT_REQUESTS=50 -a qps=10 -a latency=0.3
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
            general form:
        @returns request(s)/item(s) [min=1 [max]]
    
        class _v19_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, method, bucket, key, headers, *args, **kwargs):
            return headers
    
        def timeout(self):
        self.transport.loseConnection()
    
    See documentation in docs/topics/downloader-middleware.rst
'''
    
        def __init__(self, timeout=180):
        self._timeout = timeout
    
    # If extensions (or modules to document with autodoc) are in another
# directory, add these directories to sys.path here. If the directory is
# relative to the documentation root, use os.path.abspath to make it
# absolute, like shown here.
#sys.path.insert(0, os.path.abspath('.'))
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_small_frame = small_frame[:, :, ::-1]
    
        References:
        tflearn.prelu
    '''
    if channel_shared:
        alpha_shape = get_shape(x)[-1:]
    else:
        alpha_shape = [1]
    
            a = permute(a, [0, 2, 1])  # [batch_size, n_step, n_input]
        o = tf.multiply(x, a)  # # [batch_size, n_step, n_input]
    
    l2_regularizer = L1L2Regularizer(l2=0.01)
    
    
def permute(x, perm):
    '''
    Examples:
        x.shape == [128, 32, 1]
        x = permute(x, [0, 2, 1])
        x.shape == [128, 1, 32]