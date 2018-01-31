
        
            def test_request_recovery_with_bigger_timeout(self):
        '''a biggest timeout can be specified'''
        server = Server.basic_response_server(request_timeout=3)
        data = b'bananadine'
    
        def __call__(self, r):
        # Initialize per-thread state, if needed
        self.init_per_thread_state()
        # If we have a saved nonce, skip the 401
        if self._thread_local.last_nonce:
            r.headers['Authorization'] = self.build_digest_header(r.method, r.url)
        try:
            self._thread_local.pos = r.body.tell()
        except AttributeError:
            # In the case of HTTPDigestAuth being reused and the body of
            # the previous request was a file-like object, pos has the
            # file position of the previous body. Ensure it's set to
            # None.
            self._thread_local.pos = None
        r.register_hook('response', self.handle_401)
        r.register_hook('response', self.handle_redirect)
        self._thread_local.num_401_calls = 1
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    
    from . import __version__ as requests_version
    
    # Check imported dependencies for compatibility.
try:
    check_compatibility(urllib3.__version__, chardet.__version__)
except (AssertionError, ValueError):
    warnings.warn('urllib3 ({0}) or chardet ({1}) doesn't match a supported '
                  'version!'.format(urllib3.__version__, chardet.__version__),
                  RequestsDependencyWarning)
    
    
class SSLError(ConnectionError):
    '''An SSL error occurred.'''
    
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
    
    model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          verbose=1,
          validation_data=(x_test, y_test))
score = model.evaluate(x_test, y_test, verbose=0)
print('Test loss:', score[0])
print('Test accuracy:', score[1])

    
    x_train = x_train.reshape(x_train.shape[0], -1, 1)
x_test = x_test.reshape(x_test.shape[0], -1, 1)
x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
        # Check arguments order
    indexes = [words.index(arg + ':') for arg in args]
    if indexes != sorted(indexes):
        raise ValueError(
            '{} arguments order is different from the documentation'.format(name),
            member.__module__)
    
    
def test_serialization():
    all_activations = ['max_norm', 'non_neg',
                       'unit_norm', 'min_max_norm']
    for name in all_activations:
        fn = constraints.get(name)
        ref_fn = getattr(constraints, name)()
        assert fn.__class__ == ref_fn.__class__
        config = constraints.serialize(fn)
        fn = constraints.deserialize(config)
        assert fn.__class__ == ref_fn.__class__
    
    
def test_reuters():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = reuters.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        assert len(x_train) + len(x_test) == 11228
        (x_train, y_train), (x_test, y_test) = reuters.load_data(maxlen=10)
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        word_index = reuters.get_word_index()
        assert isinstance(word_index, dict)
    
    
@pytest.mark.skipif(K.backend() != 'tensorflow', reason='Requires TensorFlow backend')
@keras_test
def test_embedding_with_clipnorm():
    model = Sequential()
    model.add(layers.Embedding(input_dim=1, output_dim=1))
    model.compile(optimizer=optimizers.SGD(clipnorm=0.1), loss='mse')
    model.fit(np.array([[0]]), np.array([[[0.5]]]), epochs=1)
    
        # 1. Default returns linear
    a = activations.get(None)
    assert a == activations.linear
    
        def test_create_other_buttons(self):
        for state in (False, True):
            var = self.engine.backvar
            var.set(state)
            frame, others = self.btn_test_setup(
                self.dialog.create_other_buttons)
            buttons = frame.pack_slaves()
            for spec, button in zip(others, buttons):
                val, label = spec
                self.assertEqual(button['text'], label)
                if val == state:
                    # hit other button, then this one
                    # indexes depend on button order
                    self.assertEqual(var.get(), state)
    
        >>> data = [2.75, 1.75, 1.25, 0.25, 0.5, 1.25, 3.5]
    >>> variance(data)
    1.3720238095238095
    
            morsel = cookies.Morsel()
        morsel.set('key', 'val', 'coded_val')
        morsel['expires'] = 0
        self.assertRegex(repr(morsel),
                r'<Morsel: key=coded_val; '
                r'expires=\w+, \d+ \w+ \d+ \d+:\d+:\d+ \w+>')
        self.assertRegex(str(morsel),
                r'Set-Cookie: key=coded_val; '
                r'expires=\w+, \d+ \w+ \d+ \d+:\d+:\d+ \w+')
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
    def _calculate_ratio(matches, length):
    if length:
        return 2.0 * matches / length
    return 1.0
    
        def raw_decode(self, s, idx=0):
        '''Decode a JSON document from ``s`` (a ``str`` beginning with
        a JSON document) and return a 2-tuple of the Python
        representation and the index in ``s`` where the document ended.
    
    
def makemakefile(outfp, vars, files, target):
    save = sys.stdout
    try:
        sys.stdout = outfp
        realwork(vars, files, target)
    finally:
        sys.stdout = save
    
        def done(self):
        '''Return True of the future was cancelled or finished executing.'''
        with self._condition:
            return self._state in [CANCELLED, CANCELLED_AND_NOTIFIED, FINISHED]
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
    if __name__ == '__main__':
    test_main()

    
      return {
    'filepath': current_filepath,
    'line_num': line + 1,
    'column_num': column + 1,
    'working_dir': working_dir,
    'file_data': vimsupport.GetUnsavedAndSpecifiedBufferData( current_buffer,
                                                              current_filepath )
  }
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
        assert_that(
      # Positional arguments passed to PostDataToHandlerAsync.
      post_data_to_handler_async.call_args[ 0 ],
      contains(
        has_entries( {
          'filepath': current_buffer_file,
          'line_num': 1,
          'column_num': 6,
          'file_data': has_entries( {
            current_buffer_file: has_entries( {
              'contents': 'current_buffer_contents\n',
              'filetypes': [ 'some_filetype' ]
            } ),
            modified_buffer_file: has_entries( {
              'contents': 'modified_buffer_contents\n',
              'filetypes': [ 'some_filetype' ]
            } )
          } ),
          'event_name': 'BufferVisit'
        } ),
        'event_notification'
      )
    )
    
          if 'message' in detailed_diagnostic:
        vimsupport.PostVimMessage( detailed_diagnostic[ 'message' ],
                                   warning = False )
    
    import sys
for plugin in plugins:
    print 'PLUGIN_PATH_%s := %s' % (plugin.name, plugin.path)
    
                send_gift(
                buyer=buyer,
                recipient=recipient,
                months=months,
                days=months * 31,
                signed=False,
                giftmessage=None,
                thing_fullname=thing_fullname,
                note=note,
            )
    
    
def handle_awful_failure(fail_text):
    '''
    Makes sure that no errors generated in the error handler percolate
    up to the user unless debug is enabled.
    '''
    if g.debug:
        import sys
        s = sys.exc_info()
        # reraise the original error with the original stack trace
        raise s[1], None, s[2]
    try:
        # log the traceback, and flag the 'path' as the error location
        import traceback
        log.write_error_summary(fail_text)
        for line in traceback.format_exc().splitlines():
            g.log.error(line)
        return redditbroke % (make_failien_url(), websafe(fail_text))
    except:
        # we are doomed.  Admit defeat
        return 'This is an error that should never occur.  You win.'

    
        message_center.update()
    
        def test_num_floor_in_house(self):
        self.assertEqual(self.building.floor, 'One')
    
        def test_parrot_greek_localization(self):
        self.assertEqual(self.g.get('parrot'), 'parrot')
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
    
# Alternative implementation for different levels of methods
class CatalogInstance(object):
    
        @data.setter
    def data(self, value):
        self._data = value
        self.notify()
    
        # 从 scan_start_y 开始往下扫描，棋子应位于屏幕上半部分，这里暂定不超过 2/3
    for i in range(scan_start_y, int(h * 2 / 3)):
        # 横坐标方面也减少了一部分扫描开销
        for j in range(scan_x_border, w - scan_x_border):
            pixel = im_pixel[j, i]
            # 根据棋子的最低行的颜色判断，找最后一行那些点的平均值，这个颜
            # 色这样应该 OK，暂时不提出来
            if (50 < pixel[0] < 60) \
                    and (53 < pixel[1] < 63) \
                    and (95 < pixel[2] < 110):
                piece_x_sum += j
                piece_x_c += 1
                piece_y_max = max(i, piece_y_max)
    
    
def jump(distance):
    press_time = distance * 1.35
    press_time = int(press_time)
    cmd = 'adb shell input swipe 320 410 320 410 ' + str(press_time)
    print(cmd)
    os.system(cmd)