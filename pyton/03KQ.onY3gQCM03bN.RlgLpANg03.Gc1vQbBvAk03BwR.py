
        
        try:
    from urllib3.contrib import pyopenssl
except ImportError:
    pyopenssl = None
    OpenSSL = None
    cryptography = None
else:
    import OpenSSL
    import cryptography
    
    def test_fragment_not_sent_with_request():
    '''Verify that the fragment portion of a URI isn't sent to the server.'''
    def response_handler(sock):
        req = consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 200 OK\r\n'
            b'Content-Length: '+bytes(len(req))+b'\r\n'
            b'\r\n'+req
        )
    
        def test_text_response(self):
        '''the text_response_server sends the given text'''
        server = Server.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 6\r\n' +
            '\r\nroflol'
        )
    
            ('hTTp://u:p@Some.Host/path', 'socks5://some.host.proxy', all_proxies),
        ('hTTp://u:p@Other.Host/path', 'socks5://http.proxy', all_proxies),
        ('hTTp:///path', 'socks5://http.proxy', all_proxies),
        ('hTTps://Other.Host', 'socks5://http.proxy', all_proxies),
    
        # Input shape
        2D tensor of shape (samples, n)
    
    model = Sequential()
model.add(Conv2D(32, kernel_size=(3, 3),
                 activation='relu',
                 input_shape=input_shape))
model.add(Conv2D(64, (3, 3), activation='relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))
model.add(Dropout(0.25))
model.add(Flatten())
model.add(Dense(128, activation='relu', name='features'))
model.add(Dropout(0.5))
model.add(Dense(num_classes, activation='softmax'))
    
        y_a = K.variable(np.random.randint(0, 7, (6,)))
    y_b = K.variable(np.random.random((6, 7)))
    assert K.eval(losses.sparse_categorical_crossentropy(y_a, y_b)).shape == (6,)
    
        # Arguments
        y: class vector to be converted into a matrix
            (integers from 0 to num_classes).
        num_classes: total number of classes.
        dtype: The data type expected by the input, as a string
            (`float32`, `float64`, `int32`...)
    
        def get_config(self):
        config = {'units': self.units,
                  'activation': activations.serialize(self.activation),
                  'recurrent_activation':
                      activations.serialize(self.recurrent_activation),
                  'use_bias': self.use_bias,
                  'kernel_initializer':
                      initializers.serialize(self.kernel_initializer),
                  'recurrent_initializer':
                      initializers.serialize(self.recurrent_initializer),
                  'bias_initializer': initializers.serialize(self.bias_initializer),
                  'kernel_regularizer':
                      regularizers.serialize(self.kernel_regularizer),
                  'recurrent_regularizer':
                      regularizers.serialize(self.recurrent_regularizer),
                  'bias_regularizer': regularizers.serialize(self.bias_regularizer),
                  'kernel_constraint': constraints.serialize(self.kernel_constraint),
                  'recurrent_constraint':
                      constraints.serialize(self.recurrent_constraint),
                  'bias_constraint': constraints.serialize(self.bias_constraint),
                  'dropout': self.dropout,
                  'recurrent_dropout': self.recurrent_dropout,
                  'implementation': self.implementation,
                  'reset_after': self.reset_after}
        base_config = super(GRUCell, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))
    
        for epoch in range(initial_epoch, epochs):
        # Reset stateful metrics
        for m in model.stateful_metric_functions:
            m.reset_states()
        callbacks.on_epoch_begin(epoch)
        epoch_logs = {}
        if steps_per_epoch is not None:
            for step_index in range(steps_per_epoch):
                batch_logs = {}
                batch_logs['batch'] = step_index
                batch_logs['size'] = 1
                callbacks.on_batch_begin(step_index, batch_logs)
                outs = fit_function(fit_inputs)
    
    This network is used to predict the next frame of an artificially
generated movie which contains moving squares.
'''
from keras.models import Sequential
from keras.layers.convolutional import Conv3D
from keras.layers.convolutional_recurrent import ConvLSTM2D
from keras.layers.normalization import BatchNormalization
import numpy as np
import pylab as plt
    
                if fail or self.network_stat != 'OK':
                # Fail or unknown
                if time_now - self.last_check_time < 3:
                    return
            else:
                if time_now - self.last_check_time < 10:
                    return
    
    And tree.TreeParser finally fetches its input from a tree.TreeNodeStream:
    
    
    def __str__(self):
        if self.inserted is not None and self.token is not None:
            return 'MissingTokenException(inserted %r at %r)' % (
                self.inserted, self.token.text)
    
        def decode(self, value):
        if value != self.value:
            raise jose.DeserializationError('Expected {0!r}'.format(self.value))
        return self.value
    
            self.config.recovery_routine()
        self.assertEqual(mock_load.call_count, 1)
    
            achall = self.achalls[0]
        self.sni.add_chall(achall)
        response = self.achalls[0].response(self.auth_key)
        mock_setup_cert = mock.MagicMock(return_value=response)
        # pylint: disable=protected-access
        self.sni._setup_challenge_cert = mock_setup_cert
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
        entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
    from ..common import *
from ..extractor import VideoExtractor
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
    # (api_key, method, ext, page)
tmpl_api_call = (
    'https://api.flickr.com/services/rest?'
    '&format=json&nojsoncallback=1'
    # UNCOMMENT FOR TESTING
    #'&per_page=5'
    '&per_page=500'
    # this parameter CANNOT take control of 'flickr.galleries.getPhotos'
    # though the doc said it should.
    # it's always considered to be 500
    '&api_key=%s'
    '&method=flickr.%s'
    '&extras=url_sq,url_q,url_t,url_s,url_n,url_m,url_z,url_c,url_l,url_h,url_k,url_o,media'
    '%s&page=%d'
)
    
            return new_key

    
    try:
	xrange		#Python 2
except NameError:
	xrange = range	#Python 3
    
    	TEMPORARY_ARRAY = [ element for element in ARRAY[1:] if element >= PIVOT ]
	TEMPORARY_ARRAY = [PIVOT] + longestSub(TEMPORARY_ARRAY)
	if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
		return TEMPORARY_ARRAY
	else:
		return LONGEST_SUB
    
    def md5me(testString):
	'''[summary]
	Returns a 32-bit hash code of the string 'testString'
    
    start_time = time.time()
print('creating word list...')
path = os.path.split(os.path.realpath(__file__))
word_list = sorted(list(set([word.strip().lower() for word in open(path[0] + '/words')])))