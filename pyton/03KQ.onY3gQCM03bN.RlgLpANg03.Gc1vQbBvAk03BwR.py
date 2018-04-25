
        
                class SecretView(View):
            methods = ['GET']
            decorators = [superuser_required]
    
                version = match.group(1).strip()
    
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
    
    
def test_suppressed_exception_logging():
    class SuppressedFlask(flask.Flask):
        def log_exception(self, exc_info):
            pass
    
        old_layer = keras.layers.LSTM(input_dim=5, input_length=3,
                                  output_dim=2, name='d', consume_less='mem')
    new_layer = keras.layers.LSTM(2, input_shape=[3, 5], name='d', implementation=1)
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    - Models
    About Keras models
        explain when one should use Sequential or functional API
        explain compilation step
        explain weight saving, weight loading
        explain serialization, deserialization
    Sequential
    Model (functional API)
    
    
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
    
        def data_generator():
        i = 0
        max_batch_index = len(X_train) // batch_size
        tot = 0
        while 1:
            if tot > 3 * len(X_train):
                yield np.ones([batch_size, input_dim]) * np.nan, np.ones([batch_size, num_classes]) * np.nan
            else:
                yield (X_train[i * batch_size: (i + 1) * batch_size],
                       y_train[i * batch_size: (i + 1) * batch_size])
            i += 1
            tot += 1
            i = i % max_batch_index
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3