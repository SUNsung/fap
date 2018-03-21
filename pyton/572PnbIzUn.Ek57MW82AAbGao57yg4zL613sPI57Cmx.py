
        
        
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
    import re
    
                return {
                'id': video_id,
                'title': json_data['title'],
                'description': json_data.get('subtitle'),
                'thumbnail': json_data.get('thumbnail_image', {}).get('file'),
                'timestamp': parse_iso8601(json_data.get('publication_date')),
                'duration': int_or_none(json_data.get('duration')),
                'view_count': int_or_none(json_data.get('view_count')),
                'formats': formats,
            }

    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
    
@keras_test
def test_model_trainability_switch():
    # a non-trainable model has no trainable weights
    x = Input(shape=(1,))
    y = Dense(2)(x)
    model = Model(x, y)
    model.trainable = False
    assert model.trainable_weights == []
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        If only_supporting is true, only the sentences
    that support the answer are kept.
    '''
    data = []
    story = []
    for line in lines:
        line = line.decode('utf-8').strip()
        nid, line = line.split(' ', 1)
        nid = int(nid)
        if nid == 1:
            story = []
        if '\t' in line:
            q, a, supporting = line.split('\t')
            q = tokenize(q)
            substory = None
            if only_supporting:
                # Only select the related substory
                supporting = map(int, supporting.split())
                substory = [story[i - 1] for i in supporting]
            else:
                # Provide all the substories
                substory = [x for x in story if x]
            data.append((substory, q, a))
            story.append('')
        else:
            sent = tokenize(line)
            story.append(sent)
    return data
    
    input_characters = sorted(list(input_characters))
target_characters = sorted(list(target_characters))
num_encoder_tokens = len(input_characters)
num_decoder_tokens = len(target_characters)
max_encoder_seq_length = max([len(txt) for txt in input_texts])
max_decoder_seq_length = max([len(txt) for txt in target_texts])
    
            test_history['generator'].append(generator_test_loss)
        test_history['discriminator'].append(discriminator_test_loss)
    
        # Arguments
        x: Input array, 3D or 4D.
        data_format: Data format of the image array.
        mode: One of 'caffe', 'tf' or 'torch'.
            - caffe: will convert the images from RGB to BGR,
                then will zero-center each color channel with
                respect to the ImageNet dataset,
                without scaling.
            - tf: will scale pixels between -1 and 1,
                sample-wise.
            - torch: will scale pixels between 0 and 1 and then
                will normalize each channel with respect to the
                ImageNet dataset.
    
    # Attempt to read Keras config file.
_config_path = os.path.expanduser(os.path.join(_keras_dir, 'keras.json'))
if os.path.exists(_config_path):
    try:
        with open(_config_path) as f:
            _config = json.load(f)
    except ValueError:
        _config = {}
    _floatx = _config.get('floatx', floatx())
    assert _floatx in {'float16', 'float32', 'float64'}
    _epsilon = _config.get('epsilon', epsilon())
    assert isinstance(_epsilon, float)
    _backend = _config.get('backend', _BACKEND)
    assert _backend in {'theano', 'tensorflow', 'cntk'}
    _image_data_format = _config.get('image_data_format',
                                     image_data_format())
    assert _image_data_format in {'channels_last', 'channels_first'}
    
        def __setattr__(self, name, value):
        # type: (str, Any) -> None
        self[name] = value
    
                def finish(self):
                event.set()
    
        def test_path_quoting(self):
        response = self.fetch('/path/foo%20bar%C3%A9')
        self.assertEqual(response.body, u'foo bar\u00e9'.encode('utf-8'))
    
    # This import will fail if path is not set up correctly
import testapp
    
    
@gen.coroutine
def raw_producer(filename, write):
    with open(filename, 'rb') as f:
        while True:
            # 16K at a time.
            chunk = f.read(16 * 1024)
            if not chunk:
                # Complete.
                break
    
        print('Start on 8888')
    application.listen(8888, '127.0.0.1')