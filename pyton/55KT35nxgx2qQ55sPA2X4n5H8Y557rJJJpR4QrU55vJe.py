
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
        # close and remove the temporary database
    os.close(db_fd)
    os.unlink(db_path)
    
    
def test_register(client, app):
    # test that viewing the page renders without template errors
    assert client.get('/auth/register').status_code == 200
    
    
_request_ctx_err_msg = '''\
Working outside of request context.
    
    
class TagDateTime(JSONTag):
    __slots__ = ()
    key = ' d'
    
        def __getitem__(self, key):
        self.accessed = True
        return super(SecureCookieSession, self).__getitem__(key)
    
        The decorators stored in the decorators list are applied one after another
    when the view function is created.  Note that you can *not* use the class
    based decorators since those would decorate the view class and not the
    generated view function!
    '''
    
    
class Regularizer(object):
    '''Regularizer base class.
    '''
    
    
def test_categorical_hinge():
    y_pred = K.variable(np.array([[0.3, 0.2, 0.1],
                                  [0.1, 0.2, 0.7]]))
    y_true = K.variable(np.array([[0, 1, 0],
                                  [1, 0, 0]]))
    expected_loss = ((0.3 - 0.2 + 1) + (0.7 - 0.1 + 1)) / 2.0
    loss = K.eval(losses.categorical_hinge(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
        available_devices = _get_available_devices()
    available_devices = [_normalize_device_name(name)
                         for name in available_devices]
    if not gpus:
        # Using all visible GPUs when not specifying `gpus`
        # e.g. CUDA_VISIBLE_DEVICES=0,2 python keras_mgpu.py
        gpus = len([x for x in available_devices if 'gpu' in x])
    
            self.kernel_constraint = constraints.get(kernel_constraint)
        self.recurrent_constraint = constraints.get(recurrent_constraint)
        self.bias_constraint = constraints.get(bias_constraint)
    
    
def fit_loop(model, fit_function, fit_inputs,
             out_labels=None,
             batch_size=None,
             epochs=100,
             verbose=1,
             callbacks=None,
             val_function=None,
             val_inputs=None,
             shuffle=True,
             callback_metrics=None,
             initial_epoch=0,
             steps_per_epoch=None,
             validation_steps=None):
    '''Abstract fit function for `fit_function(fit_inputs)`.