
        
        import six
from . import backend as K
from .utils.generic_utils import serialize_keras_object
from .utils.generic_utils import deserialize_keras_object
    
    x = Conv2DTranspose(filters=1,
                    kernel_size=kernel_size,
                    padding='same')(x)
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    mse = MSE = mean_squared_error
mae = MAE = mean_absolute_error
mape = MAPE = mean_absolute_percentage_error
msle = MSLE = mean_squared_logarithmic_error
kld = KLD = kullback_leibler_divergence
cosine = cosine_proximity
    
        Returns:
        dict
    '''
    tokens = tokenizer.tokenize(txt)
    tokens = [word_clean(token) for token in tokens]
    
        in_channels = get_shape(x)[-1]
    kernel_shape = list(kernel_size) + [in_channels, out_channels]  # [kernel_h, kernel_w, in_channels, out_channels]
    
        def _call(self, x):
        ''''''
        o = self.act_fn(tf.matmul(x, self.W) + self.b)
        return o
    
    References:
    https://github.com/fomorians/highway-fcn
    https://github.com/fomorians/highway-cnn
'''
import tensorflow as tf
    
    References:
    [paper] Bidirectional Attention Flow for Machine Comprehension (https://arxiv.org/abs/1611.01603)
    [github/DuReader] https://github.com/baidu/DuReader/blob/master/tensorflow/layers/match_layer.py
    [github/BiDAF(PyTorch)] https://github.com/jojonki/BiDAF/blob/master/layers/bidaf.py
'''
    
    
class ZipStream(file):
    def __init__(self, dir_path):
        self.dir_path = dir_path
        self.pos = 0
        self.zf = zipfile.ZipFile(self, 'w', zipfile.ZIP_DEFLATED, allowZip64 = True)
        self.buff = StringIO.StringIO()
        self.file_list = self.getFileList()