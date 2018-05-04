
        
            By default, it represents the actual environment.
    All of the attributes can be overwritten though, which
    is used by the test suite to simulate various scenarios.
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
def create_temporal_sequential_model():
    model = Sequential()
    model.add(GRU(32, input_shape=(timesteps, input_dim), return_sequences=True))
    model.add(TimeDistributed(Dense(num_classes)))
    model.add(Activation('softmax'))
    return model
    
    
@keras_test
def test_cropping2d_legacy_interface():
    old_layer = keras.layers.Cropping2D(dim_ordering='tf', name='c2d')
    new_layer = keras.layers.Cropping2D(data_format='channels_last', name='c2d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        # a Model inside a Sequential
    x = Input(shape=(1,))
    y = Dense(2)(x)
    inner_model = Model(x, y)
    outer_model = Sequential()
    outer_model.add(inner_model)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
    print('Starting autogeneration.')
for page_data in PAGES:
    blocks = []
    classes = page_data.get('classes', [])
    for module in page_data.get('all_module_classes', []):
        module_classes = []
        for name in dir(module):
            if name[0] == '_' or name in EXCLUDE:
                continue
            module_member = getattr(module, name)
            if inspect.isclass(module_member):
                cls = module_member
                if cls.__module__ == module.__name__:
                    if cls not in module_classes:
                        module_classes.append(cls)
        module_classes.sort(key=lambda x: id(x))
        classes += module_classes
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
            # Exit condition: either hit max length
        # or find stop character.
        if (sampled_char == '\n' or
           len(decoded_sentence) > max_decoder_seq_length):
            stop_condition = True
    
        # test __getitem__
    with pytest.raises(IndexError):
        X_train[1000]
    with pytest.raises(IndexError):
        X_train[1000:1001]
    with pytest.raises(IndexError):
        X_train[[1000, 1001]]
    with pytest.raises(IndexError):
        X_train[np.array([1000])]
    with pytest.raises(IndexError):
        X_train[None]
    assert (X_train[0] == X_train[:1][0]).all()
    assert (X_train[[0, 1]] == X_train[:2]).all()
    assert (X_train[np.array([0, 1])] == X_train[:2]).all()
    
    
def copy_weights(teacher_model, student_model, layer_names):
    '''Copy weights from teacher_model to student_model,
     for layers with names listed in layer_names
    '''
    for name in layer_names:
        weights = teacher_model.get_layer(name=name).get_weights()
        student_model.get_layer(name=name).set_weights(weights)
    
    
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
    
    
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]
    
    from ..common import *
from ..extractor import VideoExtractor
    
    def kuwo_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'www.kuwo.cn/yinyue' in url:
        rid=match1(url,'yinyue/(\d+)')
        kuwo_download_by_rid(rid,output_dir, merge, info_only)
    else:
        kuwo_playlist_download(url,output_dir,merge,info_only)
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]