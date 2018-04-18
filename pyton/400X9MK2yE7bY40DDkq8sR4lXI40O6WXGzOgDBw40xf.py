
        
        
def _get_test_data():
    np.random.seed(1337)
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=train_samples,
                                                         num_test=test_samples,
                                                         input_shape=(input_dim,),
                                                         classification=True,
                                                         num_classes=num_classes)
    int_y_test = y_test.copy()
    int_y_train = y_train.copy()
    # convert class vectors to binary class matrices
    y_train = np_utils.to_categorical(y_train, num_classes)
    y_test = np_utils.to_categorical(y_test, num_classes)
    test_ids = np.where(int_y_test == np.array(weighted_class))[0]
    
        # Output shape
        5D tensor with shape:
        - If `data_format` is `'channels_last'`:
            `(batch, first_padded_axis, second_padded_axis, third_axis_to_pad, depth)`
        - If `data_format` is `'channels_first'`:
            `(batch, depth, first_padded_axis, second_padded_axis, third_axis_to_pad)`
    '''
    
    from keras.models import Sequential
from keras.engine.training import _weighted_masked_objective
from keras.layers import TimeDistributed, Masking, Dense
from keras.utils.test_utils import keras_test
from keras import losses
from keras import backend as K
    
    Gets to 0.8498 test accuracy after 2 epochs. 41s/epoch on K520 GPU.
'''
from __future__ import print_function
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_he_uniform(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(6. / fan_in)
    _runner(initializers.he_uniform(), tensor_shape,
            target_mean=0., target_max=scale, target_min=-scale)
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
        # 50% of the time the correct output is the input.
    # The other 50% of the time it's 2 * input % 10
    y = (x * np.random.random_integers(1, 2, x.shape)) % 10
    ys = np.zeros((y.size, 10), dtype='int32')
    for i, target in enumerate(y.flat):
        ys[i, target] = 1
    ys = ys.reshape(y.shape + (10,))
    
        # Returns
        Layer instance (may be Model, Sequential, Layer...)
    '''
    from .. import models
    globs = globals()  # All layers.
    globs['Model'] = models.Model
    globs['Sequential'] = models.Sequential
    return deserialize_keras_object(config,
                                    module_objects=globs,
                                    custom_objects=custom_objects,
                                    printable_module_name='layer')

    
        model.load_weights(fname)
    os.remove(fname)
    
    
    Examples
    --------
    
    __test__ = {'libreftest' : libreftest}
    
        def test_keys_reuse(self):
        s = '[{'a_key': 1, 'b_\xe9': 2}, {'a_key': 3, 'b_\xe9': 4}]'
        self.check_keys_reuse(s, self.loads)
        self.check_keys_reuse(s, self.json.decoder.JSONDecoder().decode)
    
        def scan_once(string, idx):
        try:
            return _scan_once(string, idx)
        finally:
            memo.clear()
    
            if self.instance is not None:
            if hasattr(self.instance, '_dispatch'):
                # call the `_dispatch` method on the instance
                return self.instance._dispatch(method, params)
    
        def assertAlmostEqual(self, a, b):
        if isinstance(a, complex):
            if isinstance(b, complex):
                unittest.TestCase.assertAlmostEqual(self, a.real, b.real)
                unittest.TestCase.assertAlmostEqual(self, a.imag, b.imag)
            else:
                unittest.TestCase.assertAlmostEqual(self, a.real, b)
                unittest.TestCase.assertAlmostEqual(self, a.imag, 0.)
        else:
            if isinstance(b, complex):
                unittest.TestCase.assertAlmostEqual(self, a, b.real)
                unittest.TestCase.assertAlmostEqual(self, 0., b.imag)
            else:
                unittest.TestCase.assertAlmostEqual(self, a, b)
    
        def shutdown(self, wait=True):
        with self._shutdown_lock:
            self._shutdown = True
            self._work_queue.put(None)
        if wait:
            for t in self._threads:
                t.join()
    shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
        # Create and fill-in the class template
    numfields = len(field_names)
    argtxt = repr(field_names).replace(''', '')[1:-1]   # tuple repr without parens or quotes
    reprtxt = ', '.join('%s=%%r' % name for name in field_names)
    dicttxt = ', '.join('%r: t[%d]' % (name, pos) for pos, name in enumerate(field_names))
    template = '''class %(typename)s(tuple):
        '%(typename)s(%(argtxt)s)' \n
        __slots__ = () \n
        _fields = %(field_names)r \n
        def __new__(_cls, %(argtxt)s):
            return _tuple.__new__(_cls, (%(argtxt)s)) \n
        @classmethod
        def _make(cls, iterable, new=tuple.__new__, len=len):
            'Make a new %(typename)s object from a sequence or iterable'
            result = new(cls, iterable)
            if len(result) != %(numfields)d:
                raise TypeError('Expected %(numfields)d arguments, got %%d' %% len(result))
            return result \n
        def __repr__(self):
            return '%(typename)s(%(reprtxt)s)' %% self \n
        def _asdict(t):
            'Return a new dict which maps field names to their values'
            return {%(dicttxt)s} \n
        def _replace(_self, **kwds):
            'Return a new %(typename)s object replacing specified fields with new values'
            result = _self._make(map(kwds.pop, %(field_names)r, _self))
            if kwds:
                raise ValueError('Got unexpected field names: %%r' %% kwds.keys())
            return result \n
        def __getnewargs__(self):
            return tuple(self) \n\n''' % locals()
    for i, name in enumerate(field_names):
        template += '        %s = _property(_itemgetter(%d))\n' % (name, i)
    
    from __future__ import print_function
from __future__ import division
from __future__ import unicode_literals
from __future__ import absolute_import
    
        with MockCurrentColumnAndLineContents( 3, 'ab-' ):
      ok_( not base.LastEnteredCharIsIdentifierChar() )
    
      # Truncate the longer string.
  if left_string_length > right_string_length:
    left_string = left_string[ -right_string_length: ]
  elif left_string_length < right_string_length:
    right_string = right_string[ :left_string_length ]