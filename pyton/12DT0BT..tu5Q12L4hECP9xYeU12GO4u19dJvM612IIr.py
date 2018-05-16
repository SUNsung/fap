
        
        
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or dict()
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    from requests.structures import CaseInsensitiveDict, LookupDict
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
    Requests is an HTTP library, written in Python, for human beings. Basic GET
usage:
    
    from .auth import _basic_auth_str
from .compat import cookielib, is_py3, OrderedDict, urljoin, urlparse
from .cookies import (
    cookiejar_from_dict, extract_cookies_to_jar, RequestsCookieJar, merge_cookies)
from .models import Request, PreparedRequest, DEFAULT_REDIRECT_LIMIT
from .hooks import default_hooks, dispatch_hook
from ._internal_utils import to_native_string
from .utils import to_key_val_list, default_headers
from .exceptions import (
    TooManyRedirects, InvalidSchema, ChunkedEncodingError, ContentDecodingError)
    
        'hostport': re.compile(
        r'''^
            ((?:                        # We want to match:
                [^:\[\]]                # (a non-range character
                |                       # ...or...
                \[[^\]]*\]              # a complete bracketed expression)
            )*)                         # repeated as many times as possible
            :([0-9]+)                   # followed by a port number
            $
        ''', re.X
    ),
    
    
def test_classify_build_fn():
    clf = KerasClassifier(
        build_fn=build_fn_clf, hidden_dims=hidden_dims,
        batch_size=batch_size, epochs=epochs)
    
    
WEIGHTS_PATH = 'https://github.com/fchollet/deep-learning-models/releases/download/v0.5/inception_v3_weights_tf_dim_ordering_tf_kernels.h5'
WEIGHTS_PATH_NO_TOP = 'https://github.com/fchollet/deep-learning-models/releases/download/v0.5/inception_v3_weights_tf_dim_ordering_tf_kernels_notop.h5'
    
        # Block 5
    x = Conv2D(512, (3, 3), activation='relu', padding='same', name='block5_conv1')(x)
    x = Conv2D(512, (3, 3), activation='relu', padding='same', name='block5_conv2')(x)
    x = Conv2D(512, (3, 3), activation='relu', padding='same', name='block5_conv3')(x)
    x = Conv2D(512, (3, 3), activation='relu', padding='same', name='block5_conv4')(x)
    x = MaxPooling2D((2, 2), strides=(2, 2), name='block5_pool')(x)
    
            inputs = Input((None, dim))
        outputs = wrappers.Bidirectional(rnn(output_dim, dropout=dropout_rate,
                                             recurrent_dropout=dropout_rate),
                                         merge_mode=mode)(inputs)
        model = Model(inputs, outputs)
        model.compile(loss='mse', optimizer='sgd')
        model.fit(x, y, epochs=1, batch_size=1)
    
        assert len(merge_layer._inbound_nodes) == 1
    assert len(merge_layer._outbound_nodes) == 0
    
                # Test with `shuffle=True`
            for x, y in generator.flow(images, np.arange(images.shape[0]),
                                       shuffle=True, save_to_dir=str(tmpdir),
                                       batch_size=3):
                assert x.shape == images[:3].shape
                # Check that the sequence is shuffled.
                assert list(y) != [0, 1, 2]
                break
    
    
@pytest.mark.skipif((K.backend() != 'tensorflow'),
                    reason='NASNets are supported only on TensorFlow')
def test_nasnet():
    app, last_dim = random.choice(NASNET_LIST)
    _test_application_basic(app)
    _test_application_notop(app, last_dim)
    _test_application_variable_input_channels(app, last_dim)
    _test_app_pooling(app, last_dim)
    
    from .. import backend as K
from .. import activations
from .. import initializers
from .. import regularizers
from .. import constraints
from .recurrent import _generate_dropout_mask
from .recurrent import _standardize_args
    
            for p, g, m, u in zip(params, grads, ms, us):
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
    
MINIMUM = 80
    
    print 'PLUGIN_I18N_PATHS := ' + ','.join(os.path.relpath(plugin.path)
                                         for plugin in plugins
                                         if plugin.needs_translation)
    
    def is_api(subtype = ''):
    return c.render_style and c.render_style.startswith(api_type(subtype))
    
    def api(type, cls):
    tpm.add_handler(type, 'api', cls())
    tpm.add_handler(type, 'api-html', cls())
    tpm.add_handler(type, 'api-compact', cls())
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        user=VAccountByName('username'),
        months=VInt('months', min=1, max=36),
        timeout=VNotInTimeout(),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/give/{username}',
    )
    def POST_give(self, user, months, timeout):
        self._gift_using_creddits(
            recipient=user,
            months=months,
            proxying_for=request.POST.get('proxying_for'),
        )

    
            return self.redirect('/static/button/button%s.js' % buttontype,
                             code=301)