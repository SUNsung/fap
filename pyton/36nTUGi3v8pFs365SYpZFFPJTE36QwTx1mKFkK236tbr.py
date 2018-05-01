
        
            (x_train, y_train), (x_test, y_test), (sample_weight, class_weight, test_ids) = _get_test_data()
    
    
def test_regression_build_fn():
    reg = KerasRegressor(
        build_fn=build_fn_reg, hidden_dims=hidden_dims,
        batch_size=batch_size, epochs=epochs)
    
    
@pytest.mark.parametrize('tensor_shape', [(100, 100), (1, 2, 3, 4)], ids=['FC', 'CONV'])
def test_identity(tensor_shape):
    if len(tensor_shape) > 2:
        with pytest.raises(ValueError):
            _runner(initializers.identity(), tensor_shape,
                    target_mean=1. / tensor_shape[0], target_max=1.)
    else:
        _runner(initializers.identity(), tensor_shape,
                target_mean=1. / tensor_shape[0], target_max=1.)
    
    
@keras_test
def test_vector_regression():
    '''
    Perform float data prediction (regression) using 2 layer MLP
    with tanh and sigmoid activations.
    '''
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         output_shape=(num_classes,),
                                                         classification=False)
    
                # Size of the square
            w = np.random.randint(2, 4)