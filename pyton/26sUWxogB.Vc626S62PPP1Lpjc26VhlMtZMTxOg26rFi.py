
        
            old_layer = keras.layers.Dense(2, bias=True,
                                   b_regularizer='l1',
                                   b_constraint='maxnorm', name='d')
    new_layer = keras.layers.Dense(2, use_bias=True,
                                   bias_regularizer='l1',
                                   bias_constraint='max_norm', name='d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        # by setting the `trainable` argument, in Sequential
    model = Sequential()
    layer = Dense(2, input_dim=1)
    model.add(layer)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
        # Arguments:
        models (tuple): encoder and decoder models
        data (tuple): test data and label
        batch_size (int): prediction batch size
        model_name (string): which model is using this function
    '''
    
            assert_allclose(out1, out2, atol=1e-5)
    
    
@keras_test
def test_min_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.min_max_norm(min_value=m, max_value=m * 2)
        normed = norm_instance(K.variable(array))
        value = K.eval(normed)
        l2 = np.sqrt(np.sum(np.square(value), axis=0))
        assert not l2[l2 < m]
        assert not l2[l2 > m * 2 + 1e-5]
    
    
@pytest.mark.skipif(K.backend() != 'tensorflow', reason='Requires TensorFlow backend')
@keras_test
def test_embedding_with_clipnorm():
    model = Sequential()
    model.add(layers.Embedding(input_dim=1, output_dim=1))
    model.compile(optimizer=optimizers.SGD(clipnorm=0.1), loss='mse')
    model.fit(np.array([[0]]), np.array([[[0.5]]]), epochs=1)
    
                    layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
                layer.build(inputs.shape)
                assert len(layer.losses) == 3
                assert layer.activity_regularizer
                output = layer(K.variable(np.ones(inputs.shape)))
                assert len(layer.losses) == 4
                K.eval(output)
    
    from __future__ import print_function
import numpy as np
    
        if results.overwrite and os.path.exists(output_directory):
        shutil.rmtree(output_directory)