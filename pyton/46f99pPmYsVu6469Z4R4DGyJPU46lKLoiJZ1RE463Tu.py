    old_layer = keras.layers.LSTM(input_dim=5,
                                  output_dim=2, name='d', consume_less='mem')
    new_layer = keras.layers.LSTM(2, input_shape=[None, 5], name='d', implementation=1)
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    Based on Joulin et al's paper:
    
    # Embedding
max_features = 20000
maxlen = 100
embedding_size = 128
    
        set_floatx(_floatx)
    set_epsilon(_epsilon)
    set_image_data_format(_image_data_format)
    _BACKEND = _backend
    
    # the gram matrix of an image tensor (feature-wise outer product)
    
        mock = MockMetric()
    found = metrics.serialize(mock)
    assert found == 'mock_metric'
    
    class Graph(object):
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        ...