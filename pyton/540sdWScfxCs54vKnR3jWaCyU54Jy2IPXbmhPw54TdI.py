
        
        error_msg = None
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
def test_unicode_url_query_arg_item_verbose(httpbin):
    r = http('--verbose', httpbin.url + '/get', u'test==%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    network.add_argument(
    '--timeout',
    type=float,
    default=30,
    metavar='SECONDS',
    help='''
    The connection timeout of the request in seconds. The default value is
    30 seconds.
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
try:
    release = pkg_resources.get_distribution('Flask').version
except pkg_resources.DistributionNotFound:
    print('Flask must be installed to build the documentation.')
    print('Install from source using `pip install -e .` in a virtualenv.')
    sys.exit(1)
    
    
def login(client, username, password):
    return client.post('/login', data=dict(
        username=username,
        password=password
    ), follow_redirects=True)
    
        (x_train, y_train), (x_test, y_test), (sample_weight, class_weight, test_ids) = _get_test_data()
    
        # a Model inside a Sequential
    x = Input(shape=(1,))
    y = Dense(2)(x)
    inner_model = Model(x, y)
    outer_model = Sequential()
    outer_model.add(inner_model)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.layers import Embedding
from keras.layers import LSTM
from keras.layers import Conv1D, MaxPooling1D
from keras.datasets import imdb
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_constant(tensor_shape):
    _runner(initializers.Constant(2), tensor_shape,
            target_mean=2, target_max=2, target_min=2)
    
    
@keras_test
def test_unit_norm():
    unit_norm_instance = constraints.unit_norm()
    normalized = unit_norm_instance(K.variable(get_example_array()))
    norm_of_normalized = np.sqrt(np.sum(K.eval(normalized) ** 2, axis=0))
    # In the unit norm constraint, it should be equal to 1.
    difference = norm_of_normalized - 1.
    largest_difference = np.max(np.abs(difference))
    assert(np.abs(largest_difference) < 10e-5)
    
        model = Sequential()
    model.add(layers.TimeDistributed(
        layers.Dense(y_train.shape[-1]), input_shape=(x_train.shape[1], x_train.shape[2])))
    model.compile(loss='hinge', optimizer='rmsprop')
    history = model.fit(x_train, y_train, epochs=20, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert(history.history['loss'][-1] < 1.)
    
        config = model.get_config()
    model = models.Model.from_config(config)
    model.compile('rmsprop', 'mse')
    
    
def test_softplus():
    '''Test using a reference softplus implementation.
    '''
    def softplus(x):
        return np.log(np.ones_like(x) + np.exp(x))
    
    
@keras_test
def test_vector_classification():
    '''
    Classify random float vectors into 2 classes with logistic regression
    using 2 layer neural network with ReLU hidden units.
    '''
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    y_train = to_categorical(y_train)
    y_test = to_categorical(y_test)
    
        # cuts down input size going into RNN:
    inner = Dense(time_dense_size, activation=act, name='dense1')(inner)
    
    
appbuilder = AppBuilder(
    app,
    db.session,
    base_template='superset/base.html',
    indexview=MyIndexView,
    security_manager_class=app.config.get('CUSTOM_SECURITY_MANAGER'),
    update_perms=utils.get_update_perms_flag(),
)
    
        @classmethod
    def query_datasources_by_name(
            cls, session, database, datasource_name, schema=None):
        datasource_class = ConnectorRegistry.sources[database.type]
        return datasource_class.query_datasources_by_name(
            session, database, datasource_name, schema=None)

    
    # add your model's MetaData object here
# for 'autogenerate' support
# from myapp import mymodel
from flask import current_app