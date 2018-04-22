
        
        
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
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_normal(tensor_shape):
    _runner(initializers.RandomNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_std=1)
    
        nloss = model.evaluate([x_test, x_test], y_test, verbose=0)
    assert(loss == nloss)
    
    
@zope.interface.implementer(interfaces.IAuthenticator)
@zope.interface.provider(interfaces.IPluginFactory)
class Authenticator(common.Plugin):
    '''Example Authenticator.'''
    
    
def set_up_logging(verbosity):
    levels = {-2: logging.ERROR, -1: logging.WARN, 0: logging.INFO,
              1: logging.DEBUG}
    max_level = max(levels.keys())
    min_level = min(levels.keys())
    verbosity = min(verbosity, max_level)
    verbosity = max(verbosity, min_level)
    level = levels[verbosity]
    format_ = '%(levelname)s %(message)s'
    logging.basicConfig(level=level, format=format_)
    
        g.plugins.load_plugins(config)
    config['r2.plugins'] = g.plugins
    g.startup_timer.intermediate('plugins')
    
    
class LimitUploadSize(object):
    '''
    Middleware for restricting the size of uploaded files (such as
    image files for the CSS editing capability).
    '''
    def __init__(self, app, max_size=1024*500):
        self.app = app
        self.max_size = max_size
    
    api('organiclisting',       OrganicListingJsonTemplate)
api('subreddittraffic', TrafficJsonTemplate)
api('takedownpane', TakedownJsonTemplate)
api('policyview', PolicyViewJsonTemplate)
    
        def GET_promohealth(self):
        response.content_type = 'application/json'
        return json.dumps(promote.health_check())