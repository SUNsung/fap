
        
          def testCanCreate(self):
    '''Tests that create() works on a good spec.'''
    with tf.Graph().as_default(), self.test_session():
      master = MockMaster()
      component = MockComponent(master, _make_biaffine_spec())
    
          # The cost corresponding to the three entries is, respectively,
      # 0.7012, 0.7644, and 1.7269. Each of them is computed using the formula
      # -prob_i * log(sigmoid(logit_i)) - (1-prob_i) * log(1-sigmoid(logit_i))
      self.assertAlmostEqual(cost, 3.1924, 4)
      self.assertEqual(correct, 1)
      self.assertEqual(total, 3)
      self.assertAllEqual(gold_labels, [0, 1, 2])
    
      NB: The format of the shortened resource paths should be considered an
  implementation detail and may change.
    
        # The directory may already exist when running locally multiple times.
    if not os.path.exists(lexicon_output_path):
      os.mkdir(lexicon_output_path)
    
    model = Sequential()
model.add(Embedding(max_features, embedding_size, input_length=maxlen))
model.add(Dropout(0.25))
model.add(Conv1D(filters,
                 kernel_size,
                 padding='valid',
                 activation='relu',
                 strides=1))
model.add(MaxPooling1D(pool_size=pool_size))
model.add(LSTM(lstm_output_size))
model.add(Dense(1))
model.add(Activation('sigmoid'))
    
    
def get_example_array():
    np.random.seed(3537)
    example_array = np.random.random((100, 100)) * 100. - 50.
    example_array[0, 0] = 0.  # 0 could possibly cause trouble
    return example_array
    
        # Test with Sequential API
    model = Sequential([
        layers.Dense(16, input_shape=(x_train.shape[-1],), activation='relu'),
        layers.Dense(8),
        layers.Activation('relu'),
        layers.Dense(num_classes, activation='softmax')
    ])
    model.compile(loss='categorical_crossentropy',
                  optimizer='rmsprop',
                  metrics=['accuracy'])
    model.summary()
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    config = model.get_config()
    model = Sequential.from_config(config)
    
    model = Sequential()
model.add(Embedding(max_features, 128, input_length=maxlen))
model.add(Bidirectional(LSTM(64)))
model.add(Dropout(0.5))
model.add(Dense(1, activation='sigmoid'))
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        deserialized = losses.deserialize(serialized)
    assert isinstance(deserialized, MSE_MAE_loss)
    assert deserialized.mse_fraction == 0.3
    
        with gzip.open(paths[0], 'rb') as lbpath:
        y_train = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
    model_input = layers.Input(tensor=x_train_batch)
model_output = cnn_layers(model_input)
train_model = keras.models.Model(inputs=model_input, outputs=model_output)
    
        def _finish(self, request):
        self.concurrent -= 1
        if not request.finished and not request._disconnected:
            request.finish()
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
    
class DownloadHandlers(object):
    
        def __init__(self, headers):
        self._headers = headers
    
    class IgnoreRequest(Exception):
    '''Indicates a decision was made not to process a request'''
    
    
class TestData(unittest.TestCase):
    
        def unsubscribe(self, msg):
        self.provider.unsubscribe(msg, self)
    
        def test_tc3_output(self):
        self.tc3.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc3)
    
    
# Alternative implementation for different levels of methods
class CatalogInstance(object):
    
    
class UserSpecification(CompositeSpecification):
    
        '''Base state. This is to share functionality'''