
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
        def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
    from mrjob.job import MRJob
    
        def mapper(self, _, line):
        yield line, 1
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
    import requests.auth
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
    
FILE_PATH_ARG = patharg(FILE_PATH)
BIN_FILE_PATH_ARG = patharg(BIN_FILE_PATH)
JSON_FILE_PATH_ARG = patharg(JSON_FILE_PATH)
    
        def test_print_overridable_when_stdout_redirected(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=h', 'GET', httpbin.url + '/get', env=env)
        assert HTTP_OK in r

    
    
def test_unicode_url_query_arg_item(httpbin):
    r = http(httpbin.url + '/get', u'test==%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['args'] == {'test': UNICODE}, r
    
        for i in range(1, 6):
        fpath = os.path.join(path, 'data_batch_' + str(i))
        (x_train[(i - 1) * 10000: i * 10000, :, :, :],
         y_train[(i - 1) * 10000: i * 10000]) = load_batch(fpath)
    
        fpath = os.path.join(path, 'test')
    x_test, y_test = load_batch(fpath, label_key=label_mode + '_labels')
    
        with tf.name_scope('augmentation'):
        shp = tf.shape(inputs)
        batch_size, height, width = shp[0], shp[1], shp[2]
        width = tf.cast(width, tf.float32)
        height = tf.cast(height, tf.float32)
    
    This script loads the s2s.h5 model saved by lstm_seq2seq.py and generates
sequences from it.  It assumes that no changes have been made (for example:
latent_dim is unchanged, and the input data and model architecture are unchanged).
    
    print('Training')
model_stateless.fit(x_train,
                    y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_data=(x_test, y_test),
                    shuffle=False)
    
    x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    '''
requests.exceptions
~~~~~~~~~~~~~~~~~~~
    
    import pytest
from requests.compat import urljoin
    
    Requests is an HTTP library, written in Python, for human beings. Basic GET
usage:
    
            :param proxy: The proxy to return a urllib3 ProxyManager for.
        :param proxy_kwargs: Extra keyword arguments used to configure the Proxy Manager.
        :returns: ProxyManager
        :rtype: urllib3.ProxyManager
        '''
        if proxy in self.proxy_manager:
            manager = self.proxy_manager[proxy]
        elif proxy.lower().startswith('socks'):
            username, password = get_auth_from_url(proxy)
            manager = self.proxy_manager[proxy] = SOCKSProxyManager(
                proxy,
                username=username,
                password=password,
                num_pools=self._pool_connections,
                maxsize=self._pool_maxsize,
                block=self._pool_block,
                **proxy_kwargs
            )
        else:
            proxy_headers = self.proxy_headers(proxy)
            manager = self.proxy_manager[proxy] = proxy_from_url(
                proxy,
                proxy_headers=proxy_headers,
                num_pools=self._pool_connections,
                maxsize=self._pool_maxsize,
                block=self._pool_block,
                **proxy_kwargs)
    
    # ---------
# Specifics
# ---------
    
    
def default_hooks():
    return {event: [] for event in HOOKS}
    
            ('http://u:p@other.host/path', 'http://http.proxy', mixed_proxies),
        ('http://u:p@some.host/path', 'http://some.host.proxy', mixed_proxies),
        ('https://u:p@other.host/path', 'socks5://http.proxy', mixed_proxies),
        ('https://u:p@some.host/path', 'socks5://http.proxy', mixed_proxies),
        ('https://', 'socks5://http.proxy', mixed_proxies),
        # XXX: unsure whether this is reasonable behavior
        ('file:///etc/motd', 'socks5://http.proxy', all_proxies),
    ))
def test_select_proxies(url, expected, proxies):
    '''Make sure we can select per-host proxies correctly.'''
    assert select_proxy(url, proxies) == expected
    
            cookie_header = get_cookie_header(self._cookies, self)
        if cookie_header is not None:
            self.headers['Cookie'] = cookie_header
    
        module.exit_json(**cwe_rule_manager.fetch_aws_state())
    
        # Retrieve any AWS settings from the environment.
    region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    if not region:
        module.fail_json(msg=str('Either region or AWS_REGION or EC2_REGION environment variable or boto config aws_region or ec2_region must be set.'))
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
            if add_processes:
            monitoring_policy = _add_processes(module,
                                               oneandone_conn,
                                               monitoring_policy['id'],
                                               add_processes)
            _check_mode(module, monitoring_policy)
            changed = True
    
    DOCUMENTATION = '''
---
module: vca_nat
short_description: add remove nat rules in a gateway  in a vca
description:
  - Adds or removes nat rules from a gateway in a vca environment
version_added: '2.0'
author: Peter Sprygada (@privateip)
options:
    purge_rules:
      description:
        - If set to true, it will delete all rules in the gateway that are not given as parameter to this module.
      type: bool
      default: false
    nat_rules:
      description:
        - A list of rules to be added to the gateway, Please see examples on valid entries
      required: True
      default: false
extends_documentation_fragment: vca.documentation
'''
    
    
def check(schema_facts, schema, usage_roles, create_roles, owner):
    schema_key = schema.lower()
    if schema_key not in schema_facts:
        return False
    if owner and owner.lower() == schema_facts[schema_key]['owner'].lower():
        return False
    if sorted(usage_roles) != sorted(schema_facts[schema_key]['usage_roles']):
        return False
    if sorted(create_roles) != sorted(schema_facts[schema_key]['create_roles']):
        return False
    return True
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        elif state == 'restarted':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('restart')
        if status in ['initializing', 'running'] or 'restart pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not restarted' % name, status=status)
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    # -- General configuration ------------------------------------------------
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.last_results = []
        host = config[CONF_HOST]
        self._url = 'http://{}/data/getConnectInfo.asp'.format(host)
        self._loginurl = 'http://{}/goform/login'.format(host)
    
            # Without a home_id, we fetched an URL where the mobile devices can be
        # found under the mobileDevices key.
        if 'mobileDevices' in tado_json:
            tado_json = tado_json['mobileDevices']
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_USERNAME, default='admin'): cv.string,
    vol.Required(CONF_PASSWORD): cv.string
})
    
        def dweet_event_listener(event):
        '''Listen for new messages on the bus and sends them to Dweet.io.'''
        state = event.data.get('new_state')
        if state is None or state.state in (STATE_UNKNOWN, '') \
                or state.entity_id not in whitelist:
            return
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.All(cv.ensure_list, [{
        vol.Required(CONF_API_KEY): cv.string,
        vol.Optional(CONF_DEVICE_ID): cv.string,
        vol.Optional(CONF_DEVICE_IDS): cv.string,
        vol.Optional(CONF_DEVICE_NAMES): cv.string,
        vol.Optional(CONF_NAME): cv.string
    }])
}, extra=vol.ALLOW_EXTRA)
    
    
def evaluate_masks(
    json_dataset,
    all_boxes,
    all_segms,
    output_dir,
    use_salt=True,
    cleanup=False
):
    if cfg.CLUSTER.ON_CLUSTER:
        # On the cluster avoid saving these files in the job directory
        output_dir = '/tmp'
    res_file = os.path.join(
        output_dir, 'segmentations_' + json_dataset.name + '_results')
    if use_salt:
        res_file += '_{}'.format(str(uuid.uuid4()))
    res_file += '.json'
    
    
def cityscapes_to_coco_all_random(cityscapes_id):
    lookup = {
        0: -1,  # ... background
        1: -1,  # bicycle
        2: -1,  # car
        3: -1,  # person (ignore)
        4: -1,  # train
        5: -1,  # truck
        6: -1,  # motorcycle
        7: -1,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]

    
    
def _generate_anchors(base_size, scales, aspect_ratios):
    '''Generate anchor (reference) windows by enumerating aspect ratios X
    scales wrt a reference (0, 0, base_size - 1, base_size - 1) window.
    '''
    anchor = np.array([1, 1, base_size, base_size], dtype=np.float) - 1
    anchors = _ratio_enum(anchor, aspect_ratios)
    anchors = np.vstack(
        [_scale_enum(anchors[i, :], scales) for i in range(anchors.shape[0])]
    )
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
    
    
_RENAME = {
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up4convs':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up4convs',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0upshare':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0upshare',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0up',
    # Removed head_builder module in favor of the more specific fast_rcnn name
    'head_builder.add_roi_2mlp_head':
        'fast_rcnn_heads.add_roi_2mlp_head',
}