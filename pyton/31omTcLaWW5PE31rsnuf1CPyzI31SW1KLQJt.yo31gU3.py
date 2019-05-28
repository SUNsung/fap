
        
        RETURN = '''
response_metadata:
  description: response metadata about the snapshot
  returned: always
  type: dict
  sample:
    http_headers:
      content-length: 1490
      content-type: text/xml
      date: Tue, 07 Feb 2017 16:43:04 GMT
      x-amzn-requestid: 7f436dea-ed54-11e6-a04c-ab2372a1f14d
    http_status_code: 200
    request_id: 7f436dea-ed54-11e6-a04c-ab2372a1f14d
    retry_attempts: 0
snapshot:
  description: snapshot data
  returned: always
  type: dict
  sample:
    auto_minor_version_upgrade: true
    cache_cluster_create_time: 2017-02-01T17:43:58.261000+00:00
    cache_cluster_id: test-please-delete
    cache_node_type: cache.m1.small
    cache_parameter_group_name: default.redis3.2
    cache_subnet_group_name: default
    engine: redis
    engine_version: 3.2.4
    node_snapshots:
      cache_node_create_time: 2017-02-01T17:43:58.261000+00:00
      cache_node_id: 0001
      cache_size:
    num_cache_nodes: 1
    port: 11211
    preferred_availability_zone: us-east-1d
    preferred_maintenance_window: wed:03:00-wed:04:00
    snapshot_name: deletesnapshot
    snapshot_retention_limit: 0
    snapshot_source: manual
    snapshot_status: creating
    snapshot_window: 10:00-11:00
    vpc_id: vpc-c248fda4
changed:
  description: if a snapshot has been created, deleted, or copied
  returned: always
  type: bool
  sample:
    changed: true
'''
    
    EXAMPLES = '''
# Add or change a subnet group
- elasticache_subnet_group:
    state: present
    name: norwegian-blue
    description: My Fancy Ex Parrot Subnet Group
    subnets:
      - subnet-aaaaaaaa
      - subnet-bbbbbbbb
    
        Basic Usage:
        >>> import boto3
        >>> iam = boto3.client('iam')
        >>> name = 'server-cert-name'
        >>> results = get_server_certs(iam, name)
        {
            'upload_date': '2015-04-25T00:36:40+00:00',
            'server_certificate_id': 'ADWAJXWTZAXIPIMQHMJPO',
            'certificate_body': '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----',
            'server_certificate_name': 'server-cert-name',
            'expiration': '2017-06-15T12:00:00+00:00',
            'path': '/',
            'arn': 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
        }
    '''
    results = dict()
    try:
        if name:
            server_certs = [iam.get_server_certificate(ServerCertificateName=name)['ServerCertificate']]
        else:
            server_certs = iam.list_server_certificates()['ServerCertificateMetadataList']
    
            if module.check_mode:
            firewall_policy_id = get_firewall_policy(oneandone_conn, firewall_id)
            if (firewall_rules and firewall_policy_id):
                return True
            return False
    
    - hosts: localhost
  connection: local
  tasks:
   - vca_fw:
       instance_id: 'b15ff1e5-1024-4f55-889f-ea0209726282'
       vdc_name: 'benz_ansible'
       state: 'absent'
       fw_rules:
         - description: 'ben testing'
           source_ip: 'Any'
           dest_ip: 192.0.2.23
         - description: 'ben testing 2'
           source_ip: 192.0.2.50
           source_port: 'Any'
           dest_port: '22'
           dest_ip: 192.0.2.101
           is_enable: 'true'
           enable_logging: 'false'
           protocol: 'Tcp'
           policy: 'allow'
    
        changed = False
    if state in ['present', 'enabled', 'disabled']:
        if not ipa_hbacrule:
            changed = True
            if not module.check_mode:
                ipa_hbacrule = client.hbacrule_add(name=name, item=module_hbacrule)
        else:
            diff = get_hbcarule_diff(client, ipa_hbacrule, module_hbacrule)
            if len(diff) > 0:
                changed = True
                if not module.check_mode:
                    data = {}
                    for key in diff:
                        data[key] = module_hbacrule.get(key)
                    client.hbacrule_mod(name=name, item=data)
    
        if module.params['repo']:
        params['deploy[scm_repository]'] = module.params['repo']
    
    import traceback
    
    
DOCUMENTATION = '''
---
module: spectrum_device
short_description: Creates/deletes devices in CA Spectrum.
description:
   - This module allows you to create and delete devices in CA Spectrum U(https://www.ca.com/us/products/ca-spectrum.html).
   - Tested on CA Spectrum 9.4.2, 10.1.1 and 10.2.1
version_added: '2.6'
author: 'Renato Orgito (@orgito)'
options:
    device:
        aliases: [ host, name ]
        required: true
        description:
            - IP address of the device.
            - If a hostname is given, it will be resolved to the IP address.
    community:
        description:
            - SNMP community used for device discovery.
            - Required when C(state=present).
    landscape:
        required: true
        description:
            - Landscape handle of the SpectroServer to which add or remove the device.
    state:
        required: false
        description:
            - On C(present) creates the device when it does not exist.
            - On C(absent) removes the device when it exists.
        choices: ['present', 'absent']
        default: 'present'
    url:
        aliases: [ oneclick_url ]
        required: true
        description:
            - HTTP, HTTPS URL of the Oneclick server in the form (http|https)://host.domain[:port]
    url_username:
        aliases: [ oneclick_user ]
        required: true
        description:
            - Oneclick user name.
    url_password:
        aliases: [ oneclick_password ]
        required: true
        description:
            - Oneclick user password.
    use_proxy:
        required: false
        description:
            - if C(no), it will not use a proxy, even if one is defined in an environment
                variable on the target hosts.
        default: 'yes'
        type: bool
    validate_certs:
        required: false
        description:
            - If C(no), SSL certificates will not be validated. This should only be used
                on personally controlled sites using self-signed certificates.
        default: 'yes'
        type: bool
    agentport:
        required: false
        description:
            - UDP port used for SNMP discovery.
        default: 161
notes:
   -  The devices will be created inside the I(Universe) container of the specified landscape.
   -  All the operations will be performed only on the specified landscape.
'''
    
        @staticmethod
    def import_ca(certfile):
        xlog.debug('Importing CA')
        commonname = 'GoAgent XX-Net - GoAgent' #TODO: here should be GoAgent - XX-Net
        if sys.platform.startswith('win'):
            CertUtil.import_windows_ca(certfile)
        elif sys.platform == 'darwin':
            CertUtil.import_mac_ca(commonname, certfile)
        elif sys.platform.startswith('linux'):
            CertUtil.import_linux_ca(commonname, certfile)
            CertUtil.import_linux_firefox_ca(commonname, certfile)
            #CertUtil.import_ubuntu_system_ca(commonname, certfile) # we don't need install CA to system root, special user is enough
    
            return 'UnwantedTokenException(found=%s%s)' % (self.token.text, exp)
    __repr__ = __str__
    
        blobs: a dict mapping from blob name to numpy ndarray
    blob_prefix: name prefix to use for the FPN blobs
    rois: the source rois as a 2D numpy array of shape (N, 5) where each row is
      an roi and the columns encode (batch_idx, x1, y1, x2, y2)
    target_lvls: numpy array of shape (N, ) indicating which FPN level each roi
      in rois should be assigned to
    lvl_min: the finest (highest resolution) FPN level (e.g., 2)
    lvl_max: the coarest (lowest resolution) FPN level (e.g., 6)
    '''
    rois_idx_order = np.empty((0, ))
    rois_stacked = np.zeros((0, 5), dtype=np.float32)  # for assert
    for lvl in range(lvl_min, lvl_max + 1):
        idx_lvl = np.where(target_lvls == lvl)[0]
        blobs[blob_prefix + '_fpn' + str(lvl)] = rois[idx_lvl, :]
        rois_idx_order = np.concatenate((rois_idx_order, idx_lvl))
        rois_stacked = np.vstack(
            [rois_stacked, blobs[blob_prefix + '_fpn' + str(lvl)]]
        )
    rois_idx_restore = np.argsort(rois_idx_order).astype(np.int32, copy=False)
    blobs[blob_prefix + '_idx_restore_int32'] = rois_idx_restore
    # Sanity check that restore order is correct
    assert (rois_stacked[rois_idx_restore] == rois).all()
    
        current = roi_feat
    for i in range(cfg.FAST_RCNN.NUM_STACKED_CONVS):
        current = model.Conv(
            current, 'head_conv' + str(i + 1), dim_in, hidden_dim, 3,
            stride=1, pad=1,
            weight_init=('MSRAFill', {}),
            bias_init=('ConstantFill', {'value': 0.}),
            no_bias=0)
        current = model.Relu(current, current)
        dim_in = hidden_dim
    
        assert len(blobs_in) == k_max - k_min + 1
    bbox_feat_list = []
    cls_pred_dim = (
        model.num_classes if cfg.RETINANET.SOFTMAX else (model.num_classes - 1)
    )
    # unpacked bbox feature and add prediction layers
    bbox_regr_dim = (
        4 * (model.num_classes - 1) if cfg.RETINANET.CLASS_SPECIFIC_BBOX else 4
    )
    
    '''Construct minibatches for Mask R-CNN training when keypoints are enabled.
Handles the minibatch blobs that are specific to training Mask R-CNN for
keypoint detection. Other blobs that are generic to RPN or Fast/er R-CNN are
handled by their respecitive roi_data modules.
'''
    
        # See doc string in _run_speed_test
    # def test_perf(self):
    #     with core.DeviceScope(core.DeviceOption(caffe2_pb2.CUDA, 0)):
    #         self._run_speed_test()
    
    
def test_raw32():
    check_raw(5, 1 << 16)
    
    
@pytest.fixture
def three_group():
    return DataFrame({'A': ['foo', 'foo', 'foo',
                            'foo', 'bar', 'bar',
                            'bar', 'bar',
                            'foo', 'foo', 'foo'],
                      'B': ['one', 'one', 'one',
                            'two', 'one', 'one', 'one', 'two',
                            'two', 'two', 'one'],
                      'C': ['dull', 'dull', 'shiny',
                            'dull', 'dull', 'shiny', 'shiny',
                            'dull', 'shiny', 'shiny', 'shiny'],
                      'D': np.random.randn(11),
                      'E': np.random.randn(11),
                      'F': np.random.randn(11)})

    
    
@pytest.mark.slow
@pytest.mark.parametrize('df, keys, bins, n, m', binned, ids=ids)
def test_series_groupby_value_counts(df, keys, bins, n, m):
    
    import pytest
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new
    
    
def _check_file(modify_times: Dict[str, float], path: str) -> None:
    try:
        modified = os.stat(path).st_mtime
    except Exception:
        return
    if path not in modify_times:
        modify_times[path] = modified
        return
    if modify_times[path] != modified:
        gen_log.info('%s modified; restarting server', path)
        _reload()
    
            If ``final`` is ``False``, parse callbacks will not be run.
        This is useful for applications that wish to combine configurations
        from multiple sources.
    
        def test_google_login(self):
        response = self.fetch('/client/login')
        self.assertDictEqual(
            {
                u'name': u'Foo',
                u'email': u'foo@example.com',
                u'access_token': u'fake-access-token',
            },
            json_decode(response.body),
        )
