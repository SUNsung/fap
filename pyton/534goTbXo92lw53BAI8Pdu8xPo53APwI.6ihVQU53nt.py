
        
        atom_template = atom_template.replace('@TIMESTAMP@', now_iso)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
    
if __name__ == '__main__':
    unittest.main()

    
    import blueprintexample
    
        app.config.update(dict(
        DATABASE=os.path.join(app.root_path, 'flaskr.db'),
        DEBUG=True,
        SECRET_KEY=b'_5#y2L'F4Q8z\n\xec]/',
        USERNAME='admin',
        PASSWORD='default'
    ))
    app.config.update(config or {})
    app.config.from_envvar('FLASKR_SETTINGS', silent=True)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    
def register(client, username, password, password2=None, email=None):
    '''Helper function to register a user'''
    if password2 is None:
        password2 = password
    if email is None:
        email = username + '@example.com'
    return client.post('/register', data={
        'username':     username,
        'password':     password,
        'password2':    password2,
        'email':        email,
    }, follow_redirects=True)
    
        model = Model(inputs=inputs, outputs=[output1, output2])
    
        y_merged = f_merged(X)
    y_expected = _to_list(merge_func(f_forward(X)[0], f_backward(X)[0]))
    assert len(y_merged) == len(y_expected)
    for x1, x2 in zip(y_merged, y_expected):
        assert_allclose(x1, x2, atol=1e-5)
    
    
@keras_test
def test_masking():
    np.random.seed(1337)
    x = np.array([[[1], [1]],
                  [[0], [0]]])
    model = Sequential()
    model.add(Masking(mask_value=0, input_shape=(2, 1)))
    model.add(TimeDistributed(Dense(1, kernel_initializer='one')))
    model.compile(loss='mse', optimizer='sgd')
    y = np.array([[[1], [1]],
                  [[1], [1]]])
    loss = model.train_on_batch(x, y)
    assert loss == 0
    
        cbk2 = callbacks.LambdaCallback(on_train_end=lambda x: 1)
    model.fit_generator(data_generator(True), len(X_train), epochs=1,
                        validation_data=(X_test, y_test),
                        callbacks=[cbk2])
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.layers import Embedding
from keras.layers import LSTM
from keras.layers import Conv1D, MaxPooling1D
from keras.datasets import imdb
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_truncated_normal(tensor_shape):
    _runner(initializers.TruncatedNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=None, target_max=2)
    
            model1 = get_model(shape, data_format)
        model2 = get_model(target_shape, target_data_format)
        conv = K.function([model1.input], [model1.layers[0].output])
    
        positive_values = get_standard_values()
    result = f([positive_values])[0]
    assert_allclose(result, positive_values * scale, rtol=1e-05)
    
    from ..utils.generic_utils import deserialize_keras_object
from ..engine import Layer
from ..engine import Input
from ..engine import InputLayer
from ..engine import InputSpec
from .merge import *
from .core import *
from .convolutional import *
from .pooling import *
from .local import *
from .recurrent import *
from .cudnn_recurrent import *
from .normalization import *
from .embeddings import *
from .noise import *
from .advanced_activations import *
from .wrappers import *
from .convolutional_recurrent import *
from ..legacy.layers import *
    
    
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
    
        def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
    # Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']
    
        @mock.patch('certbot.display.enhancements.util')
    def test_secure(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call())
    
    from certbot import interfaces
from certbot.plugins import common
    
    print 'PLUGIN_I18N_PATHS := ' + ','.join(os.path.relpath(plugin.path)
                                         for plugin in plugins
                                         if plugin.needs_translation)
    
    from pylons import tmpl_context as c
    
    api('wikibasepage', WikiJsonTemplate)
api('wikipagerevisions', WikiJsonTemplate)
api('wikiview', WikiViewJsonTemplate)
api('wikirevision', WikiRevisionJsonTemplate)
    
            res = AdminPage(content = AdminAwardWinners(award),
                        title='award winners').render()
        return res

    
        def GET_button_demo_page(self):
        # no buttons for domain listings -> redirect to top level
        if isinstance(c.site, DomainSR):
            return self.redirect('/buttons')
        return BoringPage(_('reddit buttons'),
                          show_sidebar = False, 
                          content=ButtonDemoPanel()).render()
    
            An iden is given as the `captcha` field with a `BAD_CAPTCHA`
        error, you should use this endpoint if you get a
        `BAD_CAPTCHA` error response.
    
    
def handle_awful_failure(fail_text):
    '''
    Makes sure that no errors generated in the error handler percolate
    up to the user unless debug is enabled.
    '''
    if g.debug:
        import sys
        s = sys.exc_info()
        # reraise the original error with the original stack trace
        raise s[1], None, s[2]
    try:
        # log the traceback, and flag the 'path' as the error location
        import traceback
        log.write_error_summary(fail_text)
        for line in traceback.format_exc().splitlines():
            g.log.error(line)
        return redditbroke % (make_failien_url(), websafe(fail_text))
    except:
        # we are doomed.  Admit defeat
        return 'This is an error that should never occur.  You win.'
