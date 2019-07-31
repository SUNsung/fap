import re
import sys
    
                # Inferring the output shape is only relevant for Theano.
            if all([s is not None
                    for s in to_list(input_shape)]):
                output_shape = self.compute_output_shape(input_shape)
            else:
                if isinstance(input_shape, list):
                    output_shape = [None for _ in input_shape]
                else:
                    output_shape = None
    
    
def build_discriminator():
    # build a relatively standard conv net, with LeakyReLUs as suggested in
    # the reference paper
    cnn = Sequential()
    
    for i, (input_text, target_text) in enumerate(zip(input_texts, target_texts)):
    for t, char in enumerate(input_text):
        encoder_input_data[i, t, input_token_index[char]] = 1.
    for t, char in enumerate(target_text):
        # decoder_target_data is ahead of decoder_input_data by one timestep
        decoder_input_data[i, t, target_token_index[char]] = 1.
        if t > 0:
            # decoder_target_data will be ahead by one timestep
            # and will not include the start character.
            decoder_target_data[i, t - 1, target_token_index[char]] = 1.
    
    from keras.models import Model, load_model
from keras.layers import Input
import numpy as np
    
        with tempfile.NamedTemporaryFile('wb', delete=True) as f:
        np.savez(f, x=x, y=y)
        monkeypatch.setattr(boston_housing, 'get_file',
                            lambda *args, **kwargs: f.name)
        yield f.name
    
        # Returns
        string, one of `'th'`, `'tf'`
    '''
    if _IMAGE_DATA_FORMAT == 'channels_first':
        return 'th'
    else:
        return 'tf'

    
    
@pytest.mark.skipif((K.backend() == 'cntk'),
                    reason='CNTK backend does not support top_k yet')
def test_top_k_categorical_accuracy():
    y_pred = K.variable(np.array([[0.3, 0.2, 0.1], [0.1, 0.2, 0.7]]))
    y_true = K.variable(np.array([[0, 1, 0], [1, 0, 0]]))
    success_result = K.eval(metrics.top_k_categorical_accuracy(y_true, y_pred,
                                                               k=3))
    assert np.mean(success_result) == 1
    partial_result = K.eval(metrics.top_k_categorical_accuracy(y_true, y_pred,
                                                               k=2))
    assert np.mean(partial_result) == 0.5
    failure_result = K.eval(metrics.top_k_categorical_accuracy(y_true, y_pred,
                                                               k=1))
    assert np.mean(failure_result) == 0
    
            # Arguments
            epoch: integer, index of epoch.
            logs: dict, metric results for this training epoch, and for the
                validation epoch if validation is performed. Validation result keys
                are prefixed with `val_`.
        '''
        logs = logs or {}
        for callback in self.callbacks:
            callback.on_epoch_end(epoch, logs)
    
        def env(self):
        '''
        Return an environment.
    
        def _guess_method(self):
        '''Set `args.method` if not specified to either POST or GET
        based on whether the request has data or not.
    
            `stdout` is represented by the instance itself (print r)
        `stderr`: text written to stderr
        `exit_status`: the exit status
        `json`: decoded JSON (if possible) or `None`
    
    
PACKAGES = [
    'httpie',
    'Pygments',
    'requests',
    'certifi',
    'urllib3',
    'idna',
    'chardet',
    'PySocks',
]
    
                if isinstance(value, str):
                # See: https://github.com/jakubroztocil/httpie/issues/212
                value = value.encode('utf8')
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    if __name__ == '__main__':
    noarch_lib = os.path.abspath( os.path.join(python_path, 'lib', 'noarch'))
    sys.path.append(noarch_lib)
    
            for lock in locks:
            # mimick Thread.join()
            lock.acquire()
            lock.release()
    
        def test_guess_all_types(self):
        eq = self.assertEqual
        unless = self.assertTrue
        # First try strict.  Use a set here for testing the results because if
        # test_urllib2 is run before test_mimetypes, global state is modified
        # such that the 'all' set will have more items in it.
        all = set(self.db.guess_all_extensions('text/plain', strict=True))
        unless(all >= set(['.bat', '.c', '.h', '.ksh', '.pl', '.txt']))
        # And now non-strict
        all = self.db.guess_all_extensions('image/jpg', strict=False)
        all.sort()
        eq(all, ['.jpg'])
        # And now for no hits
        all = self.db.guess_all_extensions('image/jpg', strict=True)
        eq(all, [])
    
    class SMTPNotSupportedError(SMTPException):
    '''The command or option is not supported by the SMTP server.
    
    def run_bandwidth_test(func, args, nthreads):
    # Create a listening socket to receive the packets. We use UDP which should
    # be painlessly cross-platform.
    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as sock:
        sock.bind(('127.0.0.1', 0))
        addr = sock.getsockname()
    
        def put_nowait(self, item):
        '''Put an item into the queue without blocking.
    
        def __contains__(self, name):
        return name.lower() in [k.lower() for k, v in self._headers]
    
            # This structure suggested by Stephen J. Turnbull...may not exist/be
        # supported in the wild, but we want to support it.
        'mixed_related_alternative_plain_html': (
            (1, 4, 3),
            (6, 7),
            (1, 6, 7),
            textwrap.dedent('''\
                To: foo@example.com
                MIME-Version: 1.0
                Content-Type: multipart/mixed; boundary='==='
    
        def setUp(self):
        self.cx = sqlite.connect(':memory:')
        self.cu = self.cx.cursor()
        self.cu.execute('''
          CREATE TABLE test(
            id INTEGER PRIMARY KEY, name TEXT, unique_name TEXT UNIQUE
          );
        ''')