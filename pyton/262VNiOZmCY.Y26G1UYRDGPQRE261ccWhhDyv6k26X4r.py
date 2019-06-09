
        
            with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post['title'] == 'updated'
    
        signals_available = True
except ImportError:
    signals_available = False
    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
        get_item_parameters = pytest.mark.parametrize(
        'key, value', (
            ('bad_gateway', 502),
            ('not_a_key', None)
        )
    )
    
    
    {        Generic:                   '#000000',        # class: 'g'
        Generic.Deleted:           '#a40000',        # class: 'gd'
        Generic.Emph:              'italic #000000', # class: 'ge'
        Generic.Error:             '#ef2929',        # class: 'gr'
        Generic.Heading:           'bold #000080',   # class: 'gh'
        Generic.Inserted:          '#00A000',        # class: 'gi'
        Generic.Output:            '#888',           # class: 'go'
        Generic.Prompt:            '#745334',        # class: 'gp'
        Generic.Strong:            'bold #000000',   # class: 'gs'
        Generic.Subheading:        'bold #800080',   # class: 'gu'
        Generic.Traceback:         'bold #a40000',   # class: 'gt'
    }

    
    import chardet
    
        Requests does not use the dict interface internally; it's just for
    compatibility with external client code. All requests code should work
    out of the box with externally provided instances of ``CookieJar``, e.g.
    ``LWPCookieJar`` and ``FileCookieJar``.
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    
def get(url, params=None, **kwargs):
    r'''Sends a GET request.
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        # validate function_name if present
    function_name = module.params['function_name']
    if function_name:
        if not re.search(r'^[\w\-:]+$', function_name):
            module.fail_json(
                msg='Function name {0} is invalid. Names must contain only alphanumeric characters and hyphens.'.format(function_name)
            )
        if len(function_name) > 64:
            module.fail_json(msg='Function name '{0}' exceeds 64 character limit'.format(function_name))
    
            # manage host state
        desired_state = self.get_parameter('state')
        if bool(host):
            current_state = host.STATE
            current_state_name = HOST_STATES(host.STATE).name
        else:
            current_state = HOST_ABSENT
            current_state_name = 'ABSENT'
    
        module = AnsibleModule(argument_spec, supports_check_mode=True)
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
            if hostgroup is not None:
            changed = client.modify_if_diff(name, ipa_role.get('member_hostgroup', []), hostgroup,
                                            client.role_add_hostgroup,
                                            client.role_remove_hostgroup) or changed
    
        # Send the data to airbrake
    data = urlencode(params)
    response, info = fetch_url(module, url, data=data)
    if info['status'] == 200:
        module.exit_json(changed=True)
    else:
        module.fail_json(msg='HTTP result code: %d connecting to %s' % (info['status'], url))
    
        module = AnsibleModule(
        argument_spec=dict(
            token=dict(required=True, no_log=True),
            environment=dict(required=True),
            user=dict(required=False),
            repo=dict(required=False),
            revision=dict(required=False),
            url=dict(required=False, default='https://api.honeybadger.io/v1/deploys'),
            validate_certs=dict(default='yes', type='bool'),
        ),
        supports_check_mode=True
    )
    
    
    def getChannel(self):
        return self.channel
    
    def setChannel(self, channel):
        self.channel = channel
    
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
    OLD_REWRITE_HTTPS_ARGS = [
    ['^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[L,QSA,R=permanent]'],
    ['^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,QSA,R=permanent]']]
    
        def test_repr(self):
        self.assertEqual(repr(self.addr2), 'certbot_apache.obj.Addr(('127.0.0.1', '443'))')
    
    # How to display URL addresses: 'footnote', 'no', or 'inline'.
#texinfo_show_urls = 'footnote'
    
    # mapping coco categories to cityscapes (our converted json) id
# cityscapes
# INFO roidb.py: 220: 1       bicycle: 7286
# INFO roidb.py: 220: 2           car: 53684
# INFO roidb.py: 220: 3        person: 35704
# INFO roidb.py: 220: 4         train: 336
# INFO roidb.py: 220: 5         truck: 964
# INFO roidb.py: 220: 6    motorcycle: 1468
# INFO roidb.py: 220: 7           bus: 758
# INFO roidb.py: 220: 8         rider: 3504
    
    
def add_fast_rcnn_losses(model):
    '''Add losses for RoI classification and bounding box regression.'''
    cls_prob, loss_cls = model.net.SoftmaxWithLoss(
        ['cls_score', 'labels_int32'], ['cls_prob', 'loss_cls'],
        scale=model.GetLossScale()
    )
    loss_bbox = model.net.SmoothL1Loss(
        [
            'bbox_pred', 'bbox_targets', 'bbox_inside_weights',
            'bbox_outside_weights'
        ],
        'loss_bbox',
        scale=model.GetLossScale()
    )
    loss_gradients = blob_utils.get_loss_gradients(model, [loss_cls, loss_bbox])
    model.Accuracy(['cls_prob', 'labels_int32'], 'accuracy_cls')
    model.AddLosses(['loss_cls', 'loss_bbox'])
    model.AddMetrics('accuracy_cls')
    return loss_gradients
    
    
def _scale_enum(anchor, scales):
    '''Enumerate a set of anchors for each scale wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    ws = w * scales
    hs = h * scales
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors

    
    
def add_keypoint_losses(model):
    '''Add Mask R-CNN keypoint specific losses.'''
    # Reshape input from (N, K, H, W) to (NK, HW)
    model.net.Reshape(
        ['kps_score'], ['kps_score_reshaped', '_kps_score_old_shape'],
        shape=(-1, cfg.KRCNN.HEATMAP_SIZE * cfg.KRCNN.HEATMAP_SIZE)
    )
    # Softmax across **space** (woahh....space!)
    # Note: this is not what is commonly called 'spatial softmax'
    # (i.e., softmax applied along the channel dimension at each spatial
    # location); This is softmax applied over a set of spatial locations (i.e.,
    # each spatial location is a 'class').
    kps_prob, loss_kps = model.net.SoftmaxWithLoss(
        ['kps_score_reshaped', 'keypoint_locations_int32', 'keypoint_weights'],
        ['kps_prob', 'loss_kps'],
        scale=cfg.KRCNN.LOSS_WEIGHT / cfg.NUM_GPUS,
        spatial=0
    )
    if not cfg.KRCNN.NORMALIZE_BY_VISIBLE_KEYPOINTS:
        # Discussion: the softmax loss above will average the loss by the sum of
        # keypoint_weights, i.e. the total number of visible keypoints. Since
        # the number of visible keypoints can vary significantly between
        # minibatches, this has the effect of up-weighting the importance of
        # minibatches with few visible keypoints. (Imagine the extreme case of
        # only one visible keypoint versus N: in the case of N, each one
        # contributes 1/N to the gradient compared to the single keypoint
        # determining the gradient direction). Instead, we can normalize the
        # loss by the total number of keypoints, if it were the case that all
        # keypoints were visible in a full minibatch. (Returning to the example,
        # this means that the one visible keypoint contributes as much as each
        # of the N keypoints.)
        model.StopGradient(
            'keypoint_loss_normalizer', 'keypoint_loss_normalizer'
        )
        loss_kps = model.net.Mul(
            ['loss_kps', 'keypoint_loss_normalizer'], 'loss_kps_normalized'
        )
    loss_gradients = blob_utils.get_loss_gradients(model, [loss_kps])
    model.AddLosses(loss_kps)
    return loss_gradients
    
    '''Optimization operator graph construction.'''
    
    import logging
    
            print('Test: More than one element')
        stack = Stack()
        stack.push(1)
        stack.push(2)
        stack.push(3)
        assert_equal(stack.pop(), 3)
        assert_equal(stack.peek(), 2)
        assert_equal(stack.pop(), 2)
        assert_equal(stack.peek(), 1)
        assert_equal(stack.is_empty(), False)
        assert_equal(stack.pop(), 1)
        assert_equal(stack.peek(), None)
        assert_equal(stack.is_empty(), True)
    
            print('Test: remove on a key that doesn't exist')
        assert_raises(KeyError, hash_table.remove, -1)