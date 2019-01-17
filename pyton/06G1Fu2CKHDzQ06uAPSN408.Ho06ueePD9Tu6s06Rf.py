
        
        from __future__ import print_function
import keras
from keras.models import Sequential
from keras import layers
from keras.datasets import mnist
from keras import backend as K
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape[1:])(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x)
    x2 = np.transpose(x, (0, 3, 1, 2))
    inputs2 = Input(shape=x2.shape[1:])
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape[1:])(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2)
    assert_allclose(out1, out2.transpose(0, 2, 3, 1))
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
    
def test_regularization_shared_model():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
        # Input shape
        5D tensor with shape:
        `(samples, timesteps, channels, rows, cols)` if data_format='channels_first'
        or 5D tensor with shape:
        `(samples, timesteps, rows, cols, channels)` if data_format='channels_last'.
    
                if set_inputs:
                if len(layer._inbound_nodes[-1].output_tensors) != 1:
                    raise ValueError('All layers in a Sequential model '
                                     'should have a single output tensor. '
                                     'For multi-output layers, '
                                     'use the functional API.')
                self.outputs = [layer._inbound_nodes[-1].output_tensors[0]]
                self.inputs = network.get_source_inputs(self.outputs[0])
        elif self.outputs:
            output_tensor = layer(self.outputs[0])
            if isinstance(output_tensor, list):
                raise TypeError('All layers in a Sequential model '
                                'should have a single output tensor. '
                                'For multi-output layers, '
                                'use the functional API.')
            self.outputs = [output_tensor]
        if self.inputs:
            self.build()
        else:
            self._layers.append(layer)
    
    # Testing the network on one movie
# feed it with the first 7 positions and then
# predict the new positions
which = 1004
track = noisy_movies[which][:7, ::, ::, ::]
    
        def bulk_insert(self, values):
        i = 1
        self.__aux_list = values
        for value in values:
            self.insert_data(value)
            self._step_by_step(i)
            i += 1
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
        def __solveDP(self, x, y):
        if (x==-1):
            return y+1
        elif (y==-1):
            return x+1
        elif (self.dp[x][y]>-1):
            return self.dp[x][y]
        else:
            if (self.A[x]==self.B[y]):
                self.dp[x][y] = self.__solveDP(x-1,y-1)
            else:
                self.dp[x][y] = 1+min(self.__solveDP(x,y-1), self.__solveDP(x-1,y), self.__solveDP(x-1,y-1))
    
        def mean_squared_error(self, labels, prediction):
        '''
        mean_squared_error:
        @param labels: a one dimensional numpy array 
        @param prediction: a floating point value
        return value: mean_squared_error calculates the error if prediction is used to estimate the labels
        '''
        if labels.ndim != 1:
            print('Error: Input labels must be one dimensional')
    
      3. find centroids and clusters using kmeans function.
  
        centroids, cluster_assignment = kmeans(
            X, 
            k, 
            initial_centroids, 
            maxiter=400,
            record_heterogeneity=heterogeneity, 
            verbose=True # whether to print logs in console or not.(default=False)
            )
  
  
  4. Plot the loss function, hetrogeneity values for every iteration saved in hetrogeneity list.
        plot_heterogeneity(
            heterogeneity, 
            k
        )
  
  5. Have fun..
  
'''
from __future__ import print_function
from sklearn.metrics import pairwise_distances
import numpy as np
    
            a += a
        b >>= 1
    
        for uncommonLetter in ETAOIN[-6:]:
        if uncommonLetter in freqOrder[-6:]:
            matchScore += 1