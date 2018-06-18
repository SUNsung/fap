
        
            # Sorting the libraries
    inner_blocks = sorted(blocks[0].split('##'))
    for i in range(1 , len(inner_blocks)):
        if inner_blocks[i][0] != '#':
            inner_blocks[i] = '##' + inner_blocks[i]
    inner_blocks=''.join(inner_blocks)
    
        def get_cookie_domain(self, app):
        '''Returns the domain that should be set for the session cookie.
    
        def __init__(self, app, **options):
        if 'loader' not in options:
            options['loader'] = app.create_global_jinja_loader()
        BaseEnvironment.__init__(self, **options)
        self.app = app
    
    
@pytest.mark.parametrize('encoding', ['utf-8', 'iso-8859-15', 'latin-1'])
def test_from_pyfile_weird_encoding(tmpdir, encoding):
    f = tmpdir.join('my_config.py')
    f.write_binary(textwrap.dedent(u'''
    # -*- coding: {0} -*-
    TEST_VALUE = 'föö'
    '''.format(encoding)).encode(encoding))
    app = flask.Flask(__name__)
    app.config.from_pyfile(str(f))
    value = app.config['TEST_VALUE']
    if PY2:
        value = value.decode(encoding)
    assert value == u'föö'

    
        stream = StringIO()
    client.get('/', errors_stream=stream)
    assert 'ERROR in test_logging: test' in stream.getvalue()
    
        @app.errorhandler(Foo)
    def handle_foo(e):
        return str(e.whatever)
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
    # Default QA1 with 1000 samples
# challenge = 'tasks_1-20_v1-2/en/qa1_single-supporting-fact_{}.txt'
# QA1 with 10,000 samples
# challenge = 'tasks_1-20_v1-2/en-10k/qa1_single-supporting-fact_{}.txt'
# QA2 with 1000 samples
challenge = 'tasks_1-20_v1-2/en/qa2_two-supporting-facts_{}.txt'
# QA2 with 10,000 samples
# challenge = 'tasks_1-20_v1-2/en-10k/qa2_two-supporting-facts_{}.txt'
with tarfile.open(path) as tar:
    train = get_stories(tar.extractfile(challenge.format('train')))
    test = get_stories(tar.extractfile(challenge.format('test')))
    
        # Arguments
        path: where to cache the data (relative to `~/.keras/dataset`).
        num_words: max number of words to include. Words are ranked
            by how often they occur (in the training set) and only
            the most frequent words are kept
        skip_top: skip the top N most frequently occurring words
            (which may not be informative).
        maxlen: sequences longer than this will be filtered out.
        seed: random seed for sample shuffling.
        start_char: The start of a sequence will be marked with this character.
            Set to 1 because 0 is usually the padding character.
        oov_char: words that were cut out because of the `num_words`
            or `skip_top` limit will be replaced with this character.
        index_from: index actual words with this index and higher.
    
    
def get(identifier):
    if isinstance(identifier, dict):
        config = {'class_name': str(identifier), 'config': {}}
        return deserialize(config)
    elif isinstance(identifier, six.string_types):
        return deserialize(str(identifier))
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret '
                         'metric function identifier:', identifier)

    
            outputs = self.model.evaluate(x, y, **kwargs)
        if not isinstance(outputs, list):
            outputs = [outputs]
        for name, output in zip(self.model.metrics_names, outputs):
            if name == 'acc':
                return output
        raise ValueError('The model is not configured to compute accuracy. '
                         'You should pass `metrics=['accuracy']` to '
                         'the `model.compile()` method.')
    
        # 50% of the time the correct output is the input.
    # The other 50% of the time it's 2 * input % 10
    y = (x * np.random.random_integers(1, 2, x.shape)) % 10
    ys = np.zeros((y.size, 10), dtype='int32')
    for i, target in enumerate(y.flat):
        ys[i, target] = 1
    ys = ys.reshape(y.shape + (10,))
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        ###########################################################################
    # Set custom tracking based method
    sampling_algorithm['custom-tracking-selection'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='tracking_selection',
                                       random_state=random_state)
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
    
if not os.path.exists(DATA_FOLDER):
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
        def __init__(self):
        self.observers = []
        self.surface = None
        self.data = []
        self.cls = None
        self.surface_type = 0
    
    # Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: BSD 3 clause