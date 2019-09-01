
        
            self._scales = scales
    self._aspect_ratios = aspect_ratios
    self._base_anchor_size = base_anchor_size
    self._anchor_stride = anchor_stride
    self._anchor_offset = anchor_offset
    
      for layer, scale, scale_next in zip(
      range(num_layers), scales[:-1], scales[1:]):
    layer_box_specs = []
    if layer == 0 and reduce_boxes_in_lowest_layer:
      layer_box_specs = [(0.1, 1.0), (scale, 2.0), (scale, 0.5)]
    else:
      for aspect_ratio in aspect_ratios:
        layer_box_specs.append((scale, aspect_ratio))
      # Add one more anchor, with a scale between the current scale, and the
      # scale for the next layer, with a specified aspect ratio (1.0 by
      # default).
      if interpolated_scale_aspect_ratio > 0.0:
        layer_box_specs.append((np.sqrt(scale*scale_next),
                                interpolated_scale_aspect_ratio))
    box_specs_list.append(layer_box_specs)
    
        Updates the field of a box_list with a given value.
    
      This is a `freezable` batch norm layer that supports setting the `training`
  parameter in the __init__ method rather than having to set it either via
  the Keras learning phase or via the `call` method parameter. This layer will
  forward all other parameters to the default Keras `BatchNormalization`
  layer
    
      Args:
    tensor_dict: a dictionary of tensors to prefetch.
    capacity: the size of the prefetch queue.
    
    tf.app.flags.DEFINE_string(
    'train_image_folder',
    './ADE20K/ADEChallengeData2016/images/training',
    'Folder containing trainng images')
tf.app.flags.DEFINE_string(
    'train_image_label_folder',
    './ADE20K/ADEChallengeData2016/annotations/training',
    'Folder containing annotations for trainng images')
    
    
class RedBullTVIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?redbull(?:\.tv|\.com(?:/[^/]+)?(?:/tv)?)(?:/events/[^/]+)?/(?:videos?|live)/(?P<id>AP-\w+)'
    _TESTS = [{
        # film
        'url': 'https://www.redbull.tv/video/AP-1Q6XCDTAN1W11',
        'md5': 'fb0445b98aa4394e504b413d98031d1f',
        'info_dict': {
            'id': 'AP-1Q6XCDTAN1W11',
            'ext': 'mp4',
            'title': 'ABC of... WRC - ABC of... S1E6',
            'description': 'md5:5c7ed8f4015c8492ecf64b6ab31e7d31',
            'duration': 1582.04,
        },
    }, {
        # episode
        'url': 'https://www.redbull.tv/video/AP-1PMHKJFCW1W11',
        'info_dict': {
            'id': 'AP-1PMHKJFCW1W11',
            'ext': 'mp4',
            'title': 'Grime - Hashtags S2E4',
            'description': 'md5:b5f522b89b72e1e23216e5018810bb25',
            'duration': 904.6,
        },
        'params': {
            'skip_download': True,
        },
    }, {
        'url': 'https://www.redbull.com/int-en/tv/video/AP-1UWHCAR9S1W11/rob-meets-sam-gaze?playlist=playlists::3f81040a-2f31-4832-8e2e-545b1d39d173',
        'only_matching': True,
    }, {
        'url': 'https://www.redbull.com/us-en/videos/AP-1YM9QCYE52111',
        'only_matching': True,
    }, {
        'url': 'https://www.redbull.com/us-en/events/AP-1XV2K61Q51W11/live/AP-1XUJ86FDH1W11',
        'only_matching': True,
    }]
    
    
class VLiveIE(InfoExtractor):
    IE_NAME = 'vlive'
    _VALID_URL = r'https?://(?:(?:www|m)\.)?vlive\.tv/video/(?P<id>[0-9]+)'
    _NETRC_MACHINE = 'vlive'
    _TESTS = [{
        'url': 'http://www.vlive.tv/video/1326',
        'md5': 'cc7314812855ce56de70a06a27314983',
        'info_dict': {
            'id': '1326',
            'ext': 'mp4',
            'title': '[V LIVE] Girl's Day's Broadcast',
            'creator': 'Girl's Day',
            'view_count': int,
        },
    }, {
        'url': 'http://www.vlive.tv/video/16937',
        'info_dict': {
            'id': '16937',
            'ext': 'mp4',
            'title': '[V LIVE] 첸백시 걍방',
            'creator': 'EXO',
            'view_count': int,
            'subtitles': 'mincount:12',
        },
        'params': {
            'skip_download': True,
        },
    }, {
        'url': 'https://www.vlive.tv/video/129100',
        'md5': 'ca2569453b79d66e5b919e5d308bff6b',
        'info_dict': {
            'id': '129100',
            'ext': 'mp4',
            'title': '[V LIVE] [BTS+] Run BTS! 2019 - EP.71 :: Behind the scene',
            'creator': 'BTS+',
            'view_count': int,
            'subtitles': 'mincount:10',
        },
        'skip': 'This video is only available for CH+ subscribers',
    }]
    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
            self.grammarDecisionDescription = grammarDecisionDescription
        self.decisionNumber = decisionNumber
        self.stateNumber = stateNumber
    
        def __init__(self, idf_path=None):
        self.tokenizer = jieba.dt
        self.postokenizer = jieba.posseg.dt
        self.stop_words = self.STOP_WORDS.copy()
        self.idf_loader = IDFLoader(idf_path or DEFAULT_IDF)
        self.idf_freq, self.median_idf = self.idf_loader.get_idf()
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    for f_name in glob.glob(pattern):
    with open(f_name) as f:
        print('read file:', f_name)
        for line in f: #one line as a document
            words = ' '.join(jieba.cut(line))
            docs.append(words)
    
    while True:
    line = sys.stdin.readline()
    if line=='':
        break
    line = line.strip()
    for word in jieba.cut(line):
        print(word)
    
    
def deserialize_event(event):
    # Deserialize into Python dictionary and extract the 'NewImage' (the new version of the full ddb document)
    ddb = event.get('dynamodb')
    if ddb:
        result = {
            '__action_type': event.get('eventName'),
        }
    
        def test_list_function_versions(self):
        with self.app.test_request_context():
            self._create_function(self.FUNCTION_NAME)
            lambda_api.publish_version(self.FUNCTION_NAME)
            lambda_api.publish_version(self.FUNCTION_NAME)
    
        @classmethod
    def tearDownClass(cls):
        cls.lambda_client.delete_function(FunctionName=TEST_LAMBDA_NAME_1)
        cls.lambda_client.delete_function(FunctionName=TEST_LAMBDA_NAME_2)
    
        for (disposition, part) in _iter_multipart_parts(data_bytes, boundary):
        if disposition.get('name') == 'key' and b'${filename}' in part:
            search = boundary + part
            replace = boundary + part.replace(b'${filename}', filename.encode('utf8'))
    
    
def replay_command(command):
    function = getattr(requests, command['m'].lower())
    data = command['d']
    if data:
        data = base64.b64decode(data)
    endpoint = aws_stack.get_local_service_url(command['a'])
    full_url = (endpoint[:-1] if endpoint.endswith('/') else endpoint) + command['p']
    result = function(full_url, data=data, headers=command['h'], verify=False)
    return result