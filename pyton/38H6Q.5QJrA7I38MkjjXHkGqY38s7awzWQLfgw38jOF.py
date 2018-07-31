
        
            # test stacked bidirectional layers
    model = keras.Sequential()
    model.add(keras.layers.Bidirectional(rnn(output_dim,
                                             return_sequences=True),
                                         merge_mode=mode,
                                         input_shape=(None, dim)))
    model.add(keras.layers.Bidirectional(rnn(output_dim), merge_mode=mode))
    model.compile(loss='mse', optimizer='sgd')
    model.fit(x, y, epochs=1, batch_size=1)
    
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
    
    # Convolution
kernel_size = 5
filters = 64
pool_size = 4
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
    
@keras_test
def test_masked_temporal():
    '''
    Confirm that even with masking on both inputs and outputs, cross-entropies are
    of the expected scale.
    
    
@keras_test
def test_vector_regression():
    '''
    Perform float data prediction (regression) using 2 layer MLP
    with tanh and sigmoid activations.
    '''
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         output_shape=(num_classes,),
                                                         classification=False)
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=15,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test,
                            batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loaded_model = keras.models.load_model(model_filename)
        loaded_model.predict(np.random.rand(128, 2))
    
    
def load_data():
    '''Loads CIFAR10 dataset.
    
    from .cifar import load_batch
from ..utils.data_utils import get_file
from .. import backend as K
import numpy as np
import os