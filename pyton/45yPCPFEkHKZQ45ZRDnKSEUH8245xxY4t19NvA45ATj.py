
        
        
def _dump_loader_info(loader):
    yield 'class: %s.%s' % (type(loader).__module__, type(loader).__name__)
    for key, value in sorted(loader.__dict__.items()):
        if key.startswith('_'):
            continue
        if isinstance(value, (tuple, list)):
            if not all(isinstance(x, (str, text_type)) for x in value):
                continue
            yield '%s:' % key
            for item in value:
                yield '  - %s' % item
            continue
        elif not isinstance(value, (str, text_type, int, float, bool)):
            continue
        yield '%s: %r' % (key, value)
    
        class _TestHandler(logging.Handler):
        def handle(x, record):
            called.append(True)
            text = str(record.msg)
            assert '1: trying loader of application 'blueprintapp'' in text
            assert ('2: trying loader of blueprint 'admin' '
                    '(blueprintapp.apps.admin)') in text
            assert ('trying loader of blueprint 'frontend' '
                    '(blueprintapp.apps.frontend)') in text
            assert 'Error: the template could not be found' in text
            assert ('looked up from an endpoint that belongs to '
                    'the blueprint 'frontend'') in text
            assert 'See http://flask.pocoo.org/docs/blueprints/#templates' in text
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def print_debug_info(env):
    env.stderr.writelines([
        'HTTPie %s\n' % httpie_version,
        'Requests %s\n' % requests_version,
        'Pygments %s\n' % pygments_version,
        'Python %s\n%s\n' % (sys.version, sys.executable),
        '%s %s' % (platform.system(), platform.release()),
    ])
    env.stderr.write('\n\n')
    env.stderr.write(repr(env))
    env.stderr.write('\n')
    
        def test_cert_and_key(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', CLIENT_CERT,
                 '--cert-key', CLIENT_KEY)
        assert HTTP_OK in r
    
        def get_auth_plugin_mapping(self):
        return {plugin.auth_type: plugin for plugin in self.get_auth_plugins()}
    
        kwargs = get_requests_kwargs(args, base_headers=session.headers)
    if args.debug:
        dump_request(kwargs)
    session.update_headers(kwargs['headers'])
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def __init__(self, username, password):
        self.username = username
        self.password = password
    
        # Get options and arguments.
    try:
        opts, args = getopt.getopt(sys.argv[1:], _short_options, _options)
    except getopt.GetoptError as e:
        log.wtf('''
    [Fatal] {}.
    Try '{} --help' for more options.'''.format(e, script_name))
    
    from ..common import *
    
        while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
    
site_info = 'kugou.com'
download = kugou_download
# download_playlist = playlist_not_supported('kugou')
download_playlist=kugou_download_playlist

    
    site_info = 'Mixcloud.com'
download = mixcloud_download
download_playlist = playlist_not_supported('mixcloud')

    
    def stripped(line):
    # Remove well-formed html tags, fixing mistakes by legitimate users
    sline = TAG_REGEX.sub('', line)
    sline = re.sub('[()\[\]#*]', ' ', line)
    return sline
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
        def run(self, msg):
        print('{} got {}'.format(self.name, msg))
    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
        
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    ### OUTPUT ###
# renaming foo.txt to bar.txt
# renaming bar.txt to baz.txt
# renaming baz.txt to bar.txt
# renaming bar.txt to foo.txt

    
        return restore
    
    
class User(object):
    
    
def remove_spatial_bn_layers(caffenet, caffenet_weights):
    # Layer types associated with spatial batch norm
    remove_types = ['BatchNorm', 'Scale']
    
        # go down dets and mark TPs and FPs
    nd = len(image_ids)
    tp = np.zeros(nd)
    fp = np.zeros(nd)
    for d in range(nd):
        R = class_recs[image_ids[d]]
        bb = BB[d, :].astype(float)
        ovmax = -np.inf
        BBGT = R['bbox'].astype(float)
    
    from detectron.core.config import cfg
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
import detectron.modeling.ResNet as ResNet
import detectron.utils.blob as blob_utils
    
        optim.build_data_parallel_model(model, _single_gpu_build_func)
    return model
    
    $ find . -name '*.yaml' -exec sed -i -e \
   's/head_builder\.add_roi_2mlp_head/fast_rcnn_heads.add_roi_2mlp_head/g' {} \;
    
    
def _add_allreduce_graph(model):
    '''Construct the graph that performs Allreduce on the gradients.'''
    # Need to all-reduce the per-GPU gradients if training with more than 1 GPU
    all_params = model.TrainableParams()
    assert len(all_params) % cfg.NUM_GPUS == 0
    # The model parameters are replicated on each GPU, get the number
    # distinct parameter blobs (i.e., the number of parameter blobs on
    # each GPU)
    params_per_gpu = int(len(all_params) / cfg.NUM_GPUS)
    with c2_utils.CudaScope(0):
        # Iterate over distinct parameter blobs
        for i in range(params_per_gpu):
            # Gradients from all GPUs for this parameter blob
            gradients = [
                model.param_to_grad[p] for p in all_params[i::params_per_gpu]
            ]
            if len(gradients) > 0:
                if cfg.USE_NCCL:
                    model.net.NCCLAllreduce(gradients, gradients)
                else:
                    muji.Allreduce(model.net, gradients, reduced_affix='')
    
        # ==========================================================================
    # classification tower with logits and prob prediction
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        bl_in = blobs_in[k_max - lvl]  # blobs_in is in reversed order
        # classification tower stack convolution starts
        for nconv in range(cfg.RETINANET.NUM_CONVS):
            suffix = 'n{}_fpn{}'.format(nconv, lvl)
            dim_in, dim_out = dim_in, dim_in
            if lvl == k_min:
                bl_out = model.Conv(
                    bl_in,
                    'retnet_cls_conv_' + suffix,
                    dim_in,
                    dim_out,
                    3,
                    stride=1,
                    pad=1,
                    weight_init=('GaussianFill', {
                        'std': 0.01
                    }),
                    bias_init=('ConstantFill', {
                        'value': 0.
                    })
                )
            else:
                bl_out = model.ConvShared(
                    bl_in,
                    'retnet_cls_conv_' + suffix,
                    dim_in,
                    dim_out,
                    3,
                    stride=1,
                    pad=1,
                    weight='retnet_cls_conv_n{}_fpn{}_w'.format(nconv, k_min),
                    bias='retnet_cls_conv_n{}_fpn{}_b'.format(nconv, k_min)
                )
            bl_in = model.Relu(bl_out, bl_out)
            bl_feat = bl_in
        # cls tower stack convolution ends. Add the logits layer now
        if lvl == k_min:
            retnet_cls_pred = model.Conv(
                bl_feat,
                'retnet_cls_pred_fpn{}'.format(lvl),
                dim_in,
                cls_pred_dim * A,
                3,
                pad=1,
                stride=1,
                weight_init=('GaussianFill', {
                    'std': 0.01
                }),
                bias_init=bias_init
            )
        else:
            retnet_cls_pred = model.ConvShared(
                bl_feat,
                'retnet_cls_pred_fpn{}'.format(lvl),
                dim_in,
                cls_pred_dim * A,
                3,
                pad=1,
                stride=1,
                weight='retnet_cls_pred_fpn{}_w'.format(k_min),
                bias='retnet_cls_pred_fpn{}_b'.format(k_min)
            )
        if not model.train:
            if cfg.RETINANET.SOFTMAX:
                model.net.GroupSpatialSoftmax(
                    retnet_cls_pred,
                    'retnet_cls_prob_fpn{}'.format(lvl),
                    num_classes=cls_pred_dim
                )
            else:
                model.net.Sigmoid(
                    retnet_cls_pred, 'retnet_cls_prob_fpn{}'.format(lvl)
                )
        if cfg.RETINANET.SHARE_CLS_BBOX_TOWER:
            bbox_feat_list.append(bl_feat)
    
            outputs[0].reshape(rois.shape)
        outputs[0].data[...] = rois
        if len(outputs) > 1:
            outputs[1].reshape(roi_probs.shape)
            outputs[1].data[...] = roi_probs
    
        # Broacast anchors over shifts to enumerate all anchors at all positions
    # in the (H, W) grid:
    #   - add A cell anchors of shape (1, A, 4) to
    #   - K shifts of shape (K, 1, 4) to get
    #   - all shifted anchors of shape (K, A, 4)
    #   - reshape to (K*A, 4) shifted anchors
    A = num_cell_anchors
    K = shifts.shape[0]
    field_of_anchors = (
        cell_anchors.reshape((1, A, 4)) +
        shifts.reshape((1, K, 4)).transpose((1, 0, 2))
    )
    field_of_anchors = field_of_anchors.reshape((K * A, 4))
    foa = FieldOfAnchors(
        field_of_anchors=field_of_anchors.astype(np.float32),
        num_cell_anchors=num_cell_anchors,
        stride=stride,
        field_size=field_size,
        octave=octave,
        aspect=aspect
    )
    _threadlocal_foa.cache[cache_key] = foa
    return foa
    
        return blob, im_scales

    
    
def add_retinanet_blobs(blobs, im_scales, roidb, image_width, image_height):
    '''Add RetinaNet blobs.'''
    # RetinaNet is applied to many feature levels, as in the FPN paper
    k_max, k_min = cfg.FPN.RPN_MAX_LEVEL, cfg.FPN.RPN_MIN_LEVEL
    scales_per_octave = cfg.RETINANET.SCALES_PER_OCTAVE
    num_aspect_ratios = len(cfg.RETINANET.ASPECT_RATIOS)
    aspect_ratios = cfg.RETINANET.ASPECT_RATIOS
    anchor_scale = cfg.RETINANET.ANCHOR_SCALE
    
            # Test: merge with an invalid key
        s = 'dummy3'
        cfg2 = AttrDict()
        cfg2.FOO = AttrDict()
        cfg2.FOO.BAR = s
        with self.assertRaises(KeyError):
            core_config.merge_cfg_from_cfg(cfg2)