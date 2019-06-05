
        
            plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        session = Session(path)
    session.load()
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
    import gzip
import os
    
        ```python
         ..
         # Not needed to change the device scope for model definition:
         model = Xception(weights=None, ..)
    
    # Stack of Transposed Conv2D blocks
# Notes:
# 1) Use Batch Normalization before ReLU on deep networks
# 2) Use UpSampling2D as alternative to strides>1
# - faster but not as good as strides>1
for filters in layer_filters[::-1]:
    x = Conv2DTranspose(filters=filters,
                        kernel_size=kernel_size,
                        strides=2,
                        activation='relu',
                        padding='same')(x)
    
    import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Activation
from keras.layers import SimpleRNN
from keras import initializers
from keras.optimizers import RMSprop
    
    model = Sequential()
model.add(Dense(512, activation='relu', input_shape=(784,)))
model.add(Dropout(0.2))
model.add(Dense(512, activation='relu'))
model.add(Dropout(0.2))
model.add(Dense(num_classes, activation='softmax'))
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
        def setUp(self):
        self.privkey = KEY
        self.pubkey = self.privkey.public_key()
        self.nonce = jose.b64encode(b'Nonce')
        self.url = 'hi'
        self.kid = 'baaaaa'
    
        @certbot_util.patch_get_utility()
    def test_successful_choice(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 3)
        self.assertEqual(self.vhosts[3], self._call(self.vhosts))
    
        # Additional stuff for the LaTeX preamble.
    #'preamble': '',
    
    .. caution::
   You should protect these API credentials as you would the password to your
   DigitalOcean account. Users who can read this file can use these credentials
   to issue arbitrary API calls on your behalf. Users who can cause Certbot to
   run using these credentials can complete a ``dns-01`` challenge to acquire
   new certificates or revoke existing certificates for associated domains,
   even if those domains aren't being managed by this server.
    
    # The reST default role (used for this markup: `text`) to use for all
# documents.
#default_role = None
    
    import math
from sklearn import neighbors
import os
import os.path
import pickle
from PIL import Image, ImageDraw
import face_recognition
from face_recognition.face_recognition_cli import image_files_in_folder
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
            if file.filename == '':
            return redirect(request.url)
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)
    
            if match[0]:
            name = 'Barack Obama'
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
    import tensorflow as tf
    
    
# TODO(huay): char_cnn_embedding
def char_cnn_embedding(x, c_embed_size=8, share_cnn_weights=True, name='char_cnn_embedding', reuse=None):
    '''
    In:  [N, max_n_word, max_n_char]
    Out: [N, max_n_word, c_embed_size]
    
    
# # Test
# def attention_flow_2(h, u, T=None, J=None, d=None, name=None, reuse=None):
#     '''Attention Flow Match Layer
#     Input shape:
#         h: [N, T, d]  # 原文中的 shape 为 [N, T, 2d], 因为经过了 bi-LSTM, 维度扩了一倍
#         u: [N, J, d]
#     Output shape:
#         [N, T, 4d]
# 
#     Args:
#         h: context encoding     shape: [N, T, d]
#         u: question encoding    shape: [N, J, d]
#         T(int): context length
#         J(int): question length
#         d(int): features size
#         name(str):
#         reuse(bool):
# 
#     Returns:
# 
#     '''
#     print('Test')
#     d = d or int(h.get_shape()[-1])
#     T = T or int(h.get_shape()[-2])
#     J = J or int(u.get_shape()[-2])
# 
#     with tf.variable_scope(name or 'attention_flow', reuse=reuse):
#         h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])
#         u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])
#         hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
#         h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
#         W_s = get_w([3 * d, 1])  # [3d, 1]
# 
#         # similarity matrix
#         # S = tf.reshape(tf.einsum('ntjd,do->ntjo', h_u_hu, W_s), [-1, T, J])
#         # 以上操作等价于
#         S = tf.reshape(tf.matmul(tf.reshape(h_u_hu, [-1, 3 * d]), W_s), [-1, T, J])
# 
#         # 得到 S 后，下面的操作就与 `attention_flow_self` 一样了
# 
#         # u_tilde(u~): context to question attended query vectors
#         u_tilde = tf.matmul(softmax(S), u)  # [N, T, d]
# 
#         # h_tilde(h~): question to context attended query vectors
#         b = tf.reduce_max(S, axis=2)  # [N, T]
#         b = softmax(b, axis=-1)  # [N, T]
#         b = tf.expand_dims(b, axis=1)  # [N, 1, T]
#         h_tilde = tf.matmul(b, h)  # [N, 1, d]
#         h_tilde = tf.tile(h_tilde, [1, T, 1])  # [N, T, d]
# 
#         g = tf.concat([h, u_tilde, h * u_tilde, h * h_tilde], axis=-1)  # [N, T, 4d]
# 
#     return g
