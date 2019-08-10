
        
          items_by_user:     [[10, 20, 20],
                      [30, 40, 40]]
    
      Args:
    data: NumPy array.
    file_path: Path to file that will be written.
  '''
  serialized_data = SerializeToString(data)
  with tf.gfile.GFile(file_path, 'w') as f:
    f.write(serialized_data)
    
      def Conversion3dTestWithType(self, dtype):
    original_data = np.arange(24).reshape(2, 3, 4).astype(dtype)
    serialized = datum_io.SerializeToString(original_data)
    retrieved_data = datum_io.ParseFromString(serialized)
    self.assertTrue(np.array_equal(original_data, retrieved_data))
    
        # Run tested function.
    with tf.Graph().as_default() as g, self.session(graph=g) as sess:
      extractor = feature_aggregation_extractor.ExtractAggregatedRepresentation(
          sess, config)
      rasmk_star, visual_words = extractor.Extract(features,
                                                   num_features_per_region)
    
    
def main(unused_argv):
  tf.gfile.MakeDirs(FLAGS.output_dir)
  _convert_dataset(
      'train', FLAGS.train_image_folder, FLAGS.train_image_label_folder)
  _convert_dataset('val', FLAGS.val_image_folder, FLAGS.val_image_label_folder)
    
        # Set up config.
    config = delf_config_pb2.DelfConfig(
        max_image_size=max_image_size, min_image_size=min_image_size)
    
        def __init__(self, dtype=None,
                 shape=None,
                 ndim=None,
                 max_ndim=None,
                 min_ndim=None,
                 axes=None):
        self.dtype = dtype
        self.shape = shape
        if shape is not None:
            self.ndim = len(shape)
        else:
            self.ndim = ndim
        self.max_ndim = max_ndim
        self.min_ndim = min_ndim
        self.axes = axes or {}
    
            methods = read_page_data(page_data, 'methods')
    
        # this will be our label
    image_class = Input(shape=(1,), dtype='int32')
    
    
# Playing with these hyperparameters will also allow you to achieve new effects
step = 0.01  # Gradient ascent step size
num_octave = 3  # Number of scales at which to run gradient ascent
octave_scale = 1.4  # Size ratio between scales
iterations = 20  # Number of ascent steps per scale
max_loss = 10.
    
    model.compile(loss='binary_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])
    
    
@pytest.mark.parametrize('data_format', ['channels_first', 'channels_last'])
@pytest.mark.parametrize('return_sequences', [True, False])
@pytest.mark.parametrize('use_mask', [True, False])
def test_convolutional_recurrent(data_format, return_sequences, use_mask):
    
    
def test_conv_input_length():
    assert conv_utils.conv_input_length(None, 7, 'same', 1) is None
    assert conv_utils.conv_input_length(112, 7, 'same', 1) == 112
    assert conv_utils.conv_input_length(112, 7, 'same', 2) == 223
    assert conv_utils.conv_input_length(28, 5, 'valid', 1) == 32
    assert conv_utils.conv_input_length(14, 5, 'valid', 2) == 31
    assert conv_utils.conv_input_length(36, 5, 'full', 1) == 32
    assert conv_utils.conv_input_length(18, 5, 'full', 2) == 31
    
        @threadsafe_generator
    def custom_generator():
        batch_size = 10
        n_samples = 50
    
    
def get(identifier):
    if isinstance(identifier, dict):
        config = {'class_name': str(identifier), 'config': {}}
        return deserialize(config)
    elif isinstance(identifier, six.string_types):
        return deserialize(str(identifier))
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret '
                         'metric function identifier:', identifier)

    
    '''
import hashlib
import requests
    
        @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
            request_line = '{method} {path}{query} HTTP/1.1'.format(
            method=self._orig.method,
            path=url.path or '/',
            query='?' + url.query if url.query else ''
        )
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
            if self.url and not self.vid:
            html = get_html(self.url)
            tvid = r1(r'#curid=(.+)_', self.url) or \
                   r1(r'tvid=([^&]+)', self.url) or \
                   r1(r'data-player-tvid='([^']+)'', html) or r1(r'tv(?:i|I)d=(.+?)\&', html) or r1(r'param\[\'tvid\'\]\s*=\s*'(.+?)'', html)
            videoid = r1(r'#curid=.+_(.*)$', self.url) or \
                      r1(r'vid=([^&]+)', self.url) or \
                      r1(r'data-player-videoid='([^']+)'', html) or r1(r'vid=(.+?)\&', html) or r1(r'param\[\'vid\'\]\s*=\s*'(.+?)'', html)
            self.vid = (tvid, videoid)
            info_u = 'http://pcw-api.iqiyi.com/video/video/playervideoinfo?tvid=' + tvid
            json_res = get_content(info_u)
            self.title = json.loads(json_res)['data']['vn']
        tvid, videoid = self.vid
        info = getVMS(tvid, videoid)
        assert info['code'] == 'A00000', 'can't play this video'
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    
_DEFAULTS = {
    'threshold': {
        'default': 99.0,
        'info': 'Adjust the threshold for histogram matching. Can reduce extreme colors '
                'leaking in by filtering out colors at the extreme ends of the histogram '
                'spectrum.',
        'datatype': float,
        'rounding': 1,
        'min_max': (90.0, 100.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    }
}

    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
    
class Adjustment():
    ''' Parent class for scaling adjustments '''
    def __init__(self, configfile=None, config=None):
        logger.debug('Initializing %s: (configfile: %s, config: %s)',
                     self.__class__.__name__, configfile, config)
        self.config = self.set_config(configfile, config)
        logger.debug('config: %s', self.config)
        logger.debug('Initialized %s', self.__class__.__name__)
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
    import logging
import os
import sys
    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
            sorted_similarity transforms a distance matrix into a sorted distance matrix according to
        the order implied by the hierarchical tree (dendrogram)
        '''
        logger.info('Sorting face distances. Depending on your dataset this may take some time...')
        num_predictions = predictions.shape[0]
        result_linkage = linkage(predictions, method=method, preserve_input=False)
        result_order = self.seriation(result_linkage,
                                      num_predictions,
                                      num_predictions + num_predictions - 2)