
        
        from __future__ import print_function
import keras
from keras.layers import Dense, Conv2D, BatchNormalization, Activation
from keras.layers import AveragePooling2D, Input, Flatten
from keras.optimizers import Adam
from keras.callbacks import ModelCheckpoint, LearningRateScheduler
from keras.callbacks import ReduceLROnPlateau
from keras.preprocessing.image import ImageDataGenerator
from keras.regularizers import l2
from keras import backend as K
from keras.models import Model
from keras.datasets import cifar10
import numpy as np
import os
    
        if K.image_data_format() == 'channels_last':
        x_train = x_train.transpose(0, 2, 3, 1)
        x_test = x_test.transpose(0, 2, 3, 1)
    
            self.bias_i_i = self.bias[:self.units]
        self.bias_f_i = self.bias[self.units: self.units * 2]
        self.bias_c_i = self.bias[self.units * 2: self.units * 3]
        self.bias_o_i = self.bias[self.units * 3: self.units * 4]
        self.bias_i = self.bias[self.units * 4: self.units * 5]
        self.bias_f = self.bias[self.units * 5: self.units * 6]
        self.bias_c = self.bias[self.units * 6: self.units * 7]
        self.bias_o = self.bias[self.units * 7:]
    
    model.compile(loss='binary_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])