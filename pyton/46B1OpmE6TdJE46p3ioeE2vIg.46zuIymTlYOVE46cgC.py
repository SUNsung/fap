
        
        # Part of speech tags used in the paths.
POSTAGS = [
    'PAD',   'VERB',   'CONJ',   'NOUN',   'PUNCT',
    'ADP',   'ADJ',    'DET',    'ADV',    'PART',
    'NUM',   'X',      'INTJ',   'SYM',
]
    
        train_total_size = len(data_dict['train_data'])
    if train_total_size == 0:
      print('Did not load training set.')
    else:
      print('Found training set with number examples: ', train_total_size)
    
    rnn_a = generate_rnn(rnn_rngs[0], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnn_b = generate_rnn(rnn_rngs[1], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnns = [rnn_a, rnn_b]
    
      E = len(data_e)
  spikes_e = []
  for e in range(E):
    data = data_e[e]
    N,T = data.shape
    data_s = np.zeros([N,T]).astype(np.int)
    for n in range(N):
      f = data[n,:]
      s = rng.poisson(f*max_firing_rate*dt, size=T)
      data_s[n,:] = s
    spikes_e.append(data_s)
    
        tf.logging.info('Recovering Graph %s', gd_file)
    t = {}
    [t['states_init'], t['lstm/lstm_0/control_dependency'],
     t['lstm/lstm_1/control_dependency'], t['softmax_out'], t['class_ids_out'],
     t['class_weights_out'], t['log_perplexity_out'], t['inputs_in'],
     t['targets_in'], t['target_weights_in'], t['char_inputs_in'],
     t['all_embs'], t['softmax_weights'], t['global_step']
    ] = tf.import_graph_def(gd, {}, ['states_init',
                                     'lstm/lstm_0/control_dependency:0',
                                     'lstm/lstm_1/control_dependency:0',
                                     'softmax_out:0',
                                     'class_ids_out:0',
                                     'class_weights_out:0',
                                     'log_perplexity_out:0',
                                     'inputs_in:0',
                                     'targets_in:0',
                                     'target_weights_in:0',
                                     'char_inputs_in:0',
                                     'all_embs_out:0',
                                     'Reshape_3:0',
                                     'global_step:0'], name='')
    
    
def evaluate_ensemble(test_data_name, number_of_lms):
  ensemble = EnsembleLM(test_data_name)
  model_list = ['lm{:02d}'.format(i+1) for i in range(number_of_lms)]
  for model_name in model_list:
    ensemble.add_single_model(model_name)
  accuracy = ensemble.evaluate()
  print('Accuracy of {} LM(s) on {} = {}'.format(
      number_of_lms, test_data_name, accuracy))
    
      for sequence in sequences:
    indices = []
    for embedding in sequence:
      indices.append(np.argmax(embedding))
    batch_of_indices.append(indices)
  return batch_of_indices
    
    ssl = parser.add_argument_group(title='SSL')
ssl.add_argument(
    '--verify',
    default='yes',
    help='''
    Set to 'no' (or 'false') to skip checking the host's SSL certificate.
    Defaults to 'yes' ('true'). You can also pass the path to a CA_BUNDLE file
    for private certs. (Or you can set the REQUESTS_CA_BUNDLE environment
    variable instead.)
    '''
)
ssl.add_argument(
    '--ssl',  # TODO: Maybe something more general, such as --secure-protocol?
    dest='ssl_version',
    choices=list(sorted(SSL_VERSION_ARG_MAPPING.keys())),
    help='''
    The desired protocol version to use. This will default to
    SSL v2.3 which will negotiate the highest protocol that both
    the server and your installation of OpenSSL support. Available protocols
    may vary depending on OpenSSL installation (only the supported ones
    are shown here).
    
                # >leading or trailing LWS MAY be removed without
            # >changing the semantics of the field value'
            # -https://www.w3.org/Protocols/rfc2616/rfc2616-sec4.html
            # Also, requests raises `InvalidHeader` for leading spaces.
            value = value.strip()
    
        def __init__(self, conversion, formatting, **kwargs):
        super(PrettyStream, self).__init__(**kwargs)
        self.formatting = formatting
        self.conversion = conversion
        self.mime = self.msg.content_type.split(';')[0]
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    import pytest
    
    
def _implementation():
    '''Return a dict with the Python implementation and version.
    
    '''
requests.structures
~~~~~~~~~~~~~~~~~~~
    
            This attribute checks if the status code of the response is between
        400 and 600 to see if there was a client error or a server error. If
        the status code is between 200 and 400, this will return True. This
        is **not** a check to see if the response code is ``200 OK``.
        '''
        try:
            self.raise_for_status()
        except HTTPError:
            return False
        return True
    
    # The HTML theme for the epub output. Since the default themes are not
# optimized for small screen space, using the same theme for HTML and epub
# output is usually not wise. This defaults to 'epub', a theme designed to save
# visual space.
#epub_theme = 'epub'
    
    from .cifar import load_batch
from ..utils.data_utils import get_file
from .. import backend as K
import numpy as np
import os
    
    
def test_serializing_loss_class():
    orig_loss_class = MSE_MAE_loss(0.3)
    with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        serialized = losses.serialize(orig_loss_class)
    
    
```python
# First, let's define a RNN Cell, as a layer subclass.
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.layers import Embedding
from keras.layers import Conv1D, GlobalMaxPooling1D
from keras.datasets import imdb
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    batch_size = 64  # Batch size for training.
epochs = 100  # Number of epochs to train for.
latent_dim = 256  # Latent dimensionality of the encoding space.
num_samples = 10000  # Number of samples to train on.
# Path to the data txt file on disk.
data_path = 'fra-eng/fra.txt'
    
    model = Sequential()
model.add(Conv2D(32, kernel_size=(3, 3),
                 activation='relu',
                 input_shape=input_shape))
model.add(Conv2D(64, (3, 3), activation='relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))
model.add(Dropout(0.25))
model.add(Flatten())
model.add(Dense(128, activation='relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes, activation='softmax'))
    
        res = check_ip.check_ip(ip, host=top_domain, wait_time=wait_time)
    if not res:
        print('connect fail')
    elif res.ok:
        print('success, domain:%s handshake:%d' % (res.host, res.handshake_time))
    else:
        print('not support')
    
    import sys
import os
import re
import time
import struct
import zlib
import base64
import logging
import httplib
import urlparse
import errno
import string
    
    EOF = -1
    
        def test_encode_override(self):
        self.assertEqual('y', self.field.encode('y'))
    
    
class Signature(jose.Signature):
    '''ACME-specific Signature. Uses ACME-specific Header for customer fields.'''
    __slots__ = jose.Signature._orig_slots  # pylint: disable=no-member
    
    AUTOHSTS_PERMANENT = 31536000
'''Value for the last max-age of HSTS'''
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover
