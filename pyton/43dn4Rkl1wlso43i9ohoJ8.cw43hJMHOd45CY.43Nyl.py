
        
          Args:
    hps: The dictionary of hyperparameters.
    datasets: A dictionary of data dictionaries.  The dataset dict is simply a
      name(string)-> data dictionary mapping (See top of lfads.py).
    output_fname (optional): output filename stem to write the model runs.
    push_mean: if False (default), generates batch_size samples for each trial
      and averages the results. if True, runs each trial once without noise,
      pushing the posterior mean initial conditions and control inputs through
      the trained model. False is used for posterior_sample_and_average, True
      is used for posterior_push_mean.
  '''
  model = build_model(hps, kind=hps.kind, datasets=datasets)
  model.write_model_runs(datasets, output_fname, push_mean)
    
      def word_to_char_ids(self, word):
    if word in self._word_to_id:
      return self._word_char_ids[self._word_to_id[word]]
    else:
      return self._convert_word_to_char_ids(word)
    
    
def _LoadModel(gd_file, ckpt_file):
  '''Load the model from GraphDef and Checkpoint.
    
    
def cross_entropy_loss_matrix(gen_labels, gen_logits):
  '''Computes the cross entropy loss for G.
    
      # Unstack Tensors into lists.
  rewards_list = tf.unstack(rewards, axis=1)
  log_probs_list = tf.unstack(log_probs, axis=1)
  missing = 1. - tf.cast(present, tf.float32)
  missing_list = tf.unstack(missing, axis=1)
    
            if error is None:
            # the name is available, store it in the database and go to
            # the login page
            db.execute(
                'INSERT INTO user (username, password) VALUES (?, ?)',
                (username, generate_password_hash(password))
            )
            db.commit()
            return redirect(url_for('auth.login'))
    
        def add_url_rule(self, rule, endpoint=None, view_func=None, **options):
        '''Like :meth:`Flask.add_url_rule` but for a blueprint.  The endpoint for
        the :func:`url_for` function is prefixed with the name of the blueprint.
        '''
        if endpoint:
            assert '.' not in endpoint, 'Blueprint endpoints should not contain dots'
        if view_func and hasattr(view_func, '__name__'):
            assert '.' not in view_func.__name__, 'Blueprint view function name should not contain dots'
        self.record(lambda s:
            s.add_url_rule(rule, endpoint, view_func, **options))
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
    _date_strip_re = re.compile(r'(?<=\d)(st|nd|rd|th)')
    
        # Arguments
        l1: Float; L1 regularization factor.
        l2: Float; L2 regularization factor.
    '''
    
    
def test_cifar():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = cifar10.load_data()
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('fine')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('coarse')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
    
    
def test_sparse_categorical_crossentropy_4d():
    y_pred = K.variable(np.array([[[[0.7, 0.1, 0.2],
                                    [0.0, 0.3, 0.7],
                                    [0.1, 0.1, 0.8]],
                                   [[0.3, 0.7, 0.0],
                                    [0.3, 0.4, 0.3],
                                    [0.2, 0.5, 0.3]],
                                   [[0.8, 0.1, 0.1],
                                    [1.0, 0.0, 0.0],
                                    [0.4, 0.3, 0.3]]]]))
    y_true = K.variable(np.array([[[0, 1, 0],
                                   [2, 1, 0],
                                   [2, 2, 1]]]))
    expected_loss = - (np.log(0.7) + np.log(0.3) + np.log(0.1) +
                       np.log(K.epsilon()) + np.log(0.4) + np.log(0.2) +
                       np.log(0.1) + np.log(K.epsilon()) + np.log(0.3)) / 9
    loss = K.eval(losses.sparse_categorical_crossentropy(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
    To use this with Keras, we make a dataset out of elements
of the form (input batch, output batch). From there, we
create a one-shot iterator and a graph node corresponding
to its get_next() method. Its components are then provided
to the network's Input layer and the Model.compile() method,
respectively.
    
    
class UnrewindableBodyError(RequestException):
    '''Requests encountered an error when trying to rewind a body'''
    
        def __eq__(self, other):
        if isinstance(other, Mapping):
            other = CaseInsensitiveDict(other)
        else:
            return NotImplemented
        # Compare insensitively
        return dict(self.lower_items()) == dict(other.lower_items())
    
        @possible_keys
    def test_delitem(self, key):
        del self.case_insensitive_dict[key]
        assert key not in self.case_insensitive_dict
    
            Operator:                  '#582800',   # class: 'o'
        Operator.Word:             'bold #004461',   # class: 'ow' - like keywords
    
       >>> import requests
   >>> r = requests.get('https://www.python.org')
   >>> r.status_code
   200
   >>> 'Python is a programming language' in r.content
   True
    
        def list_domains(self):
        '''Utility method to list all the domains in the jar.'''
        domains = []
        for cookie in iter(self):
            if cookie.domain not in domains:
                domains.append(cookie.domain)
        return domains
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
        with server as (host, port):
        url = u'http://{}:{}'.format(host, port)
        r = requests.get(url=url, allow_redirects=True)
        assert r.status_code == 200
        assert len(r.history) == 1
        assert r.history[0].status_code == 301
        assert redirect_request[0].startswith(b'GET /' + expected_path + b' HTTP/1.1')
        assert r.url == u'{}/{}'.format(url, expected_path.decode('ascii'))
    
    
@pytest.mark.parametrize(
    'url, expected', (
            ('http://192.168.0.1:5000/', True),
            ('http://192.168.0.1/', True),
            ('http://172.16.1.1/', True),
            ('http://172.16.1.1:5000/', True),
            ('http://localhost.localdomain:5000/v1.0/', True),
            ('http://172.16.1.12/', False),
            ('http://172.16.1.12:5000/', False),
            ('http://google.com:5000/v1.0/', False),
    ))
def test_should_bypass_proxies_no_proxy(
        url, expected, monkeypatch):
    '''Tests for function should_bypass_proxies to check if proxy
    can be bypassed or not using the 'no_proxy' argument
    '''
    no_proxy = '192.168.0.0/24,127.0.0.1,localhost.localdomain,172.16.1.1'
    # Test 'no_proxy' argument
    assert should_bypass_proxies(url, no_proxy=no_proxy) == expected
    
            Will successfully encode files when passed as a dict or a list of
        tuples. Order is retained if data is a list of tuples but arbitrary
        if parameters are supplied as a dict.
        The tuples may be 2-tuples (filename, fileobj), 3-tuples (filename, fileobj, contentype)
        or 4-tuples (filename, fileobj, contentype, custom_headers).
        '''
        if (not files):
            raise ValueError('Files must be provided.')
        elif isinstance(data, basestring):
            raise ValueError('Data must not be a string.')
    
        zip_file = zipfile.ZipFile(archive)
    if member not in zip_file.namelist():
        return path
    
        Code is a simple port of what is already in the /scripts directory
    
    try:
	raw_input		#Python 2
except NameError:
	raw_input = input	#Python 3
    
    The problem is  :
Given an array, to find the longest and continuous sub array and get the max sum of the sub array in the given array.
'''
from __future__ import print_function
    
    Usage:
  1. define 'k' value, 'X' features array and 'hetrogeneity' empty list
  
  2. create initial_centroids,
        initial_centroids = get_initial_centroids(
            X, 
            k, 
            seed=0 # seed value for initial centroid generation, None for randomness(default=None)
            )