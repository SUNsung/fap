
        
            states_t_bxn, outputs_t_bxn = sess.run([states_t, outputs_t],
                                           feed_dict=feed_dict)
    states_nxt = np.transpose(np.squeeze(np.asarray(states_t_bxn)))
    outputs_t_bxn = np.squeeze(np.asarray(outputs_t_bxn))
    r_sxt = np.dot(P_nxn, states_nxt)
    
    rates_b, x0s_b, _ = generate_data(rnn_b, T=T, E=E, x0s=x0s, P_sxn=P_nxn,
                                  input_magnitude=0.0, input_times=None)
spikes_b = spikify_data(rates_b, rng, rnn_b['dt'], rnn_b['max_firing_rate'])
    
    
def split_list_by_inds(data, inds1, inds2):
  '''Take the data, a list, and split it up based on the indices in inds1 and
  inds2.
  Args:
    data: the list of data to split
    inds1, the first list of indices
    inds2, the second list of indices
  Returns: a 2-tuple of two lists.
  '''
  if data is None or len(data) == 0:
    return [], []
  else:
    dout1 = [data[i] for i in inds1]
    dout2 = [data[i] for i in inds2]
    return dout1, dout2
    
      word_to_id = build_vocab(train_path)
  train_data = _file_to_word_ids(train_path, word_to_id)
  valid_data = _file_to_word_ids(valid_path, word_to_id)
  test_data = _file_to_word_ids(test_path, word_to_id)
  vocabulary = len(word_to_id)
  return train_data, valid_data, test_data, vocabulary
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
      Args:
    session:  Current tf.Session.
    percent_real_update: tf.assign operation.
    new_rate: tf.placeholder for the new rate.
    current_rate: Percent of tokens that are currently real.  Fake tokens
      are the ones being imputed by the Generator.
  '''
  session.run(percent_real_update, feed_dict={new_rate: current_rate})
    
    
def get_default_headers(args):
    default_headers = CaseInsensitiveDict({
        'User-Agent': DEFAULT_UA
    })
    
        for factor, suffix in abbrevs:
        if n >= factor:
            break
    
        '''
    return path.replace('\\', '\\\\\\')
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    
filenames = list(rst_filenames())
assert filenames
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        def save(self, must_create=False):
        if self.session_key is None:
            return self.create()
        if must_create:
            func = self._cache.add
        elif self._cache.get(self.cache_key) is not None:
            func = self._cache.set
        else:
            raise UpdateError
        result = func(self.cache_key,
                      self._get_session(no_load=must_create),
                      self.get_expiry_age())
        if must_create and not result:
            raise CreateError
    
        def __delitem__(self, key):
        delattr(self._connections, key)
    
    # global parameters
batch_size = 128
num_classes = 10
epochs = 40
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
    
def get(identifier):
    if identifier is None:
        return None
    if isinstance(identifier, dict):
        return deserialize(identifier)
    elif isinstance(identifier, six.string_types):
        config = {'class_name': str(identifier), 'config': {}}
        return deserialize(config)
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret regularizer identifier: ' +
                         str(identifier))

    
    from .conv_utils import convert_kernel
from .. import backend as K
import numpy as np
    
        # Test single image
    x = np.random.uniform(0, 255, (10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
    
def create_model(kernel_regularizer=None, activity_regularizer=None):
    model = Sequential()
    model.add(Dense(num_classes,
                    kernel_regularizer=kernel_regularizer,
                    activity_regularizer=activity_regularizer,
                    input_shape=(data_dim,)))
    return model
    
    from .training_utils import batch_shuffle
from .training_utils import make_batches
from .training_utils import check_num_samples
from .. import backend as K
from .. import callbacks as cbks
from ..utils.generic_utils import Progbar
from ..utils.generic_utils import slice_arrays
from ..utils.generic_utils import to_list
from ..utils.generic_utils import unpack_singleton
    
    
class CloudFrontInvalidationValidationManager(object):
    '''
    Manages Cloudfront validations for invalidation batches
    '''
    
        def _remote_state(self):
        '''Returns the remote state from AWS'''
        description = self.rule.describe()
        if not description:
            return
        return description['state']
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        autoscaling = boto3_conn(module, conn_type='client', resource='autoscaling', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
    '''
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        region=dict(required=True, aliases=['aws_region', 'ec2_region']),
        name_regex=dict(required=True),
        sort_order=dict(required=False, default='ascending', choices=['ascending', 'descending']),
        limit=dict(required=False, type='int'),
    )
    )
    
            if state == 'present':
            result['created'] = False
            if not repo:
                repo = ecr.create_repository(registry_id, name)
                result['changed'] = True
                result['created'] = True
            result['repository'] = repo
    
    
def get_aws_account_id(module):
    try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        client = boto3_conn(module, conn_type='client', resource='sts',
                            region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Can't authorize connection')
    
        name = module.params.get('name')
    state = module.params.get('state')
    replication_id = module.params.get('replication_id')
    cluster_id = module.params.get('cluster_id')
    target = module.params.get('target')
    bucket = module.params.get('bucket')
    
    
@AWSRetry.exponential_backoff()
def list_iam_attached_role_policies_with_backoff(client, role_name):
    paginator = client.get_paginator('list_attached_role_policies')
    return paginator.paginate(RoleName=role_name).build_full_result()['AttachedPolicies']
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        iam = boto3_conn(module, conn_type='client', resource='iam', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Boto3 Client Error - ' + str(e.msg))
    
    # The following will set the Dev alias to the latest version ($LATEST) since version is omitted (or = 0)
  - name: 'alias 'Dev' for function {{ lambda_facts.FunctionName }} '
    lambda_alias:
      state: '{{ state | default('present') }}'
      function_name: '{{ lambda_facts.FunctionName }}'
      name: Dev
      description: Development is $LATEST version
    
    import scrapy
from scrapy.crawler import CrawlerProcess
from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
from scrapy.utils.misc import walk_modules
from scrapy.utils.project import inside_project, get_project_settings
from scrapy.utils.python import garbage_collect
from scrapy.settings.deprecated import check_deprecated_settings
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
            def __init__(self, method=SSL.SSLv23_METHOD):
            self.method = method
    
        if len(sys.argv) > 3:
        wait_time = int(sys.argv[3])
    else:
        wait_time = 0
    
    
class RC4FileObject(object):
    '''fileobj for rc4'''
    def __init__(self, stream, key):
        self.__stream = stream
        self.__cipher = _Crypto_Cipher_ARC4_new(key) if key else lambda x:x
    def __getattr__(self, attr):
        if attr not in ('__stream', '__cipher'):
            return getattr(self.__stream, attr)
    def read(self, size=-1):
        return self.__cipher.encrypt(self.__stream.read(size))
    
    EOF = -1
    
            Lines are numbered 1..n
        
        Using setter/getter methods is deprecated. Use o.line instead.'''
    
        '''Simply echoes the msg ids'''
    
        @classmethod
    def setUpClass(self):
        self.radio = Radio()
    
        def handle(self, request):
        res = self._handle(request)
        if not res:
            self._successor.handle(request)
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
        def __get__(self, obj, T):
        def transaction(*args, **kwargs):
            state = memento(obj)
            try:
                return self.method(obj, *args, **kwargs)
            except Exception as e:
                state()
                raise e
    
    *Where is the pattern used practically?
    
    
class Person(object):
    def __init__(self, name, occupation):
        self.name = name
        self.occupation = occupation
        self.call_count2 = 0