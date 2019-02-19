
        
            y_train = np.reshape(y_train, (len(y_train), 1))
    y_test = np.reshape(y_test, (len(y_test), 1))
    
    
def test_preprocess_input_symbolic():
    # Test image batch
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    inputs = Input(shape=x.shape[1:])
    outputs = Lambda(utils.preprocess_input, output_shape=x.shape[1:])(inputs)
    model = Model(inputs, outputs)
    assert model.predict(x).shape == x.shape
    
    
def create_model(kernel_regularizer=None, activity_regularizer=None):
    model = Sequential()
    model.add(Dense(num_classes,
                    kernel_regularizer=kernel_regularizer,
                    activity_regularizer=activity_regularizer,
                    input_shape=(data_dim,)))
    return model
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    
if __name__ == '__main__':
    main()

    
    author: 'Will Thames (@willthames)'
extends_documentation_fragment:
    - aws
    - ec2
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
    
    
def get_server_certs(iam, name=None):
    '''Retrieve the attributes of a server certificate if it exists or all certs.
    Args:
        iam (botocore.client.IAM): The boto3 iam instance.
    
            cmd = [le_path, 'follow', log]
        if name:
            cmd.extend(['--name', name])
        if logtype:
            cmd.extend(['--type', logtype])
        rc, out, err = module.run_command(' '.join(cmd))
    
            running_status = get_status()
        while running_status == '' or 'pending' in running_status or 'initializing' in running_status:
            if time.time() >= timeout_time:
                module.fail_json(
                    msg='waited too long for 'pending', or 'initiating' status to go away ({0})'.format(
                        running_status
                    ),
                    state=state
                )
    
        xml = '''<?xml version='1.0' encoding='UTF-8'?>
        <rs:model-request throttlesize='5'
        xmlns:rs='http://www.ca.com/spectrum/restful/schema/request'
        xmlns:xsi='http://www.w3.org/2001/XMLSchema-instance'
        xsi:schemaLocation='http://www.ca.com/spectrum/restful/schema/request ../../../xsd/Request.xsd'>
            <rs:target-models>
            <rs:models-search>
                <rs:search-criteria xmlns='http://www.ca.com/spectrum/restful/schema/filter'>
                    <action-models>
                        <filtered-models>
                            <and>
                                <equals>
                                    <model-type>SearchManager</model-type>
                                </equals>
                                <greater-than>
                                    <attribute id='0x129fa'>
                                        <value>{mh_min}</value>
                                    </attribute>
                                </greater-than>
                                <less-than>
                                    <attribute id='0x129fa'>
                                        <value>{mh_max}</value>
                                    </attribute>
                                </less-than>
                            </and>
                        </filtered-models>
                        <action>FIND_DEV_MODELS_BY_IP</action>
                        <attribute id='AttributeID.NETWORK_ADDRESS'>
                            <value>{search_ip}</value>
                        </attribute>
                    </action-models>
                </rs:search-criteria>
            </rs:models-search>
            </rs:target-models>
            <rs:requested-attribute id='0x12d7f' /> <!--Network Address-->
        </rs:model-request>
        '''.format(search_ip=device_ip, mh_min=landscape_min, mh_max=landscape_max)
    
    - stackdriver:
    key: AAAAAA
    event: annotation
    msg: Greetings from Ansible
    annotated_by: leeroyjenkins
    level: WARN
    instance_id: i-abcd1234
'''
    
        def _Assert(self, t):
        self.fill('assert ')
        self.dispatch(t.test)
        if t.msg:
            self.write(', ')
            self.dispatch(t.msg)
    
            When used for the functional API:
    
        def test_unbuffered_output(self):
        # Test expected operation of the '-u' switch
        for stream in ('stdout', 'stderr'):
            # Binary is unbuffered
            code = ('import os, sys; sys.%s.buffer.write(b'x'); os._exit(0)'
                % stream)
            rc, out, err = assert_python_ok('-u', '-c', code)
            data = err if stream == 'stderr' else out
            self.assertEqual(data, b'x', 'binary %s not unbuffered' % stream)
            # Text is unbuffered
            code = ('import os, sys; sys.%s.write('x'); os._exit(0)'
                % stream)
            rc, out, err = assert_python_ok('-u', '-c', code)
            data = err if stream == 'stderr' else out
            self.assertEqual(data, b'x', 'text %s not unbuffered' % stream)
    
    # Simple class representing a record in our database.
MemoRecord = namedtuple('MemoRecord', 'key, task')
    
    '''Send the contents of a directory as a MIME message.'''
    
    from argparse import ArgumentParser
    
    def handlePoints(points):
    print('<ul>')
    for point in points:
        handlePoint(point)
    print('</ul>')
    
        f2 = manager.Foo2()
    f2.g()
    f2._h()
    assert not hasattr(f2, 'f')
    assert sorted(f2._exposed_) == sorted(['g', '_h'])
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
    import json
import re
    
    
site_info = 'coub.com'
download = coub_download
download_playlist = playlist_not_supported('coub')

    
            #type_, ext, size = url_info(url)
        #print_info(site_info, title, type_, size)
        #if not info_only:
            #download_urls([url], title, ext, total_size=None, output_dir=output_dir, merge=merge)
    
    dailymotion_embed_patterns = [ 'www\.dailymotion\.com/embed/video/(\w+)' ]
    
            for p in js_path:
            if 'mtool' in p or 'mcore' in p:
                js_text = get_content(p)
                hit = re.search(r'\(\'(.+?)\',(\d+),(\d+),\'(.+?)\'\.split\(\'\|\'\),\d+,\{\}\)', js_text)
    
            try:
            url = 'https://plus.google.com/' + r1(r'(photos/\d+/albums/\d+/\d+)\?authkey', html)
            html = get_html(url, faker=True)
            temp = re.findall(r'\[(\d+),\d+,\d+,'([^']+)'\]', html)
            temp = sorted(temp, key = lambda x : fmt_level[x[0]])
            urls = [unicodize(i[1]) for i in temp if i[0] == temp[0][0]]
            assert urls
            real_urls = urls # Look ma, there's really a video!
    
        print(' - Face locations: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_locate_faces.format(image), test_locate_faces)))
    print(' - Face landmarks: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_face_landmarks.format(image), test_face_landmarks)))
    print(' - Encode face (inc. landmarks): {:.4f}s ({:.2f} fps)'.format(*run_test(setup_encode_face.format(image), test_encode_face)))
    print(' - End-to-end: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_end_to_end.format(image), test_end_to_end)))
    print()

    
        # Make the eyebrows into a nightmare
    d.polygon(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 128))
    d.polygon(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 128))
    d.line(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 150), width=5)
    d.line(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 150), width=5)
    
    known_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
    
        :param css:  plain tuple representation of the rect in (top, right, bottom, left) order
    :param image_shape: numpy shape of the image array
    :return: a trimmed plain tuple representation of the rect in (top, right, bottom, left) order
    '''
    return max(css[0], 0), min(css[1], image_shape[1]), min(css[2], image_shape[0]), max(css[3], 0)
    
        # Limit to max_per_image detections **over all classes**
    if cfg.TEST.DETECTIONS_PER_IM > 0:
        image_scores = np.hstack(
            [cls_boxes[j][:, -1] for j in range(1, num_classes)]
        )
        if len(image_scores) > cfg.TEST.DETECTIONS_PER_IM:
            image_thresh = np.sort(image_scores)[-cfg.TEST.DETECTIONS_PER_IM]
            for j in range(1, num_classes):
                keep = np.where(cls_boxes[j][:, -1] >= image_thresh)[0]
                cls_boxes[j] = cls_boxes[j][keep, :]
    
        if P2only:
        # use only the finest level
        return blobs_fpn[-1], dim_fpn, spatial_scales_fpn[-1]
    else:
        # use all levels
        return blobs_fpn, dim_fpn, spatial_scales_fpn
    
    
def _scale_enum(anchor, scales):
    '''Enumerate a set of anchors for each scale wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    ws = w * scales
    hs = h * scales
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors

    
    def add_keypoint_outputs(model, blob_in, dim):
    '''Add Mask R-CNN keypoint specific outputs: keypoint heatmaps.'''
    # NxKxHxW
    upsample_heatmap = (cfg.KRCNN.UP_SCALE > 1)
    
    
def _build_forward_graph(model, single_gpu_build_func):
    '''Construct the forward graph on each GPU.'''
    all_loss_gradients = {}  # Will include loss gradients from all GPUs
    # Build the model on each GPU with correct name and device scoping
    for gpu_id in range(cfg.NUM_GPUS):
        with c2_utils.NamedCudaScope(gpu_id):
            all_loss_gradients.update(single_gpu_build_func(model))
    return all_loss_gradients
    
    
def add_fpn_retinanet_losses(model):
    loss_gradients = {}
    gradients, losses = [], []
    
        if cfg.MODEL.FASTER_RCNN:
        if model.train:
            # Add op that generates training labels for in-network RPN proposals
            model.GenerateProposalLabels(['rpn_rois', 'roidb', 'im_info'])
        else:
            # Alias rois to rpn_rois for inference
            model.net.Alias('rpn_rois', 'rois')
    
        shape = (sampled_fg_rois.shape[0] * cfg.KRCNN.NUM_KEYPOINTS, 1)
    heats = heats.reshape(shape)
    weights = weights.reshape(shape)
    
    
def add_mask_rcnn_blobs(blobs, sampled_boxes, roidb, im_scale, batch_idx):
    '''Add Mask R-CNN specific blobs to the input blob dictionary.'''
    # Prepare the mask targets by associating one gt mask to each training roi
    # that has a fg (non-bg) class label.
    M = cfg.MRCNN.RESOLUTION
    polys_gt_inds = np.where(
        (roidb['gt_classes'] > 0) & (roidb['is_crowd'] == 0)
    )[0]
    polys_gt = [roidb['segms'][i] for i in polys_gt_inds]
    boxes_from_polys = segm_utils.polys_to_boxes(polys_gt)
    fg_inds = np.where(blobs['labels_int32'] > 0)[0]
    roi_has_mask = blobs['labels_int32'].copy()
    roi_has_mask[roi_has_mask > 0] = 1
    
    
def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        '--num-batches', dest='num_batches',
        help='Number of minibatches to run',
        default=200, type=int)
    parser.add_argument(
        '--sleep', dest='sleep_time',
        help='Seconds sleep to emulate a network running',
        default=0.1, type=float)
    parser.add_argument(
        '--cfg', dest='cfg_file', help='optional config file', default=None,
        type=str)
    parser.add_argument(
        '--x-factor', dest='x_factor', help='simulates x-factor more GPUs',
        default=1, type=int)
    parser.add_argument(
        '--profiler', dest='profiler', help='profile minibatch load time',
        action='store_true')
    parser.add_argument(
        'opts', help='See detectron/core/config.py for all options', default=None,
        nargs=argparse.REMAINDER)
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)
    args = parser.parse_args()
    return args