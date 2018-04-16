
        
        
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
    - Preprocessing
    Sequence Preprocessing
    Text Preprocessing
    Image Preprocessing
    
        (X_train, y_train), (X_test, y_test) = get_test_data(num_train=train_samples,
                                                         num_test=test_samples,
                                                         input_shape=(input_dim,),
                                                         classification=True,
                                                         num_classes=num_classes)
    y_test = np_utils.to_categorical(y_test)
    y_train = np_utils.to_categorical(y_train)
    
    
@keras_test
def test_locallyconnected_1d():
    num_samples = 2
    num_steps = 8
    input_dim = 5
    filter_length = 3
    filters = 4
    padding = 'valid'
    strides = 1
    
        for data_format in ['channels_first', 'channels_last']:
        if data_format == 'channels_first':
            shape = (3, 5, 5)
            target_shape = (5, 5, 3)
            prev_shape = (2, 3, 2)
            flip = lambda x: np.flip(np.flip(x, axis=2), axis=3)
            transpose = lambda x: np.transpose(x, (0, 2, 3, 1))
            target_data_format = 'channels_last'
        elif data_format == 'channels_last':
            shape = (5, 5, 3)
            target_shape = (3, 5, 5)
            prev_shape = (2, 2, 3)
            flip = lambda x: np.flip(np.flip(x, axis=1), axis=2)
            transpose = lambda x: np.transpose(x, (0, 3, 1, 2))
            target_data_format = 'channels_first'
    
    
def get_test_values():
    return [0.1, 0.5, 3, 8, 1e-7]
    
    
@keras_test
def test_sequential_regression():
    # start with a basic example of using a Sequential model
    # inside the functional API
    seq = models.Sequential()
    seq.add(layers.Dense(10, input_shape=(10,)))
    
                # test for return state:
            x = Input(batch_shape=inputs.shape)
            kwargs = {'data_format': data_format,
                      'return_sequences': return_sequences,
                      'return_state': True,
                      'stateful': True,
                      'filters': filters,
                      'kernel_size': (num_row, num_col),
                      'padding': 'valid'}
            layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
            layer.build(inputs.shape)
            outputs = layer(x)
            output, states = outputs[0], outputs[1:]
            assert len(states) == 2
            model = Model(x, states[0])
            state = model.predict(inputs)
            np.testing.assert_allclose(
                K.eval(layer.states[0]), state, atol=1e-4)
    
    from ..utils.generic_utils import deserialize_keras_object
from ..engine import Layer
from ..engine import Input
from ..engine import InputLayer
from ..engine import InputSpec
from .merge import *
from .core import *
from .convolutional import *
from .pooling import *
from .local import *
from .recurrent import *
from .cudnn_recurrent import *
from .normalization import *
from .embeddings import *
from .noise import *
from .advanced_activations import *
from .wrappers import *
from .convolutional_recurrent import *
from ..legacy.layers import *
    
      Args:
    filename: The name of the current file.
    clean_lines: A CleansedLines instance containing the file.
    linenum: The number of the line to check.
    error: The function to call with any errors found.
  '''