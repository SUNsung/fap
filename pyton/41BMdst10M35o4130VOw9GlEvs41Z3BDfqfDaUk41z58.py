
        
            old_layer = keras.layers.Deconvolution2D(5, 3, 3,
                                             output_shape=(6, 7, 5),
                                             init='normal',
                                             subsample=(2, 2),
                                             border_mode='valid',
                                             dim_ordering='th',
                                             W_regularizer='l1',
                                             b_regularizer='l2',
                                             W_constraint='maxnorm',
                                             b_constraint='unitnorm',
                                             name='conv')
    new_layer = keras.layers.Conv2DTranspose(
        5, (3, 3),
        kernel_initializer='normal',
        strides=(2, 2),
        padding='valid',
        kernel_regularizer='l1',
        bias_regularizer='l2',
        kernel_constraint='max_norm',
        bias_constraint='unit_norm',
        data_format='channels_first',
        name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_he_normal(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(2. / fan_in)
    _runner(initializers.he_normal(), tensor_shape,
            target_mean=0., target_std=None, target_max=2 * scale)
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
    
def test_cifar():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = cifar10.load_data()
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('fine')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('coarse')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
    
            if data_format == 'channels_first':
            inputs = np.random.rand(num_samples, sequence_len,
                                    input_channel,
                                    input_num_row, input_num_col)
        else:
            inputs = np.random.rand(num_samples, sequence_len,
                                    input_num_row, input_num_col,
                                    input_channel)