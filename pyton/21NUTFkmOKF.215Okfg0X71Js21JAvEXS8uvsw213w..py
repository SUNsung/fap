
        
        
def test_unicode_raw_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
        :param content_range: the value of a Content-Range response header
                          eg. 'bytes 21010-47021/47022'
    :param resumed_from: first byte pos. from the Range request header
    :return: total size of the response body when fully downloaded.
    
            '''
        raise NotImplementedError()
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        temporal_sample_weight = np.reshape(sample_weight, (len(sample_weight), 1))
    temporal_sample_weight = np.repeat(temporal_sample_weight, timesteps, axis=1)
    
        # with constructor argument, in Model
    x = Input(shape=(1,))
    y = Dense(2, trainable=False)(x)
    model = Model(x, y)
    assert model.trainable_weights == []
    
        Consider a Numpy data array `x` of shape `(samples, timesteps, features)`,
    to be fed to an LSTM layer.
    You want to mask timestep #3 and #5 because you lack data for
    these timesteps. You can:
    
        x = np.random.random((1, 3))
    y = np.random.random((1, 3))
    model.train_on_batch(x, y)
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    from keras import backend as K
from keras.models import Sequential, Model
from keras.layers import convolutional_recurrent, Input
from keras.utils.test_utils import layer_test
from keras import regularizers
    
    seq = Sequential()
seq.add(ConvLSTM2D(filters=40, kernel_size=(3, 3),
                   input_shape=(None, 40, 40, 1),
                   padding='same', return_sequences=True))
seq.add(BatchNormalization())
    
        def test_repr(self):
        self.assertEqual('PollError(exhausted=%s, updated={sentinel.AR: '
                         'sentinel.AR2})' % repr(set()), repr(self.invalid))
    
            # Self test
        self.assertTrue(self.addr.conflicts(self.addr))
        self.assertTrue(self.addr1.conflicts(self.addr1))
        # This is a tricky one...
        self.assertTrue(self.addr1.conflicts(self.addr2))