
        
            assert len(dense._inbound_nodes) == 2
    assert len(dense._outbound_nodes) == 0
    assert dense._inbound_nodes[0].inbound_layers == [a_layer]
    assert dense._inbound_nodes[0].outbound_layer == dense
    assert dense._inbound_nodes[1].inbound_layers == [b_layer]
    assert dense._inbound_nodes[1].outbound_layer == dense
    
    
@keras_test
def test_locallyconnected_1d():
    num_samples = 2
    num_steps = 8
    input_dim = 5
    filter_length = 3
    filters = 4
    padding = 'valid'
    strides = 1
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = reuters.load_data(num_words=max_words,
                                                         test_split=0.2)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
        cnn.add(Dense(3 * 3 * 384, input_dim=latent_size, activation='relu'))
    cnn.add(Reshape((3, 3, 384)))
    
    
def test_serialization():
    all_activations = ['max_norm', 'non_neg',
                       'unit_norm', 'min_max_norm']
    for name in all_activations:
        fn = constraints.get(name)
        ref_fn = getattr(constraints, name)()
        assert fn.__class__ == ref_fn.__class__
        config = constraints.serialize(fn)
        fn = constraints.deserialize(config)
        assert fn.__class__ == ref_fn.__class__