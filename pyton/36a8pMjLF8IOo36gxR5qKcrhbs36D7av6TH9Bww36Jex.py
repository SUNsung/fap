
        
            def message_user(self, friend_id, message):
        pass
    
        def can_fit_in_spot(self, spot):
        return spot.size in (VehicleSize.LARGE, VehicleSize.COMPACT)
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
    
class UserGraphService(object):
    
    _StateKeys = v1._StateKeys  # pylint: disable=protected-access
    
      Returns:
    a MultipleGridAnchorGenerator
  '''
  if base_anchor_size is None:
    base_anchor_size = [1.0, 1.0]
  box_specs_list = []
  if scales is None or not scales:
    scales = [min_scale + (max_scale - min_scale) * i / (num_layers - 1)
              for i in range(num_layers)] + [1.0]
  else:
    # Add 1.0 to the end, which will only be used in scale_next below and used
    # for computing an interpolated scale for the largest scale in the list.
    scales += [1.0]
    
      if optimizer_type == 'momentum_optimizer':
    config = optimizer_config.momentum_optimizer
    learning_rate = _create_learning_rate(config.learning_rate,
                                          global_step=global_step)
    summary_vars.append(learning_rate)
    optimizer = tf.train.MomentumOptimizer(
        learning_rate,
        momentum=config.momentum_optimizer_value)
    
        Args:
      indicator: boolean tensor of shape [N] whose True entries can be sampled.
      batch_size: desired batch size. If None, keeps all positive samples and
        randomly selects negative samples so that the positive sample fraction
        matches self._positive_fraction. It cannot be None is is_static is True.
      labels: boolean tensor of shape [N] denoting positive(=True) and negative
          (=False) examples.
      scope: name scope.
    
    import tensorflow as tf
from google.protobuf import text_format
from object_detection import export_tflite_ssd_graph_lib
from object_detection.protos import pipeline_pb2
    
        prediction_dict = {
        'refined_box_encodings': refined_box_encodings,
        'class_predictions_with_background':
        class_predictions_with_background,
        'num_proposals': num_proposals,
        'proposal_boxes': absolute_proposal_boxes,
        'box_classifier_features': box_classifier_features,
        'proposal_boxes_normalized': proposal_boxes_normalized,
    }
    return prediction_dict
    
      ECE is a scalar summary statistic of calibration error. It is the
  sample-weighted average of the difference between the predicted and true
  probabilities of a positive detection across uniformly-spaced model
  confidences [0, 1]. See referenced paper for a thorough explanation.
    
    
# admin for #19425 and #18388
class BinaryTreeAdmin(admin.TabularInline):
    model = BinaryTree
    
        def test_version_dev_tuple(self):
        expect = ('1.2.3dev', 1, 2, 3)
        ops = FakePostGISOperations(expect[0])
        actual = ops.postgis_version_tuple()
        self.assertEqual(expect, actual)
    
        # Copy any attributes that a decorator adds to the function it decorates.
    for dec in decorators:
        _update_method_wrapper(_wrapper, dec)
    # Preserve any existing attributes of 'method', including the name.
    update_wrapper(_wrapper, method)
    return _wrapper
    
        def __init__(self, layer_ptr, ds):
        '''
        Initialize on an OGR C pointer to the Layer and the `DataSource` object
        that owns this layer.  The `DataSource` object is required so that a
        reference to it is kept with this Layer.  This prevents garbage
        collection of the `DataSource` while this Layer is still active.
        '''
        if not layer_ptr:
            raise GDALException('Cannot create Layer, invalid pointer given')
        self.ptr = layer_ptr
        self._ds = ds
        self._ldefn = capi.get_layer_defn(self._ptr)
        # Does the Layer support random reading?
        self._random_read = self.test_capability(b'RandomRead')
    
            setting_name, refid = get_setting_name_and_refid(node)
    
                    # Read the new file to memory
                with open(_filename) as _file:
                    _contents = _file.read()
    
        def _reset_stats(self):
        self.tail.clear()
        self.start = self.lastmark = self.lasttime = time()
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    
class ScrapyCommand(object):
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
        def __init__(self, settings, aws_access_key_id=None, aws_secret_access_key=None, \
            httpdownloadhandler=HTTPDownloadHandler, **kw):
    
    import six
from w3lib import html
    
    try:
    from cStringIO import StringIO as BytesIO
except ImportError:
    from io import BytesIO