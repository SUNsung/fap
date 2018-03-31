
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        old_layer = keras.layers.AveragePooling2D((2, 2), padding='valid', dim_ordering='th', name='avgpooling2d')
    new_layer = keras.layers.AvgPool2D(pool_size=2, padding='valid', data_format='channels_first', name='avgpooling2d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        # test return_state
    inputs = Input((timesteps, dim))
    layer = wrappers.Bidirectional(rnn(units, return_state=True), merge_mode=merge_mode)
    f_merged = K.function([inputs], layer(inputs))
    f_forward = K.function([inputs], layer.forward_layer.call(inputs))
    f_backward = K.function([inputs], layer.backward_layer.call(inputs))
    n_states = len(layer.layer.states)
    
        proba = clf.predict_proba(X_test, batch_size=batch_size)
    assert proba.shape == (num_test, num_classes)
    assert np.allclose(np.sum(proba, axis=1), np.ones(num_test))
    
    
@keras_test
def test_layer_trainability_switch():
    # with constructor argument, in Sequential
    model = Sequential()
    model.add(Dense(2, trainable=False, input_dim=1))
    assert model.trainable_weights == []
    
    
@keras_test
def test_loss_masking():
    weighted_loss = _weighted_masked_objective(losses.get('mae'))
    shape = (3, 4, 2)
    x = np.arange(24).reshape(shape)
    y = 2 * x