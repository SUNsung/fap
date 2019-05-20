
        
            softmax = self.sess.run(self.tensors['softmax_out'], feed_dict={
        self.tensors['inputs_in']: input_ids,
        self.tensors['char_inputs_in']: input_char_ids
    })
    
    
def generator_GAN_loss(predictions):
  '''Generator GAN loss based on Discriminator predictions.'''
  return -tf.log(tf.reduce_mean(predictions))
    
        rewards = rewards_half
    critic_loss = None
    maintain_averages_op = None
    baselines = tf.stack(baselines, axis=1)
    advantages = tf.stack(advantages, axis=1)
    
    
def init_fn(init_savers, sess):
  '''The init_fn to be passed to the Supervisor.
    
      return decoder_fn
    
            flash(error)
    
        def logout(self):
        return self._client.get('/auth/logout')
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
    # We're not exposing the actual json module but a convenient wrapper around
# it.
from . import json
    
        def __get__(self, obj, type=None):
        if obj is None:
            return self
        rv = obj.config[self.__name__]
        if self.get_converter is not None:
            rv = self.get_converter(rv)
        return rv
    
            if index is None:
            self.order.append(tag)
        else:
            self.order.insert(index, tag)
    
        if not has_level_handler(logger):
        logger.addHandler(default_handler)
    
            # server name not set, cache False to return none next time
        if not rv:
            app.config['SESSION_COOKIE_DOMAIN'] = False
            return None
    
            for blueprint in self.app.iter_blueprints():
            loader = blueprint.jinja_loader
            if loader is not None:
                for template in loader.list_templates():
                    result.add(template)
    
        fpath = os.path.join(path, 'test')
    x_test, y_test = load_batch(fpath, label_key=label_mode + '_labels')
    
    from keras.applications import imagenet_utils as utils
from keras.models import Model
from keras.layers import Input, Lambda
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        deserialized = losses.deserialize(serialized)
    assert isinstance(deserialized, MSE_MAE_loss)
    assert deserialized.mse_fraction == 0.3
    
    
def test_activity_regularization():
    x_train, y_train = get_data()
    for reg in [regularizers.l1(), regularizers.l2()]:
        model = create_model(activity_regularizer=reg)
        model.compile(loss='categorical_crossentropy', optimizer='sgd')
        assert len(model.losses) == 1
        model.train_on_batch(x_train, y_train)
    
        available_devices = _get_available_devices()
    available_devices = [_normalize_device_name(name)
                         for name in available_devices]
    if not gpus:
        # Using all visible GPUs when not specifying `gpus`
        # e.g. CUDA_VISIBLE_DEVICES=0,2 python keras_mgpu.py
        gpus = len([x for x in available_devices if 'gpu' in x])
    
    # MNIST dataset
(x_train, _), (x_test, _) = mnist.load_data()
    
    
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
    
class BasicAuthPlugin(BuiltinAuthPlugin):
    
        Assumes `from __future__ import division`.
    
    USERNAME = 'user'
PASSWORD = 'password'
# Basic auth encoded `USERNAME` and `PASSWORD`
# noinspection SpellCheckingInspection
BASIC_AUTH_HEADER_VALUE = 'Basic dXNlcjpwYXNzd29yZA=='
BASIC_AUTH_URL = '/basic-auth/{0}/{1}'.format(USERNAME, PASSWORD)
AUTH_OK = {'authenticated': True, 'user': USERNAME}
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    from httpie import ExitStatus
from httpie.core import main
    
    
if __name__ == '__main__':
    from glmnet.elastic_net import Lasso as GlmnetLasso
    from sklearn.linear_model import Lasso as ScikitLasso
    # Delayed import of matplotlib.pyplot
    import matplotlib.pyplot as plt
    
    exercise_dir = os.path.dirname(__file__)
if exercise_dir == '':
    exercise_dir = '.'
    
    import time
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.parasite_axes import host_subplot
from mpl_toolkits.axisartist.axislines import Axes
from scipy.sparse.csr import csr_matrix
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
                plt.subplots_adjust(bottom=0, top=.89, wspace=0,
                                left=0, right=1)
            plt.suptitle('n_cluster=%i, connectivity=%r' %
                         (n_clusters, connectivity is not None), size=17)
    
    When we apply clustering to the data, we find that the clustering
reflects what was in the distance matrices. Indeed, for the Euclidean
distance, the classes are ill-separated because of the noise, and thus
the clustering does not separate the waveforms. For the cityblock
distance, the separation is good and the waveform classes are recovered.
Finally, the cosine distance does not separate at all waveform 1 and 2,
thus the clustering puts them in the same cluster.
'''
# Author: Gael Varoquaux
# License: BSD 3-Clause or CC-0
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
            def __init__(self, method=SSL.SSLv23_METHOD):
            self.method = method
    
        def handleResponse(self, response):
        if self.factory.method.upper() == b'HEAD':
            self.factory.page(b'')
        elif self.length is not None and self.length > 0:
            self.factory.noPage(self._connection_lost_reason)
        else:
            self.factory.page(response)
        self.transport.loseConnection()
    
    from acme import test_util
    
    REWRITE_HTTPS_ARGS_WITH_END = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,NE,R=permanent]']
'''Apache version >= 2.3.9 rewrite rule arguments used for redirections to
    https vhost'''
    
       # CloudXNS API credentials used by Certbot
   dns_cloudxns_api_key = 1234567890abcdef1234567890abcdef
   dns_cloudxns_secret_key = 1122334455667788