
        
            addresses = camel_dict_to_snake_dict(response)['addresses']
    for address in addresses:
        if 'tags' in address:
            address['tags'] = boto3_tag_list_to_ansible_dict(address['tags'])
    return addresses
    
    # Snapshot of volume mounted on device_name attached to instance_id
- ec2_snapshot:
    instance_id: i-12345678
    device_name: /dev/sdb1
    description: snapshot of /data from DB123 taken 2013/11/28 12:18:32
    
        if not HAS_BOTO3:
        module.fail_json(msg='boto3 required for this module')
    
    - heroku_collaborator:
    api_key: YOUR_API_KEY
    user: '{{ item.user }}'
    apps: '{{ item.apps | default(apps) }}'
    suppress_invitation: '{{ item.suppress_invitation | default(suppress_invitation) }}'
    state: '{{ item.state | default('present') }}'
  with_items:
    - { user: 'a.b@example.com' }
    - { state: 'absent', user: 'b.c@example.com', suppress_invitation: false }
    - { user: 'x.y@example.com', apps: ['heroku-example-app'] }
'''
    
    
def _detach_monitoring_policy_server(module, oneandone_conn, monitoring_policy_id, server_id):
    '''
    Detaches a server from a monitoring policy.
    '''
    try:
        if module.check_mode:
            mp_server = oneandone_conn.get_monitoring_policy_server(
                monitoring_policy_id=monitoring_policy_id,
                server_id=server_id)
            if mp_server:
                return True
            return False
    
            if host is not None:
            changed = client.modify_if_diff(name, ipa_hbacrule.get('memberhost_host', []), host,
                                            client.hbacrule_add_host,
                                            client.hbacrule_remove_host, 'host') or changed
    
        if removed_count > 0:
        module.exit_json(changed=True, msg='removed %d package(s)' % removed_count)
    
            self._not_tracked(())
        self._not_tracked((1,))
        self._not_tracked((1, 2))
        self._not_tracked((1, 2, 'a'))
        self._not_tracked((1, 2, (None, True, False, ()), int))
        self._not_tracked((object(),))
        self._not_tracked(((1, x), y, (2, 3)))
    
        def __pos__(self):
        'Adds an empty counter, effectively stripping negative and zero counts'
        result = Counter()
        for elem, count in self.items():
            if count > 0:
                result[elem] = count
        return result
    
    # Same, but for 3.x to 2.x
REVERSE_IMPORT_MAPPING = dict((v, k) for (k, v) in IMPORT_MAPPING.items())
assert len(REVERSE_IMPORT_MAPPING) == len(IMPORT_MAPPING)
REVERSE_NAME_MAPPING = dict((v, k) for (k, v) in NAME_MAPPING.items())
assert len(REVERSE_NAME_MAPPING) == len(NAME_MAPPING)
    
        def test_matched_bom_and_cookie_second_line(self):
        lines = (
            b'\xef\xbb\xbf#! something\n',
            b'f# coding=utf-8\n',
            b'print(something)\n',
            b'do_something(else)\n'
        )
        encoding, consumed_lines = detect_encoding(self.get_readline(lines))
        self.assertEqual(encoding, 'utf-8-sig')
        self.assertEqual(consumed_lines,
                         [b'#! something\n', b'f# coding=utf-8\n'])
    
    
# Are two open files really referencing the same file?
# (Not necessarily the same file descriptor!)
def sameopenfile(fp1, fp2):
    '''Test whether two open file objects reference the same file'''
    s1 = os.fstat(fp1)
    s2 = os.fstat(fp2)
    return samestat(s1, s2)
    
    
def _check_location(package):
    if package.__spec__.origin is None or not package.__spec__.has_location:
        raise FileNotFoundError(f'Package has no location {package!r}')
    
        def testSeekPreStartMultiStream(self):
        self.createTempFile(streams=2)
        with BZ2File(self.filename) as bz2f:
            bz2f.seek(-150)
            self.assertEqual(bz2f.tell(), 0)
            self.assertEqual(bz2f.read(), self.TEXT * 2)
    
        counter = 1
    for part in msg.walk():
        # multipart/* are just containers
        if part.get_content_maintype() == 'multipart':
            continue
        # Applications should really sanitize the given filename so that an
        # email message can't be used to overwrite important files
        filename = part.get_filename()
        if not filename:
            ext = mimetypes.guess_extension(part.get_content_type())
            if not ext:
                # Use a generic bag-of-bits extension
                ext = '.bin'
            filename = 'part-%03d%s' % (counter, ext)
        counter += 1
        with open(os.path.join(args.directory, filename), 'wb') as fp:
            fp.write(part.get_payload(decode=True))
    
    PROJ_NAME = 'you-get'
PACKAGE_NAME = 'you_get'
    
    site_info = 'CKPlayer General'
download = ckplayer_download
download_playlist = playlist_not_supported('ckplayer')

    
        CNTV().download_by_vid(rid, **kwargs)
    
    __all__ = ['douban_download']
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
        # Combine the predicted soft masks
    if cfg.TEST.MASK_AUG.HEUR == 'SOFT_AVG':
        masks_c = np.mean(masks_ts, axis=0)
    elif cfg.TEST.MASK_AUG.HEUR == 'SOFT_MAX':
        masks_c = np.amax(masks_ts, axis=0)
    elif cfg.TEST.MASK_AUG.HEUR == 'LOGIT_AVG':
    
    
def datasets():
    '''Retrieve the list of available dataset names.'''
    return _DATASETS.keys()
    
    '''PASCAL VOC dataset evaluation interface.'''
    
        model.AddMetrics(['retnet_fg_num', 'retnet_bg_num'])
    # ==========================================================================
    # bbox regression loss - SelectSmoothL1Loss for multiple anchors at a location
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        suffix = 'fpn{}'.format(lvl)
        bbox_loss = model.net.SelectSmoothL1Loss(
            [
                'retnet_bbox_pred_' + suffix,
                'retnet_roi_bbox_targets_' + suffix,
                'retnet_roi_fg_bbox_locs_' + suffix, 'retnet_fg_num'
            ],
            'retnet_loss_bbox_' + suffix,
            beta=cfg.RETINANET.BBOX_REG_BETA,
            scale=model.GetLossScale() * cfg.RETINANET.BBOX_REG_WEIGHT
        )
        gradients.append(bbox_loss)
        losses.append('retnet_loss_bbox_' + suffix)
    
    def add_generic_rpn_outputs(model, blob_in, dim_in, spatial_scale_in):
    '''Add RPN outputs (objectness classification and bounding box regression)
    to an RPN model. Abstracts away the use of FPN.
    '''
    loss_gradients = None
    if cfg.FPN.FPN_ON:
        # Delegate to the FPN module
        FPN.add_fpn_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if cfg.MODEL.FASTER_RCNN:
            # CollectAndDistributeFpnRpnProposals also labels proposals when in
            # training mode
            model.CollectAndDistributeFpnRpnProposals()
        if model.train:
            loss_gradients = FPN.add_fpn_rpn_losses(model)
    else:
        # Not using FPN, add RPN to a single scale
        add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if model.train:
            loss_gradients = add_single_scale_rpn_losses(model)
    return loss_gradients
    
        roi_data_loader.register_sigint_handler()
    roi_data_loader.start(prefill=True)
    total_time = 0
    for i in range(opts.num_batches):
        start_t = time.time()
        for _ in range(opts.x_factor):
            workspace.RunNetOnce(net)
        total_time += (time.time() - start_t) / opts.x_factor
        logger.info(
            '{:d}/{:d}: Averge dequeue time: {:.3f}s  [{:d}/{:d}]'.format(
                i + 1, opts.num_batches, total_time / (i + 1),
                roi_data_loader._minibatch_queue.qsize(),
                cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE
            )
        )
        # Sleep to simulate the time taken by running a little network
        time.sleep(opts.sleep_time)
        # To inspect:
        # blobs = workspace.FetchBlobs(all_blobs)
        # from IPython import embed; embed()
    logger.info('Shutting down data loader...')
    roi_data_loader.shutdown()
    
        @classmethod
    def get_registry(cls):
        return dict(cls.REGISTRY)
    
    *TL;DR80
Provides singleton-like behavior sharing state between instances.
'''
    
    In other programming languages, a more complex arrangement is sometimes
necessary. In particular, you cannot have polymorphic behaviour in a constructor in C++ -
see https://stackoverflow.com/questions/1453131/how-can-i-get-polymorphic-behavior-in-a-c-constructor
- which means this Python technique will not work. The polymorphism
required has to be provided by an external, already constructed
instance of a different class.
    
        def unregister_object(self, name):
        '''Unregister an object'''
        del self._objects[name]
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
        def _check_mate_status(self):
        return 'check mate status'
    
        def get_product_information(self, product):
        product_info = self.business_logic.product_information(product)
        if product_info:
            print('PRODUCT INFORMATION:')
            print(
                'Name: {0}, Price: {1:.2f}, Quantity: {2:}'.format(
                    product.title(), product_info.get('price', 0), product_info.get('quantity', 0)
                )
            )
        else:
            print('That product '{0}' does not exist in the records'.format(product))
    
        # high-level i.e. Abstraction specific
    def scale(self, pct):
        self._radius *= pct
    
    
class CompositeGraphic(Graphic):
    def __init__(self):
        self.graphics = []
    
        def __iter__(self):
        for item in self.products:
            yield item
    
        def test_data_value_shall_be_changeable(cls):
        cls.sub.data = 20
        cls.assertEqual(cls.sub._data, 20)