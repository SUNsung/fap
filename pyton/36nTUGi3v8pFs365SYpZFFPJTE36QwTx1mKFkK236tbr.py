
        
                Punctuation:               'bold #000000',   # class: 'p'
    
    
def delete(url, **kwargs):
    r'''Sends a DELETE request.
    
    
        return Server(text_response_handler, **kwargs)
    
            # Nottin' on you.
        body = None
        content_type = None
    
            with server as (host, port):
            r = requests.get('http://{0}:{1}'.format(host, port))
    
        # Check cryptography version
    from cryptography import __version__ as cryptography_version
    _check_cryptography(cryptography_version)
except ImportError:
    pass
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
    class PyTest(TestCommand):
    user_options = [('pytest-args=', 'a', 'Arguments to pass into py.test')]
    
        def test_response_reason_unicode(self):
        # check for unicode HTTP status
        r = requests.Response()
        r.url = u'unicode URL'
        r.reason = u'Komponenttia ei löydy'.encode('utf-8')
        r.status_code = 404
        r.encoding = None
        assert not r.ok  # old behaviour - crashes here
    
        model.train_on_batch(x_train[:32], y_train[:32],
                         sample_weight=sample_weight[:32])
    model.test_on_batch(x_train[:32], y_train[:32],
                        sample_weight=sample_weight[:32])
    
    
@keras_test
def test_global_maxpooling2d_legacy_interface():
    old_layer = keras.layers.GlobalMaxPooling2D(dim_ordering='tf', name='global_maxpool2d')
    new_layer = keras.layers.GlobalMaxPool2D(data_format='channels_last', name='global_maxpool2d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
        has_raise = re.findall(r'^\s*raise \S+', code, re.MULTILINE)
    if has_raise and '# Raises' not in doc:
        innerfunction = [inspect.getsource(x) for x in member.__code__.co_consts if
                         inspect.iscode(x)]
        raise_in_sub = [ret for code_inner in innerfunction for ret in
                        re.findall(r'\s*raise \S+', code_inner, re.MULTILINE)]
        if len(raise_in_sub) < len(has_raise):
            raise ValueError('{} needs a '# Raises' section'.format(name),
                             member.__module__)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_normal(tensor_shape):
    _runner(initializers.RandomNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=1)
    
    
@pytest.mark.skipif(K.backend() != 'tensorflow', reason='Requires TensorFlow backend')
@keras_test
def test_embedding_with_clipnorm():
    model = Sequential()
    model.add(layers.Embedding(input_dim=1, output_dim=1))
    model.compile(optimizer=optimizers.SGD(clipnorm=0.1), loss='mse')
    model.fit(np.array([[0]]), np.array([[[0.5]]]), epochs=1)
    
    
def test_serialization():
    all_activations = ['softmax', 'relu', 'elu', 'tanh',
                       'sigmoid', 'hard_sigmoid', 'linear',
                       'softplus', 'softsign', 'selu']
    for name in all_activations:
        fn = activations.get(name)
        ref_fn = getattr(activations, name)
        assert fn == ref_fn
        config = activations.serialize(fn)
        fn = activations.deserialize(config)
        assert fn == ref_fn
    
    
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
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
    
def rmse(a, b):
    return np.sqrt(np.mean((a - b) ** 2))
    
        selected_algorithm = opts.selected_algorithm.split(',')
    for key in selected_algorithm:
        if key not in default_algorithms.split(','):
            raise ValueError('Unknown sampling algorithm \'%s\' not in (%s).'
                             % (key, default_algorithms))
    
        An example with a long-untouched module that everyone has
    >>> _linkcode_resolve('py', {'module': 'tty',
    ...                          'fullname': 'setraw'},
    ...                   package='tty',
    ...                   url_fmt='http://hg.python.org/cpython/file/'
    ...                           '{revision}/Lib/{package}/{path}#L{lineno}',
    ...                   revision='xxxx')
    'http://hg.python.org/cpython/file/xxxx/Lib/tty/tty.py#L18'
    '''
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
    n_classifiers = len(classifiers)
    
        if not opts and not args:
        # Display help.
        print(_help)
        # Enter GUI mode.
        #from .gui import gui_main
        #gui_main()
    else:
        conf = {}
        for opt, arg in opts:
            if opt in ('-h', '--help'):
                # Display help.
                print(_help)
    
        title = r1(r'<meta name='description' content='([^']*)'', html)
    flashvars = r1(r'flashvars='(type=[^']*)'', html)
    
    class MusicPlayOn(VideoExtractor):
    name = 'MusicPlayOn'
    
        def get_old_value(self, args, kwargs, default=None):
        # type: (List[Any], Dict[str, Any], Any) -> Any
        '''Returns the old value of the named argument without replacing it.
    
        @gen_test
    def test_put_timeout(self):
        q = queues.Queue(1)
        q.put_nowait(0)  # Now it's full.
        put_timeout = q.put(1, timeout=timedelta(seconds=0.01))
        put = q.put(2)
        with self.assertRaises(TimeoutError):
            yield put_timeout
    
    
class ComposeHandler(BaseHandler):
    @tornado.web.authenticated
    def get(self):
        id = self.get_argument('id', None)
        entry = None
        if id:
            entry = self.db.get('SELECT * FROM entries WHERE id = %s', int(id))
        self.render('compose.html', entry=entry)
    
    import os.path
import tornado.auth
import tornado.escape
import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web