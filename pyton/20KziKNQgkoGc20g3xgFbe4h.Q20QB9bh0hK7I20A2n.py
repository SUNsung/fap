
        
        
@keras_test
def test_conv2d_legacy_interface():
    old_layer = keras.layers.Convolution2D(5, 3, 3, name='conv')
    new_layer = keras.layers.Conv2D(5, (3, 3), name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    
def test_classify_class_build_fn():
    class ClassBuildFnClf(object):
    
    
@keras_test
def test_model_trainability_switch():
    # a non-trainable model has no trainable weights
    x = Input(shape=(1,))
    y = Dense(2)(x)
    model = Model(x, y)
    model.trainable = False
    assert model.trainable_weights == []
    
        # Returns
        Preprocessed array.
    '''
    return imagenet_utils.preprocess_input(x, mode='tf')

    
        # Raises
        ValueError: in case of invalid argument for `weights`,
            or invalid input shape.
    '''
    if not (weights in {'imagenet', None} or os.path.exists(weights)):
        raise ValueError('The `weights` argument should be either '
                         '`None` (random initialization), `imagenet` '
                         '(pre-training on ImageNet), '
                         'or the path to the weights file to be loaded.')
    
        for layer_class in [keras.layers.CuDNNGRU, keras.layers.CuDNNLSTM]:
        model = keras.models.Sequential()
        model.add(keras.layers.Embedding(10, input_size,
                                         input_length=timesteps,
                                         batch_input_shape=(num_samples,
                                                            timesteps)))
        layer = layer_class(units,
                            return_sequences=False,
                            stateful=True,
                            weights=None)
        model.add(layer)
        model.compile(optimizer='sgd', loss='mse')
        out1 = model.predict(np.ones((num_samples, timesteps)))
        assert(out1.shape == (num_samples, units))