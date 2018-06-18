
        
            # Raises
        ValueError: In case of unknown `data_format` argument.
    '''
    if data_format is None:
        data_format = K.image_data_format()
    if data_format not in {'channels_first', 'channels_last'}:
        raise ValueError('Unknown data_format ' + str(data_format))
    
        plt.figure(figsize=(10, 10))
    start_range = digit_size // 2
    end_range = n * digit_size + start_range + 1
    pixel_range = np.arange(start_range, end_range, digit_size)
    sample_range_x = np.round(grid_x, 1)
    sample_range_y = np.round(grid_y, 1)
    plt.xticks(pixel_range, sample_range_x)
    plt.yticks(pixel_range, sample_range_y)
    plt.xlabel('z[0]')
    plt.ylabel('z[1]')
    plt.imshow(figure, cmap='Greys_r')
    plt.savefig(filename)
    plt.show()
    
            model1 = get_model(shape, data_format)
        model2 = get_model(target_shape, target_data_format)
        conv = K.function([model1.input], [model1.layers[0].output])
    
        In this task, there are variable length inputs of integers from 1-9, and a random
    subset of unmasked outputs. Each of these outputs has a 50% probability of being
    the input number unchanged, and a 50% probability of being 2*input%10.
    
    
def test_softmax_invalid():
    '''Test for the expected exception behaviour on invalid input
    '''
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
    
max_features = 20000
# cut texts after this number of words
# (among top max_features most common words)
maxlen = 100
batch_size = 32
    
    - LSTM loss decrease patterns during training can be quite different
from what you see with CNNs/MLPs/etc.
'''
from __future__ import print_function
    
    import os
import shutil
import io
import argparse
    
        def test_make_button(self):
        self.dialog.top = self.root
        self.dialog.buttonframe = Frame(self.dialog.top)
        btn = self.dialog.make_button('Test', self.dialog.close)
        self.assertEqual(btn['text'], 'Test')
    
        '''
    data = sorted(data)
    n = len(data)
    if n == 0:
        raise StatisticsError('no median for empty data')
    if n%2 == 1:
        return data[n//2]
    else:
        i = n//2
        return (data[i - 1] + data[i])/2
    
    simple_escapes = {'a': '\a',
                  'b': '\b',
                  'f': '\f',
                  'n': '\n',
                  'r': '\r',
                  't': '\t',
                  'v': '\v',
                  ''': ''',
                  ''': ''',
                  '\\': '\\'}
    
        def over(self, message_spec, *, file=None):
        '''Process an OVER command.  If the command isn't supported, fall
        back to XOVER. Arguments:
        - message_spec:
            - either a message id, indicating the article to fetch
              information about
            - or a (start, end) tuple, indicating a range of article numbers;
              if end is None, information up to the newest message will be
              retrieved
            - or None, indicating the current article number must be used
        - file: Filename string or file object to store the result in
        Returns:
        - resp: server response if successful
        - list: list of dicts containing the response fields
    
        from test.test_bdb import run_test, break_in_func
    
        ''' Interface to the system's uname command.
    '''
    if sys.platform in ('dos', 'win32', 'win16'):
        # XXX Others too ?
        return default
    try:
        f = os.popen('uname %s 2> %s' % (option, DEV_NULL))
    except (AttributeError, OSError):
        return default
    output = f.read().strip()
    rc = f.close()
    if not output or rc:
        return default
    else:
        return output
    
        def createDOMBuilder(self, mode, schemaType):
        if schemaType is not None:
            raise xml.dom.NotSupportedErr(
                'schemaType not yet supported')
        if mode == self.MODE_SYNCHRONOUS:
            return DOMBuilder()
        if mode == self.MODE_ASYNCHRONOUS:
            raise xml.dom.NotSupportedErr(
                'asynchronous builders are not supported')
        raise ValueError('unknown value for mode')
    
        def test_issue3221(self):
        # Note for mergers: the 'absolute' tests from the 2.x branch
        # are missing in Py3k because implicit relative imports are
        # a thing of the past
        #
        # Regression test for http://bugs.python.org/issue3221.
        def check_relative():
            exec('from . import relimport', ns)
    
    @dataclasses.dataclass
class IV:
    T_IV4 = dataclasses.InitVar
    iv0: dataclasses.InitVar[int]
    iv1: dataclasses.InitVar
    iv2: T_IV2
    iv3: T_IV3
    not_iv4: T_IV4  # When using string annotations, this field is not recognized as an InitVar.

    
    @dataclass
class CV:
    T_CV4 = ClassVar
    cv0: ClassVar[int] = 20
    cv1: ClassVar = 30
    cv2: T_CV2
    cv3: T_CV3
    not_cv4: T_CV4  # When using string annotations, this field is not recognized as a ClassVar.
    
        if os.path.exists('tldr.pdf'):
        print('\nCreated tldr.pdf in the current directory!\n')
    
        def tearDown(cls):
        ''' Function/test case scope teardown. '''
        cls.output.close()
        sys.stdout = cls.saved_stdout
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
            The result includes all the data read including the delimiter.
        If a callback is given, it will be run with the data as an argument;
        if not, this method returns a `.Future`.
    
            valid_ipv6 = {'X-Real-IP': '2620:0:1cfe:face:b00c::3'}
        self.assertEqual(
            self.fetch_json('/', headers=valid_ipv6)['remote_ip'],
            '2620:0:1cfe:face:b00c::3')