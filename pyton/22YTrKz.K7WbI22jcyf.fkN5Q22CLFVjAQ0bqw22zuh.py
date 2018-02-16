    CHUNK_SIZE = 1
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
@pytest.mark.parametrize('ssl_version', SSL_VERSION_ARG_MAPPING.keys())
def test_ssl_version(httpbin_secure, ssl_version):
    try:
        r = http(
            '--ssl', ssl_version,
            httpbin_secure + '/get'
        )
        assert HTTP_OK in r
    except SSLError as e:
        if ssl_version == 'ssl3':
            # pytest-httpbin doesn't support ssl3
            assert 'SSLV3_ALERT_HANDSHAKE_FAILURE' in str(e)
        else:
            raise
    
        def _migrate_implicit_content_type(self):
        '''Migrate the removed implicit_content_type config option'''
        try:
            implicit_content_type = self.pop('implicit_content_type')
        except KeyError:
            self.save()
        else:
            if implicit_content_type == 'form':
                self['default_options'].insert(0, '--form')
            self.save()
            self.load()

    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
        def test_youtube_matching(self):
        self.assertTrue(YoutubeIE.suitable('PLtS2H6bU1M'))
        self.assertFalse(YoutubeIE.suitable('https://www.youtube.com/watch?v=AV6J6_AeFEQ&playnext=1&list=PL4023E734DA416012'))  # 668
        self.assertMatch('http://youtu.be/BaW_jenozKc', ['youtube'])
        self.assertMatch('http://www.youtube.com/v/BaW_jenozKc', ['youtube'])
        self.assertMatch('https://youtube.googleapis.com/v/BaW_jenozKc', ['youtube'])
        self.assertMatch('http://www.cleanvideosearch.com/media/action/yt/watch?videoId=8v_4O44sfjM', ['youtube'])
    
    from test.helper import (
    FakeYDL,
    get_params,
)
from youtube_dl.compat import (
    compat_str,
    compat_urllib_request,
)
    
            title = self._html_search_regex(
            r'<div[^>]+style='float:left'[^>]*>\s*<h2>(.+?)</h2>', webpage, 'title')
        description = self._html_search_regex(
            r'>Description:</span>(.+?)</div>', webpage, 'description', default=None)
    
    from .onet import OnetBaseIE
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
                    # execute pre and post hooks in order
                for contract in reversed(contracts):
                    request = contract.add_pre_hook(request, results)
                for contract in contracts:
                    request = contract.add_post_hook(request, results)
    
    from sklearn.datasets import fetch_20newsgroups_vectorized
from sklearn.metrics import accuracy_score
from sklearn.utils.validation import check_array
    
        alpha = 0.01  # regularization parameter
    
        for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = RandomizedPCA(n_components=n_components, random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
    solutions = os.listdir(exercise_dir)
    
    data, rows, columns = make_biclusters(
    shape=(300, 300), n_clusters=5, noise=5,
    shuffle=False, random_state=0)
    
    if K.image_data_format() == 'channels_first':
    x_train = x_train.reshape(x_train.shape[0], 1, img_rows, img_cols)
    x_test = x_test.reshape(x_test.shape[0], 1, img_rows, img_cols)
    input_shape = (1, img_rows, img_cols)
else:
    x_train = x_train.reshape(x_train.shape[0], img_rows, img_cols, 1)
    x_test = x_test.reshape(x_test.shape[0], img_rows, img_cols, 1)
    input_shape = (img_rows, img_cols, 1)
    
    x_train = x_train.reshape(x_train.shape[0], -1, 1)
x_test = x_test.reshape(x_test.shape[0], -1, 1)
x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    import numpy as np
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.preprocessing.text import Tokenizer
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_uniform(tensor_shape):
    _runner(initializers.RandomUniform(minval=-1, maxval=1), tensor_shape,
            target_mean=0., target_max=1, target_min=-1)
    
    - We start with input sequences from a domain (e.g. English sentences)
    and correspding target sequences from another domain
    (e.g. French sentences).
- An encoder LSTM turns input sequences to 2 state vectors
    (we keep the last LSTM state and discard the outputs).
- A decoder LSTM is trained to turn the target sequences into
    the same sequence but offset by one timestep in the future,
    a training process called 'teacher forcing' in this context.
    Is uses as initial state the state vectors from the encoder.
    Effectively, the decoder learns to generate `targets[t+1...]`
    given `targets[...t]`, conditioned on the input sequence.
- In inference mode, when we want to decode unknown input sequences, we:
    - Encode the input sequence into state vectors
    - Start with a target sequence of size 1
        (just the start-of-sequence character)
    - Feed the state vectors and 1-char target sequence
        to the decoder to produce predictions for the next character
    - Sample the next character using these predictions
        (we simply use argmax).
    - Append the sampled character to the target sequence
    - Repeat until we generate the end-of-sequence character or we
        hit the character limit.