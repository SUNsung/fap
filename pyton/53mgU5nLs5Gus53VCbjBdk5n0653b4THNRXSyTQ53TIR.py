
        
        if __name__ == '__main__':
    main()

    
    with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
            def print_skipping(reason):
            print('Skipping %s: %s' % (test_case['name'], reason))
        if not ie.working():
            print_skipping('IE marked as not _WORKING')
            return
    
    # You can now launch tensorboard with `tensorboard --logdir=./logs` on your
# command line and then go to http://localhost:6006/#projector to view the
# embeddings

    
        return (x_train, y_train), (x_test, y_test)

    
    
def create_model(kernel_regularizer=None, activity_regularizer=None):
    model = Sequential()
    model.add(Dense(num_classes,
                    kernel_regularizer=kernel_regularizer,
                    activity_regularizer=activity_regularizer,
                    input_shape=(data_dim,)))
    return model
    
    
def test_conv_input_length():
    assert conv_utils.conv_input_length(None, 7, 'same', 1) is None
    assert conv_utils.conv_input_length(112, 7, 'same', 1) == 112
    assert conv_utils.conv_input_length(112, 7, 'same', 2) == 223
    assert conv_utils.conv_input_length(28, 5, 'valid', 1) == 32
    assert conv_utils.conv_input_length(14, 5, 'valid', 2) == 31
    assert conv_utils.conv_input_length(36, 5, 'full', 1) == 32
    assert conv_utils.conv_input_length(18, 5, 'full', 2) == 31
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
    import pytest
    
                return self.server_sock.accept()[0]
        except (select.error, socket.error):
            return None
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
    This module provides the capabilities for the Requests hooks system.
    
        @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
            # Test for int
        with pytest.raises(InvalidHeader) as excinfo:
            r = requests.get(httpbin('get'), headers=headers_int)
        assert 'foo' in str(excinfo.value)
        # Test for dict
        with pytest.raises(InvalidHeader) as excinfo:
            r = requests.get(httpbin('get'), headers=headers_dict)
        assert 'bar' in str(excinfo.value)
        # Test for list
        with pytest.raises(InvalidHeader) as excinfo:
            r = requests.get(httpbin('get'), headers=headers_list)
        assert 'baz' in str(excinfo.value)
    
        def _reset_stats(self):
        self.tail.clear()
        self.start = self.lastmark = self.lasttime = time()
    
        def syntax(self):
        '''
        Command syntax (preferably one-line). Do not include command name.
        '''
        return ''
    
        def syntax(self):
        return '[options] <spider>'
    
        def syntax(self):
        return '[options] <spider_file>'
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
        class _v19_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, method, bucket, key, headers, *args, **kwargs):
            return headers
    
        def test_unassigned_dict(self):
        self.assertEqual(self.b.__dict__, {})
    
    # Same, but for 3.x to 2.x
REVERSE_IMPORT_MAPPING = dict((v, k) for (k, v) in IMPORT_MAPPING.items())
assert len(REVERSE_IMPORT_MAPPING) == len(IMPORT_MAPPING)
REVERSE_NAME_MAPPING = dict((v, k) for (k, v) in NAME_MAPPING.items())
assert len(REVERSE_NAME_MAPPING) == len(NAME_MAPPING)
    
        @classmethod
    def setUpClass(cls):
        requires('gui')
        cls.root = Tk()
        cls.root.withdraw()
        cls.dialog = About(cls.root, _utest=True)
    
    def handleSlide(slide):
    handleSlideTitle(slide.getElementsByTagName('title')[0])
    handlePoints(slide.getElementsByTagName('point'))
    
            print('Ordered results using pool.imap():')
        for x in imap_it:
            print('\t', x)
        print()
    
        # Tell child processes to stop
    for i in range(NUMBER_OF_PROCESSES):
        task_queue.put('STOP')
    
    if os.path.exists(DB_FILE):
    os.remove(DB_FILE)
    
    
def voc_info(json_dataset):
    year = json_dataset.name[4:8]
    image_set = json_dataset.name[9:]
    devkit_path = get_devkit_dir(json_dataset.name)
    assert os.path.exists(devkit_path), \
        'Devkit directory {} not found'.format(devkit_path)
    anno_path = os.path.join(
        devkit_path, 'VOC' + year, 'Annotations', '{:s}.xml')
    image_set_path = os.path.join(
        devkit_path, 'VOC' + year, 'ImageSets', 'Main', image_set + '.txt')
    return dict(
        year=year,
        image_set=image_set,
        devkit_path=devkit_path,
        anno_path=anno_path,
        image_set_path=image_set_path)

    
    def add_ResNet_roi_conv5_head_for_keypoints(
    model, blob_in, dim_in, spatial_scale
):
    '''Add a ResNet 'conv5' / 'stage5' head for Mask R-CNN keypoint prediction.
    '''
    model.RoIFeatureTransform(
        blob_in,
        '_[pose]_pool5',
        blob_rois='keypoint_rois',
        method=cfg.KRCNN.ROI_XFORM_METHOD,
        resolution=cfg.KRCNN.ROI_XFORM_RESOLUTION,
        sampling_ratio=cfg.KRCNN.ROI_XFORM_SAMPLING_RATIO,
        spatial_scale=spatial_scale
    )
    # Using the prefix '_[pose]_' to 'res5' enables initializing the head's
    # parameters using pretrained 'res5' parameters if given (see
    # utils.net.initialize_from_weights_file)
    s, dim_in = ResNet.add_stage(
        model,
        '_[pose]_res5',
        '_[pose]_pool5',
        3,
        dim_in,
        2048,
        512,
        cfg.KRCNN.DILATION,
        stride_init=int(cfg.KRCNN.ROI_XFORM_RESOLUTION / 7)
    )
    return s, 2048
    
    
def collect(inputs, is_training):
    cfg_key = 'TRAIN' if is_training else 'TEST'
    post_nms_topN = cfg[cfg_key].RPN_POST_NMS_TOP_N
    k_max = cfg.FPN.RPN_MAX_LEVEL
    k_min = cfg.FPN.RPN_MIN_LEVEL
    num_lvls = k_max - k_min + 1
    roi_inputs = inputs[:num_lvls]
    score_inputs = inputs[num_lvls:]
    if is_training:
        score_inputs = score_inputs[:-2]
    
        def _distribute_rois_over_fpn_levels(rois_blob_name):
        '''Distribute rois over the different FPN levels.'''
        # Get target level for each roi
        # Recall blob rois are in (batch_idx, x1, y1, x2, y2) format, hence take
        # the box coordinates from columns 1:5
        target_lvls = fpn.map_rois_to_fpn_levels(
            blobs[rois_blob_name][:, 1:5], lvl_min, lvl_max
        )
        # Add per FPN level roi blobs named like: <rois_blob_name>_fpn<lvl>
        fpn.add_multilevel_roi_blobs(
            blobs, rois_blob_name, blobs[rois_blob_name], target_lvls, lvl_min,
            lvl_max
        )
    
        # Create a blob to hold the input images
    blob = blob_utils.im_list_to_blob(processed_ims)
    
        net = core.Net('dequeue_net')
    net.type = 'dag'
    all_blobs = []
    for gpu_id in range(cfg.NUM_GPUS):
        with core.NameScope('gpu_{}'.format(gpu_id)):
            with core.DeviceScope(muji.OnGPU(gpu_id)):
                for blob_name in blob_names:
                    blob = core.ScopedName(blob_name)
                    all_blobs.append(blob)
                    workspace.CreateBlob(blob)
                    logger.info('Creating blob: {}'.format(blob))
                net.DequeueBlobs(
                    roi_data_loader._blobs_queue_name, blob_names)
    logger.info('Protobuf:\n' + str(net.Proto()))
    
    
if __name__ == '__main__':
    workspace.GlobalInit(['caffe2', '--caffe2_log_level=0'])
    c2_utils.import_detectron_ops()
    assert 'BatchPermutation' in workspace.RegisteredOperators()
    logging_utils.setup_logging(__name__)
    unittest.main()
