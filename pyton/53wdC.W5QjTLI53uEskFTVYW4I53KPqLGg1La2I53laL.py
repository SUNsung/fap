
        
        
def main():
    if len(sys.argv) < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    check_format(sys.argv[1])
    if len(errors) > 0:
        for err in errors:
            print(err)
        sys.exit(1)
    
    
class RemoveDuplicateUrls(MRJob):
    
    
if __name__ == '__main__':
    HitCounts.run()

    
    import rsa
import json
from binascii import hexlify
    
        def to_screen(self, s, skip_eol=None):
        print(s)
    
    import os
import subprocess
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
    
class AcademicEarthCourseIE(InfoExtractor):
    _VALID_URL = r'^https?://(?:www\.)?academicearth\.org/playlists/(?P<id>[^?#/]+)'
    IE_NAME = 'AcademicEarth:Course'
    _TEST = {
        'url': 'http://academicearth.org/playlists/laws-of-nature/',
        'info_dict': {
            'id': 'laws-of-nature',
            'title': 'Laws of Nature',
            'description': 'Introduce yourself to the laws of nature with these free online college lectures from Yale, Harvard, and MIT.',
        },
        'playlist_count': 3,
    }
    
        # a Sequential inside a Sequential
    inner_model = Sequential()
    inner_model.add(Dense(2, input_dim=1))
    outer_model = Sequential()
    outer_model.add(inner_model)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        # Generate empty target sequence of length 1.
    target_seq = np.zeros((1, 1, num_decoder_tokens))
    # Populate the first character of target sequence with the start character.
    target_seq[0, 0, target_token_index['\t']] = 1.
    
    
def sample(preds, temperature=1.0):
    # helper function to sample an index from a probability array
    preds = np.asarray(preds).astype('float64')
    preds = np.log(preds) / temperature
    exp_preds = np.exp(preds)
    preds = exp_preds / np.sum(exp_preds)
    probas = np.random.multinomial(1, preds, 1)
    return np.argmax(probas)
    
    
def deserialize(config, custom_objects=None):
    return deserialize_keras_object(config,
                                    module_objects=globals(),
                                    custom_objects=custom_objects,
                                    printable_module_name='metric function')
    
    
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
    
    
@keras_test
def test_stacked_lstm_char_prediction():
    '''
    Learn alphabetical char sequence with stacked LSTM.
    Predict the whole alphabet based on the first two letters ('ab' -> 'ab...z')
    See non-toy example in examples/lstm_text_generation.py
    '''
    # generate alphabet: http://stackoverflow.com/questions/16060899/alphabet-range-python
    alphabet = string.ascii_lowercase
    number_of_chars = len(alphabet)
    
    
def test_selu():
    x = K.placeholder(ndim=2)
    f = K.function([x], [activations.selu(x)])
    alpha = 1.6732632423543772848170429916717
    scale = 1.0507009873554804934193349852946
    
                # test for return state:
            x = Input(batch_shape=inputs.shape)
            kwargs = {'data_format': data_format,
                      'return_sequences': return_sequences,
                      'return_state': True,
                      'stateful': True,
                      'filters': filters,
                      'kernel_size': (num_row, num_col),
                      'padding': 'valid'}
            layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
            layer.build(inputs.shape)
            outputs = layer(x)
            output, states = outputs[0], outputs[1:]
            assert len(states) == 2
            model = Model(x, states[0])
            state = model.predict(inputs)
            np.testing.assert_allclose(
                K.eval(layer.states[0]), state, atol=1e-4)
    
    
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
    
        platforms = 'any',
    zip_safe = True,
    include_package_data = True,
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    class Infoq(VideoExtractor):
    name = 'InfoQ'
    
    def kuwo_download_by_rid(rid, output_dir = '.', merge = True, info_only = False):
    html=get_content('http://player.kuwo.cn/webmusic/st/getNewMuiseByRid?rid=MUSIC_%s'%rid)
    title=match1(html,r'<name>(.*)</name>')
    #to get title
    #format =aac|mp3 ->to get aac format=mp3 ->to get mp3
    url=get_content('http://antiserver.kuwo.cn/anti.s?format=mp3&rid=MUSIC_%s&type=convert_url&response=url'%rid)
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir)
    
    from ..common import *
from ..extractor import VideoExtractor