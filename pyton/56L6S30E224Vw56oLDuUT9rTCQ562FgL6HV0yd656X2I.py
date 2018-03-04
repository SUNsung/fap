
        
            model.train_on_batch(x_train[:32], y_train[:32])
    model.test_on_batch(x_train[:32], y_train[:32])
    
        # by setting the `trainable` argument, in Sequential
    model = Sequential()
    layer = Dense(2, input_dim=1)
    model.add(layer)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
    from keras.applications import vgg19
from keras import backend as K
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_orthogonal(tensor_shape):
    _runner(initializers.orthogonal(), tensor_shape,
            target_mean=0.)
    
    
@keras_test
def test_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.max_norm(m)
        normed = norm_instance(K.variable(array))
        assert(np.all(K.eval(normed) < m))
    
        mask_inputs = (np.zeros(input_shapes[0][:-1]), np.ones(input_shapes[1][:-1]))
    expected_mask_output = np.concatenate(mask_inputs, axis=-1)
    mask_input_placeholders = [K.placeholder(shape=input_shape[:-1]) for input_shape in input_shapes]
    mask_output = model.layers[-1]._output_mask(mask_input_placeholders)
    assert np.all(K.function(mask_input_placeholders, [mask_output])(mask_inputs)[0] == expected_mask_output)
    
        model = Sequential()
    model.add(Merge([intermediate, righter], mode='sum'))
    model.add(Dense(num_classes))
    model.add(Activation('softmax'))
    model.compile(loss='categorical_crossentropy', optimizer='rmsprop')
    
        ld = layers.Lambda(f)
    config = ld.get_config()
    ld = deserialize_layer({'class_name': 'Lambda', 'config': config})
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
        def tested_methods_from_spidercls(self, spidercls):
        methods = []
        for key, value in vars(spidercls).items():
            if (callable(value) and value.__doc__ and
                    re.search(r'^\s*@', value.__doc__, re.MULTILINE)):
                methods.append(key)
    
            The shuffle/sort step of MapReduce will then do a
        distributed sort on the keys, resulting in:
    
        def __init__(self, id, name):
        self.id = id
        self.name = name
        self.friend_ids = []
    
    
class Crawler(object):
    
        def add_label(self, label):
        '''Add label to list of labels on the message.'''
        if isinstance(label, str):
            if label not in self._labels:
                self._labels.append(label)
        else:
            raise TypeError('label must be a string: %s' % type(label))
    
        first = str(int(last) - args.nb_articles + 1)
    resp, overviews = s.xover(first, last)
    for artnum, over in overviews:
        author = decode_header(over['from']).split('<', 1)[0]
        subject = decode_header(over['subject'])
        lines = int(over[':lines'])
        print('{:7} {:20} {:42} ({})'.format(
              artnum, cut(author, 20), cut(subject, 42), lines)
              )
    
        def abort(self):
        # What does it mean to 'clear' a document?  Does the
        # documentElement disappear?
        raise NotImplementedError(
            'haven't figured out what this means yet')
    
            for func, args, expected in self.CALLS_POSARGS:
            with self.subTest(func=func, args=args):
                result = _testcapi.pyobject_fastcall(func, args)
                self.check_result(result, expected)
    
            Interpret all HTTP GET requests as requests for server
        documentation.
        '''
        # Check that the path is legal
        if not self.is_rpc_path_valid():
            self.report_404()
            return
    
            self.assertEqual(bool(CFUNCTYPE(None)(0)), False)
        self.assertEqual(bool(CFUNCTYPE(None)(42)), True)