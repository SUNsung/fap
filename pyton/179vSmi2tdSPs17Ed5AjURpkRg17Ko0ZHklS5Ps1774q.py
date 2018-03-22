
        
        
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    from utils import TESTS_ROOT
    
        '''
    exit_status = ExitStatus.OK
    downloader = None
    show_traceback = args.debug or args.traceback
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        reference = Sequential()
    reference.add(wrappers.TimeDistributed(layers.Dense(2),
                                           batch_input_shape=(1, 3, 4)))
    reference.add(layers.Activation('relu'))
    reference.compile(optimizer='rmsprop', loss='mse')
    reference.layers[0].set_weights(weights)
    
    
@keras_test
def test_masking():
    np.random.seed(1337)
    x = np.array([[[1], [1]],
                  [[0], [0]]])
    model = Sequential()
    model.add(Masking(mask_value=0, input_shape=(2, 1)))
    model.add(TimeDistributed(Dense(1, kernel_initializer='one')))
    model.compile(loss='mse', optimizer='sgd')
    y = np.array([[[1], [1]],
                  [[1], [1]]])
    loss = model.train_on_batch(x, y)
    assert loss == 0
    
    
@keras_test
def test_locallyconnected_1d():
    num_samples = 2
    num_steps = 8
    input_dim = 5
    filter_length = 3
    filters = 4
    padding = 'valid'
    strides = 1
    
        history = model.fit(x, ys, validation_split=0.05, batch_size=10,
                        verbose=0, epochs=3)
    ground_truth = -np.log(0.5)
    assert(np.abs(history.history['loss'][-1] - ground_truth) < 0.06)
    
        # test lambda with output_mask lambda
    input_a = layers.Input(shape=input_shapes[0][1:])
    input_b = layers.Input(shape=input_shapes[1][1:])
    a = layers.Masking()(input_a)
    b = layers.Masking()(input_b)
    merged = legacy_layers.merge(
        [a, b], mode=lambda tup: K.concatenate([tup[0], tup[1]], axis=1),
        output_shape=lambda tup: (tup[0][0], tup[0][1] + tup[1][1]) + tup[0][2:],
        output_mask=lambda tup: K.concatenate([tup[0], tup[1]]))
    model = models.Model([input_a, input_b], merged)
    expected_output_shape = model.compute_output_shape(input_shapes)
    actual_output_shape = model.predict(inputs).shape
    assert expected_output_shape == actual_output_shape
    
        # Arguments
        config: dict of the form {'class_name': str, 'config': dict}
        custom_objects: dict mapping class names (or function names)
            of custom (non-Keras) objects to class/functions
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        # test serialization
    config = model.get_config()
    Sequential.from_config(config)
    
                    # Make it more robust by adding noise.
                # The idea is that if during inference,
                # the value of the pixel is not exactly one,
                # we need to train the network to be robust and still
                # consider it as a pixel belonging to a square.
                if np.random.randint(0, 2):
                    noise_f = (-1)**np.random.randint(0, 2)
                    noisy_movies[i, t,
                                 x_shift - w - 1: x_shift + w + 1,
                                 y_shift - w - 1: y_shift + w + 1,
                                 0] += noise_f * 0.1
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
sys.path.insert(0, os.path.abspath(os.path.join(here, '..')))
    
        # Additional stuff for the LaTeX preamble.
    #'preamble': '',
    
    def main(loc, colorscheme):
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running at: http://127.0.0.1:1234\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )