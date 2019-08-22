
        
        This script demonstrates how to implement a basic character-level
sequence-to-sequence model. We apply it to translating
short English sentences into short French sentences,
character-by-character. Note that it is fairly unusual to
do character-level machine translation, as word-level
models are more common in this domain.
    
    if ngram_range > 1:
    print('Adding {}-gram features'.format(ngram_range))
    # Create set of unique n-gram from the training set.
    ngram_set = set()
    for input_list in x_train:
        for i in range(2, ngram_range + 1):
            set_of_ngram = create_ngram_set(input_list, ngram_value=i)
            ngram_set.update(set_of_ngram)
    
        with tempfile.NamedTemporaryFile('wb', delete=True) as f:
        np.savez(f, x_train=x_train, y_train=y_train, x_test=x_test, y_test=y_test)
        monkeypatch.setattr(imdb, 'get_file', lambda *args, **kwargs: f.name)
        yield f.name
    
        # cntk doesn't support eval convolution with static
    # variable, will enable it later
    if K.backend() != 'cntk':
        # check regularizers
        kwargs = {'data_format': data_format,
                  'return_sequences': return_sequences,
                  'kernel_size': (num_row, num_col),
                  'stateful': True,
                  'filters': filters,
                  'batch_input_shape': inputs.shape,
                  'kernel_regularizer': regularizers.L1L2(l1=0.01),
                  'recurrent_regularizer': regularizers.L1L2(l1=0.01),
                  'bias_regularizer': 'l2',
                  'activity_regularizer': 'l2',
                  'kernel_constraint': 'max_norm',
                  'recurrent_constraint': 'max_norm',
                  'bias_constraint': 'max_norm',
                  'padding': 'same'}
    
    
def test_deconv_length():
    assert conv_utils.deconv_length(None, 1, 7, 'same', None) is None
    assert conv_utils.deconv_length(224, 1, 7, 'same', None) == 224
    assert conv_utils.deconv_length(224, 2, 7, 'same', None) == 448
    assert conv_utils.deconv_length(32, 1, 5, 'valid', None) == 36
    assert conv_utils.deconv_length(32, 2, 5, 'valid', None) == 67
    assert conv_utils.deconv_length(32, 1, 5, 'full', None) == 28
    assert conv_utils.deconv_length(32, 2, 5, 'full', None) == 59
    assert conv_utils.deconv_length(224, 1, 7, 'same', 0) == 224
    assert conv_utils.deconv_length(224, 2, 7, 'same', 0) == 447
    assert conv_utils.deconv_length(224, 2, 7, 'same', 1) == 448
    assert conv_utils.deconv_length(32, 1, 5, 'valid', 0) == 36
    assert conv_utils.deconv_length(32, 2, 5, 'valid', 0) == 67
    assert conv_utils.deconv_length(32, 2, 5, 'valid', 1) == 68
    assert conv_utils.deconv_length(6, 1, 3, 'full', 0) == 4
    assert conv_utils.deconv_length(6, 2, 3, 'full', 1) == 10
    assert conv_utils.deconv_length(6, 2, 3, 'full', 2) == 11
    
        # - Produce data on 4 worker processes, consume on main process:
    #   - Each worker process runs OWN copy of generator
    #   - BUT on Windows, `multiprocessing` won't marshall generators across
    #     process boundaries
    #       -> make sure `evaluate_generator()` raises raises ValueError
    #          exception and does not attempt to run the generator.
    if os.name == 'nt':
        with pytest.raises(ValueError):
            model.evaluate_generator(custom_generator(),
                                     steps=STEPS,
                                     max_queue_size=10,
                                     workers=WORKERS,
                                     use_multiprocessing=True)
    else:
        model.evaluate_generator(custom_generator(),
                                 steps=STEPS,
                                 max_queue_size=10,
                                 workers=WORKERS,
                                 use_multiprocessing=True)
    
        # When using the delayed-build pattern (no input shape specified), you can
    # choose to manually build your model by calling
    # `build(batch_input_shape)`:
    model = Sequential()
    model.add(Dense(32))
    model.add(Dense(32))
    model.build((None, 500))
    model.weights  # returns list of length 4
    ```
    '''
    
        @property
    def cell(self):
        Cell = namedtuple('cell', 'state_size')
        cell = Cell(state_size=self.units)
        return cell
    
        def get_config(self):
        config = {
            'filters': self.filters,
            'kernel_size': self.kernel_size,
            'strides': self.strides,
            'padding': self.padding,
            'data_format': self.data_format,
            'activation': activations.serialize(self.activation),
            'use_bias': self.use_bias,
            'kernel_initializer': initializers.serialize(self.kernel_initializer),
            'bias_initializer': initializers.serialize(self.bias_initializer),
            'kernel_regularizer': regularizers.serialize(self.kernel_regularizer),
            'bias_regularizer': regularizers.serialize(self.bias_regularizer),
            'activity_regularizer':
                regularizers.serialize(self.activity_regularizer),
            'kernel_constraint': constraints.serialize(self.kernel_constraint),
            'bias_constraint': constraints.serialize(self.bias_constraint)
        }
        base_config = super(LocallyConnected2D, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))

    
        def _wrapper(self, *args, **kwargs):
        # bound_method has the signature that 'decorator' expects i.e. no
        # 'self' argument, but it's a closure over self so it can call
        # 'func'. Also, wrap method.__get__() in a function because new
        # attributes can't be set on bound method objects, only on functions.
        bound_method = partial(method.__get__(self, type(self)))
        for dec in decorators:
            bound_method = dec(bound_method)
        return bound_method(*args, **kwargs)
    
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
    
        def __getitem__(self, index):
        try:
            return GDALBand(self.source, index + 1)
        except GDALException:
            raise GDALException('Unable to get band index %d' % index)

    
        @geotransform.setter
    def geotransform(self, values):
        'Set the geotransform for the data source.'
        if len(values) != 6 or not all(isinstance(x, (int, float)) for x in values):
            raise ValueError('Geotransform must consist of 6 numeric values.')
        # Create ctypes double array with input and write data
        values = (c_double * 6)(*values)
        capi.set_ds_geotransform(self._ptr, byref(values))
        self._flush()
    
        def __getitem__(self, target):
        '''
        Return the value of the given string attribute node, None if the node
        doesn't exist.  Can also take a tuple as a parameter, (target, child),
        where child is the index of the attribute in the WKT.  For example:
    
        def run_loop(self):
        while self.blackboard.common_state['progress'] < 100:
            for expert in self.blackboard.experts:
                if expert.is_eager_to_contribute:
                    expert.contribute()
        return self.blackboard.common_state['contributions']
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.
    
    
def main():
    '''
    # Counting to two...
    >>> for number in count_to_two():
    ...     print(number)
    one
    two
    
    
class A(Node):
    pass
    
        def __init__(self):
        self.__dict__ = self.__shared_state
        self.state = 'Init'
    
    from __future__ import unicode_literals
from __future__ import print_function