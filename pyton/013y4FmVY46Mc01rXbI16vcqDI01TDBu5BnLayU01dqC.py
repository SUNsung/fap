
        
                if not any(os.path.isfile('%s/certutil' % x) for x in os.environ['PATH'].split(os.pathsep)):
            xlog.warn('please install *libnss3-tools* package to import GoAgent root ca')
            return False
    
            self.lock = threading.Lock()
    
    
    def substring(self, start, stop):
        '''
        For infinite streams, you don't need this; primarily I'm providing
        a useful interface for action code.  Just make sure actions don't
        use this on streams that don't support it.
        '''
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Return the result as json
    result = {
        'face_found_in_image': face_found,
        'is_picture_of_obama': is_obama
    }
    return jsonify(result)
    
        for face_location in face_locations:
        print_result(image_to_check, face_location)
    
    import face_recognition
import picamera
import numpy as np
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        raw_detections_batched = _raw_face_locations_batched(images, number_of_times_to_upsample, batch_size)
    
            # Hit 'q' on the keyboard to quit!
        if cv2.waitKey(1) & 0xFF == ord('q'):
            Global.is_exit = True
            break
    
    import face_recognition
from flask import Flask, jsonify, request, redirect
    
        author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]
    
    site_info = 'Dailymotion.com'
download = dailymotion_download
download_playlist = playlist_not_supported('dailymotion')

    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
        roidb = json_dataset.get_roidb()
    for i, entry in enumerate(roidb):
        im_name = entry['image']
    
    
# ---------------------------------------------------------------------------- #
# Box heads
# ---------------------------------------------------------------------------- #
    
    
def _ratio_enum(anchor, ratios):
    '''Enumerate a set of anchors for each aspect ratio wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    size = w * h
    size_ratios = size / ratios
    ws = np.round(np.sqrt(size_ratios))
    hs = np.round(ws * ratios)
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors
    
    
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
    
    
def get_fast_rcnn_blob_names(is_training=True):
    '''Fast R-CNN blob names.'''
    # rois blob: holds R regions of interest, each is a 5-tuple
    # (batch_idx, x1, y1, x2, y2) specifying an image batch index and a
    # rectangle (x1, y1, x2, y2)
    blob_names = ['rois']
    if is_training:
        # labels_int32 blob: R categorical labels in [0, ..., K] for K
        # foreground classes plus background
        blob_names += ['labels_int32']
    if is_training:
        # bbox_targets blob: R bounding-box regression targets with 4
        # targets per class
        blob_names += ['bbox_targets']
        # bbox_inside_weights blob: At most 4 targets per roi are active
        # this binary vector sepcifies the subset of active targets
        blob_names += ['bbox_inside_weights']
        blob_names += ['bbox_outside_weights']
    if is_training and cfg.MODEL.MASK_ON:
        # 'mask_rois': RoIs sampled for training the mask prediction branch.
        # Shape is (#masks, 5) in format (batch_idx, x1, y1, x2, y2).
        blob_names += ['mask_rois']
        # 'roi_has_mask': binary labels for the RoIs specified in 'rois'
        # indicating if each RoI has a mask or not. Note that in some cases
        # a *bg* RoI will have an all -1 (ignore) mask associated with it in
        # the case that no fg RoIs can be sampled. Shape is (batchsize).
        blob_names += ['roi_has_mask_int32']
        # 'masks_int32' holds binary masks for the RoIs specified in
        # 'mask_rois'. Shape is (#fg, M * M) where M is the ground truth
        # mask size.
        blob_names += ['masks_int32']
    if is_training and cfg.MODEL.KEYPOINTS_ON:
        # 'keypoint_rois': RoIs sampled for training the keypoint prediction
        # branch. Shape is (#instances, 5) in format (batch_idx, x1, y1, x2,
        # y2).
        blob_names += ['keypoint_rois']
        # 'keypoint_locations_int32': index of keypoint in
        # KRCNN.HEATMAP_SIZE**2 sized array. Shape is (#instances). Used in
        # SoftmaxWithLoss.
        blob_names += ['keypoint_locations_int32']
        # 'keypoint_weights': weight assigned to each target in
        # 'keypoint_locations_int32'. Shape is (#instances). Used in
        # SoftmaxWithLoss.
        blob_names += ['keypoint_weights']
        # 'keypoint_loss_normalizer': optional normalization factor to use if
        # cfg.KRCNN.NORMALIZE_BY_VISIBLE_KEYPOINTS is False.
        blob_names += ['keypoint_loss_normalizer']
    if cfg.FPN.FPN_ON and cfg.FPN.MULTILEVEL_ROIS:
        # Support for FPN multi-level rois without bbox reg isn't
        # implemented (... and may never be implemented)
        k_max = cfg.FPN.ROI_MAX_LEVEL
        k_min = cfg.FPN.ROI_MIN_LEVEL
        # Same format as rois blob, but one per FPN level
        for lvl in range(k_min, k_max + 1):
            blob_names += ['rois_fpn' + str(lvl)]
        blob_names += ['rois_idx_restore_int32']
        if is_training:
            if cfg.MODEL.MASK_ON:
                for lvl in range(k_min, k_max + 1):
                    blob_names += ['mask_rois_fpn' + str(lvl)]
                blob_names += ['mask_rois_idx_restore_int32']
            if cfg.MODEL.KEYPOINTS_ON:
                for lvl in range(k_min, k_max + 1):
                    blob_names += ['keypoint_rois_fpn' + str(lvl)]
                blob_names += ['keypoint_rois_idx_restore_int32']
    return blob_names
    
        # Create a blob to hold the input images
    blob = blob_utils.im_list_to_blob(processed_ims)
    
        retnet_roi_fg_bbox_locs -> for the bbox regression, since we are only
                               interested in regressing on fg bboxes which are
                               M in number and the output prediction of the network
                               is of shape N x (A * 4) x H x W
                               (in case of non class-specific bbox), so we
                               store the locations of positive fg boxes in this
                               blob retnet_roi_fg_bbox_locs of shape M x 4 where
                               each row looks like: [img_id, anchor_id, x_loc, y_loc]
    '''
    # im_info: (height, width, image scale)
    blob_names = ['im_info']
    assert cfg.FPN.FPN_ON, 'RetinaNet uses FPN for dense detection'
    # Same format as RPN blobs, but one per FPN level
    if is_training:
        blob_names += ['retnet_fg_num', 'retnet_bg_num']
        for lvl in range(cfg.FPN.RPN_MIN_LEVEL, cfg.FPN.RPN_MAX_LEVEL + 1):
            suffix = 'fpn{}'.format(lvl)
            blob_names += [
                'retnet_cls_labels_' + suffix,
                'retnet_roi_bbox_targets_' + suffix,
                'retnet_roi_fg_bbox_locs_' + suffix,
            ]
    return blob_names
    
      current_buffer = VimBuffer( 'buffer',
                              contents = [ 'te' ],
                              filetype = FILETYPE,
                              omnifunc = Omnifunc )
    
            vimsupport.ReplaceChunks(
          self._response[ 'fixits' ][ fixit_index ][ 'chunks' ],
          silent = self._command == 'Format' )
      except RuntimeError as e:
        vimsupport.PostVimMessage( str( e ) )
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    self._response = self.PostDataToHandler( request_data,
                                             'debug_info',
                                             display_message = False )
    
        if self._response_future is None:
      # First poll
      self._SendRequest()
      return True
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
            Schedules the callable to be executed as fn(*args, **kwargs) and returns
        a Future instance representing the execution of the callable.
    
        Here `srv` is the user under which the cheat.sh server was running
    '''
    
    import sys
import os
from .git_adapter import GitRepositoryAdapter
    
        def _get_page(self, topic, request_options=None):
        '''
        Go through pages/{common,linux,osx,sunos,windows}/
        and as soon as anything is found, format and return it.
        '''
    
        def test_tls_client_and_ca_explicit(self):
        options = {
            '--tlscert': self.client_cert, '--tlskey': self.key,
            '--tlsverify': True, '--tlscacert': self.ca_cert,
            '--tls': True
        }
        result = tls_config_from_options(options)
        assert isinstance(result, docker.tls.TLSConfig)
        assert result.cert == (options['--tlscert'], options['--tlskey'])
        assert result.ca_cert == options['--tlscacert']
        assert result.verify is True
    
            assert 'option 'com.docker.network.driver.foo' has changed' in str(e.value)
    
            if item.is_stop and not cascade_stop:
            continue
    
    
VERSION_EXPLANATION = (
    'You might be seeing this error because you\'re using the wrong Compose file version. '
    'Either specify a supported version (e.g '2.2' or '3.3') and place '
    'your service definitions under the `services` key, or omit the `version` key '
    'and place your service definitions at the root of the file to use '
    'version 1.\nFor more on the Compose file format versions, see '
    'https://docs.docker.com/compose/compose-file/')