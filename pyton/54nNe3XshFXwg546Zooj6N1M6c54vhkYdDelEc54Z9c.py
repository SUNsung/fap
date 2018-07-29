
        
        
@keras_test
@skipif_no_tf_gpu
def test_specify_initial_state_keras_tensor():
    input_size = 10
    timesteps = 6
    units = 2
    num_samples = 32
    for layer_class in [keras.layers.CuDNNGRU, keras.layers.CuDNNLSTM]:
        num_states = 2 if layer_class is keras.layers.CuDNNLSTM else 1
    
        # VAE loss = mse_loss or xent_loss + kl_loss
    if args.mse:
        reconstruction_loss = mse(K.flatten(inputs), K.flatten(outputs))
    else:
        reconstruction_loss = binary_crossentropy(K.flatten(inputs),
                                                  K.flatten(outputs))
    
    
@keras_test
def test_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.max_norm(m)
        normed = norm_instance(K.variable(array))
        assert(np.all(K.eval(normed) < m))
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    
print('\nBuilding network 2...')
model2 = create_network(num_classes=num_classes, **network2)
    
    
def test_sparse_categorical_crossentropy_4d():
    y_pred = K.variable(np.array([[[[0.7, 0.1, 0.2],
                                    [0.0, 0.3, 0.7],
                                    [0.1, 0.1, 0.8]],
                                   [[0.3, 0.7, 0.0],
                                    [0.3, 0.4, 0.3],
                                    [0.2, 0.5, 0.3]],
                                   [[0.8, 0.1, 0.1],
                                    [1.0, 0.0, 0.0],
                                    [0.4, 0.3, 0.3]]]]))
    y_true = K.variable(np.array([[[0, 1, 0],
                                   [2, 1, 0],
                                   [2, 2, 1]]]))
    expected_loss = - (np.log(0.7) + np.log(0.3) + np.log(0.1) +
                       np.log(K.epsilon()) + np.log(0.4) + np.log(0.2) +
                       np.log(0.1) + np.log(K.epsilon()) + np.log(0.3)) / 9
    loss = K.eval(losses.sparse_categorical_crossentropy(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
    # Note, sha1 is the only hash algorithm compatible with python2.4 and with
# FIPS-140 mode (as of 11-2014)
try:
    from hashlib import sha1 as sha1
except ImportError:
    from sha import sha as sha1
    
    
if __name__ == '__main__':
    main()

    
    ipv4_component = r'''
    (?:
        [01]?[0-9]{{1,2}}|              # 0..199
        2[0-4][0-9]|                    # 200..249
        25[0-5]|                        # 250..255
        {range}                         # or a numeric range
    )
'''.format(range=numeric_range)