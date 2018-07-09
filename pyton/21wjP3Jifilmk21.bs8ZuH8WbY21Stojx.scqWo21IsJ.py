
        
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
    
    import datetime
import io
import json
import textwrap
    
        def matching_ies(self, url):
        return [ie.IE_NAME for ie in self.ies if ie.suitable(url) and ie.IE_NAME != 'generic']
    
            webpage = self._download_webpage(url, playlist_id)
        title = self._html_search_regex(
            r'<h1 class='playlist-name'[^>]*?>(.*?)</h1>', webpage, 'title')
        description = self._html_search_regex(
            r'<p class='excerpt'[^>]*?>(.*?)</p>',
            webpage, 'description', fatal=False)
        urls = re.findall(
            r'<li class='lecture-preview'>\s*?<a target='_blank' href='([^']+)'>',
            webpage)
        entries = [self.url_result(u) for u in urls]
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
    
class TagUUID(JSONTag):
    __slots__ = ()
    key = ' u'
    
        def list_templates(self):
        result = set()
        loader = self.app.jinja_loader
        if loader is not None:
            result.update(loader.list_templates())
    
    
def set_filename_version(filename, version_number, pattern):
    changed = []
    
        class Loader(object):
        def find_module(self, name, path=None):
            return self
    
        app.testing = False
    stream = StringIO()
    rv = client.get('/', errors_stream=stream)
    assert rv.status_code == 500
    assert rv.data
    err = stream.getvalue()
    assert 'Exception on / [GET]' in err
    assert 'Exception: test' in err

    
    
def create_temporal_sequential_model():
    model = Sequential()
    model.add(GRU(32, input_shape=(timesteps, input_dim), return_sequences=True))
    model.add(TimeDistributed(Dense(num_classes)))
    model.add(Activation('softmax'))
    return model
    
        x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        if args.weights:
        vae = vae.load_weights(args.weights)
    else:
        # train the autoencoder
        vae.fit(x_train,
                epochs=epochs,
                batch_size=batch_size,
                validation_data=(x_test, None))
        vae.save_weights('vae_cnn_mnist.h5')
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
    # Training
batch_size = 30
epochs = 2
    
    
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
    
                # check state initialization
            layer = convolutional_recurrent.ConvLSTM2D(filters=filters,
                                                       kernel_size=(num_row, num_col),
                                                       data_format=data_format,
                                                       return_sequences=return_sequences)
            layer.build(inputs.shape)
            x = Input(batch_shape=inputs.shape)
            initial_state = layer.get_initial_state(x)
            y = layer(x, initial_state=initial_state)
            model = Model(x, y)
            assert model.predict(inputs).shape == layer.compute_output_shape(inputs.shape)
    
    
@keras_test
def test_vector_classification():
    '''
    Classify random float vectors into 2 classes with logistic regression
    using 2 layer neural network with ReLU hidden units.
    '''
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    y_train = to_categorical(y_train)
    y_test = to_categorical(y_test)
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_wrong_redirect_code(self, mock_get_request):
        mock_get_request.return_value = create_response(
            303, {'location': 'https://test.com'})
        self.assertFalse(self.validator.redirect('test.com'))
    
    # A dictionary with options for the search language support, empty by default.
# Now only 'ja' uses this config value
#html_search_options = {'type': 'default'}
    
        @classmethod
    def _call(cls, enhancement):
        from certbot.display.enhancements import ask
        return ask(enhancement)
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    def test_smtp_success(self, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.connect.call_count, 1)
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
    
        # Implement all methods from IInstaller, remembering to add
    # 'self' as first argument, e.g. def get_all_names(self)...

    
          # Checks for common mistakes in TODO comments.
      comment = line[commentpos:]
      match = _RE_PATTERN_TODO.match(comment)
      if match:
        # One whitespace is correct; zero whitespace is handled elsewhere.
        leading_whitespace = match.group(1)
        if len(leading_whitespace) > 1:
          error(filename, linenum, 'whitespace/todo', 2,
                'Too many spaces before TODO')
    
                if self._state in [CANCELLED, CANCELLED_AND_NOTIFIED]:
                raise CancelledError()
            elif self._state == FINISHED:
                return self._exception
            else:
                raise TimeoutError()
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
#latex_use_parts = False
    
    
def sleep_and_raise(t):
    time.sleep(t)
    raise Exception('this is an exception')
    
    
FILTER_COMPILERS = { 'regex' : CompileRegex,
                     'level' : CompileLevel }
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithoutHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'address': None,
    'port': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    import logging