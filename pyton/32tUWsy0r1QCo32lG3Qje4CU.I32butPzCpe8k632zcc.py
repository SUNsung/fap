
        
            preds = reg.predict(X_test, batch_size=batch_size)
    assert preds.shape == (num_test, )
    
    - Models
    About Keras models
        explain when one should use Sequential or functional API
        explain compilation step
        explain weight saving, weight loading
        explain serialization, deserialization
    Sequential
    Model (functional API)
    
    
@keras_test
def test_layer_trainability_switch():
    # with constructor argument, in Sequential
    model = Sequential()
    model.add(Dense(2, trainable=False, input_dim=1))
    assert model.trainable_weights == []
    
    import numpy as np
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.preprocessing.text import Tokenizer
    
    
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
    
    plt.plot(range(epochs),
         history_model1.history['val_loss'],
         'g-',
         label='Network 1 Val Loss')
plt.plot(range(epochs),
         history_model2.history['val_loss'],
         'r-',
         label='Network 2 Val Loss')
plt.plot(range(epochs),
         history_model1.history['loss'],
         'g--',
         label='Network 1 Loss')
plt.plot(range(epochs),
         history_model2.history['loss'],
         'r--',
         label='Network 2 Loss')
plt.xlabel('Epochs')
plt.ylabel('Loss')
plt.legend()
plt.savefig('comparison_of_networks.png')

    
    
def test_objective_shapes_2d():
    y_a = K.variable(np.random.random((6, 7)))
    y_b = K.variable(np.random.random((6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (6,)
    
        class CustomRouter(Router):
        def find_handler(self, request, **kwargs):
            # some routing logic providing a suitable HTTPMessageDelegate instance
            return MessageDelegate(request.connection)
    
    
class PriorityQueueJoinTest(QueueJoinTest):
    queue_class = queues.PriorityQueue
    
            count = 0
        while 1:
            count += 1
            # Bind to a local port; for efficiency, let the OS pick
            # a free port for us.
            # Unfortunately, stress tests showed that we may not
            # be able to connect to that port ('Address already in
            # use') despite that the OS picked it.  This appears
            # to be a race bug in the Windows socket implementation.
            # So we loop until a connect() succeeds (almost always
            # on the first try).  See the long thread at
            # http://mail.zope.org/pipermail/zope/2005-July/160433.html
            # for hideous details.
            a = socket.socket()
            set_close_exec(a.fileno())
            a.bind(('127.0.0.1', 0))
            a.listen(1)
            connect_address = a.getsockname()  # assigned (host, port) pair
            try:
                self.writer.connect(connect_address)
                break    # success
            except socket.error as detail:
                if (not hasattr(errno, 'WSAEADDRINUSE') or
                        errno_from_exception(detail) != errno.WSAEADDRINUSE):
                    # 'Address already in use' is the only error
                    # I've seen on two WinXP Pro SP2 boxes, under
                    # Pythons 2.3.5 and 2.4.1.
                    raise
                # (10048, 'Address already in use')
                # assert count <= 2 # never triggered in Tim's tests
                if count >= 10:  # I've never seen it go above 2
                    a.close()
                    self.writer.close()
                    raise socket.error('Cannot bind trigger!')
                # Close `a` and try again.  Note:  I originally put a short
                # sleep() here, but it didn't appear to help or hurt.
                a.close()
    
    print('Starting')
if 'TESTAPP_STARTED' not in os.environ:
    os.environ['TESTAPP_STARTED'] = '1'
    sys.stdout.flush()
    autoreload._reload()
'''
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
        PATTERN = '''import_from< 'from' module_name='__future__' 'import' any >'''