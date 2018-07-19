
        
          # Construct the tagger. This is a simple left-to-right LSTM sequence tagger.
  tagger = spec_builder.ComponentSpecBuilder('tagger')
  tagger.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  tagger.set_transition_system(name='tagger')
  tagger.add_token_link(source=lookahead, fml='input.focus', embedding_dim=64)
    
    from dragnn.protos import spec_pb2
from dragnn.python import bulk_component
from dragnn.python import component
from dragnn.python import dragnn_ops
from dragnn.python import network_units
from syntaxnet import sentence_pb2
    
          # The cost corresponding to the three entries is, respectively,
      # 0.7012, 0.7644, and 1.7269. Each of them is computed using the formula
      # -prob_i * log(sigmoid(logit_i)) - (1-prob_i) * log(1-sigmoid(logit_i))
      self.assertAlmostEqual(cost, 3.1924, 4)
      self.assertEqual(correct, 1)
      self.assertEqual(total, 3)
      self.assertAllEqual(gold_labels, [0, 1, 2])
    
        def __init__(self):
        self.tags = {}
        self.order = []
    
        def __init__(self, root_path, defaults=None):
        dict.__init__(self, defaults or {})
        self.root_path = root_path
    
            buf.append('  Make sure to directly send your %s-request to this URL '
                   'since we can\'t make browsers or HTTP clients redirect '
                   'with form data reliably or without user interaction.' %
                   request.method)
        buf.append('\n\nNote: this exception is only raised in debug mode')
        AssertionError.__init__(self, ''.join(buf).encode('utf-8'))
    
    import logging
import sys
    
            # set explicitly, or cached from SERVER_NAME detection
        # if False, return None
        if rv is not None:
            return rv if rv else None
    
        def _iter_loaders(self, template):
        loader = self.app.jinja_loader
        if loader is not None:
            yield self.app, loader
    
            # We attach the view class to the view function for two reasons:
        # first of all it allows us to easily figure out what class-based
        # view this thing came from, secondly it's also used for instantiating
        # the view class so you can actually replace it with something else
        # for testing purposes and debugging.
        view.view_class = cls
        view.__name__ = name
        view.__doc__ = cls.__doc__
        view.__module__ = cls.__module__
        view.methods = cls.methods
        view.provide_automatic_options = cls.provide_automatic_options
        return view
    
        def __enter__(self):
        gc.disable()
        _gc_lock.acquire()
        loc = flask._request_ctx_stack._local
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
        @classmethod
    def basic_response_server(cls, **kwargs):
        return cls.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 0\r\n\r\n',
            **kwargs
        )
    
        @get_item_parameters
    def test_get(self, key, value):
        assert self.lookup_dict.get(key) == value

    
        @pytest.mark.parametrize(
        ('encoding', 'expected'), (
            ('utf-16-be', 'utf-16'),
            ('utf-16-le', 'utf-16'),
            ('utf-32-be', 'utf-32'),
            ('utf-32-le', 'utf-32')
        ))
    def test_guess_by_bom(self, encoding, expected):
        data = u'\ufeff{}'.encode(encoding)
        assert guess_json_utf(data) == expected
    
        with server as (host, port):
        url = 'http://{0}:{1}/'.format(host, port)
        r = requests.post(url, data=data, stream=True)
        close_server.set()  # release server block
    
        def multiple_domains(self):
        '''Returns True if there are multiple domains in the jar.
        Returns False otherwise.
    
        if hasattr(o, 'tell'):
        try:
            current_position = o.tell()
        except (OSError, IOError):
            # This can happen in some weird situations, such as when the file
            # is actually a special file descriptor like stdin. In this
            # instance, we don't know what the length is, so set it to zero and
            # let requests chunk it instead.
            if total_length is not None:
                current_position = total_length
        else:
            if hasattr(o, 'seek') and total_length is None:
                # StringIO and BytesIO have seek but no useable fileno
                try:
                    # seek to end of file
                    o.seek(0, 2)
                    total_length = o.tell()
    
    >>> requests.codes['temporary_redirect']
307
>>> requests.codes.teapot
418
>>> requests.codes['\o/']
200
    
        Returns:
        pred_heatmaps (ndarray): R x J x M x M array of keypoint location
            logits (softmax inputs) for each of the J keypoint types output
            by the network (must be processed by keypoint_results to convert
            into point predictions in the original image coordinate space)
    '''
    M = cfg.KRCNN.HEATMAP_SIZE
    if boxes.shape[0] == 0:
        pred_heatmaps = np.zeros((0, cfg.KRCNN.NUM_KEYPOINTS, M, M), np.float32)
        return pred_heatmaps
    
    '''Functions for evaluating results computed for a json dataset.'''
    
    '''Handle mapping from old network building function names to new names.
    
    
def add_single_gpu_param_update_ops(model, gpu_id):
    # Learning rate of 0 is a dummy value to be set properly at the
    # start of training
    lr = model.param_init_net.ConstantFill(
        [], 'lr', shape=[1], value=0.0
    )
    one = model.param_init_net.ConstantFill(
        [], 'one', shape=[1], value=1.0
    )
    wd = model.param_init_net.ConstantFill(
        [], 'wd', shape=[1], value=cfg.SOLVER.WEIGHT_DECAY
    )
    # weight decay of GroupNorm's parameters
    wd_gn = model.param_init_net.ConstantFill(
        [], 'wd_gn', shape=[1], value=cfg.SOLVER.WEIGHT_DECAY_GN
    )
    for param in model.TrainableParams(gpu_id=gpu_id):
        logger.debug('param ' + str(param) + ' will be updated')
        param_grad = model.param_to_grad[param]
        # Initialize momentum vector
        param_momentum = model.param_init_net.ConstantFill(
            [param], param + '_momentum', value=0.0
        )
        if param in model.biases:
            # Special treatment for biases (mainly to match historical impl.
            # details):
            # (1) Do not apply weight decay
            # (2) Use a 2x higher learning rate
            model.Scale(param_grad, param_grad, scale=2.0)
        elif param in model.gn_params:
            # Special treatment for GroupNorm's parameters
            model.WeightedSum([param_grad, one, param, wd_gn], param_grad)
        elif cfg.SOLVER.WEIGHT_DECAY > 0:
            # Apply weight decay to non-bias weights
            model.WeightedSum([param_grad, one, param, wd], param_grad)
        # Update param_grad and param_momentum in place
        model.net.MomentumSGDUpdate(
            [param_grad, param_momentum, lr, param],
            [param_grad, param_momentum, param],
            momentum=cfg.SOLVER.MOMENTUM
        )

    
    
def add_single_scale_rpn_losses(model):
    '''Add losses for a single scale RPN model (i.e., no FPN).'''
    # Spatially narrow the full-sized RPN label arrays to match the feature map
    # shape
    model.net.SpatialNarrowAs(
        ['rpn_labels_int32_wide', 'rpn_cls_logits'], 'rpn_labels_int32'
    )
    for key in ('targets', 'inside_weights', 'outside_weights'):
        model.net.SpatialNarrowAs(
            ['rpn_bbox_' + key + '_wide', 'rpn_bbox_pred'], 'rpn_bbox_' + key
        )
    loss_rpn_cls = model.net.SigmoidCrossEntropyLoss(
        ['rpn_cls_logits', 'rpn_labels_int32'],
        'loss_rpn_cls',
        scale=model.GetLossScale()
    )
    loss_rpn_bbox = model.net.SmoothL1Loss(
        [
            'rpn_bbox_pred', 'rpn_bbox_targets', 'rpn_bbox_inside_weights',
            'rpn_bbox_outside_weights'
        ],
        'loss_rpn_bbox',
        beta=1. / 9.,
        scale=model.GetLossScale()
    )
    loss_gradients = blob_utils.get_loss_gradients(
        model, [loss_rpn_cls, loss_rpn_bbox]
    )
    model.AddLosses(['loss_rpn_cls', 'loss_rpn_bbox'])
    return loss_gradients

    
    
def random_boxes(mean_box, stdev, N):
    boxes = np.random.randn(N, 4) * stdev + mean_box
    return boxes.astype(dtype=np.float32)