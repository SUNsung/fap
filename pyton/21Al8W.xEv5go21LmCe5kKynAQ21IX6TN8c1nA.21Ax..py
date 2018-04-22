
        
        :copyright: © 2010 by the Pallets team.
:license: BSD, see LICENSE for more details.
'''
    
    
def test_context_test(app):
    assert not flask.request
    assert not flask.has_request_context()
    ctx = app.test_request_context()
    ctx.push()
    try:
        assert flask.request
        assert flask.has_request_context()
    finally:
        ctx.pop()
    
    
@for_app('tar')
def match(command):
    return ('-C' not in command.script
            and _is_tar_extract(command.script)
            and _tar_file(command.script_parts) is not None)
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
      Raises:
    tf.errors.InvalidArgumentError: if batch_size or num_steps are too high.
  '''
  with tf.name_scope(name, 'PTBProducer', [raw_data, batch_size, num_steps]):
    raw_data = tf.convert_to_tensor(raw_data, name='raw_data', dtype=tf.int32)
    
      def __init__(self, multivalent_tokens=False):
    self._seq = tf.train.SequenceExample()
    self._flist = self._seq.feature_lists.feature_list
    self._timesteps = []
    self._multivalent_tokens = multivalent_tokens
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
            with server as (host, port):
            server_url = 'http://{0}:{1}'.format(host, port)
            for _ in range(requests_to_handle):
                r = requests.get(server_url)
                assert r.status_code == 200
    
    
class InvalidHeader(RequestException, ValueError):
    '''The header value provided was somehow invalid.'''
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
    setup(
    name=about['__title__'],
    version=about['__version__'],
    description=about['__description__'],
    long_description=readme + '\n\n' + history,
    author=about['__author__'],
    author_email=about['__author_email__'],
    url=about['__url__'],
    packages=packages,
    package_data={'': ['LICENSE', 'NOTICE'], 'requests': ['*.pem']},
    package_dir={'requests': 'requests'},
    include_package_data=True,
    python_requires='>=2.6, !=3.0.*, !=3.1.*, !=3.2.*, !=3.3.*',
    install_requires=requires,
    license=about['__license__'],
    zip_safe=False,
    classifiers=(
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'Natural Language :: English',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy'
    ),
    cmdclass={'test': PyTest},
    tests_require=test_requirements,
    extras_require={
        'security': ['pyOpenSSL>=0.14', 'cryptography>=1.3.4', 'idna>=2.0.0'],
        'socks': ['PySocks>=1.5.6, !=1.5.7'],
        'socks:sys_platform == 'win32' and (python_version == '2.7' or python_version == '2.6')': ['win_inet_pton'],
    },
)

    
        def test_bad_utf_like_encoding(self):
        assert guess_json_utf(b'\x00\x00\x00\x00') is None
    
                try:
                resp.content  # Consume socket so it can be released
            except (ChunkedEncodingError, ContentDecodingError, RuntimeError):
                resp.raw.read(decode_content=False)
    
            with pytest.raises(ValueError):
            requests.post(url, files=['bad file data'])
    
    
def get_groups(data):
    groups = collections.defaultdict(list)
    
    from ansible.module_utils.urls import open_url
    
    # (c) 2016 Red Hat, Inc.
#
# This file is part of Ansible
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible.  If not, see <http://www.gnu.org/licenses/>.
'''CLI tool for downloading results from Shippable CI runs.'''
    
    # A hostname label, e.g. 'foo' in 'foo.example.com'. Consists of alphanumeric
# characters plus dashes (and underscores) or valid ranges. The label may not
# start or end with a hyphen or an underscore. This is interpolated into the
# hostname pattern below. We don't try to enforce the 63-char length limit.
    
        old_layer = keras.layers.GRU(2, init='normal',
                                 inner_init='glorot_uniform',
                                 inner_activation='hard_sigmoid',
                                 W_regularizer='l1',
                                 U_regularizer='l1',
                                 b_regularizer='l1',
                                 dropout_W=0.1,
                                 dropout_U=0.1,
                                 name='GRU')
    new_layer = keras.layers.GRU(2, kernel_initializer='normal',
                                 recurrent_initializer='glorot_uniform',
                                 recurrent_activation='hard_sigmoid',
                                 kernel_regularizer='l1',
                                 recurrent_regularizer='l1',
                                 bias_regularizer='l1',
                                 dropout=0.1,
                                 recurrent_dropout=0.1,
                                 name='GRU')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    
def class_to_source_link(cls):
    module_name = cls.__module__
    assert module_name[:6] == 'keras.'
    path = module_name.replace('.', '/')
    path += '.py'
    line = inspect.getsourcelines(cls)[-1]
    link = ('https://github.com/keras-team/'
            'keras/blob/master/' + path + '#L' + str(line))
    return '[[source]](' + link + ')'
    
    from keras.models import Sequential
from keras.engine.training import _weighted_masked_objective
from keras.layers import TimeDistributed, Masking, Dense
from keras.utils.test_utils import keras_test
from keras import losses
from keras import backend as K
    
    
@keras_test
def test_locallyconnected_1d():
    num_samples = 2
    num_steps = 8
    input_dim = 5
    filter_length = 3
    filters = 4
    padding = 'valid'
    strides = 1
    
            # test Merge (#2460)
        merged = legacy_layers.Merge(mode=mode)([input_a, input_b])
        model = models.Model([input_a, input_b], merged)
        model.compile('rmsprop', 'mse')
    
    
def test_convolutional_recurrent():
    num_row = 3
    num_col = 3
    filters = 2
    num_samples = 1
    input_channel = 2
    input_num_row = 5
    input_num_col = 5
    sequence_len = 2
    for data_format in ['channels_first', 'channels_last']:
    
        def reducer(self, key, value):
        '''Sum values for each key.
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
    
class Vehicle(metaclass=ABCMeta):
    
    
class Person(object):