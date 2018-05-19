
        
                swf_class = swfi.extract_class(test_id)
        func = swfi.extract_function(swf_class, 'main')
        res = func(input_args)
        self.assertEqual(res, output)
    
        return sorted(
        filter(lambda ie: ie.is_suitable(age_limit), gen_extractors()),
        key=lambda ie: ie.IE_NAME.lower())
    
            video_url = self._html_search_regex(r'video_url\s*:\s*'([^']+)'', webpage, 'video URL')
    
                return {
                'id': video_id,
                'title': json_data['title'],
                'description': json_data.get('subtitle'),
                'thumbnail': json_data.get('thumbnail_image', {}).get('file'),
                'timestamp': parse_iso8601(json_data.get('publication_date')),
                'duration': int_or_none(json_data.get('duration')),
                'view_count': int_or_none(json_data.get('view_count')),
                'formats': formats,
            }

    
    
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
        # a Model inside a Model
    x = Input(shape=(1,))
    y = Dense(2)(x)
    inner_model = Model(x, y)
    x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        if weights == 'imagenet' and include_top and classes != 1000:
        raise ValueError('If using `weights` as imagenet with `include_top`'
                         ' as true, `classes` should be 1000')
    # Determine proper input shape
    input_shape = _obtain_input_shape(input_shape,
                                      default_size=224,
                                      min_size=48,
                                      data_format=K.image_data_format(),
                                      require_flatten=include_top,
                                      weights=weights)
    
        a = Input(shape=(32,), name='input_a')
    b = Input(shape=(32,), name='input_b')
    
            # check if input and output have the same shape
        assert(batch[0].shape == batch[1].shape)
        # check if the input and output images are not the same numpy array
        input_img = batch[0][0]
        output_img = batch[1][0]
        output_img[0][0][0] += 1
        assert(input_img[0][0][0] != output_img[0][0][0])
    
                def step(inputs, states):
                constants = states[-self._num_constants:]
                states = states[:-self._num_constants]
                return self.cell.call(inputs, states, constants=constants,
                                      **kwargs)
        else:
            def step(inputs, states):
                return self.cell.call(inputs, states, **kwargs)
    
        z_mean, z_log_var = args
    batch = K.shape(z_mean)[0]
    dim = K.int_shape(z_mean)[1]
    # by default, random_normal has mean=0 and std=1.0
    epsilon = K.random_normal(shape=(batch, dim))
    return z_mean + K.exp(0.5 * z_log_var) * epsilon
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
            try:
            # use repr so that we can distinguish between -0.0 and 0.0
            expected = repr(truediv(a, b))
        except OverflowError:
            expected = 'overflow'
        except ZeroDivisionError:
            expected = 'zerodivision'
    
    
Exceptions
----------
    
    to_benchmark = [pi_float, pi_decimal]
if C is not None:
    to_benchmark.insert(1, pi_cdecimal)
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.seekable:
            try:
                n = self.chunksize - self.size_read
                # maybe fix alignment
                if self.align and (self.chunksize & 1):
                    n = n + 1
                self.file.seek(n, 1)
                self.size_read = self.size_read + n
                return
            except OSError:
                pass
        while self.size_read < self.chunksize:
            n = min(8192, self.chunksize - self.size_read)
            dummy = self.read(n)
            if not dummy:
                raise EOFError

    
        print('$(target)$(debug_suffix)%s: $(temp_dir) $(OBJS)' % (target_ext))
    print('\tlink -out:$(target)$(debug_suffix)%s %s' %
          (target_ext, target_link_flags), '@<<')
    print('\t$(OBJS)')
    print('\t$(LIBS)')
    print('\t$(ADDN_LINK_FILES)')
    print('\t$(pythonlib) $(lcustom) $(l_debug)')
    print('\t$(resources)')
    print('<<')
    print()
    print('clean:')
    print('\t-del /f *.obj')
    print('\t-del /f $(target).exe')

    
        def test_varargs0(self):
        msg = r'__contains__\(\) takes exactly one argument \(0 given\)'
        self.assertRaisesRegex(TypeError, msg, {}.__contains__)
    
            # Now test range() with longs
        for x in [range(-2**100),
                  range(0, -2**100),
                  range(0, 2**100, -1)]:
            self.assertEqual(list(x), [])
            self.assertFalse(x)
    
            x = X(func)
        self.assertEqual(x.restype, c_int)
        self.assertEqual(x.argtypes, (c_int, c_int))
        self.assertEqual(sizeof(x), sizeof(c_voidp))
        self.assertEqual(sizeof(X), sizeof(c_voidp))
    
        def test_basics(self):
        from operator import delitem
        for ct, pt in zip(ctype_types, python_types):
            i = ct(42)
            p = pointer(i)
##            print type(p.contents), ct
            self.assertIs(type(p.contents), ct)
            # p.contents is the same as p[0]
##            print p.contents
##            self.assertEqual(p.contents, 42)
##            self.assertEqual(p[0], 42)
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
            # It would be better to run the wsgiref server implementation in
        # another thread instead of using our own WSGIContainer, but this
        # fits better in our async testing framework and the wsgiref
        # validator should keep us honest
        with ignore_deprecation():
            return WSGIContainer(validator(WSGIAdapter(
                Application([
                    ('/', HelloHandler),
                    ('/path/(.*)', PathQuotingHandler),
                    ('/typecheck', TypeCheckHandler),
                ]))))
    
        * ``_OPENID_ENDPOINT``: the identity provider's URI.
    '''
    @_non_deprecated_return_future
    def authenticate_redirect(self, callback_uri=None,
                              ax_attrs=['name', 'email', 'language', 'username'],
                              callback=None):
        '''Redirects to the authentication URL for this service.
    
        .. versionchanged:: 5.0
       Always uses the current IOLoop instead of ``self.io_loop``.
    
    
class Queue(object):
    '''Coordinate producer and consumer coroutines.
    
          class EchoServer(TCPServer):
          async def handle_stream(self, stream, address):
              while True:
                  try:
                      data = await stream.read_until(b'\n')
                      await stream.write(data)
                  except StreamClosedError:
                      break
    
        # Use our overridden copy method for the copy.copy module.
    # This makes shallow copies one level deeper, but preserves
    # the appearance that HTTPHeaders is a single container.
    __copy__ = copy
    
            :info string key: More detailed timeout information.
        '''
        self._timeout = None
        error_message = 'Timeout {0}'.format(info) if info else 'Timeout'
        if self.final_callback is not None:
            self._handle_exception(HTTPTimeoutError, HTTPTimeoutError(error_message),
                                   None)