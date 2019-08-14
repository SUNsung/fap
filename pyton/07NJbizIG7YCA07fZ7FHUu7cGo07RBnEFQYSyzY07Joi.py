
        
          Args:
    datum_pair: DatumPairProto object.
    
    
def create_ssd_anchors(num_layers=6,
                       min_scale=0.2,
                       max_scale=0.95,
                       scales=None,
                       aspect_ratios=(1.0, 2.0, 3.0, 1.0 / 2, 1.0 / 3),
                       interpolated_scale_aspect_ratio=1.0,
                       base_anchor_size=None,
                       anchor_strides=None,
                       anchor_offsets=None,
                       reduce_boxes_in_lowest_layer=True):
  '''Creates MultipleGridAnchorGenerator for SSD anchors.
    
      def test_built_fixed_shape_resizer_grayscale(self):
    image_resizer_text_proto = '''
      fixed_shape_resizer {
        height: 10
        width: 20
        convert_to_grayscale: true
      }
    '''
    input_shape = (50, 25, 3)
    expected_output_shape = (10, 20, 1)
    output_shape = self._shape_of_resized_random_image_given_text_proto(
        input_shape, image_resizer_text_proto)
    self.assertEqual(output_shape, expected_output_shape)
    
      Creates a FIFO queue to asynchronously enqueue tensor_dicts and returns a
  dequeue op that evaluates to a tensor_dict. This function is useful in
  prefetching preprocessed tensors so that the data is readily available for
  consumers.
    
        Returns:
      result_dict: a dictionary of numpy arrays
      result_losses_dict: a dictionary of scalar losses. This is empty if input
        losses_dict is None.
    '''
    try:
      if not losses_dict:
        losses_dict = {}
      result_dict, result_losses_dict = sess.run([tensor_dict, losses_dict])
      counters['success'] += 1
    except tf.errors.InvalidArgumentError:
      logging.info('Skipping image')
      counters['skipped'] += 1
      return {}, {}
    global_step = tf.train.global_step(sess, tf.train.get_global_step())
    if batch_index < eval_config.num_visualizations:
      tag = 'image-{}'.format(batch_index)
      eval_util.visualize_detection_results(
          result_dict,
          tag,
          global_step,
          categories=categories,
          summary_dir=eval_dir,
          export_dir=eval_config.visualization_export_dir,
          show_groundtruth=eval_config.visualize_groundtruth_boxes,
          groundtruth_box_visualization_color=eval_config.
          groundtruth_box_visualization_color,
          min_score_thresh=eval_config.min_score_threshold,
          max_num_predictions=eval_config.max_num_boxes_to_visualize,
          skip_scores=eval_config.skip_scores,
          skip_labels=eval_config.skip_labels,
          keep_image_id_for_visualization_export=eval_config.
          keep_image_id_for_visualization_export)
    return result_dict, result_losses_dict
    
      Args:
    create_tensor_dict_fn: a function to create a tensor input dictionary.
    create_model_fn: a function that creates a DetectionModel and generates
                     losses.
    train_config: a train_pb2.TrainConfig protobuf.
    master: BNS name of the TensorFlow master to use.
    task: The task id of this training instance.
    num_clones: The number of clones to run per machine.
    worker_replicas: The number of work replicas to train with.
    clone_on_cpu: True if clones should be forced to run on CPU.
    ps_tasks: Number of parameter server tasks.
    worker_job_name: Name of the worker job.
    is_chief: Whether this replica is the chief replica.
    train_dir: Directory to write checkpoints and training summaries to.
    graph_hook_fn: Optional function that is called after the inference graph is
      built (before optimization). This is helpful to perform additional changes
      to the training graph such as adding FakeQuant ops. The function should
      modify the default graph.
    
        Args:
      rpn_box_encodings: 3-D float tensor of shape
        [batch_size, num_valid_anchors, self._box_coder.code_size] containing
        predicted boxes.
      rpn_objectness_predictions_with_background: 3-D float tensor of shape
        [batch_size, num_valid_anchors, 2] containing class
        predictions (logits) for each of the anchors.  Note that this
        tensor *includes* background class predictions (at class index 0).
      rpn_features: A 4-D float32 tensor with shape
        [batch_size, height, width, depth] representing image features from the
        RPN.
      anchors: 2-D float tensor of shape
        [num_anchors, self._box_coder.code_size].
      image_shape: A 1D int32 tensors of size [4] containing the image shape.
      true_image_shapes: int32 tensor of shape [batch, 3] where each row is
        of the form [height, width, channels] indicating the shapes
        of true images in the resized images, as resized images can be padded
        with zeros.
    
      return {
      BOX_ENCODINGS:
          prediction_dict[BOX_ENCODINGS].shape.as_list(),
      CLASS_PREDICTIONS_WITH_BACKGROUND:
          prediction_dict[CLASS_PREDICTIONS_WITH_BACKGROUND].shape.as_list(),
      ANCHORS:
          prediction_dict[ANCHORS].shape.as_list(),
  }
    
    
class SouthParkIE(MTVServicesInfoExtractor):
    IE_NAME = 'southpark.cc.com'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southpark\.cc\.com/(?:clips|(?:full-)?episodes|collections)/(?P<id>.+?)(\?|#|$))'
    
            if app_js_url:
            app_js = self._download_webpage(
                app_js_url, channel_code, 'Downloading app JS', fatal=False)
            if app_js:
                app_id = self._search_regex(
                    r'Global\.VFAN_APP_ID\s*=\s*[\'']([^\'']+)[\'']',
                    app_js, 'app id', default=None)
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    names = []
for ie in ordered_cls:
    name = ie.__name__
    src = build_lazy_ie(ie, name)
    module_contents.append(src)
    if ie in _ALL_CLASSES:
        names.append(name)
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    # NAME
    
        def as_postgresql(self, compiler, connection, **extra_context):
        # Cast FloatField to DecimalField as PostgreSQL doesn't support the
        # following function signatures:
        # - LOG(double, double)
        # - MOD(double, double)
        output_field = DecimalField(decimal_places=sys.float_info.dig, max_digits=1000)
        clone = self.copy()
        clone.set_source_expressions([
            Cast(expression, output_field) if isinstance(expression.output_field, FloatField)
            else expression for expression in self.get_source_expressions()
        ])
        return clone.as_sql(compiler, connection, **extra_context)
    
        def test_deconstruction(self):
        index = HashIndex(fields=['title'], name='test_title_hash', fillfactor=80)
        path, args, kwargs = index.deconstruct()
        self.assertEqual(path, 'django.contrib.postgres.indexes.HashIndex')
        self.assertEqual(args, ())
        self.assertEqual(kwargs, {'fields': ['title'], 'name': 'test_title_hash', 'fillfactor': 80})
    
        Test classes using this mixin need to define a `work_subdir` attribute
    which designates the subdir under `tests/i18n/` that will be copied to the
    temporary tree from which its test cases will run.
    
    
def decorator_from_middleware_with_args(middleware_class):
    '''
    Like decorator_from_middleware, but return a function
    that accepts the arguments to be passed to the middleware_class.
    Use like::
    
                self.assertMsgId('Translatable literal #9g', po_contents)
            self.assertIn('#. Translators: valid i18n comment #6', po_contents)
            self.assertMsgId('Translatable literal #9h', po_contents)
            self.assertIn('#. Translators: valid i18n comment #7', po_contents)
            self.assertMsgId('Translatable literal #9i', po_contents)
    
     The ds_driver keyword is used internally when a ctypes pointer
 is passed in directly.
    
            # Getting the pointer for this field.
        fld_ptr = capi.get_feat_field_defn(feat.ptr, index)
        if not fld_ptr:
            raise GDALException('Cannot create OGR Field, invalid pointer given.')
        self.ptr = fld_ptr
    
        def _set_spatial_filter(self, filter):
        if isinstance(filter, OGRGeometry):
            capi.set_spatial_filter(self.ptr, filter.ptr)
        elif isinstance(filter, (tuple, list)):
            if not len(filter) == 4:
                raise ValueError('Spatial filter list/tuple must have 4 elements.')
            # Map c_double onto params -- if a bad type is passed in it
            # will be caught here.
            xmin, ymin, xmax, ymax = map(c_double, filter)
            capi.set_spatial_filter_rect(self.ptr, xmin, ymin, xmax, ymax)
        elif filter is None:
            capi.set_spatial_filter(self.ptr, None)
        else:
            raise TypeError('Spatial filter must be either an OGRGeometry instance, a 4-tuple, or None.')
    
    
class GDALBand(GDALRasterBase):
    '''
    Wrap a GDAL raster band, needs to be obtained from a GDALRaster object.
    '''
    def __init__(self, source, index):
        self.source = source
        self._ptr = capi.get_ds_raster_band(source._ptr, index)
    
    
def get_default_mask():
    ''' Set the default mask for cli '''
    masks = get_available_masks()
    default = 'dfl_full'
    default = default if default in masks else masks[0]
    logger.debug(default)
    return default
    
        def set_defaults(self):
        ''' Set the default values for config '''
        logger.debug('Setting defaults')
        current_dir = os.path.dirname(__file__)
        for dirpath, _, filenames in os.walk(current_dir):
            default_files = [fname for fname in filenames if fname.endswith('_defaults.py')]
            if not default_files:
                continue
            base_path = os.path.dirname(os.path.realpath(sys.argv[0]))
            import_path = '.'.join(full_path_split(dirpath.replace(base_path, ''))[1:])
            plugin_type = import_path.split('.')[-1]
            for filename in default_files:
                self.load_module(filename, import_path, plugin_type)
    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
    from ._base import Adjustment, BlurMask, logger
    
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
    
    
_DEFAULTS = {
    'container': {
        'default': 'mp4',
        'info': 'Video container to use.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['avi', 'flv', 'mkv', 'mov', 'mp4', 'mpeg', 'webm'],
        'gui_radio': True,
        'fixed': True,
    },
    'codec': {
        'default': 'libx264',
        'info': 'Video codec to use:'
                '\n\t libx264: H.264. A widely supported and commonly used codec.'
                '\n\t libx265: H.265 / HEVC video encoder application library.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['libx264', 'libx265'],
        'gui_radio': True,
        'fixed': True,
    },
    'crf': {
        'default': 23,
        'info': 'Constant Rate Factor:  0 is lossless and 51 is worst quality possible. A '
                'lower value generally leads to higher quality, and a subjectively sane range '
                'is 17-28. Consider 17 or 18 to be visually lossless or nearly so; it should '
                'look the same or nearly the same as the input but it isn't technically '
                'lossless.\nThe range is exponential, so increasing the CRF value +6 results '
                'in roughly half the bitrate / file size, while -6 leads to roughly twice the '
                'bitrate.',
        'datatype': int,
        'rounding': 1,
        'min_max': (0, 51),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'preset': {
        'default': 'medium',
        'info': 'A preset is a collection of options that will provide a certain encoding '
                'speed to compression ratio.\nA slower preset will provide better compression '
                '(compression is quality per filesize).\nUse the slowest preset that you have '
                'patience for.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': [
            'ultrafast',
            'superfast',
            'veryfast',
            'faster',
            'fast',
            'medium',
            'slow',
            'slower',
            'veryslow',
        ],
        'gui_radio': True,
        'fixed': True,
    },
    'tune': {
        'default': 'none',
        'info': 'Change settings based upon the specifics of your input:'
                '\n\t none: Don't perform any additional tuning.'
                '\n\t film: [H.264 only] Use for high quality movie content; lowers '
                'deblocking.'
                '\n\t animation: [H.264 only] Good for cartoons; uses higher deblocking and '
                'more reference frames.'
                '\n\t grain: Preserves the grain structure in old, grainy film material.'
                '\n\t stillimage: [H.264 only] Good for slideshow-like content.'
                '\n\t fastdecode: Allows faster decoding by disabling certain filters.'
                '\n\t zerolatency: Good for fast encoding and low-latency streaming.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': [
            'none',
            'film',
            'animation',
            'grain',
            'stillimage',
            'fastdecode',
            'zerolatency',
        ],
        'gui_radio': False,
        'fixed': True,
    },
    'profile': {
        'default': 'auto',
        'info': '[H.264 Only] Limit the output to a specific H.264 profile. Don't change this '
                'unless your target device only supports a certain profile.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['auto', 'baseline', 'main', 'high', 'high10', 'high422', 'high444'],
        'gui_radio': False,
        'fixed': True,
    },
    'level': {
        'default': 'auto',
        'info': '[H.264 Only] Set the encoder level, Don't change this unless your target '
                'device only supports a certain level.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': [
            'auto',
            '1',
            '1b',
            '1.1',
            '1.2',
            '1.3',
            '2',
            '2.1',
            '2.2',
            '3',
            '3.1',
            '3.2',
            '4',
            '4.1',
            '4.2',
            '5',
            '5.1',
            '5.2',
            '6',
            '6.1',
            '6.2',
        ],
        'gui_radio': False,
        'fixed': True,
    },
}

    
        def check_transparency_format(self):
        ''' Make sure that the output format is correct if draw_transparent is selected '''
        transparent = self.config['draw_transparent']
        if not transparent or (transparent and self.config['format'] == 'png'):
            return
        logger.warning('Draw Transparent selected, but the requested format does not support '
                       'transparency. Changing output format to 'png'')
        self.config['format'] = 'png'
    
    In Blackboard pattern several specialised sub-systems (knowledge sources)
assemble their knowledge to build a possibly partial or approximate solution.
In this way, the sub-systems work together to solve the problem,
where the solution is the sum of its parts.
    
        def check_range(self, request):
        if self.start <= request < self.end:
            print('request {} handled in handler 1'.format(request))
            return True
    
        def rollback(self):
        for a_state in self.states:
            a_state()
    
    
# Example usage...
def main():
    '''
    >>> data1 = Data('Data 1')
    >>> data2 = Data('Data 2')
    >>> view1 = DecimalViewer()
    >>> view2 = HexViewer()
    >>> data1.attach(view1)
    >>> data1.attach(view2)
    >>> data2.attach(view2)
    >>> data2.attach(view1)
    
        print('`{}` was processed'.format(data))
    
    import random
    
    *TL;DR
Creates new object instances by cloning prototype.
'''
    
    try:
    # compatible for python2
    from urllib2 import urlopen
    from urllib2 import HTTPError
    from urllib2 import URLError
except ImportError:
    # compatible for python3
    from urllib.request import urlopen
    from urllib.error import HTTPError
    from urllib.error import URLError