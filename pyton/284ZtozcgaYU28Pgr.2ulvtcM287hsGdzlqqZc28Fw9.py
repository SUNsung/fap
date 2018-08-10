
        
                Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    
class ChunkedEncodingError(RequestException):
    '''The server declared chunked encoding but sent an invalid chunk.'''
    
            # Verify the client didn't respond to second challenge.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content == b''
    
    logging.getLogger(__name__).addHandler(NullHandler())
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    def kuwo_download_by_rid(rid, output_dir = '.', merge = True, info_only = False):
    html=get_content('http://player.kuwo.cn/webmusic/st/getNewMuiseByRid?rid=MUSIC_%s'%rid)
    title=match1(html,r'<name>(.*)</name>')
    #to get title
    #format =aac|mp3 ->to get aac format=mp3 ->to get mp3
    url=get_content('http://antiserver.kuwo.cn/anti.s?format=mp3&rid=MUSIC_%s&type=convert_url&response=url'%rid)
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir)
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
        #title
    title = ''
    profile_api = 'https://www.showroom-live.com/api/room/profile?room_id={room_id}'.format(room_id = room_id)
    html = loads(get_content(profile_api))
    try:
        title = html['main_name']
    except KeyError:
        title = 'Showroom_{room_id}'.format(room_id = room_id)
    
        def test_sales_manager_shall_not_talk_through_proxy_with_delay(cls):
        cls.ntp.busy = 'No'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        jim = Subscriber('jim', message_center)
    jim.subscribe('cartoon')
    jack = Subscriber('jack', message_center)
    jack.subscribe('music')
    gee = Subscriber('gee', message_center)
    gee.subscribe('movie')
    vani = Subscriber('vani', message_center)
    vani.subscribe('movie')
    vani.unsubscribe('movie')
    
    ###  OUTPUT ###
# Before subclassing:
# BaseRegisteredClass
# After subclassing:
# BaseRegisteredClass
# ClassRegistree

    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    ### OUTPUT ###
# renaming foo.txt to bar.txt
# renaming bar.txt to baz.txt
# renaming baz.txt to bar.txt
# renaming bar.txt to foo.txt

    
        def attach(self, observer):
        if observer not in self._observers:
            self._observers.append(observer)
    
        bn_tensors = []
    for (bn, scl) in zip(bn_layers[0::2], bn_layers[1::2]):
        assert bn.name[len('bn'):] == scl.name[len('scale'):], 'Pair mismatch'
        blob_out = 'res' + bn.name[len('bn'):] + '_bn'
        bn_mean = np.asarray(bn.blobs[0].data)
        bn_var = np.asarray(bn.blobs[1].data)
        scale = np.asarray(scl.blobs[0].data)
        bias = np.asarray(scl.blobs[1].data)
        std = np.sqrt(bn_var + 1e-5)
        new_scale = scale / std
        new_bias = bias - bn_mean * scale / std
        new_scale_tensor = _create_tensor(
            new_scale, bn.blobs[0].shape, blob_out + '_s'
        )
        new_bias_tensor = _create_tensor(
            new_bias, bn.blobs[0].shape, blob_out + '_b'
        )
        bn_tensors.extend([new_scale_tensor, new_bias_tensor])
    return bn_tensors
    
    from detectron.core.config import cfg
from detectron.datasets import task_evaluation
from detectron.datasets.json_dataset import JsonDataset
from detectron.modeling import model_builder
from detectron.utils.io import save_object
from detectron.utils.timer import Timer
import detectron.utils.blob as blob_utils
import detectron.utils.c2 as c2_utils
import detectron.utils.env as envu
import detectron.utils.net as nu
import detectron.utils.subprocess as subprocess_utils
    
    
def fpn_level_info_ResNet101_conv5():
    return FpnLevelInfo(
        blobs=('res5_2_sum', 'res4_22_sum', 'res3_3_sum', 'res2_2_sum'),
        dims=(2048, 1024, 512, 256),
        spatial_scales=(1. / 32., 1. / 16., 1. / 8., 1. / 4.)
    )
    
        if not model.train:  # == inference
        # Inference uses a cascade of box predictions, then mask predictions.
        # This requires separate nets for box and mask prediction.
        # So we extract the mask prediction net, store it as its own network,
        # then restore model.net to be the bbox-only network
        model.mask_net, blob_mask = c2_utils.SuffixNet(
            'mask_net', model.net, len(bbox_net.op), blob_mask
        )
        model.net._net = bbox_net
        loss_gradients = None
    else:
        loss_gradients = mask_rcnn_heads.add_mask_rcnn_losses(model, blob_mask)
    return loss_gradients
    
        # Generate canonical proposals from shifted anchors
    # Enumerate all shifted positions on the (H, W) grid
    fpn_max_size = cfg.FPN.COARSEST_STRIDE * np.ceil(
        cfg.TRAIN.MAX_SIZE / float(cfg.FPN.COARSEST_STRIDE)
    )
    field_size = int(np.ceil(fpn_max_size / float(stride)))
    shifts = np.arange(0, field_size) * stride
    shift_x, shift_y = np.meshgrid(shifts, shifts)
    shift_x = shift_x.ravel()
    shift_y = shift_y.ravel()
    shifts = np.vstack((shift_x, shift_y, shift_x, shift_y)).transpose()
    
        ind_kp = gt_inds[roidb['box_to_gt_ind_map']]
    within_box = _within_box(gt_keypoints[ind_kp, :, :], roidb['boxes'])
    vis_kp = gt_keypoints[ind_kp, 2, :] > 0
    is_visible = np.sum(np.logical_and(vis_kp, within_box), axis=1) > 0
    kp_fg_inds = np.where(
        np.logical_and(max_overlaps >= cfg.TRAIN.FG_THRESH, is_visible)
    )[0]
    
    
def get_minibatch(roidb):
    '''Given a roidb, construct a minibatch sampled from it.'''
    # We collect blobs from each image onto a list and then concat them into a
    # single tensor, hence we initialize each blob to an empty list
    blobs = {k: [] for k in get_minibatch_blob_names()}
    # Get the input image blob, formatted for caffe2
    im_blob, im_scales = _get_image_blob(roidb)
    blobs['data'] = im_blob
    if cfg.RPN.RPN_ON:
        # RPN-only or end-to-end Faster/Mask R-CNN
        valid = rpn_roi_data.add_rpn_blobs(blobs, im_scales, roidb)
    elif cfg.RETINANET.RETINANET_ON:
        im_width, im_height = im_blob.shape[3], im_blob.shape[2]
        # im_width, im_height corresponds to the network input: padded image
        # (if needed) width and height. We pass it as input and slice the data
        # accordingly so that we don't need to use SampleAsOp
        valid = retinanet_roi_data.add_retinanet_blobs(
            blobs, im_scales, roidb, im_width, im_height
        )
    else:
        # Fast R-CNN like models trained on precomputed proposals
        valid = fast_rcnn_roi_data.add_fast_rcnn_blobs(blobs, im_scales, roidb)
    return blobs, valid
    
        def _run_speed_test(self, iters=5, N=1024):
        '''This function provides an example of how to benchmark custom
        operators using the Caffe2 'prof_dag' network execution type. Please
        note that for 'prof_dag' to work, Caffe2 must be compiled with profiling
        support using the `-DUSE_PROF=ON` option passed to `cmake` when building
        Caffe2.
        '''
        net = core.Net('test')
        net.Proto().type = 'prof_dag'
        net.Proto().num_workers = 2
        Y = net.BatchPermutation(['X', 'I'], 'Y')
        Y_flat = net.FlattenToVec([Y], 'Y_flat')
        loss = net.AveragedLoss([Y_flat], 'loss')
        net.AddGradientOperators([loss])
        workspace.CreateNet(net)
    
    import detectron.utils.boxes as box_utils