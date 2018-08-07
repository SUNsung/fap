
        
        from base64 import b64decode, b64encode
from datetime import datetime
from uuid import UUID
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
        handler = logging.StreamHandler()
    logging.root.addHandler(handler)
    assert has_level_handler(logger)
    
                def g():
                assert not flask.request
                assert not flask.current_app
                with reqctx:
                    assert flask.request
                    assert flask.current_app == app
                    assert flask.request.path == '/'
                    assert flask.request.args['foo'] == 'bar'
                assert not flask.request
                return 42
    
        try:
        rv = app.test_client().get('/')
        assert rv.data == b'stuff'
    
        old_layer = keras.layers.Deconvolution2D(5, 3, nb_col=3, output_shape=(6, 7, 5), name='deconv')
    new_layer = keras.layers.Conv2DTranspose(5, (3, 3), name='deconv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        z_mean, z_log_var = args
    batch = K.shape(z_mean)[0]
    dim = K.int_shape(z_mean)[1]
    # by default, random_normal has mean=0 and std=1.0
    epsilon = K.random_normal(shape=(batch, dim))
    return z_mean + K.exp(0.5 * z_log_var) * epsilon
    
            for j in range(n):
            # Initial position
            xstart = np.random.randint(20, 60)
            ystart = np.random.randint(20, 60)
            # Direction of motion
            directionx = np.random.randint(0, 3) - 1
            directiony = np.random.randint(0, 3) - 1
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Dropout, Embedding, LSTM, Bidirectional
from keras.datasets import imdb
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loss = MSE_MAE_loss(0.3)
        inputs = keras.layers.Input((2,))
        outputs = keras.layers.Dense(1, name='model_output')(inputs)
        model = keras.models.Model(inputs, outputs)
        model.compile(optimizer='sgd', loss={'model_output': loss})
        model.fit(np.random.rand(256, 2), np.random.rand(256, 1))
        model.save(model_filename)
    
        return (x_train, y_train), (x_test, y_test)
