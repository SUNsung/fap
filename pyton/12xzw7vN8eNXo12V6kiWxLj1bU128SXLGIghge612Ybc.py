atom_template = atom_template.replace('@TIMESTAMP@', now_iso)
    
    compat_print('total downloads traffic: %s' % format_size(total_bytes))

    
    
class FakeYDL(YoutubeDL):
    def __init__(self, override=None):
        # Different instances of the downloader can't share the same dictionary
        # some test set the 'sublang' parameter, which would break the md5 checks.
        params = get_params(override=override)
        super(FakeYDL, self).__init__(params, auto_init=False)
        self.result = []
    
        def test_proxy_http(self):
        params = self._check_params(['primary_proxy', 'primary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL({
            'proxy': params['primary_proxy']
        })
        self.assertEqual(
            ydl.urlopen('http://yt-dl.org/ip').read().decode('utf-8'),
            params['primary_server_ip'])
    
    
def _make_testfunc(testfile):
    m = re.match(r'^(.*)\.(as)$', testfile)
    if not m:
        return
    test_id = m.group(1)
    
    from .common import FileDownloader
from ..utils import (
    check_executable,
    encodeFilename,
)
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
            # Video URL construction algorithm is reverse-engineered from cwhplayer.swf
        rtmp_url = 'rtmp://camwithher.tv/clipshare/%s' % (
            ('mp4:%s.mp4' % flv_id) if int(flv_id) > 2010 else flv_id)
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
            title = metadata['Title']
        description = metadata.get('Description')
        duration = float_or_none(metadata.get('Duration'))
        timestamp = parse_iso8601(metadata.get('DateCreated'))
    
    image_size = x_train.shape[1]
x_train = np.reshape(x_train, [-1, image_size, image_size, 1])
x_test = np.reshape(x_test, [-1, image_size, image_size, 1])
x_train = x_train.astype('float32') / 255
x_test = x_test.astype('float32') / 255
    
    model = Sequential()
model.add(Embedding(max_features, embedding_size, input_length=maxlen))
model.add(Dropout(0.25))
model.add(Conv1D(filters,
                 kernel_size,
                 padding='valid',
                 activation='relu',
                 strides=1))
model.add(MaxPooling1D(pool_size=pool_size))
model.add(LSTM(lstm_output_size))
model.add(Dense(1))
model.add(Activation('sigmoid'))
    
        '''
    model = Sequential()
    model.add(layers.Embedding(10, 10, mask_zero=True))
    model.add(layers.Activation('softmax'))
    model.compile(loss='categorical_crossentropy',
                  optimizer='adam')
    
        test_values = get_standard_values()
    result = f([test_values])[0]
    assert_allclose(result, test_values, rtol=1e-05)
    
                # check that output changes after states are reset
            # (even though the model itself didn't change)
            layer.reset_states()
            out3 = model.predict(np.ones_like(inputs))
            assert(out2.max() != out3.max())
    
    Output after 4 epochs on CPU: ~0.8146
Time per epoch on CPU (Core i7): ~150s.
'''
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')