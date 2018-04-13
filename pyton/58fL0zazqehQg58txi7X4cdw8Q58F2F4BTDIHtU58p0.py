
        
        
class EnvironmentConfig(object):
    uri = os.getenv('LANDSCAPE_API_URI')
    access_key = os.getenv('LANDSCAPE_API_KEY')
    secret_key = os.getenv('LANDSCAPE_API_SECRET')
    ssl_ca_file = os.getenv('LANDSCAPE_API_SSL_CA_FILE')
    
    if len(sys.argv) == 2 and sys.argv[1] == '--list':
    print(json.dumps(result))
elif len(sys.argv) == 3 and sys.argv[1] == '--host':
    print(json.dumps({}))
else:
    print('Need an argument, either --list or --host <host>')

    
        The host identifier may be a hostname (qualified or not), an IPv4 address,
    or an IPv6 address. If allow_ranges is True, then any of those may contain
    [x:y] range specifications, e.g. foo[1:3] or foo[0:5]-bar[x-z].
    
        try:
        return json.dumps(result, sort_keys=True, indent=indent, ensure_ascii=False)
    except UnicodeDecodeError:
        return json.dumps(result, sort_keys=True, indent=indent)

    
    
def test_classify_inherit_class_build_fn():
    class InheritClassBuildFnClf(KerasClassifier):
    
        # Format docstring section titles.
    docstring = re.sub(r'\n(\s+)# (.*)\n',
                       r'\n\1__\2__\n\n',
                       docstring)
    # Format docstring lists.
    docstring = re.sub(r'    ([^\s\\\(]+):(.*)\n',
                       r'    - __\1__:\2\n',
                       docstring)
    
            # python 2 has 'next', 3 has '__next__'
        # avoid any explicit version checks
        val_gen = (hasattr(validation_data, 'next') or
                   hasattr(validation_data, '__next__') or
                   isinstance(validation_data, Sequence))
        if (val_gen and not isinstance(validation_data, Sequence) and
                not validation_steps):
            raise ValueError('`validation_steps=None` is only valid for a'
                             ' generator based on the `keras.utils.Sequence`'
                             ' class. Please specify `validation_steps` or use'
                             ' the `keras.utils.Sequence` class.')
    
        # a Model inside a Sequential
    x = Input(shape=(1,))
    y = Dense(2)(x)
    inner_model = Model(x, y)
    outer_model = Sequential()
    outer_model.add(inner_model)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        ```python
    from keras.preprocessing.sequence import TimeseriesGenerator
    import numpy as np
    
    from keras.utils.test_utils import layer_test
from keras.utils.test_utils import keras_test
from keras.layers import local
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_zero(tensor_shape):
    _runner(initializers.zeros(), tensor_shape,
            target_mean=0., target_max=0.)
    
    
@keras_test
def test_convert_weights():
    def get_model(shape, data_format):
        model = Sequential()
        model.add(Conv2D(filters=2,
                         kernel_size=(4, 3),
                         input_shape=shape,
                         data_format=data_format))
        model.add(Flatten())
        model.add(Dense(5))
        return model
    
        # test functional API
    for mode in ['sum', 'mul', 'concat', 'ave', 'max']:
        print(mode)
        input_a = layers.Input(shape=input_shapes[0][1:])
        input_b = layers.Input(shape=input_shapes[1][1:])
        merged = legacy_layers.merge([input_a, input_b], mode=mode)
        model = models.Model([input_a, input_b], merged)
        model.compile('rmsprop', 'mse')