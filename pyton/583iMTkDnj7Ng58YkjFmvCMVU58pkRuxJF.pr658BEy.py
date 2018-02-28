
        
        print('Build model...')
    
        if member.__doc__ is None and not member_too_small(member):
        raise ValueError('{} class doesn't have any documentation'.format(name),
                         member.__module__, inspect.getmodule(member).__file__)
    for n, met in inspect.getmembers(member):
        if inspect.ismethod(met):
            handle_method(n, met)
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        input_a = layers.Input(shape=input_shapes[0][1:])
    input_b = layers.Input(shape=input_shapes[1][1:])
    a = layers.Masking()(input_a)
    b = layers.Masking()(input_b)
    merged = legacy_layers.merge([a, b], mode=fn_mode, output_shape=fn_output_shape, output_mask=fn_output_mask)
    model = models.Model([input_a, input_b], merged)
    expected_output_shape = model.compute_output_shape(input_shapes)
    actual_output_shape = model.predict(inputs).shape
    assert expected_output_shape == actual_output_shape
    
    
@keras_test
def test_merge_overlap(in_tmpdir):
    (x_train, y_train), (x_test, y_test) = _get_test_data()
    left = Sequential()
    left.add(Dense(num_hidden, input_shape=(input_dim,)))
    left.add(Activation('relu'))
    
        def __init__(self):
        self.head = None
        self.tail = None
    
        HOUSING = 0
    FOOD = 1
    GAS = 2
    SHOPPING = 3
    ...
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        def get_people(self, ids):
        results = []
        for id in ids:
            if id in self.people:
                results.append(self.people[id])
        return results
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue