
        
                buf.append('  Make sure to directly send your %s-request to this URL '
                   'since we can\'t make browsers or HTTP clients redirect '
                   'with form data reliably or without user interaction.' %
                   request.method)
        buf.append('\n\nNote: this exception is only raised in debug mode')
        AssertionError.__init__(self, ''.join(buf).encode('utf-8'))
    
    
def test_get_version(test_apps, capsys):
    '''Test of get_version.'''
    from flask import __version__ as flask_ver
    from sys import version as py_ver
    
        app = flask.Flask(__name__)
    app.config.from_mapping(
        SECRET_KEY='config',
        TEST_KEY='foo'
    )
    common_object_test(app)
    
        old_layer = keras.layers.AveragePooling2D((2, 2), padding='valid', dim_ordering='th', name='avgpooling2d')
    new_layer = keras.layers.AvgPool2D(pool_size=2, padding='valid', data_format='channels_first', name='avgpooling2d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    - Getting started
    Getting started with the sequential model
    Getting started with the functional api
    FAQ
    
        def compute_output_shape(self, input_shape):
        if self.data_format == 'channels_last':
            space = input_shape[1:-1]
            new_space = []
            for i in range(len(space)):
                new_dim = conv_utils.conv_output_length(
                    space[i],
                    self.kernel_size[i],
                    padding=self.padding,
                    stride=self.strides[i],
                    dilation=self.dilation_rate[i])
                new_space.append(new_dim)
            return (input_shape[0],) + tuple(new_space) + (self.filters,)
        if self.data_format == 'channels_first':
            space = input_shape[2:]
            new_space = []
            for i in range(len(space)):
                new_dim = conv_utils.conv_output_length(
                    space[i],
                    self.kernel_size[i],
                    padding=self.padding,
                    stride=self.strides[i],
                    dilation=self.dilation_rate[i])
                new_space.append(new_dim)
            return (input_shape[0], self.filters) + tuple(new_space)
    
    
class ProgbarLogger(Callback):
    '''Callback that prints metrics to stdout.
    
    
@keras_test
def test_LearningRateScheduler():
    np.random.seed(1337)
    (X_train, y_train), (X_test, y_test) = get_test_data(num_train=train_samples,
                                                         num_test=test_samples,
                                                         input_shape=(input_dim,),
                                                         classification=True,
                                                         num_classes=num_classes)
    y_test = np_utils.to_categorical(y_test)
    y_train = np_utils.to_categorical(y_train)
    model = Sequential()
    model.add(Dense(num_hidden, input_dim=input_dim, activation='relu'))
    model.add(Dense(num_classes, activation='softmax'))
    model.compile(loss='categorical_crossentropy',
                  optimizer='sgd',
                  metrics=['accuracy'])
    
    max_words = 1000
batch_size = 32
epochs = 5
    
            if opts.nolog:
            self.settings.set('LOG_ENABLED', False, priority='cmdline')
    
        def syntax(self):
        return '[options] <spider>'
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
                    contracts.append(self.contracts[name](method, *args))
    
                raise ContractFail('Returned %s %s, expected %s' % \
                (occurrences, self.obj_name, expected))