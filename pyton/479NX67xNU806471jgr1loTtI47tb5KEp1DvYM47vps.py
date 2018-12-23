
        
        model.compile(loss='categorical_crossentropy',
              optimizer=Adam(lr=lr_schedule(0)),
              metrics=['accuracy'])
model.summary()
print(model_type)
    
    from .cifar import load_batch
from ..utils.data_utils import get_file
from .. import backend as K
import numpy as np
import os
    
        return (x_train, y_train), (x_test, y_test)

    
        with gzip.open(paths[1], 'rb') as imgpath:
        x_train = np.frombuffer(imgpath.read(), np.uint8,
                                offset=16).reshape(len(y_train), 28, 28)
    
    
class L1L2(Regularizer):
    '''Regularizer for L1 and L2 regularization.
    
    
def test_activity_regularization():
    x_train, y_train = get_data()
    for reg in [regularizers.l1(), regularizers.l2()]:
        model = create_model(activity_regularizer=reg)
        model.compile(loss='categorical_crossentropy', optimizer='sgd')
        assert len(model.losses) == 1
        model.train_on_batch(x_train, y_train)
    
        @classmethod
    def from_config(cls, config):
        return cls(**config)
    
    
batch_size = 32
num_classes = 10
epochs = 100
num_predictions = 20
save_dir = '/tmp/saved_models'
model_name = 'keras_cifar10_trained_model.h5'