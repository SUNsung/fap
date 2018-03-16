
        
            assert history.history['acc'] != history.history['weighted_acc']
    
        def compute_output_shape(self, input_shape):
        child_input_shape = (input_shape[0],) + input_shape[2:]
        child_output_shape = self.layer.compute_output_shape(child_input_shape)
        timesteps = input_shape[1]
        return (child_output_shape[0], timesteps) + child_output_shape[1:]
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
    model = Sequential()
model.add(Embedding(max_features, embedding_size, input_length=maxlen))
model.add(Dropout(0.25))
model.add(Conv1D(filters,
                 kernel_size,
                 padding='valid',
                 activation='relu',
                 strides=1))
model.add(MaxPooling1D(pool_size=pool_size))
model.add(LSTM(lstm_output_size))
model.add(Dense(1))
model.add(Activation('sigmoid'))
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_zero(tensor_shape):
    _runner(initializers.zeros(), tensor_shape,
            target_mean=0., target_max=0.)
    
    
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
    
    
def test_softmax_valid():
    '''Test using a reference implementation of softmax.
    '''
    def softmax(values):
        m = np.max(values)
        e = np.exp(values - m)
        return e / np.sum(e)
    
    This network is used to predict the next frame of an artificially
generated movie which contains moving squares.
'''
from keras.models import Sequential
from keras.layers.convolutional import Conv3D
from keras.layers.convolutional_recurrent import ConvLSTM2D
from keras.layers.normalization import BatchNormalization
import numpy as np
import pylab as plt
    
        def __init__(self):
        self.msg_queue = []
        self.subscribers = {}
    
    
class HexViewer: